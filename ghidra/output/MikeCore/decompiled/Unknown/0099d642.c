// Function: FUN_0099d642
// Address: 0099d642
// Size: 857 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::HCPKeyExchange(const CMD_CmmdPayload_HCPKeyExchange_Struct &, co...


void FUN_0099d642(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  undefined4 uVar3;
  undefined *local_280;
  undefined *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 local_258;
  undefined4 local_256;
  undefined1 local_252;
  undefined *local_250;
  undefined *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined2 local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined5 uStack_1a0;
  undefined3 local_19b;
  undefined5 uStack_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined7 local_130;
  undefined4 uStack_129;
  undefined4 local_120;
  undefined1 local_11c;
  undefined *local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined4 local_ee;
  undefined1 local_ea;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined4 local_c6;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_63;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_118 = &DAT_025170b0;
  local_110 = &DAT_02517058;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ee = 0x101;
  local_ea = 0;
  local_e8 = &DAT_02517058;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c6 = 0x101;
  local_c2 = 0;
  local_c0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0x10000;
  local_64 = 0;
  local_63 = 0x1010101;
  local_280 = &DAT_02517118;
  local_278 = &DAT_02517058;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_256 = 0x101;
  local_252 = 0;
  local_250 = &DAT_0251b468;
  local_248 = &DAT_0251b398;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = &DAT_0251b400;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  local_19b = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = &DAT_0251d288;
  local_130 = 0;
  uStack_129 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_11c = 0;
  local_120 = 0;
  local_38 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = param_3;
  local_50 = param_1;
  if (unaff_RDI[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::HCPKeyExchange(const CMD_CmmdPayload_HCPKeyExchange_Struct &, const vector<uint8_t> &, CMD_RsltPayload_HCPKeyExchange_Struct &, vector<uint8_t> *)"
                         ,0x7a2);
    FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*unaff_RDI + 0x130))(&local_118,param_2,local_58);
  (**(code **)(*(longlong *)unaff_RDI[7] + 0x10))(uVar3,&local_280);
  pvVar2 = (void *)0x0;
  (**(code **)(*unaff_RDI + 600))(0,0,local_50,&local_48);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}


