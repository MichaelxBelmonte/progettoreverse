// Reconstructed implementation of MUTimelineRulerView
// From MikeCore binary — reverse-engineered pseudocode

#include "MUTimelineRulerView.h"

// ============================================================
// @0050b490 — 512 bytes
// str: ""MUTimelineRulerView""
// str: ""MUPlaybackController""
// str: ""_playbackController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0050b490(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0270a2e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_0270a2a0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026f9908 = FUN_0006d940();
          _DAT_026f98f0 = "MUTimelineRulerView";
          _DAT_026f98f8 = 0x1b0;
          _DAT_026f9900 = FUN_00275c70;
          _DAT_026f9910 = 0;
          uRam00000000026f9918 = 0;
          _DAT_026f9920 = 0;
          _DAT_026f9998 = 0;
          uRam00000000026f99a0 = 0;
          _DAT_026f99a8 = 0;
          DAT_026f99aa = 1;
          _DAT_026f9928 = 0;
          uRam00000000026f9930 = 0;
          _DAT_026f9938 = 0;
          uRam00000000026f9940 = 0;
          _DAT_026f9948 = 0;
          uRam00000000026f9950 = 0;
          _DAT_026f9958 = 0;
          uRam00000000026f9960 = 0;
          _DAT_026f9968 = 0;
          uRam00000000026f9970 = 0;
          _DAT_026f9978 = 0;
          uRam00000000026f9980 = 0;
          _DAT_026f9988 = 0;
          uRam00000000026f9990 = 0;
          DAT_026f99b3 = 0;
          _DAT_026f99ab = 0;
          ___cxa_guard_release();
        }
      }
      DAT_0270a2c0 = (iVar1 != 0) << 6 | 0x80;
      _DAT_0270a2a8 = "_playbackController";
      _DAT_0270a2b0 = &DAT_026f98f0;
      _DAT_0270a2b8 = 0;
      _DAT_0270a2c8 = 0;
      uRam000000000270a2d0 = 0;
      _DAT_0270a2d8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270a2e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02715e50 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027045a0 = "MUPlaybackController";
          DAT_027045b0 = 0;
          _DAT_027045a8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0270a2a8;
}



