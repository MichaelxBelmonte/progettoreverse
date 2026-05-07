// Function: FUN_0110ccb0
// Address: 0110ccb0
// Size: 594 bytes
// Class: GNData
// String references:
//   "GNData"
//   "double"
//   "_firstSpectrumTime"
//   "_spectraTimeDistance"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0110ccb0(void)

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
  char *pcVar10;
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
  *unaff_RDI = &DAT_025bc7b8;
  unaff_RDI[7] = 0;
  lVar9 = FUN_0110c940();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02793480 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02793448 = FUN_0110c940();
        _DAT_02793440 = "_firstSpectrumTime";
        _DAT_02793450 = 0;
        _DAT_02793458 = 0x6400;
        _DAT_02793460 = "double";
        _DAT_02793468 = 0;
        uRam0000000002793470 = 0;
        _DAT_02793478 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0110c940();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027934c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02793490 = FUN_0110c940();
        _DAT_02793488 = "_spectraTimeDistance";
        _DAT_02793498 = 0;
        _DAT_027934a0 = 0x6400;
        _DAT_027934a8 = "double";
        _DAT_027934b0 = 0;
        uRam00000000027934b8 = 0;
        _DAT_027934c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0110c940();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110cf80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"GNData");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_0110c940();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110d070();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"GNData");
  }
  return;
}


