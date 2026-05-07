// Function: FUN_0099e28a
// Address: 0099e28a
// Size: 891 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords(const CMD_CmmdPayload_SignECDSA_Using...


void FUN_0099e28a(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  undefined4 uVar3;
  undefined8 local_res8;
  undefined *local_288;
  undefined *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined4 local_25e;
  undefined1 local_25a;
  undefined *local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined2 local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined5 uStack_1a8;
  undefined3 local_1a3;
  undefined5 uStack_1a0;
  undefined2 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined7 local_138;
  undefined4 uStack_131;
  undefined4 local_128;
  undefined1 local_124;
  undefined *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined4 local_f6;
  undefined1 local_f2;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined1 local_ca;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_6b;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_120 = &DAT_025170b0;
  local_118 = &DAT_02517058;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f6 = 0x101;
  local_f2 = 0;
  local_f0 = &DAT_02517058;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_ce = 0x101;
  local_ca = 0;
  local_c8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x10000;
  local_6c = 0;
  local_6b = 0x1010101;
  local_288 = &DAT_02517118;
  local_280 = &DAT_02517058;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_25e = 0x101;
  local_25a = 0;
  local_258 = &DAT_0251b468;
  local_250 = &DAT_0251b398;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = &DAT_0251b400;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  local_1a3 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = &DAT_0251d288;
  local_138 = 0;
  uStack_131 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_124 = 0;
  local_128 = 0;
  local_38 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_60 = param_1;
  local_58 = param_2;
  local_50 = param_4;
  if (unaff_RDI[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords(const CMD_CmmdPayload_SignECDSA_UsingAuthRecords_Struct &, const vector<uint8_t> &, const vector<uint8_t> *, CMD_RsltPayload_SignECDSA_UsingAuthRecords_Struct &, BIG_CompactSignatureECDSA_Struct &, BIG_CompactPublicKeyECC_Struct &)"
                         ,0x8a0);
    FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*unaff_RDI + 0x150))(local_60,local_58,&local_120);
  (**(code **)(*(longlong *)unaff_RDI[7] + 0x10))(uVar3,&local_288);
  (**(code **)(*unaff_RDI + 600))(0,0,param_3,&local_48);
  pvVar2 = local_50;
  (**(code **)(*unaff_RDI + 0x158))(local_50,&local_48,local_res8);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}


