// Function: FUN_00991b10
// Address: 00991b10
// Size: 695 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/ILokCert.cpp"
//   "ILokCert object has not been initialized"
//   "virtual void pace::ILokCert::FindPublicKey_ByIndex(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)...
//   "[%d] CERT_FindAndExtractPublicKey error"
//   "Public key at index (%d) is not an ECC key.  It's dwPKAlgorithmID = %d"
//   "[%d] CERT_InterpretECC_PublicKeyValue error"

void FUN_00991b10(uint64_t param_1,void*param_2)

{
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_50;
  uint32_t local_3c;
  int local_38;
  int local_34;
  
  if (*(char *)(this_ptr + 8) == '\0') {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual void pace::ILokCert::FindPublicKey_ByIndex(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                 ,0x125);
    FUN_009c720b();
  }
  FUN_0096dfe2();
  if (unaff_ESI == 0) {
    FUN_0096df40();
    FUN_0096df40();
    *param_2 = *(void*)(this_ptr + 0x130);
  }
  else {
    local_34 = FUN_0096fa62(unaff_ESI,*(void*)(this_ptr + 0x1ac),&local_38,param_2);
    if (local_34 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::ILokCert::FindPublicKey_ByIndex(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                   ,0x148);
      FUN_009c720b();
    }
    if (local_50 == 0) {
      *param_2 = 0xffffffff;
    }
    else {
      if (local_38 != 0) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00983230();
        FUN_00928ab0("virtual void pace::ILokCert::FindPublicKey_ByIndex(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                     ,0x157);
        FUN_009c720b();
      }
      local_34 = FUN_0096fd7c(param_1,local_3c);
      if (local_34 != 0) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("virtual void pace::ILokCert::FindPublicKey_ByIndex(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                     ,0x160);
        FUN_009c720b();
      }
    }
  }
  return;
}

