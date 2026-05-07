// Function: FUN_00ab7e04
// Address: 00ab7e04
// Size: 545 bytes
// Class: OsSignatureMac
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac...
//   "Result code from SecCodeCopySigningInformation: %ld"
//   "bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, const bool, bool *, pace...
//   "Result code from SecStaticCodeCheckValidity: %ld"

uint64_t FUN_00ab7e04(void*param_1,uint64_t param_2,void*param_3)

{
  int iVar1;
  uint uVar2;
  void*puVar3;
  void*puVar4;
  
  if (param_1 != (void*)0x0) {
    *param_1 = 0;
  }
  iVar1 = _SecStaticCodeCheckValidity(param_1,0);
  if (param_3 != (void*)0x0) {
    *(int *)(param_3 + 2) = iVar1;
  }
  uVar2 = iVar1 + 0x105f6;
  if (uVar2 < 0x2a) {
    if ((0x20000000182U >> ((uint64_t)uVar2 & 0x3f) & 1) != 0) {
      if (param_1 != (void*)0x0) {
        *param_1 = 1;
      }
      if (param_3 == (void*)0x0) {
        return 0;
      }
      *param_3 = 0x101;
      return 0;
    }
    if ((0x10000000001U >> ((uint64_t)uVar2 & 0x3f) & 1) != 0) {
      return 0;
    }
  }
  if (iVar1 == 0) {
    if (param_3 != (void*)0x0) {
      *(void*)param_3 = 1;
    }
    iVar1 = _SecCodeCopySigningInformation();
    if (param_3 != (void*)0x0) {
      *(int *)(param_3 + 2) = iVar1;
    }
    if (iVar1 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, const bool, bool *, pace::eden::DsigStatus_T *)"
                   ,0x3b2);
      FUN_009bd5cb();
    }
    FUN_00ab9238();
    FUN_00abbea2();
    return 1;
  }
  if (g_028a0a48 != (void*)0x0) {
    puVar3 = &g_028a0a48;
    puVar4 = g_028a0a48;
    do {
      if (iVar1 <= *(int *)((int64_t)puVar4 + 0x1c)) {
        puVar3 = puVar4;
      }
      puVar4 = (void*)puVar4[*(int *)((int64_t)puVar4 + 0x1c) < iVar1];
    } while (puVar4 != (void*)0x0);
    if ((((void**)puVar3 != &g_028a0a48) && (*(int *)((int64_t)puVar3 + 0x1c) <= iVar1))
       && (*(int *)(puVar3 + 4) == 0)) {
      return 0;
    }
  }
  FUN_00925fd0();
  FUN_00926010();
  FUN_00983230();
  FUN_00928ab0("bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, const bool, bool *, pace::eden::DsigStatus_T *)"
               ,0x3f9);
  FUN_009bd5cb();
  return 0;
}

