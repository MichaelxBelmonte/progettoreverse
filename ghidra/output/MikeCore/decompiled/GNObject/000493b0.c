// Function: FUN_000493b0
// Address: 000493b0
// Size: 1047 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "GNClassDescription"
//   "GNKeyValueArchiverDelegate"
//   "_encodesGlobalIDsOfReferredObjects"
//   "_reflectsOwnerTree"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000493b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_02570f00;
  puVar4 = unaff_RDI + 5;
  unaff_RDI[5] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000499d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  FUN_00049ca0();
  FUN_00049d80();
  unaff_RDI[10] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049f50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueArchiverDelegate");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a090();
    FUN_00e87980();
  }
  FUN_0004a200();
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d2c70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d2c38 = FUN_00048ff0();
        _DAT_026d2c30 = "_encodesGlobalIDsOfReferredObjects";
        _DAT_026d2c40 = 0;
        _DAT_026d2c48 = 0x6200;
        _DAT_026d2c50 = "bool";
        _DAT_026d2c58 = 0;
        uRam00000000026d2c60 = 0;
        _DAT_026d2c68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x71) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d2cb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d2c80 = FUN_00048ff0();
        _DAT_026d2c78 = "_reflectsOwnerTree";
        _DAT_026d2c88 = 0;
        _DAT_026d2c90 = 0x6200;
        _DAT_026d2c98 = "bool";
        _DAT_026d2ca0 = 0;
        uRam00000000026d2ca8 = 0;
        _DAT_026d2cb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a2e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004a3d0();
  FUN_0004a4b0();
  return;
}


