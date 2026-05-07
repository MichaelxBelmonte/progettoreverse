// Reconstructed implementation of MDVolumeFader
// From MikeCore binary — reverse-engineered pseudocode

#include "MDVolumeFader.h"

// ============================================================
// @006dc210 — 1083 bytes
// str: ""MDVolumeFader""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dc210(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_001b40a0();
  *unaff_RDI = &PTR_FUN_024da8a0;
  unaff_RDI[2] = &DAT_024db3e0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1dc) = 0;
  if (DAT_02726d50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fbd68 = FUN_001b37d0();
      _DAT_026fbd50 = "MDVolumeFader";
      _DAT_026fbd58 = 0x1f8;
      _DAT_026fbd60 = FUN_002a8700;
      _DAT_026fbd70 = 0;
      uRam00000000026fbd78 = 0;
      _DAT_026fbd80 = 0;
      _DAT_026fbdf8 = 0;
      uRam00000000026fbe00 = 0;
      _DAT_026fbe08 = 0;
      DAT_026fbe0a = 1;
      _DAT_026fbd88 = 0;
      uRam00000000026fbd90 = 0;
      _DAT_026fbd98 = 0;
      uRam00000000026fbda0 = 0;
      _DAT_026fbda8 = 0;
      uRam00000000026fbdb0 = 0;
      _DAT_026fbdb8 = 0;
      uRam00000000026fbdc0 = 0;
      _DAT_026fbdc8 = 0;
      uRam00000000026fbdd0 = 0;
      _DAT_026fbdd8 = 0;
      uRam00000000026fbde0 = 0;
      _DAT_026fbde8 = 0;
      uRam00000000026fbdf0 = 0;
      DAT_026fbe13 = 0;
      _DAT_026fbe0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fbe0b == '\0') {
    FUN_006dc6d0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1e4) = 0;
  if (DAT_02726d50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fbd68 = FUN_001b37d0();
      _DAT_026fbd50 = "MDVolumeFader";
      _DAT_026fbd58 = 0x1f8;
      _DAT_026fbd60 = FUN_002a8700;
      _DAT_026fbd70 = 0;
      uRam00000000026fbd78 = 0;
      _DAT_026fbd80 = 0;
      _DAT_026fbdf8 = 0;
      uRam00000000026fbe00 = 0;
      _DAT_026fbe08 = 0;
      DAT_026fbe0a = 1;
      _DAT_026fbd88 = 0;
      uRam00000000026fbd90 = 0;
      _DAT_026fbd98 = 0;
      uRam00000000026fbda0 = 0;
      _DAT_026fbda8 = 0;
      uRam00000000026fbdb0 = 0;
      _DAT_026fbdb8 = 0;
      uRam00000000026fbdc0 = 0;
      _DAT_026fbdc8 = 0;
      uRam00000000026fbdd0 = 0;
      _DAT_026fbdd8 = 0;
      uRam00000000026fbde0 = 0;
      _DAT_026fbde8 = 0;
      uRam00000000026fbdf0 = 0;
      DAT_026fbe13 = 0;
      _DAT_026fbe0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fbe0b == '\0') {
    FUN_006dc860();
    FUN_00e87980();
  }
  FUN_006dcab0();
  *(undefined1 *)(unaff_RDI + 0x3e) = 0;
  if (DAT_02726d50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fbd68 = FUN_001b37d0();
      _DAT_026fbd50 = "MDVolumeFader";
      _DAT_026fbd58 = 0x1f8;
      _DAT_026fbd60 = FUN_002a8700;
      _DAT_026fbd70 = 0;
      uRam00000000026fbd78 = 0;
      _DAT_026fbd80 = 0;
      _DAT_026fbdf8 = 0;
      uRam00000000026fbe00 = 0;
      _DAT_026fbe08 = 0;
      DAT_026fbe0a = 1;
      _DAT_026fbd88 = 0;
      uRam00000000026fbd90 = 0;
      _DAT_026fbd98 = 0;
      uRam00000000026fbda0 = 0;
      _DAT_026fbda8 = 0;
      uRam00000000026fbdb0 = 0;
      _DAT_026fbdb8 = 0;
      uRam00000000026fbdc0 = 0;
      _DAT_026fbdc8 = 0;
      uRam00000000026fbdd0 = 0;
      _DAT_026fbdd8 = 0;
      uRam00000000026fbde0 = 0;
      _DAT_026fbde8 = 0;
      uRam00000000026fbdf0 = 0;
      DAT_026fbe13 = 0;
      _DAT_026fbe0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fbe0b == '\0') {
    FUN_006dcde0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1f1) = 0;
  if (DAT_02726d50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fbd68 = FUN_001b37d0();
      _DAT_026fbd50 = "MDVolumeFader";
      _DAT_026fbd58 = 0x1f8;
      _DAT_026fbd60 = FUN_002a8700;
      _DAT_026fbd70 = 0;
      uRam00000000026fbd78 = 0;
      _DAT_026fbd80 = 0;
      _DAT_026fbdf8 = 0;
      uRam00000000026fbe00 = 0;
      _DAT_026fbe08 = 0;
      DAT_026fbe0a = 1;
      _DAT_026fbd88 = 0;
      uRam00000000026fbd90 = 0;
      _DAT_026fbd98 = 0;
      uRam00000000026fbda0 = 0;
      _DAT_026fbda8 = 0;
      uRam00000000026fbdb0 = 0;
      _DAT_026fbdb8 = 0;
      uRam00000000026fbdc0 = 0;
      _DAT_026fbdc8 = 0;
      uRam00000000026fbdd0 = 0;
      _DAT_026fbdd8 = 0;
      uRam00000000026fbde0 = 0;
      _DAT_026fbde8 = 0;
      uRam00000000026fbdf0 = 0;
      DAT_026fbe13 = 0;
      _DAT_026fbe0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fbe0b == '\0') {
    FUN_006dcf70();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @006c7220 — 681 bytes
// str: ""MDVolumeFader""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006c73c6) */
/* WARNING: Removing unreachable block (ram,0x006c73e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c7220(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_250;
  longlong local_230;
  
  if ((DAT_02726d50 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026fbd68 = FUN_001b37d0();
    _DAT_026fbd50 = "MDVolumeFader";
    _DAT_026fbd58 = 0x1f8;
    _DAT_026fbd60 = FUN_002a8700;
    _DAT_026fbd70 = 0;
    uRam00000000026fbd78 = 0;
    _DAT_026fbd80 = 0;
    _DAT_026fbdf8 = 0;
    uRam00000000026fbe00 = 0;
    _DAT_026fbe08 = 0;
    DAT_026fbe0a = 1;
    _DAT_026fbd88 = 0;
    uRam00000000026fbd90 = 0;
    _DAT_026fbd98 = 0;
    uRam00000000026fbda0 = 0;
    _DAT_026fbda8 = 0;
    uRam00000000026fbdb0 = 0;
    _DAT_026fbdb8 = 0;
    uRam00000000026fbdc0 = 0;
    _DAT_026fbdc8 = 0;
    uRam00000000026fbdd0 = 0;
    _DAT_026fbdd8 = 0;
    uRam00000000026fbde0 = 0;
    _DAT_026fbde8 = 0;
    uRam00000000026fbdf0 = 0;
    DAT_026fbe13 = 0;
    _DAT_026fbe0b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026fbe0b == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_006dc210();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_230 != 0) {
      FUN_00d50b20();
    }
    if (local_250 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}




// ============================================================
// @006dc860 — 547 bytes
// str: ""MDVolumeFader""
// str: ""MDVolumeScalaType""
// str: ""_volumeScalaType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_006dc860(void)

{
  int iVar1;
  
  if (DAT_02726e38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02726e20 = _DAT_0238fcc0;
      uRam0000000002726e24 = _UNK_0238fcc4;
      uRam0000000002726e28 = _UNK_0238fcc8;
      uRam0000000002726e2c = _UNK_0238fccc;
      DAT_02726e30 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_02726e70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02726e40 = "MDVolumeScalaType";
      _DAT_02726e48 = 4;
      DAT_02726e4c = DAT_02726e30;
      _DAT_02726e50 = &DAT_02726e20;
      _DAT_02726e58 = &DAT_02726df0;
      _DAT_02726e60 = 0;
      uRam0000000002726e68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02726de8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d50 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fbd68 = FUN_001b37d0();
          _DAT_026fbd50 = "MDVolumeFader";
          _DAT_026fbd58 = 0x1f8;
          _DAT_026fbd60 = FUN_002a8700;
          _DAT_026fbd70 = 0;
          uRam00000000026fbd78 = 0;
          _DAT_026fbd80 = 0;
          _DAT_026fbdf8 = 0;
          uRam00000000026fbe00 = 0;
          _DAT_026fbe08 = 0;
          DAT_026fbe0a = 1;
          _DAT_026fbd88 = 0;
          uRam00000000026fbd90 = 0;
          _DAT_026fbd98 = 0;
          uRam00000000026fbda0 = 0;
          _DAT_026fbda8 = 0;
          uRam00000000026fbdb0 = 0;
          _DAT_026fbdb8 = 0;
          uRam00000000026fbdc0 = 0;
          _DAT_026fbdc8 = 0;
          uRam00000000026fbdd0 = 0;
          _DAT_026fbdd8 = 0;
          uRam00000000026fbde0 = 0;
          _DAT_026fbde8 = 0;
          uRam00000000026fbdf0 = 0;
          DAT_026fbe13 = 0;
          _DAT_026fbe0b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02726da8 = "_volumeScalaType";
      _DAT_02726db0 = &DAT_026fbd50;
      _DAT_02726db8 = 0;
      _DAT_02726dc0 = 0x6500;
      _DAT_02726dc8 = "MDVolumeScalaType";
      _DAT_02726dd0 = &DAT_02726e40;
      _DAT_02726dd8 = 0;
      uRam0000000002726de0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02726da8;
}



