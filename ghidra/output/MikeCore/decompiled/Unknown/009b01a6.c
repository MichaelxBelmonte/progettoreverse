// Function: FUN_009b01a6
// Address: 009b01a6
// Size: 564 bytes
// Class: Unknown
// String references:
//   "Signer object has not been initialized"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Signer.cpp"
//   "[%d] ECC_GenerateKeyPair error"
//   "virtual bool pace::Signer::ValidateKeyPair(const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct ...
//   "[%d] BIG_CompareBig error (X coordinate)"
//   "[%d] BIG_CompareBig error (Y coordinate)"


bool FUN_009b01a6(void)

{
  longlong unaff_RDI;
  undefined1 local_c0 [112];
  int *local_50;
  code *local_48;
  undefined1 *local_40;
  int local_38;
  char local_31;
  
  if (*(char *)(unaff_RDI + 8) == '\0') {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual bool pace::Signer::ValidateKeyPair(const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &)"
                 ,0x1ed);
    FUN_009c720b();
  }
  FUN_0096dfe2();
  local_38 = FUN_009715d4(local_c0);
  if (local_38 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_50 = &local_38;
    local_48 = FUN_009595d8;
    local_40 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual bool pace::Signer::ValidateKeyPair(const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &)"
                 ,0x201);
    FUN_009c720b();
  }
  local_38 = FUN_0096dd64();
  if (local_38 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_50 = &local_38;
    local_48 = FUN_009595d8;
    local_40 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual bool pace::Signer::ValidateKeyPair(const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &)"
                 ,0x210);
    FUN_009c720b();
  }
  if (local_31 == '\0') {
    local_38 = FUN_0096dd64();
    if (local_38 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      local_50 = &local_38;
      local_48 = FUN_009595d8;
      local_40 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual bool pace::Signer::ValidateKeyPair(const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &)"
                   ,0x221);
      FUN_009c720b();
    }
  }
  return local_31 == '\0';
}


