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

