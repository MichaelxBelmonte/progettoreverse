// Function: FUN_011722e0
// Address: 011722e0
// Size: 1195 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUFunction"
//   "_sourceMinValue"
//   "_sourceMaxValue"
//   "_targetMinValue"
//   "_targetMaxValue"
//   "_clipsMinValue"
//   "_clipsMaxValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011722e0(void)

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
  *unaff_RDI = &DAT_025c1d18;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_01172090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a69e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a69b0 = FUN_01172090();
        _DAT_027a69a8 = "_sourceMinValue";
        _DAT_027a69b8 = 0;
        _DAT_027a69c0 = 0x6600;
        _DAT_027a69c8 = "float";
        _DAT_027a69d0 = 0;
        uRam00000000027a69d8 = 0;
        _DAT_027a69e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_01172090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a6a30 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a69f8 = FUN_01172090();
        _DAT_027a69f0 = "_sourceMaxValue";
        _DAT_027a6a00 = 0;
        _DAT_027a6a08 = 0x6600;
        _DAT_027a6a10 = "float";
        _DAT_027a6a18 = 0;
        uRam00000000027a6a20 = 0;
        _DAT_027a6a28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_01172090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a6a78 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a6a40 = FUN_01172090();
        _DAT_027a6a38 = "_targetMinValue";
        _DAT_027a6a48 = 0;
        _DAT_027a6a50 = 0x6600;
        _DAT_027a6a58 = "float";
        _DAT_027a6a60 = 0;
        uRam00000000027a6a68 = 0;
        _DAT_027a6a70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_01172090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a6ac0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a6a88 = FUN_01172090();
        _DAT_027a6a80 = "_targetMaxValue";
        _DAT_027a6a90 = 0;
        _DAT_027a6a98 = 0x6600;
        _DAT_027a6aa0 = "float";
        _DAT_027a6aa8 = 0;
        uRam00000000027a6ab0 = 0;
        _DAT_027a6ab8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_01172090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a6b08 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a6ad0 = FUN_01172090();
        _DAT_027a6ac8 = "_clipsMinValue";
        _DAT_027a6ad8 = 0;
        _DAT_027a6ae0 = 0x6200;
        _DAT_027a6ae8 = "bool";
        _DAT_027a6af0 = 0;
        uRam00000000027a6af8 = 0;
        _DAT_027a6b00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  lVar9 = FUN_01172090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a6b50 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a6b18 = FUN_01172090();
        _DAT_027a6b10 = "_clipsMaxValue";
        _DAT_027a6b20 = 0;
        _DAT_027a6b28 = 0x6200;
        _DAT_027a6b30 = "bool";
        _DAT_027a6b38 = 0;
        uRam00000000027a6b40 = 0;
        _DAT_027a6b48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_01172090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01172820();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  return;
}


