// Function: FUN_0182fa50
// Address: 0182fa50
// Size: 3873 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0182feda) */
/* WARNING: Removing unreachable block (ram,0x0182fee6) */
/* WARNING: Removing unreachable block (ram,0x01830132) */
/* WARNING: Removing unreachable block (ram,0x0183013e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0182fa50(double param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  code *pcVar13;
  char cVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *in_RDX;
  ulonglong uVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  longlong *unaff_RSI;
  longlong lVar24;
  longlong *unaff_RDI;
  undefined1 auVar25 [8];
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auVar33 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar32;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar45;
  float fVar46;
  float fVar47;
  int iVar50;
  int iVar52;
  undefined1 auVar48 [16];
  float fVar51;
  float fVar53;
  int iVar54;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined8 local_f8;
  int iStack_f0;
  int iStack_ec;
  undefined1 local_e8 [16];
  float local_d8;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  double local_c0;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  
  local_90 = CONCAT44(local_90._4_4_,param_2);
  uVar5 = *(uint *)(*unaff_RSI + 0xc);
  uVar15 = *(uint *)(**(longlong **)(*unaff_RSI + 0x10) + 0x18);
  local_c8 = (ulonglong)uVar15;
  uVar10 = uVar15 + 3;
  if (-1 < (int)uVar15) {
    uVar10 = uVar15;
  }
  local_a0 = (ulonglong)uVar10;
  local_c0 = param_1;
  puVar16 = (undefined8 *)FUN_00e8fc40(local_a0,in_RDX,param_3,param_4,param_4);
  FUN_00d4ff40();
  *puVar16 = &DAT_025f0d98;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  (*DAT_025f0db0)();
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
  puVar17 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar17 = &DAT_02572358;
  pcVar13 = DAT_02572370;
  (*DAT_02572370)();
  local_88 = puVar17;
  puVar17 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar17 = &DAT_02572358;
  (*pcVar13)();
  uVar15 = (int)local_a0 >> 2;
  local_a0 = (ulonglong)uVar15;
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
        puVar22 = *(undefined4 **)(local_78 + 0x10);
      }
      else {
        lVar19 = *(longlong *)
                  (*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + local_e8._0_8_ * 8) + 0x10);
        puVar22 = *(undefined4 **)(local_78 + 0x10);
        uVar27 = 1;
        if ((3 < local_a8) &&
           (((undefined4 *)(lVar19 + uVar26 * 4) <= puVar22 + 1 ||
            (puVar22 + uVar26 <= (undefined4 *)(lVar19 + 4U))))) {
          uVar27 = 0;
          iVar45 = _DAT_02394150;
          iVar50 = _UNK_02394154;
          iVar52 = _UNK_02394158;
          iVar54 = _UNK_0239415c;
          do {
            local_f8 = CONCAT44(iVar50,iVar45);
            auVar48._0_4_ = (float)iVar45;
            auVar48._4_4_ = (float)iVar50;
            auVar48._8_4_ = (float)iVar52;
            auVar48._12_4_ = (float)iVar54;
            _local_b8 = divps(*(undefined1 (*) [16])(lVar19 + 4 + uVar27 * 4),auVar48);
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
            *(undefined1 (*) [16])(puVar22 + uVar27 + 1) = auVar56;
            uVar27 = uVar27 + 4;
            iVar45 = (int)local_f8 + _DAT_02394180;
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
  lVar19 = *unaff_RDI;
  if (0 < *(int *)(lVar19 + 0xc)) {
    fVar31 = (float)(int)local_a0 * DAT_02394288;
    if (fVar31 * (float)local_90 <= fVar31) {
      fVar31 = fVar31 * (float)local_90;
    }
    local_d8 = DAT_023d5000;
    if (fVar31 <= DAT_023d5000) {
      local_d8 = fVar31;
    }
    fVar31 = DAT_02391090;
    if ((float)local_90 * DAT_02391090 <= DAT_02391090) {
      fVar31 = (float)local_90 * DAT_02391090;
    }
    fVar47 = DAT_023d5000;
    if ((float)((double)fVar31 / local_c0) <= DAT_023d5000) {
      fVar47 = (float)((double)fVar31 / local_c0);
    }
    local_c0 = (double)CONCAT44(local_c0._4_4_,fVar47);
    fVar31 = DAT_02390124;
    if (DAT_02390d34 - (float)local_90 <= DAT_02390124) {
      fVar31 = DAT_02390d34 - (float)local_90;
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
      lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + lVar29 * 8);
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
          local_90 = (ulonglong)iVar45;
          iVar52 = iVar50 - iVar45;
          if (iVar52 == 0 || iVar50 < iVar45) {
            iVar45 = local_d4;
            if (7 < (int)local_c8) {
              do {
                local_d0 = local_90 * 4 + *(longlong *)(local_50 + 0x10);
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
              local_98 = (ulonglong)iVar50;
              local_68._4_4_ = 0;
              local_68._0_4_ = iVar50 - local_68._0_4_ & 3;
              local_68._8_8_ = auVar56._8_8_;
              uVar28 = 1;
              local_b8 = (undefined1  [8])(~local_90 + local_98);
              auVar25 = (undefined1  [8])(~local_90 + local_98);
              do {
                lVar1 = local_50;
                lVar19 = local_48[2];
                lVar6 = *(longlong *)(local_50 + 0x10);
                uVar21 = uVar27;
                for (lVar24 = local_68._0_8_; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *(undefined4 *)(lVar6 + uVar21 * 4) =
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar19 + uVar21 * 8) + 0x10) + uVar28 * 4);
                  uVar21 = uVar21 + 1;
                }
                if (2 < (ulonglong)auVar25) {
                  do {
                    *(undefined4 *)(lVar6 + uVar21 * 4) =
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(lVar19 + uVar21 * 8) + 0x10) + uVar28 * 4);
                    *(undefined4 *)(lVar6 + 4 + uVar21 * 4) =
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(lVar19 + 8 + uVar21 * 8) + 0x10) + uVar28 * 4
                          );
                    *(undefined4 *)(lVar6 + 8 + uVar21 * 4) =
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(lVar19 + 0x10 + uVar21 * 8) + 0x10) +
                          uVar28 * 4);
                    *(undefined4 *)(lVar6 + 0xc + uVar21 * 4) =
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(lVar19 + 0x18 + uVar21 * 8) + 0x10) +
                          uVar28 * 4);
                    uVar21 = uVar21 + 4;
                  } while (local_98 != uVar21);
                }
                local_d0 = uVar27 * 4 + *(longlong *)(local_50 + 0x10);
                FUN_015c15b0(1,iVar52);
                lVar19 = *(longlong *)(lVar1 + 0x10);
                lVar6 = local_48[2];
                uVar21 = uVar27;
                for (lVar24 = local_68._0_8_; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar6 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                       *(undefined4 *)(lVar19 + uVar21 * 4);
                  uVar21 = uVar21 + 1;
                }
                if (2 < (ulonglong)local_b8) {
                  do {
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(lVar6 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(undefined4 *)(lVar19 + uVar21 * 4);
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(lVar6 + 8 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(undefined4 *)(lVar19 + 4 + uVar21 * 4);
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(undefined4 *)(lVar19 + 8 + uVar21 * 4);
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x18 + uVar21 * 8) + 0x10) + uVar28 * 4) =
                         *(undefined4 *)(lVar19 + 0xc + uVar21 * 4);
                    uVar21 = uVar21 + 4;
                  } while (local_98 != uVar21);
                }
                uVar28 = uVar28 + 1;
                auVar25 = local_b8;
              } while (uVar28 != local_f8);
              local_78 = *(longlong *)(*in_RDX + 0x10);
              lVar19 = local_88[2];
              lVar6 = local_48[2];
              lVar24 = *(longlong *)(*unaff_RSI + 0x10);
              if (uVar26 < 4) {
                do {
                  lVar1 = *(longlong *)(*(longlong *)(lVar19 + uVar27 * 8) + 0x10);
                  lVar20 = *(longlong *)(*(longlong *)(lVar6 + uVar27 * 8) + 0x10);
                  lVar7 = *(longlong *)(*(longlong *)(lVar24 + uVar27 * 8) + 0x10);
                  uVar28 = 1;
                  do {
                    local_68._0_4_ = (float)(int)uVar28;
                    fVar47 = *(float *)(local_78 + uVar27 * 4) * (float)(int)uVar28;
                    auVar56 = ZEXT816(0);
                    if ((fVar47 <= DAT_02411424) &&
                       (auVar56 = ZEXT416((uint)DAT_02390124), DAT_0240e2f4 < fVar47)) {
                      auVar56 = ZEXT416((uint)((fVar47 + _DAT_02417038) * _DAT_0241703c +
                                              DAT_02390124));
                    }
                    auVar38._4_12_ = auVar56._4_12_;
                    auVar38._0_4_ =
                         (auVar56._0_4_ * *(float *)(lVar20 + uVar28 * 4) +
                         (DAT_02390124 - auVar56._0_4_) * *(float *)(lVar1 + uVar28 * 4)) *
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
                  lVar7 = *(longlong *)(*(longlong *)(lVar19 + uVar27 * 8) + 0x10);
                  lVar8 = *(longlong *)(*(longlong *)(lVar6 + uVar27 * 8) + 0x10);
                  lVar9 = *(longlong *)(*(longlong *)(lVar24 + uVar27 * 8) + 0x10);
                  uVar21 = lVar9 + 4;
                  uVar2 = lVar9 + local_f8 * 4;
                  uVar23 = 1;
                  local_a8 = uVar27;
                  if (((uVar21 < (ulonglong)(local_78 + (lVar1 + lVar20) * 4) &&
                        local_78 + (lVar20 + uVar28) * 4 < uVar2) ||
                      (uVar21 < lVar7 + local_f8 * 4 && lVar7 + 4U < uVar2)) ||
                     (uVar21 < lVar8 + local_f8 * 4 && lVar8 + 4U < uVar2)) {
LAB_018308b0:
                    do {
                      local_68._0_4_ = (float)(int)uVar23;
                      fVar47 = *(float *)(local_78 + local_a8 * 4) * (float)(int)uVar23;
                      auVar56 = ZEXT816(0);
                      if ((fVar47 <= DAT_02411424) &&
                         (auVar56 = ZEXT416((uint)DAT_02390124), DAT_0240e2f4 < fVar47)) {
                        auVar56 = ZEXT416((uint)((fVar47 + _DAT_02417038) * _DAT_0241703c +
                                                DAT_02390124));
                      }
                      auVar44._4_12_ = auVar56._4_12_;
                      auVar44._0_4_ =
                           (auVar56._0_4_ * *(float *)(lVar8 + uVar23 * 4) +
                           (DAT_02390124 - auVar56._0_4_) * *(float *)(lVar7 + uVar23 * 4)) *
                           (float)local_e8._0_4_;
                      fVar47 = (float)_expf(auVar44._0_8_);
                      *(float *)(lVar9 + uVar23 * 4) = fVar47 * (float)local_68._0_4_;
                      uVar23 = uVar23 + 1;
                    } while (local_f8 != uVar23);
                  }
                  else {
                    fVar47 = *(float *)(local_78 + uVar27 * 4);
                    uVar27 = 0;
                    iVar45 = _DAT_02394150;
                    iVar50 = _UNK_02394154;
                    iVar52 = _UNK_02394158;
                    iVar54 = _UNK_0239415c;
                    do {
                      fVar46 = fVar47 * (float)iVar45;
                      fVar51 = fVar47 * (float)iVar50;
                      fVar53 = fVar47 * (float)iVar52;
                      fVar55 = fVar47 * (float)iVar54;
                      auVar57._4_4_ = -(uint)(_UNK_02417094 < fVar51);
                      auVar57._0_4_ = -(uint)(_DAT_02417090 < fVar46);
                      auVar57._8_4_ = -(uint)(_UNK_02417098 < fVar53);
                      auVar57._12_4_ = -(uint)(_UNK_0241709c < fVar55);
                      auVar39._4_4_ = -(uint)(_UNK_024170a4 < fVar51);
                      auVar39._0_4_ = -(uint)(_DAT_024170a0 < fVar46);
                      auVar39._8_4_ = -(uint)(_UNK_024170a8 < fVar53);
                      auVar39._12_4_ = -(uint)(_UNK_024170ac < fVar55);
                      auVar49._0_4_ = (fVar46 + _DAT_024170b0) * _DAT_024170c0 + (float)DAT_023b2d50
                      ;
                      auVar49._4_4_ = (fVar51 + _UNK_024170b4) * _UNK_024170c4 + DAT_023b2d50._4_4_;
                      auVar49._8_4_ = (fVar53 + _UNK_024170b8) * _UNK_024170c8 + DAT_023b2d50._8_4_;
                      auVar49._12_4_ =
                           (fVar55 + _UNK_024170bc) * _UNK_024170cc + DAT_023b2d50._12_4_;
                      auVar56 = blendvps(_DAT_023b2d50,auVar49,auVar39 | auVar57);
                      fVar46 = (float)(~-(uint)(_DAT_02417090 < fVar46) & auVar56._0_4_);
                      fVar51 = (float)(~-(uint)(_UNK_02417094 < fVar51) & auVar56._4_4_);
                      fVar53 = (float)(~-(uint)(_UNK_02417098 < fVar53) & auVar56._8_4_);
                      fVar55 = (float)(~-(uint)(_UNK_0241709c < fVar55) & auVar56._12_4_);
                      pfVar3 = (float *)(lVar7 + 4 + uVar27 * 4);
                      pfVar4 = (float *)(lVar8 + 4 + uVar27 * 4);
                      local_b8._4_4_ =
                           (pfVar4[1] * fVar51 + (DAT_023b2d50._4_4_ - fVar51) * pfVar3[1]) * fVar31
                      ;
                      local_b8._0_4_ =
                           (*pfVar4 * fVar46 + ((float)DAT_023b2d50 - fVar46) * *pfVar3) * fVar31;
                      fStack_b0 = (pfVar4[2] * fVar53 + (DAT_023b2d50._8_4_ - fVar53) * pfVar3[2]) *
                                  fVar31;
                      fStack_ac = (pfVar4[3] * fVar55 + (DAT_023b2d50._12_4_ - fVar55) * pfVar3[3])
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
                      *(undefined1 (*) [16])(lVar9 + 4 + uVar27 * 4) = auVar58;
                      uVar27 = uVar27 + 4;
                      iVar45 = iVar45 + _DAT_02394180;
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
      lVar19 = *unaff_RDI;
    } while (lVar29 < *(int *)(lVar19 + 0xc));
  }
  lVar19 = local_50;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar19 != 0) {
    FUN_00d50b20();
  }
  if (puVar16 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


