// Function: FUN_009a171e
// Address: 009a171e
// Size: 835 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::GetMasterTime(const CMD_CmmdPayload_GetMasterTime_Struct &, CMD_...


void FUN_009a171e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  undefined4 uVar3;
  undefined *local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined2 local_248;
  undefined4 local_246;
  undefined1 local_242;
  undefined *local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined5 uStack_190;
  undefined3 local_18b;
  undefined5 uStack_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined7 local_120;
  undefined4 uStack_119;
  undefined4 local_110;
  undefined1 local_10c;
  undefined *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined4 local_de;
  undefined1 local_da;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined4 local_b6;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_53;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_108 = &DAT_025170b0;
  local_100 = &DAT_02517058;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_de = 0x101;
  local_da = 0;
  local_d8 = &DAT_02517058;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b6 = 0x101;
  local_b2 = 0;
  local_b0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0x10000;
  local_54 = 0;
  local_53 = 0x1010101;
  local_270 = &DAT_02517118;
  local_268 = &DAT_02517058;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_246 = 0x101;
  local_242 = 0;
  local_240 = &DAT_0251b468;
  local_238 = &DAT_0251b398;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = &DAT_0251b400;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  local_18b = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = &DAT_0251d288;
  local_120 = 0;
  uStack_119 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_10c = 0;
  local_110 = 0;
  local_38 = 0;
  uVar3 = 0;
  local_48 = 0;
  lStack_40 = 0;
  if (unaff_RDI[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::GetMasterTime(const CMD_CmmdPayload_GetMasterTime_Struct &, CMD_RsltPayload_GetMasterTime_Struct &)"
                         ,0xc4d);
    uVar3 = FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*unaff_RDI + 0x208))(uVar3,&local_108);
  (**(code **)(*(longlong *)unaff_RDI[7] + 0x10))(uVar3,&local_270);
  pvVar2 = (void *)0x0;
  (**(code **)(*unaff_RDI + 600))(0,0,param_2,&local_48);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}


