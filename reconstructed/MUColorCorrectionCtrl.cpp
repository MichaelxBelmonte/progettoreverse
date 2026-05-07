// Reconstructed implementation of MUColorCorrectionCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MUColorCorrectionCtrl.h"

// ============================================================
// @01b5a960 — 2165 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b5b0c6) */
/* WARNING: Removing unreachable block (ram,0x01b5b0d2) */
/* WARNING: Removing unreachable block (ram,0x01b5b048) */
/* WARNING: Removing unreachable block (ram,0x01b5b051) */
/* WARNING: Removing unreachable block (ram,0x01b5af5a) */
/* WARNING: Removing unreachable block (ram,0x01b5af63) */
/* WARNING: Removing unreachable block (ram,0x01b5ae71) */
/* WARNING: Removing unreachable block (ram,0x01b5ae7a) */
/* WARNING: Removing unreachable block (ram,0x01b5ad83) */
/* WARNING: Removing unreachable block (ram,0x01b5ad8c) */
/* WARNING: Removing unreachable block (ram,0x01b5ac9a) */
/* WARNING: Removing unreachable block (ram,0x01b5aca3) */
/* WARNING: Removing unreachable block (ram,0x01b5abac) */
/* WARNING: Removing unreachable block (ram,0x01b5abb5) */
/* WARNING: Removing unreachable block (ram,0x01b5aa89) */
/* WARNING: Removing unreachable block (ram,0x01b5aa35) */
/* WARNING: Removing unreachable block (ram,0x01b5aa41) */
/* WARNING: Removing unreachable block (ram,0x01b5aa7d) */
/* WARNING: Removing unreachable block (ram,0x01b5ab35) */
/* WARNING: Removing unreachable block (ram,0x01b5ab3e) */
/* WARNING: Removing unreachable block (ram,0x01b5ac23) */
/* WARNING: Removing unreachable block (ram,0x01b5ac2c) */
/* WARNING: Removing unreachable block (ram,0x01b5ad0c) */
/* WARNING: Removing unreachable block (ram,0x01b5ad15) */
/* WARNING: Removing unreachable block (ram,0x01b5adfa) */
/* WARNING: Removing unreachable block (ram,0x01b5ae03) */
/* WARNING: Removing unreachable block (ram,0x01b5aee3) */
/* WARNING: Removing unreachable block (ram,0x01b5aeec) */
/* WARNING: Removing unreachable block (ram,0x01b5afd1) */
/* WARNING: Removing unreachable block (ram,0x01b5afda) */
/* WARNING: Removing unreachable block (ram,0x01b5b189) */
/* WARNING: Removing unreachable block (ram,0x01b5b192) */
/* WARNING: Removing unreachable block (ram,0x01b5a9a5) */
/* WARNING: Removing unreachable block (ram,0x01b5a9ae) */
/* WARNING: Removing unreachable block (ram,0x01b5a9ef) */
/* WARNING: Removing unreachable block (ram,0x01b5a9f8) */

undefined8 FUN_01b5a960(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01b57f70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x970))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b5a9fd;
    }
  }
  else if (local_40 != 0) {
LAB_01b5a9fd:
    iVar2 = FUN_00d8c7a0();
    if (iVar2 < 1) {
      FUN_00d50b20();
      if (local_40 == 0) {
        return 1;
      }
      FUN_00d50b20();
      return 1;
    }
    cVar1 = FUN_01b58db0();
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x968))();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      uVar4 = FUN_00d21140();
      if (local_50 != 0) {
        uVar4 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      local_90 = local_40;
      local_88 = '\0';
      FUN_01b58cf0(uVar4,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_80 = DAT_027e4900;
      if (DAT_027e4900 != 0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d50b00();
      local_70 = 0;
      local_68 = '\0';
      FUN_00d40470(&local_70,&stack0xffffffffffffffa0,1,3);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x600))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 == 0) {
      return 1;
    }
    FUN_00d50b20();
    return 1;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @01b59670 — 1697 bytes
// str: ""MUColorCorrectionCtrl""
// str: ""handleAddCC""
// str: ""handleLoadCC""
// str: ""handleSaveCC""
// str: ""handleDelCC""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b59670(void)

