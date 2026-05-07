// Reconstructed implementation of GNMidiFileKeyType
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMidiFileKeyType.h"

// ============================================================
// @00b06e60 — 550 bytes
// str: ""GNMidiFileKeyType""
// str: ""_keyType""
// str: ""GNMidiFileKeySignature""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00b06e60(void)

{
  int iVar1;
  
  if (DAT_02759ab8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02759aa8 = 0x100000000;
      DAT_02759ab0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_02759af0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02759ac0 = "GNMidiFileKeyType";
      _DAT_02759ac8 = 2;
      DAT_02759acc = DAT_02759ab0;
      _DAT_02759ad0 = &DAT_02759aa8;
      _DAT_02759ad8 = &DAT_02759a90;
      _DAT_02759ae0 = 0;
      uRam0000000002759ae8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02759a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027599b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02763108 = FUN_00d4fe50();
          _DAT_027630f0 = "GNMidiFileKeySignature";
          _DAT_027630f8 = 0x20;
          _DAT_02763100 = FUN_00b66500;
          _DAT_02763110 = 0;
          uRam0000000002763118 = 0;
          _DAT_02763120 = 0;
          _DAT_02763198 = 0;
          uRam00000000027631a0 = 0;
          _DAT_027631a8 = 0;
          DAT_027631aa = 1;
          _DAT_02763128 = 0;
          uRam0000000002763130 = 0;
          _DAT_02763138 = 0;
          uRam0000000002763140 = 0;
          _DAT_02763148 = 0;
          uRam0000000002763150 = 0;
          _DAT_02763158 = 0;
          uRam0000000002763160 = 0;
          _DAT_02763168 = 0;
          uRam0000000002763170 = 0;
          _DAT_02763178 = 0;
          uRam0000000002763180 = 0;
          _DAT_02763188 = 0;
          uRam0000000002763190 = 0;
          DAT_027631b3 = 0;
          _DAT_027631ab = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02759a48 = "_keyType";
      _DAT_02759a50 = &DAT_027630f0;
      _DAT_02759a58 = 0;
      _DAT_02759a60 = 0x6500;
      _DAT_02759a68 = "GNMidiFileKeyType";
      _DAT_02759a70 = &DAT_02759ac0;
      _DAT_02759a78 = 0;
      uRam0000000002759a80 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02759a48;
}



