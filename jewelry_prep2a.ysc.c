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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char cLocal_79[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 30;
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
	var uLocal_245 = 10;
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
	var uLocal_296 = 10;
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
	var uLocal_367 = 20;
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
	var uLocal_468 = 20;
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
	var uLocal_569 = 30;
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
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
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
	var uLocal_750 = 5;
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
	var uLocal_781 = 7;
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
	var uLocal_831 = 5;
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
	var uLocal_857 = 3;
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
	var uLocal_873 = 16;
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
	var uLocal_973 = 10;
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
	var uLocal_1024 = 5;
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
	var uLocal_1050 = 5;
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
	struct<8> Local_1079[2];
	int iLocal_1080 = 0;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 16;
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
	var uLocal_1272 = -1;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 1000;
	var uLocal_1280 = 1000;
	var uLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	int iLocal_1284 = 0;
	vector3 vLocal_1285 = { 0f, 0f, 0f };
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	int iLocal_1293 = 0;
	var uLocal_1294 = 0;
	struct<2> Local_1295 = { 0, 0 } ;
	int iLocal_1296 = 0;
	var uLocal_1297 = 0;
	struct<2> Local_1298[3];
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	float fLocal_1303 = 0f;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	vector3 vLocal_1309[24] = "";
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	bool bLocal_1320 = 0;
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
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_82 = joaat("s_m_m_armoured_01");
	iLocal_83 = joaat("boxville3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	vLocal_86 = { 0f, 0.175f, 0f };
	vLocal_87 = { 0f, -3.6f, 0f };
	iLocal_88 = 0;
	fLocal_1303 = 0f;
	iLocal_1318 = -1;
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_307(5);
	}
	SET_MISSION_FLAG(1);
	func_286();
	while (true)
	{
		_0x208784099002BC30("M_JewelStoreJobPrep2A", 0);
		if (bLocal_93)
		{
			func_284();
		}
		func_282(&uLocal_94);
		func_207();
		func_205();
		if (!bLocal_91)
		{
			func_201();
			func_200(&Local_1079);
			func_1();
		}
		SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_88)
	{
		case 0:
			if (func_23())
			{
				func_22(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	TRIGGER_MUSIC_EVENT("JHP2A_STOP");
	CLEAR_PRINTS();
	CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0, int iParam1)
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
		if ((func_6(0) && Global_76823.f_1 == 1) && func_5(Global_76823))
		{
		}
		else
		{
			Global_61471 = 1;
		}
	}
	if (Global_111560.f_9080 || func_6(0))
	{
		iVar0 = func_4();
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

int func_4()
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

int func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	
	SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 0);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), false);
	SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), false);
	if (func_21())
	{
		func_13(0);
	}
	iLocal_1305 = 0;
	Global_73894 = 0;
	if (bParam0)
	{
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
		Global_73894 = 0;
	}
	if (DOES_ENTITY_EXIST(iLocal_1293))
	{
		if (bParam0)
		{
			DELETE_VEHICLE(&iLocal_1293);
		}
		else
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1293);
		}
	}
	if (DOES_ENTITY_EXIST(vLocal_1285.x))
	{
		if (bParam0)
		{
			DELETE_PED(&vLocal_1285);
		}
		else
		{
			SET_PED_AS_NO_LONGER_NEEDED(&vLocal_1285);
		}
	}
	if (DOES_ENTITY_EXIST(Local_1295))
	{
		if (bParam0 && !IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			DELETE_VEHICLE(&Local_1295);
		}
		else
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1295);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1298)
	{
		if (DOES_ENTITY_EXIST(Local_1298[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				DELETE_OBJECT(&(Local_1298[iVar0 /*2*/]));
			}
			else
			{
				if (IS_ENTITY_ATTACHED(Local_1298[iVar0 /*2*/]))
				{
					DETACH_ENTITY(Local_1298[iVar0 /*2*/], 1, true);
				}
				SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1298[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (DOES_ENTITY_EXIST(iLocal_1299))
	{
		if (bParam0)
		{
			DELETE_OBJECT(&iLocal_1299);
		}
		else
		{
			if (IS_ENTITY_ATTACHED(iLocal_1299))
			{
				DETACH_ENTITY(iLocal_1299, 1, true);
			}
			SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1299);
		}
	}
	if (iLocal_1300 != 0)
	{
		REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1300, 0);
	}
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_briefcase"), 0))
		{
			REMOVE_WEAPON_FROM_PED(REMOVE_WEAPON_FROM_PED(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1270, 0, 0);
	func_10();
	if (HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_briefcase"), 0))
	{
		REMOVE_WEAPON_FROM_PED(REMOVE_WEAPON_FROM_PED(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		SET_BIT(&Global_30981, iParam0);
	}
	else
	{
		CLEAR_BIT(&Global_30981, iParam0);
	}
}

void func_10()
{
	Global_94554 = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)
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
		if (func_12(uParam0->f_3))
		{
			CLEAR_HELP(1);
		}
	}
	if (!IS_STRING_NULL(sVar0))
	{
		if (func_12(sVar0))
		{
			CLEAR_HELP(1);
		}
	}
}

int func_12(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_20();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_19(0))
		{
			func_14(0);
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

void func_14(int iParam0)
{
	if (func_18())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_17())
		{
			func_16(1, 1);
		}
		else
		{
			func_16(0, 0);
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
	if (!func_15())
	{
		Global_19486.f_1 = 3;
	}
}

int func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
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

bool func_17()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_18()
{
	return IS_BIT_SET(Global_1687880, 19);
}

int func_19(int iParam0)
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

void func_20()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_21()
{
	if (Global_19486.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_89 = 0;
		iLocal_90 = 0;
		iLocal_88 = iParam0;
	}
}

int func_23()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	vVar0 = { 692.8256f, -1012.544f, 21.722f };
	vVar1 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_90)
	{
		if (func_199(Local_1295))
		{
			if (GET_BLIP_FROM_ENTITY(Local_1295) != 0)
			{
				Local_1295.f_1 = GET_BLIP_FROM_ENTITY(Local_1295);
			}
			else
			{
				Local_1295.f_1 = func_198(Local_1295, 0, 0);
			}
			func_197("JHP2A_STEAL", 7500, 1);
			func_196("JHP2A_HLP2", 15000);
		}
		else if (GET_BLIP_FROM_ENTITY(Local_1295) != 0)
		{
			SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			iVar3 = GET_BLIP_FROM_ENTITY(Local_1295);
			REMOVE_BLIP(&iVar3);
			SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
		TRIGGER_MUSIC_EVENT("JHP2A_START");
		func_138(0f, 0f, 0f, 0f, 1, func_191());
		_0x293220DA1B46CEBC(5f, 5f, 4);
		iLocal_1313 = 0;
		iLocal_90 = 1;
		bLocal_1320 = true;
		iLocal_89 = 1;
	}
	if (iLocal_90)
	{
		func_137();
		switch (iLocal_89)
		{
			case 1:
				if ((((((iLocal_1282 == 0 && DOES_ENTITY_EXIST(Local_1295)) && DOES_ENTITY_EXIST(Local_1295, 0)) && DOES_ENTITY_EXIST(vLocal_1285.x)) && !DOES_ENTITY_EXIST(vLocal_1285.x)) && DOES_ENTITY_EXIST(vLocal_1285.x, Local_1295, 0)) && func_134(&(Local_1079[0 /*8*/])))
				{
					func_106(&uLocal_1270, Local_1295, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1270, 0, 0);
				}
				if (iLocal_1282 == 3 || iLocal_1282 == 2)
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					func_103(&iLocal_1080, 1, 0);
					if (IS_HELP_MESSAGE_BEING_DISPLAYED() && func_12("JHP2A_HLP2"))
					{
						CLEAR_HELP(1);
					}
					if (!iLocal_1313)
					{
						func_197("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_89 = 2;
				}
				else if ((DOES_ENTITY_EXIST(iLocal_1296) && DOES_ENTITY_EXIST(iLocal_1296, 0)) && DOES_ENTITY_EXIST(iLocal_1296, Local_1295))
				{
					if (DOES_BLIP_EXIST(Local_1295.f_1))
					{
						_0x293220DA1B46CEBC(5f, 5f, 4);
						SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						REMOVE_BLIP(&(Local_1295.f_1));
						SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
						func_102(705, 0);
					}
					func_101(&iLocal_1080, vVar0, 0.1f, 0.1f, 0.1f, 1, iLocal_1296, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (IS_ENTITY_IN_ANGLED_AREA(Local_1295, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						BRING_VEHICLE_TO_HALT(iLocal_1296, 5f, -1, 0);
						iLocal_89 = 101;
					}
				}
				else if (iLocal_1282 == 1)
				{
					func_103(&iLocal_1080, 1, 0);
					if (!DOES_BLIP_EXIST(Local_1298[0 /*2*/].f_1))
					{
						_0x293220DA1B46CEBC(5f, 5f, 4);
						Local_1298[0 /*2*/].f_1 = func_100(Local_1298[0 /*2*/]);
						func_197("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1313 = 1;
						SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
					}
				}
				else if (iLocal_1282 == 0)
				{
					if (DOES_BLIP_EXIST(Local_1295.f_1))
					{
						_0x293220DA1B46CEBC(5f, 5f, 4);
						SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						REMOVE_BLIP(&(Local_1295.f_1));
						SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
						func_102(705, 0);
					}
					if (func_98(&iLocal_1080, vVar0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1295, "JHP2A_RTNVAN", "", "", IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), Local_1295, 0), 0, 1, -1))
					{
						iLocal_89 = 101;
					}
					if (DOES_BLIP_EXIST(iLocal_1080) && DOES_BLIP_EXIST(iLocal_1080))
					{
						SET_BLIP_ROUTE(iLocal_1080, false);
					}
				}
				break;
			
			case 101:
				if (DOES_ENTITY_EXIST(Local_1295) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), Local_1295, 0))
				{
					iVar4 = Local_1295;
				}
				else if (DOES_ENTITY_EXIST(iLocal_1296) && DOES_ENTITY_EXIST(iLocal_1296, Local_1295))
				{
					iVar4 = iLocal_1296;
				}
				if (func_96(iVar4, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_89 = 1000;
					}
					else
					{
						_0x293220DA1B46CEBC(5f, 5f, 4);
						TASK_LEAVE_ANY_VEHICLE(TASK_LEAVE_ANY_VEHICLE(), 0, 0);
						iLocal_89++;
					}
				}
				break;
			
			case 102:
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
				{
					CLEAR_PRINTS();
					SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
					_0x2B6747FAA9DB9D6B(Local_1295, 1);
					if (DOES_ENTITY_EXIST(iLocal_1296))
					{
						BRING_VEHICLE_TO_HALT(iLocal_1296, 5f, 1, 0);
					}
					func_95(0, -1);
					if (DOES_ENTITY_EXIST(Local_1298[0 /*2*/]))
					{
						DELETE_OBJECT(&(Local_1298[0 /*2*/]));
					}
					if (DOES_ENTITY_EXIST(Local_1298[1 /*2*/]))
					{
						DELETE_OBJECT(&(Local_1298[1 /*2*/]));
					}
					if (DOES_ENTITY_EXIST(Local_1298[2 /*2*/]))
					{
						DELETE_OBJECT(&(Local_1298[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_briefcase"), 0))
				{
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (DOES_ENTITY_EXIST(Local_1298[iVar2 /*2*/]) && !DOES_ENTITY_EXIST(Local_1298[iVar2 /*2*/]))
						{
							if (DOES_BLIP_EXIST(Local_1295.f_1))
							{
								SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
								REMOVE_BLIP(&(Local_1295.f_1));
								SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
							}
							if (!DOES_BLIP_EXIST(Local_1298[iVar2 /*2*/].f_1))
							{
								Local_1298[iVar2 /*2*/].f_1 = func_100(Local_1298[iVar2 /*2*/]);
							}
						}
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (DOES_ENTITY_EXIST(Local_1298[iVar2 /*2*/]) && !DOES_ENTITY_EXIST(Local_1298[iVar2 /*2*/]))
						{
							if (!HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_briefcase"), 0))
							{
								bVar5 = func_94(Local_1298[iVar2 /*2*/]);
								if ((bVar5 && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), IS_ENTITY_IN_ANGLED_AREA(Local_1295, 0f, -3f, -0.5f), IS_ENTITY_IN_ANGLED_AREA(Local_1295, 0f, -4.5f, 1f), 1.68f, 0, true, 1)) || (!bVar5 && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), IS_ENTITY_IN_ANGLED_AREA(Local_1298[iVar2 /*2*/], true), 0.75f, 0.75f, 4f, false, false, 1)))
								{
									GIVE_WEAPON_TO_PED(GIVE_WEAPON_TO_PED(), joaat("weapon_briefcase"), 1, false, false);
									DELETE_OBJECT(&(Local_1298[iVar2 /*2*/]));
									CLEAR_PRINTS();
									PLAY_SOUND_FRONTEND(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
								}
							}
						}
						iVar2++;
					}
				}
				else
				{
					func_102(705, 0);
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (DOES_BLIP_EXIST(Local_1298[iVar2 /*2*/].f_1))
						{
							REMOVE_BLIP(&(Local_1298[iVar2 /*2*/].f_1));
						}
						iVar2++;
					}
					func_48(&iLocal_1080, vVar1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar6, 1);
					if (IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, false, true, 0))
					{
						iVar8 = 1;
					}
					if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, true, 0))
					{
						bVar7 = true;
					}
					if (bVar7 || ((iVar8 && !IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1)) && bLocal_1320))
					{
						DISABLE_CONTROL_ACTION(0, 37, 1);
						DISABLE_CONTROL_ACTION(0, 44, 1);
						if (!func_21())
						{
							func_13(1);
						}
						if (!IS_PED_RUNNING_RAGDOLL_TASK(IS_PED_RUNNING_RAGDOLL_TASK()))
						{
							if (!IS_PED_IN_COVER(IS_PED_IN_COVER(), 0) && !func_19(0))
							{
								if (iVar6 != joaat("weapon_briefcase"))
								{
									SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_briefcase"), true);
								}
							}
						}
					}
					if (bVar7)
					{
						if (iVar6 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_47("JHP2A_HLP1");
							}
						}
						if (IS_CONTROL_JUST_PRESSED(0, 51) && iVar6 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								CLEAR_HELP(1);
							}
							iVar9 = GET_WEAPON_OBJECT_FROM_PED(GET_WEAPON_OBJECT_FROM_PED(), 1);
							ACTIVATE_PHYSICS(iVar9);
							_0x293220DA1B46CEBC(3f, 5f, 4);
							PLAY_SOUND_FROM_ENTITY(-1, "Drop_Case", iVar9, "JWL_PREP_2A_SOUNDS", false, 0);
							SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar9);
							SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
							REMOVE_WEAPON_FROM_PED(REMOVE_WEAPON_FROM_PED(), joaat("weapon_briefcase"));
							func_95(0, -1);
							func_46(706);
							func_103(&iLocal_1080, 1, 0);
							if (func_7(87))
							{
								if (func_21())
								{
									func_13(0);
								}
								iLocal_89 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_21())
						{
							func_13(0);
						}
						if (IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (func_12("JHP2A_HLP1"))
							{
								CLEAR_HELP(1);
							}
						}
					}
					bLocal_1320 = IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1);
				}
				break;
			
			case 1000:
				TASK_LEAVE_ANY_VEHICLE(TASK_LEAVE_ANY_VEHICLE(), 0, 0);
				SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), true);
				SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
				_0x2B6747FAA9DB9D6B(Local_1295, 1);
				func_45(1);
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_89++;
					}
				}
				break;
			
			case 1001:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_89++;
				}
				break;
			
			case 1002:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return 1;
				}
				break;
			
			case 2000:
				_0x293220DA1B46CEBC(5f, 5f, 4);
				SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), true);
				Global_73894 = 1;
				func_45(1);
				func_44(1, 0);
				iLocal_89++;
				break;
			
			case 2001:
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_89++;
					}
				}
				break;
			
			case 2002:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_89++;
				}
				break;
			
			case 2003:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_24()
{
	int iVar0;
	
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, false, false, false, false, false, 0, false);
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 157, true);
		SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_96068[iVar0]))
		{
			if (!IS_ENTITY_DEAD(Global_96068[iVar0], 0))
			{
				SET_ENTITY_PROOFS(Global_96068[iVar0], false, false, false, false, false, false, 0, false);
				SET_ENTITY_INVINCIBLE(Global_96068[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_41396 != 0 && Global_41396 != 3) && Global_41396 != 2)
	{
		SET_MAX_WANTED_LEVEL(5);
		SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

int func_25()
{
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_26(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_41(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_27(sParam3, iParam4, bParam8);
}

int func_27(char* sParam0, int iParam1, bool bParam2)
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
					func_40();
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
		if (func_39(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_38();
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
				func_36();
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
				if (func_35())
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
			if (func_15())
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
			func_34();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_33();
		func_28();
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
		func_40();
	}
	return 0;
}

void func_28()
{
	if (!func_29())
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

int func_29()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_32())
	{
		return 0;
	}
	if (func_30(PLAYER_ID()))
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

bool func_30(int iParam0)
{
	return func_31(iParam0, 20);
}

bool func_31(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_32()
{
	return -1;
}

void func_33()
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

void func_34()
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

int func_35()
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

void func_36()
{
	if (func_37(14))
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
		Global_19486 = func_191();
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

bool func_37(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_38()
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

bool func_39(int iParam0, int iParam1)
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

void func_40()
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

void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_42()
{
	if (func_43())
	{
		return 0;
	}
	if (IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

int func_43()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_44(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		DISABLE_CONTROL_ACTION(0, 21, 1);
	}
	DISABLE_CONTROL_ACTION(0, 25, 1);
	DISABLE_CONTROL_ACTION(0, 24, 1);
	DISABLE_CONTROL_ACTION(0, 257, 1);
	DISABLE_CONTROL_ACTION(0, 141, 1);
	DISABLE_CONTROL_ACTION(0, 140, 1);
	DISABLE_CONTROL_ACTION(0, 22, 1);
	DISABLE_CONTROL_ACTION(0, 44, 1);
	DISABLE_CONTROL_ACTION(0, 23, 1);
	DISABLE_CONTROL_ACTION(0, 47, 1);
	DISABLE_CONTROL_ACTION(0, 36, 1);
	if (bParam0)
	{
		DISABLE_CONTROL_ACTION(0, 37, 1);
	}
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (bParam1)
		{
			SET_PED_MAX_MOVE_BLEND_RATIO(SET_PED_MAX_MOVE_BLEND_RATIO(), 2f);
		}
		else
		{
			SET_PED_MAX_MOVE_BLEND_RATIO(SET_PED_MAX_MOVE_BLEND_RATIO(), 1f);
		}
		SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 102, true);
	}
	if (IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0))
	{
		CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
	}
}

void func_45(bool bParam0)
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), true, true, true, true, true, false, 0, false);
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 157, false);
		SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), true);
		SET_PED_STEALTH_MOVEMENT(SET_PED_STEALTH_MOVEMENT(), 0, 0);
		if (bParam0)
		{
			SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), false);
		}
		REMOVE_PED_HELMET(REMOVE_PED_HELMET(), 0);
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
	}
	SET_MAX_WANTED_LEVEL(0);
	SET_WANTED_LEVEL_MULTIPLIER(0f);
}

