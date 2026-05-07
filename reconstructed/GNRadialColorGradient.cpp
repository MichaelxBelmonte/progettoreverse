// Reconstructed implementation of GNRadialColorGradient
// From MikeCore binary — reverse-engineered pseudocode

#include "GNRadialColorGradient.h"

// ============================================================
// @01f7ef70 — 1822 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7ef70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *unaff_RDI;
  byte bVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  double local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  char local_38;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined4)param_2;
  local_60 = (double)FUN_00e7d6f0();
  cVar4 = FUN_01e4ad60();
  if (((cVar4 == '\0') || ((char)unaff_RDI[7] != '\0')) || (cVar4 = FUN_01d3a640(), cVar4 != '\0'))
  {
LAB_01f7f0b9:
    uVar13 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    bVar7 = 0;
    plVar1 = (longlong *)unaff_RDI[9];
  }
  else {
    FUN_01f27fe0();
    iVar6 = *(int *)((longlong)local_40 + 0xdc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar6 != 0) goto LAB_01f7f0b9;
    FUN_01f27fe0();
    cVar4 = FUN_01f45da0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01f7f0b9;
    FUN_01f27fe0();
    FUN_01f45600();
    if (local_40 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01f27fe0();
      FUN_01f45600();
      FUN_01e5ca90();
      bVar9 = local_80 != unaff_RDI[9];
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar13 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    bVar7 = bVar9 ^ 1;
    plVar1 = (longlong *)unaff_RDI[9];
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x9b8))();
    if (local_40 == (longlong *)0x0) {
      bVar5 = 0;
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[9] + 0x9b8))();
      local_58 = FUN_01e466c0((int)*(undefined8 *)((longlong)unaff_RDI + 0x3c));
      (**(code **)(*(longlong *)unaff_RDI[9] + 0x9b8))();
      uVar10 = FUN_01e3f820();
      bVar5 = FUN_00d05410((undefined4)local_58,uVar10,CONCAT44(uVar14,uVar11));
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = bVar5 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar7 = bVar7 & ~bVar5;
    uVar13 = local_58;
  }
  local_58 = uVar13;
  uVar13 = FUN_01e466c0((int)*(undefined8 *)((longlong)unaff_RDI + 0x3c));
  if ((double)unaff_RDI[6] < 0.0) {
    return;
  }
  if (unaff_RDI[9] == 0) {
    return;
  }
  if (bVar7 != 1) {
    return;
  }
  uStack_50 = extraout_XMM0_Dc;
  uStack_4c = extraout_XMM0_Dd;
  local_58 = uVar13;
  cVar4 = (**(code **)(*unaff_RDI + 0x3a8))();
  uVar11 = (**(code **)(*(longlong *)unaff_RDI[9] + 0x490))((undefined4)local_58);
  plVar1 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  local_c0 = plVar1;
  local_b8 = '\0';
  (**(code **)(*unaff_RDI + 0x3b0))(uVar11,&local_c0);
  plVar8 = local_40;
  if (plVar1 == local_40) {
LAB_01f7f2c4:
    plVar8 = plVar1;
    if (local_38 != '\0') {
LAB_01f7f2ca:
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
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar1 = plVar8;
        goto LAB_01f7f2c4;
      }
      if (local_38 == '\0') goto LAB_01f7f2d8;
      goto LAB_01f7f2ca;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_01f7f2d8:
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  dVar2 = (double)unaff_RDI[6] + (double)unaff_RDI[3];
  uVar11 = SUB84(local_60,0);
  uVar14 = (undefined4)((ulonglong)local_60 >> 0x20);
  uVar10 = 0;
  uVar15 = 0;
  if (local_60 < dVar2) {
    if ((longlong *)unaff_RDI[10] != plVar8) {
      unaff_RDI[6] = (longlong)local_60;
      unaff_RDI[10] = (longlong)plVar8;
    }
LAB_01f7f31e:
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    goto LAB_01f7f674;
  }
  dVar3 = dVar2 + (double)unaff_RDI[4];
  if ((local_60 < dVar2) || (dVar3 <= local_60)) {
    if ((local_60 < dVar3) || (dVar3 + (double)unaff_RDI[5] <= local_60)) {
      if ((dVar3 + (double)unaff_RDI[5] <= local_60) && (cVar4 == '\x01')) {
        (**(code **)(*unaff_RDI + 0x388))();
      }
      goto LAB_01f7f31e;
    }
    local_98 = '\0';
    local_a0 = plVar8;
    uVar12 = FUN_01e48f80((undefined4)local_58);
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x6c8))(uVar12);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f7f564;
      }
