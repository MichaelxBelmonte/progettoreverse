// Function: FUN_0092d730
// Address: 0092d730
// Size: 1373 bytes
// Class: GNString
// String references:
//   "findStorageRecords"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "void pace::AuthorizationVerifier::findStorageRecords(const petpub::AuthChain &, const std::vector<u...


void FUN_0092d730(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined2 local_3a0;
  undefined8 local_39c;
  undefined8 local_394;
  undefined8 local_38c;
  undefined8 local_384;
  undefined8 local_37c;
  undefined8 local_374;
  undefined8 local_36c;
  undefined4 local_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined4 local_33c;
  undefined *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
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
  undefined8 local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined4 local_18d;
  undefined2 local_189;
  undefined1 local_187;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined7 uStack_158;
  undefined1 local_151;
  undefined7 uStack_150;
  undefined8 local_149;
  undefined4 local_141;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_3c8 = &DAT_0251a170;
  local_3c0 = &DAT_0251c5a8;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_364 = 0;
  local_39c = 0;
  local_394 = 0;
  local_38c = 0;
  local_384 = 0;
  local_37c = 0;
  local_374 = 0;
  local_36c = 0;
  local_360 = 0xffffffffffffffff;
  local_33c = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = &DAT_0251c338;
  local_300 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_238 = 0;
  local_240 = 0;
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_230 = 1;
  local_224 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_200 = &DAT_0251c3a0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1c0 = 0x100000001;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_190 = 1;
  local_18e = 0;
  local_18d = 0x1010101;
  local_189 = 0;
  local_187 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  local_151 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_149 = 0x100010000010001;
  local_141 = 0;
  local_228 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_f8 = &DAT_0251a1d8;
  local_f0 = &DAT_0251c268;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 4;
  local_7c = 0x100;
  FUN_008f91be();
  if ((param_2 != (longlong *)0x0) && (param_2[1] != *param_2)) {
    FUN_0092dcf0();
  }
  local_120 = FUN_009e95e1();
  lVar1 = *(longlong *)(param_1 + 8);
  for (lVar4 = *(longlong *)(param_1 + 0x10); lVar4 != lVar1; lVar4 = lVar4 + -0x90) {
    (*(code *)**(undefined8 **)(lVar4 + -0x90))();
  }
  *(longlong *)(param_1 + 0x10) = lVar1;
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x28); lVar4 != lVar1; lVar4 = lVar4 + -0x60) {
    (*(code *)**(undefined8 **)(lVar4 + -0x60))();
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  lVar1 = *(longlong *)(param_1 + 0x38);
  for (lVar4 = *(longlong *)(param_1 + 0x40); lVar4 != lVar1; lVar4 = lVar4 + -0x58) {
    (*(code *)**(undefined8 **)(lVar4 + -0x58))();
  }
  *(longlong *)(param_1 + 0x40) = lVar1;
  lVar1 = *(longlong *)(param_1 + 0x50);
  for (lVar4 = *(longlong *)(param_1 + 0x58); lVar4 != lVar1; lVar4 = lVar4 + -0x88) {
    (*(code *)**(undefined8 **)(lVar4 + -0x88))();
  }
  *(longlong *)(param_1 + 0x58) = lVar1;
  local_78 = unaff_RDI + 0x18;
  local_70 = 0;
  FUN_009b4e10();
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    plVar3 = *(longlong **)(unaff_RDI + 8);
    if (plVar3 == (longlong *)0x0) {
      FUN_00925fd0();
      uVar2 = FUN_00926010();
      uVar5 = FUN_00928ab0("void pace::AuthorizationVerifier::findStorageRecords(const petpub::AuthChain &, const std::vector<uint32_t> *, petpub::AuthStorage &)"
                           ,0x9e5);
      FUN_009bd14b(uVar5,uVar2);
      plVar3 = *(longlong **)(unaff_RDI + 8);
    }
    (**(code **)(*plVar3 + 0xd8))(4,&local_3c8);
  }
  else {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0;
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
    FUN_0092de0d(0,1);
    plVar3 = &local_48;
    uVar5 = FUN_00928f8a(plVar3,&local_68);
    FUN_0094efa3(uVar5,&local_f8);
    if (local_48 != 0) {
      lStack_40 = local_48;
      operator_delete(plVar3);
    }
    if (local_68 != 0) {
      lStack_60 = local_68;
      operator_delete(plVar3);
    }
  }
  FUN_008ed8c0();
  FUN_0094d0ec();
  FUN_008c016a();
  FUN_008bf988();
  return;
}


