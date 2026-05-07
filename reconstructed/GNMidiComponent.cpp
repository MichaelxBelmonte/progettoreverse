// Reconstructed implementation of GNMidiComponent
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMidiComponent.h"

// ============================================================
// @00b4ff20 — 679 bytes
// str: ""GNMidiComponent""
// str: ""_addConnection""
// str: ""_removeConnection""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b4ff20(void)

{
  int iVar1;
  
  if (DAT_028a5168 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027636b8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02763608 = FUN_00d4fe50();
          _DAT_027635f0 = "GNMidiComponent";
          _DAT_027635f8 = 0x20;
          _DAT_02763600 = FUN_00b6fb90;
          _DAT_02763610 = 0;
          uRam0000000002763618 = 0;
          _DAT_02763620 = 0;
          uRam0000000002763628 = 0;
          _DAT_02763630 = 0;
          uRam0000000002763638 = 0;
          _DAT_02763640 = 0;
          uRam0000000002763648 = 0;
          _DAT_02763650 = 0;
          uRam0000000002763658 = 0;
          _DAT_02763660 = 0;
          uRam0000000002763668 = 0;
          _DAT_02763670 = 0;
          uRam0000000002763678 = 0;
          _DAT_02763680 = 0;
          uRam0000000002763688 = 0;
          _DAT_02763690 = 0;
          uRam0000000002763698 = 0;
          _DAT_027636a0 = 0;
          uRam00000000027636a8 = 0;
          _DAT_027636b0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5128 = "_addConnection";
      _DAT_028a5130 = &DAT_027635f0;
      _DAT_028a5138 = 0;
      _DAT_028a5140 = &DAT_0275edd8;
      _DAT_028a5148 = FUN_00b50d10;
      _DAT_028a5150 = 0x381;
      _DAT_028a5158 = 0;
      uRam00000000028a5160 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a51b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027636b8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02763608 = FUN_00d4fe50();
          _DAT_027635f0 = "GNMidiComponent";
          _DAT_027635f8 = 0x20;
          _DAT_02763600 = FUN_00b6fb90;
          _DAT_02763610 = 0;
          uRam0000000002763618 = 0;
          _DAT_02763620 = 0;
          uRam0000000002763628 = 0;
          _DAT_02763630 = 0;
          uRam0000000002763638 = 0;
          _DAT_02763640 = 0;
          uRam0000000002763648 = 0;
          _DAT_02763650 = 0;
          uRam0000000002763658 = 0;
          _DAT_02763660 = 0;
          uRam0000000002763668 = 0;
          _DAT_02763670 = 0;
          uRam0000000002763678 = 0;
          _DAT_02763680 = 0;
          uRam0000000002763688 = 0;
          _DAT_02763690 = 0;
          uRam0000000002763698 = 0;
          _DAT_027636a0 = 0;
          uRam00000000027636a8 = 0;
          _DAT_027636b0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5170 = "_removeConnection";
      _DAT_028a5178 = &DAT_027635f0;
      _DAT_028a5180 = 0;
      _DAT_028a5188 = &DAT_0275edd8;
      _DAT_028a5190 = FUN_00b50d10;
      _DAT_028a5198 = 0x389;
      _DAT_028a51a0 = 0;
      uRam00000000028a51a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



