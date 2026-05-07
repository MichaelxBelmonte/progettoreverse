// Function: FUN_01f68250
// Address: 01f68250
// Size: 3384 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01f68250(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  int iVar12;
  int64_t lVar13;
  int64_t this_ptr;
  int64_t *plVar14;
  bool bVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t uVar22;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint32_t in_XMM0_Dc;
  float fVar23;
  uint32_t in_XMM0_Dd;
  uint64_t extraout_XMM0_Qb;
  float fVar24;
  uint32_t extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t extraout_XMM0_Dd_00;
  uint64_t extraout_XMM0_Qb_01;
  float fVar25;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint32_t local_128;
  float local_f8;
  float fStack_f4;
  uint32_t local_c8;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint8_t local_a8 [16];
  int local_78;
  uint8_t local_68 [8];
  uint uStack_60;
  uint uStack_5c;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  float local_44;
  uint64_t local_40;
  float local_34;
  
  fVar31 = (float)((uint64_t)param_1 >> 0x20);
  fVar30 = (float)param_1;
  *(void*)(this_ptr + 0x140) = 0;
  if ((fVar30 <= 0.0) || (fVar31 <= 0.0)) {
    *(void*)(this_ptr + 0x140) = 0x3f800000;
    return 0;
  }
  if (*(int *)(this_ptr + 0x138) == 0) {
    local_f8 = 0.0;
    fStack_f4 = 0.0;
    local_128 = 0;
    do {
      local_40 = 0;
      lVar1 = *(int64_t *)(this_ptr + 0x38);
      if (lVar1 == 0) {
        if (g_0239424c <= fVar30) goto LAB_01f68fae;
        local_128 = *(void*)(this_ptr + 0x140);
        local_44 = g_02390124;
LAB_01f68f31:
        fVar31 = (float)local_40;
        if (((local_f8 == fVar31) &&
            ((!NAN(local_f8) && !NAN(fVar31) &&
             (fVar32 = (float)((uint64_t)local_40 >> 0x20), fStack_f4 == fVar32)))) &&
           (((float)g_023dcce4 != fVar31 ||
            ((NAN((float)g_023dcce4) || NAN(fVar31) ||
             ((float)((uint64_t)g_023dcce4 >> 0x20) != fVar32)))))) goto LAB_01f68f7e;
      }
      else {
        local_78 = -1;
        local_34 = 0.0;
        local_a8 = ZEXT416(0);
        _local_68 = ZEXT816(0);
        fVar31 = 0.0;
        local_44 = g_02390124;
        bVar15 = false;
        uStack_b0._0_4_ = (float)in_XMM0_Dc;
        local_b8 = (uint8_t  [8])param_1;
        uStack_b0._4_4_ = (float)in_XMM0_Dd;
        iVar16 = 0;
        plVar14 = (int64_t *)0x0;
        while( true ) {
          lVar13 = (int64_t)local_78;
          local_78 = local_78 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_78) break;
          plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar13 * 8);
          fVar32 = (float)FUN_01e3f500();
          iVar12 = FUN_01e3f4f0();
          if ((iVar12 != 2) && (*(float *)(this_ptr + 0x140) < fVar32)) {
            iVar12 = FUN_01e3f520();
            if (iVar12 == 3) {
              bVar15 = true;
            }
            else {
              (**(code **)(*plVar2 + 0x5c0))();
              uVar22 = (**(code **)(*plVar2 + 0x5c8))();
              fVar17 = (float)((uint64_t)uVar22 >> 0x20);
              fVar25 = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
              fVar33 = fVar17;
              if (fVar17 <= fVar31) {
                fVar33 = fVar31;
              }
              fVar20 = fVar33;
              if (NAN(fVar17)) {
                fVar20 = fVar31;
              }
              fVar31 = fVar20;
              iVar16 = iVar16 + 1;
              fVar21 = (float)uVar22;
              fVar23 = (float)extraout_XMM0_Qb_01;
              fVar20 = fVar21 + (float)local_68._0_4_;
              if (NAN(fVar21)) {
                fVar20 = local_34;
              }
              fVar24 = (float)local_b8._0_4_;
              fVar18 = (float)local_b8._4_4_;
              fVar19 = (float)uStack_b0;
              fVar34 = uStack_b0._4_4_;
              if (!NAN(fVar21)) {
                fVar24 = (float)local_b8._0_4_ - fVar21;
                fVar18 = (float)local_b8._4_4_ - fVar17;
                fVar19 = (float)uStack_b0 - fVar23;
                fVar34 = uStack_b0._4_4_ - fVar25;
              }
              auVar28._0_4_ = ~-(uint)!NAN(fVar17) & local_a8._0_4_;
              auVar28._4_4_ = ~(uint)fVar17 & local_a8._4_4_;
              auVar28._8_4_ = ~(uint)fVar25 & local_a8._8_4_;
              auVar28._12_4_ = ~(uint)fVar25 & local_a8._12_4_;
              auVar6._4_4_ = fVar17;
              auVar6._0_4_ = (uint)fVar33 & -(uint)!NAN(fVar17);
              auVar6._8_4_ = fVar25;
              auVar6._12_4_ = fVar25;
              local_a8 = auVar28 | auVar6;
              local_68._0_4_ =
                   ~-(uint)(!NAN(fVar21) && !NAN(fVar21)) & local_68._0_4_ |
                   (uint)(fVar21 + (float)local_68._0_4_) & -(uint)(!NAN(fVar21) && !NAN(fVar21));
              if (plVar14 == (int64_t *)0x0) {
                local_68._4_4_ = ~(uint)fVar17 & local_68._4_4_ | (uint)fVar17;
                uStack_60 = ~(uint)fVar23 & uStack_60 | (uint)fVar23;
                uStack_5c = ~(uint)fVar25 & uStack_5c | (uint)fVar25;
              }
              else if (NAN(*(float *)(this_ptr + 0x13c))) {
                uVar22 = (**(code **)(*plVar2 + 0x5e0))();
                fVar20 = (float)uVar22 + (float)local_68._0_4_;
                uStack_54 = (uint32_t)((uint64_t)uVar22 >> 0x20);
                uStack_50 = (uint32_t)extraout_XMM0_Qb_02;
                uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
                local_68._4_4_ = uStack_54;
                local_68._0_4_ = fVar20;
                uStack_60 = uStack_50;
                uStack_5c = uStack_4c;
              }
              else {
                fVar20 = *(float *)(this_ptr + 0x13c) + (float)local_68._0_4_;
                _local_68 = ZEXT416((uint)fVar20);
              }
              if (local_44 <= fVar32) {
                fVar32 = local_44;
              }
              auVar10._4_4_ = fVar18;
              auVar10._0_4_ = fVar24;
              auVar10._8_4_ = fVar19;
              auVar10._12_4_ = fVar34;
              _local_b8 = blendps(_local_b8,auVar10,0xd);
              local_44 = fVar32;
              local_34 = fVar20;
              if (plVar2 != plVar14) {
                plVar14 = plVar2;
              }
            }
          }
        }
        local_40 = CONCAT44(local_a8._0_4_,local_34);
        FUN_000a9680();
        if ((bVar15) && (lVar1 = *(int64_t *)(this_ptr + 0x38), lVar1 != 0)) {
          local_78 = -1;
          local_a8 = ZEXT416((uint)local_a8._0_4_);
          while( true ) {
            lVar13 = (int64_t)local_78;
            local_78 = local_78 + 1;
            if (*(int *)(lVar1 + 0xc) <= local_78) break;
            plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar13 * 8);
            fVar32 = (float)FUN_01e3f500();
            iVar12 = FUN_01e3f4f0();
            if (((iVar12 != 2) && (*(float *)(this_ptr + 0x140) < fVar32)) &&
               (iVar12 = FUN_01e3f520(), iVar12 == 3)) {
              (**(code **)(*plVar2 + 0x5c0))();
              uVar22 = (**(code **)(*plVar2 + 0x5c8))();
              fVar17 = (float)((uint64_t)uVar22 >> 0x20);
              fVar25 = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
              fVar33 = fVar17;
              if (fVar17 <= fVar31) {
                fVar33 = fVar31;
              }
              fVar20 = fVar33;
              if (NAN(fVar17)) {
                fVar20 = fVar31;
              }
              iVar16 = iVar16 + 1;
              fVar31 = (float)uVar22;
              fVar23 = (float)extraout_XMM0_Qb_03;
              fVar21 = fVar31 + (float)local_68._0_4_;
              if (NAN(fVar31)) {
                fVar21 = local_34;
              }
              fVar24 = (float)local_b8._0_4_;
              fVar18 = (float)local_b8._4_4_;
              fVar19 = (float)uStack_b0;
              fVar34 = uStack_b0._4_4_;
              if (!NAN(fVar31)) {
                fVar24 = (float)local_b8._0_4_ - fVar31;
                fVar18 = (float)local_b8._4_4_ - fVar17;
                fVar19 = (float)uStack_b0 - fVar23;
                fVar34 = uStack_b0._4_4_ - fVar25;
              }
              auVar29._0_4_ = ~-(uint)!NAN(fVar17) & local_a8._0_4_;
              auVar29._4_4_ = ~(uint)fVar17 & local_a8._4_4_;
              auVar29._8_4_ = ~(uint)fVar25 & local_a8._8_4_;
              auVar29._12_4_ = ~(uint)fVar25 & local_a8._12_4_;
              auVar7._4_4_ = fVar17;
              auVar7._0_4_ = (uint)fVar33 & -(uint)!NAN(fVar17);
              auVar7._8_4_ = fVar25;
              auVar7._12_4_ = fVar25;
              local_a8 = auVar29 | auVar7;
              local_68._0_4_ =
                   ~-(uint)(!NAN(fVar31) && !NAN(fVar31)) & local_68._0_4_ |
                   (uint)(fVar31 + (float)local_68._0_4_) & -(uint)(!NAN(fVar31) && !NAN(fVar31));
              if (plVar14 == (int64_t *)0x0) {
                local_68._4_4_ = ~(uint)fVar17 & local_68._4_4_ | (uint)fVar17;
                uStack_60 = ~(uint)fVar23 & uStack_60 | (uint)fVar23;
                uStack_5c = ~(uint)fVar25 & uStack_5c | (uint)fVar25;
              }
              else if (NAN(*(float *)(this_ptr + 0x13c))) {
                uVar22 = (**(code **)(*plVar2 + 0x5e0))();
                fVar21 = (float)uVar22 + (float)local_68._0_4_;
                uStack_54 = (uint32_t)((uint64_t)uVar22 >> 0x20);
                uStack_50 = (uint32_t)extraout_XMM0_Qb_04;
                uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
                local_68._4_4_ = uStack_54;
                local_68._0_4_ = fVar21;
                uStack_60 = uStack_50;
                uStack_5c = uStack_4c;
              }
              else {
                fVar21 = *(float *)(this_ptr + 0x13c) + (float)local_68._0_4_;
                _local_68 = ZEXT416((uint)fVar21);
              }
              if (local_44 <= fVar32) {
                fVar32 = local_44;
              }
              auVar11._4_4_ = fVar18;
              auVar11._0_4_ = fVar24;
              auVar11._8_4_ = fVar19;
              auVar11._12_4_ = fVar34;
              _local_b8 = blendps(_local_b8,auVar11,0xd);
              fVar31 = fVar20;
              local_44 = fVar32;
              local_34 = fVar21;
              if (plVar2 != plVar14) {
                plVar14 = plVar2;
              }
            }
          }
          local_40 = CONCAT44(local_a8._0_4_,local_34);
          FUN_000a9680();
        }
        if ((float)local_68._0_4_ <= fVar30) {
          if (iVar16 != 0) {
            return local_40;
          }
LAB_01f68fae:
          *(void*)(this_ptr + 0x140) = local_128;
          return CONCAT44(fStack_f4,local_f8);
        }
        local_128 = *(void*)(this_ptr + 0x140);
        if ((local_44 == g_02390124) && (!NAN(local_44) && !NAN(g_02390124))) goto LAB_01f68f31;
      }
      *(float *)(this_ptr + 0x140) = local_44;
      local_f8 = (float)local_40;
      fStack_f4 = (float)((uint64_t)local_40 >> 0x20);
    } while( true );
  }
  fVar30 = 0.0;
  fVar32 = 0.0;
  local_c8 = 0;
  do {
    uStack_b0._4_4_ = (float)in_XMM0_Dd;
    uStack_b0._0_4_ = (float)in_XMM0_Dc;
    local_40 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    if (lVar1 == 0) {
      if (g_0239424c <= fVar31) goto LAB_01f68f93;
      local_c8 = *(void*)(this_ptr + 0x140);
      local_44 = g_02390124;
LAB_01f688b1:
      bVar15 = NAN(fVar30);
      bVar3 = fVar30 == (float)local_40;
      fVar30 = (float)local_40;
      if (((bVar3) && ((!bVar15 && !NAN((float)local_40) && (fVar32 == local_40._4_4_)))) &&
         (((float)g_023dcce4 != (float)local_40 ||
          ((NAN((float)g_023dcce4) || NAN((float)local_40) ||
           ((float)((uint64_t)g_023dcce4 >> 0x20) != local_40._4_4_)))))) {
LAB_01f68f7e:
        uVar22 = g_023dcce4;
        *(void*)(this_ptr + 0x140) = 0;
        return uVar22;
      }
    }
    else {
      local_78 = -1;
      local_a8 = ZEXT416(0);
      local_34 = 0.0;
      _local_68 = ZEXT416(0);
      fVar33 = 0.0;
      local_44 = g_02390124;
      local_b8 = (uint8_t  [8])param_1;
      bVar15 = false;
      iVar16 = 0;
      plVar14 = (int64_t *)0x0;
      while( true ) {
        lVar13 = (int64_t)local_78;
        local_78 = local_78 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_78) break;
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar13 * 8);
        fVar17 = (float)FUN_01e3f500();
        iVar12 = FUN_01e3f4f0();
        if ((iVar12 != 2) && (*(float *)(this_ptr + 0x140) < fVar17)) {
          iVar12 = FUN_01e3f510();
          if (iVar12 == 3) {
            bVar15 = true;
          }
          else {
            (**(code **)(*plVar2 + 0x5c0))();
            uVar22 = (**(code **)(*plVar2 + 0x5c8))();
            fVar20 = (float)uVar22;
            fVar21 = (float)((uint64_t)uVar22 >> 0x20);
            fVar23 = (float)extraout_XMM0_Qb;
            fVar24 = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
            fVar25 = fVar20;
            if (fVar20 <= fVar33) {
              fVar25 = fVar33;
            }
            fVar18 = fVar25;
            if (NAN(fVar20)) {
              fVar18 = fVar33;
            }
            fVar33 = fVar18;
            iVar16 = iVar16 + 1;
            fVar18 = fVar21 + (float)local_68._0_4_;
            if (NAN(fVar21)) {
              fVar18 = local_34;
            }
            fVar19 = (float)local_b8._0_4_;
            fVar34 = (float)local_b8._4_4_;
            fVar35 = (float)uStack_b0;
            fVar36 = uStack_b0._4_4_;
            if (!NAN(fVar21) && !NAN(fVar21)) {
              fVar19 = (float)local_b8._0_4_ - fVar20;
              fVar34 = (float)local_b8._4_4_ - fVar21;
              fVar35 = (float)uStack_b0 - fVar23;
              fVar36 = uStack_b0._4_4_ - fVar24;
            }
            auVar26._0_4_ = ~-(uint)(!NAN(fVar20) && !NAN(fVar20)) & local_a8._0_4_;
            auVar26._4_4_ = ~(uint)fVar21 & local_a8._4_4_;
            auVar26._8_4_ = ~(uint)fVar23 & local_a8._8_4_;
            auVar26._12_4_ = ~(uint)fVar24 & local_a8._12_4_;
            auVar4._4_4_ = fVar21;
            auVar4._0_4_ = (uint)fVar25 & -(uint)(!NAN(fVar20) && !NAN(fVar20));
            auVar4._8_4_ = fVar23;
            auVar4._12_4_ = fVar24;
            local_a8 = auVar26 | auVar4;
            local_68._0_4_ =
                 ~-(uint)!NAN(fVar21) & local_68._0_4_ |
                 (uint)(fVar21 + (float)local_68._0_4_) & -(uint)!NAN(fVar21);
            if (plVar14 == (int64_t *)0x0) {
              local_68._4_4_ = ~(uint)fVar21 & local_68._4_4_ | (uint)fVar21;
              uStack_60 = ~(uint)fVar24 & uStack_60 | (uint)fVar24;
              uStack_5c = ~(uint)fVar24 & uStack_5c | (uint)fVar24;
            }
            else if (NAN(*(float *)(this_ptr + 0x13c))) {
              (**(code **)(*plVar2 + 0x5e0))();
              fVar18 = extraout_XMM0_Db + (float)local_68._0_4_;
              local_68._4_4_ = extraout_XMM0_Db;
              local_68._0_4_ = fVar18;
              uStack_60 = extraout_XMM0_Dd;
              uStack_5c = extraout_XMM0_Dd;
            }
            else {
              fVar18 = *(float *)(this_ptr + 0x13c) + (float)local_68._0_4_;
              _local_68 = ZEXT416((uint)fVar18);
            }
            if (local_44 <= fVar17) {
              fVar17 = local_44;
            }
            auVar8._4_4_ = fVar34;
            auVar8._0_4_ = fVar19;
            auVar8._8_4_ = fVar35;
            auVar8._12_4_ = fVar36;
            _local_b8 = blendps(_local_b8,auVar8,2);
            local_44 = fVar17;
            local_34 = fVar18;
            if (plVar2 != plVar14) {
              plVar14 = plVar2;
            }
          }
        }
      }
      local_40 = CONCAT44(local_34,local_a8._0_4_);
      FUN_000a9680();
      if ((bVar15) && (lVar1 = *(int64_t *)(this_ptr + 0x38), lVar1 != 0)) {
        local_78 = -1;
        local_a8 = ZEXT416((uint)local_a8._0_4_);
        while( true ) {
          lVar13 = (int64_t)local_78;
          local_78 = local_78 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_78) break;
          plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar13 * 8);
          fVar17 = (float)FUN_01e3f500();
          iVar12 = FUN_01e3f4f0();
          if (((iVar12 != 2) && (*(float *)(this_ptr + 0x140) < fVar17)) &&
             (iVar12 = FUN_01e3f510(), iVar12 == 3)) {
            (**(code **)(*plVar2 + 0x5c0))();
            uVar22 = (**(code **)(*plVar2 + 0x5c8))();
            fVar20 = (float)uVar22;
            fVar21 = (float)((uint64_t)uVar22 >> 0x20);
            fVar23 = (float)extraout_XMM0_Qb_00;
            fVar24 = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
            fVar25 = fVar20;
            if (fVar20 <= fVar33) {
              fVar25 = fVar33;
            }
            fVar18 = fVar25;
            if (NAN(fVar20)) {
              fVar18 = fVar33;
            }
            iVar16 = iVar16 + 1;
            fVar19 = fVar21 + (float)local_68._0_4_;
            if (NAN(fVar21)) {
              fVar19 = local_34;
            }
            fVar33 = (float)local_b8._0_4_;
            fVar34 = (float)local_b8._4_4_;
            fVar35 = (float)uStack_b0;
            fVar36 = uStack_b0._4_4_;
            if (!NAN(fVar21) && !NAN(fVar21)) {
              fVar33 = (float)local_b8._0_4_ - fVar20;
              fVar34 = (float)local_b8._4_4_ - fVar21;
              fVar35 = (float)uStack_b0 - fVar23;
              fVar36 = uStack_b0._4_4_ - fVar24;
            }
            auVar27._0_4_ = ~-(uint)(!NAN(fVar20) && !NAN(fVar20)) & local_a8._0_4_;
            auVar27._4_4_ = ~(uint)fVar21 & local_a8._4_4_;
            auVar27._8_4_ = ~(uint)fVar23 & local_a8._8_4_;
            auVar27._12_4_ = ~(uint)fVar24 & local_a8._12_4_;
            auVar5._4_4_ = fVar21;
            auVar5._0_4_ = (uint)fVar25 & -(uint)(!NAN(fVar20) && !NAN(fVar20));
            auVar5._8_4_ = fVar23;
            auVar5._12_4_ = fVar24;
            local_a8 = auVar27 | auVar5;
            local_68._0_4_ =
                 ~-(uint)!NAN(fVar21) & local_68._0_4_ |
                 (uint)(fVar21 + (float)local_68._0_4_) & -(uint)!NAN(fVar21);
            if (plVar14 == (int64_t *)0x0) {
              local_68._4_4_ = ~(uint)fVar21 & local_68._4_4_ | (uint)fVar21;
              uStack_60 = ~(uint)fVar24 & uStack_60 | (uint)fVar24;
              uStack_5c = ~(uint)fVar24 & uStack_5c | (uint)fVar24;
            }
            else if (NAN(*(float *)(this_ptr + 0x13c))) {
              (**(code **)(*plVar2 + 0x5e0))();
              fVar19 = extraout_XMM0_Db_00 + (float)local_68._0_4_;
              local_68._4_4_ = extraout_XMM0_Db_00;
              local_68._0_4_ = fVar19;
              uStack_60 = extraout_XMM0_Dd_00;
              uStack_5c = extraout_XMM0_Dd_00;
            }
            else {
              fVar19 = *(float *)(this_ptr + 0x13c) + (float)local_68._0_4_;
              _local_68 = ZEXT416((uint)fVar19);
            }
            if (local_44 <= fVar17) {
              fVar17 = local_44;
            }
            auVar9._4_4_ = fVar34;
            auVar9._0_4_ = fVar33;
            auVar9._8_4_ = fVar35;
            auVar9._12_4_ = fVar36;
            _local_b8 = blendps(_local_b8,auVar9,2);
            fVar33 = fVar18;
            local_44 = fVar17;
            local_34 = fVar19;
            if (plVar2 != plVar14) {
              plVar14 = plVar2;
            }
          }
        }
        local_40 = CONCAT44(local_34,local_a8._0_4_);
        FUN_000a9680();
      }
      if ((float)local_68._0_4_ <= fVar31) {
        if (iVar16 != 0) {
          return local_40;
        }
LAB_01f68f93:
        *(void*)(this_ptr + 0x140) = local_c8;
        return CONCAT44(fVar32,fVar30);
      }
      local_c8 = *(void*)(this_ptr + 0x140);
      if ((local_44 == g_02390124) && (!NAN(local_44) && !NAN(g_02390124))) goto LAB_01f688b1;
      fVar30 = (float)local_40;
    }
    fVar32 = local_40._4_4_;
    *(float *)(this_ptr + 0x140) = local_44;
  } while( true );
}

