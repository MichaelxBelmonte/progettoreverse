// Reconstructed implementation of MDPluginWindowResizeView
// From MikeCore binary — reverse-engineered pseudocode

#include "MDPluginWindowResizeView.h"

// ============================================================
// @006306b0 — 1539 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006306b0(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  ulonglong local_60;
  ulonglong local_58;
  char local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar1 = DAT_02572370;
  local_48 = puVar6;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar1)();
  uVar8 = DAT_026e1800;
  if (DAT_026e1800 != 0) {
    FUN_00d50b00();
  }
  local_60 = uVar8;
  FUN_00e7d6f0();
  uVar9 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_58 = uVar8;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    uVar5 = FUN_00c70bc0();
    uVar8 = (ulonglong)uVar5;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027259d0;
  if (((lVar3 != 0 & (byte)uVar8) == 0) || (*(longlong *)(unaff_RDI + 0x80) != 0)) {
    if (DAT_027259d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar8 = DAT_02708e90;
  if (DAT_02708e90 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar10 * DAT_023907c0);
  dVar10 = dVar10 * DAT_023907c0 - _DAT_023907c8;
  uVar9 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  bVar4 = (byte)(((longlong)dVar10 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = uVar8;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar9 = FUN_00d50b20();
  if (uVar8 != 0) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = DAT_026fba80;
  if ((lVar3 != 0 & bVar4) != 0) {
    if (DAT_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026fba80;
    if (DAT_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027259d0;
    if (DAT_027259d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar3 = DAT_026fce40;
  if ((*(longlong *)(unaff_RDI + 0x80) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x308) != 0)) {
    if (DAT_026fce40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026fce40;
    if (DAT_026fce40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
    local_a0 = local_48;
    local_98 = '\0';
    uVar9 = FUN_0009ea90(uVar9,&local_a0);
    if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_88 = '\0';
    local_90 = puVar6;
    uVar9 = FUN_0009ea90(uVar9,&local_90);
    if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 200) != 0) {
    local_80 = local_48;
    local_78 = '\0';
    uVar9 = FUN_0009ea90(uVar9,&local_80);
    if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_68 = '\0';
    local_70 = puVar6;
    FUN_0009ea90(uVar9,&local_70);
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ============================================================
// @006311f0 — 890 bytes
// str: ""MDPluginWindowResizeView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006312a1) */
/* WARNING: Removing unreachable block (ram,0x0063153b) */
/* WARNING: Removing unreachable block (ram,0x00631544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006311f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong **pplVar8;
  int iVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_XMM1_Dc;
  undefined4 uVar14;
  undefined4 in_XMM1_Dd;
  undefined4 uVar15;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x4a0))();
  plVar7 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00631265;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_00631265:
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar7;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_40;
      iVar9 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar9);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
      plVar7 = *(longlong **)(local_48[2] + 8 + lVar6 * 8);
      local_58 = plVar7;
      if ((DAT_0271d930 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_02726368 = FUN_0006d940();
        _DAT_02726350 = "MDPluginWindowResizeView";
        _DAT_02726358 = 0x140;
        _DAT_02726360 = FUN_0043f230;
        _DAT_02726370 = 0;
        uRam0000000002726378 = 0;
        _DAT_02726380 = 0;
        _DAT_027263f8 = 0;
        uRam0000000002726400 = 0;
        _DAT_02726408 = 0;
        DAT_0272640a = 1;
        _DAT_02726388 = 0;
        uRam0000000002726390 = 0;
        _DAT_02726398 = 0;
        uRam00000000027263a0 = 0;
        _DAT_027263a8 = 0;
        uRam00000000027263b0 = 0;
        _DAT_027263b8 = 0;
        uRam00000000027263c0 = 0;
        _DAT_027263c8 = 0;
        uRam00000000027263d0 = 0;
        _DAT_027263d8 = 0;
        uRam00000000027263e0 = 0;
        _DAT_027263e8 = 0;
        uRam00000000027263f0 = 0;
        DAT_02726413 = 0;
        _DAT_0272640b = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 != (longlong *)0x0) {
        if (*(char *)(pplVar8 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
        }
        bVar4 = true;
        goto LAB_0063142b;
      }
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar9 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar9 = 0;
        }
        local_40 = CONCAT44(iVar9,(int)local_40);
      }
    }
    bVar4 = false;
    plVar7 = (longlong *)0x0;
LAB_0063142b:
    FUN_000a9680();
    FUN_00d50b20();
    if (plVar7 != (longlong *)0x0) {
      if (*(char *)(unaff_RDI + 0x108) != '\0') {
        (**(code **)(*plVar7 + 0x478))();
      }
      goto LAB_00631549;
    }
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar7 = (longlong)&DAT_024f39b0;
  plVar7[2] = (longlong)&DAT_024f42d8;
  *(undefined2 *)(plVar7 + 0x27) = 0;
  *(undefined1 *)((longlong)plVar7 + 0x13a) = 0;
  (*DAT_024f39c8)();
  FUN_0043f070();
  (**(code **)(*plVar1 + 0x4d8))();
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar14 = in_XMM1_Dc;
  uVar15 = in_XMM1_Dd;
  (**(code **)(*plVar1 + 0x4d8))();
  auVar3._4_4_ = uVar12;
  auVar3._0_4_ = uVar10;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar2._4_4_ = uVar13;
  auVar2._0_4_ = uVar11;
  auVar2._8_4_ = uVar14;
  auVar2._12_4_ = uVar15;
  blendps(auVar3,auVar2,2);
  (**(code **)(*plVar7 + 0x4d0))();
  (**(code **)(*plVar7 + 0x558))();
  FUN_0043f090();
  (**(code **)(*plVar1 + 0x450))();
  bVar4 = true;
LAB_00631549:
  if (bVar4) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @005de2a0 — 788 bytes
// str: ""MDPluginWindowResizeView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005de2a0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_024f39b0;
  unaff_RDI[2] = &DAT_024f42d8;
  *(undefined1 *)(unaff_RDI + 0x27) = 0;
  if (DAT_0271d930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02726368 = FUN_0006d940();
      _DAT_02726350 = "MDPluginWindowResizeView";
      _DAT_02726358 = 0x140;
      _DAT_02726360 = FUN_0043f230;
      _DAT_02726370 = 0;
      uRam0000000002726378 = 0;
      _DAT_02726380 = 0;
      _DAT_027263f8 = 0;
      uRam0000000002726400 = 0;
      _DAT_02726408 = 0;
      DAT_0272640a = 1;
      _DAT_02726388 = 0;
      uRam0000000002726390 = 0;
      _DAT_02726398 = 0;
      uRam00000000027263a0 = 0;
      _DAT_027263a8 = 0;
      uRam00000000027263b0 = 0;
      _DAT_027263b8 = 0;
      uRam00000000027263c0 = 0;
      _DAT_027263c8 = 0;
      uRam00000000027263d0 = 0;
      _DAT_027263d8 = 0;
      uRam00000000027263e0 = 0;
      _DAT_027263e8 = 0;
      uRam00000000027263f0 = 0;
      DAT_02726413 = 0;
      _DAT_0272640b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272640b == '\0') {
    FUN_005de5e0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x139) = 0;
  if (DAT_0271d930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02726368 = FUN_0006d940();
      _DAT_02726350 = "MDPluginWindowResizeView";
      _DAT_02726358 = 0x140;
      _DAT_02726360 = FUN_0043f230;
      _DAT_02726370 = 0;
      uRam0000000002726378 = 0;
      _DAT_02726380 = 0;
      _DAT_027263f8 = 0;
      uRam0000000002726400 = 0;
      _DAT_02726408 = 0;
      DAT_0272640a = 1;
      _DAT_02726388 = 0;
      uRam0000000002726390 = 0;
      _DAT_02726398 = 0;
      uRam00000000027263a0 = 0;
      _DAT_027263a8 = 0;
      uRam00000000027263b0 = 0;
      _DAT_027263b8 = 0;
      uRam00000000027263c0 = 0;
      _DAT_027263c8 = 0;
      uRam00000000027263d0 = 0;
      _DAT_027263d8 = 0;
      uRam00000000027263e0 = 0;
      _DAT_027263e8 = 0;
      uRam00000000027263f0 = 0;
      DAT_02726413 = 0;
      _DAT_0272640b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272640b == '\0') {
    FUN_005de770();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x13a) = 0;
  if (DAT_0271d930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02726368 = FUN_0006d940();
      _DAT_02726350 = "MDPluginWindowResizeView";
      _DAT_02726358 = 0x140;
      _DAT_02726360 = FUN_0043f230;
      _DAT_02726370 = 0;
      uRam0000000002726378 = 0;
      _DAT_02726380 = 0;
      _DAT_027263f8 = 0;
      uRam0000000002726400 = 0;
      _DAT_02726408 = 0;
      DAT_0272640a = 1;
      _DAT_02726388 = 0;
      uRam0000000002726390 = 0;
      _DAT_02726398 = 0;
      uRam00000000027263a0 = 0;
      _DAT_027263a8 = 0;
      uRam00000000027263b0 = 0;
      _DAT_027263b8 = 0;
      uRam00000000027263c0 = 0;
      _DAT_027263c8 = 0;
      uRam00000000027263d0 = 0;
      _DAT_027263d8 = 0;
      uRam00000000027263e0 = 0;
      _DAT_027263e8 = 0;
      uRam00000000027263f0 = 0;
      DAT_02726413 = 0;
      _DAT_0272640b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272640b == '\0') {
    FUN_005de900();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00631870 — 502 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006318da) */
/* WARNING: Removing unreachable block (ram,0x006318e3) */

void FUN_00631870(void)

{
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01e56750();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_006f3f00();
    if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01e56750();
    (**(code **)(*local_38 + 0x478))();
    FUN_01e5f970();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_007585f0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01e5a050();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    (**(code **)(*local_38 + 0x468))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01e5f4b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



