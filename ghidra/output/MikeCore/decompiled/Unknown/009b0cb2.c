// Function: FUN_009b0cb2
// Address: 009b0cb2
// Size: 1152 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Signer.cpp"
//   "[%d] BIG_CompareBig error"
//   "[%d] BIG_BytesToBigNumber error"
//   "No private key provided (empty vector)"
//   "virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_...
//   "The given private key value (in bytes) is too big for the current PKStandard (%d)"
//   "Ran out of bytes trying to trim a private key"
//   "The given private key value is a weak key and cannot be used"
//   "[%d] BIG_SetBigFromDword error"


void FUN_009b0cb2(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  uint uVar4;
  char local_44;
  char local_31;
  
  uVar3 = param_2[2] - *param_2;
  uVar1 = FUN_009710a9();
  uVar4 = uVar3;
  if (unaff_ESI != 0) {
    uVar4 = uVar1;
  }
  if (uVar3 <= uVar1) {
    uVar4 = uVar3;
  }
  FUN_0096dfbe();
  if (uVar4 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                 ,0x409);
    FUN_009c720b();
  }
  iVar2 = FUN_0096dcbd();
  if (iVar2 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                 ,0x412);
    FUN_009c720b();
  }
  iVar2 = FUN_0096dd64();
  if (iVar2 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                 ,0x41b);
    FUN_009c720b();
  }
  local_44 = (char)unaff_ESI;
  if ((-1 < local_31) && (local_44 == '\0')) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                 ,0x426);
    FUN_009c720b();
  }
  while (-1 < local_31) {
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                   ,0x433);
      FUN_009c720b();
    }
    iVar2 = FUN_0096dcbd();
    if (iVar2 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                   ,0x43b);
      FUN_009c720b();
    }
    iVar2 = FUN_0096dd64();
    if (iVar2 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                   ,0x444);
      FUN_009c720b();
    }
  }
  uVar4 = FUN_0096e05d();
  if (uVar4 < 2) {
    if (local_44 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                   ,0x450);
      FUN_009c720b();
    }
    iVar2 = FUN_0096e029();
    if (iVar2 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::Signer::ConvertBigPrivateKey_BytesToStandard(bool, const vector<uint8_t> &, BIG_NumberStruct &)"
                   ,0x458);
      FUN_009c720b();
    }
  }
  return;
}


