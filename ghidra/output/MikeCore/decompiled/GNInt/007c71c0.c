// Function: FUN_007c71c0
// Address: 007c71c0
// Size: 1182 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_inputChannelCount"
//   "_outputChannelCount"
//   "_outputBuffersDidUnderrfftun"
//   "_reloadRequestedByDriver"
//   "_bufferUnderruns"
//   "_switchInputBuffersLock"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c71c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0252d640;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x94);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x98);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x9c);
  *(undefined4 *)(unaff_RDI + 0x12) = *(undefined4 *)(unaff_RSI + 0x90);
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x13) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02754e70 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02754e38 = FUN_00370d10();
        _DAT_02754e30 = "_inputChannelCount";
        _DAT_02754e40 = 0;
        _DAT_02754e48 = 0x6900;
        _DAT_02754e50 = "GNInt";
        _DAT_02754e58 = 0;
        uRam0000000002754e60 = 0;
        _DAT_02754e68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0272ec90 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0272ec58 = FUN_00370d10();
        _DAT_0272ec50 = "_outputChannelCount";
        _DAT_0272ec60 = 0;
        _DAT_0272ec68 = 0x6900;
        _DAT_0272ec70 = "GNInt";
        _DAT_0272ec78 = 0;
        uRam000000000272ec80 = 0;
        _DAT_0272ec88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007c7720();
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0272ece0 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0272eca8 = FUN_00370d10();
        _DAT_0272eca0 = "_outputBuffersDidUnderrfftun";
        _DAT_0272ecb0 = 0;
        _DAT_0272ecb8 = 0x6200;
        _DAT_0272ecc0 = "bool";
        _DAT_0272ecc8 = 0;
        uRam000000000272ecd0 = 0;
        _DAT_0272ecd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb1) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02754f10 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02754ed8 = FUN_00370d10();
        _DAT_02754ed0 = "_reloadRequestedByDriver";
        _DAT_02754ee0 = 0;
        _DAT_02754ee8 = 0x6200;
        _DAT_02754ef0 = "bool";
        _DAT_02754ef8 = 0;
        uRam0000000002754f00 = 0;
        _DAT_02754f08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0272ed30 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0272ecf8 = FUN_00370d10();
        _DAT_0272ecf0 = "_bufferUnderruns";
        _DAT_0272ed00 = 0;
        _DAT_0272ed08 = 0x6900;
        _DAT_0272ed10 = "GNInt";
        _DAT_0272ed18 = 0;
        uRam000000000272ed20 = 0;
        _DAT_0272ed28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007c7800();
  FUN_007c78e0();
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02754fb0 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02754f78 = FUN_00370d10();
        _DAT_02754f70 = "_switchInputBuffersLock";
        _DAT_02754f80 = 0;
        _DAT_02754f88 = 0x6900;
        _DAT_02754f90 = "GNInt";
        _DAT_02754f98 = 0;
        uRam0000000002754fa0 = 0;
        _DAT_02754fa8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


