// Function: FUN_013da5a0
// Address: 013da5a0
// Size: 543 bytes
// Class: GNUni
// String references:
//   "float"
//   "_center"
//   "_margin"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013da5a0(void)

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
  *unaff_RDI = &DAT_025eec60;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_0049c3f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_013da800();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_0049c3f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027bfde8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027bfdb0 = FUN_0049c3f0();
        _DAT_027bfda8 = "_center";
        _DAT_027bfdb8 = 0;
        _DAT_027bfdc0 = 0x6600;
        _DAT_027bfdc8 = "float";
        _DAT_027bfdd0 = 0;
        uRam00000000027bfdd8 = 0;
        _DAT_027bfde0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0049c3f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027bfe30 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027bfdf8 = FUN_0049c3f0();
        _DAT_027bfdf0 = "_margin";
        _DAT_027bfe00 = 0;
        _DAT_027bfe08 = 0x6600;
        _DAT_027bfe10 = "float";
        _DAT_027bfe18 = 0;
        uRam00000000027bfe20 = 0;
        _DAT_027bfe28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_0049c3f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_013da970();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_0049c3f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_013daae0();
    FUN_00e87980();
  }
  return;
}


