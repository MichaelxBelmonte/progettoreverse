// Reconstructed implementation of GNCoord
// From MikeCore binary — reverse-engineered pseudocode

#include "GNCoord.h"

// ============================================================
// @01c2dc30 — 2195 bytes
// ============================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_01c2dc30(void)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  longlong local_200;
  char local_1f8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1c0;
  char local_1b8;
  longlong local_190;
  char local_188;
  longlong local_170;
  char local_168;
  longlong local_150;
  char local_148;
  longlong local_120;
  char local_118;
  longlong local_100;
  char local_f8;
  longlong local_e0;
  char local_d8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  FUN_01c10f60();
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_01c2f350();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  *(longlong **)(unaff_RDI + 0x20) = plVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb030;
  if (DAT_027eb030 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  lVar4 = local_50;
  if (local_50 == 0) {
    bVar2 = 1;
    bVar6 = 0;
    bVar7 = 0;
    bVar3 = false;
    bVar8 = false;
    lVar4 = 0;
  }
  else if (local_48 == '\0') {
    FUN_00d50b00();
    bVar6 = 1;
    bVar7 = 1;
    bVar2 = 0;
    bVar3 = true;
    bVar8 = true;
  }
  else {
    bVar2 = 0;
    bVar6 = 1;
    bVar7 = 1;
    bVar3 = true;
    bVar8 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    bVar7 = bVar6;
    bVar8 = bVar3;
  }
  lVar1 = DAT_027eb038;
  if (DAT_027eb038 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb040;
  if (DAT_027eb040 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb048;
  if (DAT_027eb048 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb050;
  if (DAT_027eb050 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bool)(bVar2 & local_50 != 0)) {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if ((bool)(bVar7 & lVar4 != 0)) {
      FUN_00d50b20();
      bVar8 = true;
      lVar4 = local_50;
    }
    else {
      bVar8 = true;
      lVar4 = local_50;
    }
  }
  else if ((bool)(bVar7 & lVar4 != 0)) {
    FUN_00d50b20();
    bVar8 = true;
    lVar4 = local_50;
  }
  else {
    bVar8 = true;
    lVar4 = local_50;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb058;
  if (DAT_027eb058 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb060;
  if (DAT_027eb060 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb068;
  if (DAT_027eb068 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb070;
  if (DAT_027eb070 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bVar8) || (local_50 == 0)) {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if ((!bVar8) || (lVar4 == 0)) goto LAB_01c2e100;
    FUN_00d50b20();
    lVar4 = local_50;
    bVar8 = true;
  }
  else if ((bVar8) && (lVar4 != 0)) {
    FUN_00d50b20();
    lVar4 = local_50;
    bVar8 = true;
  }
  else {
LAB_01c2e100:
    lVar4 = local_50;
    bVar8 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb078;
  if (DAT_027eb078 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb070;
  if (DAT_027eb070 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb080;
  if (DAT_027eb080 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb088;
  if (DAT_027eb088 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bVar8) || (local_50 == 0)) {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      if ((bVar8) && (lVar4 != 0)) {
        FUN_00d50b20();
        lVar4 = local_50;
        bVar8 = true;
        goto joined_r0x01c2e4a6;
      }
    }
    else if ((bVar8) && (lVar4 != 0)) {
      FUN_00d50b20();
      lVar4 = local_50;
      bVar8 = true;
      goto joined_r0x01c2e4a6;
    }
    bVar8 = true;
    lVar4 = local_50;
  }
joined_r0x01c2e4a6:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb090;
  if (DAT_027eb090 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb088;
  if (DAT_027eb088 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eb098;
  if (DAT_027eb098 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar8) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c2b230 — 1300 bytes
// str: ""float""
// str: ""GNCoord""
// str: ""_tempo""
// str: ""GNInt""
// str: ""MULoop""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2b230(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01c27c60();
  *unaff_RDI = &DAT_02663ef8;
  FUN_01c2ba00();
  unaff_RDI[6] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bae0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_01c2bbd0();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bcb0();
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2be20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  FUN_01c2bf10();
  FUN_01c2bff0();
  FUN_01c2c0d0();
  FUN_01c2c1b0();
  FUN_01c2c290();
  FUN_01c2c370();
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ea850 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ea818 = FUN_01c2b000();
        _DAT_027ea810 = "_loopSetOrderIndex";
        _DAT_027ea820 = 0;
        _DAT_027ea828 = 0x6901;
        _DAT_027ea830 = "GNInt";
        _DAT_027ea838 = 0;
        uRam00000000027ea840 = 0;
        _DAT_027ea848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01c2c450();
  FUN_01c2c530();
  FUN_01c2c610();
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ea970 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ea938 = FUN_01c2b000();
        _DAT_027ea930 = "_tempo";
        _DAT_027ea940 = 0;
        _DAT_027ea948 = 0x6601;
        _DAT_027ea950 = "float";
        _DAT_027ea958 = 0;
        uRam00000000027ea960 = 0;
        _DAT_027ea968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2c6f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eaa00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ea9c8 = FUN_01c2b000();
        _DAT_027ea9c0 = "_minWidthToDisplayLoopId";
        _DAT_027ea9d0 = 0;
        _DAT_027ea9d8 = 0x6600;
        _DAT_027ea9e0 = "GNCoord";
        _DAT_027ea9e8 = 0;
        uRam00000000027ea9f0 = 0;
        _DAT_027ea9f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eaa48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eaa10 = FUN_01c2b000();
        _DAT_027eaa08 = "_matchGrade";
        _DAT_027eaa18 = 0;
        _DAT_027eaa20 = 0x6600;
        _DAT_027eaa28 = "float";
        _DAT_027eaa30 = 0;
        uRam00000000027eaa38 = 0;
        _DAT_027eaa40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01c32d30 — 1055 bytes
// ============================================================

void FUN_01c32d30(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = DAT_027ebc70;
  if (DAT_027ebc70 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_40;
    local_b0 = DAT_027eb298;
    if (DAT_027eb298 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar1 = local_40;
      local_a0 = DAT_027eb2a0;
      if (DAT_027eb2a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_01c33108;
    }
    (**(code **)(*unaff_RDI + 0x620))();
    goto LAB_01c33108;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_01c388c0();
  if (plVar1 == (longlong *)0x0) {
LAB_01c32dfc:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01c32dfc;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar1[0xd];
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    lVar3 = plVar1[0xc];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_38 = '\0';
    local_70 = lVar3;
    local_40 = plVar2;
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027ebc70;
    if (DAT_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar3;
    local_b8 = '\x01';
    FUN_00d3ecf0();
    local_50 = local_80;
    local_48 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_48 = '\x01';
    FUN_00d41040(&local_50,&local_c0);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x620))();
    FUN_00d50b20();
  }
LAB_01c33108:
  local_90 = *unaff_RSI;
  local_88 = '\0';
  FUN_00d530a0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c2e8c0 — 939 bytes
// ============================================================

void FUN_01c2e8c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RSI + 0x20);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_01c2f170();
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      param_2 = &DAT_02802688;
    }
    plVar1 = (longlong *)*param_2;
    cVar4 = (char)param_2[1];
    if ((cVar4 == '\0') || (plVar1 == (longlong *)0x0)) {
      if (plVar1 == (longlong *)0x0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        return;
      }
    }
    else {
      FUN_00d50b00();
    }
    lVar2 = plVar1[6];
    if (*(int *)(lVar2 + 0xc) == 0) {
      plVar5 = (longlong *)FUN_01c2a780();
      (**(code **)(*plVar5 + 0x18))();
      local_60 = plVar5;
      FUN_01c110f0();
      local_90 = local_48;
      local_88 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_88 = '\x01';
      FUN_01c1a300();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027d3810;
      if (DAT_027d3810 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0277cbb0;
      if (DAT_0277cbb0 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar3;
      local_a8 = '\x01';
      (**(code **)(*plVar1 + 0x368))();
      local_70 = local_58;
      local_68 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_68 = '\x01';
      FUN_00d14780(&local_70,&local_b0);
      local_80 = local_48;
      local_78 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_78 = '\x01';
      FUN_01c1a370();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01c110c0();
      FUN_00d23310();
      pcVar6 = local_38;
      if (local_40[0] != '\0') {
        pcVar6 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = local_60;
      local_98 = '\0';
      (**(code **)(*local_48 + 0x368))();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      FUN_00d50b00();
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01c31df0 — 927 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c31eb2) */
/* WARNING: Removing unreachable block (ram,0x01c31ebb) */
/* WARNING: Removing unreachable block (ram,0x01c32033) */
/* WARNING: Removing unreachable block (ram,0x01c32040) */

void FUN_01c31df0(void)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  if (*(float *)(unaff_RDI + 0x74) <= 0.0) {
    *(undefined4 *)(unaff_RDI + 0x74) = 0x3f800000;
  }
  if (*(float *)(unaff_RDI + 0x70) <= 0.0) {
    *(undefined4 *)(unaff_RDI + 0x70) = 0x3f800000;
  }
  FUN_01d4e800(*(undefined8 *)(unaff_RDI + 0x70));
  plVar1 = *(longlong **)(unaff_RDI + 0x68);
  plVar5 = plVar1;
  if (plVar1 == local_40) goto LAB_01c31e9c;
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_01c31e5a;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x68);
    *(longlong **)(unaff_RDI + 0x68) = local_40;
  }
  else {
    local_38 = '\0';
LAB_01c31e5a:
    *(longlong **)(unaff_RDI + 0x68) = plVar5;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar5 = local_40;
  }
LAB_01c31e9c:
  if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x60);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00b810f0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    uVar2 = FUN_00e7d780(*(undefined4 *)(unaff_RDI + 0x70));
    lVar4 = FUN_00e83020();
    dVar8 = (double)FUN_00b7a6e0();
    uVar3 = FUN_00e7d850(dVar8 * DAT_0241c3f0);
    if ((int)uVar3 < (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_00b86d20(DAT_0241c3f0,0,uVar2);
    FUN_01d52740();
    FUN_01d480c0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01d48b40(DAT_02390124);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01cfc6a0(DAT_0239011c);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_01d488d0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar2) {
      fVar9 = *(float *)(unaff_RDI + 0x74) * DAT_0239011c;
      fVar7 = DAT_0239011c * fVar9;
      uVar6 = 0;
      do {
        FUN_01d52740();
        fVar10 = *(float *)(lVar4 + uVar6 * 4) * fVar7;
        (**(code **)(*local_40 + 0x3e0))
                  ((float)(int)uVar6,fVar9 + fVar10,(float)(int)uVar6,fVar9 - fVar10);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    FUN_01d52740();
    FUN_01d481c0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e83070();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c30540 — 841 bytes
// ============================================================

void FUN_01c30540(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (longlong *)(unaff_RDI + 0xb8);
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e1b98;
    if (DAT_027e1b98 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    pVar3 = 0x20;
    FUN_00e8b850(0x20,&local_70);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar4 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e3ba0;
    if (DAT_027e3ba0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e8b850(0x20,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c30b20 — 831 bytes
// ============================================================

void FUN_01c30b20(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar3;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar3 = (longlong *)(unaff_RDI + 0xb8);
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e1b98;
    if (DAT_027e1b98 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e3ba0;
    if (DAT_027e3ba0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c2cb70 — 754 bytes
// str: ""float""
// str: ""GNCoord""
// str: ""MULoopComponent""
// str: ""MUBrowserLoopItem""
// str: ""_minWidthToDisplayLoopId""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2cb70(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01c27c60();
  *unaff_RDI = &DAT_02656608;
  unaff_RDI[5] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2cf20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBrowserLoopItem");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2d010();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopComponent");
  }
  FUN_01c2d100();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eac38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eac00 = FUN_01c2c970();
        _DAT_027eabf8 = "_minWidthToDisplayLoopId";
        _DAT_027eac08 = 0;
        _DAT_027eac10 = 0x6600;
        _DAT_027eac18 = "GNCoord";
        _DAT_027eac20 = 0;
        uRam00000000027eac28 = 0;
        _DAT_027eac30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eac80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eac48 = FUN_01c2c970();
        _DAT_027eac40 = "_minIconWidth";
        _DAT_027eac50 = 0;
        _DAT_027eac58 = 0x6600;
        _DAT_027eac60 = "GNCoord";
        _DAT_027eac68 = 0;
        uRam00000000027eac70 = 0;
        _DAT_027eac78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eacc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eac90 = FUN_01c2c970();
        _DAT_027eac88 = "_matchGrade";
        _DAT_027eac98 = 0;
        _DAT_027eaca0 = 0x6600;
        _DAT_027eaca8 = "float";
        _DAT_027eacb0 = 0;
        uRam00000000027eacb8 = 0;
        _DAT_027eacc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01c32a00 — 645 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c32c74) */
/* WARNING: Removing unreachable block (ram,0x01c32c7d) */

void FUN_01c32a00(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0xb40))();
  if (((cVar2 != '\0') && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) &&
     (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3abf0();
    uVar7 = FUN_01e466c0();
    uVar8 = (**(code **)(*unaff_RDI + 0xb58))();
    cVar2 = FUN_00d05410(uVar7,uVar8,param_2);
    if (cVar2 != '\0') {
      *(undefined1 *)(unaff_RDI + 0x3d) = 1;
LAB_01c32a90:
      (**(code **)(*unaff_RDI + 0x620))();
      (**(code **)(*unaff_RDI + 0x658))();
      lVar6 = *unaff_RSI;
      if (lVar6 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01c32b3c;
          }
LAB_01c32af2:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_38 = '\0';
        }
        lVar6 = *unaff_RSI;
        uVar7 = uVar8;
      }
      else {
        lVar1 = unaff_RSI[1];
        if (local_38 != '\0') {
          *unaff_RSI = local_40;
          if (((char)lVar1 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01c32af2;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_40;
        if (((char)lVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_01c32b3c:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar6 = *unaff_RSI;
        uVar7 = uVar8;
      }
      if (lVar6 != 0) {
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01c32bbf;
        FUN_01d3abf0();
        uVar9 = FUN_01e466c0();
        uVar8 = (**(code **)(*unaff_RDI + 0xb58))();
        uVar3 = FUN_00d05410(uVar9,uVar8,uVar7);
        *(undefined1 *)(unaff_RDI + 0x3d) = uVar3;
        goto LAB_01c32a90;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01c32bbf:
      *(undefined1 *)(unaff_RDI + 0x3d) = 0;
      (**(code **)(*unaff_RDI + 0x620))();
      if ((*unaff_RSI != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) {
        FUN_01d3abf0();
        uVar8 = FUN_01e466c0();
        uVar9 = (**(code **)(*unaff_RDI + 0xb58))();
        cVar2 = FUN_00d05410(uVar8,uVar9,uVar7);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*unaff_RDI + 0xb18))();
          lVar6 = 0x162;
          if (cVar2 == '\0') {
            bVar4 = (**(code **)(*unaff_RDI + 0xaf0))();
            lVar6 = (ulonglong)bVar4 + 0x161;
          }
          (**(code **)(*unaff_RDI + lVar6 * 8))();
        }
      }
    }
  }
  FUN_01d122b0();
  return;
}




// ============================================================
// @01c312d0 — 573 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c31397) */
/* WARNING: Removing unreachable block (ram,0x01c3139c) */

void FUN_01c312d0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong **pplVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RSI + 0x630))();
  if (local_38 == (longlong *)0x0) {
    bVar6 = true;
  }
  else {
    (**(code **)(*unaff_RSI + 0x630))();
    bVar6 = *(int *)((longlong)local_48 + 0xc) != 1;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) goto LAB_01c3145a;
  (**(code **)(*unaff_RSI + 0x630))();
  FUN_00d23310();
  plVar1 = local_38;
  local_40 = local_30 != '\0';
  local_48 = local_38;
  if ((bool)local_40) {
    local_30 = '\0';
  }
  FUN_0006e1c0();
  if (plVar1 == (longlong *)0x0) {
LAB_01c313cc:
    pplVar3 = &DAT_02802688;
    plVar5 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01c313dc;
LAB_01c313ef:
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c313cc;
    pplVar3 = &local_48;
    plVar5 = local_48;
    if (local_40 == '\0') goto LAB_01c313ef;
LAB_01c313dc:
    *(undefined1 *)(pplVar3 + 1) = 0;
  }
  if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_01c3145a:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c314a9;
    }
  }
  else if (local_38 != (longlong *)0x0) {
LAB_01c314a9:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    FUN_00d50b20();
    goto LAB_01c314f5;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01c314f5:
  FUN_00d50b20();
  return;
}



