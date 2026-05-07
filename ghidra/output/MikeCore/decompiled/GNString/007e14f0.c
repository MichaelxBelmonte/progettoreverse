// Function: FUN_007e14f0
// Address: 007e14f0
// Size: 762 bytes
// Class: GNString
// String references:
//   "_transferStartTime"
//   "_transferEndTime"
//   "_userStartTime"
//   "_userEndTime"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e14f0(void)

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
  *unaff_RDI = &DAT_0250f460;
  unaff_RDI[7] = 0;
  lVar9 = FUN_007e1340();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0272f420 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0272f3e8 = FUN_007e1340();
        _DAT_0272f3e0 = "_transferStartTime";
        _DAT_0272f3f0 = 0;
        _DAT_0272f3f8 = 0x6400;
        _DAT_0272f400 = "double";
        _DAT_0272f408 = 0;
        uRam000000000272f410 = 0;
        _DAT_0272f418 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_007e1340();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0272f468 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0272f430 = FUN_007e1340();
        _DAT_0272f428 = "_transferEndTime";
        _DAT_0272f438 = 0;
        _DAT_0272f440 = 0x6400;
        _DAT_0272f448 = "double";
        _DAT_0272f450 = 0;
        uRam000000000272f458 = 0;
        _DAT_0272f460 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_007e1340();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0272f4b0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0272f478 = FUN_007e1340();
        _DAT_0272f470 = "_userStartTime";
        _DAT_0272f480 = 0;
        _DAT_0272f488 = 0x6400;
        _DAT_0272f490 = "double";
        _DAT_0272f498 = 0;
        uRam000000000272f4a0 = 0;
        _DAT_0272f4a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_007e1340();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0272f4f8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0272f4c0 = FUN_007e1340();
        _DAT_0272f4b8 = "_userEndTime";
        _DAT_0272f4c8 = 0;
        _DAT_0272f4d0 = 0x6400;
        _DAT_0272f4d8 = "double";
        _DAT_0272f4e0 = 0;
        uRam000000000272f4e8 = 0;
        _DAT_0272f4f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


