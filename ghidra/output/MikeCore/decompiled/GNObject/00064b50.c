// Function: FUN_00064b50
// Address: 00064b50
// Size: 713 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "_state"
//   "GNTypedStream"
//   "GNClassDescription"
//   "_decoding"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064b50(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_0257a838;
  unaff_RDI[5] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00064f90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277bbd0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277bb98 = FUN_000647b0();
        _DAT_0277bb90 = "_state";
        _DAT_0277bba0 = 0;
        _DAT_0277bba8 = 0x6900;
        _DAT_0277bbb0 = "GNInt";
        _DAT_0277bbb8 = 0;
        uRam000000000277bbc0 = 0;
        _DAT_0277bbc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277bc30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277bbf8 = FUN_000647b0();
        _DAT_0277bbf0 = "_decoding";
        _DAT_0277bc00 = 0;
        _DAT_0277bc08 = 0x6200;
        _DAT_0277bc10 = "bool";
        _DAT_0277bc18 = 0;
        uRam000000000277bc20 = 0;
        _DAT_0277bc28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00065260();
  FUN_00065340();
  FUN_00065420();
  return;
}


