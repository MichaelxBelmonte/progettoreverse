// Function: FUN_017df3a0
// Address: 017df3a0
// Size: 596 bytes
// Class: GNInt
// String references:
//   "_string"
//   "GNInt"
//   "_fret"
//   "_finger"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017df3a0(void)

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
  *unaff_RDI = &DAT_025e8080;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_017df1a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d4868 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d4830 = FUN_017df1a0();
        _DAT_027d4828 = "_fret";
        _DAT_027d4838 = 0;
        _DAT_027d4840 = 0x6900;
        _DAT_027d4848 = "GNInt";
        _DAT_027d4850 = 0;
        uRam00000000027d4858 = 0;
        _DAT_027d4860 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_017df1a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d48b0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d4878 = FUN_017df1a0();
        _DAT_027d4870 = "_string";
        _DAT_027d4880 = 0;
        _DAT_027d4888 = 0x6900;
        _DAT_027d4890 = "GNInt";
        _DAT_027d4898 = 0;
        uRam00000000027d48a0 = 0;
        _DAT_027d48a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_017df1a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d48f8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d48c0 = FUN_017df1a0();
        _DAT_027d48b8 = "_finger";
        _DAT_027d48c8 = 0;
        _DAT_027d48d0 = 0x6900;
        _DAT_027d48d8 = "GNInt";
        _DAT_027d48e0 = 0;
        uRam00000000027d48e8 = 0;
        _DAT_027d48f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