LAB_01f7f611:
      bVar9 = true;
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_01f7f611;
LAB_01f7f564:
      iVar6 = FUN_00d8c7a0();
      if (iVar6 != 0) {
        local_88 = '\0';
        local_90 = plVar8;
        uVar13 = FUN_01e48f80((undefined4)local_58);
        local_58 = uVar13;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar8 + 0x6d0))((undefined4)local_58);
        local_58._0_4_ = uVar11;
        local_58._4_4_ = uVar14;
        uStack_50 = uVar10;
        uStack_4c = uVar15;
        uVar13 = FUN_01e49120();
        uVar11 = (**(code **)(*plVar8 + 0x6c0))();
        FUN_01f7ed90(SUB84(local_60,0),uVar11,uVar13,(undefined4)local_58);
      }
      bVar9 = false;
    }
    if ((cVar4 != '\0') &&
       (dVar2 = (local_60 - ((double)unaff_RDI[6] + (double)unaff_RDI[3] + (double)unaff_RDI[4])) /
                (double)unaff_RDI[5], _DAT_02423ba0 <= dVar2)) {
      (**(code **)(*unaff_RDI + 0x3a0))((float)((dVar2 + DAT_023b19a0) * _DAT_0241b688));
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    goto LAB_01f7f674;
  }
  local_a8 = '\0';
  local_b0 = plVar8;
  uVar13 = FUN_01e48f80((undefined4)local_58);
  uStack_50 = extraout_XMM0_Dc_00;
  uStack_4c = extraout_XMM0_Dd_00;
  local_58 = uVar13;
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar8 + 0x6c8))((undefined4)local_58);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f7f485;
    }
LAB_01f7f4f2:
    bVar9 = true;
LAB_01f7f50a:
    if (cVar4 != '\0') {
      unaff_RDI[6] = (longlong)((local_60 - (double)unaff_RDI[3]) - (double)unaff_RDI[4]);
    }
    if (bVar9) goto LAB_01f7f674;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_01f7f4f2;
LAB_01f7f485:
    iVar6 = FUN_00d8c7a0();
    if (iVar6 == 0) {
      bVar9 = false;
      goto LAB_01f7f50a;
    }
    (**(code **)(*plVar8 + 0x6d0))((undefined4)local_58);
    local_58._0_4_ = uVar11;
    local_58._4_4_ = uVar14;
    uStack_50 = uVar10;
    uStack_4c = uVar15;
    uVar13 = FUN_01e49120();
    uVar11 = (**(code **)(*plVar8 + 0x6c0))();
    FUN_01f7ed90(SUB84(local_60,0),uVar11,uVar13,(undefined4)local_58);
  }
  FUN_00d50b20();
LAB_01f7f674:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f7ffc0 — 1398 bytes
// ============================================================

