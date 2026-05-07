// Function: FUN_01111a30
// Address: 01111a30
// Size: 626 bytes
// Class: GNUni
// String references:
//   "bool"
//   "_mustBeInvertible"
//   "_cachesDerivedFunctions"
//   "_isCacheMember"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01111a30(void)

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
  *unaff_RDI = &DAT_025dc5d0;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_001016a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794278 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794240 = FUN_001016a0();
        _DAT_02794238 = "_mustBeInvertible";
        _DAT_02794248 = 0;
        _DAT_02794250 = 0x6200;
        _DAT_02794258 = "bool";
        _DAT_02794260 = 0;
        uRam0000000002794268 = 0;
        _DAT_02794270 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_001016a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01111cf0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_001016a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794378 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794340 = FUN_001016a0();
        _DAT_02794338 = "_cachesDerivedFunctions";
        _DAT_02794348 = 0;
        _DAT_02794350 = 0x6200;
        _DAT_02794358 = "bool";
        _DAT_02794360 = 0;
        uRam0000000002794368 = 0;
        _DAT_02794370 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x41) = 0;
  lVar9 = FUN_001016a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027943c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794388 = FUN_001016a0();
        _DAT_02794380 = "_isCacheMember";
        _DAT_02794390 = 0;
        _DAT_02794398 = 0x6211;
        _DAT_027943a0 = "bool";
        _DAT_027943a8 = 0;
        uRam00000000027943b0 = 0;
        _DAT_027943b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


