// Reconstructed implementation of MUQuarterSequenceView
// From MikeCore binary — reverse-engineered pseudocode

#include "MUQuarterSequenceView.h"

// ============================================================
// @01b66e10 — 6107 bytes
// str: ""MUQuarterSequenceView""
// str: ""handleCopy""
// str: ""handleSelectAll""
// str: ""handleDelete""
// str: ""handleFinishEditing""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b66e10(void)

{
  int iVar1;
  
  if (DAT_028b4f60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4f20 = "handleFinishEditing";
      _DAT_028b4f28 = &DAT_026f75b0;
      _DAT_028b4f30 = 0;
      _DAT_028b4f38 = &DAT_027e4f18;
      _DAT_028b4f40 = FUN_01b831d0;
      _DAT_028b4f48 = FUN_01b7a7f0;
      _DAT_028b4f50 = 0;
      uRam00000000028b4f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4fa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4f68 = "handleStartEditing";
      _DAT_028b4f70 = &DAT_026f75b0;
      _DAT_028b4f78 = 0;
      _DAT_028b4f80 = &DAT_027e4f18;
      _DAT_028b4f88 = FUN_01b831d0;
      _DAT_028b4f90 = 0xa91;
      _DAT_028b4f98 = 0;
      uRam00000000028b4fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4ff0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4fb0 = "handleSelectLeft";
      _DAT_028b4fb8 = &DAT_026f75b0;
      _DAT_028b4fc0 = 0;
      _DAT_028b4fc8 = &DAT_027e4f18;
      _DAT_028b4fd0 = FUN_01b831d0;
      _DAT_028b4fd8 = 0xa99;
      _DAT_028b4fe0 = 0;
      uRam00000000028b4fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5038 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4ff8 = "handleSelectRight";
      _DAT_028b5000 = &DAT_026f75b0;
      _DAT_028b5008 = 0;
      _DAT_028b5010 = &DAT_027e4f18;
      _DAT_028b5018 = FUN_01b831d0;
      _DAT_028b5020 = 0xaa1;
      _DAT_028b5028 = 0;
      uRam00000000028b5030 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5080 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5040 = "handleSelectLeftExtend";
      _DAT_028b5048 = &DAT_026f75b0;
      _DAT_028b5050 = 0;
      _DAT_028b5058 = &DAT_027e4f18;
      _DAT_028b5060 = FUN_01b831d0;
      _DAT_028b5068 = 0xaa9;
      _DAT_028b5070 = 0;
      uRam00000000028b5078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b50c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5088 = "handleSelectRightExtend";
      _DAT_028b5090 = &DAT_026f75b0;
      _DAT_028b5098 = 0;
      _DAT_028b50a0 = &DAT_027e4f18;
      _DAT_028b50a8 = FUN_01b831d0;
      _DAT_028b50b0 = 0xab1;
      _DAT_028b50b8 = 0;
      uRam00000000028b50c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5110 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b50d0 = "handleSelectAll";
      _DAT_028b50d8 = &DAT_026f75b0;
      _DAT_028b50e0 = 0;
      _DAT_028b50e8 = &DAT_027e4f18;
      _DAT_028b50f0 = FUN_01b831d0;
      _DAT_028b50f8 = 0xab9;
      _DAT_028b5100 = 0;
      uRam00000000028b5108 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5158 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5118 = "handleCut";
      _DAT_028b5120 = &DAT_026f75b0;
      _DAT_028b5128 = 0;
      _DAT_028b5130 = &DAT_027e4f18;
      _DAT_028b5138 = FUN_01b831d0;
      _DAT_028b5140 = 0xae1;
      _DAT_028b5148 = 0;
      uRam00000000028b5150 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b51a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5160 = "handleCopy";
      _DAT_028b5168 = &DAT_026f75b0;
      _DAT_028b5170 = 0;
      _DAT_028b5178 = &DAT_027e4f18;
      _DAT_028b5180 = FUN_01b831d0;
      _DAT_028b5188 = 0xae9;
      _DAT_028b5190 = 0;
      uRam00000000028b5198 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b51e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b51a8 = "handlePaste";
      _DAT_028b51b0 = &DAT_026f75b0;
      _DAT_028b51b8 = 0;
      _DAT_028b51c0 = &DAT_027e4f18;
      _DAT_028b51c8 = FUN_01b831d0;
      _DAT_028b51d0 = 0xaf1;
      _DAT_028b51d8 = 0;
      uRam00000000028b51e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5230 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b51f0 = "handleDelete";
      _DAT_028b51f8 = &DAT_026f75b0;
      _DAT_028b5200 = 0;
      _DAT_028b5208 = &DAT_027e4f18;
      _DAT_028b5210 = FUN_01b831d0;
      _DAT_028b5218 = 0xaf9;
      _DAT_028b5220 = 0;
      uRam00000000028b5228 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5278 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5238 = "handleUndo";
      _DAT_028b5240 = &DAT_026f75b0;
      _DAT_028b5248 = 0;
      _DAT_028b5250 = &DAT_027e4f18;
      _DAT_028b5258 = FUN_01b831d0;
      _DAT_028b5260 = FUN_01b7fe30;
      _DAT_028b5268 = 0;
      uRam00000000028b5270 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b52c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5280 = "setHighlightAlpha";
      _DAT_028b5288 = &DAT_026f75b0;
      _DAT_028b5290 = 0;
      _DAT_028b5298 = &DAT_027e4f1c;
      _DAT_028b52a0 = FUN_01b83260;
      _DAT_028b52a8 = FUN_01b68630;
      _DAT_028b52b0 = 0;
      uRam00000000028b52b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5308 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b52c8 = "getHighlightAlpha";
      _DAT_028b52d0 = &DAT_026f75b0;
      _DAT_028b52d8 = 0;
      _DAT_028b52e0 = &DAT_027e4f1f;
      _DAT_028b52e8 = FUN_01b83290;
      _DAT_028b52f0 = FUN_01b68660;
      _DAT_028b52f8 = 0;
      uRam00000000028b5300 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5350 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5310 = "handleMoveLeft";
      _DAT_028b5318 = &DAT_026f75b0;
      _DAT_028b5320 = 0;
      _DAT_028b5328 = &DAT_027e4f18;
      _DAT_028b5330 = FUN_01b831d0;
      _DAT_028b5338 = 0xac1;
      _DAT_028b5340 = 0;
      uRam00000000028b5348 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5398 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5358 = "handleMoveRight";
      _DAT_028b5360 = &DAT_026f75b0;
      _DAT_028b5368 = 0;
      _DAT_028b5370 = &DAT_027e4f18;
      _DAT_028b5378 = FUN_01b831d0;
      _DAT_028b5380 = 0xac9;
      _DAT_028b5388 = 0;
      uRam00000000028b5390 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b53e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b53a0 = "handleMergeNote";
      _DAT_028b53a8 = &DAT_026f75b0;
      _DAT_028b53b0 = 0;
      _DAT_028b53b8 = &DAT_027e4f18;
      _DAT_028b53c0 = FUN_01b831d0;
      _DAT_028b53c8 = 0xb01;
      _DAT_028b53d0 = 0;
      uRam00000000028b53d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5428 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e2750 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f75c8 = FUN_0006d940();
          _DAT_026f75b0 = "MUQuarterSequenceView";
          _DAT_026f75b8 = 0x1f8;
          _DAT_026f75c0 = FUN_0010c6a0;
          _DAT_026f75d0 = 0;
          uRam00000000026f75d8 = 0;
          _DAT_026f75e0 = 0;
          uRam00000000026f75e8 = 0;
          _DAT_026f75f0 = 0;
          uRam00000000026f75f8 = 0;
          _DAT_026f7600 = 0;
          uRam00000000026f7608 = 0;
          _DAT_026f7610 = 0;
          uRam00000000026f7618 = 0;
          _DAT_026f7620 = 0;
          uRam00000000026f7628 = 0;
          _DAT_026f7630 = 0;
          uRam00000000026f7638 = 0;
          _DAT_026f7640 = 0;
          uRam00000000026f7648 = 0;
          _DAT_026f7650 = 0;
          uRam00000000026f7658 = 0;
          _DAT_026f7660 = 0;
          uRam00000000026f7668 = 0;
          _DAT_026f7670 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b53e8 = "handleSeparateNote";
      _DAT_028b53f0 = &DAT_026f75b0;
      _DAT_028b53f8 = 0;
      _DAT_028b5400 = &DAT_027e4f18;
      _DAT_028b5408 = FUN_01b831d0;
      _DAT_028b5410 = 0xb09;
      _DAT_028b5418 = 0;
      uRam00000000028b5420 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00657c30 — 2089 bytes
// str: ""MUQuarterSequenceView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00658153) */
/* WARNING: Removing unreachable block (ram,0x0065815f) */
/* WARNING: Removing unreachable block (ram,0x0065816d) */
/* WARNING: Removing unreachable block (ram,0x00658179) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00657c30(pthread_key_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int extraout_var;
  ulonglong uVar9;
  void *pvVar10;
  longlong *plVar11;
  longlong *unaff_RDI;
  longlong **pplVar12;
  longlong *plVar13;
  longlong *plVar14;
  double dVar15;
  longlong *local_b8;
  char local_b0;
  int iStack_84;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  double local_38;
  
  FUN_01e561b0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00657c8b;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_00657c8b:
    pplVar12 = &local_48;
    FUN_01d8b200();
    plVar14 = local_48;
    uVar8 = FUN_000914a0();
    if (plVar14 == (longlong *)0x0) {
LAB_00657cce:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar14 + 0x360))();
      uVar8 = FUN_00e85ea0();
      if ((char)uVar8 == '\0') goto LAB_00657cce;
    }
    plVar14 = *pplVar12;
    if (plVar14 == (longlong *)0x0) {
      bVar3 = true;
      bVar4 = true;
      plVar14 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        uVar8 = FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      bVar3 = false;
      bVar4 = false;
    }
    if ((local_40 != '\0') && (bVar4 = bVar3, local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_38 = (double)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    if (plVar14 == (longlong *)0x0) {
      pplVar12 = &local_48;
      FUN_01d8b200();
      plVar13 = local_48;
      if ((DAT_027e2750 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026f75c8 = FUN_0006d940();
        _DAT_026f75b0 = "MUQuarterSequenceView";
        _DAT_026f75b8 = 0x1f8;
        param_1 = 0x10c6a0;
        _DAT_026f75c0 = FUN_0010c6a0;
        _DAT_026f75d0 = 0;
        uRam00000000026f75d8 = 0;
        _DAT_026f75e0 = 0;
        uRam00000000026f75e8 = 0;
        _DAT_026f75f0 = 0;
        uRam00000000026f75f8 = 0;
        _DAT_026f7600 = 0;
        uRam00000000026f7608 = 0;
        _DAT_026f7610 = 0;
        uRam00000000026f7618 = 0;
        _DAT_026f7620 = 0;
        uRam00000000026f7628 = 0;
        _DAT_026f7630 = 0;
        uRam00000000026f7638 = 0;
        _DAT_026f7640 = 0;
        uRam00000000026f7648 = 0;
        _DAT_026f7650 = 0;
        uRam00000000026f7658 = 0;
        _DAT_026f7660 = 0;
        uRam00000000026f7668 = 0;
        _DAT_026f7670 = 0;
        ___cxa_guard_release();
      }
      if (plVar13 == (longlong *)0x0) {
LAB_00657d86:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00657d86;
      }
      local_50 = *pplVar12;
      if (local_50 == (longlong *)0x0) {
        bVar3 = false;
        local_50 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar12 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        local_38 = 0.0;
        goto LAB_00657de3;
      }
      FUN_01f27fe0();
      cVar6 = (**(code **)(*local_48 + 0x450))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 != '\0') {
        pplVar12 = &local_48;
        FUN_01d8b220();
        plVar13 = local_48;
        FUN_000829c0();
        if (plVar13 == (longlong *)0x0) {
LAB_00658025:
          pplVar12 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_00658025;
        }
        plVar13 = *pplVar12;
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          if (*(char *)(pplVar12 + 1) == '\0') {
            FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
          }
          bVar2 = true;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = (longlong *)0x0;
        if (plVar13 == (longlong *)0x0) goto LAB_006581d8;
        goto LAB_00657dec;
      }
LAB_006581d8:
      uVar9 = 0;
    }
    else {
      local_50 = (longlong *)0x0;
      bVar3 = false;
LAB_00657de3:
      bVar2 = false;
      plVar13 = (longlong *)0x0;
LAB_00657dec:
      (**(code **)(*unaff_RDI + 0x5e0))();
      if (local_40 == '\0') {
        if (local_48 == (longlong *)0x0) goto LAB_00657f75;
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00657e36:
        FUN_00756eb0();
        plVar5 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00657e50;
          }
LAB_00658198:
          uVar9 = 0;
        }
        else {
LAB_00657e50:
          if ((plVar5 == (longlong *)0x0) || (param_2 == '\0')) {
LAB_0065818c:
            if (plVar5 == (longlong *)0x0) goto LAB_00658198;
          }
          else if (plVar14 == (longlong *)0x0 && plVar13 == (longlong *)0x0) {
            if (local_38._0_1_ != '\0') goto LAB_0065818c;
            (**(code **)(*local_50 + 0x9d8))();
            uVar9 = (**(code **)(*local_50 + 0x9e0))();
            if (((extraout_var == 0) || (uVar9 >> 0x20 == 0)) ||
               (cVar6 = FUN_00e7c000(), cVar6 == '\0')) {
              (**(code **)(*local_50 + 0x978))();
              plVar11 = local_48;
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                if (extraout_var == 0) {
                  (**(code **)(*local_50 + 0x978))();
                  local_58 = (**(code **)(*local_48 + 0x940))();
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  (**(code **)(*local_50 + 0xa60))();
                  pvVar10 = _pthread_getspecific(param_1);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_58 = FUN_016c98e0();
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                iStack_84 = (int)(uVar9 >> 0x20);
                if (iStack_84 == 0) {
                  (**(code **)(*local_50 + 0x978))();
                  local_38 = (double)(**(code **)(*local_48 + 0x940))();
                  (**(code **)(*local_50 + 0x978))();
                  dVar15 = (double)(**(code **)(*local_b8 + 0x918))();
                  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  dVar15 = local_38 + dVar15;
                }
                else {
                  (**(code **)(*local_50 + 0xa60))();
                  pvVar10 = _pthread_getspecific(param_1);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_38 = (double)FUN_016c98e0();
                  dVar15 = local_38;
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    dVar15 = local_38;
                  }
                }
                (**(code **)(*plVar5 + 0x428))(local_58,dVar15);
              }
            }
          }
          else {
            if (plVar13 == (longlong *)0x0) {
              (**(code **)(*plVar14 + 0xe20))();
              plVar11 = local_48;
              if (local_48 == (longlong *)0x0) goto LAB_006580da;
              bVar1 = true;
              if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_002ee280();
              plVar11 = local_48;
              if (local_48 == (longlong *)0x0) {
LAB_006580da:
                bVar1 = false;
                plVar11 = (longlong *)0x0;
              }
              else {
                bVar1 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
                   (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (plVar11 != (longlong *)0x0) {
              if (*(int *)((longlong)plVar11 + 0xc) != 0) {
                local_38 = (double)FUN_01266200();
                uVar8 = FUN_012664b0();
                (**(code **)(*plVar5 + 0x428))(local_38,uVar8);
              }
              if (bVar1) {
                FUN_00d50b20();
              }
              goto LAB_0065818c;
            }
          }
          uVar9 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        if (local_48 != (longlong *)0x0) goto LAB_00657e36;
LAB_00657f75:
        uVar9 = 0;
      }
      if ((bVar2) && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar4 && plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((bVar3) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_0065838f;
  }
  uVar9 = 0;
LAB_0065838f:
  return uVar9 & 0xffffffff;
}



