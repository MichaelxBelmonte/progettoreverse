// Reconstructed implementation of GNMidiConnection
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMidiConnection.h"

// ============================================================
// @00b50d90 — 685 bytes
// str: ""GNMidiConnection""
// str: ""_setSource""
// str: ""_setDestination""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b50d90(void)

{
  int iVar1;
  
  if (DAT_028a51f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0272b430 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027592a8 = FUN_00d4fe50();
          _DAT_02759290 = "GNMidiConnection";
          _DAT_02759298 = 0x20;
          _DAT_027592a0 = FUN_007ae8f0;
          _DAT_027592b0 = 0;
          uRam00000000027592b8 = 0;
          _DAT_027592c0 = 0;
          uRam00000000027592c8 = 0;
          _DAT_027592d0 = 0;
          uRam00000000027592d8 = 0;
          _DAT_027592e0 = 0;
          uRam00000000027592e8 = 0;
          _DAT_027592f0 = 0;
          uRam00000000027592f8 = 0;
          _DAT_02759300 = 0;
          uRam0000000002759308 = 0;
          _DAT_02759310 = 0;
          uRam0000000002759318 = 0;
          _DAT_02759320 = 0;
          uRam0000000002759328 = 0;
          _DAT_02759330 = 0;
          uRam0000000002759338 = 0;
          _DAT_02759340 = 0;
          uRam0000000002759348 = 0;
          _DAT_02759350 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a51b8 = "_setSource";
      _DAT_028a51c0 = &DAT_02759290;
      _DAT_028a51c8 = 0;
      _DAT_028a51d0 = &DAT_0275ede0;
      _DAT_028a51d8 = FUN_00b515a0;
      _DAT_028a51e0 = FUN_00b513e0;
      _DAT_028a51e8 = 0;
      uRam00000000028a51f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a5240 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0272b430 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027592a8 = FUN_00d4fe50();
          _DAT_02759290 = "GNMidiConnection";
          _DAT_02759298 = 0x20;
          _DAT_027592a0 = FUN_007ae8f0;
          _DAT_027592b0 = 0;
          uRam00000000027592b8 = 0;
          _DAT_027592c0 = 0;
          uRam00000000027592c8 = 0;
          _DAT_027592d0 = 0;
          uRam00000000027592d8 = 0;
          _DAT_027592e0 = 0;
          uRam00000000027592e8 = 0;
          _DAT_027592f0 = 0;
          uRam00000000027592f8 = 0;
          _DAT_02759300 = 0;
          uRam0000000002759308 = 0;
          _DAT_02759310 = 0;
          uRam0000000002759318 = 0;
          _DAT_02759320 = 0;
          uRam0000000002759328 = 0;
          _DAT_02759330 = 0;
          uRam0000000002759338 = 0;
          _DAT_02759340 = 0;
          uRam0000000002759348 = 0;
          _DAT_02759350 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5200 = "_setDestination";
      _DAT_028a5208 = &DAT_02759290;
      _DAT_028a5210 = 0;
      _DAT_028a5218 = &DAT_0275ede0;
      _DAT_028a5220 = FUN_00b515a0;
      _DAT_028a5228 = FUN_00b514c0;
      _DAT_028a5230 = 0;
      uRam00000000028a5238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



