// Function: FUN_00ab7e04
// Address: 00ab7e04
// Size: 545 bytes
// Class: OsSignatureMac
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac...
//   "Result code from SecCodeCopySigningInformation: %ld"
//   "bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, const bool, bool *, pace...
//   "Result code from SecStaticCodeCheckValidity: %ld"


undefined8 FUN_00ab7e04(undefined1 *param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  iVar1 = _SecStaticCodeCheckValidity(param_1,0);
  if (param_3 != (undefined2 *)0x0) {
    *(int *)(param_3 + 2) = iVar1;
  }
  uVar2 = iVar1 + 0x105f6;
  if (uVar2 < 0x2a) {
    if ((0x20000000182U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0) {
      if (param_1 != (undefined1 *)0x0) {
        *param_1 = 1;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0;
      }
      *param_3 = 0x101;
      return 0;
    }
    if ((0x10000000001U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0) {
      return 0;
    }
  }
  if (iVar1 == 0) {
    if (param_3 != (undefined2 *)0x0) {
      *(undefined1 *)param_3 = 1;
    }
    iVar1 = _SecCodeCopySigningInformation();
    if (param_3 != (undefined2 *)0x0) {
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
  if (DAT_028a0a48 != (undefined8 *)0x0) {
    puVar3 = &DAT_028a0a48;
    puVar4 = DAT_028a0a48;
    do {
      if (iVar1 <= *(int *)((longlong)puVar4 + 0x1c)) {
        puVar3 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[*(int *)((longlong)puVar4 + 0x1c) < iVar1];
    } while (puVar4 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar3 != &DAT_028a0a48) && (*(int *)((longlong)puVar3 + 0x1c) <= iVar1))
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


