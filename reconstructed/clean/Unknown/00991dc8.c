// Function: FUN_00991dc8
// Address: 00991dc8
// Size: 523 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/ILokCert.cpp"
//   "ILokCert object has not been initialized"
//   "[%d] CERT_FindAndExtractPublicKey error"
//   "[%d] CERT_InterpretECC_PublicKeyValue error"
//   "virtual void pace::ILokCert::FindPublicKey_ByPKStandardID(uint32_t, uint32_t &, BIG_PublicKeyECC_St...

void FUN_00991dc8(uint64_t param_1,void*param_2)

{
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_58;
  uint32_t local_44 [2];
  uint32_t local_3c;
  uint8_t local_38 [4];
  int local_34;
  
  local_44[0] = 0;
  if (*(char *)(this_ptr + 8) == '\0') {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual void pace::ILokCert::FindPublicKey_ByPKStandardID(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                 ,0x173);
    FUN_009c720b();
  }
  FUN_0096dfe2();
  if (*(int *)(this_ptr + 0x130) == unaff_ESI) {
    FUN_0096df40();
    FUN_0096df40();
    *param_2 = 0;
  }
  else {
    local_34 = FUN_0096fa62(0xffffffff,*(void*)(this_ptr + 0x1ac),local_44,local_38);
    if (local_34 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::ILokCert::FindPublicKey_ByPKStandardID(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                   ,0x196);
      FUN_009c720b();
    }
    if (local_58 != 0) {
      local_34 = FUN_0096fd7c(param_1,local_3c);
      if (local_34 != 0) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("virtual void pace::ILokCert::FindPublicKey_ByPKStandardID(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                     ,0x1a2);
        FUN_009c720b();
      }
    }
  }
  return;
}

