// Reconstructed implementation of MULibraryFileKind
// From MikeCore binary — reverse-engineered pseudocode

#include "MULibraryFileKind.h"

// ============================================================
// @01151740 — 617 bytes
// str: ""_kind""
// str: ""MULibraryFileKind""
// str: ""=MULibraryFileKindDetectionReferences""
// str: ""=MULibraryFileKindPrelisten""
// str: ""=MULibraryFileKindUser""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01151740(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_0279fdb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0279fd90 = -(uint)(*DAT_0279fd40 == '=');
      uVar2 = (uint)(*DAT_0279fd40 != '=');
      _DAT_0279fd94 = 0;
      if (*DAT_0279fd48 != '=') {
        _DAT_0279fd94 = uVar2;
      }
      _DAT_0279fd98 = 1;
      if (*DAT_0279fd50 != '=') {
        _DAT_0279fd98 = _DAT_0279fd94 + 1;
      }
      _DAT_0279fd9c = 2;
      if (*DAT_0279fd58 != '=') {
        _DAT_0279fd9c = _DAT_0279fd98 + 1;
      }
      _DAT_0279fda0 = 3;
      if (*DAT_0279fd60 != '=') {
        _DAT_0279fda0 = _DAT_0279fd9c + 1;
      }
      _DAT_0279fda4 = 4;
      if (*DAT_0279fd68 != '=') {
        _DAT_0279fda4 = _DAT_0279fda0 + 1;
      }
      _DAT_0279fda8 = 5;
      if (*DAT_0279fd70 != '=') {
        _DAT_0279fda8 = _DAT_0279fda4 + 1;
      }
      _DAT_0279fdac = 6;
      if (*DAT_0279fd78 != '=') {
        _DAT_0279fdac = _DAT_0279fda8 + 1;
      }
      DAT_0279fdb0 = _DAT_0279fd94 == uVar2 &&
                     (_DAT_0279fd98 == _DAT_0279fd94 + 1 &&
                     ((_DAT_0279fd9c == _DAT_0279fd98 + 1 &&
                      (_DAT_0279fda0 == _DAT_0279fd9c + 1 &&
                      (_DAT_0279fda4 == _DAT_0279fda0 + 1 && _DAT_0279fda8 == _DAT_0279fda4 + 1)))
                     && _DAT_0279fdac == _DAT_0279fda8 + 1));
      ___cxa_guard_release();
    }
  }
  if (DAT_0279fdf0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0279fdc0 = "MULibraryFileKind";
      _DAT_0279fdc8 = 8;
      DAT_0279fdcc = DAT_0279fdb0;
      _DAT_0279fdd0 = &DAT_0279fd90;
      _DAT_0279fdd8 = &DAT_0279fd40;
      DAT_0279fde0 = 0;
      uRam000000000279fde8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0279fd38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0279fd00 = FUN_01150bf0();
      _DAT_0279fcf8 = "_kind";
      _DAT_0279fd08 = 0;
      _DAT_0279fd10 = 0x6500;
      _DAT_0279fd18 = "MULibraryFileKind";
      _DAT_0279fd20 = &DAT_0279fdc0;
      _DAT_0279fd28 = 0;
      uRam000000000279fd30 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0279fcf8;
}



