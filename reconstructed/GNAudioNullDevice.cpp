// Reconstructed implementation of GNAudioNullDevice
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAudioNullDevice.h"

// ============================================================
// @00af9e20 — 532 bytes
// str: ""GNAudioNullDevice""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af9e20(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_007c71c0();
  *unaff_RDI = &DAT_02530ed8;
  *(undefined1 *)((longlong)unaff_RDI + 0xcc) = 0;
  if (DAT_02756298 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027561e8 = FUN_00370d10();
      _DAT_027561d0 = "GNAudioNullDevice";
      _DAT_027561d8 = 0xe0;
      _DAT_027561e0 = FUN_00af9d80;
      _DAT_027561f0 = 0;
      uRam00000000027561f8 = 0;
      _DAT_02756200 = 0;
      uRam0000000002756208 = 0;
      _DAT_02756210 = 0;
      uRam0000000002756218 = 0;
      _DAT_02756220 = 0;
      uRam0000000002756228 = 0;
      _DAT_02756230 = 0;
      uRam0000000002756238 = 0;
      _DAT_02756240 = 0;
      uRam0000000002756248 = 0;
      _DAT_02756250 = 0;
      uRam0000000002756258 = 0;
      _DAT_02756260 = 0;
      uRam0000000002756268 = 0;
      _DAT_02756270 = 0;
      uRam0000000002756278 = 0;
      _DAT_02756280 = 0;
      _uRam0000000002756288 = 0;
      _DAT_02756290 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275628b == '\0') {
    FUN_00afa0d0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xcd) = 0;
  if (DAT_02756298 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027561e8 = FUN_00370d10();
      _DAT_027561d0 = "GNAudioNullDevice";
      _DAT_027561d8 = 0xe0;
      _DAT_027561e0 = FUN_00af9d80;
      _DAT_027561f0 = 0;
      uRam00000000027561f8 = 0;
      _DAT_02756200 = 0;
      uRam0000000002756208 = 0;
      _DAT_02756210 = 0;
      uRam0000000002756218 = 0;
      _DAT_02756220 = 0;
      uRam0000000002756228 = 0;
      _DAT_02756230 = 0;
      uRam0000000002756238 = 0;
      _DAT_02756240 = 0;
      uRam0000000002756248 = 0;
      _DAT_02756250 = 0;
      uRam0000000002756258 = 0;
      _DAT_02756260 = 0;
      uRam0000000002756268 = 0;
      _DAT_02756270 = 0;
      uRam0000000002756278 = 0;
      _DAT_02756280 = 0;
      _uRam0000000002756288 = 0;
      _DAT_02756290 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275628b == '\0') {
    FUN_00afa240();
    FUN_00e87980();
  }
  FUN_00afa3b0();
  FUN_00afa6a0();
  return;
}



