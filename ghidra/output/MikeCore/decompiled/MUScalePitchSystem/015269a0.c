// Function: FUN_015269a0
// Address: 015269a0
// Size: 766 bytes
// Class: MUScalePitchSystem
// String references:
//   "_width"
//   "_startTime"
//   "double"
//   "_startPulse"
//   "_scope"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015269a0(void)

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
  *unaff_RDI = &DAT_025eb518;
  unaff_RDI[7] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3898 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3860 = FUN_015267a0();
        _DAT_027c3858 = "_startPulse";
        _DAT_027c3868 = 0;
        _DAT_027c3870 = 0x6411;
        _DAT_027c3878 = "double";
        _DAT_027c3880 = 0;
        uRam00000000027c3888 = 0;
        _DAT_027c3890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c38e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c38a8 = FUN_015267a0();
        _DAT_027c38a0 = "_startTime";
        _DAT_027c38b0 = 0;
        _DAT_027c38b8 = 0x6411;
        _DAT_027c38c0 = "double";
        _DAT_027c38c8 = 0;
        uRam00000000027c38d0 = 0;
        _DAT_027c38d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3928 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c38f0 = FUN_015267a0();
        _DAT_027c38e8 = "_width";
        _DAT_027c38f8 = 0;
        _DAT_027c3900 = 0x6400;
        _DAT_027c3908 = "double";
        _DAT_027c3910 = 0;
        uRam00000000027c3918 = 0;
        _DAT_027c3920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3970 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3938 = FUN_015267a0();
        _DAT_027c3930 = "_scope";
        _DAT_027c3940 = 0;
        _DAT_027c3948 = 0x6400;
        _DAT_027c3950 = "double";
        _DAT_027c3958 = 0;
        uRam00000000027c3960 = 0;
        _DAT_027c3968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


