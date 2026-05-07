// ===================================================================
// GNCustomAlertPanel — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (4):
//                   _titleView
//                   _infoView
//                   _otherButton
//                   _loadedStrings


// ============================================================
// 01f69100
// ============================================================
// Function: FUN_01f69100
// Address: 01f69100
// Size: 2840 bytes
// Class: GNCustomAlertPanel
// === GNCustomAlertPanel properties ===
//                   _titleView
//                   _infoView
//                   _otherButton
//                   _loadedStrings


void FUN_01f69100(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  bool bVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  float fVar27;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar24 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar25 [16];
  float fVar28;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar26 [16];
  float fVar29;
  float fVar32;
  float fVar33;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t local_c8 [16];
  float local_9c;
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int local_58;
  uint8_t local_48 [16];
  
  fVar32 = (float)((uint64_t)param_2 >> 0x20);
  fVar29 = (float)param_2;
  FUN_01e3f820();
  fVar14 = *(float *)(this_ptr + 0xf4);
  fVar13 = *(float *)(this_ptr + 0xf8);
  fVar28 = fVar29;
  fVar33 = fVar32;
  uVar15 = FUN_01e3f530();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  fVar27 = (float)((uint64_t)uVar15 >> 0x20);
  if (*(int *)(this_ptr + 0x138) == 0) {
    if (lVar1 == 0) {
      return;
    }
    uVar12 = -(uint)!NAN((float)uVar15);
    fVar14 = (float)(~uVar12 & (uint)fVar14 | (uint)(fVar14 - (float)uVar15) & uVar12);
    local_58 = -1;
    local_98 = ZEXT1216((uint8_t  [12])0x0) << 0x20;
    iVar11 = 0;
    plVar9 = (int64_t *)0x0;
    while( true ) {
      lVar7 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_58) break;
      plVar8 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      fVar13 = (float)FUN_01e3f500();
      iVar5 = FUN_01e3f4f0();
      if ((iVar5 != 2) && (*(float *)(this_ptr + 0x140) < fVar13)) {
        fVar13 = (float)(**(code **)(*plVar8 + 0x5f0))();
        if (fVar13 <= (float)local_98._0_4_) {
          if ((fVar13 == (float)local_98._0_4_) && (!NAN(fVar13) && !NAN((float)local_98._0_4_))) {
            iVar11 = iVar11 + 1;
          }
        }
        else {
          iVar11 = 1;
          local_98._0_4_ = fVar13;
        }
        if ((plVar9 != (int64_t *)0x0) && (NAN(*(float *)(this_ptr + 0x13c)))) {
          (**(code **)(*plVar8 + 0x5e0))();
        }
        if (plVar8 != plVar9) {
          plVar9 = plVar8;
        }
      }
    }
    FUN_000a9680();
    local_c8._0_4_ = 0.0;
    if ((((float)local_98._0_4_ != 0.0) || (NAN((float)local_98._0_4_))) && (iVar11 != 0)) {
      local_c8._0_4_ =
           (fVar29 - (float)(-(uint)!NAN(fVar28) & (uint)(fVar14 - fVar28) |
                            ~-(uint)!NAN(fVar28) & (uint)fVar14)) / (float)iVar11;
    }
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    if (lVar1 == 0) {
      return;
    }
    local_58 = -1;
    plVar9 = (int64_t *)0x0;
    local_48 = ZEXT816(0);
    bVar10 = false;
LAB_01f69859:
    do {
      lVar7 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_58) goto LAB_01f69ac3;
      plVar8 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      fVar14 = (float)FUN_01e3f500();
      iVar11 = FUN_01e3f4f0();
      if ((iVar11 != 2) && (*(float *)(this_ptr + 0x140) < fVar14)) {
        local_88 = (uint8_t  [8])(**(code **)(*plVar8 + 0x5c8))();
        uStack_80 = extraout_XMM0_Qb_01;
        auVar26 = _local_88;
        fVar14 = (float)(**(code **)(*plVar8 + 0x5f0))();
        local_88._4_4_ = (uint32_t)((uint64_t)local_88 >> 0x20);
        uStack_80._0_4_ = (float)extraout_XMM0_Qb_01;
        uStack_80._4_4_ = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        if ((fVar14 == (float)local_98._0_4_) && (!NAN(fVar14) && !NAN((float)local_98._0_4_))) {
          if ((float)local_c8._0_4_ + (float)local_88._0_4_ < 0.0) {
            (**(code **)(*plVar8 + 0x5d8))(g_023dccec);
            goto LAB_01f69859;
          }
          local_88._0_4_ = (float)local_88._0_4_ + (float)local_c8._0_4_;
          auVar26 = _local_88;
        }
        _local_88 = auVar26;
        uVar6 = FUN_01e3f510();
        switch(uVar6) {
        case 1:
          auVar20._4_4_ = fVar32 - local_88._4_4_;
          auVar20._12_4_ = in_XMM1_Dd - local_88._12_4_;
          auVar20._0_4_ = auVar20._4_4_;
          auVar20._8_4_ = auVar20._12_4_;
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = auVar20._4_4_ * g_0239011c;
          auVar26 = roundss(auVar21,auVar21,9);
          local_48 = insertps(local_48,auVar26,0x10);
          break;
        case 2:
          auVar22._0_4_ = fVar29 - local_88._0_4_;
          auVar22._4_4_ = fVar32 - local_88._4_4_;
          auVar22._8_4_ = in_XMM1_Dc - local_88._8_4_;
          auVar22._12_4_ = in_XMM1_Dd - local_88._12_4_;
          local_48 = blendps(local_48,auVar22,2);
        default:
          break;
        case 3:
          auVar26._4_4_ = fVar32;
          auVar26._0_4_ = fVar29;
          auVar26._8_4_ = in_XMM1_Dc;
          auVar26._12_4_ = in_XMM1_Dd;
          _local_88 = blendps(_local_88,auVar26,2);
        case 0:
          local_48 = blendps(local_48,g_0238ff00,2);
          break;
        case 4:
          local_48 = blendps(local_48,g_0238ff00,2);
          bVar10 = true;
        }
        if (plVar9 != (int64_t *)0x0) {
          if (NAN(*(float *)(this_ptr + 0x13c))) {
            uVar15 = (**(code **)(*plVar9 + 0x5e0))();
            auVar24._0_4_ = (float)uVar15 + local_48._0_4_;
            auVar24._4_4_ = (float)((uint64_t)uVar15 >> 0x20) + local_48._4_4_;
            auVar24._8_4_ = (float)extraout_XMM0_Qb_02 + local_48._8_4_;
            auVar24._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20) + local_48._12_4_;
            local_48 = blendps(auVar24,local_48,2);
          }
          else {
            local_48._0_4_ = local_48._0_4_ + *(float *)(this_ptr + 0x13c);
          }
        }
        FUN_01e3f530();
        FUN_00d05650();
        (**(code **)(*plVar8 + 0x5d8))();
        if (plVar8 != plVar9) {
          plVar9 = plVar8;
        }
        auVar23._0_4_ = (float)local_88._0_4_ + local_48._0_4_;
        auVar23._4_4_ = (float)local_88._4_4_ + local_48._4_4_;
        auVar23._8_4_ = (float)uStack_80 + local_48._8_4_;
        auVar23._12_4_ = uStack_80._4_4_ + local_48._12_4_;
        local_48 = blendps(auVar23,local_48,2);
        goto LAB_01f69859;
      }
      (**(code **)(*plVar8 + 0x5d8))(g_023dccec);
    } while( true );
  }
  if (lVar1 == 0) {
    return;
  }
  fVar14 = (float)(~-(uint)(!NAN(fVar27) && !NAN(fVar27)) & (uint)fVar13 |
                  (uint)(fVar13 - fVar27) & -(uint)(!NAN(fVar27) && !NAN(fVar27)));
  local_58 = -1;
  local_98 = ZEXT1216((uint8_t  [12])0x0) << 0x20;
  iVar11 = 0;
  plVar9 = (int64_t *)0x0;
  while( true ) {
    lVar7 = (int64_t)local_58;
    local_58 = local_58 + 1;
    if (*(int *)(lVar1 + 0xc) <= local_58) break;
    plVar8 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar7 * 8);
    fVar13 = (float)FUN_01e3f500();
    iVar5 = FUN_01e3f4f0();
    if ((iVar5 != 2) && (*(float *)(this_ptr + 0x140) < fVar13)) {
      (**(code **)(*plVar8 + 0x5f0))();
      if (extraout_XMM0_Db <= (float)local_98._0_4_) {
        if ((extraout_XMM0_Db == (float)local_98._0_4_) &&
           (!NAN(extraout_XMM0_Db) && !NAN((float)local_98._0_4_))) {
          iVar11 = iVar11 + 1;
        }
      }
      else {
        iVar11 = 1;
        local_98._0_4_ = extraout_XMM0_Db;
      }
      if ((plVar9 != (int64_t *)0x0) && (NAN(*(float *)(this_ptr + 0x13c)))) {
        (**(code **)(*plVar8 + 0x5e0))();
      }
      if (plVar8 != plVar9) {
        plVar9 = plVar8;
      }
    }
  }
  FUN_000a9680();
  local_9c = 0.0;
  if ((((float)local_98._0_4_ != 0.0) || (NAN((float)local_98._0_4_))) && (iVar11 != 0)) {
    local_9c = (fVar32 - (float)(-(uint)(!NAN(fVar33) && !NAN(fVar33)) & (uint)(fVar14 - fVar33) |
                                ~-(uint)(!NAN(fVar33) && !NAN(fVar33)) & (uint)fVar14)) /
               (float)iVar11;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar7 = 0;
    local_48 = ZEXT816(0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_c8._8_8_;
    local_c8 = auVar4 << 0x40;
    do {
      plVar9 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      fVar14 = (float)FUN_01e3f500();
      iVar11 = FUN_01e3f4f0();
      if ((iVar11 == 2) || (fVar14 <= *(float *)(this_ptr + 0x140))) {
        (**(code **)(*plVar9 + 0x5d8))(g_023dccec);
      }
      else {
        local_88 = (uint8_t  [8])(**(code **)(*plVar9 + 0x5c8))();
        uStack_80 = extraout_XMM0_Qb;
        (**(code **)(*plVar9 + 0x5f0))();
        if ((extraout_XMM0_Db_00 == (float)local_98._0_4_) &&
           (!NAN(extraout_XMM0_Db_00) && !NAN((float)local_98._0_4_))) {
          uVar6 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
          fVar14 = (float)((uint64_t)local_88 >> 0x20);
          auVar16._4_4_ = fVar14;
          auVar16._0_4_ = fVar14;
          auVar16._8_4_ = uVar6;
          auVar16._12_4_ = uVar6;
          auVar17._4_12_ = auVar16._4_12_;
          auVar17._0_4_ = fVar14 + local_9c;
          if (auVar17._0_4_ < 0.0) {
            (**(code **)(*plVar9 + 0x5d8))(g_023dccec);
            goto LAB_01f693c7;
          }
          _local_88 = insertps(_local_88,auVar17,0x10);
        }
        uVar6 = FUN_01e3f520();
        switch(uVar6) {
        case 1:
          auVar2._4_4_ = fVar32;
          auVar2._0_4_ = fVar29;
          auVar2._8_4_ = in_XMM1_Dc;
          auVar2._12_4_ = in_XMM1_Dd;
          auVar18._4_12_ = auVar2._4_12_;
          auVar18._0_4_ = (fVar29 - (float)local_88._0_4_) * g_0239011c;
          auVar26 = roundss(auVar18,auVar18,9);
          local_48 = blendps(local_48,auVar26,1);
          break;
        case 2:
          auVar19._0_4_ = fVar29 - (float)local_88._0_4_;
          auVar19._4_4_ = fVar32 - (float)local_88._4_4_;
          auVar19._8_4_ = in_XMM1_Dc - (float)uStack_80;
          auVar19._12_4_ = in_XMM1_Dd - uStack_80._4_4_;
          local_48 = blendps(local_48,auVar19,0xd);
        default:
          break;
        case 3:
          auVar3._4_4_ = fVar32;
          auVar3._0_4_ = fVar29;
          auVar3._8_4_ = in_XMM1_Dc;
          auVar3._12_4_ = in_XMM1_Dd;
          _local_88 = blendps(_local_88,auVar3,0xd);
        case 0:
          local_48 = blendps(local_48,g_0238ff00,0xd);
        }
        if ((int64_t *)local_c8._0_8_ != (int64_t *)0x0) {
          fVar14 = local_48._12_4_;
          fVar13 = local_48._4_4_;
          auVar34._4_4_ = fVar13;
          auVar34._0_4_ = fVar13;
          auVar34._8_4_ = fVar14;
          auVar34._12_4_ = fVar14;
          if (NAN(*(float *)(this_ptr + 0x13c))) {
            uVar15 = (**(code **)(*(int64_t *)local_c8._0_8_ + 0x5e0))();
            auVar31._0_4_ = fVar13 + (float)uVar15;
            auVar31._4_4_ = fVar13 + (float)((uint64_t)uVar15 >> 0x20);
            auVar31._8_4_ = fVar14 + (float)extraout_XMM0_Qb_00;
            auVar31._12_4_ = fVar14 + (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
            local_48 = insertps(local_48,auVar31,0x1c);
          }
          else {
            auVar35._4_12_ = auVar34._4_12_;
            auVar35._0_4_ = fVar13 + *(float *)(this_ptr + 0x13c);
            local_48 = insertps(local_48,auVar35,0x10);
          }
        }
        FUN_01e3f530();
        FUN_00d05650();
        (**(code **)(*plVar9 + 0x5d8))();
        plVar8 = (int64_t *)local_c8._0_8_;
        if (plVar9 != (int64_t *)local_c8._0_8_) {
          plVar8 = plVar9;
        }
        local_c8._0_8_ = plVar8;
        auVar30._0_4_ = (float)local_88._0_4_ + local_48._0_4_;
        auVar30._4_4_ = (float)local_88._4_4_ + local_48._4_4_;
        auVar30._8_4_ = (float)uStack_80 + local_48._8_4_;
        auVar30._12_4_ = uStack_80._4_4_ + local_48._12_4_;
        local_48 = blendps(local_48,auVar30,2);
      }
LAB_01f693c7:
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
  }
LAB_01f69c29:
  FUN_000a9680();
  return;
LAB_01f69ac3:
  FUN_000a9680();
  if (!bVar10) {
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0xc) < 1) {
    fVar14 = 0.0;
  }
  else {
    auVar25 = ZEXT816(0);
    lVar7 = 0;
    do {
      fVar14 = auVar25._0_4_;
      plVar9 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      FUN_01e3f820();
      auVar25._0_8_ = (**(code **)(*plVar9 + 0x5e8))();
      auVar25._8_8_ = extraout_XMM0_Qb_03;
      if ((float)auVar25._0_8_ <= fVar14) {
        auVar25._0_4_ = fVar14;
      }
      fVar14 = auVar25._0_4_;
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_000a9680();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar7 = 0;
    do {
      plVar9 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      iVar11 = FUN_01e3f510();
      if (iVar11 == 4) {
        local_98._0_8_ = (**(code **)(*plVar9 + 0x4d8))();
        local_98._8_8_ = extraout_XMM0_Qb_04;
        FUN_01e3f820();
        fVar13 = (float)(**(code **)(*plVar9 + 0x5e8))();
        uVar6 = (uint32_t)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
        fVar28 = (float)((uint64_t)local_98._0_8_ >> 0x20);
        auVar36._4_4_ = fVar28;
        auVar36._0_4_ = fVar28;
        auVar36._8_4_ = uVar6;
        auVar36._12_4_ = uVar6;
        auVar37._4_12_ = auVar36._4_12_;
        auVar37._0_4_ = fVar28 + (fVar14 - fVar13);
        auVar26 = insertps(local_98,auVar37,0x10);
        (**(code **)(*plVar9 + 0x5d8))(auVar26._0_8_);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
  }
  goto LAB_01f69c29;
}



// ============================================================
// 01f6b400
// ============================================================
// Function: FUN_01f6b400
// Address: 01f6b400
// Size: 1946 bytes
// Class: GNCustomAlertPanel
// === GNCustomAlertPanel properties ===
//                   _titleView
//                   _infoView
//                   _otherButton
//                   _loadedStrings


void FUN_01f6b400(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    local_130 = 0;
    FUN_00d50b00();
    local_130 = '\x01';
    local_138 = lVar1;
    FUN_01f6c380(param_1,&local_138);
    local_d8 = local_38;
    local_d0 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_d0 = '\x01';
    local_188 = *arg1;
    local_180 = '\0';
    FUN_00e0e2a0(param_1,&local_188);
    local_e8 = local_48;
    local_e0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_e0 = '\x01';
    FUN_01e125e0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(this_ptr + 0x80);
  if (lVar1 != 0) {
    local_120 = 0;
    FUN_00d50b00();
    local_120 = '\x01';
    local_128 = lVar1;
    FUN_01f6c380(param_1,&local_128);
    local_b8 = local_38;
    local_b0 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_b0 = '\x01';
    local_178 = *arg1;
    local_170 = '\0';
    FUN_00e0e2a0(param_1,&local_178);
    local_c8 = local_48;
    local_c0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_c0 = '\x01';
    FUN_01e125e0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x88);
  if (plVar2 != (int64_t *)0x0) {
    local_110 = 0;
    FUN_00d50b00();
    local_110 = '\x01';
    local_118 = plVar2;
    FUN_01f6c380(param_1,&local_118);
    local_98 = local_38;
    local_90 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_90 = '\x01';
    local_168 = *arg1;
    local_160 = '\0';
    FUN_00e0e2a0(param_1,&local_168);
    local_a8 = local_48;
    local_a0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  if (plVar2 != (int64_t *)0x0) {
    local_100 = 0;
    FUN_00d50b00();
    local_100 = '\x01';
    local_108 = plVar2;
    FUN_01f6c380(param_1,&local_108);
    local_78 = local_38;
    local_70 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_70 = '\x01';
    local_158 = *arg1;
    local_150 = '\0';
    FUN_00e0e2a0(param_1,&local_158);
    local_88 = local_48;
    local_80 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  if (plVar2 != (int64_t *)0x0) {
    local_f0 = 0;
    FUN_00d50b00();
    local_f0 = '\x01';
    local_f8 = plVar2;
    FUN_01f6c380(param_1,&local_f8);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    local_148 = *arg1;
    local_140 = '\0';
    FUN_00e0e2a0(param_1,&local_148);
    local_68 = local_48;
    local_60 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01f6ab40
// ============================================================
// Function: FUN_01f6ab40
// Address: 01f6ab40
// Size: 1169 bytes
// Class: GNCustomAlertPanel
// === GNCustomAlertPanel properties ===
//                   _titleView
//                   _infoView
//                   _otherButton
//                   _loadedStrings


void FUN_01f6ab40(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0xa8);
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0xa8) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    FUN_01e10550();
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x78);
    }
    else {
      local_28 = '\0';
      lVar2 = *(int64_t *)(this_ptr + 0x78);
    }
    if (lVar2 != 0) {
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
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x80) != 0) {
    FUN_01e10550();
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x80);
    }
    else {
      local_28 = '\0';
      lVar2 = *(int64_t *)(this_ptr + 0x80);
    }
    if (lVar2 != 0) {
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
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x960))();
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x88);
    }
    else {
      local_28 = '\0';
      lVar2 = *(int64_t *)(this_ptr + 0x88);
    }
    if (lVar2 != 0) {
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
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x960))();
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x90);
    }
    else {
      local_28 = '\0';
      lVar2 = *(int64_t *)(this_ptr + 0x90);
    }
    if (lVar2 != 0) {
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
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(this_ptr + 0x98) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x960))();
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x98);
    }
    else {
      local_28 = '\0';
      lVar2 = *(int64_t *)(this_ptr + 0x98);
    }
    if (lVar2 != 0) {
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
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e534b0();
  return;
}



