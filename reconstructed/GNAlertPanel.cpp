// Reconstructed implementation of GNAlertPanel
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAlertPanel.h"

// ============================================================
// @01f6ca30 — 1500 bytes
// str: ""GNAlertPanel""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f6cb08) */
/* WARNING: Removing unreachable block (ram,0x01f6cb14) */
/* WARNING: Removing unreachable block (ram,0x01f6cb22) */
/* WARNING: Removing unreachable block (ram,0x01f6cb2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01f6ca30(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong lVar10;
  longlong *unaff_RDI;
  bool bVar11;
  longlong **pplVar12;
  undefined4 uVar13;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_48 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_02572358;
  uVar13 = (*DAT_02572370)();
  plVar6 = local_48;
  local_a0 = '\0';
  local_a8 = plVar7;
  uVar13 = FUN_01e2af10(uVar13,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (*param_2 == 0) {
    bVar11 = false;
LAB_01f6cc20:
    FUN_00ca1380();
    plVar8 = local_70;
    pcVar9 = local_38;
    if (local_68[0] != '\0') {
      pcVar9 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01f6cc8a;
      }
      local_40 = (longlong *)0x0;
      bVar2 = true;
    }
    else if (local_70 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      bVar2 = true;
    }
    else {
LAB_01f6cc8a:
      local_68[0] = '\0';
      local_70 = (longlong *)0x0;
      local_40 = plVar8;
      local_60 = plVar8;
      local_58 = -1;
      iStack_54 = 0;
      iStack_50 = 0;
      while( true ) {
        lVar10 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)((longlong)local_60 + 0xc) <= local_58) break;
        plVar6 = *(longlong **)(local_60[2] + 8 + lVar10 * 8);
        local_70 = plVar6;
        if ((DAT_026e8030 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_026e7f80 = FUN_00015ff0();
          _DAT_026e7f68 = "GNAlertPanel";
          _DAT_026e7f70 = 0xa0;
          _DAT_026e7f78 = FUN_001aaa10;
          _DAT_026e7f88 = 0;
          uRam00000000026e7f90 = 0;
          _DAT_026e7f98 = 0;
          uRam00000000026e7fa0 = 0;
          _DAT_026e7fa8 = 0;
          uRam00000000026e7fb0 = 0;
          _DAT_026e7fb8 = 0;
          uRam00000000026e7fc0 = 0;
          _DAT_026e7fc8 = 0;
          uRam00000000026e7fd0 = 0;
          _DAT_026e7fd8 = 0;
          uRam00000000026e7fe0 = 0;
          _DAT_026e7fe8 = 0;
          uRam00000000026e7ff0 = 0;
          _DAT_026e7ff8 = 0;
          uRam00000000026e8000 = 0;
          _DAT_026e8008 = 0;
          uRam00000000026e8010 = 0;
          _DAT_026e8018 = 0;
          uRam00000000026e8020 = 0;
          _DAT_026e8028 = 0;
          ___cxa_guard_release();
        }
        pplVar12 = &DAT_02802688;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar12 = &local_70;
          if (cVar4 == '\0') {
            pplVar12 = &DAT_02802688;
          }
        }
        plVar6 = local_48;
        plVar8 = *pplVar12;
        if (plVar8 != (longlong *)0x0) {
          if (*(char *)(pplVar12 + 1) == '\0') {
            FUN_00d50b00();
            bVar11 = true;
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
            bVar11 = true;
            plVar6 = local_48;
          }
          goto LAB_01f6ce4a;
        }
        if (iStack_54 != 0) {
          if (iStack_54 < 1) {
            iStack_54 = -iStack_54;
          }
          else {
            local_58 = local_58 - iStack_54;
            FUN_00d23690();
            iStack_50 = iStack_50 + iStack_54;
            iStack_54 = 0;
          }
        }
      }
      plVar8 = (longlong *)0x0;
      plVar6 = local_48;
LAB_01f6ce4a:
      FUN_00083b20();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) goto LAB_01f6ce6a;
      bVar1 = true;
      local_40 = (longlong *)0x0;
      bVar2 = true;
      if (plVar7 == (longlong *)0x0) goto LAB_01f6cf0a;
    }
LAB_01f6cea1:
    bVar1 = bVar2;
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    iStack_54 = 0;
    iStack_50 = 0;
    local_60 = plVar7;
    for (lVar10 = 0; local_58 = (int)lVar10, local_58 < *(int *)((longlong)plVar7 + 0xc);
        lVar10 = lVar10 + 1) {
      local_70 = *(longlong **)(plVar7[2] + lVar10 * 8);
      FUN_00d50130();
    }
    FUN_00083b20();
    bVar2 = false;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    bVar3 = false;
    if (bVar11) goto LAB_01f6cf27;
  }
  else {
    local_90 = '\0';
    pplVar12 = &local_70;
    local_98 = *param_2;
    FUN_000175c0(uVar13,&local_98);
    plVar8 = local_70;
    if ((DAT_026e8030 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026e7f80 = FUN_00015ff0();
      _DAT_026e7f68 = "GNAlertPanel";
      _DAT_026e7f70 = 0xa0;
      _DAT_026e7f78 = FUN_001aaa10;
      _DAT_026e7f88 = 0;
      uRam00000000026e7f90 = 0;
      _DAT_026e7f98 = 0;
      uRam00000000026e7fa0 = 0;
      _DAT_026e7fa8 = 0;
      uRam00000000026e7fb0 = 0;
      _DAT_026e7fb8 = 0;
      uRam00000000026e7fc0 = 0;
      _DAT_026e7fc8 = 0;
      uRam00000000026e7fd0 = 0;
      _DAT_026e7fd8 = 0;
      uRam00000000026e7fe0 = 0;
      _DAT_026e7fe8 = 0;
      uRam00000000026e7ff0 = 0;
      _DAT_026e7ff8 = 0;
      uRam00000000026e8000 = 0;
      _DAT_026e8008 = 0;
      uRam00000000026e8010 = 0;
      _DAT_026e8018 = 0;
      uRam00000000026e8020 = 0;
      _DAT_026e8028 = 0;
      ___cxa_guard_release();
    }
    plVar6 = local_48;
    if (plVar8 == (longlong *)0x0) {
      pplVar12 = &DAT_02802688;
      plVar8 = DAT_02802688;
      if (DAT_02802688 == (longlong *)0x0) goto LAB_01f6cbd1;
LAB_01f6cba8:
      if (*(char *)(pplVar12 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      bVar11 = true;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') {
        pplVar12 = &DAT_02802688;
      }
      plVar8 = *pplVar12;
      if (*pplVar12 != (longlong *)0x0) goto LAB_01f6cba8;
LAB_01f6cbd1:
      bVar11 = false;
      plVar8 = (longlong *)0x0;
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_01f6cc20;
LAB_01f6ce6a:
    local_80 = '\0';
    local_88 = plVar8;
    local_40 = plVar8;
    FUN_00d23d90();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = bVar1;
    if (plVar7 != (longlong *)0x0) goto LAB_01f6cea1;
LAB_01f6cf0a:
    bVar2 = true;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    bVar3 = true;
    if (bVar11) goto LAB_01f6cf27;
  }
  bVar2 = bVar3;
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_01f6cf27:
  *unaff_RDI = (longlong)local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01f6d220 — 1464 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f6d6bd) */