void FUN_01f7ffc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  longlong local_68;
  char local_60;
  undefined1 local_58 [16];
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x540))();
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    auVar9 = ZEXT816(0);
LAB_01f8006f:
    local_58 = auVar9;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = &DAT_026a3350;
    puVar6[2] = &DAT_026a37c8;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined2 *)(puVar6 + 5) = 0;
    puVar6[6] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x37) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x69) = 0;
    puVar6[0xf] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    uVar8 = (*DAT_026a3368)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0x70);
    if (puVar1 == puVar6) {
      uVar8 = FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x70) = puVar6;
      if (puVar1 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b20();
      }
    }
    local_c8 = *(longlong *)(unaff_RDI + 0x48);
    local_c0 = '\0';
    FUN_01e5b6f0(uVar8,&local_c8);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    plVar2 = local_40;
    local_60 = 0;
    local_68 = *(longlong *)(unaff_RDI + 0x78);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x450))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d8))();
    local_58._0_4_ = local_58._0_4_ + auVar9._0_4_;
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d8))();
    auVar9 = blendps(local_58,auVar9,0xe);
    FUN_01e5bc80(auVar9._0_8_);
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d8))();
    local_58._8_8_ = in_XMM1_Qb;
    local_58._0_8_ = param_2;
    fVar7 = (float)FUN_01e59910();
    auVar9 = ZEXT816(0);
    if (fVar7 < (float)local_58._0_4_) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x478))();
      FUN_01e5e740();
      FUN_00d50130();
      if (*(longlong *)(unaff_RDI + 0x70) == 0) {
        auVar9 = ZEXT416(DAT_02390124);
        goto LAB_01f8006f;
      }
      *(undefined8 *)(unaff_RDI + 0x70) = 0;
      FUN_00d50b20();
      auVar9 = ZEXT416(DAT_02390124);
    }
    if (*(longlong *)(unaff_RDI + 0x70) == 0) goto LAB_01f8006f;
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x78);
  local_58._0_8_ = FUN_01e59910();
  local_58._8_8_ = extraout_XMM0_Qb;
  uVar8 = FUN_01e59910();
  auVar10._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar10._0_8_ = uVar8;
  auVar10._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  blendps(auVar10,local_58,0xd);
  (**(code **)(*plVar2 + 0x4d0))();
  local_58._8_8_ = 0;
  local_58._0_8_ = *(ulonglong *)(unaff_RDI + 0x3c);
  _local_78 = ZEXT416(*(uint *)(unaff_RDI + 100));
  fVar7 = *(float *)(unaff_RDI + 0x68);
  auVar12 = ZEXT416((uint)fVar7);
  auVar9._0_8_ = FUN_01e46ed0(*(undefined8 *)(unaff_RDI + 0x5c));
  auVar9._8_8_ = extraout_XMM0_Qb_01;
  fVar11 = (float)((ulonglong)auVar9._0_8_ >> 0x20);
  switch(*(undefined4 *)(unaff_RDI + 0x58)) {
  case 0:
    auVar12 = ZEXT416((uint)(fVar7 + fVar11 + DAT_02390d2c));
    auVar9 = insertps(local_58,auVar12,0x10);
    break;
  case 1:
    auVar12._0_4_ = (float)local_78._0_4_ * DAT_0239011c + (float)auVar9._0_8_;
    auVar12._4_4_ = (float)local_78._0_4_ * DAT_0239011c + fVar11;
    auVar12._8_4_ = (float)uStack_70 + (float)extraout_XMM0_Qb_01;
    auVar12._12_4_ = (float)uStack_70 + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    local_58 = auVar12;
    goto switchD_01f8027b_default;
  case 2:
    break;
  case 3:
    auVar12 = insertps(_local_78,ZEXT416((uint)(fVar7 + fVar11)),0x10);
    auVar10 = insertps(auVar9,DAT_02390d2c,0x10);
    auVar9._0_4_ = auVar10._0_4_ + auVar12._0_4_;
    auVar9._4_4_ = auVar10._4_4_ + auVar12._4_4_;
    auVar9._8_4_ = auVar10._8_4_ + auVar12._8_4_;
    auVar9._12_4_ = auVar10._12_4_ + auVar12._12_4_;
    break;
  default:
    goto switchD_01f8027b_default;
  }
  local_58 = auVar9;
