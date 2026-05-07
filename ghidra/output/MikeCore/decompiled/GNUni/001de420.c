// Function: FUN_001de420
// Address: 001de420
// Size: 633 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNFilePath"
//   "_canChooseDirectory"
//   "_canChooseFile"
//   "_allowsMultipleSelection"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001de420(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001dd150();
  *unaff_RDI = &DAT_026ba408;
  unaff_RDI[8] = 0;
  lVar2 = FUN_001dcdd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001de710();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_001dcdd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ef428 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ef3f0 = FUN_001dcdd0();
        _DAT_026ef3e8 = "_canChooseDirectory";
        _DAT_026ef3f8 = 0;
        _DAT_026ef400 = 0x6200;
        _DAT_026ef408 = "bool";
        _DAT_026ef410 = 0;
        uRam00000000026ef418 = 0;
        _DAT_026ef420 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  lVar2 = FUN_001dcdd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ef470 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ef438 = FUN_001dcdd0();
        _DAT_026ef430 = "_canChooseFile";
        _DAT_026ef440 = 0;
        _DAT_026ef448 = 0x6200;
        _DAT_026ef450 = "bool";
        _DAT_026ef458 = 0;
        uRam00000000026ef460 = 0;
        _DAT_026ef468 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = 0;
  lVar2 = FUN_001dcdd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ef4b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ef480 = FUN_001dcdd0();
        _DAT_026ef478 = "_allowsMultipleSelection";
        _DAT_026ef488 = 0;
        _DAT_026ef490 = 0x6200;
        _DAT_026ef498 = "bool";
        _DAT_026ef4a0 = 0;
        uRam00000000026ef4a8 = 0;
        _DAT_026ef4b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