void func_46(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_61472 = 0;
	if (!Global_61696[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73566)
	{
		if (Global_73567[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73567[iVar1 /*9*/].f_1 = 1;
			Global_73567[iVar1 /*9*/].f_2 = 0f;
			if (Global_73567[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_47(char* sParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_48(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	return func_49(iParam0, vParam1, vParam2, func_93(), func_93(), bParam3, 3, 0, 0, 0, 0, sParam4, func_92(), func_92(), func_92(), func_92(), func_92(), 0, bParam5, func_92(), 0, 0, bParam6, iParam7, func_92(), func_92(), func_92(), bParam8, 1065353216);
}

int func_49(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_91(iParam0);
	func_90(iParam0);
	func_89();
	if (func_72(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_71(sParam12);
		func_71(sParam13);
		func_71(sParam14);
		func_71(sParam15);
		if (IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (IS_VEHICLE_DRIVEABLE(iParam10, 0))
			{
				if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iParam10, 0))
				{
					SET_BIT(&(iParam0->f_13), 3);
					if (!IS_BIT_SET(iParam0->f_13, 9))
					{
						CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (IS_BIT_SET(iParam0->f_13, 23))
					{
						CLEAR_BIT(&(iParam0->f_13), 23);
					}
					SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_69(iParam0, iParam21))
				{
					SET_BIT(&(iParam0->f_13), 3);
					if (!IS_BIT_SET(iParam0->f_13, 9))
					{
						CLEAR_BIT(&(iParam0->f_13), 4);
					}
					SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_71(sParam16);
				func_71(sParam19);
				func_71("MORE_SEATS");
				if (bParam18 && IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0))
				{
					if (DOES_BLIP_EXIST(iParam0->f_5))
					{
						REMOVE_BLIP(&(iParam0->f_5));
						func_71(sParam11);
					}
					if (DOES_BLIP_EXIST(*iParam0))
					{
						REMOVE_BLIP(iParam0);
					}
					if ((!func_66(iParam0, 1) && !func_65(iParam0)) && !IS_BIT_SET(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_64(iParam0, "LOSE_WANTED", 0);
							if (!IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						SET_BIT(&(iParam0->f_13), 0);
						CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(iParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						CLEAR_BIT(&(iParam0->f_13), 0);
						SET_BIT(&(iParam0->f_13), 1);
					}
					if (IS_BIT_SET(iParam0->f_13, 1))
					{
						if (!func_66(iParam0, 1))
						{
							if (!IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (DOES_BLIP_EXIST(*iParam0))
						{
							REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_61(vVar3, 0);
						if (!iParam23 == -1)
						{
							SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_60(iParam0->f_5, iParam0);
						}
					}
					else if (!func_59(vVar3, GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						SET_BLIP_COORDS(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_60(iParam0->f_5, iParam0);
						}
					}
					if (!func_66(iParam0, 2))
					{
						if (!IS_BIT_SET(iParam0->f_13, 2))
						{
							func_64(iParam0, sParam11, 0);
							SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (IS_BIT_SET(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
									if (!IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], func_58()) || !func_56(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_53(iParam0))
							{
								func_71(sParam11);
								func_71(sParam16);
								func_71(sParam12);
								func_71(sParam13);
								func_71(sParam14);
								func_71(sParam15);
								func_71("LOSE_WANTED");
								func_71("MORE_SEATS");
								func_71(sParam19);
								func_103(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0)) && (!IS_PLAYER_WANTED_LEVEL_GREATER(iParam0->f_13, 9) && !IS_PLAYER_WANTED_LEVEL_GREATER(iParam0->f_13, 22)))
				{
					func_71(sParam16);
					func_71(sParam19);
					if (DOES_BLIP_EXIST(iParam0->f_5) || DOES_BLIP_EXIST(*iParam0))
					{
						REMOVE_BLIP(&(iParam0->f_5));
						REMOVE_BLIP(iParam0);
						func_71(sParam11);
					}
					if ((!func_66(iParam0, 1) && !func_65(iParam0)) && !IS_BIT_SET(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_64(iParam0, "LOSE_WANTED", 0);
							if (!IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						SET_BIT(&(iParam0->f_13), 0);
						CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(iParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						CLEAR_BIT(&(iParam0->f_13), 0);
						SET_BIT(&(iParam0->f_13), 1);
					}
					if (IS_BIT_SET(iParam0->f_13, 1))
					{
						if (!func_66(iParam0, 1))
						{
							if (!IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!DOES_BLIP_EXIST(*iParam0))
						{
							if (DOES_BLIP_EXIST(iParam0->f_5))
							{
								REMOVE_BLIP(&(iParam0->f_5));
								func_71(sParam11);
							}
							*iParam0 = func_50(iParam10, 0, 0);
							SET_BLIP_DISPLAY(*iParam0, 2);
							if (!IS_BIT_SET(iParam0->f_13, 4))
							{
								func_60(*iParam0, iParam0);
							}
						}
						if (!func_66(iParam0, 2))
						{
							if (!IS_BIT_SET(iParam0->f_13, 3))
							{
								func_64(iParam0, sParam16, 0);
								SET_BIT(&(iParam0->f_13), 3);
								CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (IS_BIT_SET(iParam0->f_13, 9))
							{
								if (!IS_STRING_NULL(sParam19))
								{
									if (!IS_BIT_SET(iParam0->f_13, 4))
									{
										func_64(iParam0, sParam19, 0);
										SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!IS_BIT_SET(iParam0->f_13, 4))
								{
									func_64(iParam0, sParam16, 0);
									SET_BIT(&(iParam0->f_13), 4);
								}
								if (!IS_BIT_SET(iParam0->f_13, 23))
								{
									if (!IS_PED_INJURED(iParam0->f_17[0]))
									{
										func_62(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (DOES_BLIP_EXIST(iParam0->f_5))
				{
					REMOVE_BLIP(&(iParam0->f_5));
					func_71(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_66(iParam0, 2))
						{
							if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
							{
								if (!IS_BIT_SET(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!IS_PED_INJURED(iParam0->f_17[iVar7]))
									{
										func_62(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(iParam0, "MORE_SEATS", 0);
									SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!IS_BIT_SET(iParam0->f_13, 3))
							{
								func_64(iParam0, sParam16, 0);
								SET_BIT(&(iParam0->f_13), 3);
								CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!IS_BIT_SET(iParam0->f_13, 4))
							{
								if (IS_BIT_SET(iParam0->f_13, 9))
								{
									func_64(iParam0, sParam19, 0);
									SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_66(iParam0, 2))
					{
						if (!IS_BIT_SET(iParam0->f_13, 3))
						{
							func_64(iParam0, sParam16, 0);
							SET_BIT(&(iParam0->f_13), 3);
							CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (IS_BIT_SET(iParam0->f_13, 9))
						{
							if (!IS_STRING_NULL(sParam19))
							{
								if (!IS_BIT_SET(iParam0->f_13, 4))
								{
									func_64(iParam0, sParam19, 0);
									SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!IS_BIT_SET(iParam0->f_13, 4))
							{
								func_64(iParam0, sParam16, 0);
								SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (IS_BIT_SET(iParam0->f_13, 0))
		{
			CLEAR_BIT(&(iParam0->f_13), 0);
		}
		func_71(sParam11);
		func_71(sParam16);
		func_71(sParam19);
		func_71(sParam16);
		func_71("LOSE_WANTED");
		if (DOES_BLIP_EXIST(iParam0->f_5))
		{
			REMOVE_BLIP(&(iParam0->f_5));
		}
		if (DOES_BLIP_EXIST(*iParam0))
		{
			REMOVE_BLIP(iParam0);
		}
	}
	CLEAR_BIT(&(iParam0->f_13), 11);
	CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	return func_51(iParam0, !bParam1, bParam2);
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ADD_BLIP_FOR_ENTITY(iParam0);
	if (IS_ENTITY_A_VEHICLE(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_52(SET_BLIP_SCALE(), 1f, 1f));
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
		SET_BLIP_SCALE(iVar0, func_52(SET_BLIP_SCALE(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_52(SET_BLIP_SCALE(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_53(int iParam0)
{
	if (IS_BIT_SET(iParam0->f_13, 12))
	{
		if (func_55(PLAYER_PED_ID()))
		{
			if (func_54(1, 0, 1) || IS_BIT_SET(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_54(1, 0, 1) || IS_BIT_SET(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
		{
			return 0;
		}
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (bParam0)
		{
			if (IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!IS_ENTITY_DEAD(iVar0, 0))
			{
				if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != GET_PED_IN_VEHICLE_SEAT())
				{
					return 0;
				}
			}
		}
		if (!IS_ENTITY_DEAD(iVar0, 0))
		{
			if (GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE()))
	{
		return 0;
	}
	if (!CAN_PLAYER_START_MISSION(CAN_PLAYER_START_MISSION()))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	float fVar0;
	
	if (!IS_PED_INJURED(iParam0))
	{
		fVar0 = GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()) && iParam1)
		{
			if (func_57(PLAYER_PED_ID(), iParam0))
			{
				SET_GROUP_SEPARATION_RANGE(func_58(), 50f);
				return 1;
			}
		}
		else if (IS_PED_GROUP_MEMBER(iParam0, func_58()))
		{
			SET_GROUP_SEPARATION_RANGE(func_58(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!IS_PED_INJURED(iParam1))
				{
					if (IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_58()
{
	return GET_PLAYER_GROUP(GET_PLAYER_GROUP());
}

int func_59(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_60(int iParam0, int iParam1)
{
	if (DOES_BLIP_EXIST(iParam0))
	{
		if (DOES_BLIP_EXIST(iParam1->f_6))
		{
			SET_BLIP_ROUTE(iParam1->f_6, false);
		}
		_0x3DDA37128DD1ACA8(0);
		_0x67EEDEA1B9BAFD94();
		iParam1->f_6 = iParam0;
		SET_BLIP_ROUTE(iParam0, true);
	}
}

int func_61(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_SCALE(iVar0, func_52(SET_BLIP_SCALE(), 1f, 1f));
	SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_62(int iParam0, char* sParam1, int iParam2)
{
	_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_63(iParam2), 1);
}

int func_63(int iParam0)
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

void func_64(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!IS_STRING_NULL(sParam1))
		{
			if (!ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_197(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = GET_GAME_TIMER();
}

int func_65(int iParam0)
{
	if (!IS_PED_INJURED(iParam0->f_16))
	{
		if (IS_AMBIENT_SPEECH_PLAYING(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	if (iParam1 != 1 || IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_68(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_43() && !func_67())
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (func_70(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (DOES_ENTITY_EXIST(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!_0xF7F203E31F96F6A1(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!_0xF7F203E31F96F6A1(iParam0, 1))
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
	return 0;
}

void func_71(char* sParam0)
{
	if (!IS_STRING_NULL(sParam0))
	{
		CLEAR_THIS_PRINT(sParam0);
	}
}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0))
		{
			if (!IS_BIT_SET(uParam0->f_13, 29) && !IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!IS_BIT_SET(uParam0->f_13, 29) && IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (IS_BIT_SET(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = GET_CLOSEST_VEHICLE(GET_CLOSEST_VEHICLE(GET_CLOSEST_VEHICLE(), true), 50f, 0, iVar16);
			if (IS_VEHICLE_DRIVEABLE(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0))
		{
			if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), GET_ENTITY_COORDS(uParam0->f_21, true)) < 400f)
			{
				if (!IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
				{
					if (!IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0) || !bParam17)
					{
						if (func_70(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
									{
										REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470) == 7 && !func_88(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !IS_PED_RAGDOLL(uParam0->f_17[iVar0]))
										{
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!IS_BIT_SET(uParam0->f_13, 26))
	{
		if ((!func_85(uParam0) && IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE())) && !IS_PED_SITTING_IN_ANY_VEHICLE(iParam10))
		{
			iVar10 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (IS_VEHICLE_DRIVEABLE(iVar10, 0))
			{
				if (!IS_BIT_SET(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_66(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = GET_RANDOM_INT_IN_RANGE(0, iVar17);
						if (!IS_PED_INJURED(uParam0->f_17[iVar18]))
						{
							func_62(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
						SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			CLEAR_BIT(&(uParam0->f_13), 13);
			func_71("MORE_SEATS");
		}
		if (!DOES_ENTITY_EXIST(iParam10))
		{
			if ((!IS_PED_INJURED(uParam0->f_17[0]) || !IS_PED_INJURED(uParam0->f_17[1])) || !IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!IS_BIT_SET(uParam0->f_13, 31))
				{
					if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()) && !func_66(uParam0, 2))
					{
						iVar10 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
						if (func_84(iVar10, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
				{
					CLEAR_BIT(&(uParam0->f_13), 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (IS_VEHICLE_DRIVEABLE(iParam10, 0))
		{
			if (IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), iParam10))
			{
				if (IS_CONTROL_JUST_PRESSED(0, 75))
				{
					SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (IS_BIT_SET(uParam0->f_13, 21))
			{
				CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
					{
						SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
					}
					else
					{
						SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
					}
					if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
					{
						iVar10 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
						if (IS_VEHICLE_DRIVEABLE(iVar10, 0))
						{
							if (IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
							{
								if (!func_85(uParam0) && IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
								{
									if (!func_83(uParam0->f_17[iVar0]))
									{
										REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !IS_ENTITY_DEAD(iVar10, 0))
						{
							if (IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar10))
							{
								if (IS_ENTITY_IN_WATER(iVar10) && !IS_ENTITY_IN_WATER(iVar10))
								{
									vVar19 = { GET_ENTITY_COORDS(iVar10, true) };
									if (vVar19.z < -1f)
									{
										TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
					{
						if (IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar10 = GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
							if (!IS_ENTITY_DEAD(iVar10, 0))
							{
								if (IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), iVar10))
										{
											if (GET_ENTITY_SPEED(iVar10) > 5f)
											{
												TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
									{
										iVar20 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
									}
									if (IS_VEHICLE_DRIVEABLE(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (GET_ENTITY_SPEED(iVar10) > 5f)
											{
												TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
					{
						iVar21 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
						if (DOES_ENTITY_EXIST(iVar21))
						{
							if (func_70(iVar21, uParam0, 0))
							{
								if (func_82(iVar0, uParam0) || !IS_BIT_SET(uParam0->f_13, 27))
								{
									SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									func_81(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_82(iVar0, uParam0))
							{
								if (GET_ENTITY_MODEL(iVar21) == joaat("sentinel2"))
								{
									SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								func_80(iVar0, uParam0);
							}
						}
					}
					if ((!IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()) && !func_79(uParam0->f_17[iVar0], iParam10)) && !func_78(uParam0->f_17[iVar0], iParam10))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
							{
								if (((!IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !IS_PED_RAGDOLL(uParam0->f_17[iVar0]))
								{
									iVar11 = GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
								SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_60(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_56(uParam0->f_17[iVar0], 1) || func_79(uParam0->f_17[iVar0], iParam10)) || iParam12) || (IS_VEHICLE_DRIVEABLE(iParam10, 0) && !IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(), iParam10, 0)))
						{
							if (DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_71(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_60(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !IS_ENTITY_AT_ENTITY(uParam0->f_13, 11)) && !((bParam17 && IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), 0)) && !IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam10, 0)))
							{
								if (IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_56(uParam0->f_17[iVar0], 1))
										{
											if (func_55(uParam0->f_17[iVar0]))
											{
												iVar11 = GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
									{
										if ((((!IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !IS_PED_JUMPING_OUT_OF_VEHICLE(iParam10))
										{
											REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_88(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !IS_PED_JUMPING_OUT_OF_VEHICLE(IS_PED_JUMPING_OUT_OF_VEHICLE())) && !func_77(uParam0->f_17[iVar0], 2f)) && !IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !IS_PED_JUMPING_OUT_OF_VEHICLE(iParam10))
										{
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											if (IS_BIT_SET(uParam0->f_13, 10))
											{
												SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
										SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
							{
								if (func_86(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !IS_PED_RAGDOLL(uParam0->f_17[iVar0]))
									{
										iVar11 = GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], false);
										SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
									}
								}
							}
						}
						else if (IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), iParam10))
						{
							if (!IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()))
							{
								if (!IS_BIT_SET(uParam0->f_13, 21))
								{
									SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
								}
							}
							else if (IS_BIT_SET(uParam0->f_13, 21))
							{
								REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()) && !IS_PED_GROUP_MEMBER(iParam10))
						{
							REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_71(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_66(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (func_83(uParam0->f_17[iVar0]) || IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], IS_ENTITY_AT_ENTITY(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], IS_ENTITY_AT_ENTITY(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_83(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!IS_BIT_SET(uParam0->f_13, 5))
							{
								func_64(uParam0, sParam7, 0);
								SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_76(iVar0, uParam0))
									{
										if (!IS_STRING_NULL(uVar13[iVar0]))
										{
											if (!ARE_STRINGS_EQUAL(uVar13[iVar0], ""))
											{
												func_74(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_73(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_76(iVar0, uParam0))
										{
											func_64(uParam0, uVar12[iVar0], 0);
											func_73(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_71(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_71("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			SET_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			SET_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			SET_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_74(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!IS_STRING_NULL(sParam1))
		{
			if (!ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_75(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = GET_GAME_TIMER();
}

void func_75(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	BEGIN_TEXT_COMMAND_PRINT(sParam0);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 14);
		
		case 1:
			return IS_BIT_SET(uParam1->f_13, 15);
		
		case 2:
			return IS_BIT_SET(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_77(int iParam0, float fParam1)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (!IS_ENTITY_DEAD(iVar0, 0))
		{
			if (GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (!IS_PED_GROUP_MEMBER(iParam0, func_58()))
		{
			iVar0 = SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam0);
			if (IS_VEHICLE_DRIVEABLE(iParam1, 0))
			{
				if (IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	if (!IS_PED_INJURED(iParam0))
	{
		if (DOES_ENTITY_EXIST(iParam1))
		{
			if (IS_VEHICLE_DRIVEABLE(iParam1, 0))
			{
				if (IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			SET_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			SET_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			SET_BIT(&(uParam1->f_13), 19);
			break;
	}
}

void func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			CLEAR_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			CLEAR_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			CLEAR_BIT(&(uParam1->f_13), 19);
			break;
	}
}

int func_82(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 17);
		
		case 1:
			return IS_BIT_SET(uParam1->f_13, 18);
		
		case 2:
			return IS_BIT_SET(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
		if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (!IS_PED_INJURED(iParam0))
			{
				iVar1 = GET_VEHICLE_PED_IS_USING(iParam0);
				if (IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam0, 20f, 20f, 20f, 0, 1, 0) && IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_84(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (GET_ENTITY_MODEL(iParam0) == joaat("bus") || GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!IS_PED_INJURED(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
			if (!IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
			if (!IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
			if (!IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(var uParam0)
{
	int iVar0;
	
	if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (func_70(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!IS_PED_INJURED(iParam1))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(iParam1, 0);
			if (!IS_ENTITY_DEAD(iVar0, 0))
			{
				if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), iVar0))
					{
						if (func_85(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
				if (DOES_ENTITY_EXIST(iVar0))
				{
					if (func_70(iVar0, uParam0, 0))
					{
						if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (func_87(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_87(int iParam0)
{
	float fVar0;
	
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar0 = GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_89()
{
	int iVar0;
	int iVar1;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
	{
		iVar0 = SET_EXCLUSIVE_PHONE_RELATIONSHIPS(SET_EXCLUSIVE_PHONE_RELATIONSHIPS());
		if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER_PED_ID())
				{
					if (IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!IS_PED_HEADTRACKING_ENTITY(iVar1, IS_PED_HEADTRACKING_ENTITY()))
						{
							TASK_LOOK_AT_ENTITY(iVar1, TASK_LOOK_AT_ENTITY(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	if (!IS_BIT_SET(uParam0->f_13, 25))
	{
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		SET_BIT(&(uParam0->f_13), 25);
	}
}

void func_91(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
		{
			if (!IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				if (IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
				{
					SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 0);
					SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(SET_PED_CAN_PLAY_AMBIENT_ANIMS(), 0);
				SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(), 0);
			}
		}
	}
}

int func_92()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_93()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_94(int iParam0)
{
	vector3 vVar0;
	
	if (IS_ENTITY_DEAD(Local_1295, 0))
	{
		return 0;
	}
	vVar0 = { _0x21C235BC64831E5A(_0x21C235BC64831E5A(iParam0, true), _0x21C235BC64831E5A(Local_1295, vLocal_86), _0x21C235BC64831E5A(Local_1295, vLocal_87), 0) };
	if (vdist2(vVar0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_86)) <= vdist2(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_87), GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_86)))
	{
		return 1;
	}
	return 0;
}

void func_95(bool bParam0, int iParam1)
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

int func_96(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	DISABLE_CONTROL_ACTION(0, 71, 1);
	DISABLE_CONTROL_ACTION(0, 72, 1);
	DISABLE_CONTROL_ACTION(0, 76, 1);
	DISABLE_CONTROL_ACTION(0, 73, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		DISABLE_CONTROL_ACTION(0, 69, 1);
		DISABLE_CONTROL_ACTION(0, 70, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	DISABLE_CONTROL_ACTION(0, 74, 1);
	DISABLE_CONTROL_ACTION(0, 86, 1);
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
	DISABLE_CONTROL_ACTION(0, 138, 1);
	DISABLE_CONTROL_ACTION(0, 136, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 107, 1);
	DISABLE_CONTROL_ACTION(0, 110, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 87, 1);
	DISABLE_CONTROL_ACTION(0, 88, 1);
	DISABLE_CONTROL_ACTION(0, 113, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 117, 1);
	DISABLE_CONTROL_ACTION(0, 118, 1);
	DISABLE_CONTROL_ACTION(0, 119, 1);
	DISABLE_CONTROL_ACTION(0, 131, 1);
	DISABLE_CONTROL_ACTION(0, 132, 1);
	DISABLE_CONTROL_ACTION(0, 123, 1);
	DISABLE_CONTROL_ACTION(0, 126, 1);
	DISABLE_CONTROL_ACTION(0, 129, 1);
	DISABLE_CONTROL_ACTION(0, 130, 1);
	DISABLE_CONTROL_ACTION(0, 133, 1);
	DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	func_97(iParam0);
	if ((GET_GAME_TIMER() - Global_29) > 500)
	{
		BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GET_GAME_TIMER();
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ABSF(ABSF(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_97(int iParam0)
{
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (0x36D782F68B309BDA(iParam0))
		{
			if (0x3D34E80EED4AE3BE(iParam0))
			{
				0x81E1552E35DC3839(iParam0, 0);
			}
		}
	}
}

bool func_98(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)
{
	return func_49(iParam0, vParam1, func_99(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_92(), func_92(), func_92(), func_92(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_92(), func_92(), func_92(), 1, fParam4);
}

Vector3 func_99()
{
	return 0f, 0f, 2f;
}

int func_100(int iParam0)
{
	return func_51(iParam0, 1, 0);
}

int func_101(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_49(iParam0, vParam1, vParam2, func_93(), func_93(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_92(), func_92(), func_92(), func_92(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

void func_102(int iParam0, bool bParam1)
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

void func_103(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (IS_BIT_SET(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_105(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_104(iVar0, iParam0);
		func_81(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			CLEAR_BIT(&(iParam0->f_13), iVar0);
			CLEAR_BIT(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (DOES_BLIP_EXIST(*iParam0))
	{
		REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], 1);
			SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, true);
				SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, false);
			}
			SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()) && iParam0->f_17[iVar0] != IS_PED_GROUP_MEMBER())
				{
					REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!IS_BIT_SET(iParam0->f_13, 29))
			{
				SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		SET_PED_CAN_PLAY_AMBIENT_ANIMS(SET_PED_CAN_PLAY_AMBIENT_ANIMS(), 1);
		SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(), 1);
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (bParam2)
		{
			SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

void func_104(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			CLEAR_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			CLEAR_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_105(var uParam0)
{
	if (DOES_BLIP_EXIST(uParam0->f_5))
	{
		REMOVE_BLIP(&(uParam0->f_5));
	}
}

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_107(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_107(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_108(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_108(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_109(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_109(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_12(iVar0))
	{
		func_133();
	}
	if (func_132(iParam1) && IS_ENTITY_VISIBLE(iParam1))
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
			if (func_127(uParam0, bParam5, bParam7, 0))
			{
				func_123(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_113(iVar0))
				{
					if ((IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0)) && IS_STRING_NULL(IS_STRING_NULL(), 0))
					{
						if ((iVar1 && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_12(iVar0))
							{
								func_196(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_112(1);
								}
							}
						}
					}
				}
			}
			else if (func_113(iVar0))
			{
				if (IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0))
				{
					if (((IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !IS_ENTITY_ON_SCREEN()) && uParam6)
					{
						if (!func_12(iVar0))
						{
							func_196(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_112(1);
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
				if (func_12(sParam3))
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
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_SUB(IS_PED_IN_ANY_SUB()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_ON_ANY_BIKE(IS_PED_ON_ANY_BIKE()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_127(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_111(uParam0))
				{
					func_110(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_110(var uParam0)
{
	if (func_132(PLAYER_PED_ID()))
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

int func_111(var uParam0)
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

int func_112(bool bParam0)
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

int func_113(char* sParam0)
{
	if (!func_114(1, 1, 0))
	{
		if ((!IS_STRING_NULL_OR_EMPTY(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (func_112(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_19(0))
	{
		return 0;
	}
	if (func_122())
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
	if ((func_121() || func_120(Global_4456448.f_190930)) || func_119())
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			iVar1 = func_118(PLAYER_PED_ID(), 0);
			if (((_0xE33FFA906CE74880(iVar0, iVar1) || (_0xE33FFA906CE74880(iVar0) == 562680400 && iVar1 != -1)) || (_0xE33FFA906CE74880(iVar0) == 1181327175 && iVar1 != -1)) || (((_0xE33FFA906CE74880(iVar0) == -1693015116 && iVar1 == 0) && func_117(iVar0, 10)) && _0xE33FFA906CE74880(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_115(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == PLAYER_ID()) && func_116(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
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

int func_117(int iParam0, int iParam1)
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

int func_118(int iParam0, int iParam1)
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

var func_119()
{
	return Global_2448961.f_17;
}

bool func_120(int iParam0)
{
	return iParam0 == 51;
}

var func_121()
{
	return Global_2448961.f_16;
}

bool func_122()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_123(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_11(uParam0, 0, 0);
	}
	if (func_126(vParam2, 0f, 0f, 0f, 0))
	{
		if (IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (IS_PED_A_PLAYER(iVar0))
				{
					if (!func_124())
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

bool func_124()
{
	return func_125(PLAYER_ID());
}

int func_125(int iParam0)
{
	if (GET_ENTITY_MODEL(GET_ENTITY_MODEL(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_126(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_127(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_111(uParam0))
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
						if (!func_131(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_131(bParam1, bParam2, bParam3))
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
					if (!func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_130(bParam1, bParam2, bParam3) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
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
				else if (!func_131(bParam1, bParam2, bParam3))
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
						if (func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1) || func_128(bParam1, bParam2, bParam3))
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
					else if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_111(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_114(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_133();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_130(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_131(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_132(int iParam0)
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

void func_133()
{
	SET_BIT(&Global_7357, 4);
}

int func_134(var uParam0)
{
	if (func_136(uParam0) && !func_135(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_137()
{
	int iVar0;
	
	if (iLocal_1282 == 0 || iLocal_1282 == 1)
	{
		if (((IS_ENTITY_DEAD(Local_1295, 0) || (IS_ENTITY_DEAD(Local_1298[0 /*2*/]) && !IS_ENTITY_DEAD(Local_1298[0 /*2*/]))) || (IS_ENTITY_DEAD(Local_1298[1 /*2*/]) && !IS_ENTITY_DEAD(Local_1298[1 /*2*/]))) || (IS_ENTITY_DEAD(Local_1298[2 /*2*/]) && !IS_ENTITY_DEAD(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 2;
		}
	}
	if (iLocal_1282 == 2)
	{
		if ((((!DOES_ENTITY_EXIST(Local_1295) || !DOES_ENTITY_EXIST(Local_1295, 0)) || (DOES_ENTITY_EXIST(Local_1298[0 /*2*/]) && !func_94(Local_1298[0 /*2*/]))) || (DOES_ENTITY_EXIST(Local_1298[1 /*2*/]) && !func_94(Local_1298[1 /*2*/]))) || (DOES_ENTITY_EXIST(Local_1298[2 /*2*/]) && !func_94(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 3;
		}
	}
	if (iLocal_1282 == 0)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
			{
				if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_1295))
					{
						iLocal_1296 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1282 == 0)
	{
		if (!IS_VEHICLE_DRIVEABLE(Local_1295, 0))
		{
			iLocal_1282 = 1;
		}
	}
	if (iLocal_1282 == 1 && IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), Local_1295, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_138(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (DOES_ENTITY_EXIST(Global_102125.f_4))
	{
		if (IS_VEHICLE_DRIVEABLE(Global_102125.f_4, 0))
		{
			if (func_190(24) != Global_102125.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_187(GET_ENTITY_COORDS(Global_102125.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_139(Global_102125.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_139(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_186(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_181(iParam0, &Var0);
		if (func_126(vParam1, 0f, 0f, 0f, 0))
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
		func_174(iParam3, &Var0, vParam1, fParam2, func_180(iParam0));
		func_140(iParam3, iParam0, 0);
	}
}

void func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_170(&(Global_75396.f_555[0 /*21*/]), iParam0))
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
				Global_111560.f_32744.f_4801 = func_159();
			}
			if (iParam1 != Global_75396.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_190(iParam0);
					if ((DOES_ENTITY_EXIST(iVar0) && DOES_ENTITY_EXIST(iVar0, 0)) && iParam1 != iVar0)
					{
						func_141(iVar0, 145);
					}
				}
				Global_76302 = iParam1;
				Global_76303 = iParam0;
				Global_76304 = iParam2;
			}
		}
	}
}

void func_141(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_142(iParam0))
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
	func_181(iParam0, &(Global_111560.f_32744.f_5510));
}

int func_142(int iParam0)
{
	if ((((((((((!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0)) || func_157(iParam0, 0, 0)) || func_157(iParam0, 1, 0)) || func_157(iParam0, 2, 0)) || func_180(iParam0) != 145) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || !func_143(DOES_ENTITY_EXIST(iParam0)))
	{
		if (func_155(iParam0))
		{
		}
		if (func_155(iParam0))
		{
		}
		if (func_157(iParam0, 0, 0))
		{
		}
		if (func_157(iParam0, 1, 0))
		{
		}
		if (func_157(iParam0, 2, 0))
		{
		}
		if (func_180(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_143(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_144(iParam0, 0))
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

int func_144(int iParam0, bool bParam1)
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
		if (!func_152())
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
		if ((((!func_151() && !func_150()) && !func_149()) && !func_148()) && !func_152())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((IS_DURANGO_VERSION() || IS_DURANGO_VERSION()) || IS_DURANGO_VERSION())
		{
		}
		else if (!func_149())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_147(iParam0))
		{
			return 0;
		}
	}
	if (!func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_145(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_146())
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

int func_146()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

int func_147(int iParam0)
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

int func_148()
{
	return 0;
}

int func_149()
{
	return 1;
}

int func_150()
{
	return 1;
}

int func_151()
{
	if (IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_152()
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

int func_153(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = GET_ENTITY_MODEL(iParam0);
	sVar1 = GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_144(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
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

int func_155(int iParam0)
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

int func_156(int iParam0)
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

int func_157(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_158(iParam1, iVar0, &sVar1, &iVar2))
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

int func_158(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_159()
{
	var uVar0;
	
	func_169(&uVar0, GET_CLOCK_SECONDS());
	func_168(&uVar0, GET_CLOCK_MINUTES());
	func_167(&uVar0, GET_CLOCK_HOURS());
	func_162(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_161(&uVar0, GET_CLOCK_MONTH());
	func_160(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_160(var uParam0, int iParam1)
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

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_166(*uParam0);
	iVar1 = func_164(*uParam0);
	if (iParam1 < 1 || iParam1 > func_163(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_163(int iParam0, int iParam1)
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

var func_164(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_165(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_165(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_166(var uParam0)
{
	return uParam0 & 15;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_169(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_170(var uParam0, int iParam1)
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
			uParam0->f_4 = func_171(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_171(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_171(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_171(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_171(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_171(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_171(2, 1);
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
			if (func_152())
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
			if (func_152())
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
		if (!func_126(Global_111560.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_126(Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_126(Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_171(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_173(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_172(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_172(int iParam0, var uParam1, int iParam2)
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

bool func_173(int iParam0)
{
	return iParam0 < 3;
}

void func_174(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_170(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 10))
		{
			func_179(iParam0);
			func_178(uParam1, &(Global_111560.f_32744.f_69[Global_75396.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_175(iParam0, 1);
		}
	}
}

void func_175(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_177(iParam0, 0))
		{
			func_176(iParam0, 1, 0);
			func_176(iParam0, 2, 0);
			func_176(iParam0, 3, 0);
			func_176(iParam0, 4, 0);
			func_176(iParam0, 0, 1);
			Global_75396[iParam0] = 1;
		}
	}
	else
	{
		func_176(iParam0, 0, 0);
	}
}

void func_176(int iParam0, int iParam1, bool bParam2)
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

bool func_177(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_111560.f_32744[iParam0], iParam1);
}

void func_178(var uParam0, var uParam1)
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

void func_179(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_75396.f_139[iParam0]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_75396.f_139[iParam0], true, 1);
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_75396.f_139[iParam0]));
			Global_75396.f_139[iParam0] = 0;
		}
		if (IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 13))
		{
			func_175(iParam0, 0);
		}
	}
}

int func_180(int iParam0)
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

void func_181(int iParam0, var uParam1)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_185(uParam1);
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
		if (uParam1->f_65 == -1 && !func_184(uParam1->f_66))
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
		func_183(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				SET_BIT(&(uParam1->f_77), func_182(iVar0 + 1));
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

int func_182(int iParam0)
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

int func_183(int iParam0, var uParam1, var uParam2)
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

int func_184(int iParam0)
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

void func_185(var uParam0)
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

void func_186(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_179(iParam0);
	func_175(iParam0, 0);
}

int func_187(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_188(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_188(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93737[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93737[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_189(iVar0) || iParam2 == 0)
				{
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_93737[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_189(int iParam0)
{
	return IS_BIT_SET(Global_111560.f_7224[iParam0], 0);
}

int func_190(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75396.f_139[iParam0];
}

int func_191()
{
	func_192();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_192()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_194(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_193(PLAYER_PED_ID());
			if (func_173(iVar0) && (!func_37(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_173(Global_111560.f_2358.f_539.f_4321))
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

int func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_194(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_194(int iParam0)
{
	if (func_173(iParam0))
	{
		return func_195(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_195(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_196(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_197(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	BEGIN_TEXT_COMMAND_PRINT(sParam0);
	END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_198(int iParam0, bool bParam1, bool bParam2)
{
	return func_51(iParam0, !bParam1, bParam2);
}

int func_199(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		switch (GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!IS_PED_INJURED(IS_PED_INJURED(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!IS_ENTITY_DEAD(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_200(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_201()
{
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!iLocal_1319)
		{
			func_204(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0), -1);
			func_203(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0), -1);
			iLocal_1319 = 1;
		}
	}
	else if (iLocal_1319)
	{
		func_203(0, -1);
		func_204(0, -1);
		iLocal_1319 = 0;
	}
	if (!iLocal_1317)
	{
		if (IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0))
		{
			if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), Local_1295, 1))
			{
				PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1317 = 1;
			}
			else if (HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_briefcase"), 0))
			{
				PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1317 = 1;
			}
		}
	}
	if (iLocal_88 == 0)
	{
		switch (iLocal_1282)
		{
			case 0:
				if ((DOES_ENTITY_EXIST(vLocal_1285.x) && !DOES_ENTITY_EXIST(vLocal_1285.x)) && func_134(&(Local_1079[0 /*8*/])))
				{
					if (Local_1079[0 /*8*/].f_1 == 1)
					{
						if (func_202(PLAYER_PED_ID(), Local_1295, 1) > 500f)
						{
							func_307(1);
						}
					}
					else if (Local_1079[0 /*8*/].f_1 == 4)
					{
						if (func_202(PLAYER_PED_ID(), Local_1295, 1) > 250f)
						{
							func_307(1);
						}
					}
					else if (func_202(PLAYER_PED_ID(), Local_1295, 1) > 250f)
					{
						func_307(2);
					}
				}
				else if (func_202(PLAYER_PED_ID(), Local_1295, 1) > 250f)
				{
					func_307(2);
				}
				break;
			
			case 1:
				if (func_202(PLAYER_PED_ID(), Local_1295, 1) > 250f)
				{
					func_307(2);
				}
				break;
			
			case 3:
			case 2:
				if (!HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_briefcase"), 0))
				{
					if (((((DOES_ENTITY_EXIST(Local_1298[0 /*2*/]) && func_202(DOES_ENTITY_EXIST(), Local_1298[0 /*2*/], 1) > 250f) && DOES_ENTITY_EXIST(Local_1298[1 /*2*/])) && func_202(DOES_ENTITY_EXIST(), Local_1298[1 /*2*/], 1) > 250f) && DOES_ENTITY_EXIST(Local_1298[2 /*2*/])) && func_202(DOES_ENTITY_EXIST(), Local_1298[2 /*2*/], 1) > 250f)
					{
						func_307(3);
					}
				}
				break;
			}
	}
	if (DOES_ENTITY_EXIST(Local_1295))
	{
		if ((IS_ENTITY_IN_WATER(Local_1295) && !IS_ENTITY_IN_WATER(Local_1295, 0)) && !IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER(), joaat("weapon_briefcase"), 0))
		{
			func_307(4);
		}
	}
}

float func_202(int iParam0, int iParam1, bool bParam2)
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

void func_203(int iParam0, int iParam1)
{
	Global_61482 = iParam0;
	Global_61483 = iParam1;
}

void func_204(int iParam0, int iParam1)
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

void func_205()
{
	if (DOES_ENTITY_EXIST(vLocal_1285.x))
	{
		if (!IS_PED_IN_ANY_VEHICLE(vLocal_1285.x, 0))
		{
			func_206(vLocal_1285.x, &(vLocal_1285.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
	}
	if (DOES_ENTITY_EXIST(Local_1295))
	{
		if (((!func_199(Local_1295) && IS_ENTITY_DEAD(Local_1295, 0)) && iLocal_1314) && func_202(Local_1295, IS_ENTITY_DEAD(), 1) > 200f)
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1295);
		}
	}
}

int func_206(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

void func_207()
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_91 == 1)
	{
		if (!IS_SCREEN_FADED_OUT())
		{
			if (!IS_SCREEN_FADING_OUT())
			{
				DO_SCREEN_FADE_OUT(1000);
			}
		}
		else
		{
			if (IS_CUTSCENE_ACTIVE())
			{
				STOP_CUTSCENE(0);
				REMOVE_CUTSCENE();
			}
			iLocal_88 = iLocal_92;
			RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			CLEAR_PRINTS();
			CLEAR_HELP(1);
			func_8(1);
			if (IS_CUTSCENE_ACTIVE())
			{
				REMOVE_CUTSCENE();
			}
			if (!func_281())
			{
				func_280(iLocal_88, &vVar0, &fVar1);
				SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vVar0, 1, false, 0, 1);
				SET_ENTITY_HEADING(SET_ENTITY_HEADING(), fVar1);
				FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), true);
				func_278(&uLocal_94, vVar0, 50f, 0);
			}
			func_277(&uLocal_94);
			switch (iLocal_88)
			{
				case 0:
					func_276(&uLocal_94, iLocal_82);
					func_276(&uLocal_94, iLocal_83);
					func_276(&uLocal_94, iLocal_84);
					func_275(&uLocal_94, &Global_95561);
					break;
				
				case 1:
					func_276(&uLocal_94, joaat("burrito2"));
					break;
			}
			while (!func_274(&uLocal_94))
			{
				wait(0);
				func_205();
			}
			switch (iLocal_88)
			{
				case 0:
					while (!func_267(0))
					{
						wait(0);
					}
					if (ARE_STRINGS_EQUAL(&Global_95561, "jhp2a_main"))
					{
						while (!func_211(&iLocal_1293, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							wait(0);
							CLEAR_AREA_OF_VEHICLES(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					else
					{
						while (!func_211(&iLocal_1293, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							wait(0);
							CLEAR_AREA_OF_VEHICLES(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					SET_VEHICLE_COLOUR_COMBINATION(iLocal_1293, 0);
					SET_VEHICLE_EXTRA(iLocal_1293, 1, false);
					SET_VEHICLE_EXTRA(iLocal_1293, 2, true);
					SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1293, 1084227584);
					SET_VEHICLE_ENGINE_ON(iLocal_1293, true, true, 0);
					if (func_281())
					{
						func_208(iLocal_1293, -1, 1);
					}
					else
					{
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), false);
						SET_PED_INTO_VEHICLE(SET_PED_INTO_VEHICLE(), iLocal_1293, -1);
					}
					SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1295 = CREATE_VEHICLE(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
						SET_VEHICLE_ON_GROUND_PROPERLY(Local_1295, 1084227584);
					}
					if (func_281())
					{
						func_208(0, -1, 1);
					}
					else
					{
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), false);
					}
					SET_ENTITY_COORDS(SET_ENTITY_COORDS(), 692.067f, -1004.812f, 21.9059f, 1, false, 0, 1);
					SET_ENTITY_HEADING(SET_ENTITY_HEADING(), 359.5735f);
					SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
			}
			if (IS_SCREEN_FADED_OUT() || !IS_SCREEN_FADED_OUT())
			{
				DO_SCREEN_FADE_IN(1000);
			}
			bLocal_91 = false;
		}
	}
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	if (func_210() && func_281())
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
		func_209(0);
	}
}

void func_209(int iParam0)
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

int func_210()
{
	if (Global_98669 == 10 || Global_98669 == 9)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_210())
	{
		if (func_266())
		{
			func_178(&(Global_105109.f_2890.f_12), &Var0);
		}
	}
	else if (func_264())
	{
		func_178(&(Global_102125.f_2890.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_263(0, &Var0))
		{
			if (IS_THIS_MODEL_A_CAR(Var0.f_66) || IS_THIS_MODEL_A_CAR(Var0.f_66))
			{
				REQUEST_MODEL(Var0.f_66);
				if (HAS_MODEL_LOADED(Var0.f_66))
				{
					*iParam0 = CREATE_VEHICLE(Var0.f_66, vParam1, fParam2, true, true, false);
					func_252(*iParam0, &Var0, 0, 1);
					SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_66);
					SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam3 = true;
		}
	}
	if (bParam3)
	{
		if (!DOES_ENTITY_EXIST(*iParam0))
		{
			if (func_212(iParam0, 0, vParam1, fParam2, 1, 0))
			{
				SET_VEHICLE_MODEL_IS_SUPPRESSED(func_171(0, 0), true);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_212(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_173(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_172(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (DOES_ENTITY_EXIST(*iParam0))
		{
			if (GET_ENTITY_MODEL(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_111560.f_2358.f_539.f_4316) && Global_111560.f_9080.f_99.f_58[131])
		{
			Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			REQUEST_MODEL(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (HAS_MODEL_LOADED(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = CREATE_VEHICLE(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				SET_VEHICLE_COLOURS(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					SET_CONVERTIBLE_ROOF(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_251(&uVar1, &iVar0))
				{
					SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				SET_VEHICLE_WINDOW_TINT(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					SET_VEHICLE_LIVERY(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!IS_THIS_MODEL_A_BICYCLE(IS_THIS_MODEL_A_BICYCLE(*iParam0)))
					{
						if (IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(*iParam0)))
						{
							if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_247(iParam0, &(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_245(iParam0);
					}
				}
				if (bParam4)
				{
					SET_MODEL_AS_NO_LONGER_NEEDED(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_244(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			REQUEST_MODEL(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (HAS_MODEL_LOADED(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = CREATE_VEHICLE(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				SET_VEHICLE_COLOURS(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					SET_CONVERTIBLE_ROOF(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_251(&uVar1, &iVar0))
				{
					SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				SET_VEHICLE_WINDOW_TINT(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, _SET_VEHICLE_NEON_LIGHT_ENABLED(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					SET_VEHICLE_LIVERY(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!IS_THIS_MODEL_A_BICYCLE(IS_THIS_MODEL_A_BICYCLE(*iParam0)))
					{
						if (IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(*iParam0)))
						{
							if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_247(iParam0, &(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_245(iParam0);
					}
				}
				if (bParam4)
				{
					SET_MODEL_AS_NO_LONGER_NEEDED(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_244(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			REQUEST_MODEL(Var2);
			if (HAS_MODEL_LOADED(Var2))
			{
				bVar5 = true;
				*iParam0 = CREATE_VEHICLE(Var2, vParam2, fParam3, true, true, false);
				SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (func_251(&uVar1, &iVar0))
				{
					SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, _SET_VEHICLE_NEON_LIGHT_ENABLED(Var2.f_92, 28));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, _SET_VEHICLE_NEON_LIGHT_ENABLED(Var2.f_92, 29));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, _SET_VEHICLE_NEON_LIGHT_ENABLED(Var2.f_92, 30));
				_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, _SET_VEHICLE_NEON_LIGHT_ENABLED(Var2.f_92, 31));
				if (GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!IS_THIS_MODEL_A_BICYCLE(IS_THIS_MODEL_A_BICYCLE(*iParam0)))
					{
						if (IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				func_247(iParam0, &(Var2.f_31), &(Var2.f_81));
				SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_111560.f_9080.f_99.f_58[118])
					{
						SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_245(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_111560.f_2358.f_539.f_4316) && Global_111560.f_9080.f_99.f_58[131]) && GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_111560.f_2358.f_539.f_4316 = 1;
					func_213(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					SET_MODEL_AS_NO_LONGER_NEEDED(Var2);
				}
				if (bVar5)
				{
					func_244(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_173(iParam0) && DOES_ENTITY_EXIST(*iParam1)) && DOES_ENTITY_EXIST(*iParam1, 0))
	{
		if (iParam2 > Global_111560.f_2358.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_141(*iParam1, iParam0);
		}
		if (GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = GET_ENTITY_MODEL(*iParam1);
		if (GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = GET_ENTITY_MODEL(iVar1);
		}
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = GET_ENTITY_HEALTH(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		GET_VEHICLE_COLOURS(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = GET_VEHICLE_LIVERY(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = GET_VEHICLE_WHEEL_TYPE(*iParam1);
		_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			SET_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			CLEAR_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			SET_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			CLEAR_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			SET_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			CLEAR_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			SET_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			CLEAR_BIT(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_111560.f_2358.f_539.f_4317[iParam0] = 10;
		if (GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && func_217(*iParam1, 0, &uVar0))
		{
			func_183(iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_111560.f_20113[iParam0 /*43*/].f_40 = 1;
				Global_111560.f_20113[iParam0 /*43*/] = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_111560.f_20113[iParam0 /*43*/].f_3 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_111560.f_20113[iParam0 /*43*/].f_4 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_111560.f_20113[iParam0 /*43*/].f_5 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_111560.f_20113[iParam0 /*43*/].f_6 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_111560.f_20113[iParam0 /*43*/].f_10 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_111560.f_20113[iParam0 /*43*/].f_16 = !Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_111560.f_20113[iParam0 /*43*/].f_19 = { Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_111560.f_20113[iParam0 /*43*/].f_23 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_111560.f_20113[iParam0 /*43*/].f_7 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_111560.f_20113[iParam0 /*43*/].f_8 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_111560.f_20113[iParam0 /*43*/].f_9 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_111560.f_20113[iParam0 /*43*/].f_11 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_111560.f_20113[iParam0 /*43*/].f_12 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_111560.f_20113[iParam0 /*43*/].f_13 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_111560.f_20113[iParam0 /*43*/].f_14 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_111560.f_20113[iParam0 /*43*/].f_15 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_111560.f_20113[iParam0 /*43*/].f_18 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_111560.f_20113[iParam0 /*43*/].f_17 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_111560.f_20113[iParam0 /*43*/].f_24 = GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_25 = GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_26 = GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_27 = GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_28 = GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_29 = GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_30 = GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_32 = _0xEEBFC7A7EFDC35B4(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[0] = GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[1] = GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_111560.f_20113[iParam0 /*43*/].f_33[2] = GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[3] = GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_111560.f_20113[iParam0 /*43*/].f_33[4] = GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_111560.f_20113[iParam0 /*43*/].f_39 = GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_31 = func_216(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[0] = _GET_VEHICLE_HORN_HASH(*iParam1);
				GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_214(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_111560.f_20113[iParam0 /*43*/].f_1));
				GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_214(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_111560.f_20113[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_215(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_215(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((DOES_ENTITY_EXIST(iParam0) && DOES_ENTITY_EXIST(iParam0, 0)) && DOES_ENTITY_EXIST(iParam0) >= 0)
	{
		if (GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_217(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (!IS_MODEL_A_VEHICLE(IS_MODEL_A_VEHICLE(iParam0)))
	{
		return 0;
	}
	iVar0 = GET_ENTITY_MODEL(iParam0);
	if ((!func_242(iVar0, bParam1, uParam2) && !func_241(PLAYER_ID())) && !func_225(iParam0))
	{
		return 0;
	}
	if (func_241(PLAYER_ID()))
	{
		if (func_224(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_223(PLAYER_ID()) && (PLAYER_ID(iVar0) || PLAYER_ID(iVar0)))
	{
		bVar1 = true;
	}
	if (((IS_BIG_VEHICLE(iParam0) && !func_221(iParam0)) && !bVar1) && !(func_220(IS_BIG_VEHICLE(iParam0)) && func_218(IS_BIG_VEHICLE())))
	{
		switch (GET_ENTITY_MODEL(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_154(iParam0) && GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_218(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_219(int iParam0)
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

int func_220(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (GET_ENTITY_MODEL(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_222(PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case -1254331310:
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_225(int iParam0)
{
	if (func_240(PLAYER_ID()) || func_239(PLAYER_ID()))
	{
		if (func_226(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	if ((!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0)) || DOES_ENTITY_EXIST(iParam0, 0))
	{
		return 0;
	}
	if (func_229(iParam0, 0))
	{
		return 1;
	}
	if (DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECOR_GET_INT(iParam0, "Player_Vehicle") == DECOR_GET_INT(DECOR_GET_INT()))
		{
			if (func_227(iParam0))
			{
				return 1;
			}
			switch (GET_ENTITY_MODEL(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_227(int iParam0)
{
	if (!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0))
	{
		return 0;
	}
	if (func_228(GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_229(int iParam0, bool bParam1)
{
	switch (GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_231(GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2531497.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_230(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2437549.f_627[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_231(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_238(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_237();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14207)
			{
				return func_236();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14208)
			{
				return func_236();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14206)
			{
				return func_236();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14209)
			{
				return func_236();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14211)
			{
				return func_236();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_235();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18657)
			{
				return func_234();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18659)
			{
				return func_234();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18663)
			{
				return func_234();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18660)
			{
				return func_234();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18667)
			{
				return func_234();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18665)
			{
				return func_234();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18670)
			{
				return func_234();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20613)
			{
				return func_233();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20614)
			{
				return func_233();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_232();
			break;
		
		case joaat("glendale"):
			return func_232();
			break;
		
		case -2096690334:
			return func_232();
			break;
		
		case 931280609:
			return func_232();
			break;
		
		case joaat("gargoyle"):
			return func_232();
			break;
		
		case joaat("dominator"):
			return func_232();
			break;
		
		case joaat("dominator2"):
			return func_232();
			break;
		
		case 444994115:
			return func_232();
			break;
		
		case 1637620610:
			return func_232();
			break;
		
		case -755532233:
			return func_232();
			break;
		
		case -27326686:
			return func_232();
			break;
		
		case -1812949672:
			return func_232();
			break;
		
		case -1374500452:
			return func_232();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_232();
			break;
	}
	return 0;
}

bool func_232()
{
	return IS_DLC_PRESENT(1927191088);
}

bool func_233()
{
	return IS_DLC_PRESENT(2067165443);
}

bool func_234()
{
	return IS_DLC_PRESENT(-957277403);
}

bool func_235()
{
	return IS_DLC_PRESENT(210122941);
}

bool func_236()
{
	return IS_DLC_PRESENT(-1894522408);
}

bool func_237()
{
	return IS_DLC_PRESENT(1630677557);
}

int func_238(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14207)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14208)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14206)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14209)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14211)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14210)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18657)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18659)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18663)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18660)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18667)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18665)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18670)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20613)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20614)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_239(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_32())
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_32())
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_242(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_223(PLAYER_ID()) && (PLAYER_ID(iParam0) || PLAYER_ID(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!IS_THIS_MODEL_A_CAR(iParam0) && !IS_THIS_MODEL_A_CAR(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && iParam0 != 916547552) && iParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_243(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!DOES_ENTITY_EXIST(Global_96030[iVar0]))
		{
			Global_96030[iVar0] = iParam0;
			Global_96040[iVar0] = iParam1;
			Global_96050[iVar0] = GET_ENTITY_MODEL(iParam0);
			if (IS_THIS_MODEL_A_CAR(Global_96050[iVar0]))
			{
				Global_96078[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96078[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_245(int iParam0)
{
	if (!func_246(*iParam0))
	{
		SET_VEHICLE_EXTRA(*iParam0, 5, !Global_111560.f_9080.f_99.f_58[119]);
	}
}

bool func_246(int iParam0)
{
	return IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_247(int iParam0, var uParam1, var uParam2)
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
	SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					0xE41033B25D003A07(*iParam0, 255);
				}
				else
				{
					0xE41033B25D003A07(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_238(GET_ENTITY_MODEL(*iParam0), 1) && GET_ENTITY_MODEL(*iParam0, 24) != func_250(*iParam0, ((*uParam1)[38] - 1)))
	{
		SET_VEHICLE_MOD(*iParam0, 24, func_250(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_249(iParam0);
	if (func_248(*iParam0))
	{
		SET_VEHICLE_STRONG(*iParam0, true);
		SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((DOES_ENTITY_EXIST(iParam0) && DOES_ENTITY_EXIST(iParam0, 0)) && DOES_ENTITY_EXIST(iParam0) > 0)
	{
		SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, GET_MOD_TEXT_LABEL(iParam0, iVar1, GET_MOD_TEXT_LABEL(iParam0, iVar1)), 16);
				iVar2 = GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == GET_HASH_KEY("MNU_CAGE") || iVar2 == GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_249(var uParam0)
{
	switch (GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (DOES_ENTITY_EXIST(iParam0) && DOES_ENTITY_EXIST(iParam0, 0))
	{
		switch (GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_251(var uParam0, int iParam1)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_111560.f_20113.f_261)
	{
		*uParam0 = { Global_111560.f_20113.f_267 };
		*iParam1 = Global_111560.f_20113.f_271;
		return 1;
	}
	return 0;
}

void func_252(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!func_256(iParam0))
		{
			if (GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (IS_BIT_SET(uParam1->f_77, func_182(iVar0 + 1)))
			{
			}
			else
			{
				SET_BIT(&(uParam1->f_77), func_182(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (IS_BIT_SET(uParam1->f_77, func_182(iVar1 + 1)))
			{
			}
			else
			{
				SET_BIT(&(uParam1->f_77), func_182(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			0x1087BC8EC540DAEB(iParam0, 0);
			if (GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				0x1087BC8EC540DAEB(iParam0, 1);
			}
		}
		if (IS_BIT_SET(uParam1->f_77, 13))
		{
			SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (IS_BIT_SET(uParam1->f_77, 12))
		{
			SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((IS_BIT_SET(uParam1->f_77, 15) || func_255(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_254())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_184(uParam1->f_66))
		{
			SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		SET_VEHICLE_TYRES_CAN_BURST(iParam0, !SET_VEHICLE_TYRES_CAN_BURST(uParam1->f_77, 9));
		if (bParam2)
		{
			SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, _SET_VEHICLE_NEON_LIGHT_ENABLED(uParam1->f_77, 28));
		_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, _SET_VEHICLE_NEON_LIGHT_ENABLED(uParam1->f_77, 29));
		_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, _SET_VEHICLE_NEON_LIGHT_ENABLED(uParam1->f_77, 30));
		_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, _SET_VEHICLE_NEON_LIGHT_ENABLED(uParam1->f_77, 31));
		SET_VEHICLE_IS_STOLEN(iParam0, SET_VEHICLE_IS_STOLEN(uParam1->f_77, 10));
		if (GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!IS_THIS_MODEL_A_BICYCLE(IS_THIS_MODEL_A_BICYCLE(iParam0)))
			{
				if (IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_253(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_253(iParam0, uParam1->f_69);
				}
			}
		}
		if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_247(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!IS_THIS_MODEL_A_HELI(uParam1->f_66) && !IS_THIS_MODEL_A_HELI(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (IS_BIT_SET(uParam1->f_77, func_182(iVar2 + 1)))
				{
					if (!IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
					{
						SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, false);
					}
				}
				else if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
				{
					SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((GET_ENTITY_MODEL(iParam0) == joaat("sheava") || GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			SET_VEHICLE_EXTRA(iParam0, 1, false);
			SET_VEHICLE_EXTRA(iParam0, 2, false);
			SET_VEHICLE_EXTRA(iParam0, 3, false);
			SET_VEHICLE_EXTRA(iParam0, 4, false);
			SET_VEHICLE_EXTRA(iParam0, 5, false);
			SET_VEHICLE_EXTRA(iParam0, 6, false);
			SET_VEHICLE_EXTRA(iParam0, 7, false);
			SET_VEHICLE_EXTRA(iParam0, 8, false);
		}
		if (((IS_THIS_MODEL_A_PLANE(uParam1->f_66) && IS_THIS_MODEL_A_PLANE(iParam0)) && !IS_THIS_MODEL_A_PLANE(iParam0, -2118308144)) && !((((Global_4456448.f_58154 == 6 || Global_4456448.f_58154 == 7) || Global_4456448.f_58154 == 18) || Global_4456448.f_58154 == 19) && Global_4456448.f_2 == 20))
		{
			if (!IS_BIT_SET(uParam1->f_77, 23))
			{
				if (IS_BIT_SET(uParam1->f_77, 22))
				{
					CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (IS_BIT_SET(uParam1->f_77, 27))
		{
			DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_253(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (GET_NUM_MOD_KITS(iParam0) > 0)
	{
		SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || GET_ENTITY_MODEL(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_254()
{
	return IS_DLC_PRESENT(-1691188696);
}

int func_255(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECOR_GET_INT(iParam0, "MPBitset");
				}
				return IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!func_262(PLAYER_ID(), -1))
		{
			iParam0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		}
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_258(PLAYER_ID()) == 3)
	{
		if (DOES_ENTITY_EXIST(iParam0) && DOES_ENTITY_EXIST(iParam0, 0))
		{
			if (func_257(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_257(int iParam0)
{
	if (DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_258(int iParam0)
{
	if (func_261(iParam0) == 233)
	{
		return func_259(iParam0);
	}
	return -1;
}

int func_259(int iParam0)
{
	if (func_260(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_260(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	if (func_260(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_262(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_116(iParam0, 1, 1))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(iParam0), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iParam0), 0);
			if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PLAYER_PED_ID() == PLAYER_PED_ID(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_263(int iParam0, var uParam1)
{
	struct<82> Var0;
	
	if (!func_173(iParam0))
	{
		return 0;
	}
	if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && GET_HASH_KEY(&(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27)) == GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && GET_HASH_KEY(&(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27)) == GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_172(iParam0, &Var0, 1);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && GET_HASH_KEY(&(Var0.f_27)) == GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_172(iParam0, &Var0, 2);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && GET_HASH_KEY(&(Var0.f_27)) == GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_264()
{
	return func_265(&(Global_102125.f_2890));
}

int func_265(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_144(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_266()
{
	return func_265(&(Global_105109.f_2890));
}

int func_267(bool bParam0)
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	func_275(&uLocal_94, &Global_95561);
	func_276(&uLocal_94, joaat("s_m_m_armoured_01"));
	func_276(&uLocal_94, iLocal_84);
	func_276(&uLocal_94, iLocal_85);
	if ((HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")) && HAS_MODEL_LOADED(iLocal_84)) && HAS_MODEL_LOADED(iLocal_85))
	{
		if (bParam0)
		{
			if (!DOES_ENTITY_EXIST(Local_1295))
			{
				if (DOES_ENTITY_EXIST(Global_95196[0]))
				{
					SET_ENTITY_AS_MISSION_ENTITY(Global_95196[0], true, 1);
					Local_1295 = Global_95196[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!DOES_ENTITY_EXIST(vLocal_1285.x))
			{
				if (DOES_ENTITY_EXIST(Global_95196.f_9[0]))
				{
					SET_ENTITY_AS_MISSION_ENTITY(Global_95196.f_9[0], true, 1);
					vLocal_1285.x = Global_95196.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_276(&uLocal_94, iLocal_83);
			if (HAS_MODEL_LOADED(iLocal_83) && HAS_MODEL_LOADED(&Global_95561))
			{
				if (ARE_STRINGS_EQUAL(&Global_95561, "jhp2a_main"))
				{
					WAYPOINT_RECORDING_GET_COORD(&Global_95561, 23, &vVar1);
					CLEAR_AREA_OF_VEHICLES(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = CREATE_VEHICLE(iLocal_83, vVar1, 119.4988f, true, true, false);
					vLocal_1285.x = CREATE_PED_INSIDE_VEHICLE(Local_1295, 26, iLocal_82, -1, 1, true);
					SET_VEHICLE_ON_GROUND_PROPERLY(Local_1295, 1084227584);
					TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, &Global_95561, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					WAYPOINT_RECORDING_GET_COORD(&Global_95561, 29, &vVar1);
					CLEAR_AREA_OF_VEHICLES(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = CREATE_VEHICLE(iLocal_83, vVar1, 134.0011f, true, true, false);
					vLocal_1285.x = CREATE_PED_INSIDE_VEHICLE(Local_1295, 26, iLocal_82, -1, 1, true);
					SET_VEHICLE_ON_GROUND_PROPERLY(Local_1295, 1084227584);
					TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, &Global_95561, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (DOES_ENTITY_EXIST(Local_1295))
		{
			func_273(Local_1295, 0);
			if (IS_VEHICLE_DRIVEABLE(Local_1295, 0))
			{
				SET_VEHICLE_HAS_STRONG_AXLES(Local_1295, true);
				SET_ENTITY_LOAD_COLLISION_FLAG(Local_1295, true, 1);
				_0x192547247864DFDD(Local_1295, true);
				_0x2B6747FAA9DB9D6B(Local_1295, 1);
			}
		}
		if (DOES_ENTITY_EXIST(vLocal_1285.x))
		{
			if (!IS_PED_INJURED(vLocal_1285.x))
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(vLocal_1285.x, true);
				SET_PED_RELATIONSHIP_GROUP_HASH(vLocal_1285.x, iLocal_1284);
				SET_PED_ACCURACY(vLocal_1285.x, 5);
				SET_PED_CAN_BE_TARGETTED(vLocal_1285.x, false);
				SET_PED_COMBAT_ATTRIBUTES(vLocal_1285.x, 1, false);
				GIVE_WEAPON_TO_PED(vLocal_1285.x, joaat("weapon_pistol"), 15, false, true);
				func_272(&uLocal_1105, 3, vLocal_1285.x, "JHP2A_Driver", 0, 1);
				func_271(&(Local_1079[0 /*8*/]), 0, 0, 1);
			}
		}
		if (DOES_ENTITY_EXIST(Local_1295) && DOES_ENTITY_EXIST(vLocal_1285.x))
		{
			func_270();
			func_271(&(Local_1079[1 /*8*/]), 0, 0, 1);
			func_268(&uLocal_94, joaat("boxville3"));
			func_268(&uLocal_94, joaat("s_m_m_armoured_01"));
			func_268(&uLocal_94, iLocal_84);
			func_268(&uLocal_94, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_268(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					func_269(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_269(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_270()
{
	vector3 vVar0;
	
	if (DOES_ENTITY_EXIST(Local_1295))
	{
		if (!IS_ENTITY_DEAD(Local_1295, 0) && !IS_ENTITY_DEAD(iLocal_1299))
		{
			iLocal_1299 = CREATE_OBJECT(iLocal_85, CREATE_OBJECT(Local_1295, true), true, true, false);
			SET_OBJECT_PHYSICS_PARAMS(iLocal_1299, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_1299, Local_1295, -1, -1, ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_1295, ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_1295, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			SET_ENTITY_VISIBLE(iLocal_1299, false, 0);
		}
		if (!DOES_ENTITY_EXIST(Local_1298[0 /*2*/]))
		{
			if (IS_ENTITY_DEAD(Local_1295, 0))
			{
				vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(-2.5f, 2.5f), -5f, 0f) };
				GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[0 /*2*/] = CREATE_OBJECT(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[0 /*2*/] = CREATE_OBJECT(iLocal_84, CREATE_OBJECT(Local_1295, true), true, true, false);
				SET_OBJECT_PHYSICS_PARAMS(Local_1298[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ATTACH_ENTITY_TO_ENTITY(Local_1298[0 /*2*/], Local_1295, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				_SET_ENTITY_SOMETHING(Local_1298[0 /*2*/], true);
			}
		}
		if (!DOES_ENTITY_EXIST(Local_1298[1 /*2*/]))
		{
			if (IS_ENTITY_DEAD(Local_1295, 0))
			{
				vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(-2.5f, 2.5f), -5f, 0f) };
				GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[1 /*2*/] = CREATE_OBJECT(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[1 /*2*/] = CREATE_OBJECT(iLocal_84, CREATE_OBJECT(Local_1295, true), true, true, false);
				SET_OBJECT_PHYSICS_PARAMS(Local_1298[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ATTACH_ENTITY_TO_ENTITY(Local_1298[1 /*2*/], Local_1295, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				_SET_ENTITY_SOMETHING(Local_1298[1 /*2*/], true);
			}
		}
		if (!DOES_ENTITY_EXIST(Local_1298[2 /*2*/]))
		{
			if (IS_ENTITY_DEAD(Local_1295, 0))
			{
				vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(-2.5f, 2.5f), -5f, 0f) };
				GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[2 /*2*/] = CREATE_OBJECT(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[2 /*2*/] = CREATE_OBJECT(iLocal_84, CREATE_OBJECT(Local_1295, true), true, true, false);
				SET_OBJECT_PHYSICS_PARAMS(Local_1298[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ATTACH_ENTITY_TO_ENTITY(Local_1298[2 /*2*/], Local_1295, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				_SET_ENTITY_SOMETHING(Local_1298[2 /*2*/], true);
			}
		}
	}
}

int func_271(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = GET_GAME_TIMER();
		uParam0->f_5 = GET_GAME_TIMER();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_272(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_273(int iParam0, int iParam1)
{
	Global_98669.f_22[iParam1] = iParam0;
}

int func_274(var uParam0)
{
	if (func_282(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (ARE_STRINGS_EQUAL(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		REQUEST_WAYPOINT_RECORDING(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = GET_GAME_TIMER();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_276(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		REQUEST_MODEL(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = GET_GAME_TIMER();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_277(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

int func_278(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (func_279(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_126(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam2)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	NEW_LOAD_SCENE_START_SPHERE(vParam1, fParam2, iParam3);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = GET_GAME_TIMER();
	uParam0->f_868.f_4 = { vParam1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam2;
	uParam0->f_982 = 1;
	return 1;
}

int func_279(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_280(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_281()
{
	return IS_BIT_SET(Global_98669.f_20, 13);
}

int func_282(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_982)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
						func_269(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (HAS_ANIM_DICT_LOADED(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						REMOVE_ANIM_DICT(uParam0->f_273[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						REMOVE_WAYPOINT_RECORDING(uParam0->f_374[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_269(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						REMOVE_VEHICLE_RECORDING(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_269(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (HAS_WEAPON_ASSET_LOADED(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						REMOVE_WEAPON_ASSET(uParam0->f_202[iVar1 /*7*/].f_4);
						func_269(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (HAS_VEHICLE_ASSET_LOADED(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						REMOVE_VEHICLE_ASSET(uParam0->f_151[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (IS_INTERIOR_READY(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						UNPIN_INTERIOR(uParam0->f_763[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!IS_STRING_NULL_OR_EMPTY(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = _0x9B6E70C5CEEF4EEB(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_269(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (IS_INTERIOR_READY(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = LOAD_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = GET_GAME_TIMER();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
							func_269(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_269(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_879[iVar1 /*5*/])
			{
				if (!uParam0->f_879[iVar1 /*5*/].f_1)
				{
					if (ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_879[iVar1 /*5*/].f_4))
					{
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[iVar1 /*5*/].f_1)
					{
						ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_879[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_879[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_930[iVar1 /*5*/])
			{
				if (!uParam0->f_930[iVar1 /*5*/].f_1)
				{
					if (PREPARE_ALARM(uParam0->f_930[iVar1 /*5*/].f_4))
					{
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[iVar1 /*5*/].f_1)
					{
						func_269(&(uParam0->f_930[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (HAS_ADDITIONAL_TEXT_LOADED(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						CLEAR_ADDITIONAL_TEXT(iVar1, true);
						func_269(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (HAS_PTFX_ASSET_LOADED())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					REMOVE_PTFX_ASSET();
					func_269(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (ROPE_ARE_TEXTURES_LOADED())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					ROPE_UNLOAD_TEXTURES();
					func_269(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!uParam0->f_868.f_1)
			{
				if (IS_NEW_LOAD_SCENE_LOADED())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), false);
						func_283(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				NEW_LOAD_SCENE_STOP();
				func_269(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_956[iVar1 /*5*/].f_4))
					{
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[iVar1 /*5*/].f_1)
					{
						func_269(&(uParam0->f_956[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_283(var uParam0)
{
	if (IS_NEW_LOAD_SCENE_ACTIVE())
	{
		NEW_LOAD_SCENE_STOP();
		func_269(&(uParam0->f_868));
	}
}

void func_284()
{
	if (bLocal_93 && (func_285() || IS_SCREEN_FADED_OUT()))
	{
		func_8(1);
		TERMINATE_THIS_THREAD();
	}
}

int func_285()
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

void func_286()
{
	vector3 vVar0;
	var uVar1;
	
	func_293();
	ADD_RELATIONSHIP_GROUP("SECDRIVER", &iLocal_1284);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1284, -1533126372);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1284, -183807561);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_1284);
	if (func_6(0) || func_210())
	{
		iLocal_92 = 0;
		if (func_210())
		{
			if (Global_92876)
			{
				iLocal_92++;
			}
		}
		StringCopy(&Global_95561, "jhp2a_alt", 64);
		if (func_210())
		{
			func_280(iLocal_92, &vVar0, &uVar1);
			func_292(vVar0, uVar1, 1, 0);
		}
		bLocal_91 = true;
	}
	else
	{
		while (!func_267(1))
		{
			wait(0);
			func_291(&uLocal_94);
		}
	}
	func_290(&uLocal_94, "JHP2A", 0);
	SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 1);
	func_288(88);
	func_272(&uLocal_1105, 0, PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_272(&uLocal_1105, 3, 0, "Lester", 0, 1);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), true);
	SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), true);
	if (HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_briefcase"), 0))
	{
		REMOVE_WEAPON_FROM_PED(REMOVE_WEAPON_FROM_PED(), joaat("weapon_briefcase"));
	}
	func_287();
	if (IS_STRING_NULL_OR_EMPTY(&Global_95561))
	{
	}
	iLocal_1300 = ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		wait(0);
	}
	Global_73894 = 1;
}

void func_287()
{
	Global_92877 = 1;
}

void func_288(int iParam0)
{
	Global_94554 = 0;
	switch (iParam0)
	{
		case 72:
			func_289(2);
			func_289(4);
			break;
		
		case 73:
			func_289(0);
			func_289(1);
			func_289(7);
			break;
		
		case 92:
			func_289(10);
			func_289(9);
			func_289(13);
			func_289(6);
			break;
		
		case 68:
			func_289(11);
			break;
		
		case 78:
			func_289(14);
			break;
		
		case 79:
			func_289(3);
			break;
		
		default:
			break;
	}
}

void func_289(int iParam0)
{
	SET_BIT(&Global_94554, iParam0);
}

int func_290(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (ARE_STRINGS_EQUAL(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_982 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			_REQUEST_ADDITIONAL_TEXT_2(sParam1, iParam2);
		}
		else
		{
			REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = GET_GAME_TIMER();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_291(var uParam0)
{
	func_282(uParam0);
}

void func_292(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_210())
	{
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		CLEAR_BIT(&(Global_98669.f_20), 2);
		SET_GAME_PAUSED(true);
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
		}
		Global_98665 = { vParam0 };
		Global_98668 = uParam1;
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
		func_209(1);
	}
}

void func_293()
{
	func_301(&(Local_1079[0 /*8*/]), 80715, "Van Driver Manager");
	func_301(&(Local_1079[1 /*8*/]), 79362, "Cargo Manager");
}

void func_294(var uParam0)
{
	if (!func_135(uParam0))
	{
		if (IS_ENTITY_DEAD(Local_1295, 0))
		{
			func_299(Local_1298[0 /*2*/], 1);
			func_299(Local_1298[1 /*2*/], 1);
			func_299(Local_1298[2 /*2*/], 1);
			iLocal_1314 = 1;
			func_298(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_297(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_PREP_2A_SHOOTING_LOCK", false, -1))
					{
						if ((GET_GAME_TIMER() - iLocal_1306) > 150)
						{
							if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1299, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 0))
							{
								if ((((HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_molotov"), 0) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_bzgas"), 0)) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_knife"), 0)) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_unarmed"), 0)) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_hit_by_water_cannon"), 0))
								{
									CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_1299);
								}
								else
								{
									CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1299);
									iLocal_1306 = GET_GAME_TIMER();
									iLocal_1305++;
									if (iLocal_1305 >= 3)
									{
										PLAY_SOUND_FROM_ENTITY(-1, "Lock_Destroyed", iLocal_1299, "JWL_PREP_2A_SOUNDS", false, 0);
									}
									else
									{
										PLAY_SOUND_FROM_ENTITY(-1, "Lock_Damage", iLocal_1299, "JWL_PREP_2A_SOUNDS", false, 0);
									}
								}
							}
						}
						else
						{
							CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1299);
						}
					}
					if (((((iLocal_1305 >= 3 || IS_ENTITY_DEAD(iLocal_1299, 0)) || IS_ENTITY_DEAD(Local_1295, 2)) || IS_ENTITY_DEAD(Local_1295, 3)) || IS_ENTITY_DEAD(Local_1295, 2) > 0f) || IS_ENTITY_DEAD(Local_1295, 3) > 0f)
					{
						if (DOES_ENTITY_EXIST(iLocal_1299))
						{
							DELETE_OBJECT(&iLocal_1299);
						}
						if (!IS_VEHICLE_DOOR_DAMAGED(Local_1295, 2))
						{
							SET_VEHICLE_DOOR_OPEN(Local_1295, 2, 0, false);
						}
						if (!IS_VEHICLE_DOOR_DAMAGED(Local_1295, 3))
						{
							SET_VEHICLE_DOOR_OPEN(Local_1295, 3, 0, false);
						}
						iLocal_1315 = 0;
						iLocal_1316 = 0;
						func_299(Local_1298[0 /*2*/], 0);
						func_299(Local_1298[1 /*2*/], 0);
						func_299(Local_1298[2 /*2*/], 0);
						func_296(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_295(Local_1295))
					{
						if (ABSF(ABSF(Local_1295, 2)) > 0.5f && ABSF(ABSF(Local_1295, 3)) > 0.5f)
						{
							func_296(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_295(Local_1295))
					{
						if (!IS_VEHICLE_DOOR_DAMAGED(Local_1295, 2))
						{
							if (IS_VEHICLE_DOOR_FULLY_OPEN(Local_1295, 2))
							{
								SET_VEHICLE_DOOR_OPEN(Local_1295, 2, 1, false);
								SET_VEHICLE_DOOR_LATCHED(Local_1295, 2, 0, 0, 1);
								iLocal_1315 = 1;
							}
						}
						else
						{
							iLocal_1315 = 1;
						}
						if (!IS_VEHICLE_DOOR_DAMAGED(Local_1295, 3))
						{
							if (IS_VEHICLE_DOOR_FULLY_OPEN(Local_1295, 3))
							{
								SET_VEHICLE_DOOR_OPEN(Local_1295, 3, 1, false);
								SET_VEHICLE_DOOR_LATCHED(Local_1295, 3, 0, 0, 1);
								iLocal_1316 = 1;
							}
						}
						else
						{
							iLocal_1316 = 1;
						}
						if (iLocal_1315 && iLocal_1316)
						{
							iLocal_1314 = 1;
							func_296(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_135(uParam0))
	{
	}
}

int func_295(int iParam0)
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

void func_296(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = GET_GAME_TIMER();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_297(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (ARE_STRINGS_EQUAL(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = GET_GAME_TIMER();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_298(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = GET_GAME_TIMER();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_299(int iParam0, bool bParam1)
{
	vector3 vVar0;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_ENTITY_ATTACHED(iParam0))
		{
			DETACH_ENTITY(iParam0, 1, bParam1);
			SET_ENTITY_COLLISION(iParam0, true, 0);
			ACTIVATE_PHYSICS(iParam0);
		}
		if (bParam1)
		{
			vVar0 = { func_300(GET_ENTITY_COORDS(iParam0, true) - GET_ENTITY_COORDS(Local_1295, GET_ENTITY_COORDS(-0.15f, 0.15f), IntToFloat(-GET_ENTITY_COORDS(3, 6)), GET_ENTITY_COORDS(-0.1f, 0.1f))) };
			APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 1, vVar0 * FtoV(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(0.25f, 0.5f)), 0, 1, 1, 0);
			APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 5, IntToFloat(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(0, 10)), IntToFloat(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(0, 10)), IntToFloat(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(0, 10)), 0, 1, 1, 0);
			SET_ENTITY_NO_COLLISION_ENTITY(iParam0, Local_1295, true);
		}
	}
}

Vector3 func_300(vector3 vParam0)
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

int func_301(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_302(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	float fVar4;
	
	if (!func_135(uParam0))
	{
		if (((!DOES_ENTITY_EXIST(vLocal_1285.x) || DOES_ENTITY_EXIST(vLocal_1285.x)) || (DOES_ENTITY_EXIST(Local_1295) && func_202(Local_1295, vLocal_1285.x, 1) > 200f)) || (!DOES_ENTITY_EXIST(vLocal_1285.x, 0) && func_202(Local_1295, vLocal_1285.x, 1) > 200f))
		{
			if (DOES_ENTITY_EXIST(Local_1295) && DOES_ENTITY_EXIST(Local_1295, 0))
			{
				_0x2B6747FAA9DB9D6B(Local_1295, 0);
			}
			SET_PED_AS_NO_LONGER_NEEDED(&vLocal_1285);
			func_298(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!DOES_ENTITY_EXIST(Local_1295) || !DOES_ENTITY_EXIST(Local_1295, 0)) || !DOES_ENTITY_EXIST(vLocal_1285.x, Local_1295, 0)))
			{
				iLocal_1307 = 0;
				iLocal_1308 = 0;
				StringCopy(&cLocal_1309, "", 24);
				func_296(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_1295))
					{
						if ((!iLocal_1302 && (GET_GAME_TIMER() - iLocal_1304) > 500) && fLocal_1303 >= 4f)
						{
							iLocal_1302 = 1;
							iLocal_1301++;
						}
					}
					else if (iLocal_1302)
					{
						iLocal_1304 = GET_GAME_TIMER();
						iLocal_1302 = 0;
					}
					vVar1 = { func_300(GET_ENTITY_COORDS(iVar0, true) - GET_ENTITY_COORDS(Local_1295, true)) };
					vVar2 = { GET_ENTITY_VELOCITY(Local_1295) - GET_ENTITY_VELOCITY(iVar0) };
					fLocal_1303 = func_306(vVar2, vVar1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 124)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 125)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 126)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 29)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 118)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 123)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 22)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 24)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 47)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 62)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 62)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 138)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 88)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 89)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_296(uParam0, 4, 0);
					}
					else
					{
						if (DOES_ENTITY_EXIST(Local_1295) && DOES_ENTITY_EXIST(Local_1295, 0))
						{
							if ((IS_ENTITY_STATIC(IS_ENTITY_STATIC()) || fLocal_1303 > 0.5f) && IS_ENTITY_STATIC(IS_ENTITY_STATIC(), IS_ENTITY_STATIC(Local_1295, 0f, 2f, -0.5f), IS_ENTITY_STATIC(Local_1295, 0f, 10f, 2f), 4.5f, 0, true, 0))
							{
								if (!IS_HORN_ACTIVE(Local_1295))
								{
									if (iLocal_1318 == -1)
									{
										iLocal_1318 = GET_GAME_TIMER();
									}
									else if ((GET_GAME_TIMER() - iLocal_1318) > 5000)
									{
										START_VEHICLE_HORN(Local_1295, 2000, 1330140418, 0);
									}
								}
								else
								{
									iLocal_1318 = -1;
								}
							}
						}
						if (func_305(Local_1295, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_275(&uLocal_94, "jhp2a_airport");
						}
						if (!func_304(vLocal_1285.x, -235832601, 1))
						{
							if (IS_ENTITY_IN_ANGLED_AREA(Local_1295, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, true, 0))
							{
								if (GET_IS_WAYPOINT_RECORDING_LOADED("jhp2a_airport"))
								{
									iLocal_1307 = 0;
									iLocal_1308 = 0;
									StringCopy(&cLocal_1309, "", 24);
									func_296(uParam0, 2, 0);
								}
							}
							else
							{
								TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, &Global_95561, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 124)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 125)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 126)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 29)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 118)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 123)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 22)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 24)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 47)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 62)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 62)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 138)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 88)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 89)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_296(uParam0, 5, 0);
					}
					else if (!func_304(vLocal_1285.x, -235832601, 1))
					{
						if (IS_ENTITY_IN_ANGLED_AREA(Local_1295, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, true, 0))
						{
							iLocal_1307 = 0;
							iLocal_1308 = 0;
							StringCopy(&cLocal_1309, "", 24);
							func_296(uParam0, 3, 0);
						}
						else
						{
							TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 124)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 125)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 126)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 29)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 118)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 123)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 22)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 24)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 47)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 62)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 62)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 138)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 88)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, 89)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), Local_1295, 1)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_296(uParam0, 5, 0);
					}
					else if (IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 1))
					{
						if (!func_304(vLocal_1285.x, 451360105, 1))
						{
							TASK_LEAVE_VEHICLE(vLocal_1285.x, Local_1295, 0);
						}
					}
					else
					{
						SET_VEHICLE_DOORS_LOCKED(Local_1295, 2);
						if (!func_304(vLocal_1285.x, 242628503, 1))
						{
							OPEN_SEQUENCE_TASK(&iLocal_1283);
							TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, 1);
							CLOSE_SEQUENCE_TASK(iLocal_1283);
							TASK_PERFORM_SEQUENCE(vLocal_1285.x, iLocal_1283);
							CLEAR_SEQUENCE_TASK(&iLocal_1283);
						}
					}
					break;
				
				case 4:
					if (IS_VEHICLE_TYRE_BURST(Local_1295, 0, 1))
					{
						iVar3++;
					}
					if (IS_VEHICLE_TYRE_BURST(Local_1295, 1, 1))
					{
						iVar3++;
					}
					if (IS_VEHICLE_TYRE_BURST(Local_1295, 4, 1))
					{
						iVar3++;
					}
					if (IS_VEHICLE_TYRE_BURST(Local_1295, 5, 1))
					{
						iVar3++;
					}
					if (((((IntToFloat(GET_ENTITY_HEALTH(Local_1295)) <= 0f || GET_ENTITY_HEALTH(Local_1295) <= 250f) || GET_ENTITY_HEALTH(Local_1295) <= 400f) || GET_ENTITY_HEALTH(vLocal_1285.x)) || iVar3 >= 2) || iLocal_1301 > 6)
					{
						if (DOES_ENTITY_EXIST(Local_1295) && DOES_ENTITY_EXIST(Local_1295, 0))
						{
							_0x2B6747FAA9DB9D6B(Local_1295, 0);
						}
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_296(uParam0, 5, 0);
					}
					else if (!func_304(vLocal_1285.x, -1273030092, 1))
					{
						TASK_VEHICLE_MISSION_PED_TARGET(vLocal_1285.x, Local_1295, TASK_VEHICLE_MISSION_PED_TARGET(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (DOES_ENTITY_EXIST(Local_1295) && !DOES_ENTITY_EXIST(Local_1295, 0))
					{
						if (IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0))
						{
							if (!func_87(Local_1295))
							{
								if (!func_304(vLocal_1285.x, -2118855366, 1))
								{
									CLEAR_PED_TASKS(vLocal_1285.x);
									TASK_VEHICLE_TEMP_ACTION(vLocal_1285.x, Local_1295, 5, -1);
								}
							}
							else if (!func_304(vLocal_1285.x, 451360105, 1))
							{
								TASK_LEAVE_VEHICLE(vLocal_1285.x, Local_1295, 256);
							}
						}
						else if (!func_304(vLocal_1285.x, 780511057, 1))
						{
							SET_PED_CAN_BE_TARGETTED(vLocal_1285.x, true);
							TASK_COMBAT_PED(vLocal_1285.x, TASK_COMBAT_PED(), 0, 16);
						}
					}
					if (DOES_ENTITY_EXIST(Local_1295) && !DOES_ENTITY_EXIST(Local_1295, 0))
					{
						_SET_VEHICLE_DOOR_CAN_BREAK(Local_1295, 2, true);
						_SET_VEHICLE_DOOR_CAN_BREAK(Local_1295, 3, true);
					}
					break;
				}
		}
		if ((DOES_ENTITY_EXIST(vLocal_1285.x) && !DOES_ENTITY_EXIST(vLocal_1285.x)) && !DOES_ENTITY_EXIST(vLocal_1285.x))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1307)
					{
						case 0:
							if (func_42() && !IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (IS_PED_BEING_JACKED(vLocal_1285.x))
								{
									func_62(vLocal_1285.x, "JACKED_GENERIC", 10);
								}
								else
								{
									func_62(vLocal_1285.x, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1307++;
							}
							break;
						
						case 1:
							if (!IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0) || iLocal_1282 == 3)
							{
								if (!IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0))
								{
									iLocal_1307 = 4;
								}
								else
								{
									iLocal_1307++;
								}
							}
							else if (func_42() && !IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (func_303(&uLocal_1105, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1307++;
								}
							}
							break;
						
						case 2:
							if (func_42() && !IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									fVar4 = vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), GET_ENTITY_COORDS(vLocal_1285.x, true));
									if ((((((iLocal_1302 || HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 124)) || HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 125)) || HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 126)) || fVar4 < 49f) && (HAS_PED_RECEIVED_EVENT() - iLocal_1308) > 5000) && fVar4 < 225f)
									{
										if (GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_ATT_M", 24);
										}
									}
								}
								if (!IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									if (ARE_STRINGS_EQUAL(&cLocal_1309, "GENERIC_CURSE_HIGH"))
									{
										func_62(vLocal_1285.x, "GENERIC_CURSE_HIGH", 10);
										iLocal_1307++;
									}
									else
									{
										if (func_303(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
										{
											iLocal_1307++;
										}
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_43() && !IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								iLocal_1308 = GET_GAME_TIMER();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1307)
					{
						case 0:
							if (func_42() && !IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									if ((GET_GAME_TIMER() - iLocal_1308) > 5000 && vdist2(GET_GAME_TIMER(GET_GAME_TIMER(), true), GET_GAME_TIMER(vLocal_1285.x, true)) < 400f)
									{
										if (GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_COMB_M", 24);
										}
									}
								}
								if (!IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									if (ARE_STRINGS_EQUAL(&cLocal_1309, "GENERIC_INSULT_HIGH"))
									{
										func_62(vLocal_1285.x, "GENERIC_INSULT_HIGH", 10);
										iLocal_1307++;
									}
									else if (func_303(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
									{
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_43() && !IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								iLocal_1308 = GET_GAME_TIMER();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_135(uParam0))
	{
	}
}

bool func_303(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_27(sParam2, iParam3, 0);
}

int func_304(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

float func_305(int iParam0, vector3 vParam1, bool bParam2)
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

float func_306(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_307(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	TRIGGER_MUSIC_EVENT("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_319();
		func_8(0);
		TERMINATE_THIS_THREAD();
	}
	else if (!bLocal_93)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_317(&Var0);
		}
		else
		{
			func_308(&Var0, &cVar1);
		}
		bLocal_93 = true;
	}
}

void func_308(char* sParam0, char* sParam1)
{
	func_316(sParam0, sParam1);
	func_309(0);
}

void func_309(int iParam0)
{
	int iVar0;
	
	if (Global_111560.f_9080 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_310(iVar0))
		{
			return;
		}
		SET_BIT(&(Global_89451[iVar0 /*5*/].f_1), 5);
		Global_98705 = iParam0;
	}
}

int func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_315();
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_89451[iParam0 /*5*/];
	iVar1 = Global_76846.f_109[iVar0 /*4*/];
	func_314(iVar1, 1);
	_0xC9A763D8FE87436A(_0xC9A763D8FE87436A());
	SPECIAL_ABILITY_DEACTIVATE(SPECIAL_ABILITY_DEACTIVATE());
	func_311(&(Global_111560.f_2358.f_539), iVar1);
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

void func_311(var uParam0, int iParam1)
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
			if (!func_313(Global_111560.f_18528[iVar0], &vVar2, &fVar3))
			{
				Global_111560.f_18528[iVar0] = 318;
				func_312(&(uParam0->f_2296[iVar0]));
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

void func_312(var uParam0)
{
	*uParam0 = -15;
}

int func_313(int iParam0, var uParam1, float fParam2)
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
			return func_313(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_313(8, uParam1, fParam2);
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

void func_314(int iParam0, bool bParam1)
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

void func_315()
{
	Global_98704 = 1;
	if (IS_PLAYER_BEING_ARRESTED(IS_PLAYER_BEING_ARRESTED(), 1))
	{
		if (IS_STRING_NULL_OR_EMPTY(&Global_76809))
		{
			switch (func_191())
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
			switch (func_191())
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

void func_316(char* sParam0, char* sParam1)
{
	if (!IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			if (GET_LENGTH_OF_LITERAL_STRING(sParam1) <= 16)
			{
				StringCopy(&Global_76809, sParam0, 16);
				StringCopy(&Global_76813, sParam1, 16);
			}
		}
	}
}

void func_317(char* sParam0)
{
	func_318(sParam0);
	func_309(0);
}

void func_318(char* sParam0)
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

void func_319()
{
	int iVar0;
	
	if (HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111560.f_9080 || func_6(0))
	{
		if (!func_320())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_310(iVar0))
				{
					return;
				}
				SET_BIT(&(Global_89451[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_315();
		}
	}
}

int func_320()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

__________________________
Native Named by Reliency
1577161199
__________________________
