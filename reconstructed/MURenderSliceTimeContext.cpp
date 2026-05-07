// Reconstructed implementation of MURenderSliceTimeContext
// From MikeCore binary — reverse-engineered pseudocode

#include "MURenderSliceTimeContext.h"

// ============================================================
// @00542660 — 2794 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00542f89) */
/* WARNING: Removing unreachable block (ram,0x00542f92) */
/* WARNING: Removing unreachable block (ram,0x00542bb7) */
/* WARNING: Removing unreachable block (ram,0x00542bbf) */
/* WARNING: Removing unreachable block (ram,0x00542bc4) */
/* WARNING: Removing unreachable block (ram,0x00542be2) */
/* WARNING: Removing unreachable block (ram,0x00542a33) */
/* WARNING: Removing unreachable block (ram,0x00542a3c) */
/* WARNING: Removing unreachable block (ram,0x005429b6) */
/* WARNING: Removing unreachable block (ram,0x00542939) */
/* WARNING: Removing unreachable block (ram,0x00542942) */
/* WARNING: Removing unreachable block (ram,0x005429fb) */
/* WARNING: Removing unreachable block (ram,0x00542a04) */
/* WARNING: Removing unreachable block (ram,0x00542a65) */
/* WARNING: Removing unreachable block (ram,0x00542a6e) */
/* WARNING: Removing unreachable block (ram,0x0054287e) */
/* WARNING: Removing unreachable block (ram,0x0054288e) */
/* WARNING: Removing unreachable block (ram,0x0054303c) */
/* WARNING: Removing unreachable block (ram,0x00543045) */
/* WARNING: Removing unreachable block (ram,0x00542c4a) */
/* WARNING: Removing unreachable block (ram,0x00542c53) */
/* WARNING: Removing unreachable block (ram,0x0054311d) */
/* WARNING: Removing unreachable block (ram,0x00543126) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542660(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar23;
  longlong lVar24;
  bool bVar25;
  uint uVar26;
  float extraout_XMM0_Da;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar33;
  float extraout_XMM0_Db_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 in_XMM1_Qb;
  undefined8 uVar43;
  undefined1 auVar42 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_1b8;
  float fStack_1b4;
  float local_1a8;
  float fStack_1a4;
  undefined8 local_168;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong *local_f8;
  char local_f0;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_98;
  char local_90;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  longlong *in_stack_ffffffffffffffc0;
  char local_38;
  
  plVar23 = (longlong *)&stack0xffffffffffffffc0;
  FUN_01e40eb0();
  FUN_000a94a0();
  if (in_stack_ffffffffffffffc0 == (longlong *)0x0) {
LAB_005426b5:
    plVar23 = &DAT_02802688;
  }
  else {
    (**(code **)(*in_stack_ffffffffffffffc0 + 0x360))();
    cVar20 = FUN_00e85ea0();
    if (cVar20 == '\0') goto LAB_005426b5;
  }
  plVar2 = (longlong *)*plVar23;
  if ((char)plVar23[1] == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(plVar23 + 1) = 0;
  }
  if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar21 = FUN_01d3a5a0();
  if ((iVar21 != 1) || (iVar21 = FUN_01d3b630(), iVar21 != 1)) {
    FUN_01e459c0();
    goto LAB_00543140;
  }
  local_168 = FUN_01d3abf0();
  if ((char)unaff_RDI[0x31] == '\0') {
    local_168._4_4_ = (undefined4)((ulonglong)local_168 >> 0x20);
    local_168 = CONCAT44(local_168._4_4_,local_168._4_4_);
  }
  uVar28 = (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x4d8))();
  local_c8 = (float)param_2;
  fStack_c4 = (float)((ulonglong)param_2 >> 0x20);
  uStack_c0 = (undefined4)in_XMM1_Qb;
  uStack_bc = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar40 = param_2;
  uVar29 = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x4d8))();
  local_e8 = (float)uVar29;
  fStack_e4 = (float)((ulonglong)uVar29 >> 0x20);
  uStack_e0 = (undefined4)extraout_XMM0_Qb;
  uStack_dc = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_b8 = (float)uVar40;
  fStack_b4 = (float)((ulonglong)uVar40 >> 0x20);
  uStack_b0 = (undefined4)in_XMM1_Qb;
  uStack_ac = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar30 = (**(code **)(*unaff_RDI + 0x4d8))();
  fStack_154 = (float)((ulonglong)uVar30 >> 0x20);
  uStack_150 = (undefined4)extraout_XMM0_Qb_00;
  uStack_14c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  uVar31 = (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x528))();
  uVar32 = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x528))();
  (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x530))();
  (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x530))();
  local_88._4_4_ = extraout_XMM0_Db;
  if ((char)unaff_RDI[0x31] == '\0') {
    if ((extraout_XMM0_Db <= 0.0) ||
       (cVar20 = (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x978))(), cVar20 != '\0')) {
      local_88._4_4_ = (undefined4)((ulonglong)_DAT_023b5300 >> 0x20);
    }
    uVar41 = 0;
    uVar43 = 0;
    if (0.0 < extraout_XMM0_Db_00) {
      cVar20 = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x978))();
      goto LAB_005428d9;
    }
  }
  else {
    if ((extraout_XMM0_Db <= 0.0) ||
       (cVar20 = (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x980))(), cVar20 != '\0')) {
      local_88._4_4_ = (undefined4)((ulonglong)_DAT_023b5300 >> 0x20);
    }
    uVar41 = 0;
    uVar43 = 0;
    if (0.0 < extraout_XMM0_Db_00) {
      cVar20 = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x980))();
LAB_005428d9:
      local_78._4_4_ = extraout_XMM0_Db_00;
      if (cVar20 == '\0') goto LAB_005428e8;
    }
  }
  local_78._4_4_ = (undefined4)((ulonglong)_DAT_023b5300 >> 0x20);
LAB_005428e8:
  uVar19 = local_78._4_4_;
  uVar18 = local_88._4_4_;
  FUN_01e40eb0();
  (**(code **)(*local_f8 + 0x4a0))();
  FUN_00d50b00();
  iVar21 = FUN_00d237a0();
  FUN_00d50b20();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e40eb0();
  (**(code **)(*local_98 + 0x4a0))();
  iVar1 = *(int *)((longlong)unaff_RDI + 0xc);
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e40eb0();
  (**(code **)(*unaff_RDI + 0x4d8))();
  local_108 = (float)uVar41;
  fStack_104 = (float)((ulonglong)uVar41 >> 0x20);
  fStack_100 = (float)uVar43;
  fStack_fc = (float)((ulonglong)uVar43 >> 0x20);
  FUN_01e40eb0();
  uVar33 = (**(code **)(*unaff_RDI + 0x938))();
  FUN_01e42030();
  (**(code **)(*unaff_RDI + 0x930))();
  iVar21 = iVar21 + 2;
  local_68._0_4_ = (undefined4)uVar33;
  local_68._4_4_ = (undefined4)((ulonglong)uVar33 >> 0x20);
  fStack_60 = (float)extraout_XMM0_Qb_01;
  fStack_5c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  local_128 = (float)uVar41;
  fStack_124 = (float)((ulonglong)uVar41 >> 0x20);
  fStack_120 = (float)uVar43;
  fStack_11c = (float)((ulonglong)uVar43 >> 0x20);
  fStack_120 = fStack_60 + fStack_120;
  local_108 = local_108 - ((float)local_68._0_4_ + local_128);
  fStack_104 = fStack_104 - ((float)local_68._4_4_ + fStack_124);
  fStack_fc = fStack_fc - (fStack_5c + fStack_11c);
  local_1a8 = (float)uVar32;
  fStack_1a4 = (float)((ulonglong)uVar32 >> 0x20);
  local_1b8 = (float)uVar31;
  fStack_1b4 = (float)((ulonglong)uVar31 >> 0x20);
  fVar51 = (float)local_88._4_4_ - fStack_c4;
  fVar53 = fStack_b4 - fStack_1a4;
  fVar52 = fVar51;
  if (fVar53 <= fVar51) {
    fVar52 = fVar53;
  }
  fVar50 = fStack_b4 - (float)local_78._4_4_;
  fVar38 = fStack_1b4 - fStack_c4;
  uStack_70 = uStack_c0;
  local_78 = (undefined1  [8])param_2;
  uStack_6c = uStack_bc;
  fStack_60 = (float)uStack_b0;
  local_68 = (undefined1  [8])uVar40;
  fStack_5c = (float)uStack_ac;
  uStack_80 = uStack_e0;
  local_88 = (undefined1  [8])uVar29;
  uStack_7c = uStack_dc;
  do {
    (**(code **)(*unaff_RDI + 0x658))();
    plVar23 = (longlong *)*unaff_RSI;
    if (plVar23 == unaff_RDI) {
      if (((char)unaff_RSI[1] == '\0') && (unaff_RDI != (longlong *)0x0)) {
        FUN_00d50b00();
        goto LAB_00542c2c;
      }
      lVar24 = *unaff_RSI;
    }
    else {
      lVar24 = unaff_RSI[1];
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)unaff_RDI;
      if (((char)lVar24 != '\0') && (plVar23 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00542c2c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      lVar24 = *unaff_RSI;
    }
    if ((lVar24 == 0) || (iVar22 = FUN_01d3a5a0(), iVar22 == 6)) break;
    FUN_01d3abf0();
    bVar25 = (char)unaff_RDI[0x31] == '\0';
    fVar27 = extraout_XMM0_Da;
    if (bVar25) {
      fVar27 = extraout_XMM0_Db_01;
    }
    fVar27 = fVar27 - (float)local_168;
    if (bVar25) {
      fVar39 = fStack_c4 + fVar27;
      fVar44 = fStack_b4 - fVar27;
      if (0.0 <= fVar27) {
        if (((fStack_1a4 <= fVar44) || (fVar48 = fVar52, fVar39 <= (float)uVar18)) &&
           (fVar48 = (float)(~-(uint)(fVar44 < fStack_1a4) & (uint)fVar27 |
                            -(uint)(fVar44 < fStack_1a4) & (uint)fVar53), fStack_1a4 <= fVar44)) {
          uVar26 = -(uint)((float)uVar18 < fVar39);
          fVar48 = (float)(uVar26 & (uint)fVar51 | ~uVar26 & (uint)fVar48);
        }
      }
      else {
        fVar48 = fVar27;
        fVar27 = fVar38;
        if ((iVar21 != iVar1 && (float)uVar19 < fVar44) &&
           (fVar48 = fVar50, fVar27 = fVar50, fVar50 <= fVar38)) {
          fVar27 = fVar38;
        }
        if (fVar39 < fStack_1b4) {
          fVar48 = (float)(~-(uint)(fVar39 < fStack_1b4) & (uint)fVar38 |
                          (uint)fVar27 & -(uint)(fVar39 < fStack_1b4));
        }
      }
      auVar3._4_4_ = fStack_154;
      auVar3._0_4_ = fStack_154;
      auVar3._8_4_ = uStack_14c;
      auVar3._12_4_ = uStack_14c;
      auVar35._4_12_ = auVar3._4_12_;
      auVar35._0_4_ = fStack_154 + fVar48;
      auVar8._8_4_ = uStack_150;
      auVar8._0_8_ = uVar30;
      auVar8._12_4_ = uStack_14c;
      insertps(auVar8,auVar35,0x10);
      auVar5._4_4_ = fStack_c4;
      auVar5._0_4_ = fStack_c4;
      auVar5._8_4_ = uStack_bc;
      auVar5._12_4_ = uStack_bc;
      auVar36._4_12_ = auVar5._4_12_;
      auVar36._0_4_ = fStack_c4 + fVar48;
      auVar14._8_4_ = uStack_c0;
      auVar14._0_8_ = param_2;
      auVar14._12_4_ = uStack_bc;
      _local_78 = insertps(auVar14,auVar36,0x10);
      auVar4._4_4_ = fStack_e4;
      auVar4._0_4_ = fStack_e4;
      auVar4._8_4_ = uStack_dc;
      auVar4._12_4_ = uStack_dc;
      auVar42._4_12_ = auVar4._4_12_;
      auVar42._0_4_ = fStack_e4 + fVar48;
      auVar12._8_4_ = uStack_e0;
      auVar12._0_8_ = uVar29;
      auVar12._12_4_ = uStack_dc;
      _local_88 = insertps(auVar12,auVar42,0x10);
      if (iVar21 == iVar1) {
        if (fStack_b4 + auVar42._0_4_ < fStack_104) {
          (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x560))();
        }
        auVar6._4_4_ = fStack_104;
        auVar6._0_4_ = fStack_104;
        auVar6._8_4_ = fStack_fc;
        auVar6._12_4_ = fStack_fc;
        auVar37._4_12_ = auVar6._4_12_;
        auVar37._0_4_ = fStack_104 - auVar42._0_4_;
      }
      else {
        auVar9._4_4_ = fStack_b4;
        auVar9._0_4_ = fStack_b4;
        auVar9._8_4_ = uStack_ac;
        auVar9._12_4_ = uStack_ac;
        auVar37._4_12_ = auVar9._4_12_;
        auVar37._0_4_ = fStack_b4 - fVar48;
      }
      auVar17._8_4_ = uStack_b0;
      auVar17._0_8_ = uVar40;
      auVar17._12_4_ = uStack_ac;
      _local_68 = insertps(auVar17,auVar37,0x10);
    }
    else {
      fVar39 = local_1b8 - local_c8;
      if ((local_1b8 <= local_c8 + fVar27) && (fVar39 = fVar27, local_b8 - fVar27 < local_1a8)) {
        fVar39 = local_b8 - local_1a8;
      }
      auVar7._8_4_ = uStack_150;
      auVar7._0_8_ = uVar30;
      auVar7._12_4_ = uStack_14c;
      auVar49._4_12_ = auVar7._4_12_;
      auVar49._0_4_ = (float)uVar30 + fVar39;
      blendps(auVar49,auVar7,0xe);
      auVar13._8_4_ = uStack_c0;
      auVar13._0_8_ = param_2;
      auVar13._12_4_ = uStack_bc;
      auVar45._4_12_ = auVar13._4_12_;
      auVar45._0_4_ = local_c8 + fVar39;
      _local_78 = blendps(auVar45,auVar13,0xe);
      auVar11._8_4_ = uStack_e0;
      auVar11._0_8_ = uVar29;
      auVar11._12_4_ = uStack_dc;
      auVar46._4_12_ = auVar11._4_12_;
      auVar46._0_4_ = local_e8 + fVar39;
      _local_88 = blendps(auVar11,auVar46,1);
      if (iVar21 == iVar1) {
        if (local_b8 + auVar46._0_4_ < local_108) {
          (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x560))();
        }
        auVar10._4_4_ = fStack_104;
        auVar10._0_4_ = local_108;
        auVar10._8_4_ = fStack_100 - fStack_120;
        auVar10._12_4_ = fStack_fc;
        auVar34._4_12_ = auVar10._4_12_;
        auVar34._0_4_ = local_108 - auVar46._0_4_;
        auVar15._8_4_ = uStack_b0;
        auVar15._0_8_ = uVar40;
        auVar15._12_4_ = uStack_ac;
        _local_68 = blendps(auVar34,auVar15,0xe);
      }
      else {
        auVar16._8_4_ = uStack_b0;
        auVar16._0_8_ = uVar40;
        auVar16._12_4_ = uStack_ac;
        auVar47._4_12_ = auVar16._4_12_;
        auVar47._0_4_ = local_b8 - fVar39;
        _local_68 = blendps(auVar47,auVar16,0xe);
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x4d0))();
    (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x4d0))();
    (**(code **)(*unaff_RDI + 0x4d0))();
    (**(code **)(*plVar2 + 0xa10))();
  } while( true );
  local_118 = (float)uVar28;
  if ((NAN(local_118)) || (fStack_114 = (float)((ulonglong)uVar28 >> 0x20), NAN(fStack_114))) {
LAB_00542fd5:
    (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x9c8))();
  }
  else if (((local_c8 != (float)local_78._0_4_) || (NAN(local_c8) || NAN((float)local_78._0_4_))) ||
          (fStack_c4 != (float)local_78._4_4_)) goto LAB_00542fd5;
  if (((local_e8 != (float)local_88._0_4_) || (NAN(local_e8) || NAN((float)local_88._0_4_))) ||
     (fStack_e4 != (float)local_88._4_4_)) {
LAB_00543003:
    (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x9c8))();
  }
  else if (((local_b8 != (float)local_68._0_4_) || (NAN(local_b8) || NAN((float)local_68._0_4_))) ||
          (fStack_b4 != (float)local_68._4_4_)) goto LAB_00543003;
  FUN_01e42030();
  (**(code **)(*unaff_RDI + 0x930))();
  plVar23 = (longlong *)&stack0xffffffffffffffc0;
  FUN_01e40eb0();
  FUN_000a94a0();
  if (unaff_RDI == (longlong *)0x0) {
    plVar23 = &DAT_02802688;
    lVar24 = DAT_02802688;
    if (DAT_02802690 == '\0') goto LAB_0054310a;
LAB_0054309e:
    *(undefined1 *)(plVar23 + 1) = 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0x360))();
    cVar20 = FUN_00e85ea0();
    if (cVar20 == '\0') {
      plVar23 = &DAT_02802688;
    }
    lVar24 = *plVar23;
    if ((char)plVar23[1] != '\0') goto LAB_0054309e;
LAB_0054310a:
    if (lVar24 != 0) {
      FUN_00d50b00();
    }
  }
  if (lVar24 != 0) {
    FUN_006c5b60();
    FUN_00d50b20();
  }
LAB_00543140:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00542220 — 925 bytes
// ============================================================

void FUN_00542220(float param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_XMM1_Qb;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  
  pplVar10 = &local_38;
  FUN_01e40eb0();
  plVar1 = local_38;
  FUN_000a94a0();
  if (plVar1 == (longlong *)0x0) {
LAB_00542277:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 == '\0') goto LAB_00542277;
  }
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x4d8))();
  fStack_84 = (float)((ulonglong)param_2 >> 0x20);
  uStack_80 = (undefined4)in_XMM1_Qb;
  uStack_7c = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar14 = param_2;
  (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x4d8))();
  local_48 = (undefined1  [8])uVar14;
  uStack_40 = in_XMM1_Qb;
  local_78._0_8_ = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x4d8))();
  local_78._8_8_ = extraout_XMM0_Qb;
  auVar5 = _local_48;
  uVar15 = local_48;
  local_58._0_8_ = (**(code **)(*unaff_RDI + 0x4d8))();
  local_58._8_8_ = extraout_XMM0_Qb_00;
  uVar12 = (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x528))();
  uVar13 = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x528))();
  auVar7._8_8_ = in_XMM1_Qb;
  auVar7._0_8_ = uVar14;
  fVar16 = (float)((ulonglong)uVar14 >> 0x20);
  uVar2 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar3 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if ((char)unaff_RDI[0x31] == '\0') {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    if (param_1 < 0.0) {
      fStack_a4 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_a4 = (fVar16 + param_1) - fStack_a4;
      uVar11 = -(uint)(fStack_a4 < 0.0);
      fVar20 = (float)(~uVar11 & (uint)param_1 | (uint)(param_1 - fStack_a4) & uVar11);
      fVar21 = ((float)local_48._4_4_ + fVar20) - (float)((ulonglong)uVar13 >> 0x20);
      uVar11 = -(uint)(fVar21 < 0.0);
      param_1 = (float)(~uVar11 & (uint)fVar20 | (uint)(fVar20 - fVar21) & uVar11);
    }
    uVar4 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar20 = (float)((ulonglong)local_58._0_8_ >> 0x20);
    fVar21 = (float)((ulonglong)local_78._0_8_ >> 0x20);
    auVar17._4_4_ = fVar21;
    auVar17._0_4_ = fVar21;
    auVar17._8_4_ = uVar3;
    auVar17._12_4_ = uVar3;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = fVar21 + param_1;
    fStack_94 = (float)((ulonglong)uVar15 >> 0x20);
    fStack_94 = fStack_94 + fVar16 + param_1;
    auVar22._4_4_ = fStack_84;
    auVar22._0_4_ = fStack_84;
    auVar22._8_4_ = uStack_7c;
    auVar22._12_4_ = uStack_7c;
    if (fStack_84 < (float)local_48._4_4_ + fStack_94) {
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = fStack_84 - fStack_94;
      insertps(auVar5,auVar23,0x10);
    }
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar16 + param_1;
    auVar6._8_4_ = uVar2;
    auVar6._12_4_ = uVar2;
    insertps(auVar7,auVar6,0x10);
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar20 + param_1;
    auVar5._8_4_ = uVar4;
    auVar5._12_4_ = uVar4;
    insertps(local_58,auVar5,0x10);
    insertps(local_78,auVar18,0x10);
  }
  else {
    if (param_1 < 0.0) {
      local_a8 = (float)uVar12;
      local_a8 = ((float)uVar14 + param_1) - local_a8;
      uVar11 = -(uint)(local_a8 < 0.0);
      fVar16 = (float)(~uVar11 & (uint)param_1 | (uint)(param_1 - local_a8) & uVar11);
      fVar20 = ((float)local_48._0_4_ + fVar16) - (float)uVar13;
      uVar11 = -(uint)(fVar20 < 0.0);
      param_1 = (float)(~uVar11 & (uint)fVar16 | (uint)(fVar16 - fVar20) & uVar11);
    }
    auVar8._8_4_ = uStack_80;
    auVar8._0_8_ = param_2;
    auVar8._12_4_ = uStack_7c;
    auVar24._4_12_ = auVar7._4_12_;
    auVar24._0_4_ = (float)uVar14 + param_1;
    local_98 = (float)uVar15;
    if ((float)param_2 < (float)local_48._0_4_ + local_98 + auVar24._0_4_) {
      auVar19._4_12_ = auVar8._4_12_;
      auVar19._0_4_ = (float)param_2 - (local_98 + auVar24._0_4_);
      blendps(auVar5,auVar19,1);
    }
    blendps(auVar7,auVar24,1);
  }
  (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x4d0))();
  (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x4d0))();
  (**(code **)(*unaff_RDI + 0x4d0))();
  (**(code **)(*plVar1 + 0xa10))();
  pplVar10 = &local_38;
  FUN_01e40eb0();
  plVar1 = local_38;
  FUN_000a94a0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 != '\0') goto LAB_0054255b;
  }
  pplVar10 = (longlong **)&DAT_02802688;
LAB_0054255b:
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_006c5b60();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00543a00 — 909 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543a00(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  if (*(char *)(unaff_RSI + 0x188) == '\0') {
    if ((DAT_0280a1f8 == 0) || (lVar3 = DAT_0280a1f8, DAT_0280a201 == '\0')) {
      FUN_00e8cb50();
      lVar3 = DAT_0270ca80;
      if (DAT_0280a1f8 == 0) {
        if (DAT_0270ca80 != 0) {
          FUN_00d50b00();
        }
        FUN_01d51a40();
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_01d20ca0(_DAT_023b1900);
        lVar2 = DAT_0280a1f8;
        if (DAT_0280a1f8 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar2 = local_28;
          }
          bVar1 = DAT_0280a1f8 != 0;
          DAT_0280a1f8 = lVar2;
          if (bVar1) {
            FUN_00d50b20();
            lVar2 = local_28;
          }
        }
        if ((lVar2 != 0) && (DAT_0280a200 == '\0')) {
          DAT_0280a200 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_28;
        }
        if ((local_20 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        DAT_0280a201 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_0280a201 = '\x01';
        FUN_00e8cb70();
      }
      lVar3 = DAT_0280a1f8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x00543d72;
    }
LAB_00543a61:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    if ((DAT_0280a1e8 != 0) && (lVar3 = DAT_0280a1e8, DAT_0280a1f1 != '\0')) goto LAB_00543a61;
    FUN_00e8cb50();
    lVar3 = DAT_027ebc10;
    if (DAT_0280a1e8 == 0) {
      if (DAT_027ebc10 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_0280a1e8;
      if (DAT_0280a1e8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_0280a1e8 != 0;
        DAT_0280a1e8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_0280a1f0 == '\0')) {
        DAT_0280a1f0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_0280a1f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_0280a1f1 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = DAT_0280a1e8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x00543d72:
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_00543c44;
    }
  }
  FUN_00d50b00();
LAB_00543c44:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @0053fd80 — 810 bytes
// str: ""MURenderSliceTimeContext""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053fd80(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025eb1a0;
  FUN_005400f0();
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_0270c6e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027af0d8 = FUN_00d4fe50();
      _DAT_027af0c0 = "MURenderSliceTimeContext";
      _DAT_027af0c8 = 0x28;
      _DAT_027af0d0 = FUN_0053fcd0;
      _DAT_027af0e0 = 0;
      uRam00000000027af0e8 = 0;
      _DAT_027af0f0 = 0;
      _DAT_027af168 = 0;
      uRam00000000027af170 = 0;
      _DAT_027af178 = 0;
      DAT_027af17a = 1;
      _DAT_027af0f8 = 0;
      uRam00000000027af100 = 0;
      _DAT_027af108 = 0;
      uRam00000000027af110 = 0;
      _DAT_027af118 = 0;
      uRam00000000027af120 = 0;
      _DAT_027af128 = 0;
      uRam00000000027af130 = 0;
      _DAT_027af138 = 0;
      uRam00000000027af140 = 0;
      _DAT_027af148 = 0;
      uRam00000000027af150 = 0;
      _DAT_027af158 = 0;
      uRam00000000027af160 = 0;
      DAT_027af183 = 0;
      _DAT_027af17b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027af17b == '\0') {
    FUN_00540420();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_0270c6e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027af0d8 = FUN_00d4fe50();
      _DAT_027af0c0 = "MURenderSliceTimeContext";
      _DAT_027af0c8 = 0x28;
      _DAT_027af0d0 = FUN_0053fcd0;
      _DAT_027af0e0 = 0;
      uRam00000000027af0e8 = 0;
      _DAT_027af0f0 = 0;
      _DAT_027af168 = 0;
      uRam00000000027af170 = 0;
      _DAT_027af178 = 0;
      DAT_027af17a = 1;
      _DAT_027af0f8 = 0;
      uRam00000000027af100 = 0;
      _DAT_027af108 = 0;
      uRam00000000027af110 = 0;
      _DAT_027af118 = 0;
      uRam00000000027af120 = 0;
      _DAT_027af128 = 0;
      uRam00000000027af130 = 0;
      _DAT_027af138 = 0;
      uRam00000000027af140 = 0;
      _DAT_027af148 = 0;
      uRam00000000027af150 = 0;
      _DAT_027af158 = 0;
      uRam00000000027af160 = 0;
      DAT_027af183 = 0;
      _DAT_027af17b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027af17b == '\0') {
    FUN_005405b0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_0270c6e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027af0d8 = FUN_00d4fe50();
      _DAT_027af0c0 = "MURenderSliceTimeContext";
      _DAT_027af0c8 = 0x28;
      _DAT_027af0d0 = FUN_0053fcd0;
      _DAT_027af0e0 = 0;
      uRam00000000027af0e8 = 0;
      _DAT_027af0f0 = 0;
      _DAT_027af168 = 0;
      uRam00000000027af170 = 0;
      _DAT_027af178 = 0;
      DAT_027af17a = 1;
      _DAT_027af0f8 = 0;
      uRam00000000027af100 = 0;
      _DAT_027af108 = 0;
      uRam00000000027af110 = 0;
      _DAT_027af118 = 0;
      uRam00000000027af120 = 0;
      _DAT_027af128 = 0;
      uRam00000000027af130 = 0;
      _DAT_027af138 = 0;
      uRam00000000027af140 = 0;
      _DAT_027af148 = 0;
      uRam00000000027af150 = 0;
      _DAT_027af158 = 0;
      uRam00000000027af160 = 0;
      DAT_027af183 = 0;
      _DAT_027af17b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027af17b == '\0') {
    FUN_00540740();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00543570 — 616 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543570(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar10;
  float fVar11;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined4)param_2;
  cVar4 = (**(code **)(*unaff_RDI + 0x988))();
  if (cVar4 != '\0') {
    local_98._0_8_ = FUN_01e3f820();
    local_98._8_8_ = extraout_XMM0_Qb;
    local_88._4_4_ = uVar9;
    local_88._0_4_ = uVar8;
    local_88._8_4_ = in_XMM1_Dc;
    local_88._12_4_ = in_XMM1_Dd;
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_58 + 0x470))();
    local_68 = local_38;
    local_60 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_60 = '\x01';
    FUN_01d488d0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    fVar11 = *(float *)(unaff_RDI + 0x35);
    local_b8 = local_98;
    uVar5 = *(byte *)(unaff_RDI + 0x31) ^ 1;
    fVar10 = *(float *)(local_b8 + (ulonglong)(uVar5 & 3) * 4) + fVar11;
    auVar7._0_4_ = -(uint)(uVar5 == _DAT_0238fcc0);
    auVar7._4_4_ = -(uint)(uVar5 == _UNK_0238fcc4);
    auVar7._8_4_ = -(uint)(uVar5 == _UNK_0238fcc8);
    auVar7._12_4_ = -(uint)(uVar5 == _UNK_0238fccc);
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar10;
    auVar1._8_4_ = fVar10;
    auVar1._12_4_ = fVar10;
    local_98 = blendvps(local_98,auVar1,auVar7);
    local_a8 = local_88;
    fVar11 = *(float *)(local_a8 + (ulonglong)(uVar5 & 3) * 4) - (fVar11 + fVar11);
    auVar2._4_4_ = fVar11;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar11;
    local_88 = blendvps(local_88,auVar2,auVar7);
    uVar6 = (**(code **)(*unaff_RDI + 0x640))();
    plVar3 = local_58;
    local_78 = DAT_026fe4b8;
    if (DAT_026fe4b8 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = '\x01';
    (**(code **)(*plVar3 + 0x3b0))(uVar6,&local_78);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_01d488d0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
  }
  return;
}




// ============================================================
// @00540740 — 560 bytes
// str: ""_type""
// str: ""MURenderSliceTimeContext""
// str: ""MUTimeContextCreationType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00540740(void)

{
  int iVar1;
  
  if (DAT_0270c7d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270c7c0 = 0x100000000;
      _DAT_0270c7c8 = 2;
      DAT_0270c7cc = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270c808 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270c7d8 = "MUTimeContextCreationType";
      _DAT_0270c7e0 = 3;
      DAT_0270c7e4 = DAT_0270c7cc;
      _DAT_0270c7e8 = &DAT_0270c7c0;
      _DAT_0270c7f0 = &DAT_0270c7a0;
      _DAT_0270c7f8 = 0;
      uRam000000000270c800 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0270c790 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270c6e0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027af0d8 = FUN_00d4fe50();
          _DAT_027af0c0 = "MURenderSliceTimeContext";
          _DAT_027af0c8 = 0x28;
          _DAT_027af0d0 = FUN_0053fcd0;
          _DAT_027af0e0 = 0;
          uRam00000000027af0e8 = 0;
          _DAT_027af0f0 = 0;
          _DAT_027af168 = 0;
          uRam00000000027af170 = 0;
          _DAT_027af178 = 0;
          DAT_027af17a = 1;
          _DAT_027af0f8 = 0;
          uRam00000000027af100 = 0;
          _DAT_027af108 = 0;
          uRam00000000027af110 = 0;
          _DAT_027af118 = 0;
          uRam00000000027af120 = 0;
          _DAT_027af128 = 0;
          uRam00000000027af130 = 0;
          _DAT_027af138 = 0;
          uRam00000000027af140 = 0;
          _DAT_027af148 = 0;
          uRam00000000027af150 = 0;
          _DAT_027af158 = 0;
          uRam00000000027af160 = 0;
          DAT_027af183 = 0;
          _DAT_027af17b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0270c750 = "_type";
      _DAT_0270c758 = &DAT_027af0c0;
      _DAT_0270c760 = 0;
      _DAT_0270c768 = 0x6500;
      _DAT_0270c770 = "MUTimeContextCreationType";
      _DAT_0270c778 = &DAT_0270c7d8;
      _DAT_0270c780 = 0;
      uRam000000000270c788 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0270c750;
}



