// Function: FUN_0099918a
// Address: 0099918a
// Size: 870 bytes
// Class: Unknown
// String references:
//   "ILok conduit not set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "virtual void pace::ILok2Commander::SignECDSA_UsingCertPrivateKey(CMD_CmmdPayload_SignECDSA_UsingCer...

void FUN_0099918a(uint64_t param_1,uint64_t param_2,void *param_3)

{
  uint64_t uVar1;
  void *pvVar2;
  int64_t *this_ptr;
  uint32_t uVar3;
  void*local_280;
  void*local_278;
  uint64_t local_270;
  uint64_t local_268;
  uint64_t local_260;
  uint16_t local_258;
  uint32_t local_256;
  uint8_t local_252;
  void*local_250;
  void*local_248;
  uint64_t local_240;
  uint64_t local_238;
  uint64_t local_230;
  uint64_t local_228;
  uint64_t local_220;
  uint64_t local_218;
  uint16_t local_210;
  void*local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint32_t local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  undefined5 uStack_1a0;
  undefined3 local_19b;
  undefined5 uStack_198;
  uint16_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint64_t local_160;
  void*local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  undefined7 local_130;
  uint32_t uStack_129;
  uint32_t local_120;
  uint8_t local_11c;
  void*local_118;
  void*local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint16_t local_f0;
  uint32_t local_ee;
  uint8_t local_ea;
  void*local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint16_t local_c8;
  uint32_t local_c6;
  uint8_t local_c2;
  uint32_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint8_t local_64;
  uint32_t local_63;
  uint64_t local_58;
  void *local_50;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  local_118 = &g_025170b0;
  local_110 = &g_02517058;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ee = 0x101;
  local_ea = 0;
  local_e8 = &g_02517058;
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
  local_280 = &g_02517118;
  local_278 = &g_02517058;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_256 = 0x101;
  local_252 = 0;
  local_250 = &g_0251b468;
  local_248 = &g_0251b398;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = &g_0251b400;
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
  local_158 = &g_0251d288;
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
  local_58 = param_2;
  local_50 = param_3;
  if (this_ptr[7] == 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar3 = FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingCertPrivateKey(CMD_CmmdPayload_SignECDSA_UsingCertPrivateKey_Struct &, const vector<uint8_t> &, CMD_RsltPayload_SignECDSA_UsingCertPrivateKey_Struct &, BIG_CompactSignatureECDSA_Struct &)"
                         ,0x262);
    FUN_009c720b(uVar3,uVar1);
  }
  uVar3 = (**(code **)(*this_ptr + 0x60))(&local_118,local_58);
  (**(code **)(*(int64_t *)this_ptr[7] + 0x10))(uVar3,&local_280);
  (**(code **)(*this_ptr + 600))(0,0,param_1,&local_48);
  pvVar2 = local_50;
  (**(code **)(*this_ptr + 0x68))(local_50,&local_48);
  if (local_48 != 0) {
    lStack_40 = local_48;
    operator_delete(pvVar2);
  }
  FUN_0088b022();
  FUN_0088a01a();
  return;
}

