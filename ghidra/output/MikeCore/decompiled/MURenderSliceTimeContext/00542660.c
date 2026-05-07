// Function: FUN_00542660
// Address: 00542660
// Size: 2794 bytes
// Class: MURenderSliceTimeContext


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