{
  int iVar1;
  
  if (DAT_028b4b70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02730a98 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027309e8 = FUN_00015ff0();
          _DAT_027309d0 = "MUColorCorrectionCtrl";
          _DAT_027309d8 = 0x90;
          _DAT_027309e0 = FUN_0081e5d0;
          _DAT_027309f0 = 0;
          uRam00000000027309f8 = 0;
          _DAT_02730a00 = 0;
          uRam0000000002730a08 = 0;
          _DAT_02730a10 = 0;
          uRam0000000002730a18 = 0;
          _DAT_02730a20 = 0;
          uRam0000000002730a28 = 0;
          _DAT_02730a30 = 0;
          uRam0000000002730a38 = 0;
          _DAT_02730a40 = 0;
          uRam0000000002730a48 = 0;
          _DAT_02730a50 = 0;
          uRam0000000002730a58 = 0;
          _DAT_02730a60 = 0;
          uRam0000000002730a68 = 0;
          _DAT_02730a70 = 0;
          uRam0000000002730a78 = 0;
          _DAT_02730a80 = 0;
          uRam0000000002730a88 = 0;
          _DAT_02730a90 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4b30 = "handleAddCC";
      _DAT_028b4b38 = &DAT_027309d0;
      _DAT_028b4b40 = 0;
      _DAT_028b4b48 = &DAT_027e4908;
      _DAT_028b4b50 = FUN_01b5c4f0;
      _DAT_028b4b58 = 0x5c9;
      _DAT_028b4b60 = 0;
      uRam00000000028b4b68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4bb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02730a98 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027309e8 = FUN_00015ff0();
          _DAT_027309d0 = "MUColorCorrectionCtrl";
          _DAT_027309d8 = 0x90;
          _DAT_027309e0 = FUN_0081e5d0;
          _DAT_027309f0 = 0;
          uRam00000000027309f8 = 0;
          _DAT_02730a00 = 0;
          uRam0000000002730a08 = 0;
          _DAT_02730a10 = 0;
          uRam0000000002730a18 = 0;
          _DAT_02730a20 = 0;
          uRam0000000002730a28 = 0;
          _DAT_02730a30 = 0;
          uRam0000000002730a38 = 0;
          _DAT_02730a40 = 0;
          uRam0000000002730a48 = 0;
          _DAT_02730a50 = 0;
          uRam0000000002730a58 = 0;
          _DAT_02730a60 = 0;
          uRam0000000002730a68 = 0;
          _DAT_02730a70 = 0;
          uRam0000000002730a78 = 0;
          _DAT_02730a80 = 0;
          uRam0000000002730a88 = 0;
          _DAT_02730a90 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4b78 = "handleLoadCC";
      _DAT_028b4b80 = &DAT_027309d0;
      _DAT_028b4b88 = 0;
      _DAT_028b4b90 = &DAT_027e4908;
      _DAT_028b4b98 = FUN_01b5c4f0;
      _DAT_028b4ba0 = 0x5e1;
      _DAT_028b4ba8 = 0;
      uRam00000000028b4bb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4c00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02730a98 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027309e8 = FUN_00015ff0();
          _DAT_027309d0 = "MUColorCorrectionCtrl";
          _DAT_027309d8 = 0x90;
          _DAT_027309e0 = FUN_0081e5d0;
          _DAT_027309f0 = 0;
          uRam00000000027309f8 = 0;
          _DAT_02730a00 = 0;
          uRam0000000002730a08 = 0;
          _DAT_02730a10 = 0;
          uRam0000000002730a18 = 0;
          _DAT_02730a20 = 0;
          uRam0000000002730a28 = 0;
          _DAT_02730a30 = 0;
          uRam0000000002730a38 = 0;
          _DAT_02730a40 = 0;
          uRam0000000002730a48 = 0;
          _DAT_02730a50 = 0;
          uRam0000000002730a58 = 0;
          _DAT_02730a60 = 0;
          uRam0000000002730a68 = 0;
          _DAT_02730a70 = 0;
          uRam0000000002730a78 = 0;
          _DAT_02730a80 = 0;
          uRam0000000002730a88 = 0;
          _DAT_02730a90 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4bc0 = "handleSaveCC";
      _DAT_028b4bc8 = &DAT_027309d0;
      _DAT_028b4bd0 = 0;
      _DAT_028b4bd8 = &DAT_027e4908;
      _DAT_028b4be0 = FUN_01b5c4f0;
      _DAT_028b4be8 = 0x5d9;
      _DAT_028b4bf0 = 0;
      uRam00000000028b4bf8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4c48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02730a98 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027309e8 = FUN_00015ff0();
          _DAT_027309d0 = "MUColorCorrectionCtrl";
          _DAT_027309d8 = 0x90;
          _DAT_027309e0 = FUN_0081e5d0;
          _DAT_027309f0 = 0;
          uRam00000000027309f8 = 0;
          _DAT_02730a00 = 0;
          uRam0000000002730a08 = 0;
          _DAT_02730a10 = 0;
          uRam0000000002730a18 = 0;
          _DAT_02730a20 = 0;
          uRam0000000002730a28 = 0;
          _DAT_02730a30 = 0;
          uRam0000000002730a38 = 0;
          _DAT_02730a40 = 0;
          uRam0000000002730a48 = 0;
          _DAT_02730a50 = 0;
          uRam0000000002730a58 = 0;
          _DAT_02730a60 = 0;
          uRam0000000002730a68 = 0;
          _DAT_02730a70 = 0;
          uRam0000000002730a78 = 0;
          _DAT_02730a80 = 0;
          uRam0000000002730a88 = 0;
          _DAT_02730a90 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4c08 = "handleDelCC";
      _DAT_028b4c10 = &DAT_027309d0;
      _DAT_028b4c18 = 0;
      _DAT_028b4c20 = &DAT_027e4908;
      _DAT_028b4c28 = FUN_01b5c4f0;
      _DAT_028b4c30 = 0x5d1;
      _DAT_028b4c38 = 0;
      uRam00000000028b4c40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4c90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02730a98 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027309e8 = FUN_00015ff0();
          _DAT_027309d0 = "MUColorCorrectionCtrl";
          _DAT_027309d8 = 0x90;
          _DAT_027309e0 = FUN_0081e5d0;
          _DAT_027309f0 = 0;
          uRam00000000027309f8 = 0;
          _DAT_02730a00 = 0;
          uRam0000000002730a08 = 0;
          _DAT_02730a10 = 0;
          uRam0000000002730a18 = 0;
          _DAT_02730a20 = 0;
          uRam0000000002730a28 = 0;
          _DAT_02730a30 = 0;
          uRam0000000002730a38 = 0;
          _DAT_02730a40 = 0;
          uRam0000000002730a48 = 0;
          _DAT_02730a50 = 0;
          uRam0000000002730a58 = 0;
          _DAT_02730a60 = 0;
          uRam0000000002730a68 = 0;
          _DAT_02730a70 = 0;
          uRam0000000002730a78 = 0;
          _DAT_02730a80 = 0;
          uRam0000000002730a88 = 0;
          _DAT_02730a90 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4c50 = "handleSelectCC";
      _DAT_028b4c58 = &DAT_027309d0;
      _DAT_028b4c60 = 0;
      _DAT_028b4c68 = &DAT_027e4908;
      _DAT_028b4c70 = FUN_01b5c4f0;
      _DAT_028b4c78 = 0x5e9;
      _DAT_028b4c80 = 0;
      uRam00000000028b4c88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01b5a070 — 625 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b5a2c7) */
/* WARNING: Removing unreachable block (ram,0x01b5a2d7) */
/* WARNING: Removing unreachable block (ram,0x01b5a0b2) */
/* WARNING: Removing unreachable block (ram,0x01b5a0bb) */
/* WARNING: Removing unreachable block (ram,0x01b5a0ee) */
/* WARNING: Removing unreachable block (ram,0x01b5a0f7) */

undefined8 FUN_01b5a070(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01b57f70();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01dd4960();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_40 + 0x18) < 4) {
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01b58c00();
      local_60 = *(longlong *)
                  (*(longlong *)(local_40 + 0x10) + (longlong)**(int **)(local_40 + 0x10) * 8);
      local_58 = 0;
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_01b58c80();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01b58c00();
      iVar1 = *(int *)(local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (iVar1 == 0) {
        FUN_01b57030();
      }
      FUN_00d403d0();
      lVar2 = DAT_027e4900;
      if (DAT_027e4900 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_70 = 0;
      local_68 = '\0';
      FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x600))();
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return 1;
}