// ============================================================
// 01f6a6d0
// ============================================================
// Function: FUN_01f6a6d0
// Address: 01f6a6d0
// Size: 1101 bytes
// Class: GNCustomAlertPanel
// String references:
//   "GNCustomAlertPanel"
//   "handlePanelOK"
//   "handlePanelCancel"
//   "handlePanelOther"
// === GNCustomAlertPanel properties ===
//                   _titleView
//                   _infoView
//                   _otherButton
//                   _loadedStrings


void FUN_01f6a6d0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028bad10 = "handlePanelOK";
      g_028bad18 = &g_027f6528;
      g_028bad20 = 0;
      g_028bad28 = &g_02800a78;
      g_028bad30 = FUN_01f6c700;
      g_028bad38 = 0x5d9;
      g_028bad40 = 0;
      ram_00000000028bad48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028bad58 = "handlePanelCancel";
      g_028bad60 = &g_027f6528;
      g_028bad68 = 0;
      g_028bad70 = &g_02800a78;
      g_028bad78 = FUN_01f6c700;
      g_028bad80 = 0x5e1;
      g_028bad88 = 0;
      ram_00000000028bad90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028bada0 = "handlePanelOther";
      g_028bada8 = &g_027f6528;
      g_028badb0 = 0;
      g_028badb8 = &g_02800a78;
      g_028badc0 = FUN_01f6c700;
      g_028badc8 = 0x5e9;
      g_028badd0 = 0;
      ram_00000000028badd8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

