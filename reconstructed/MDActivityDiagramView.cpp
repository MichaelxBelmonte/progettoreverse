// Reconstructed implementation of MDActivityDiagramView
// From MikeCore binary — reverse-engineered pseudocode

#include "MDActivityDiagramView.h"

// ============================================================
// @00552720 — 2010 bytes
// str: ""%@ (%@)""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00552a95) */
/* WARNING: Removing unreachable block (ram,0x00552aa1) */
/* WARNING: Removing unreachable block (ram,0x005527d1) */
/* WARNING: Removing unreachable block (ram,0x005527dd) */
/* WARNING: Removing unreachable block (ram,0x00552e91) */
/* WARNING: Removing unreachable block (ram,0x00552e9d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552720(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 in_XMM1_Qb;
  undefined1 auVar18 [16];
  float fVar17;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_140 [8];
  longlong local_128;
  char local_120;
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  dVar11 = (double)FUN_00e7d6f0();
  uVar12 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_70 + 0x3f0))(uVar12,param_2,0,1);
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d05530();
  local_d8 = (float)param_2;
  fStack_d4 = (float)((ulonglong)param_2 >> 0x20);
  uStack_d0 = (undefined4)in_XMM1_Qb;
  uStack_cc = (uint)((ulonglong)in_XMM1_Qb >> 0x20);
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x3a0))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d488d0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x41) = 0;
  (*DAT_02680418)();
  dVar13 = (double)FUN_00e7d6f0();
  FUN_00e7d850(dVar13 * (double)*(float *)(unaff_RDI + 0x27));
  lVar2 = unaff_RDI[0x28];
  fVar17 = 0.0;
  if (3 < *(int *)(lVar2 + 0x18)) {
    lVar10 = 0;
    fVar16 = 0.0;
    do {
      fVar17 = *(float *)(*(longlong *)(lVar2 + 0x10) + lVar10 * 4);
      iVar1 = *(int *)(unaff_RDI[0x28] + 0x18);
      iVar8 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      auVar20._4_4_ = fStack_d4;
      auVar20._0_4_ = fStack_d4;
      auVar20._8_4_ = uStack_cc;
      auVar20._12_4_ = uStack_cc;
      auVar18._4_12_ = auVar20._4_12_;
      auVar18._0_4_ = fStack_d4 - (fVar17 / *(float *)((longlong)unaff_RDI + 0x13c)) * fStack_d4;
      FUN_01d38ba0(((float)(int)lVar10 * local_d8) / (float)(iVar8 >> 2),auVar18._0_8_);
      iVar1 = *(int *)(lVar2 + 0x18);
      iVar8 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      if (fVar17 <= fVar16) {
        fVar17 = fVar16;
      }
      lVar10 = lVar10 + 1;
      fVar16 = fVar17;
    } while ((int)lVar10 < iVar8 >> 2);
  }
  FUN_01d38ba0(param_2,CONCAT44(fStack_d4,fStack_d4));
  FUN_01d38ba0(0,CONCAT44(fStack_d4,fStack_d4));
  FUN_01d38b10();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  if (unaff_RDI[0x29] == 0) goto LAB_00552eaf;
  fVar17 = fStack_d4 - (fVar17 / *(float *)((longlong)unaff_RDI + 0x13c)) * fStack_d4;
  auVar14._0_4_ = _DAT_023945e0 & (uint)fVar17;
  auVar14._4_4_ = _UNK_023945e4 & (uint)fStack_d4;
  auVar14._8_4_ = _UNK_023945e8 & uStack_cc;
  auVar14._12_4_ = _UNK_023945ec & uStack_cc;
  auVar15._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
  auVar15._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + fVar17;
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar20 = roundss(auVar19,auVar15,0xb);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  local_b8 = auVar20._0_4_;
  uStack_b4 = auVar20._4_4_;
  uStack_b0 = auVar20._8_4_;
  uStack_ac = auVar20._12_4_;
  local_b8 = local_b8 + DAT_023941fc;
  if (local_b8 < DAT_02390d34) {
    auVar4._4_4_ = uStack_b4;
    auVar4._0_4_ = local_b8 + DAT_023942a8;
    auVar4._8_4_ = uStack_b0;
    auVar4._12_4_ = uStack_ac;
    insertps(_DAT_023b5520,auVar4,0x1c);
  }
  else {
    auVar3._4_4_ = uStack_b4;
    auVar3._0_4_ = local_b8;
    auVar3._8_4_ = uStack_b0;
    auVar3._12_4_ = uStack_ac;
    insertps(_DAT_023b5520,auVar3,0x10);
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x378))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d48a10();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x390))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d488d0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x378))();
  plVar6 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar6;
  if ((longlong *)unaff_RDI[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x378))();
    uVar12 = FUN_00083ea0(2,local_140);
    FUN_00d8cb40(uVar12,&local_70);
    plVar9 = local_40;
    if (plVar6 == local_40) {
LAB_00552de1:
      plVar9 = plVar6;
      if (local_38 != '\0') {
LAB_00552de7:
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar6 = plVar9;
          goto LAB_00552de1;
        }
        if (local_38 == '\0') goto LAB_00552df5;
        goto LAB_00552de7;
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_00552df5:
    local_70 = (longlong *)&DAT_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar5._8_4_ = uStack_d0;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = uStack_cc;
  blendps(auVar5,_DAT_023b27c0,0xe);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00552eaf:
  FUN_01d48390();
  dVar13 = (double)FUN_00e7d6f0();
  FUN_01d428f0(dVar13 - dVar11);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00551ad0 — 1187 bytes
// ============================================================

void FUN_00551ad0(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  float fVar7;
  
  FUN_01e534b0();
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &DAT_02576dc8;
  pcVar4 = DAT_02576de0;
  (*DAT_02576de0)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  pcVar3 = DAT_02576128;
  (*DAT_02576128)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (undefined8 *)plVar1[0x2a];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x2a] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if ((*(float *)((longlong)plVar1 + 0x13c) != DAT_023b36b0) ||
     (NAN(*(float *)((longlong)plVar1 + 0x13c)) || NAN(DAT_023b36b0))) {
    *(undefined4 *)((longlong)plVar1 + 0x13c) = 0x41000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &DAT_02576dc8;
  (*pcVar4)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if ((*(float *)((longlong)plVar1 + 0x13c) != DAT_02390d34) ||
     (NAN(*(float *)((longlong)plVar1 + 0x13c)) || NAN(DAT_02390d34))) {
    *(undefined4 *)((longlong)plVar1 + 0x13c) = 0x40000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &DAT_02576dc8;
  (*pcVar4)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  if ((*(float *)((longlong)plVar1 + 0x13c) != DAT_02394dc0) ||
     (NAN(*(float *)((longlong)plVar1 + 0x13c)) || NAN(DAT_02394dc0))) {
    *(undefined4 *)((longlong)plVar1 + 0x13c) = 0x3f99999a;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xa0);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0xa8);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0xa8);
  iVar5 = FUN_00e36330();
  fVar7 = (float)iVar5;
  if ((*(float *)((longlong)plVar1 + 0x13c) == fVar7) &&
     (!NAN(*(float *)((longlong)plVar1 + 0x13c)) && !NAN(fVar7))) {
    return;
  }
  *(float *)((longlong)plVar1 + 0x13c) = fVar7;
                    /* WARNING: Could not recover jumptable at 0x00551f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x620))();
  return;
}




// ============================================================
// @00552090 — 1158 bytes
// ============================================================

void FUN_00552090(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  longlong *local_38;
  char local_30;
  float local_24;
  
  local_24 = (float)FUN_01256f00();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00b160d0();
    fVar8 = (float)(**(code **)(*local_38 + 0x6e0))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_24 = local_24 + fVar8;
  }
  plVar7 = *(longlong **)(unaff_RDI + 0x80);
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (longlong)iVar4 * 4) = local_24;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  iVar4 = FUN_012a7610();
  fVar8 = (float)iVar4;
  plVar7 = *(longlong **)(unaff_RDI + 0x88);
  if ((*(float *)((longlong)plVar7 + 0x13c) != fVar8) ||
     (NAN(*(float *)((longlong)plVar7 + 0x13c)) || NAN(fVar8))) {
    *(float *)((longlong)plVar7 + 0x13c) = fVar8;
    (**(code **)(*plVar7 + 0x620))();
    plVar7 = *(longlong **)(unaff_RDI + 0x88);
  }
  iVar3 = FUN_0142fdf0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar5 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar5 = iVar5 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (longlong)iVar4 * 4) = (float)iVar3;
  } while (iVar4 != iVar5);
  *(int *)(plVar7 + 0x2b) = iVar5;
  (**(code **)(*plVar7 + 0x620))();
  plVar7 = *(longlong **)(unaff_RDI + 0x90);
  uVar9 = FUN_01d428e0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(undefined4 *)(lVar1 + (longlong)iVar4 * 4) = uVar9;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  plVar7 = *(longlong **)(unaff_RDI + 0x98);
  uVar9 = FUN_00bcacc0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(undefined4 *)(lVar1 + (longlong)iVar4 * 4) = uVar9;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00b160d0();
    fVar8 = (float)(**(code **)(*local_38 + 0x6e8))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = *(longlong **)(unaff_RDI + 0xa0);
    if (*(float *)((longlong)plVar7 + 0x13c) <= fVar8 &&
        fVar8 != *(float *)((longlong)plVar7 + 0x13c)) {
      *(float *)((longlong)plVar7 + 0x13c) = fVar8;
      (**(code **)(*plVar7 + 0x620))();
      plVar7 = *(longlong **)(unaff_RDI + 0xa0);
    }
    dVar10 = (double)FUN_00e7d6f0();
    iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
    iVar4 = *(int *)(plVar7[0x28] + 0x18);
    iVar6 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    iVar3 = iVar3 % (iVar6 >> 2);
    iVar4 = (int)plVar7[0x2b];
    lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
    do {
      iVar4 = iVar4 + 1;
      if (iVar6 >> 2 <= iVar4) {
        iVar4 = 0;
      }
      *(float *)(lVar1 + (longlong)iVar4 * 4) = fVar8;
    } while (iVar4 != iVar3);
    *(int *)(plVar7 + 0x2b) = iVar3;
    (**(code **)(*plVar7 + 0x620))();
  }
  plVar7 = *(longlong **)(unaff_RDI + 0xa8);
  FUN_00e36840();
  iVar3 = FUN_00e37ca0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar5 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar5 = iVar5 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (longlong)iVar4 * 4) = (float)iVar3;
  } while (iVar4 != iVar5);
  *(int *)(plVar7 + 0x2b) = iVar5;
  (**(code **)(*plVar7 + 0x620))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00553810 — 802 bytes
// str: ""MDActivityDiagramView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553810(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_02503e00;
  unaff_RDI[2] = &DAT_02504728;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  if (DAT_0270d190 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270d0e0 = FUN_0006d940();
      _DAT_0270d0c8 = "MDActivityDiagramView";
      _DAT_0270d0d0 = 0x160;
      _DAT_0270d0d8 = FUN_005537b0;
      _DAT_0270d0e8 = 0;
      uRam000000000270d0f0 = 0;
      _DAT_0270d0f8 = 0;
      uRam000000000270d100 = 0;
      _DAT_0270d108 = 0;
      uRam000000000270d110 = 0;
      _DAT_0270d118 = 0;
      uRam000000000270d120 = 0;
      _DAT_0270d128 = 0;
      uRam000000000270d130 = 0;
      _DAT_0270d138 = 0;
      uRam000000000270d140 = 0;
      _DAT_0270d148 = 0;
      uRam000000000270d150 = 0;
      _DAT_0270d158 = 0;
      uRam000000000270d160 = 0;
      _DAT_0270d168 = 0;
      uRam000000000270d170 = 0;
      _DAT_0270d178 = 0;
      _uRam000000000270d180 = 0;
      _DAT_0270d188 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270d183 == '\0') {
    FUN_00553bc0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x13c) = 0;
  if (DAT_0270d190 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270d0e0 = FUN_0006d940();
      _DAT_0270d0c8 = "MDActivityDiagramView";
      _DAT_0270d0d0 = 0x160;
      _DAT_0270d0d8 = FUN_005537b0;
      _DAT_0270d0e8 = 0;
      uRam000000000270d0f0 = 0;
      _DAT_0270d0f8 = 0;
      uRam000000000270d100 = 0;
      _DAT_0270d108 = 0;
      uRam000000000270d110 = 0;
      _DAT_0270d118 = 0;
      uRam000000000270d120 = 0;
      _DAT_0270d128 = 0;
      uRam000000000270d130 = 0;
      _DAT_0270d138 = 0;
      uRam000000000270d140 = 0;
      _DAT_0270d148 = 0;
      uRam000000000270d150 = 0;
      _DAT_0270d158 = 0;
      uRam000000000270d160 = 0;
      _DAT_0270d168 = 0;
      uRam000000000270d170 = 0;
      _DAT_0270d178 = 0;
      _uRam000000000270d180 = 0;
      _DAT_0270d188 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270d183 == '\0') {
    FUN_00553d30();
    FUN_00e87980();
  }
  FUN_00553ea0();
  FUN_00554120();
  FUN_00554410();
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  if (DAT_0270d190 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270d0e0 = FUN_0006d940();
      _DAT_0270d0c8 = "MDActivityDiagramView";
      _DAT_0270d0d0 = 0x160;
      _DAT_0270d0d8 = FUN_005537b0;
      _DAT_0270d0e8 = 0;
      uRam000000000270d0f0 = 0;
      _DAT_0270d0f8 = 0;
      uRam000000000270d100 = 0;
      _DAT_0270d108 = 0;
      uRam000000000270d110 = 0;
      _DAT_0270d118 = 0;
      uRam000000000270d120 = 0;
      _DAT_0270d128 = 0;
      uRam000000000270d130 = 0;
      _DAT_0270d138 = 0;
      uRam000000000270d140 = 0;
      _DAT_0270d148 = 0;
      uRam000000000270d150 = 0;
      _DAT_0270d158 = 0;
      uRam000000000270d160 = 0;
      _DAT_0270d168 = 0;
      uRam000000000270d170 = 0;
      _DAT_0270d178 = 0;
      _uRam000000000270d180 = 0;
      _DAT_0270d188 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270d183 == '\0') {
    FUN_00554700();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @005513c0 — 517 bytes
// str: ""MDActivityDiagramView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005514ee) */
/* WARNING: Removing unreachable block (ram,0x005514e0) */
/* WARNING: Removing unreachable block (ram,0x005514fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005513c0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  
  if ((DAT_0270d190 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0270d0e0 = FUN_0006d940();
    _DAT_0270d0c8 = "MDActivityDiagramView";
    _DAT_0270d0d0 = 0x160;
    _DAT_0270d0d8 = FUN_005537b0;
    _DAT_0270d0e8 = 0;
    uRam000000000270d0f0 = 0;
    _DAT_0270d0f8 = 0;
    uRam000000000270d100 = 0;
    _DAT_0270d108 = 0;
    uRam000000000270d110 = 0;
    _DAT_0270d118 = 0;
    uRam000000000270d120 = 0;
    _DAT_0270d128 = 0;
    uRam000000000270d130 = 0;
    _DAT_0270d138 = 0;
    uRam000000000270d140 = 0;
    _DAT_0270d148 = 0;
    uRam000000000270d150 = 0;
    _DAT_0270d158 = 0;
    uRam000000000270d160 = 0;
    _DAT_0270d168 = 0;
    uRam000000000270d170 = 0;
    _DAT_0270d178 = 0;
    _uRam000000000270d180 = 0;
    _DAT_0270d188 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0270d183 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00553810();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_190 != 0) {
      FUN_00d50b20();
    }
    if (local_198 != 0) {
      FUN_00d50b20();
    }
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