// ============================================================
// @01b5a510 — 551 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b5a5cc) */
/* WARNING: Removing unreachable block (ram,0x01b5a5d8) */
/* WARNING: Removing unreachable block (ram,0x01b5a552) */
/* WARNING: Removing unreachable block (ram,0x01b5a55b) */
/* WARNING: Removing unreachable block (ram,0x01b5a58e) */
/* WARNING: Removing unreachable block (ram,0x01b5a597) */

undefined8 FUN_01b5a510(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01b57f70();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01dd4960();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_40 + 0x18) + 3U < 7) {
      FUN_01b57030();
    }
    else {
      FUN_01b58c00();
      local_60 = *(longlong *)
                  (*(longlong *)(local_40 + 0x10) + (longlong)**(int **)(local_40 + 0x10) * 8);
      local_58 = 0;
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_01b57030();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = DAT_027e4900;
    if (DAT_027e4900 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x600))();
    FUN_00d50b20();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @008087a0 — 517 bytes
// str: ""MUColorCorrectionCtrl""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008088ce) */
/* WARNING: Removing unreachable block (ram,0x008088c0) */
/* WARNING: Removing unreachable block (ram,0x008088dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008087a0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  
  if ((DAT_02730a98 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027309e8 = FUN_00015ff0();
    _DAT_027309d0 = "MUColorCorrectionCtrl";
    _DAT_027309d8 = 0x90;
    _DAT_027309e0 = FUN_0081e5d0;
    _DAT_027309f0 = 0;
    uRam00000000027309f8 = 0;
    _DAT_02730a00 = 0;
    uRam0000000002730a08 = 0;
    _DAT_02730a10 = 0;
    uRam0000000002730a18 = 0;
    _DAT_02730a20 = 0;
    uRam0000000002730a28 = 0;
    _DAT_02730a30 = 0;
    uRam0000000002730a38 = 0;
    _DAT_02730a40 = 0;
    uRam0000000002730a48 = 0;
    _DAT_02730a50 = 0;
    uRam0000000002730a58 = 0;
    _DAT_02730a60 = 0;
    uRam0000000002730a68 = 0;
    _DAT_02730a70 = 0;
    uRam0000000002730a78 = 0;
    _DAT_02730a80 = 0;
    _uRam0000000002730a88 = 0;
    _DAT_02730a90 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02730a8b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0081e620();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b59670();
    FUN_00e87920(uVar2,0);
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    if (local_c0 != 0) {
      FUN_00d50b20();
    }
    if (local_c8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