switchD_01f8027b_default:
  (*(code *)PTR__objc_msgSend_024a9998)(DAT_0238fee8);
  FUN_01e5b880();
  _local_78 = auVar12;
  FUN_01d907a0();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f514b0(*(undefined8 *)(unaff_RDI + 0x3c));
  plVar3 = local_40;
  if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_01e46ed0(*(undefined8 *)(unaff_RDI + 0x5c));
  local_b8 = plVar2;
  local_b0 = '\0';
  local_a8 = plVar3;
  local_a0 = '\0';
  FUN_01ede930(&local_a8,1);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_98 = plVar4;
  local_90 = '\0';
  local_58._0_8_ = FUN_01edf3b0();
  local_58._8_8_ = extraout_XMM0_Qb_02;
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = 0;
  FUN_01e5ba50();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = FUN_01e5c7e0();
  if (cVar5 == '\0') {
    FUN_01e5d9c0();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01f7aa20 — 955 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f7ad98) */
/* WARNING: Removing unreachable block (ram,0x01f7ada1) */
/* WARNING: Removing unreachable block (ram,0x01f7acd1) */
/* WARNING: Removing unreachable block (ram,0x01f7acda) */
/* WARNING: Removing unreachable block (ram,0x01f7ac51) */
/* WARNING: Removing unreachable block (ram,0x01f7ac5a) */
/* WARNING: Removing unreachable block (ram,0x01f7aa7f) */
/* WARNING: Removing unreachable block (ram,0x01f7aa88) */
/* WARNING: Removing unreachable block (ram,0x01f7ac94) */
/* WARNING: Removing unreachable block (ram,0x01f7ac9d) */
/* WARNING: Removing unreachable block (ram,0x01f7ad03) */
/* WARNING: Removing unreachable block (ram,0x01f7ad0c) */
/* WARNING: Removing unreachable block (ram,0x01f7ad35) */
/* WARNING: Removing unreachable block (ram,0x01f7ad3e) */

