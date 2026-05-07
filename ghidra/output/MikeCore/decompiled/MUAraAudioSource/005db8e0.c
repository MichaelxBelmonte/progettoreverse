// Function: FUN_005db8e0
// Address: 005db8e0
// Size: 762 bytes
// Class: MUAraAudioSource
// String references:
//   "_transferStartTime"
//   "_transferEndTime"
//   "_userStartTime"
//   "_userEndTime"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005db8e0(void)

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
  *unaff_RDI = &DAT_024e3cd0;
  unaff_RDI[7] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d150 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d118 = FUN_0032c070();
        _DAT_0271d110 = "_transferStartTime";
        _DAT_0271d120 = 0;
        _DAT_0271d128 = 0x6400;
        _DAT_0271d130 = "double";
        _DAT_0271d138 = 0;
        uRam000000000271d140 = 0;
        _DAT_0271d148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d198 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d160 = FUN_0032c070();
        _DAT_0271d158 = "_transferEndTime";
        _DAT_0271d168 = 0;
        _DAT_0271d170 = 0x6400;
        _DAT_0271d178 = "double";
        _DAT_0271d180 = 0;
        uRam000000000271d188 = 0;
        _DAT_0271d190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d1e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d1a8 = FUN_0032c070();
        _DAT_0271d1a0 = "_userStartTime";
        _DAT_0271d1b0 = 0;
        _DAT_0271d1b8 = 0x6400;
        _DAT_0271d1c0 = "double";
        _DAT_0271d1c8 = 0;
        uRam000000000271d1d0 = 0;
        _DAT_0271d1d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d228 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d1f0 = FUN_0032c070();
        _DAT_0271d1e8 = "_userEndTime";
        _DAT_0271d1f8 = 0;
        _DAT_0271d200 = 0x6400;
        _DAT_0271d208 = "double";
        _DAT_0271d210 = 0;
        uRam000000000271d218 = 0;
        _DAT_0271d220 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


