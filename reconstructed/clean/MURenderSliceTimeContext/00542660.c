// Function: FUN_00542660
// Address: 00542660
// Size: 2794 bytes
// Class: MURenderSliceTimeContext
// === MURenderSliceTimeContext properties ===
//   MUTimeContextCreationType _type


void FUN_00542660(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint32_t uVar18;
  uint32_t uVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar23;
  int64_t lVar24;
  bool bVar25;
  uint uVar26;
  float extraout_XMM0_Da;
  float fVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint64_t uVar33;
  float extraout_XMM0_Db_01;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  float fVar38;
  float fVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t in_XMM1_Qb;
  uint64_t uVar43;
  uint8_t auVar42 [16];
  float fVar44;
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  float fVar48;
  uint8_t auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_1b8;
  float fStack_1b4;
  float local_1a8;
  float fStack_1a4;
  uint64_t local_168;
  float fStack_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
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
  int64_t *local_f8;
  char local_f0;
  float local_e8;
  float fStack_e4;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  float local_c8;
  float fStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  float local_b8;
  float fStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  int64_t *local_98;
  char local_90;
  uint8_t local_88 [8];
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint8_t local_78 [8];
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint8_t local_68 [8];
  float fStack_60;
  float fStack_5c;
  int64_t *in_stack_ffffffffffffffc0;
  char local_38;
  
  plVar23 = (int64_t *)&stack0xffffffffffffffc0;
  FUN_01e40eb0();
  FUN_000a94a0();
  if (in_stack_ffffffffffffffc0 == (int64_t *)0x0) {
LAB_005426b5:
    plVar23 = &g_02802688;
  }
  else {
    (**(code **)(*in_stack_ffffffffffffffc0 + 0x360))();
    cVar20 = FUN_00e85ea0();
    if (cVar20 == '\0') goto LAB_005426b5;
  }
  plVar2 = (int64_t *)*plVar23;
  if ((char)plVar23[1] == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(plVar23 + 1) = 0;
  }
  if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar21 = FUN_01d3a5a0();
  if ((iVar21 != 1) || (iVar21 = FUN_01d3b630(), iVar21 != 1)) {
    FUN_01e459c0();
    goto LAB_00543140;
  }
  local_168 = FUN_01d3abf0();
  if ((char)this_ptr[0x31] == '\0') {
    local_168._4_4_ = (uint32_t)((uint64_t)local_168 >> 0x20);
    local_168 = CONCAT44(local_168._4_4_,local_168._4_4_);
  }
  uVar28 = (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d8))();
  local_c8 = (float)param_2;
  fStack_c4 = (float)((uint64_t)param_2 >> 0x20);
  uStack_c0 = (uint32_t)in_XMM1_Qb;
  uStack_bc = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  uVar40 = param_2;
  uVar29 = (**(code **)(*(int64_t *)this_ptr[0x33] + 0x4d8))();
  local_e8 = (float)uVar29;
  fStack_e4 = (float)((uint64_t)uVar29 >> 0x20);
  uStack_e0 = (uint32_t)extraout_XMM0_Qb;
  uStack_dc = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  local_b8 = (float)uVar40;
  fStack_b4 = (float)((uint64_t)uVar40 >> 0x20);
  uStack_b0 = (uint32_t)in_XMM1_Qb;
  uStack_ac = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  uVar30 = (**(code **)(*this_ptr + 0x4d8))();
  fStack_154 = (float)((uint64_t)uVar30 >> 0x20);
  uStack_150 = (uint32_t)extraout_XMM0_Qb_00;
  uStack_14c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  uVar31 = (**(code **)(*(int64_t *)this_ptr[0x32] + 0x528))();
  uVar32 = (**(code **)(*(int64_t *)this_ptr[0x33] + 0x528))();
  (**(code **)(*(int64_t *)this_ptr[0x32] + 0x530))();
  (**(code **)(*(int64_t *)this_ptr[0x33] + 0x530))();
  local_88._4_4_ = extraout_XMM0_Db;
  if ((char)this_ptr[0x31] == '\0') {
    if ((extraout_XMM0_Db <= 0.0) ||
       (cVar20 = (**(code **)(*(int64_t *)this_ptr[0x32] + 0x978))(), cVar20 != '\0')) {
      local_88._4_4_ = (uint32_t)((uint64_t)g_023b5300 >> 0x20);
    }
    uVar41 = 0;
    uVar43 = 0;
    if (0.0 < extraout_XMM0_Db_00) {
      cVar20 = (**(code **)(*(int64_t *)this_ptr[0x33] + 0x978))();
      goto LAB_005428d9;
    }
  }
  else {
    if ((extraout_XMM0_Db <= 0.0) ||
       (cVar20 = (**(code **)(*(int64_t *)this_ptr[0x32] + 0x980))(), cVar20 != '\0')) {
      local_88._4_4_ = (uint32_t)((uint64_t)g_023b5300 >> 0x20);
    }
    uVar41 = 0;
    uVar43 = 0;
    if (0.0 < extraout_XMM0_Db_00) {
      cVar20 = (**(code **)(*(int64_t *)this_ptr[0x33] + 0x980))();
LAB_005428d9:
      local_78._4_4_ = extraout_XMM0_Db_00;
      if (cVar20 == '\0') goto LAB_005428e8;
    }
  }
  local_78._4_4_ = (uint32_t)((uint64_t)g_023b5300 >> 0x20);