undefined8 FUN_01f7aa20(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01d70da0();
  FUN_01d701d0();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return 1;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return 1;
  }
  uVar6 = FUN_01d654a0();
  lVar5 = DAT_0277d5d0;
  lVar4 = DAT_0277d5c0;
  lVar3 = DAT_0277d5b8;
  lVar2 = DAT_0277d5b0;
  lVar1 = DAT_0277d5a8;
  lVar7 = local_38;
  switch(uVar6) {
  case 0:
    if (DAT_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    break;
  case 1:
    if (DAT_0277d5b8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    break;
  case 2:
    if (DAT_0277d5b0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    break;
  case 3:
    if (DAT_0277d5c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    break;
  case 4:
    if (DAT_0277d5d0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    goto switchD_01f7aab1_default;
  }
  if (lVar7 == 0) {
switchD_01f7aab1_default:
    lVar7 = 0;
  }
  else {
    FUN_00d30620();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != lVar7) {
      FUN_00d30860();
      (**(code **)(*unaff_RDI + 0x5c0))();
    }
  }
  FUN_00d50b20();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @01f81010 — 817 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f8104f) */
/* WARNING: Removing unreachable block (ram,0x01f81058) */

void FUN_01f81010(void)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = FUN_01cc5a70();
  if (lVar2 == 0) {
    FUN_01ea9910();
    (**(code **)(*local_58 + 0x370))();
    (**(code **)(*local_38 + 0x4f8))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*local_38 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ea9910();
    (**(code **)(*local_58 + 0x370))();
    pcVar3 = (code *)FUN_01cc5a70();
    (**(code **)(*local_38 + 0x4f8))();
    (*pcVar3)();
    FUN_01cff4e0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*local_38 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ea9910();
  (**(code **)(*local_58 + 0x370))();
  (**(code **)(*local_38 + 0x370))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  (**(code **)(*local_38 + 0x370))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)unaff_RDI[0x27];
  (**(code **)(*plVar1 + 0x388))();
  (**(code **)(*plVar1 + 0x3a8))();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f7c800 — 766 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f7ca15) */
/* WARNING: Removing unreachable block (ram,0x01f7ca1e) */
/* WARNING: Removing unreachable block (ram,0x01f7c919) */
/* WARNING: Removing unreachable block (ram,0x01f7c922) */
/* WARNING: Removing unreachable block (ram,0x01f7c997) */
/* WARNING: Removing unreachable block (ram,0x01f7c9a0) */
/* WARNING: Removing unreachable block (ram,0x01f7ca93) */
/* WARNING: Removing unreachable block (ram,0x01f7ca9c) */

void FUN_01f7c800(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_30;
  char local_28;
  
  puVar3 = DAT_028bb018;
  if ((DAT_028bb018 == (undefined8 *)0x0) || (DAT_028bb021 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb018 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028bb018 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028bb018 != (undefined8 *)0x0;
        DAT_028bb018 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb020 == '\0') {
        DAT_028bb020 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0240dedc);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02423b68);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028bb021 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb021 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028bb018;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01f7cae7;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7cae7:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01f7bcc0 — 651 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f7bda7) */
/* WARNING: Removing unreachable block (ram,0x01f7bdb0) */
/* WARNING: Removing unreachable block (ram,0x01f7beb7) */
/* WARNING: Removing unreachable block (ram,0x01f7bec0) */

void FUN_01f7bcc0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  float fVar6;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  lVar2 = *(longlong *)(*unaff_RSI + 0x30);
  if (lVar2 == 0) {
    local_60 = 0;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    FUN_00d50b00();
    uVar1 = *(uint *)(lVar2 + 0xc);
    local_60 = lVar2;
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(local_60 + 0x10) + uVar5 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfd130();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  FUN_01f7c100();
  if (local_48 == 0) {
    bVar4 = true;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = false;
    uVar1 = *(uint *)(local_48 + 0xc);
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      FUN_00d459e0();
      FUN_00d46dc0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  lVar3 = *unaff_RSI;
  fVar6 = *(float *)(lVar3 + 0x40);
  if (*(int *)(*(longlong *)(lVar3 + 0x38) + 0xc) != *(int *)(*(longlong *)(lVar3 + 0x30) + 0xc)) {
    fVar6 = fVar6 + DAT_02394294;
  }
  *(float *)(unaff_RDI + 0x40) = fVar6;
  *(undefined4 *)(unaff_RDI + 0x44) = *(undefined4 *)(lVar3 + 0x44);
  if (!bVar4) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01f7b740 — 645 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7b740(float param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong local_40;
  char local_38;
  
  FUN_01f7b490();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = *unaff_RSI;
  lVar2 = *param_2;
  fVar3 = (*(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10)) * param_1 + *(float *)(lVar1 + 0x10)
  ;
  if ((*(float *)(local_40 + 0x10) != fVar3) || (NAN(*(float *)(local_40 + 0x10)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(local_40 + 0x10) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(local_40 + 0x10) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(local_40 + 0x10) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar4._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar4,auVar4,0xb);
    *(uint *)(local_40 + 0xc) =
         (int)(longlong)auVar4._0_4_ << 0x10 | *(uint *)(local_40 + 0xc) & 0xff00ffff;
  }
  fVar3 = (*(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14)) * param_1 + *(float *)(lVar1 + 0x14)
  ;
  if ((*(float *)(local_40 + 0x14) != fVar3) || (NAN(*(float *)(local_40 + 0x14)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(local_40 + 0x14) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(local_40 + 0x14) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(local_40 + 0x14) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar5,auVar5,0xb);
    *(uint *)(local_40 + 0xc) =
         (int)(longlong)auVar4._0_4_ << 8 | *(uint *)(local_40 + 0xc) & 0xffff00ff;
  }
  fVar3 = (*(float *)(lVar2 + 0x18) - *(float *)(lVar1 + 0x18)) * param_1 + *(float *)(lVar1 + 0x18)
  ;
  if ((*(float *)(local_40 + 0x18) != fVar3) || (NAN(*(float *)(local_40 + 0x18)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(local_40 + 0x18) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(local_40 + 0x18) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(local_40 + 0x18) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar6._4_12_ = auVar4._4_12_;
    auVar6._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar6,auVar6,0xb);
    *(uint *)(local_40 + 0xc) =
         (uint)(longlong)auVar4._0_4_ | *(uint *)(local_40 + 0xc) & 0xffffff00;
  }
  fVar3 = (*(float *)(lVar2 + 0x1c) - *(float *)(lVar1 + 0x1c)) * param_1 + *(float *)(lVar1 + 0x1c)
  ;
  if ((*(float *)(local_40 + 0x1c) != fVar3) || (NAN(*(float *)(local_40 + 0x1c)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= DAT_02390124) {
        *(float *)(local_40 + 0x1c) = fVar3;
        fVar3 = fVar3 * DAT_02394220;
      }
      else {
        *(undefined4 *)(local_40 + 0x1c) = 0x3f800000;
        fVar3 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(local_40 + 0x1c) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(_DAT_023945e0 & (uint)fVar3) | _DAT_023945f0;
    auVar7._4_12_ = auVar4._4_12_;
    auVar7._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar7,auVar7,0xb);
    *(char *)(local_40 + 0xf) = (char)(longlong)auVar4._0_4_;
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01f7cd50 — 640 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f7cee7) */
/* WARNING: Removing unreachable block (ram,0x01f7cef0) */
/* WARNING: Removing unreachable block (ram,0x01f7ce69) */
/* WARNING: Removing unreachable block (ram,0x01f7ce72) */
/* WARNING: Removing unreachable block (ram,0x01f7cf65) */
/* WARNING: Removing unreachable block (ram,0x01f7cf6e) */

void FUN_01f7cd50(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_30;
  char local_28;
  
  puVar3 = DAT_028bb028;
  if ((DAT_028bb028 == (undefined8 *)0x0) || (DAT_028bb031 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb028 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028bb028 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028bb028 != (undefined8 *)0x0;
        DAT_028bb028 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb030 == '\0') {
        DAT_028bb030 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028bb028;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01f7cfb9;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7cfb9:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01f7c3a0 — 607 bytes
// str: ""GNRadialColorGradient""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f7c4f9) */
/* WARNING: Removing unreachable block (ram,0x01f7c502) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7c3a0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  longlong local_50;
  char local_48;
  
  if ((DAT_026f0bb8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026f0b08 = FUN_001b9d20();
    _DAT_026f0af0 = "GNRadialColorGradient";
    _DAT_026f0af8 = 0x48;
    _DAT_026f0b00 = FUN_001e8f20;
    _DAT_026f0b10 = 0;
    uRam00000000026f0b18 = 0;
    _DAT_026f0b20 = 0;
    uRam00000000026f0b28 = 0;
    _DAT_026f0b30 = 0;
    uRam00000000026f0b38 = 0;
    _DAT_026f0b40 = 0;
    uRam00000000026f0b48 = 0;
    _DAT_026f0b50 = 0;
    uRam00000000026f0b58 = 0;
    _DAT_026f0b60 = 0;
    uRam00000000026f0b68 = 0;
    _DAT_026f0b70 = 0;
    uRam00000000026f0b78 = 0;
    _DAT_026f0b80 = 0;
    uRam00000000026f0b88 = 0;
    _DAT_026f0b90 = 0;
    uRam00000000026f0b98 = 0;
    _DAT_026f0ba0 = 0;
    uRam00000000026f0ba8 = 0;
    _DAT_026f0bb0 = 0;
    ___cxa_guard_release();
  }
  if (unaff_RSI != (longlong *)0x0) {
    (**(code **)(*unaff_RSI + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') {
      plVar4 = (longlong *)&stack0xffffffffffffffc0;
      goto LAB_01f7c3fc;
    }
  }
  plVar4 = &DAT_02802688;
LAB_01f7c3fc:
  lVar5 = *plVar4;
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_001b9f00();
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  else {
    *plVar4 = (longlong)&DAT_026c0290;
    (*DAT_026c02a8)();
  }
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01f7bcc0();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar5 = plVar4[6];
  if (0 < *(int *)(lVar5 + 0xc)) {
    uVar6 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + uVar6 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar7 = (**(code **)(*plVar1 + 0x368))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d233f0(uVar7,uVar6 & 0xffffffff);
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar6 = uVar6 + 1;
      lVar5 = plVar4[6];
    } while ((longlong)uVar6 < (longlong)*(int *)(lVar5 + 0xc));
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01f7db00 — 601 bytes
// ============================================================

void FUN_01f7db00(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  FUN_01e534b0();
  FUN_01f27fe0();
  FUN_01f2eb50();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_002edd50();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01d2a8f0();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    FUN_01e40eb0();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    lVar2 = lVar1;
    if (lVar1 != local_30) {
      lVar2 = local_30;
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar2 = 0;
          goto LAB_01f7dc41;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x90);
        *(longlong *)(unaff_RDI + 0x90) = local_30;
      }
      else {
        local_28 = '\0';
LAB_01f7dc41:
        *(longlong *)(unaff_RDI + 0x90) = lVar2;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = local_30;
      }
    }
    if ((local_28 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x478))();
  }
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    return;
  }
  FUN_01e40eb0();
  lVar1 = *(longlong *)(unaff_RDI + 0x98);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_01f7dd23;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_01f7dcdc;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x98);
    *(longlong *)(unaff_RDI + 0x98) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01f7dcdc:
    *(longlong *)(unaff_RDI + 0x98) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_01f7dd23:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x478))();
  return;
}




// ============================================================
// @01f81660 — 537 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f8180d) */
/* WARNING: Removing unreachable block (ram,0x01f81816) */
/* WARNING: Removing unreachable block (ram,0x01f8184b) */
/* WARNING: Removing unreachable block (ram,0x01f81854) */
/* WARNING: Removing unreachable block (ram,0x01f816b2) */
/* WARNING: Removing unreachable block (ram,0x01f816bb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f81660(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d48370();
  (**(code **)(*local_40 + 0x4f0))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3b0))();
  (**(code **)(*local_40 + 0x3a8))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))(_DAT_023b4a20);
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3f0))();
  FUN_01eab940(param_1,param_2);
  FUN_01d48390();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f7d1a0 — 519 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f7d2b9) */
/* WARNING: Removing unreachable block (ram,0x01f7d2c2) */
/* WARNING: Removing unreachable block (ram,0x01f7d337) */
/* WARNING: Removing unreachable block (ram,0x01f7d340) */

void FUN_01f7d1a0(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_38;
  char local_30;
  
  puVar3 = DAT_028bb038;
  if ((DAT_028bb038 == (undefined8 *)0x0) || (DAT_028bb041 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb038 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028bb038 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028bb038 != (undefined8 *)0x0;
        DAT_028bb038 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb040 == '\0') {
        DAT_028bb040 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      DAT_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028bb038;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01f7d38c;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7d38c:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01f7b490 — 517 bytes
// ============================================================

void FUN_01f7b490(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  bool bVar6;
  
  if ((DAT_028baff0 == (undefined8 *)0x0) || (DAT_028baff9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028baff0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026792c0;
      puVar4[5] = 0;
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028baff0 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028baff0 != (undefined8 *)0x0;
        DAT_028baff0 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028baff8 == '\0') {
        DAT_028baff8 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028baff9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028baff9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028bb000 == (undefined8 *)0x0) || (DAT_028bb009 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb000 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026792c0;
      puVar4[5] = 0;
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028bb000 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028bb000 != (undefined8 *)0x0;
        DAT_028bb000 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb008 == '\0') {
        DAT_028bb008 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028bb009 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb009 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar5 = (ulonglong)DAT_028bb010;
  DAT_028bb010 = (int)(uVar5 ^ 1);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = (longlong)(&DAT_028baff0)[(uVar5 ^ 1) * 2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



