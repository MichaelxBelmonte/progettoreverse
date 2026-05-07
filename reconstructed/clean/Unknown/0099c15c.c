// Function: FUN_0099c15c
// Address: 0099c15c
// Size: 835 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::FindStorageRecord(const CMD_CmmdPayload_FindStorageRecord_Struct...

void FUN_0099c15c(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  void *pvVar2;
  int64_t *this_ptr;
  uint32_t uVar3;
  void*local_270;
  void*local_268;
  uint64_t local_260;
  uint64_t local_258;
  uint64_t local_250;
  uint16_t local_248;
  uint32_t local_246;
  uint8_t local_242;
  void*local_240;
  void*local_238;
  uint64_t local_230;
  uint64_t local_228;
  uint64_t local_220;
  uint64_t local_218;
  uint64_t local_210;
  uint64_t local_208;
  uint16_t local_200;
  void*local_1f8;
  uint64_t local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  uint32_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint64_t local_1a0;
  uint64_t local_198;
  undefined5 uStack_190;
  undefined3 local_18b;
  undefined5 uStack_188;
  uint16_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint64_t local_160;
  uint64_t local_158;
  uint64_t local_150;
  void*local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  undefined7 local_120;
  uint32_t uStack_119;
  uint32_t local_110;
  uint8_t local_10c;
  void*local_108;
  void*local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint16_t local_e0;
  uint32_t local_de;
  uint8_t local_da;
  void*local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint16_t local_b8;
  uint32_t local_b6;
  uint8_t local_b2;
  uint32_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  uint8_t local_54;
  uint32_t local_53;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  local_108 = &g_025170b0;
  local_100 = &g_02517058;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_de = 0x101;
  local_da = 0;
  local_d8 = &g_02517058;
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
  local_270 = &g_02517118;
  local_268 = &g_02517058;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_246 = 0x101;
  local_242 = 0;
  local_240 = &g_0251b468;
  local_238 = &g_0251b398;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = &g_0251b400;
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
  local_148 = &g_0251d288;
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
  if (this_ptr[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::FindStorageRecord(const CMD_CmmdPayload_FindStorageRecord_Struct &, CMD_RsltPayload_FindStorageRecord_Struct &)"
                         ,0x62f);
    uVar3 = FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*this_ptr + 0xe0))(uVar3,&local_108);
  (**(code **)(*(int64_t *)this_ptr[7] + 0x10))(uVar3,&local_270);
  pvVar2 = (void *)0x0;
  (**(code **)(*this_ptr + 600))(0,0,param_2,&local_48);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}

