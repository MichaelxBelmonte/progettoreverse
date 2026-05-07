// Function: FUN_0092cc22
// Address: 0092cc22
// Size: 840 bytes
// Class: Unknown
// String references:
//   "findAuthChains"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "void pace::AuthorizationVerifier::findAuths(const std::vector<petpub::AuthSearch> &, const petpub::...


void FUN_0092cc22(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar4;
  undefined4 uVar5;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined1 local_178;
  undefined4 local_177;
  undefined1 local_173;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined5 local_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined *local_a8;
  longlong local_a0 [6];
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  
  lVar1 = *param_1;
  local_d0 = param_2;
  for (lVar4 = param_1[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x288) {
    (*(code *)**(undefined8 **)(lVar4 + -0x288))();
  }
  param_1[1] = lVar1;
  if (param_3 != (longlong *)0x0) {
    lVar1 = *param_3;
    for (lVar4 = param_3[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x760) {
      (*(code *)**(undefined8 **)(lVar4 + -0x760))();
    }
    param_3[1] = lVar1;
  }
  local_1a0 = &DAT_0251a000;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = &DAT_0251c7b8;
  local_178 = 1;
  local_16c = 0;
  local_177 = 0;
  local_173 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0x101010101010101;
  local_128 = 0;
  local_126 = 1;
  local_170 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_eb = 0;
  uStack_e8 = 0;
  local_a8 = &DAT_0251a068;
  local_6c = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_70 = 0;
  local_68 = 0x1000000000004;
  local_60 = 1;
  if (&local_198 != unaff_RSI) {
    FUN_0094e6c0(0x30,unaff_RSI[1]);
  }
  FUN_008ff698();
  local_120 = FUN_009e95e1();
  local_e0 = unaff_RDI + 0x18;
  local_d8 = 0;
  FUN_009b4e10();
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    plVar3 = *(longlong **)(unaff_RDI + 8);
    if (plVar3 == (longlong *)0x0) {
      FUN_00925fd0();
      uVar2 = FUN_00926010();
      uVar5 = FUN_00928ab0("void pace::AuthorizationVerifier::findAuths(const std::vector<petpub::AuthSearch> &, const petpub::FindAuthOptions &, std::vector<petpub::AuthChain> &, std::vector<petpub::AuthSituation> *)"
                           ,0x8c4);
      FUN_009bd14b(uVar5,uVar2);
      plVar3 = *(longlong **)(unaff_RDI + 8);
    }
    (**(code **)(*plVar3 + 0xb0))(4,&local_1a0);
  }
  else {
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    FUN_0092cfd5(0,1);
    plVar3 = &local_58;
    uVar5 = FUN_00928f8a(plVar3,&local_c8);
    FUN_0094e87e(uVar5,&local_a8);
    if (local_58 != 0) {
      lStack_50 = local_58;
      operator_delete(plVar3);
    }
    if (local_c8 != 0) {
      lStack_c0 = local_c8;
      operator_delete(plVar3);
    }
  }
  if (local_a0 != param_1) {
    FUN_0090e248();
  }
  if ((param_3 != (longlong *)0x0) && (local_a0 + 3 != param_3)) {
    FUN_008cdc64();
  }
  FUN_0094d0ec();
  FUN_008be2ce();
  FUN_008bd4bc();
  return;
}