/* WARNING: Removing unreachable block (ram,0x01f6d6c9) */
/* WARNING: Removing unreachable block (ram,0x01f6d65b) */
/* WARNING: Removing unreachable block (ram,0x01f6d667) */
/* WARNING: Removing unreachable block (ram,0x01f6d5ff) */
/* WARNING: Removing unreachable block (ram,0x01f6d60b) */
/* WARNING: Removing unreachable block (ram,0x01f6d71f) */
/* WARNING: Removing unreachable block (ram,0x01f6d72b) */
/* WARNING: Removing unreachable block (ram,0x01f6d781) */
/* WARNING: Removing unreachable block (ram,0x01f6d78d) */
/* WARNING: Removing unreachable block (ram,0x01f6d705) */
/* WARNING: Removing unreachable block (ram,0x01f6d711) */
/* WARNING: Removing unreachable block (ram,0x01f6d641) */
/* WARNING: Removing unreachable block (ram,0x01f6d64d) */
/* WARNING: Removing unreachable block (ram,0x01f6d6a3) */
/* WARNING: Removing unreachable block (ram,0x01f6d6af) */
/* WARNING: Removing unreachable block (ram,0x01f6d767) */
/* WARNING: Removing unreachable block (ram,0x01f6d773) */

undefined4 FUN_01f6d220(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_178;
  char local_170;
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
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*unaff_RSI == 0) {
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar8 + 0x18))();
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar1 == plVar8) {
      if ((char)unaff_RSI[1] != '\0') {
        FUN_00d50b20();
        goto LAB_01f6d292;
      }
    }
    else {
      *unaff_RSI = (longlong)plVar8;
      if (((char)unaff_RSI[1] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_01f6d292:
  FUN_01f27fe0();
  lVar2 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  if (local_110 == '\0') {
    if (local_118 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(longlong *)(unaff_RDI + 0x80);
  }
  else {
    lVar3 = *(longlong *)(unaff_RDI + 0x80);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_60 = 0;
  if (local_100 == '\0') {
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x88);
  }
  else {
    lVar4 = *(longlong *)(unaff_RDI + 0x88);
  }
  local_60 = '\x01';
  local_68 = local_108;
  if (lVar4 != 0) {
    local_60 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_50 = 0;
  if (local_f0 == '\0') {
    if (local_f8 != 0) {
      FUN_00d50b00();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x90);
  }
  else {
    lVar5 = *(longlong *)(unaff_RDI + 0x90);
  }
  local_50 = '\x01';
  local_58 = local_f8;
  if (lVar5 != 0) {
    local_50 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_40 = 0;
  if (local_e0 == '\0') {
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    lVar6 = *(longlong *)(unaff_RDI + 0x98);
  }
  else {
    lVar6 = *(longlong *)(unaff_RDI + 0x98);
  }
  local_40 = '\x01';
  local_48 = local_e8;
  if (lVar6 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_30 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_30 = '\x01';
  local_38 = local_d8;
  uVar7 = FUN_01f316e0(&local_58,&local_68,&local_48,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_118 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  return uVar7;
}




// ============================================================
// @01f6e450 — 1162 bytes
// ============================================================

void FUN_01f6e450(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)(unaff_RDI + 0x70);
  local_a8 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  local_120 = DAT_027feca0;
  local_a8 = '\x01';
  local_b0 = plVar1;
  if (DAT_027feca0 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  local_98 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_a0 = lVar2;
  FUN_00e3fb50(&local_a0,&local_120);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_110 = DAT_02800b50;
  local_88 = '\x01';
  local_90 = plVar1;
  if (DAT_02800b50 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_78 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x80);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar2;
  FUN_00e3fb50(&local_80,&local_110);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_100 = DAT_02800b58;
  local_68 = '\x01';
  local_70 = plVar1;
  if (DAT_02800b58 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_58 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar2;
  FUN_00e3fb50(&local_60,&local_100);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    iVar3 = FUN_00d8c7a0();
    if (iVar3 != 0) {
      local_48 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_f0 = DAT_02800b60;
      local_48 = '\x01';
      local_50 = plVar1;
      if (DAT_02800b60 != 0) {
        FUN_00d50b00();
      }
      local_e8 = '\x01';
      local_38 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x90);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar2;
      FUN_00e3fb50(&local_40,&local_f0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    iVar3 = FUN_00d8c7a0();
    if (iVar3 != 0) {
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_d0 = DAT_02800b68;
      local_d8 = '\x01';
      local_e0 = plVar1;
      if (DAT_02800b68 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      local_b8 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x98);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      local_c0 = lVar2;
      FUN_00e3fb50(&local_c0,&local_d0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        (**(code **)(*local_e0 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01f6ddb0 — 963 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f6e019) */
/* WARNING: Removing unreachable block (ram,0x01f6e025) */

int FUN_01f6ddb0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    bVar8 = true;
    local_58 = 0;
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    FUN_00e97870();
    local_78 = local_50;
    local_70 = 0;
    lVar2 = DAT_02800b40;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        lVar2 = DAT_02800b40;
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    DAT_02800b40 = lVar2;
    if (lVar2 != 0) {
      local_70 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar2;
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e97f20();
    if (unaff_RDI[0x13] == 0) {
      uVar5 = FUN_00e97f30();
      bVar8 = true;
      if (local_40 == 0) {
        uVar5 = FUN_00e978a0();
        bVar8 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          uVar5 = FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar5 = FUN_00d50b20();
      }
      lVar2 = DAT_02800b48;
      if (bVar8) {
        if (DAT_02800b48 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if (unaff_RDI[0x13] != lVar2) {
          FUN_00d64850();
          lVar1 = unaff_RDI[0x13];
          if (lVar1 != lVar2) {
            local_58 = lVar1;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            unaff_RDI[0x13] = lVar2;
            if (local_58 != 0) {
              FUN_00d50b20();
            }
          }
          uVar5 = FUN_00d64910();
        }
        if (lVar2 == 0) {
          uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
        }
        else {
          uVar5 = FUN_00d50b20();
          uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
        }
        local_58 = CONCAT71(uVar6,1);
        bVar8 = false;
        bVar7 = 1;
        goto LAB_01f6dfeb;
      }
    }
    else {
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
    }
    local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    bVar8 = false;
  }
  bVar7 = 0;
LAB_01f6dfeb:
  iVar3 = (**(code **)(*unaff_RDI + 0x5d8))();
  if ((bool)(bVar7 & iVar3 == 2)) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    FUN_00e978d0();
    local_68 = local_50;
    local_60 = 0;
    local_88 = DAT_026fceb8;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_88 = DAT_026fceb8;
      }
    }
    else {
      local_48 = '\0';
    }
    local_60 = '\x01';
    DAT_026fceb8 = local_88;
    if (local_88 != 0) {
      local_60 = '\x01';
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_01ca93d0(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar8 && plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return iVar3;
}



