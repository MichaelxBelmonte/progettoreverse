// Function: FUN_00974bba
// Address: 00974bba
// Size: 3002 bytes
// Class: Unknown
// String references:
//   "Did not get an expected iLok result packet. Connection ID received: %s"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libauthorize/ClientConnect...
//   "std::__1::string pace::ClientConnectionOpener::open(pace::SharedAuthorizationClient_T, const pace::...

uint64_t FUN_00974bba(uint64_t param_1,void*param_2,int64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *pvVar5;
  void*puVar6;
  string *psVar7;
  ulong uVar8;
  char *this;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t lVar9;
  bool bVar10;
  void*local_3e0;
  uint64_t local_3d8;
  uint64_t local_3d0;
  uint64_t local_3c8;
  uint64_t local_3c0;
  uint64_t local_3b8;
  string *local_3b0;
  uint64_t local_3a8;
  void*local_3a0;
  uint32_t local_398;
  uint64_t local_390;
  uint64_t local_388;
  uint64_t local_380;
  uint16_t local_378;
  void*local_370;
  void*local_368;
  uint64_t local_360;
  uint64_t local_358;
  uint64_t local_350;
  uint16_t local_348;
  uint32_t local_346;
  uint8_t local_342;
  void*local_340;
  void*local_338;
  uint64_t local_330;
  uint64_t local_328;
  uint64_t local_320;
  uint64_t local_318;
  uint64_t local_310;
  uint64_t local_308;
  uint16_t local_300;
  void*local_2f8;
  uint64_t local_2f0;
  uint64_t local_2e8;
  uint64_t local_2e0;
  uint32_t local_2d8;
  uint64_t local_2d0;
  uint64_t local_2c8;
  uint64_t local_2c0;
  uint64_t local_2b8;
  uint64_t local_2b0;
  uint64_t local_2a8;
  uint64_t local_2a0;
  uint64_t local_298;
  undefined5 uStack_290;
  undefined3 local_28b;
  undefined5 uStack_288;
  uint16_t local_280;
  uint64_t local_278;
  uint64_t local_270;
  uint64_t local_268;
  uint64_t local_260;
  uint64_t local_258;
  uint64_t local_250;
  void*local_248;
  uint64_t local_240;
  uint64_t local_238;
  uint64_t local_230;
  uint64_t local_228;
  undefined7 local_220;
  uint32_t uStack_219;
  uint32_t local_210;
  uint8_t local_20c;
  void*local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint64_t local_1a0;
  uint16_t local_198;
  uint8_t local_196;
  uint32_t local_195;
  uint16_t local_191;
  uint8_t local_18f;
  uint32_t local_188;
  uint16_t local_184;
  uint8_t local_182;
  uint32_t local_181;
  uint8_t local_17d;
  void*local_178;
  void*local_170;
  void*local_168;
  uint64_t local_160;
  uint64_t local_158;
  uint64_t local_150;
  uint16_t local_148;
  uint32_t local_146;
  uint8_t local_142;
  void*local_140;
  uint64_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  uint16_t local_120;
  uint32_t local_11e;
  uint8_t local_11a;
  uint32_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint8_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint32_t local_c0;
  uint8_t local_bc;
  uint32_t local_bb;
  uint32_t local_b0;
  uint16_t local_ac;
  int64_t local_a8;
  uint64_t local_a0;
  uint64_t local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  local_a8 = param_3;
  local_a0 = param_1;
  local_50 = param_4;
  FUN_00975f62();
  uVar3 = *param_2;
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    LOCK();
    *(int64_t *)(lVar9 + 8) = *(int64_t *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  *(void*)(arg1 + 8) = uVar3;
  plVar4 = *(int64_t **)(arg1 + 0x10);
  *(int64_t *)(arg1 + 0x10) = lVar9;
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  local_178 = &g_0251b318;
  local_170 = &g_025170b0;
  local_168 = &g_02517058;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_146 = 0x101;
  local_142 = 0;
  local_140 = &g_02517058;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11e = 0x101;
  local_11a = 0;
  local_118 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0x10000;
  local_bc = 0;
  local_bb = 0x1010101;
  local_ac = 0;
  local_b0 = 2;
  if (local_a8 != 0) {
    local_ac = 1;
    FUN_0088a8ca();
  }
  local_3e0 = &g_0251a598;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = (string *)0x0;
  local_3a8 = 0;
  local_3a0 = &g_02516ff8;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = &g_02517118;
  local_368 = &g_02517058;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_346 = 0x101;
  local_342 = 0;
  local_340 = &g_0251b468;
  local_338 = &g_0251b398;
  local_300 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_2f8 = &g_0251b400;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  local_28b = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_280 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_248 = &g_0251d288;
  local_220 = 0;
  uStack_219 = 0;
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_20c = 0;
  local_210 = 0;
  local_208 = &g_0251c3a0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1c8 = 0x100000001;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_198 = 1;
  local_196 = 0;
  local_195 = 0x1010101;
  local_191 = 0;
  local_18f = 0;
  local_188 = 4;
  local_184 = 0x100;
  local_182 = 1;
  local_181 = 0;
  local_17d = 1;
  FUN_008920c2();
  FUN_009e95e1();
  FUN_0088a8ca();
  FUN_008f91be();
  local_38 = 0;
  local_48 = 0;
  lStack_40 = 0;
  FUN_00976707(0,1);
  local_70 = *param_2;
  local_68 = (int64_t *)param_2[1];
  if (local_68 != (int64_t *)0x0) {
    LOCK();
    local_68[1] = local_68[1] + 1;
    UNLOCK();
  }
  uVar2 = *(void*)(arg1 + 0x44);
  local_60 = *(void*)(arg1 + 0x48);
  local_58 = *(int64_t **)(arg1 + 0x50);
  if (local_58 != (int64_t *)0x0) {
    LOCK();
    local_58[1] = local_58[1] + 1;
    UNLOCK();
  }
  this = (char *)&local_70;
  FUN_00930118(this,&local_48,uVar2,&local_60);
  if (local_58 != (int64_t *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar9 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*local_58 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (int64_t *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    lVar9 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*local_68 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  psVar7 = (string *)&local_3e0;
  FUN_00977a8a();
  if ((void*)(arg1 + 0x2f0) != &local_3b8) {
    psVar7 = local_3b0;
    FUN_008ce95a();
  }
  lVar9 = *(int64_t *)(arg1 + 0x2e0);
  if (lVar9 != 0) {
    bVar10 = local_181._3_1_ != '\0';
    if (bVar10) {
      FUN_008f1a3c();
      lVar9 = *(int64_t *)(arg1 + 0x2e0);
    }
    *(bool *)(lVar9 + 0x88) = bVar10;
  }
  std::string::operator=((string *)this,psVar7);
  *(void*)(arg1 + 0x40) = 1;
  if (local_181._1_1_ != '\0') {
    pvVar5 = operator_new((ulong)this);
    uVar8 = (ulong)this;
    FUN_0088962c();
    puVar6 = operator_new(uVar8);
    puVar6[2] = 0;
    puVar6[1] = 0;
    this = &g_025205c0;
    *puVar6 = &g_025205c0;
    puVar6[3] = pvVar5;
    *(void **)(arg1 + 0x30) = pvVar5;
    plVar4 = *(int64_t **)(arg1 + 0x38);
    *(void**)(arg1 + 0x38) = puVar6;
    if (plVar4 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_50 != 0) {
    if (local_181._2_1_ == '\0') {
      FUN_00975e6a();
      FUN_00925fd0();
      psVar7 = (string *)FUN_00926010();
      FUN_00983230();
      this = 
      "std::__1::string pace::ClientConnectionOpener::open(pace::SharedAuthorizationClient_T, const pace::eden::thrift::authorize::AuthLocation &, const pet::ilok::CommandPacket *, pet::ilok::ResultPacket *)"
      ;
      FUN_00928ab0("std::__1::string pace::ClientConnectionOpener::open(pace::SharedAuthorizationClient_T, const pace::eden::thrift::authorize::AuthLocation &, const pet::ilok::CommandPacket *, pet::ilok::ResultPacket *)"
                   ,0xe3);
      FUN_009bd14b();
    }
    FUN_0088b676();
  }
  std::string::string((string *)this,psVar7);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(this);
  }
  FUN_008c5c9c();
  FUN_008c52c8();
  FUN_008d2b4c();
  return this_ptr;
}

