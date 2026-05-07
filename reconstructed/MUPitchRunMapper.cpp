// Reconstructed implementation of MUPitchRunMapper
// From MikeCore binary — reverse-engineered pseudocode

#include "MUPitchRunMapper.h"

// ============================================================
// @011999d0 — 519 bytes
// str: ""_scaleScope""
// str: ""MUPitchRunMapper""
// str: ""MUPitchRunMapperScaleScope""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_011999d0(void)

{
  int iVar1;
  
  if (DAT_027acf68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027acf50 = _DAT_0238fcc0;
      uRam00000000027acf54 = _UNK_0238fcc4;
      uRam00000000027acf58 = _UNK_0238fcc8;
      uRam00000000027acf5c = _UNK_0238fccc;
      DAT_027acf60 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027acfa0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027acf70 = "MUPitchRunMapperScaleScope";
      _DAT_027acf78 = 4;
      DAT_027acf7c = DAT_027acf60;
      _DAT_027acf80 = &DAT_027acf50;
      _DAT_027acf88 = &DAT_027acf20;
      _DAT_027acf90 = 0;
      uRam00000000027acf98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027acf18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027ace88 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027acdd8 = FUN_01151de0();
          _DAT_027acdc0 = "MUPitchRunMapper";
          _DAT_027acdc8 = 0x50;
          _DAT_027acdd0 = FUN_01199520;
          _DAT_027acde0 = 0;
          uRam00000000027acde8 = 0;
          _DAT_027acdf0 = 0;
          uRam00000000027acdf8 = 0;
          _DAT_027ace00 = 0;
          uRam00000000027ace08 = 0;
          _DAT_027ace10 = 0;
          uRam00000000027ace18 = 0;
          _DAT_027ace20 = 0;
          uRam00000000027ace28 = 0;
          _DAT_027ace30 = 0;
          uRam00000000027ace38 = 0;
          _DAT_027ace40 = 0;
          uRam00000000027ace48 = 0;
          _DAT_027ace50 = 0;
          uRam00000000027ace58 = 0;
          _DAT_027ace60 = 0;
          uRam00000000027ace68 = 0;
          _DAT_027ace70 = 0;
          uRam00000000027ace78 = 0;
          _DAT_027ace80 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027aced8 = "_scaleScope";
      _DAT_027acee0 = &DAT_027acdc0;
      _DAT_027acee8 = 0;
      _DAT_027acef0 = 0x6500;
      _DAT_027acef8 = "MUPitchRunMapperScaleScope";
      _DAT_027acf00 = &DAT_027acf70;
      _DAT_027acf08 = 0;
      uRam00000000027acf10 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027aced8;
}



