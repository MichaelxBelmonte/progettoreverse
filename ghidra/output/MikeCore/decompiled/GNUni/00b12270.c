// Function: FUN_00b12270
// Address: 00b12270
// Size: 812 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "_count"
//   "GNHiPassEqualizer"
//   "_delayLineLength"
//   "_delayLineWriteOffset"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b12270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar3;
  undefined8 *puVar4;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_025465c0;
  unaff_RDI[0x12] = *(undefined8 *)(unaff_RSI + 0x90);
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c4f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c4c0 = FUN_00b12030();
        _DAT_0275c4b8 = "_delayLineLength";
        _DAT_0275c4c8 = 0;
        _DAT_0275c4d0 = 0x6900;
        _DAT_0275c4d8 = "GNInt";
        _DAT_0275c4e0 = 0;
        uRam000000000275c4e8 = 0;
        _DAT_0275c4f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c540 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c508 = FUN_00b12030();
        _DAT_0275c500 = "_delayLineWriteOffset";
        _DAT_0275c510 = 0;
        _DAT_0275c518 = 0x6900;
        _DAT_0275c520 = "GNInt";
        _DAT_0275c528 = 0;
        uRam000000000275c530 = 0;
        _DAT_0275c538 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c588 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c550 = FUN_00b12030();
        _DAT_0275c548 = "_count";
        _DAT_0275c558 = 0;
        _DAT_0275c560 = 0x6900;
        _DAT_0275c568 = "GNInt";
        _DAT_0275c570 = 0;
        uRam000000000275c578 = 0;
        _DAT_0275c580 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00b12690();
  FUN_00b12770();
  FUN_00b12850();
  puVar4 = unaff_RDI + 0x18;
  FUN_00b12930();
  FUN_00b12a10();
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b12af0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHiPassEqualizer",param_3,param_4,puVar4);
  }
  return;
}


