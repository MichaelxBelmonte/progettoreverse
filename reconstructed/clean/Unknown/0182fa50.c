// Function: FUN_0182fa50
// Address: 0182fa50
// Size: 3873 bytes
// Class: Unknown

void FUN_0182fa50(double param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  uint8_t auVar11 [12];
  uint8_t auVar12 [12];
  code *pcVar13;
  char cVar14;
  uint uVar15;
  void*puVar16;
  void*puVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t *in_RDX;
  uint64_t uVar21;
  void*puVar22;
  uint64_t uVar23;
  int64_t *arg1;
  int64_t lVar24;
  int64_t *this_ptr;
  uint8_t auVar25 [8];
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int64_t lVar29;
  uint32_t uVar30;
  float fVar31;
  uint8_t auVar33 [12];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar32;
  uint64_t extraout_XMM0_Qa_00;
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  int iVar45;
  float fVar46;
  float fVar47;
  int iVar50;
  int iVar52;
  uint8_t auVar48 [16];
  float fVar51;
  float fVar53;
  int iVar54;
  float fVar55;
  uint8_t auVar49 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  int iStack_f0;
  int iStack_ec;
  uint8_t local_e8 [16];
  float local_d8;
  int local_d4;
  int64_t local_d0;
  uint64_t local_c8;
  double local_c0;
  uint8_t local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  void*local_88;
  int64_t local_80;
  int64_t local_78;
  void*local_70;
  uint8_t local_68 [16];
  int64_t local_50;
  void*local_48;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  
  local_90 = CONCAT44(local_90._4_4_,param_2);
  uVar5 = *(uint *)(*arg1 + 0xc);
  uVar15 = *(uint *)(**(int64_t **)(*arg1 + 0x10) + 0x18);
  local_c8 = (uint64_t)uVar15;
  uVar10 = uVar15 + 3;
  if (-1 < (int)uVar15) {
    uVar10 = uVar15;
  }
  local_a0 = (uint64_t)uVar10;
  local_c0 = param_1;
  puVar16 = (void*)FUN_00e8fc40(local_a0,in_RDX,param_3,param_4,param_4);
  FUN_00d4ff40();
  *puVar16 = &g_025f0d98;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  (*g_025f0db0)();
  FUN_00c8e690();
  lVar19 = local_40;
  local_70 = puVar16;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_50 = lVar19;
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar17 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar17 = &g_02572358;
  pcVar13 = g_02572370;
  (*g_02572370)();
  local_88 = puVar17;
  puVar17 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar17 = &g_02572358;
  (*pcVar13)();
  uVar15 = (int)local_a0 >> 2;
  local_a0 = (uint64_t)uVar15;
  local_48 = puVar17;
  if (0 < (int)uVar5) {
    uVar26 = 2;
    if (2 < (int)uVar15) {
      uVar26 = local_a0;
    }
    local_a8 = uVar26 - 1;
    uVar18 = local_a8 & 0xfffffffffffffffc;
    local_98 = uVar18 + 1;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = local_e8._8_8_;
    local_e8 = auVar56 << 0x40;
    do {
      FUN_00c8e690();
      local_78 = local_40;
      lVar19 = local_40;
      if (((local_38 == '\0') && (local_40 != 0)) &&
         ((FUN_00d50b00(), lVar19 = local_78, local_38 != '\0' && (local_40 != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_38 = '\0';
      local_40 = lVar19;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((int)local_c8 < 8) {
        puVar22 = *(void**)(local_78 + 0x10);
      }
      else {
        lVar19 = *(int64_t *)
                  (*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + local_e8._0_8_ * 8) + 0x10);
        puVar22 = *(void**)(local_78 + 0x10);
        uVar27 = 1;
        if ((3 < local_a8) &&
           (((void*)(lVar19 + uVar26 * 4) <= puVar22 + 1 ||
            (puVar22 + uVar26 <= (void*)(lVar19 + 4U))))) {
          uVar27 = 0;
          iVar45 = g_02394150;
          iVar50 = _UNK_02394154;
          iVar52 = _UNK_02394158;
          iVar54 = _UNK_0239415c;
          do {
            local_f8 = CONCAT44(iVar50,iVar45);
            auVar48._0_4_ = (float)iVar45;
            auVar48._4_4_ = (float)iVar50;
            auVar48._8_4_ = (float)iVar52;
            auVar48._12_4_ = (float)iVar54;
            _local_b8 = divps(*(uint8_t (*) [16])(lVar19 + 4 + uVar27 * 4),auVar48);
            iStack_f0 = iVar52;
            iStack_ec = iVar54;
            local_68._0_8_ = _logf();
            local_68._8_8_ = extraout_XMM0_Qb;
            auVar34._0_8_ = _logf();
            auVar34._8_8_ = extraout_XMM0_Qb_00;
            local_68 = insertps(local_68,auVar34,0x10);
            auVar11._4_8_ = extraout_XMM0_Qb_00;
            auVar11._0_4_ = local_b8._4_4_;
            auVar35._0_8_ = auVar11._0_8_ << 0x20;
            auVar35._8_4_ = fStack_b0;
            auVar35._12_4_ = fStack_ac;
            auVar36._0_8_ = _logf(auVar35._8_8_);
            auVar36._8_8_ = extraout_XMM0_Qb_01;
            local_68 = insertps(local_68,auVar36,0x20);
            auVar37._0_8_ = _logf();
            auVar37._8_8_ = extraout_XMM0_Qb_02;
            auVar56 = insertps(local_68,auVar37,0x30);
            *(uint8_t (*) [16])(puVar22 + uVar27 + 1) = auVar56;
            uVar27 = uVar27 + 4;
            iVar45 = (int)local_f8 + g_02394180;
            iVar50 = local_f8._4_4_ + _UNK_02394184;
            iVar52 = iStack_f0 + _UNK_02394188;
            iVar54 = iStack_ec + _UNK_0239418c;
          } while (uVar18 != uVar27);
          puVar16 = local_70;
          puVar17 = local_48;
          uVar27 = local_98;
          if (local_a8 == uVar18) goto LAB_0182fe98;
        }
        uVar28 = uVar27;
        if ((uVar26 & 1) == 0) {
          uVar30 = _logf(*(float *)(lVar19 + uVar27 * 4) / (float)(int)uVar27);
          puVar22[uVar27] = uVar30;
          uVar28 = uVar27 + 1;
        }
        puVar16 = local_70;
        puVar17 = local_48;
        if (~uVar27 != -uVar26) {
          do {
            uVar30 = _logf(*(float *)(lVar19 + uVar28 * 4) / (float)(int)uVar28);
            puVar22[uVar28] = uVar30;
            uVar30 = _logf(*(float *)(lVar19 + 4 + uVar28 * 4) / (float)((int)uVar28 + 1));
            puVar22[uVar28 + 1] = uVar30;
            uVar28 = uVar28 + 2;
            puVar16 = local_70;
            puVar17 = local_48;
          } while (uVar28 != uVar26);
        }
      }
LAB_0182fe98:
      *puVar22 = puVar22[1];
      FUN_00c8e4f0();
      lVar19 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c92170();
      FUN_00c92160();
      local_38 = '\0';
      local_40 = lVar19;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar19 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar27 = local_e8._0_8_ + 1;
      local_e8._0_8_ = uVar27;
    } while (uVar27 != uVar5);
  }
  lVar19 = *this_ptr;
  if (0 < *(int *)(lVar19 + 0xc)) {
    fVar31 = (float)(int)local_a0 * g_02394288;
    if (fVar31 * (float)local_90 <= fVar31) {
      fVar31 = fVar31 * (float)local_90;
    }
    local_d8 = g_023d5000;
    if (fVar31 <= g_023d5000) {
      local_d8 = fVar31;
    }
    fVar31 = g_02391090;
    if ((float)local_90 * g_02391090 <= g_02391090) {
      fVar31 = (float)local_90 * g_02391090;
    }
    fVar47 = g_023d5000;
    if ((float)((double)fVar31 / local_c0) <= g_023d5000) {
      fVar47 = (float)((double)fVar31 / local_c0);
    }
    local_c0 = (double)CONCAT44(local_c0._4_4_,fVar47);
    fVar31 = g_02390124;
    if (g_02390d34 - (float)local_90 <= g_02390124) {
      fVar31 = g_02390d34 - (float)local_90;
    }
    auVar33 = ZEXT812(0);
    local_f8 = 2;
    if (2 < (int)local_a0) {
      local_f8 = local_a0 & 0xffffffff;
    }
    if (0.0 <= fVar31) {
      auVar33._4_8_ = 0;
      auVar33._0_4_ = fVar31;
    }
    local_e8._12_4_ = 0;
    local_e8._0_12_ = auVar33;
    uVar26 = local_f8 - 1;
    uVar18 = uVar26 & 0xfffffffffffffffc;
    fVar31 = auVar33._0_4_;
    local_d4 = (int)local_f8 + -1;
    lVar29 = 0;
    do {
      lVar19 = *(int64_t *)(*(int64_t *)(lVar19 + 0x10) + lVar29 * 8);
      if (lVar19 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar19;
      FUN_0133ae40();
      cVar14 = FUN_00d45ad0();
      uVar32 = extraout_XMM0_Qa;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar32 = FUN_00d50b20();
      }
      if (cVar14 != '\0') {
        local_118 = local_80;
        local_110 = '\0';
        FUN_0133ae40(uVar32,&local_118);
        iVar45 = FUN_00d45870();
        uVar32 = extraout_XMM0_Qa_00;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar32 = FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          uVar32 = FUN_00d50b20();
        }
        if (iVar45 != -1) {
          local_108 = local_80;
          local_100 = '\0';
          FUN_0133ae40(uVar32,&local_108);
          iVar50 = FUN_00d45870();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          local_90 = (uint64_t)iVar45;
          iVar52 = iVar50 - iVar45;
          if (iVar52 == 0 || iVar50 < iVar45) {
            iVar45 = local_d4;
            if (7 < (int)local_c8) {
              do {
                local_d0 = local_90 * 4 + *(int64_t *)(local_50 + 0x10);
                FUN_015c15b0(1,iVar52);
                iVar45 = iVar45 + -1;
              } while (iVar45 != 0);
            }
          }
          else {
            local_68._0_4_ = iVar45;
            iVar45 = iVar52;
            do {
              FUN_015c15b0(1,local_a0);
              auVar56 = local_68;
              uVar27 = local_90;
              iVar45 = iVar45 + -1;
            } while (iVar45 != 0);
            puVar17 = local_48;
            if (7 < (int)local_c8) {
              local_98 = (uint64_t)iVar50;
              local_68._4_4_ = 0;
              local_68._0_4_ = iVar50 - local_68._0_4_ & 3;
              local_68._8_8_ = auVar56._8_8_;
              uVar28 = 1;
              local_b8 = (uint8_t  [8])(~local_90 + local_98);
              auVar25 = (uint8_t  [8])(~local_90 + local_98);
              do {
                lVar1 = local_50;
                lVar19 = local_48[2];
                lVar6 = *(int64_t *)(local_50 + 0x10);
                uVar21 = uVar27;
                for (lVar24 = local_68._0_8_; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *(void*)(lVar6 + uVar21 * 4) =
                       *(void*)
                        (*(int64_t *)(*(int64_t *)(lVar19 + uVar21 * 8) + 0x10) + uVar28 * 4);
                  uVar21 = uVar21 + 1;
                }
                if (2 < (uint64_t)auVar25) {
                  do {
                    *(void*)(lVar6 + uVar21 * 4) =
                         *(void*)
                          (*(int64_t *)(*(int64_t *)(lVar19 + uVar21 * 8) + 0x10) + uVar28 * 4);
                    *(void*)(lVar6 + 4 + uVar21 * 4) =
                         *(void*)
                          (*(int64_t *)(*(int64_t *)(lVar19 + 8 + uVar21 * 8) + 0x10) + uVar28 * 4
                          );
                    *(void*)(lVar6 + 8 + uVar21 * 4) =
                         *(void*)
                          (*(int64_t *)(*(int64_t *)(lVar19 + 0x10 + uVar21 * 8) + 0x10) +
                          uVar28 * 4);
                    *(void*)(lVar6 + 0xc + uVar21 * 4) =
                         *(void*)
                          (*(int64_t *)(*(int64_t *)(lVar19 + 0x18 + uVar21 * 8) + 0x10) +
                          uVar28 * 4);
                    uVar21 = uVar21 + 4;
                  } while (local_98 != uVar21);
                }
                local_d0 = uVar27 * 4 + *(int64_t *)(local_50 + 0x10);
                FUN_015c15b0(1,iVar52);
                lVar19 = *(int64_t *)(lVar1 + 0x10);
                lVar6 = local_48[2];
                uVar21 = uVar27;
                for (lVar24 = local_68._0_8_; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *(void*)
                   (*(int64_t *)(*(int64_t *)(lVar6 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                       *(void*)(lVar19 + uVar21 * 4);
                  uVar21 = uVar21 + 1;
                }
                if (2 < (uint64_t)local_b8) {
                  do {
                    *(void*)
                     (*(int64_t *)(*(int64_t *)(lVar6 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(void*)(lVar19 + uVar21 * 4);
                    *(void*)
                     (*(int64_t *)(*(int64_t *)(lVar6 + 8 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(void*)(lVar19 + 4 + uVar21 * 4);
                    *(void*)
                     (*(int64_t *)(*(int64_t *)(lVar6 + 0x10 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(void*)(lVar19 + 8 + uVar21 * 4);
                    *(void*)
                     (*(int64_t *)(*(int64_t *)(lVar6 + 0x18 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(void*)(lVar19 + 0xc + uVar21 * 4);
                    uVar21 = uVar21 + 4;
                  } while (local_98 != uVar21);
                }
                uVar28 = uVar28 + 1;
                auVar25 = local_b8;
              } while (uVar28 != local_f8);
              local_78 = *(int64_t *)(*in_RDX + 0x10);
              lVar19 = local_88[2];
              lVar6 = local_48[2];
              lVar24 = *(int64_t *)(*arg1 + 0x10);
              if (uVar26 < 4) {
                do {
                  lVar1 = *(int64_t *)(*(int64_t *)(lVar19 + uVar27 * 8) + 0x10);
                  lVar20 = *(int64_t *)(*(int64_t *)(lVar6 + uVar27 * 8) + 0x10);
                  lVar7 = *(int64_t *)(*(int64_t *)(lVar24 + uVar27 * 8) + 0x10);
                  uVar28 = 1;
                  do {
                    local_68._0_4_ = (float)(int)uVar28;
                    fVar47 = *(float *)(local_78 + uVar27 * 4) * (float)(int)uVar28;
                    auVar56 = ZEXT816(0);
                    if ((fVar47 <= g_02411424) &&
                       (auVar56 = ZEXT416((uint)g_02390124), g_0240e2f4 < fVar47)) {
                      auVar56 = ZEXT416((uint)((fVar47 + g_02417038) * g_0241703c +
                                              g_02390124));
                    }
                    auVar38._4_12_ = auVar56._4_12_;
                    auVar38._0_4_ =
                         (auVar56._0_4_ * *(float *)(lVar20 + uVar28 * 4) +
                         (g_02390124 - auVar56._0_4_) * *(float *)(lVar1 + uVar28 * 4)) *
                         (float)local_e8._0_4_;
                    fVar47 = (float)_expf(auVar38._0_8_);
                    *(float *)(lVar7 + uVar28 * 4) = fVar47 * (float)local_68._0_4_;
                    uVar28 = uVar28 + 1;
                  } while (local_f8 != uVar28);
                  uVar27 = uVar27 + 1;
                  puVar16 = local_70;
                  puVar17 = local_48;
                } while (uVar27 != local_98);
              }
              else {
                lVar1 = uVar27 + 1;
                lVar20 = 0;
                uVar28 = uVar27;
                do {
                  lVar7 = *(int64_t *)(*(int64_t *)(lVar19 + uVar27 * 8) + 0x10);
                  lVar8 = *(int64_t *)(*(int64_t *)(lVar6 + uVar27 * 8) + 0x10);
                  lVar9 = *(int64_t *)(*(int64_t *)(lVar24 + uVar27 * 8) + 0x10);
                  uVar21 = lVar9 + 4;
                  uVar2 = lVar9 + local_f8 * 4;
                  uVar23 = 1;
                  local_a8 = uVar27;
                  if (((uVar21 < (uint64_t)(local_78 + (lVar1 + lVar20) * 4) &&
                        local_78 + (lVar20 + uVar28) * 4 < uVar2) ||
                      (uVar21 < lVar7 + local_f8 * 4 && lVar7 + 4U < uVar2)) ||
                     (uVar21 < lVar8 + local_f8 * 4 && lVar8 + 4U < uVar2)) {
LAB_018308b0:
                    do {
                      local_68._0_4_ = (float)(int)uVar23;
                      fVar47 = *(float *)(local_78 + local_a8 * 4) * (float)(int)uVar23;
                      auVar56 = ZEXT816(0);
                      if ((fVar47 <= g_02411424) &&
                         (auVar56 = ZEXT416((uint)g_02390124), g_0240e2f4 < fVar47)) {
                        auVar56 = ZEXT416((uint)((fVar47 + g_02417038) * g_0241703c +
                                                g_02390124));
                      }
                      auVar44._4_12_ = auVar56._4_12_;
                      auVar44._0_4_ =
                           (auVar56._0_4_ * *(float *)(lVar8 + uVar23 * 4) +
                           (g_02390124 - auVar56._0_4_) * *(float *)(lVar7 + uVar23 * 4)) *
                           (float)local_e8._0_4_;
                      fVar47 = (float)_expf(auVar44._0_8_);
                      *(float *)(lVar9 + uVar23 * 4) = fVar47 * (float)local_68._0_4_;
                      uVar23 = uVar23 + 1;
                    } while (local_f8 != uVar23);
                  }
                  else {
                    fVar47 = *(float *)(local_78 + uVar27 * 4);
                    uVar27 = 0;
                    iVar45 = g_02394150;
                    iVar50 = _UNK_02394154;
                    iVar52 = _UNK_02394158;
                    iVar54 = _UNK_0239415c;
                    do {
                      fVar46 = fVar47 * (float)iVar45;
                      fVar51 = fVar47 * (float)iVar50;
                      fVar53 = fVar47 * (float)iVar52;
                      fVar55 = fVar47 * (float)iVar54;
                      auVar57._4_4_ = -(uint)(_UNK_02417094 < fVar51);
                      auVar57._0_4_ = -(uint)(g_02417090 < fVar46);
                      auVar57._8_4_ = -(uint)(_UNK_02417098 < fVar53);
                      auVar57._12_4_ = -(uint)(_UNK_0241709c < fVar55);
                      auVar39._4_4_ = -(uint)(_UNK_024170a4 < fVar51);
                      auVar39._0_4_ = -(uint)(g_024170a0 < fVar46);
                      auVar39._8_4_ = -(uint)(_UNK_024170a8 < fVar53);
                      auVar39._12_4_ = -(uint)(_UNK_024170ac < fVar55);
                      auVar49._0_4_ = (fVar46 + g_024170b0) * g_024170c0 + (float)g_023b2d50
                      ;
                      auVar49._4_4_ = (fVar51 + _UNK_024170b4) * _UNK_024170c4 + g_023b2d50._4_4_;
                      auVar49._8_4_ = (fVar53 + _UNK_024170b8) * _UNK_024170c8 + g_023b2d50._8_4_;
                      auVar49._12_4_ =
                           (fVar55 + _UNK_024170bc) * _UNK_024170cc + g_023b2d50._12_4_;
                      auVar56 = blendvps(g_023b2d50,auVar49,auVar39 | auVar57);
                      fVar46 = (float)(~-(uint)(g_02417090 < fVar46) & auVar56._0_4_);
                      fVar51 = (float)(~-(uint)(_UNK_02417094 < fVar51) & auVar56._4_4_);
                      fVar53 = (float)(~-(uint)(_UNK_02417098 < fVar53) & auVar56._8_4_);
                      fVar55 = (float)(~-(uint)(_UNK_0241709c < fVar55) & auVar56._12_4_);
                      pfVar3 = (float *)(lVar7 + 4 + uVar27 * 4);
                      pfVar4 = (float *)(lVar8 + 4 + uVar27 * 4);
                      local_b8._4_4_ =
                           (pfVar4[1] * fVar51 + (g_023b2d50._4_4_ - fVar51) * pfVar3[1]) * fVar31
                      ;
                      local_b8._0_4_ =
                           (*pfVar4 * fVar46 + ((float)g_023b2d50 - fVar46) * *pfVar3) * fVar31;
                      fStack_b0 = (pfVar4[2] * fVar53 + (g_023b2d50._8_4_ - fVar53) * pfVar3[2]) *
                                  fVar31;
                      fStack_ac = (pfVar4[3] * fVar55 + (g_023b2d50._12_4_ - fVar55) * pfVar3[3])
                                  * fVar31;
                      local_68._0_8_ = _expf();
                      local_68._8_8_ = extraout_XMM0_Qb_03;
                      auVar40._0_8_ = _expf();
                      auVar40._8_8_ = extraout_XMM0_Qb_04;
                      local_68 = insertps(local_68,auVar40,0x10);
                      auVar12._4_8_ = extraout_XMM0_Qb_04;
                      auVar12._0_4_ = local_b8._4_4_;
                      auVar41._0_8_ = auVar12._0_8_ << 0x20;
                      auVar41._8_4_ = fStack_b0;
                      auVar41._12_4_ = fStack_ac;
                      auVar42._0_8_ = _expf(auVar41._8_8_);
                      auVar42._8_8_ = extraout_XMM0_Qb_05;
                      local_68 = insertps(local_68,auVar42,0x20);
                      auVar43._0_8_ = _expf();
                      auVar43._8_8_ = extraout_XMM0_Qb_06;
                      auVar56 = insertps(local_68,auVar43,0x30);
                      auVar58._0_4_ = auVar56._0_4_ * (float)iVar45;
                      auVar58._4_4_ = auVar56._4_4_ * (float)iVar50;
                      auVar58._8_4_ = auVar56._8_4_ * (float)iVar52;
                      auVar58._12_4_ = auVar56._12_4_ * (float)iVar54;
                      *(uint8_t (*) [16])(lVar9 + 4 + uVar27 * 4) = auVar58;
                      uVar27 = uVar27 + 4;
                      iVar45 = iVar45 + g_02394180;
                      iVar50 = iVar50 + _UNK_02394184;
                      iVar52 = iVar52 + _UNK_02394188;
                      iVar54 = iVar54 + _UNK_0239418c;
                    } while (uVar18 != uVar27);
                    uVar23 = uVar18 + 1;
                    puVar16 = local_70;
                    if (uVar26 != uVar18) goto LAB_018308b0;
                  }
                  uVar27 = local_a8 + 1;
                  lVar20 = lVar20 + 1;
                  uVar28 = local_90;
                  puVar17 = local_48;
                } while (uVar27 != local_98);
              }
            }
          }
        }
      }
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      lVar29 = lVar29 + 1;
      lVar19 = *this_ptr;
    } while (lVar29 < *(int *)(lVar19 + 0xc));
  }
  lVar19 = local_50;
  if (puVar17 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar19 != 0) {
    FUN_00d50b20();
  }
  if (puVar16 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

