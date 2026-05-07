// Reconstructed implementation of GNLocaleExportController
// From MikeCore binary — reverse-engineered pseudocode

#include "GNLocaleExportController.h"

// ============================================================
// @01f6fa60 — 2104 bytes
// ============================================================

void FUN_01f6fa60(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  undefined7 extraout_var;
  longlong lVar6;
  longlong unaff_RDI;
  undefined7 uVar9;
  ulonglong uVar8;
  byte bVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  longlong local_40;
  char local_38;
  
  local_48 = 0;
  FUN_01e534b0();
  *(undefined2 *)(unaff_RDI + 0xa0) = 0;
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    *(undefined8 *)(unaff_RDI + 0x70) = 0;
    local_48 = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    *(undefined8 *)(unaff_RDI + 0x78) = 0;
    local_48 = 0;
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_118 = DAT_02800c50;
  if (DAT_02800c50 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  uVar5 = FUN_00d710b0(&local_108,&local_118);
  lVar11 = local_40;
  if (local_40 == 0) {
    bVar10 = 1;
    lVar11 = 0;
    local_48 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar5 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      bVar10 = 0;
      if ((local_38 == '\0') || (bVar10 = 0, local_40 == 0)) goto LAB_01f6fb7f;
      uVar5 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    bVar10 = 0;
  }
LAB_01f6fb7f:
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar11 != 0) && (iVar4 = FUN_00d8c7a0(), 0 < iVar4)) {
    local_f0 = '\0';
    local_f8 = lVar11;
    FUN_00cddf30();
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    lVar6 = lVar1;
    if (lVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar6 = 0;
          goto LAB_01f6fc1b;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x70);
        *(longlong *)(unaff_RDI + 0x70) = local_40;
        lVar6 = local_40;
      }
      else {
        local_38 = '\0';
        lVar6 = local_40;
LAB_01f6fc1b:
        *(longlong *)(unaff_RDI + 0x70) = lVar6;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar6 = local_40;
      }
    }
    if ((local_38 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (((*(longlong **)(unaff_RDI + 0x70) != (longlong *)0x0) &&
        (cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x3a0))(), cVar3 == '\0')) &&
       (*(longlong *)(unaff_RDI + 0x70) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x70) = 0;
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x88);
  if (*(longlong **)(unaff_RDI + 0x70) == (longlong *)0x0) {
    FUN_00d8ede0();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x470))();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x98);
  if (*(longlong **)(unaff_RDI + 0x78) == (longlong *)0x0) {
    FUN_00d8ede0();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x470))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d6f370();
  lVar1 = local_98;
  local_e8 = DAT_02800c58;
  if (DAT_02800c58 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  uVar5 = FUN_00d710b0(&local_d8,&local_e8);
  lVar6 = local_40;
  uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
  uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
  if (local_40 == lVar11) {
    lVar6 = lVar11;
    if ((bool)(bVar10 & local_40 != 0)) {
      if (local_38 != '\0') goto LAB_01f6ff51;
      uVar8 = CONCAT71(uVar9,1);
      FUN_00d50b00();
    }
    else {
      uVar8 = local_48 & 0xffffffff;
    }
LAB_01f6ffb3:
    lVar11 = lVar6;
    if ((local_38 == '\0') || (local_40 == 0)) {
      local_48 = uVar8 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_48 = uVar8 & 0xffffffff;
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar8 = CONCAT71(uVar9,1);
      if (((byte)local_48 & lVar11 != 0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01f6ffb3;
    }
    bVar12 = lVar11 != 0;
    lVar11 = lVar6;
    if (((byte)local_48 & bVar12) == 1) {
      FUN_00d50b20();
      uVar7 = extraout_var;
    }
LAB_01f6ff51:
    local_38 = '\0';
    local_48 = CONCAT71(uVar7,1);
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar11 == 0) || (iVar4 = FUN_00d8c7a0(), iVar4 < 1)) goto LAB_01f70138;
  local_c0 = '\0';
  local_c8 = lVar11;
  FUN_00cddf30();
  lVar1 = *(longlong *)(unaff_RDI + 0x80);
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01f70075;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_40;
      lVar6 = local_40;
    }
    else {
      local_38 = '\0';
      lVar6 = local_40;
LAB_01f70075:
      *(longlong *)(unaff_RDI + 0x80) = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (((*(longlong **)(unaff_RDI + 0x80) != (longlong *)0x0) &&
      (cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x3a0))(), cVar3 == '\0')) &&
     (*(longlong *)(unaff_RDI + 0x80) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x80) = 0;
    FUN_00d50b20();
  }
