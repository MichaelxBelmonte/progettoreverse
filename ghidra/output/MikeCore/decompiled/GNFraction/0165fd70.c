// Function: FUN_0165fd70
// Address: 0165fd70
// Size: 625 bytes
// Class: GNFraction
// String references:
//   "bool"
//   "GNFraction"
//   "GNInt"
//   "_isTransitional"
//   "_startBarIndexCache"
//   "_startBeatCache"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0165fd70(void)

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
  *unaff_RDI = &DAT_025f6568;
  FUN_01660050();
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0165f620();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c8108 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c80d0 = FUN_0165f620();
        _DAT_027c80c8 = "_isTransitional";
        _DAT_027c80d8 = 0;
        _DAT_027c80e0 = 0x6200;
        _DAT_027c80e8 = "bool";
        _DAT_027c80f0 = 0;
        uRam00000000027c80f8 = 0;
        _DAT_027c8100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_0165f620();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c8150 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c8118 = FUN_0165f620();
        _DAT_027c8110 = "_startBarIndexCache";
        _DAT_027c8120 = 0;
        _DAT_027c8128 = 0x6901;
        _DAT_027c8130 = "GNInt";
        _DAT_027c8138 = 0;
        uRam00000000027c8140 = 0;
        _DAT_027c8148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0x100000000;
  lVar9 = FUN_0165f620();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c8198 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c8160 = FUN_0165f620();
        _DAT_027c8158 = "_startBeatCache";
        _DAT_027c8168 = 0;
        _DAT_027c8170 = 0x7101;
        _DAT_027c8178 = "GNFraction";
        _DAT_027c8180 = 0;
        uRam00000000027c8188 = 0;
        _DAT_027c8190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


