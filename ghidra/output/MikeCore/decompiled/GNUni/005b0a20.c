// Function: FUN_005b0a20
// Address: 005b0a20
// Size: 714 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUAraMusicalContext"
//   "_cursorTime"
//   "MUDocument"
//   "MUTimeJump"
//   "_isCycling"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b0a20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar10;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_024e9f60;
  unaff_RDI[7] = 0;
  lVar9 = FUN_00364010();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005b0e00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDocument");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_00364010();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005b0ef0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContext");
  }
  FUN_005b0fe0();
  FUN_005b10c0();
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_00364010();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005b11a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeJump");
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_00364010();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02718580 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02718548 = FUN_00364010();
        _DAT_02718540 = "_isCycling";
        _DAT_02718550 = 0;
        _DAT_02718558 = 0x6200;
        _DAT_02718560 = "bool";
        _DAT_02718568 = 0;
        uRam0000000002718570 = 0;
        _DAT_02718578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_00364010();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027185c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02718590 = FUN_00364010();
        _DAT_02718588 = "_cursorTime";
        _DAT_02718598 = 0;
        _DAT_027185a0 = 0x6400;
        _DAT_027185a8 = "double";
        _DAT_027185b0 = 0;
        uRam00000000027185b8 = 0;
        _DAT_027185c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


