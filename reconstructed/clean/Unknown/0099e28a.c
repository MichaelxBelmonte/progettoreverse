// Function: FUN_0099e28a
// Address: 0099e28a
// Size: 891 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords(const CMD_CmmdPayload_SignECDSA_Using...

void FUN_0099e28a(uint64_t param_1,uint64_t param_2,uint64_t param_3,void *param_4)

{
  uint64_t uVar1;
  void *pvVar2;
  int64_t *this_ptr;
  uint32_t uVar3;
  uint64_t local_res8;
  void*local_288;
  void*local_280;
  uint64_t local_278;
  uint64_t local_270;
  uint64_t local_268;
  uint16_t local_260;
  uint32_t local_25e;
  uint8_t local_25a;
  void*local_258;
  void*local_250;
  uint64_t local_248;
  uint64_t local_240;
  uint64_t local_238;
  uint64_t local_230;
  uint64_t local_228;
  uint64_t local_220;
  uint16_t local_218;
  void*local_210;
  uint64_t local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint32_t local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  undefined5 uStack_1a8;
  undefined3 local_1a3;
  undefined5 uStack_1a0;
  uint16_t local_198;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  void*local_160;
  uint64_t local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  undefined7 local_138;
  uint32_t uStack_131;
  uint32_t local_128;
  uint8_t local_124;
  void*local_120;
  void*local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint16_t local_f8;
  uint32_t local_f6;
  uint8_t local_f2;
  void*local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint16_t local_d0;
  uint32_t local_ce;
  uint8_t local_ca;
  uint32_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  uint8_t local_6c;
  uint32_t local_6b;
  uint64_t local_60;
  uint64_t local_58;
  void *local_50;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  local_120 = &g_025170b0;
  local_118 = &g_02517058;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f6 = 0x101;
  local_f2 = 0;
  local_f0 = &g_02517058;
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
  local_288 = &g_02517118;
  local_280 = &g_02517058;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_25e = 0x101;
  local_25a = 0;
  local_258 = &g_0251b468;
  local_250 = &g_0251b398;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = &g_0251b400;
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
  local_160 = &g_0251d288;
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
  if (this_ptr[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords(const CMD_CmmdPayload_SignECDSA_UsingAuthRecords_Struct &, const vector<uint8_t> &, const vector<uint8_t> *, CMD_RsltPayload_SignECDSA_UsingAuthRecords_Struct &, BIG_CompactSignatureECDSA_Struct &, BIG_CompactPublicKeyECC_Struct &)"
                         ,0x8a0);
    FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*this_ptr + 0x150))(local_60,local_58,&local_120);
  (**(code **)(*(int64_t *)this_ptr[7] + 0x10))(uVar3,&local_288);
  (**(code **)(*this_ptr + 600))(0,0,param_3,&local_48);
  pvVar2 = local_50;
  (**(code **)(*this_ptr + 0x158))(local_50,&local_48,local_res8);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}

