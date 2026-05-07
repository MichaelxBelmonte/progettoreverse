// Function: FUN_00cdcc40
// Address: 00cdcc40
// Size: 714 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNFile"
//   "GNFileArchiveFilePath"
//   "UInt64"
//   "_isWriting"
//   "_readingFileOffset"
//   "_directAccess"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cdcc40(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0003ee50();
  *unaff_RDI = &DAT_0256e828;
  *(undefined1 *)(unaff_RDI + 6) = 0;
  lVar2 = FUN_00cdb600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027751b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02775178 = FUN_00cdb600();
        _DAT_02775170 = "_isWriting";
        _DAT_02775180 = 0;
        _DAT_02775188 = 0x6200;
        _DAT_02775190 = "bool";
        _DAT_02775198 = 0;
        uRam00000000027751a0 = 0;
        _DAT_027751a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_00cdb600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00cdcff0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFileArchiveFilePath");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_00cdb600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00cdd0e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFile");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_00cdb600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02775288 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02775250 = FUN_00cdb600();
        _DAT_02775248 = "_readingFileOffset";
        _DAT_02775258 = 0;
        _DAT_02775260 = 0x6c00;
        _DAT_02775268 = "UInt64";
        _DAT_02775270 = 0;
        uRam0000000002775278 = 0;
        _DAT_02775280 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar2 = FUN_00cdb600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027752d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02775298 = FUN_00cdb600();
        _DAT_02775290 = "_directAccess";
        _DAT_027752a0 = 0;
        _DAT_027752a8 = 0x6200;
        _DAT_027752b0 = "bool";
        _DAT_027752b8 = 0;
        uRam00000000027752c0 = 0;
        _DAT_027752c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


