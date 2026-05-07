// Reconstructed implementation of GNStream
// From MikeCore binary — reverse-engineered pseudocode

#include "GNStream.h"

// ============================================================
// @00cf8050 — 596 bytes
// str: ""_mode""
// str: ""GNStream""
// str: ""GNStreamMode""
// str: ""=GNStreamModeReadWrite""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00cf8050(void)

{
  int iVar1;
  
  if (DAT_02778138 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02778120 = 0x100000000;
      _DAT_02778128 = 2;
      _DAT_0277812c = (uint)(*DAT_02778108 == '=') * 3 + 3;
      DAT_02778130 = *DAT_02778108 != '=';
      ___cxa_guard_release();
    }
  }
  if (DAT_02778170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02778140 = "GNStreamMode";
      _DAT_02778148 = 4;
      DAT_0277814c = DAT_02778130;
      _DAT_02778150 = &DAT_02778120;
      _DAT_02778158 = &DAT_027780f0;
      _DAT_02778160 = 0;
      uRam0000000002778168 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027780e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02778098 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02777fe8 = FUN_00d4fe50();
          _DAT_02777fd0 = "GNStream";
          _DAT_02777fd8 = 0x10;
          _DAT_02777fe0 = FUN_00cf7ed0;
          _DAT_02777ff0 = 0;
          uRam0000000002777ff8 = 0;
          _DAT_02778000 = 0;
          _DAT_02778078 = 0;
          uRam0000000002778080 = 0;
          _DAT_02778088 = 0;
          DAT_0277808a = 1;
          _DAT_02778008 = 0;
          uRam0000000002778010 = 0;
          _DAT_02778018 = 0;
          uRam0000000002778020 = 0;
          _DAT_02778028 = 0;
          uRam0000000002778030 = 0;
          _DAT_02778038 = 0;
          uRam0000000002778040 = 0;
          _DAT_02778048 = 0;
          uRam0000000002778050 = 0;
          _DAT_02778058 = 0;
          uRam0000000002778060 = 0;
          _DAT_02778068 = 0;
          uRam0000000002778070 = 0;
          DAT_02778093 = 0;
          _DAT_0277808b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027780a0 = "_mode";
      _DAT_027780a8 = &DAT_02777fd0;
      _DAT_027780b0 = 0;
      _DAT_027780b8 = 0x6500;
      _DAT_027780c0 = "GNStreamMode";
      _DAT_027780c8 = &DAT_02778140;
      _DAT_027780d0 = 0;
      uRam00000000027780d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027780a0;
}



