// Function: FUN_0038c320
// Address: 0038c320
// Size: 747 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "_isPlaybackButtonPressed"
//   "_lastShouldObserverOurselfTime"
//   "_didRequestPlayBack"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0038c320(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_001b2fa0();
  unaff_RDI[0x3b] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026696e8;
  unaff_RDI[2] = &DAT_0266a2b0;
  unaff_RDI[0x3b] = &DAT_0266a2f0;
  FUN_0038c6b0();
  *(undefined1 *)(unaff_RDI + 0x3d) = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027047b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02704780 = FUN_0038a820();
        _DAT_02704778 = "_isPlaybackButtonPressed";
        _DAT_02704788 = 0;
        _DAT_02704790 = 0x6200;
        _DAT_02704798 = "bool";
        _DAT_027047a0 = 0;
        uRam00000000027047a8 = 0;
        _DAT_027047b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3e] = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02704800 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027047c8 = FUN_0038a820();
        _DAT_027047c0 = "_lastShouldObserverOurselfTime";
        _DAT_027047d0 = 0;
        _DAT_027047d8 = 0x6400;
        _DAT_027047e0 = "double";
        _DAT_027047e8 = 0;
        uRam00000000027047f0 = 0;
        _DAT_027047f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x3f) = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02704848 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02704810 = FUN_0038a820();
        _DAT_02704808 = "_didRequestPlayBack";
        _DAT_02704818 = 0;
        _DAT_02704820 = 0x6200;
        _DAT_02704828 = "bool";
        _DAT_02704830 = 0;
        uRam0000000002704838 = 0;
        _DAT_02704840 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


