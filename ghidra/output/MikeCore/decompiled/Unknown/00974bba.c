// Function: FUN_00974bba
// Address: 00974bba
// Size: 3002 bytes
// Class: Unknown
// String references:
//   "Did not get an expected iLok result packet. Connection ID received: %s"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libauthorize/ClientConnect...
//   "std::__1::string pace::ClientConnectionOpener::open(pace::SharedAuthorizationClient_T, const pace::...


/* WARNING: Removing unreachable block (ram,0x00975732) */

undefined8 FUN_00974bba(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  string *psVar7;
  ulong uVar8;
  char *this;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar9;
  bool bVar10;
  undefined *local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  string *local_3b0;
  undefined8 local_3a8;
  undefined *local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined2 local_378;
  undefined *local_370;
  undefined *local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined2 local_348;
  undefined4 local_346;
  undefined1 local_342;
  undefined *local_340;
  undefined *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined2 local_300;
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined5 uStack_290;
  undefined3 local_28b;
  undefined5 uStack_288;
  undefined2 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined7 local_220;
  undefined4 uStack_219;
  undefined4 local_210;
  undefined1 local_20c;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined1 local_196;
  undefined4 local_195;
  undefined2 local_191;
  undefined1 local_18f;
  undefined4 local_188;
  undefined2 local_184;
  undefined1 local_182;
  undefined4 local_181;
  undefined1 local_17d;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined4 local_146;
  undefined1 local_142;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11e;
  undefined1 local_11a;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_bb;
  undefined4 local_b0;
  undefined2 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_a8 = param_3;
  local_a0 = param_1;
  local_50 = param_4;
  FUN_00975f62();
  uVar3 = *param_2;
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    LOCK();
    *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(unaff_RSI + 8) = uVar3;
  plVar4 = *(longlong **)(unaff_RSI + 0x10);
  *(longlong *)(unaff_RSI + 0x10) = lVar9;
  if (plVar4 != (longlong *)0x0) {
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
  local_178 = &DAT_0251b318;
  local_170 = &DAT_025170b0;
  local_168 = &DAT_02517058;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_146 = 0x101;
  local_142 = 0;
  local_140 = &DAT_02517058;
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
  local_3e0 = &DAT_0251a598;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = (string *)0x0;
  local_3a8 = 0;
  local_3a0 = &DAT_02516ff8;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = &DAT_02517118;
  local_368 = &DAT_02517058;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_346 = 0x101;
  local_342 = 0;
  local_340 = &DAT_0251b468;
  local_338 = &DAT_0251b398;
  local_300 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_2f8 = &DAT_0251b400;
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
  local_248 = &DAT_0251d288;
  local_220 = 0;
  uStack_219 = 0;
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_20c = 0;
  local_210 = 0;
  local_208 = &DAT_0251c3a0;
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
  local_68 = (longlong *)param_2[1];
  if (local_68 != (longlong *)0x0) {
    LOCK();
    local_68[1] = local_68[1] + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(unaff_RSI + 0x44);
  local_60 = *(undefined8 *)(unaff_RSI + 0x48);
  local_58 = *(longlong **)(unaff_RSI + 0x50);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    local_58[1] = local_58[1] + 1;
    UNLOCK();
  }
  this = (char *)&local_70;
  FUN_00930118(this,&local_48,uVar2,&local_60);
  if (local_58 != (longlong *)0x0) {
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
  if (local_68 != (longlong *)0x0) {
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
  if ((undefined8 *)(unaff_RSI + 0x2f0) != &local_3b8) {
    psVar7 = local_3b0;
    FUN_008ce95a();
  }
  lVar9 = *(longlong *)(unaff_RSI + 0x2e0);
  if (lVar9 != 0) {
    bVar10 = local_181._3_1_ != '\0';
    if (bVar10) {
      FUN_008f1a3c();
      lVar9 = *(longlong *)(unaff_RSI + 0x2e0);
    }
    *(bool *)(lVar9 + 0x88) = bVar10;
  }
  std::string::operator=((string *)this,psVar7);
  *(undefined1 *)(unaff_RSI + 0x40) = 1;
  if (local_181._1_1_ != '\0') {
    pvVar5 = operator_new((ulong)this);
    uVar8 = (ulong)this;
    FUN_0088962c();
    puVar6 = operator_new(uVar8);
    puVar6[2] = 0;
    puVar6[1] = 0;
    this = &DAT_025205c0;
    *puVar6 = &DAT_025205c0;
    puVar6[3] = pvVar5;
    *(void **)(unaff_RSI + 0x30) = pvVar5;
    plVar4 = *(longlong **)(unaff_RSI + 0x38);
    *(undefined8 **)(unaff_RSI + 0x38) = puVar6;
    if (plVar4 != (longlong *)0x0) {
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
  return unaff_RDI;
}