LAB_01f70138:
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (*(longlong **)(unaff_RDI + 0x80) == (longlong *)0x0) {
    FUN_00d8ede0();
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x470))();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_48 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01f6f220 — 2057 bytes
// str: ""GNLocaleExportController""
// str: ""handleSetDestResourceDir""
// str: ""handleSetOldResourceDir""
// str: ""handleSetOldResourceDir2""
// str: ""handleSetBuildFromScratch""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f6f220(void)

{
  int iVar1;
  
  if (DAT_028bae38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f8150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f80a0 = FUN_00015ff0();
          _DAT_027f8088 = "GNLocaleExportController";
          _DAT_027f8090 = 0xa8;
          _DAT_027f8098 = FUN_01e85f20;
          _DAT_027f80a8 = 0;
          uRam00000000027f80b0 = 0;
          _DAT_027f80b8 = 0;
          uRam00000000027f80c0 = 0;
          _DAT_027f80c8 = 0;
          uRam00000000027f80d0 = 0;
          _DAT_027f80d8 = 0;
          uRam00000000027f80e0 = 0;
          _DAT_027f80e8 = 0;
          uRam00000000027f80f0 = 0;
          _DAT_027f80f8 = 0;
          uRam00000000027f8100 = 0;
          _DAT_027f8108 = 0;
          uRam00000000027f8110 = 0;
          _DAT_027f8118 = 0;
          uRam00000000027f8120 = 0;
          _DAT_027f8128 = 0;
          uRam00000000027f8130 = 0;
          _DAT_027f8138 = 0;
          uRam00000000027f8140 = 0;
          _DAT_027f8148 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028badf8 = "handleSetDestResourceDir";
      _DAT_028bae00 = &DAT_027f8088;
      _DAT_028bae08 = 0;
      _DAT_028bae10 = &DAT_02800c88;
      _DAT_028bae18 = FUN_01f79c60;
      _DAT_028bae20 = FUN_01f70830;
      _DAT_028bae28 = 0;
      uRam00000000028bae30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bae80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f8150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f80a0 = FUN_00015ff0();
          _DAT_027f8088 = "GNLocaleExportController";
          _DAT_027f8090 = 0xa8;
          _DAT_027f8098 = FUN_01e85f20;
          _DAT_027f80a8 = 0;
          uRam00000000027f80b0 = 0;
          _DAT_027f80b8 = 0;
          uRam00000000027f80c0 = 0;
          _DAT_027f80c8 = 0;
          uRam00000000027f80d0 = 0;
          _DAT_027f80d8 = 0;
          uRam00000000027f80e0 = 0;
          _DAT_027f80e8 = 0;
          uRam00000000027f80f0 = 0;
          _DAT_027f80f8 = 0;
          uRam00000000027f8100 = 0;
          _DAT_027f8108 = 0;
          uRam00000000027f8110 = 0;
          _DAT_027f8118 = 0;
          uRam00000000027f8120 = 0;
          _DAT_027f8128 = 0;
          uRam00000000027f8130 = 0;
          _DAT_027f8138 = 0;
          uRam00000000027f8140 = 0;
          _DAT_027f8148 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bae40 = "handleSetOldResourceDir";
      _DAT_028bae48 = &DAT_027f8088;
      _DAT_028bae50 = 0;
      _DAT_028bae58 = &DAT_02800c88;
      _DAT_028bae60 = FUN_01f79c60;
      _DAT_028bae68 = FUN_01f711a0;
      _DAT_028bae70 = 0;
      uRam00000000028bae78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028baec8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f8150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f80a0 = FUN_00015ff0();
          _DAT_027f8088 = "GNLocaleExportController";
          _DAT_027f8090 = 0xa8;
          _DAT_027f8098 = FUN_01e85f20;
          _DAT_027f80a8 = 0;
          uRam00000000027f80b0 = 0;
          _DAT_027f80b8 = 0;
          uRam00000000027f80c0 = 0;
          _DAT_027f80c8 = 0;
          uRam00000000027f80d0 = 0;
          _DAT_027f80d8 = 0;
          uRam00000000027f80e0 = 0;
          _DAT_027f80e8 = 0;
          uRam00000000027f80f0 = 0;
          _DAT_027f80f8 = 0;
          uRam00000000027f8100 = 0;
          _DAT_027f8108 = 0;
          uRam00000000027f8110 = 0;
          _DAT_027f8118 = 0;
          uRam00000000027f8120 = 0;
          _DAT_027f8128 = 0;
          uRam00000000027f8130 = 0;
          _DAT_027f8138 = 0;
          uRam00000000027f8140 = 0;
          _DAT_027f8148 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bae88 = "handleSetOldResourceDir2";
      _DAT_028bae90 = &DAT_027f8088;
      _DAT_028bae98 = 0;
      _DAT_028baea0 = &DAT_02800c88;
      _DAT_028baea8 = FUN_01f79c60;
      _DAT_028baeb0 = FUN_01f71650;
      _DAT_028baeb8 = 0;
      uRam00000000028baec0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028baf10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f8150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f80a0 = FUN_00015ff0();
          _DAT_027f8088 = "GNLocaleExportController";
          _DAT_027f8090 = 0xa8;
          _DAT_027f8098 = FUN_01e85f20;
          _DAT_027f80a8 = 0;
          uRam00000000027f80b0 = 0;
          _DAT_027f80b8 = 0;
          uRam00000000027f80c0 = 0;
          _DAT_027f80c8 = 0;
          uRam00000000027f80d0 = 0;
          _DAT_027f80d8 = 0;
          uRam00000000027f80e0 = 0;
          _DAT_027f80e8 = 0;
          uRam00000000027f80f0 = 0;
          _DAT_027f80f8 = 0;
          uRam00000000027f8100 = 0;
          _DAT_027f8108 = 0;
          uRam00000000027f8110 = 0;
          _DAT_027f8118 = 0;
          uRam00000000027f8120 = 0;
          _DAT_027f8128 = 0;
          uRam00000000027f8130 = 0;
          _DAT_027f8138 = 0;
          uRam00000000027f8140 = 0;
          _DAT_027f8148 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028baed0 = "handleSetBuildFromScratch";
      _DAT_028baed8 = &DAT_027f8088;
      _DAT_028baee0 = 0;
      _DAT_028baee8 = &DAT_02800c88;
      _DAT_028baef0 = FUN_01f79c60;
      _DAT_028baef8 = FUN_01f72000;
      _DAT_028baf00 = 0;
      uRam00000000028baf08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028baf58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f8150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f80a0 = FUN_00015ff0();
          _DAT_027f8088 = "GNLocaleExportController";
          _DAT_027f8090 = 0xa8;
          _DAT_027f8098 = FUN_01e85f20;
          _DAT_027f80a8 = 0;
          uRam00000000027f80b0 = 0;
          _DAT_027f80b8 = 0;
          uRam00000000027f80c0 = 0;
          _DAT_027f80c8 = 0;
          uRam00000000027f80d0 = 0;
          _DAT_027f80d8 = 0;
          uRam00000000027f80e0 = 0;
          _DAT_027f80e8 = 0;
          uRam00000000027f80f0 = 0;
          _DAT_027f80f8 = 0;
          uRam00000000027f8100 = 0;
          _DAT_027f8108 = 0;
          uRam00000000027f8110 = 0;
          _DAT_027f8118 = 0;
          uRam00000000027f8120 = 0;
          _DAT_027f8128 = 0;
          uRam00000000027f8130 = 0;
          _DAT_027f8138 = 0;
          uRam00000000027f8140 = 0;
          _DAT_027f8148 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028baf18 = "handleSetRemoveUnsedKeys";
      _DAT_028baf20 = &DAT_027f8088;
      _DAT_028baf28 = 0;
      _DAT_028baf30 = &DAT_02800c88;
      _DAT_028baf38 = FUN_01f79c60;
      _DAT_028baf40 = FUN_01f71fd0;
      _DAT_028baf48 = 0;
      uRam00000000028baf50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bafa0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f8150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f80a0 = FUN_00015ff0();
          _DAT_027f8088 = "GNLocaleExportController";
          _DAT_027f8090 = 0xa8;
          _DAT_027f8098 = FUN_01e85f20;
          _DAT_027f80a8 = 0;
          uRam00000000027f80b0 = 0;
          _DAT_027f80b8 = 0;
          uRam00000000027f80c0 = 0;
          _DAT_027f80c8 = 0;
          uRam00000000027f80d0 = 0;
          _DAT_027f80d8 = 0;
          uRam00000000027f80e0 = 0;
          _DAT_027f80e8 = 0;
          uRam00000000027f80f0 = 0;
          _DAT_027f80f8 = 0;
          uRam00000000027f8100 = 0;
          _DAT_027f8108 = 0;
          uRam00000000027f8110 = 0;
          _DAT_027f8118 = 0;
          uRam00000000027f8120 = 0;
          _DAT_027f8128 = 0;
          uRam00000000027f8130 = 0;
          _DAT_027f8138 = 0;
          uRam00000000027f8140 = 0;
          _DAT_027f8148 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028baf60 = "handleRunExport";
      _DAT_028baf68 = &DAT_027f8088;
      _DAT_028baf70 = 0;
      _DAT_028baf78 = &DAT_02800c88;
      _DAT_028baf80 = FUN_01f79c60;
      _DAT_028baf88 = FUN_01f72030;
      _DAT_028baf90 = 0;
      uRam00000000028baf98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01f71650 — 1332 bytes
// ============================================================

undefined8 FUN_01f71650(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  longlong local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_90 = 0;
    local_98 = *(longlong *)(unaff_RDI + 0x80);
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_c8 = 0;
    local_c0 = '\0';
    FUN_01f2a980(&local_d8,&local_98,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc) != 1)) {
      if (*(longlong *)(unaff_RDI + 0x80) != 0) {
        *(undefined8 *)(unaff_RDI + 0x80) = 0;
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_38;
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_48;
      }
      local_48 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x80);
      if (lVar5 == lVar3) {
        if ((local_48 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (lVar3 != 0) {
            FUN_00d50b00();
            lVar5 = *(longlong *)(unaff_RDI + 0x80);
          }
        }
        else {
          local_48 = '\0';
        }
        *(longlong *)(unaff_RDI + 0x80) = lVar3;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    if (*(longlong **)(unaff_RDI + 0x80) == (longlong *)0x0) {
      FUN_00d8ede0();
      local_78 = local_38;
      local_70 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x470))();
      local_88 = local_38;
      local_80 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x80) == 0) {
      FUN_00d6f370();
      FUN_00d8ede0();
      local_50 = 0;
      local_58 = CONCAT71(uStack_47,local_48);
      local_a8 = DAT_02800c50;
      if (local_40 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          local_a8 = DAT_02800c50;
        }
      }
      else {
        local_40 = '\0';
      }
      local_50 = '\x01';
      DAT_02800c50 = local_a8;
      if (local_a8 != 0) {
        local_50 = '\x01';
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_00d6f570();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d6f370();
      (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x368))();
      local_60 = 0;
      local_68 = CONCAT71(uStack_47,local_48);
      local_b8 = DAT_02800c58;
      if (local_40 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          local_b8 = DAT_02800c58;
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      DAT_02800c58 = local_b8;
      if (local_b8 != 0) {
        local_60 = '\x01';
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d6f570();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_30[0] != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @01f70830 — 1305 bytes
// ============================================================

undefined8 FUN_01f70830(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  longlong local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_90 = 0;
    local_98 = *(longlong *)(unaff_RDI + 0x70);
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_c8 = 0;
    local_c0 = '\0';
    FUN_01f2a980(&local_d8,&local_98,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc) != 1)) {
      if (*(longlong *)(unaff_RDI + 0x70) != 0) {
        *(undefined8 *)(unaff_RDI + 0x70) = 0;
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_38;
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_48;
      }
      local_48 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x70);
      if (lVar5 == lVar3) {
        if ((local_48 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (lVar3 != 0) {
            FUN_00d50b00();
            lVar5 = *(longlong *)(unaff_RDI + 0x70);
          }
        }
        else {
          local_48 = '\0';
        }
        *(longlong *)(unaff_RDI + 0x70) = lVar3;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    if (*(longlong **)(unaff_RDI + 0x70) == (longlong *)0x0) {
      FUN_00d8ede0();
      local_78 = local_38;
      local_70 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x470))();
      local_88 = local_38;
      local_80 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x70) == 0) {
      FUN_00d6f370();
      FUN_00d8ede0();
      local_50 = 0;
      local_58 = CONCAT71(uStack_47,local_48);
      local_a8 = DAT_02800c50;
      if (local_40 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          local_a8 = DAT_02800c50;
        }
      }
      else {
        local_40 = '\0';
      }
      local_50 = '\x01';
      DAT_02800c50 = local_a8;
      if (local_a8 != 0) {
        local_50 = '\x01';
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_00d6f570();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d6f370();
      (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x368))();
      local_60 = 0;
      local_68 = CONCAT71(uStack_47,local_48);
      local_b8 = DAT_02800c50;
      if (local_40 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          local_b8 = DAT_02800c50;
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      DAT_02800c50 = local_b8;
      if (local_b8 != 0) {
        local_60 = '\x01';
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d6f570();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_30[0] != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @01f711a0 — 726 bytes
// ============================================================

undefined8 FUN_01f711a0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong lVar4;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_60 = 0;
    local_68 = *(longlong *)(unaff_RDI + 0x78);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    local_88 = 0;
    local_80 = '\0';
    FUN_01f2a980(&local_98,&local_68,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xc) == 1) {
        FUN_00d23310();
        lVar2 = local_38;
        pcVar3 = local_30;
        if (local_30[0] == '\0') {
          pcVar3 = &local_78;
        }
        local_78 = local_30[0];
        *pcVar3 = '\0';
        if ((local_30[0] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = *(longlong *)(unaff_RDI + 0x78);
        if (lVar4 == lVar2) {
          if ((local_78 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_78 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
              lVar4 = *(longlong *)(unaff_RDI + 0x78);
            }
          }
          else {
            local_78 = '\0';
          }
          *(longlong *)(unaff_RDI + 0x78) = lVar2;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        plVar1 = *(longlong **)(unaff_RDI + 0x98);
        if (*(longlong **)(unaff_RDI + 0x78) == (longlong *)0x0) {
          FUN_00d8ede0();
          local_48 = local_38;
          local_40 = 0;
          if (local_30[0] == '\0') {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_30[0] = '\0';
          }
          local_40 = '\x01';
          (**(code **)(*plVar1 + 0x968))();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_30[0] != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x470))();
          local_58 = local_38;
          local_50 = 0;
          if (local_30[0] == '\0') {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_30[0] = '\0';
          }
          local_50 = '\x01';
          (**(code **)(*plVar1 + 0x968))();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_30[0] != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @01e85f80 — 632 bytes
// str: ""GNLocaleExportController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e85f80(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_026bf360;
  FUN_01e862d0();
  FUN_01e86550();
  FUN_01e867d0();
  FUN_01e86a50();
  FUN_01e86d40();
  FUN_01e87030();
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  if (DAT_027f8150 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f80a0 = FUN_00015ff0();
      _DAT_027f8088 = "GNLocaleExportController";
      _DAT_027f8090 = 0xa8;
      _DAT_027f8098 = FUN_01e85f20;
      _DAT_027f80a8 = 0;
      uRam00000000027f80b0 = 0;
      _DAT_027f80b8 = 0;
      uRam00000000027f80c0 = 0;
      _DAT_027f80c8 = 0;
      uRam00000000027f80d0 = 0;
      _DAT_027f80d8 = 0;
      uRam00000000027f80e0 = 0;
      _DAT_027f80e8 = 0;
      uRam00000000027f80f0 = 0;
      _DAT_027f80f8 = 0;
      uRam00000000027f8100 = 0;
      _DAT_027f8108 = 0;
      uRam00000000027f8110 = 0;
      _DAT_027f8118 = 0;
      uRam00000000027f8120 = 0;
      _DAT_027f8128 = 0;
      uRam00000000027f8130 = 0;
      _DAT_027f8138 = 0;
      _uRam00000000027f8140 = 0;
      _DAT_027f8148 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f8143 == '\0') {
    FUN_01e87320();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa1) = 0;
  if (DAT_027f8150 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f80a0 = FUN_00015ff0();
      _DAT_027f8088 = "GNLocaleExportController";
      _DAT_027f8090 = 0xa8;
      _DAT_027f8098 = FUN_01e85f20;
      _DAT_027f80a8 = 0;
      uRam00000000027f80b0 = 0;
      _DAT_027f80b8 = 0;
      uRam00000000027f80c0 = 0;
      _DAT_027f80c8 = 0;
      uRam00000000027f80d0 = 0;
      _DAT_027f80d8 = 0;
      uRam00000000027f80e0 = 0;
      _DAT_027f80e8 = 0;
      uRam00000000027f80f0 = 0;
      _DAT_027f80f8 = 0;
      uRam00000000027f8100 = 0;
      _DAT_027f8108 = 0;
      uRam00000000027f8110 = 0;
      _DAT_027f8118 = 0;
      uRam00000000027f8120 = 0;
      _DAT_027f8128 = 0;
      uRam00000000027f8130 = 0;
      _DAT_027f8138 = 0;
      _uRam00000000027f8140 = 0;
      _DAT_027f8148 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f8143 == '\0') {
    FUN_01e87490();
    FUN_00e87980();
  }
  return;
}



