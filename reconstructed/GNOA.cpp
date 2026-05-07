// Reconstructed implementation of GNOA
// From MikeCore binary — reverse-engineered pseudocode

#include "GNOA.h"

// ============================================================
// @00db5520 — 2146 bytes
// ============================================================

void FUN_00db5520(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 local_f0;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  undefined8 *local_60;
  char local_58 [8];
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x34) != 0) {
    return;
  }
  if (*(int *)(*(longlong *)(unaff_RDI + 0x18) + 0xc) == 0) {
    return;
  }
  FUN_00db98a0();
  iVar1 = *(int *)((longlong)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db32a0();
  }
  lVar2 = DAT_02782f78;
  if (DAT_02782f78 != 0) {
    FUN_00d50b00();
  }
  lVar7 = DAT_02782f90;
  if (DAT_02782f90 != 0) {
    FUN_00d50b00();
  }
  local_178 = lVar7;
  FUN_00083ea0(2,&local_178);
  FUN_0036bfe0();
  lVar4 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (((lVar4 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (CONCAT71(uStack_6f,local_70) != 0))
    {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  local_60 = (undefined8 *)&DAT_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar2 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar2;
  local_168 = '\x01';
  FUN_00d50b00();
  local_158 = '\0';
  local_160 = lVar4;
  FUN_00d40470(&local_160,&stack0xffffffffffffff18,3,3);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  puVar13 = local_60;
  pcVar11 = &local_70;
  if (local_58[0] != '\0') {
    pcVar11 = local_58;
  }
  local_70 = local_58[0];
  *pcVar11 = '\0';
  if ((local_58[0] != '\0') && (puVar13 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    bVar6 = true;
    uVar9 = 0;
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    bVar6 = false;
  }
  local_f0 = uVar9;
  FUN_00db98a0();
  puVar12 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    bVar5 = true;
    puVar12 = (undefined8 *)0x0;
  }
  else {
    if (local_58[0] == '\0') {
      FUN_00d50b00();
      bVar5 = false;
      if ((local_58[0] == '\0') || (local_60 == (undefined8 *)0x0)) goto LAB_00db5843;
      FUN_00d50b20();
    }
    bVar5 = false;
  }
LAB_00db5843:
  *(undefined1 *)(unaff_RDI + 0x38) = 1;
  for (uVar10 = (ulonglong)*(uint *)((longlong)puVar12 + 0xc); 0 < (int)uVar10; uVar10 = uVar10 - 1)
  {
    (**(code **)(**(longlong **)(puVar12[2] + -8 + uVar10 * 8) + 0x368))();
  }
  FUN_00d403d0();
  local_150 = DAT_02782f88;
  if (DAT_02782f88 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  FUN_00d50b00();
  local_138 = '\0';
  local_140 = lVar4;
  FUN_00d40470(&local_140,&stack0xffffffffffffff28,3,3);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00db9870();
  lVar2 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_58[0] = '\0';
  local_60 = (undefined8 *)lVar2;
  FUN_00db9820();
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  FUN_00db98a0();
  iVar1 = *(int *)((longlong)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db9870();
    puVar12 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_00db9820();
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_58[0] = '\0';
    local_60 = (undefined8 *)lVar2;
    FUN_00d21140();
    if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar8 = (longlong *)FUN_000679b0();
    (**(code **)(*plVar8 + 0x18))();
    plVar3 = *(longlong **)(unaff_RDI + 0x20);
    if (plVar3 == plVar8) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0x20) = plVar8;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    FUN_00d23340();
    puVar12 = local_60;
    pcVar11 = local_58;
    if (local_58[0] == '\0') {
      pcVar11 = &local_70;
    }
    local_70 = local_58[0];
    *pcVar11 = '\0';
    if ((local_58[0] != '\0') && (puVar12 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x28);
    if ((local_70 != '\0') && (puVar12 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar12 == (undefined8 *)lVar2) {
      *(undefined8 *)(unaff_RDI + 0x28) = 0;
    }
  }
  FUN_00d23740();
  *(undefined1 *)(unaff_RDI + 0x38) = 0;
  FUN_00d403d0();
  local_130 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_00d50b00();
  local_118 = '\0';
  local_120 = lVar4;
  FUN_00d40470(&local_120,&stack0xffffffffffffff38,3,3);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_110 = DAT_026e0f70;
  if (DAT_026e0f70 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_00d50b00();
  local_f8 = '\0';
  local_100 = lVar4;
  FUN_00d40470(&local_100,&stack0xffffffffffffff48,3,3);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_00d50b20();
  }
  if (!bVar6 && puVar13 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00db4680 — 2060 bytes
// ============================================================

void FUN_00db4680(void)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  undefined8 *puVar10;
  longlong local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 local_f0;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 *local_60;
  char local_58 [8];
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x34) != 0) {
    return;
  }
  if (*(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc) == 0) {
    return;
  }
  FUN_00db98a0();
  iVar1 = *(int *)((longlong)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db32a0();
  }
  lVar4 = DAT_02782f78;
  if (DAT_02782f78 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_02782f80;
  if (DAT_02782f80 != 0) {
    FUN_00d50b00();
  }
  local_178 = lVar5;
  FUN_00083ea0(2,&local_178);
  FUN_0036bfe0();
  local_88 = CONCAT71(uStack_97,local_98);
  if (local_90 == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_90 != '\0')) &&
       (CONCAT71(uStack_97,local_98) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = '\0';
  }
  local_60 = (undefined8 *)&DAT_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar4 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar4;
  local_168 = '\x01';
  FUN_00d50b00();
  local_160 = local_88;
  local_158 = '\0';
  FUN_00d40470(&local_160,&stack0xffffffffffffff18,3,3);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  puVar10 = local_60;
  local_98 = local_58[0];
  pcVar6 = local_58;
  if (local_58[0] == '\0') {
    pcVar6 = &local_98;
  }
  *pcVar6 = '\0';
  if ((local_58[0] != '\0') && (puVar10 != (undefined8 *)0x0)) {
    pcVar6 = (char *)FUN_00d50b20();
  }
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    local_74 = (undefined4)CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if (local_98 == '\0') {
      FUN_00d50b00();
    }
    local_74 = 0;
  }
  local_f0 = uVar7;
  local_80 = puVar10;
  uVar7 = FUN_00db98a0();
  puVar10 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    puVar10 = (undefined8 *)0x0;
    local_70 = 0;
  }
  else {
    if (local_58[0] == '\0') {
      uVar7 = FUN_00d50b00();
      if ((local_58[0] == '\0') || (local_60 == (undefined8 *)0x0)) {
        local_64 = 0;
        local_70 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        goto LAB_00db49b8;
      }
      uVar7 = FUN_00d50b20();
    }
    local_70 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    local_64 = 0;
  }
LAB_00db49b8:
  *(undefined1 *)(unaff_RDI + 0x38) = 1;
  for (uVar9 = (ulonglong)*(uint *)((longlong)puVar10 + 0xc); 0 < (int)uVar9; uVar9 = uVar9 - 1) {
    (**(code **)(**(longlong **)(puVar10[2] + -8 + uVar9 * 8) + 0x368))();
  }
  FUN_00d403d0();
  local_150 = DAT_02782f88;
  if (DAT_02782f88 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  FUN_00d50b00();
  local_140 = local_88;
  local_138 = '\0';
  FUN_00d40470(&local_140,&stack0xffffffffffffff28,3,3);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00db98a0();
  iVar1 = *(int *)((longlong)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db9870();
    puVar10 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_00db9820();
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar10 = *(undefined8 **)(unaff_RDI + 0x20);
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    local_58[0] = '\0';
    local_60 = puVar10;
    FUN_00d21140();
    if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    plVar8 = (longlong *)FUN_000679b0();
    (**(code **)(*plVar8 + 0x18))();
    plVar2 = *(longlong **)(unaff_RDI + 0x20);
    if (plVar2 == plVar8) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0x20) = plVar8;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    FUN_00d23340();
    puVar10 = local_60;
    pcVar6 = local_58;
    if (local_58[0] == '\0') {
      pcVar6 = &local_98;
    }
    local_98 = local_58[0];
    *pcVar6 = '\0';
    if ((local_58[0] != '\0') && (puVar10 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0x28);
    if ((local_98 != '\0') && (puVar10 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 == puVar3) {
      *(undefined8 *)(unaff_RDI + 0x28) = 0;
    }
  }
  FUN_00d23740();
  *(undefined1 *)(unaff_RDI + 0x38) = 0;
  FUN_00d403d0();
  local_130 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_00d50b00();
  local_120 = local_88;
  local_118 = '\0';
  FUN_00d40470(&local_120,&stack0xffffffffffffff38,3,3);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_110 = DAT_026e0f70;
  if (DAT_026e0f70 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_00d50b00();
  local_100 = local_88;
  local_f8 = '\0';
  FUN_00d40470(&local_100,&stack0xffffffffffffff48,3,3);
  puVar10 = local_80;
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_74 == '\0' && puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00daf570 — 951 bytes
// str: ""Cannot open stream""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00daf5c9) */
/* WARNING: Removing unreachable block (ram,0x00daf5d5) */
/* WARNING: Removing unreachable block (ram,0x00daf658) */
/* WARNING: Removing unreachable block (ram,0x00daf664) */
/* WARNING: Removing unreachable block (ram,0x00daf6e6) */
/* WARNING: Removing unreachable block (ram,0x00daf6f2) */

void FUN_00daf570(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_f0;
  char local_e8;
  longlong local_90;
  char local_88;
  longlong local_48;
  char local_40;
  
  FUN_00c8e830();
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar3 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00c92170();
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar5 = (longlong)&DAT_0256d868;
    plVar5[2] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
    (*DAT_0256d880)();
    FUN_00cccfe0();
    FUN_00d50b20();
    iVar4 = FUN_00daed40();
    lVar3 = DAT_02782eb0;
    if (iVar4 == -1) {
      if (DAT_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    uVar6 = FUN_00daa940();
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (uVar6 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    lVar2 = DAT_027815a8;
    if (lVar3 == 0) {
      if (DAT_027815a8 != 0) {
        uVar6 = FUN_00d50b00();
      }
      uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
      if (lVar2 != 0) {
        uVar6 = FUN_00d50b20();
      }
    }
    local_90 = lVar3;
    local_88 = '\0';
    (**(code **)(*unaff_RSI + 0x618))(uVar6,&local_90);
    lVar2 = local_48;
    if (local_48 == 0) {
      bVar1 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      bVar1 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar5 + 0x368))();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar1) && (lVar2 != 0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00daed40 — 742 bytes
// str: ""Cannot read magic.""
// str: ""Unsupported file format: 'GNOA' missing""
// str: ""Archive chunk keys have to be 4 chars long.""
// ============================================================

undefined4 FUN_00daed40(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *unaff_RSI;
  bool bVar3;
  bool bVar4;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined1 local_85 [4];
  undefined1 local_81;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  char local_40;
  undefined4 local_38;
  int local_34;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))(param_1,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(&local_50,&local_4c);
  bVar3 = local_48 != 0;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027815a8;
  if (bVar3 || local_50 != 4) {
    if (DAT_027815a8 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar1;
    local_78 = '\x01';
    FUN_00cc7b40();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02782ea8;
  if (local_4c != 0x474e4f41) {
    if (DAT_02782ea8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_00cc7b40();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar2 = FUN_00d8c7a0();
  lVar1 = DAT_027815a8;
  if (iVar2 != 4) {
    if (DAT_027815a8 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_00cc7b40();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  while( true ) {
    local_34 = 4;
    local_81 = 0;
    (**(code **)(*(longlong *)*unaff_RSI + 0x380))(&local_34,local_85);
    bVar3 = local_48 != 0;
    bVar4 = local_34 != 4;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 || bVar4) break;
    FUN_00ccd540(&local_34,&local_38);
    bVar3 = local_48 != 0;
    bVar4 = local_34 != 4;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 || bVar4) {
      return 0xffffffff;
    }
    FUN_00d8b910();
    iVar2 = FUN_00e7ddf0();
    if (iVar2 == 0) {
      return local_38;
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return 0xffffffff;
}




// ============================================================
// @00db32a0 — 627 bytes
// ============================================================

void FUN_00db32a0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(unaff_RDI + 0x34) == 0) {
    FUN_00db98a0();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      local_48 = *(longlong *)(unaff_RDI + 0x20);
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      plVar5 = (longlong *)FUN_000679b0();
      (**(code **)(*plVar5 + 0x18))();
      plVar2 = *(longlong **)(unaff_RDI + 0x20);
      if (plVar2 == plVar5) {
        FUN_00d50b20();
      }
      else {
        *(longlong **)(unaff_RDI + 0x20) = plVar5;
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar3 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar3 != 0) {
        local_40[0] = '\0';
        cVar4 = FUN_00d24090();
        if ((local_40[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        local_48 = lVar3;
        if (cVar4 != '\0') {
          *(undefined8 *)(unaff_RDI + 0x28) = 0;
        }
      }
      FUN_00d216c0();
      if (*(int *)(unaff_RDI + 0xc) < *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc)) {
        do {
          if (*(longlong *)(unaff_RDI + 0x28) != 0) {
            FUN_00d23310();
            local_38[0] = local_40[0];
            pcVar6 = local_40;
            if (local_40[0] == '\0') {
              pcVar6 = local_38;
            }
            *pcVar6 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = *(longlong *)(unaff_RDI + 0x28);
            if ((local_38[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 == lVar3) {
              *(undefined8 *)(unaff_RDI + 0x28) = 0;
            }
          }
          FUN_00d23620();
          *(undefined1 *)(unaff_RDI + 0x39) = 1;
        } while (*(int *)(unaff_RDI + 0xc) < *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc));
      }
      FUN_00d403d0();
      lVar3 = DAT_026e0f70;
      if (DAT_026e0f70 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_68 = 0;
      local_60 = '\0';
      FUN_00d40470(&local_68,&stack0xffffffffffffffa8,3,3);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d216c0();
  }
  return;
}




// ============================================================
// @00db09b0 — 584 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00db0af4) */
/* WARNING: Removing unreachable block (ram,0x00db0afd) */

void FUN_00db09b0(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  (**(code **)(*(longlong *)*param_1 + 0x4d8))();
  plVar5 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_00db0a82;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) {
LAB_00db0a82:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_40 = '\0';
  local_48 = (longlong *)0x0;
  iVar4 = FUN_00daed40();
  lVar3 = DAT_02782eb0;
  if (iVar4 == -1) {
    if (DAT_02782eb0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd8f0(iVar4,&local_48);
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00db0b16;
    FUN_00d50b00();
LAB_00db0b02:
    FUN_00cc76c0();
    bVar2 = false;
    bVar1 = false;
    lVar3 = DAT_027815a8;
  }
  else {
    if (local_58 != 0) goto LAB_00db0b02;
LAB_00db0b16:
    bVar2 = true;
    bVar1 = true;
    lVar3 = DAT_027815a8;
  }
  DAT_027815a8 = lVar3;
  if (local_48 == (longlong *)0x0) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    bVar1 = bVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar5 + 0x368))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      *unaff_RDI = (longlong)plVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00db0bab;
    }
    plVar5 = (longlong *)0x0;
  }
  *unaff_RDI = (longlong)plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00db0bab:
  FUN_00d50b20();
  return;
}




// ============================================================
// @00daff00 — 578 bytes
// ============================================================

undefined8 *
FUN_00daff00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong local_a0;
  char local_98;
  int local_54 [5];
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*param_1 + 0x4d8))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00daff63;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00daff63:
    uVar8 = 0;
    iVar4 = FUN_00daed40();
    lVar5 = DAT_02782eb0;
    if (iVar4 == -1) {
      if (DAT_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    lVar5 = FUN_00e83010();
    local_54[0] = iVar4;
    (**(code **)(*plVar2 + 0x380))(local_54,lVar5,param_3,param_4,uVar8);
    bVar6 = local_40 != (longlong *)0x0;
    bVar7 = iVar4 != local_54[0];
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027815a8;
    if (bVar6 || bVar7) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(lVar5 + iVar4) = 0;
    FUN_00d92e10();
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar2 + 0x368))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar6) && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return unaff_RDI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}




// ============================================================
// @00db2960 — 558 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00db2a8a) */
/* WARNING: Removing unreachable block (ram,0x00db2a93) */
/* WARNING: Removing unreachable block (ram,0x00db2b64) */
/* WARNING: Removing unreachable block (ram,0x00db2b6d) */

void FUN_00db2960(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x30) != 0) {
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x210))(param_1,*param_2);
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))();
  lVar3 = lVar1;
  if (cVar2 != '\0') {
    cVar2 = FUN_00d77de0();
    if ((cVar2 != '\0') && (lVar3 = 0, lVar1 != 0)) {
      FUN_019ba260();
      lVar3 = lVar1;
      if (lVar1 != local_40) {
        local_48 = local_40;
        if (local_38 != '\0') {
          FUN_00d50b20();
          local_38 = '\0';
          lVar3 = local_48;
          goto LAB_00db2a98;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = local_48;
        lVar1 = local_40;
      }
      if ((local_38 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00db2a98:
  local_60 = '\0';
  local_58 = *param_2;
  local_50 = '\0';
  local_68 = lVar3;
  FUN_00d3bc70(&local_58,&local_68);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00db2790();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00db0470 — 538 bytes
// ============================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_00db0470(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  longlong local_98;
  char local_90;
  int local_58 [6];
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*param_1 + 0x4d8))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00db04d3;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00db04d3:
    iVar4 = FUN_00daed40();
    lVar1 = DAT_02782eb0;
    if (iVar4 == -1) {
      if (DAT_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_58[1] = 0;
    FUN_00ccd540(local_58,local_58 + 1);
    bVar5 = local_40 != (longlong *)0x0;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027815a8;
    if (bVar5 || local_58[0] != 4) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d46530();
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar2 + 0x368))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar5) && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00db3a00 — 500 bytes
// ============================================================

void FUN_00db3a00(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  if (*param_2 != 0) {
    FUN_00db9870();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02800118;
    if (lVar1 != 0) {
      if (DAT_02800118 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_02782f98;
      if (DAT_02782f98 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_00db6680();
      local_30 = local_40;
      local_28 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_28 = '\x01';
      FUN_00d31230(&local_30,&local_80);
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  lVar1 = DAT_02800118;
  if (DAT_02800118 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02800120;
  local_70 = lVar1;
  local_68 = '\x01';
  if (DAT_02800120 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d31230(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00db3e00 — 500 bytes
// ============================================================

void FUN_00db3e00(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  if (*param_2 != 0) {
    FUN_00db9870();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02800118;
    if (lVar1 != 0) {
      if (DAT_02800118 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_02782fa0;
      if (DAT_02782fa0 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_00db6680();
      local_30 = local_40;
      local_28 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_28 = '\x01';
      FUN_00d31230(&local_30,&local_80);
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  lVar1 = DAT_02800118;
  if (DAT_02800118 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02800128;
  local_70 = lVar1;
  local_68 = '\x01';
  if (DAT_02800128 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d31230(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}



