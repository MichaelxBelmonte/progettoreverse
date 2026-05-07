// Function: FUN_0099ddc6
// Address: 0099ddc6
// Size: 846 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::DecryptData(const CMD_CmmdPayload_DecryptData_Struct &, const ve...

void FUN_0099ddc6(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  void *pvVar2;
  int64_t *this_ptr;
  uint32_t uVar3;
  void*local_278;
  void*local_270;
  uint64_t local_268;
  uint64_t local_260;
  uint64_t local_258;
  uint16_t local_250;
  uint32_t local_24e;
  uint8_t local_24a;
  void*local_248;
  void*local_240;
  uint64_t local_238;
  uint64_t local_230;
  uint64_t local_228;
  uint64_t local_220;
  uint64_t local_218;
  uint64_t local_210;
  uint16_t local_208;
  void*local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint64_t local_1e8;
  uint32_t local_1e0;
  uint64_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint64_t local_1a0;
  undefined5 uStack_198;
  undefined3 local_193;
  undefined5 uStack_190;
  uint16_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint64_t local_160;
  uint64_t local_158;
  void*local_150;
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint64_t local_130;
  undefined7 local_128;
  uint32_t uStack_121;
  uint32_t local_118;
  uint8_t local_114;
  void*local_110;
  void*local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint16_t local_e8;
  uint32_t local_e6;
  uint8_t local_e2;
  void*local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint16_t local_c0;
  uint32_t local_be;
  uint8_t local_ba;
  uint32_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  uint8_t local_5c;
  uint32_t local_5b;
  uint64_t local_50;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  local_110 = &g_025170b0;
  local_108 = &g_02517058;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e6 = 0x101;
  local_e2 = 0;
  local_e0 = &g_02517058;
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
  local_278 = &g_02517118;
  local_270 = &g_02517058;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_24e = 0x101;
  local_24a = 0;
  local_248 = &g_0251b468;
  local_240 = &g_0251b398;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = &g_0251b400;
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
  local_150 = &g_0251d288;
  local_128 = 0;
  uStack_121 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_114 = 0;
  local_118 = 0;
  local_38 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_50 = param_1;
  if (this_ptr[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::DecryptData(const CMD_CmmdPayload_DecryptData_Struct &, const vector<uint8_t> &, CMD_RsltPayload_DecryptData_Struct &)"
                         ,0x843);
    FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*this_ptr + 0x140))(&local_110,param_2);
  (**(code **)(*(int64_t *)this_ptr[7] + 0x10))(uVar3,&local_278);
  pvVar2 = (void *)0x0;
  (**(code **)(*this_ptr + 600))(0,0,local_50,&local_48);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}

