// Function: FUN_0099b5b2
// Address: 0099b5b2
// Size: 865 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::FindAuthRecord(const CMD_CmmdPayload_FindAuthRecord_Struct &, CM...


void FUN_0099b5b2(void *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  undefined4 uVar3;
  undefined *local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined4 local_24e;
  undefined1 local_24a;
  undefined *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined2 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined5 uStack_198;
  undefined3 local_193;
  undefined5 uStack_190;
  undefined2 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined7 local_128;
  undefined4 uStack_121;
  undefined4 local_118;
  undefined1 local_114;
  undefined *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined4 local_e6;
  undefined1 local_e2;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined4 local_be;
  undefined1 local_ba;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_5b;
  void *local_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_110 = &DAT_025170b0;
  local_108 = &DAT_02517058;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e6 = 0x101;
  local_e2 = 0;
  local_e0 = &DAT_02517058;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_be = 0x101;
  local_ba = 0;
  local_b8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x10000;
  local_5c = 0;
  local_5b = 0x1010101;
  local_278 = &DAT_02517118;
  local_270 = &DAT_02517058;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_24e = 0x101;
  local_24a = 0;
  local_248 = &DAT_0251b468;
  local_240 = &DAT_0251b398;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = &DAT_0251b400;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  local_193 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = &DAT_0251d288;
  local_128 = 0;
  uStack_121 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_114 = 0;
  local_118 = 0;
  local_38 = 0;
  uVar3 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_50 = param_1;
  if (unaff_RDI[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::FindAuthRecord(const CMD_CmmdPayload_FindAuthRecord_Struct &, CMD_RsltPayload_FindAuthRecord_Struct &, vector<EEPROM_StorageRecordStruct> *)"
                         ,0x562);
    uVar3 = FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*unaff_RDI + 0xb8))(uVar3,&local_110);
  (**(code **)(*(longlong *)unaff_RDI[7] + 0x10))(uVar3,&local_278);
  (**(code **)(*unaff_RDI + 600))(0,0,param_2,&local_48);
  pvVar2 = local_50;
  (**(code **)(*unaff_RDI + 0xc0))(local_50,&local_48);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}


