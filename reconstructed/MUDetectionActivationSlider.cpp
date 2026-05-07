// Reconstructed implementation of MUDetectionActivationSlider
// From MikeCore binary — reverse-engineered pseudocode

#include "MUDetectionActivationSlider.h"

// ============================================================
// @01b8eb50 — 1993 bytes
// str: ""handleAnalyzeKeys""
// str: ""handleSelectNewScale""
// str: ""handleMoveUp""
// str: ""handleMoveDown""
// str: ""handleSelectUp""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8eb50(void)

{
  int iVar1;
  
  if (DAT_028b5728 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b56f0 = FUN_00271e80();
      _DAT_028b56e8 = "handleAnalyzeKeys";
      _DAT_028b56f8 = 0;
      _DAT_028b5700 = &DAT_027e5210;
      _DAT_028b5708 = FUN_01b9d430;
      _DAT_028b5710 = 0xb19;
      _DAT_028b5718 = 0;
      uRam00000000028b5720 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5770 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5738 = FUN_00271e80();
      _DAT_028b5730 = "handleMoveUp";
      _DAT_028b5740 = 0;
      _DAT_028b5748 = &DAT_027e5210;
      _DAT_028b5750 = FUN_01b9d430;
      _DAT_028b5758 = 0xb21;
      _DAT_028b5760 = 0;
      uRam00000000028b5768 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b57b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5780 = FUN_00271e80();
      _DAT_028b5778 = "handleMoveDown";
      _DAT_028b5788 = 0;
      _DAT_028b5790 = &DAT_027e5210;
      _DAT_028b5798 = FUN_01b9d430;
      _DAT_028b57a0 = 0xb29;
      _DAT_028b57a8 = 0;
      uRam00000000028b57b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5800 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b57c8 = FUN_00271e80();
      _DAT_028b57c0 = "handleSelectNewScale";
      _DAT_028b57d0 = 0;
      _DAT_028b57d8 = &DAT_027e5210;
      _DAT_028b57e0 = FUN_01b9d430;
      _DAT_028b57e8 = 0xb31;
      _DAT_028b57f0 = 0;
      uRam00000000028b57f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5848 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5810 = FUN_00271e80();
      _DAT_028b5808 = "handleSetAlternateMode";
      _DAT_028b5818 = 0;
      _DAT_028b5820 = &DAT_027e5210;
      _DAT_028b5828 = FUN_01b9d430;
      _DAT_028b5830 = 0xb39;
      _DAT_028b5838 = 0;
      uRam00000000028b5840 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5890 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5858 = FUN_00271e80();
      _DAT_028b5850 = "handleToggleAutoanalyzesSplitsAndJoins";
      _DAT_028b5860 = 0;
      _DAT_028b5868 = &DAT_027e5210;
      _DAT_028b5870 = FUN_01b9d430;
      _DAT_028b5878 = 0xb41;
      _DAT_028b5880 = 0;
      uRam00000000028b5888 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b58d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b58a0 = FUN_00271e80();
      _DAT_028b5898 = "handleToggleDetectsChurchModes";
      _DAT_028b58a8 = 0;
      _DAT_028b58b0 = &DAT_027e5210;
      _DAT_028b58b8 = FUN_01b9d430;
      _DAT_028b58c0 = 0xb49;
      _DAT_028b58c8 = 0;
      uRam00000000028b58d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5920 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b58e8 = FUN_00271e80();
      _DAT_028b58e0 = "handleToggleDetectsDetailedModeChanges";
      _DAT_028b58f0 = 0;
      _DAT_028b58f8 = &DAT_027e5210;
      _DAT_028b5900 = FUN_01b9d430;
      _DAT_028b5908 = 0xb51;
      _DAT_028b5910 = 0;
      uRam00000000028b5918 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5968 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5930 = FUN_00271e80();
      _DAT_028b5928 = "handleTogglePreviewsKeys";
      _DAT_028b5938 = 0;
      _DAT_028b5940 = &DAT_027e5210;
      _DAT_028b5948 = FUN_01b9d430;
      _DAT_028b5950 = 0xb59;
      _DAT_028b5958 = 0;
      uRam00000000028b5960 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b59b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5978 = FUN_00271e80();
      _DAT_028b5970 = "handleFindMoreModeChanges";
      _DAT_028b5980 = 0;
      _DAT_028b5988 = &DAT_027e5210;
      _DAT_028b5990 = FUN_01b9d430;
      _DAT_028b5998 = 0xb61;
      _DAT_028b59a0 = 0;
      uRam00000000028b59a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b59f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b59c0 = FUN_00271e80();
      _DAT_028b59b8 = "handleFindLessModeChanges";
      _DAT_028b59c8 = 0;
      _DAT_028b59d0 = &DAT_027e5210;
      _DAT_028b59d8 = FUN_01b9d430;
      _DAT_028b59e0 = 0xb69;
      _DAT_028b59e8 = 0;
      uRam00000000028b59f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5a40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5a08 = FUN_00271e80();
      _DAT_028b5a00 = "handleSelectDown";
      _DAT_028b5a10 = 0;
      _DAT_028b5a18 = &DAT_027e5210;
      _DAT_028b5a20 = FUN_01b9d430;
      _DAT_028b5a28 = FUN_01b9b9f0;
      _DAT_028b5a30 = 0;
      uRam00000000028b5a38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b5a50 = FUN_00271e80();
      _DAT_028b5a48 = "handleSelectUp";
      _DAT_028b5a58 = 0;
      _DAT_028b5a60 = &DAT_027e5210;
      _DAT_028b5a68 = FUN_01b9d430;
      _DAT_028b5a70 = FUN_01b9b9d0;
      _DAT_028b5a78 = 0;
      uRam00000000028b5a80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01b8e0e0 — 1176 bytes
// str: ""MUDetectionActivationSlider""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b8e1a9) */
/* WARNING: Removing unreachable block (ram,0x01b8e1b2) */
/* WARNING: Removing unreachable block (ram,0x01b8e45f) */
/* WARNING: Removing unreachable block (ram,0x01b8e468) */
/* WARNING: Removing unreachable block (ram,0x01b8e430) */
/* WARNING: Removing unreachable block (ram,0x01b8e439) */
/* WARNING: Removing unreachable block (ram,0x01b8e1d6) */
/* WARNING: Removing unreachable block (ram,0x01b8e1df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8e0e0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = FUN_01d3a5a0();
  if ((iVar3 != 1) || (iVar3 = FUN_01d3b630(), iVar3 != 1)) {
    FUN_01daee00();
    return;
  }
  FUN_01d3abf0();
  uVar5 = FUN_01e466c0();
  uVar6 = FUN_01b8e6e0();
  cVar2 = FUN_00d05410(uVar5,uVar6,param_2);
  if ((cVar2 == '\0') || (!NAN(*(float *)(unaff_RDI + 0x3c)))) goto LAB_01b8e164;
  plVar4 = (longlong *)unaff_RDI[6];
  if ((DAT_02732250 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027321a0 = FUN_001b37d0();
    _DAT_02732188 = "MUDetectionActivationSlider";
    _DAT_02732190 = 0x1e8;
    _DAT_02732198 = FUN_008264b0;
    _DAT_027321a8 = 0;
    uRam00000000027321b0 = 0;
    _DAT_027321b8 = 0;
    _DAT_02732230 = 0;
    uRam0000000002732238 = 0;
    _DAT_02732240 = 0;
    DAT_02732242 = 1;
    _DAT_027321c0 = 0;
    uRam00000000027321c8 = 0;
    _DAT_027321d0 = 0;
    uRam00000000027321d8 = 0;
    _DAT_027321e0 = 0;
    uRam00000000027321e8 = 0;
    _DAT_027321f0 = 0;
    uRam00000000027321f8 = 0;
    _DAT_02732200 = 0;
    uRam0000000002732208 = 0;
    _DAT_02732210 = 0;
    uRam0000000002732218 = 0;
    _DAT_02732220 = 0;
    uRam0000000002732228 = 0;
    DAT_0273224b = 0;
    _DAT_02732243 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_01b8e227:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b8e227;
    plVar4 = unaff_RDI + 6;
  }
  if (*plVar4 == 0) {
    uVar5 = (**(code **)(*unaff_RDI + 0x930))();
    *(undefined4 *)(unaff_RDI + 0x3c) = uVar5;
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar4 + 0x27) = 0;
    plVar4[0x2e] = 0;
    *(undefined4 *)(plVar4 + 0x2f) = 0;
    plVar4[0x30] = 0;
    *(undefined1 *)(plVar4 + 0x31) = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(undefined4 *)(plVar4 + 0x2a) = 0;
    plVar4[0x2b] = 0;
    plVar4[0x2c] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x199) = 0;
    plVar4[0x35] = 0;
    plVar4[0x36] = 0;
    plVar4[0x37] = 0;
    plVar4[0x38] = 0;
    plVar4[0x39] = 0;
    plVar4[0x3a] = 0;
    *(undefined1 *)(plVar4 + 0x3b) = 0;
    *plVar4 = (longlong)&DAT_0264fd20;
    plVar4[2] = (longlong)&DAT_02650850;
    *(undefined8 *)((longlong)plVar4 + 0x1dc) = 0;
    FUN_00d500e0();
    FUN_01e3f820();
    (**(code **)(*plVar4 + 0x4d0))();
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0xa20))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027e5020;
    if (DAT_027e5020 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xac0))();
    (**(code **)(*plVar4 + 0xab8))();
    (**(code **)(*unaff_RDI + 0xad0))();
    (**(code **)(*plVar4 + 0xac8))();
    (**(code **)(*plVar4 + 0x928))(*(undefined4 *)((longlong)unaff_RDI + 0x1dc));
    uVar5 = (**(code **)(*unaff_RDI + 0xad0))();
    *(undefined4 *)((longlong)plVar4 + 0x1dc) = uVar5;
    (**(code **)(*plVar4 + 0x620))();
    (**(code **)(*unaff_RDI + 0x450))();
    (**(code **)(*plVar4 + 0x3c0))();
    (**(code **)(*plVar4 + 0x478))();
    uVar5 = (**(code **)(*plVar4 + 0x930))();
    *(undefined4 *)((longlong)unaff_RDI + 0x1dc) = uVar5;
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined4 *)(unaff_RDI + 0x3c) = 0x7fc00000;
    FUN_00d50b20();
    return;
  }
LAB_01b8e164:
  uVar7 = (**(code **)(*unaff_RDI + 0xaf8))();
  cVar2 = FUN_00d05410(uVar5,uVar7,uVar6);
  if (cVar2 != '\0') {
    FUN_01daee00();
  }
  return;
}




// ============================================================
// @01b8f350 — 986 bytes
// ============================================================

void FUN_01b8f350(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  undefined4 uVar4;
  longlong local_d0;
  char local_c8;
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
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  FUN_01b68670();
  *(undefined1 *)(unaff_RDI + 0x1a0) = 1;
  *(undefined1 *)(unaff_RDI + 0x1b4) = 0;
  *(undefined1 *)(unaff_RDI + 0x1b6) = 1;
  *(undefined1 *)(unaff_RDI + 0x200) = 1;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025ce610;
  puVar3[2] = 0;
  puVar3[3] = 0;
  (*DAT_025ce628)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x208);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x208) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_90 = DAT_027e51b0;
  if (DAT_027e51b0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_88 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,1);
  *(undefined1 *)(unaff_RDI + 0x210) = uVar2;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_80 = DAT_027c19f0;
  if (DAT_027c19f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_78 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,0);
  *(undefined1 *)(unaff_RDI + 0x211) = uVar2;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_70 = DAT_027e51b8;
  if (DAT_027e51b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_68 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,1);
  *(undefined1 *)(unaff_RDI + 0x212) = uVar2;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_60 = DAT_027e51c0;
  if (DAT_027e51c0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_58 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,0);
  *(undefined1 *)(unaff_RDI + 0x213) = uVar2;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b8db70 — 812 bytes
// str: ""MUDetectionActivationSlider""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b8dd21) */
/* WARNING: Removing unreachable block (ram,0x01b8dd2a) */
/* WARNING: Removing unreachable block (ram,0x01b8ddb1) */
/* WARNING: Removing unreachable block (ram,0x01b8ddba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8db70(undefined8 param_1,undefined4 param_2)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_XMM1_Dc;
  longlong *local_48;
  char local_40;
  float local_34;
  
  pplVar6 = &local_48;
  FUN_01e40eb0();
  plVar2 = local_48;
  if ((DAT_02732250 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027321a0 = FUN_001b37d0();
    _DAT_02732188 = "MUDetectionActivationSlider";
    _DAT_02732190 = 0x1e8;
    _DAT_02732198 = FUN_008264b0;
    _DAT_027321a8 = 0;
    uRam00000000027321b0 = 0;
    _DAT_027321b8 = 0;
    _DAT_02732230 = 0;
    uRam0000000002732238 = 0;
    _DAT_02732240 = 0;
    DAT_02732242 = 1;
    _DAT_027321c0 = 0;
    uRam00000000027321c8 = 0;
    _DAT_027321d0 = 0;
    uRam00000000027321d8 = 0;
    _DAT_027321e0 = 0;
    uRam00000000027321e8 = 0;
    _DAT_027321f0 = 0;
    uRam00000000027321f8 = 0;
    _DAT_02732200 = 0;
    uRam0000000002732208 = 0;
    _DAT_02732210 = 0;
    uRam0000000002732218 = 0;
    _DAT_02732220 = 0;
    uRam0000000002732228 = 0;
    DAT_0273224b = 0;
    _DAT_02732243 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b8dbd3;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01b8dbd3:
  plVar2 = *pplVar6;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    local_34 = (float)(**(code **)(*unaff_RDI + 0xb10))();
    fVar1 = *(float *)((longlong)unaff_RDI + 0x1dc);
    fVar7 = (float)(**(code **)(*unaff_RDI + 0xac0))();
    fVar8 = (float)(**(code **)(*unaff_RDI + 0xad0))();
    fVar9 = (float)(**(code **)(*unaff_RDI + 0xac0))();
    cVar3 = (**(code **)(*unaff_RDI + 0xaf0))();
    if (cVar3 != '\0') {
      local_34 = DAT_02390124 - local_34;
    }
    (**(code **)(*unaff_RDI + 0x640))();
    plVar2 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_01e3f820();
    uVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    (**(code **)(*plVar2 + 0x3f0))(uVar10,0xe,0,uVar4);
    uVar10 = FUN_01e3f820();
    (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    FUN_01cc0c20(uVar10,param_2,local_34,(fVar1 - fVar7) / (fVar8 - fVar9),param_2,in_XMM1_Dc);
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0080a190 — 601 bytes
// str: ""MUDetectionActivationSlider""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0080a306) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0080a190(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_220;
  
  if ((DAT_02732250 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027321a0 = FUN_001b37d0();
    _DAT_02732188 = "MUDetectionActivationSlider";
    _DAT_02732190 = 0x1e8;
    _DAT_02732198 = FUN_008264b0;
    _DAT_027321a8 = 0;
    uRam00000000027321b0 = 0;
    _DAT_027321b8 = 0;
    _DAT_02732230 = 0;
    uRam0000000002732238 = 0;
    _DAT_02732240 = 0;
    DAT_02732242 = 1;
    _DAT_027321c0 = 0;
    uRam00000000027321c8 = 0;
    _DAT_027321d0 = 0;
    uRam00000000027321d8 = 0;
    _DAT_027321e0 = 0;
    uRam00000000027321e8 = 0;
    _DAT_027321f0 = 0;
    uRam00000000027321f8 = 0;
    _DAT_02732200 = 0;
    uRam0000000002732208 = 0;
    _DAT_02732210 = 0;
    uRam0000000002732218 = 0;
    _DAT_02732220 = 0;
    uRam0000000002732228 = 0;
    DAT_0273224b = 0;
    _DAT_02732243 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02732243 == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00826580();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b8d9a0();
    FUN_00e87920(uVar2,0);
    if (local_220 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}




// ============================================================
// @00826580 — 538 bytes
// str: ""MUDetectionActivationSlider""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00826580(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_001b40a0();
  *unaff_RDI = &DAT_0264fd20;
  unaff_RDI[2] = &DAT_02650850;
  *(undefined4 *)((longlong)unaff_RDI + 0x1dc) = 0;
  if (DAT_02732250 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027321a0 = FUN_001b37d0();
      _DAT_02732188 = "MUDetectionActivationSlider";
      _DAT_02732190 = 0x1e8;
      _DAT_02732198 = FUN_008264b0;
      _DAT_027321a8 = 0;
      uRam00000000027321b0 = 0;
      _DAT_027321b8 = 0;
      _DAT_02732230 = 0;
      uRam0000000002732238 = 0;
      _DAT_02732240 = 0;
      DAT_02732242 = 1;
      _DAT_027321c0 = 0;
      uRam00000000027321c8 = 0;
      _DAT_027321d0 = 0;
      uRam00000000027321d8 = 0;
      _DAT_027321e0 = 0;
      uRam00000000027321e8 = 0;
      _DAT_027321f0 = 0;
      uRam00000000027321f8 = 0;
      _DAT_02732200 = 0;
      uRam0000000002732208 = 0;
      _DAT_02732210 = 0;
      uRam0000000002732218 = 0;
      _DAT_02732220 = 0;
      uRam0000000002732228 = 0;
      DAT_0273224b = 0;
      _DAT_02732243 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02732243 == '\0') {
    FUN_00826800();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3c) = 0;
  if (DAT_02732250 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027321a0 = FUN_001b37d0();
      _DAT_02732188 = "MUDetectionActivationSlider";
      _DAT_02732190 = 0x1e8;
      _DAT_02732198 = FUN_008264b0;
      _DAT_027321a8 = 0;
      uRam00000000027321b0 = 0;
      _DAT_027321b8 = 0;
      _DAT_02732230 = 0;
      uRam0000000002732238 = 0;
      _DAT_02732240 = 0;
      DAT_02732242 = 1;
      _DAT_027321c0 = 0;
      uRam00000000027321c8 = 0;
      _DAT_027321d0 = 0;
      uRam00000000027321d8 = 0;
      _DAT_027321e0 = 0;
      uRam00000000027321e8 = 0;
      _DAT_027321f0 = 0;
      uRam00000000027321f8 = 0;
      _DAT_02732200 = 0;
      uRam0000000002732208 = 0;
      _DAT_02732210 = 0;
      uRam0000000002732218 = 0;
      _DAT_02732220 = 0;
      uRam0000000002732228 = 0;
      DAT_0273224b = 0;
      _DAT_02732243 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02732243 == '\0') {
    FUN_00826990();
    FUN_00e87980();
  }
  return;
}