LAB_005428e8:
  uVar19 = local_78._4_4_;
  uVar18 = local_88._4_4_;
  FUN_01e40eb0();
  (**(code **)(*local_f8 + 0x4a0))();
  FUN_00d50b00();
  iVar21 = FUN_00d237a0();
  FUN_00d50b20();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e40eb0();
  (**(code **)(*local_98 + 0x4a0))();
  iVar1 = *(int *)((int64_t)this_ptr + 0xc);
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e40eb0();
  (**(code **)(*this_ptr + 0x4d8))();
  local_108 = (float)uVar41;
  fStack_104 = (float)((uint64_t)uVar41 >> 0x20);
  fStack_100 = (float)uVar43;
  fStack_fc = (float)((uint64_t)uVar43 >> 0x20);
  FUN_01e40eb0();
  uVar33 = (**(code **)(*this_ptr + 0x938))();
  FUN_01e42030();
  (**(code **)(*this_ptr + 0x930))();
  iVar21 = iVar21 + 2;
  local_68._0_4_ = (uint32_t)uVar33;
  local_68._4_4_ = (uint32_t)((uint64_t)uVar33 >> 0x20);
  fStack_60 = (float)extraout_XMM0_Qb_01;
  fStack_5c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  local_128 = (float)uVar41;
  fStack_124 = (float)((uint64_t)uVar41 >> 0x20);
  fStack_120 = (float)uVar43;
  fStack_11c = (float)((uint64_t)uVar43 >> 0x20);
  fStack_120 = fStack_60 + fStack_120;
  local_108 = local_108 - ((float)local_68._0_4_ + local_128);
  fStack_104 = fStack_104 - ((float)local_68._4_4_ + fStack_124);
  fStack_fc = fStack_fc - (fStack_5c + fStack_11c);
  local_1a8 = (float)uVar32;
  fStack_1a4 = (float)((uint64_t)uVar32 >> 0x20);
  local_1b8 = (float)uVar31;
  fStack_1b4 = (float)((uint64_t)uVar31 >> 0x20);
  fVar51 = (float)local_88._4_4_ - fStack_c4;
  fVar53 = fStack_b4 - fStack_1a4;
  fVar52 = fVar51;
  if (fVar53 <= fVar51) {
    fVar52 = fVar53;
  }
  fVar50 = fStack_b4 - (float)local_78._4_4_;
  fVar38 = fStack_1b4 - fStack_c4;
  uStack_70 = uStack_c0;
  local_78 = (uint8_t  [8])param_2;
  uStack_6c = uStack_bc;
  fStack_60 = (float)uStack_b0;
  local_68 = (uint8_t  [8])uVar40;
  fStack_5c = (float)uStack_ac;
  uStack_80 = uStack_e0;
  local_88 = (uint8_t  [8])uVar29;
  uStack_7c = uStack_dc;
  do {
    (**(code **)(*this_ptr + 0x658))();
    plVar23 = (int64_t *)*arg1;
    if (plVar23 == this_ptr) {
      if (((char)arg1[1] == '\0') && (this_ptr != (int64_t *)0x0)) {
        FUN_00d50b00();
        goto LAB_00542c2c;
      }
      lVar24 = *arg1;
    }
    else {
      lVar24 = arg1[1];
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)this_ptr;
      if (((char)lVar24 != '\0') && (plVar23 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00542c2c:
      *(void*)(arg1 + 1) = 1;
      lVar24 = *arg1;
    }
    if ((lVar24 == 0) || (iVar22 = FUN_01d3a5a0(), iVar22 == 6)) break;
    FUN_01d3abf0();
    bVar25 = (char)this_ptr[0x31] == '\0';
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
          (**(code **)(*(int64_t *)this_ptr[0x33] + 0x560))();
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
          (**(code **)(*(int64_t *)this_ptr[0x33] + 0x560))();
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
    (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d0))();
    (**(code **)(*(int64_t *)this_ptr[0x33] + 0x4d0))();
    (**(code **)(*this_ptr + 0x4d0))();
    (**(code **)(*plVar2 + 0xa10))();
  } while( true );
  local_118 = (float)uVar28;
  if ((NAN(local_118)) || (fStack_114 = (float)((uint64_t)uVar28 >> 0x20), NAN(fStack_114))) {
LAB_00542fd5:
    (**(code **)(*(int64_t *)this_ptr[0x32] + 0x9c8))();
  }
  else if (((local_c8 != (float)local_78._0_4_) || (NAN(local_c8) || NAN((float)local_78._0_4_))) ||
          (fStack_c4 != (float)local_78._4_4_)) goto LAB_00542fd5;
  if (((local_e8 != (float)local_88._0_4_) || (NAN(local_e8) || NAN((float)local_88._0_4_))) ||
     (fStack_e4 != (float)local_88._4_4_)) {
LAB_00543003:
    (**(code **)(*(int64_t *)this_ptr[0x33] + 0x9c8))();
  }
  else if (((local_b8 != (float)local_68._0_4_) || (NAN(local_b8) || NAN((float)local_68._0_4_))) ||
          (fStack_b4 != (float)local_68._4_4_)) goto LAB_00543003;
  FUN_01e42030();
  (**(code **)(*this_ptr + 0x930))();
  plVar23 = (int64_t *)&stack0xffffffffffffffc0;
  FUN_01e40eb0();
  FUN_000a94a0();
  if (this_ptr == (int64_t *)0x0) {
    plVar23 = &g_02802688;
    lVar24 = g_02802688;
    if (g_02802690 == '\0') goto LAB_0054310a;
LAB_0054309e:
    *(void*)(plVar23 + 1) = 0;
  }
  else {
    (**(code **)(*this_ptr + 0x360))();
    cVar20 = FUN_00e85ea0();
    if (cVar20 == '\0') {
      plVar23 = &g_02802688;
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
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

