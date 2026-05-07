// Function: FUN_0186a3a0
// Address: 0186a3a0
// Size: 4988 bytes
// Class: Unknown

void FUN_0186a3a0(float param_1,void*param_2,float *param_3,float *param_4,uint64_t param_5
                 )

{
  float *pfVar1;
  float *pfVar2;
  char *pcVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int64_t lVar13;
  uint32_t in_ECX;
  int iVar14;
  int64_t lVar15;
  void*arg1;
  int64_t *this_ptr;
  bool bVar16;
  int64_t lVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t uVar23;
  uint8_t auVar24 [16];
  float fVar25;
  float fVar28;
  uint8_t auVar26 [16];
  float fVar29;
  uint8_t auVar27 [16];
  float fVar30;
  uint8_t in_XMM2 [16];
  uint8_t auVar31 [16];
  float fVar32;
  float *local_res8;
  float *local_res10;
  uint64_t local_res18;
  uint64_t local_240;
  uint8_t local_238;
  uint64_t local_230;
  uint8_t local_228;
  uint64_t local_220;
  uint8_t local_218;
  uint8_t local_208;
  void*local_200;
  int64_t local_1f8;
  uint8_t local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  int local_98;
  int local_7c;
  byte local_78;
  byte local_70;
  int64_t local_58;
  int64_t *local_48;
  char local_40;
  float local_34;
  
  lVar13 = *this_ptr;
  local_200 = param_2;
  if (*(int *)(lVar13 + 0xc) < 1) {
    local_d8 = (uint8_t  [8])0x0;
    local_34 = 0.0;
  }
  else {
    local_34 = 0.0;
    lVar15 = 0;
    local_1f8 = 1;
    _local_d8 = ZEXT816(0);
    local_98 = 0;
    local_7c = 0;
    do {
      lVar13 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar15 * 8) + 0x20);
      if ((*(int *)(lVar13 + 0xc) != 0) &&
         (*(int64_t *)(**(int64_t **)(lVar13 + 0x10) + 0x10) != 0)) {
        FUN_00d50b00();
        iVar10 = FUN_01715480();
        FUN_018d88f0(extraout_XMM0_Qa,0);
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        bVar16 = true;
        if ((local_48 == (int64_t *)0x0) || (FUN_018d8750(), local_48 == (int64_t *)0x0)) {
          local_70 = 0;
          local_78 = 0;
          bVar18 = false;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          lVar13 = g_027df420;
          if (g_027df420 != 0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*local_48 + 0x50))();
          lVar17 = g_027c7df8;
          local_70 = 1;
          if (cVar8 == '\0') {
            if (g_027c7df8 != 0) {
              FUN_00d50b00();
            }
            cVar8 = (**(code **)(*local_48 + 0x50))();
            lVar6 = g_027df400;
            local_70 = 1;
            if (cVar8 == '\0') {
              if (g_027df400 != 0) {
                FUN_00d50b00();
              }
              cVar8 = (**(code **)(*local_48 + 0x50))();
              lVar5 = g_0270b790;
              local_70 = 1;
              if (cVar8 == '\0') {
                if (g_0270b790 != 0) {
                  FUN_00d50b00();
                }
                cVar8 = (**(code **)(*local_48 + 0x50))();
                lVar7 = g_027c7e00;
                local_70 = 1;
                if (cVar8 == '\0') {
                  if (g_027c7e00 != 0) {
                    FUN_00d50b00();
                  }
                  local_70 = (**(code **)(*local_48 + 0x50))();
                  if (lVar7 != 0) {
                    FUN_00d50b20();
                  }
                }
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar17 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar13 = g_027c7e08;
          if (g_027c7e08 != 0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*local_48 + 0x50))();
          lVar17 = g_027c7e10;
          bVar9 = 1;
          uVar23 = extraout_XMM0_Qa_00;
          if (cVar8 == '\0') {
            if (g_027c7e10 != 0) {
              FUN_00d50b00();
            }
            cVar8 = (**(code **)(*local_48 + 0x50))();
            lVar6 = g_027816f0;
            bVar9 = 1;
            uVar23 = extraout_XMM0_Qa_01;
            if (cVar8 == '\0') {
              if (g_027816f0 != 0) {
                FUN_00d50b00();
              }
              bVar9 = (**(code **)(*local_48 + 0x50))();
              uVar23 = extraout_XMM0_Qa_02;
              if (lVar6 != 0) {
                uVar23 = FUN_00d50b20();
              }
            }
            if (lVar17 != 0) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (lVar13 != 0) {
            uVar23 = FUN_00d50b20();
          }
          FUN_018dd490(uVar23,1);
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          lVar13 = g_027d6a48;
          if (g_027d6a48 != 0) {
            FUN_00d50b00();
          }
          cVar8 = FUN_00d90eb0();
          lVar17 = g_027d6a50;
          local_78 = 1;
          if (cVar8 == '\0') {
            if (g_027d6a50 != 0) {
              FUN_00d50b00();
            }
            local_78 = FUN_00d90eb0();
            if (lVar17 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          lVar13 = g_027cc8a0;
          if (g_027cc8a0 != 0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*local_48 + 0x50))();
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          local_78 = local_78 | bVar9;
          if ((cVar8 == '\0') ||
             (lVar13 = *this_ptr, (int64_t)*(int *)(lVar13 + 0xc) <= lVar15 + 1)) {
            bVar16 = false;
            bVar18 = false;
          }
          else {
            bVar16 = false;
            local_58 = 0;
            lVar17 = local_1f8;
            do {
              lVar13 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar17 * 8) + 0x20);
              if ((*(int *)(lVar13 + 0xc) != 0) &&
                 (lVar13 = *(int64_t *)(**(int64_t **)(lVar13 + 0x10) + 0x10), lVar13 != 0)) {
                FUN_00d50b00();
                iVar11 = FUN_01715480();
                bVar18 = true;
                if (iVar11 != iVar10) {
                  if (lVar13 == local_58) {
                    if (bVar16) {
                      bVar18 = false;
                    }
                    else {
                      FUN_00d50b00();
                      bVar16 = true;
                      bVar18 = false;
                    }
                  }
                  else {
                    FUN_00d50b00();
                    if ((bVar16) && (local_58 != 0)) {
                      FUN_00d50b20();
                    }
                    bVar18 = false;
                    local_58 = lVar13;
                    bVar16 = true;
                  }
                }
                FUN_00d50b20();
                if (!bVar18) break;
              }
              lVar17 = lVar17 + 1;
              lVar13 = *this_ptr;
            } while ((int)lVar17 < *(int *)(lVar13 + 0xc));
            if (local_58 == 0) {
              bVar18 = false;
              bVar4 = true;
            }
            else {
              iVar12 = FUN_01715480();
              iVar11 = iVar10 + 5 >> 0x1f;
              bVar18 = iVar12 == (((uint)((iVar10 + 5) / 6 + iVar11) >> 1) - iVar11) * -0xc + iVar10
                                 + 5;
              iVar11 = iVar10 + 9 >> 0x1f;
              iVar11 = (((uint)((iVar10 + 9) / 6 + iVar11) >> 1) - iVar11) * -0xc + iVar10 + 9;
              if (iVar12 == iVar11) {
                FUN_018d88f0(iVar11,0);
                if (local_40 == '\0') {
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                if (local_48 != (int64_t *)0x0) {
                  FUN_018d8750();
                  if (local_48 != (int64_t *)0x0) {
                    if (local_40 == '\0') {
                      FUN_00d50b00();
                    }
                    lVar13 = g_027cc8a0;
                    if (g_027cc8a0 != 0) {
                      FUN_00d50b00();
                    }
                    cVar8 = (**(code **)(*local_48 + 0x50))();
                    if (lVar13 != 0) {
                      FUN_00d50b20();
                    }
                    bVar18 = cVar8 != '\0' || bVar18;
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
              bVar4 = false;
            }
            if ((bVar16) && (!bVar4)) {
              FUN_00d50b20();
            }
            bVar16 = false;
          }
        }
        FUN_018da2a0();
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        iVar11 = FUN_00e7cea0();
        iVar12 = FUN_00e7cea0();
        local_240 = *arg1;
        local_238 = 0;
        FUN_0185df90(1,iVar12,&local_240);
        if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_230 = *local_200;
        local_228 = 0;
        FUN_0185df90(1,iVar12,&local_230);
        if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        pfVar1 = (float *)local_48[2];
        pfVar2 = (float *)local_48[2];
        fVar28 = *pfVar2;
        fVar29 = *pfVar1;
        if (*pfVar1 < fVar28) {
          *pfVar1 = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        *pfVar1 = fVar28;
        fVar28 = pfVar2[1];
        fVar29 = pfVar1[1];
        if (pfVar1[1] < fVar28) {
          pfVar1[1] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[1] = fVar28;
        fVar28 = pfVar2[2];
        fVar29 = pfVar1[2];
        if (pfVar1[2] < fVar28) {
          pfVar1[2] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[2] = fVar28;
        fVar28 = pfVar2[3];
        fVar29 = pfVar1[3];
        if (pfVar1[3] < fVar28) {
          pfVar1[3] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[3] = fVar28;
        fVar28 = pfVar2[4];
        fVar29 = pfVar1[4];
        if (pfVar1[4] < fVar28) {
          pfVar1[4] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[4] = fVar28;
        fVar28 = pfVar2[5];
        fVar29 = pfVar1[5];
        if (pfVar1[5] < fVar28) {
          pfVar1[5] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[5] = fVar28;
        fVar28 = pfVar2[6];
        fVar29 = pfVar1[6];
        if (pfVar1[6] < fVar28) {
          pfVar1[6] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[6] = fVar28;
        fVar28 = pfVar2[7];
        fVar29 = pfVar1[7];
        if (pfVar1[7] < fVar28) {
          pfVar1[7] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[7] = fVar28;
        fVar28 = pfVar2[8];
        fVar29 = pfVar1[8];
        if (pfVar1[8] < fVar28) {
          pfVar1[8] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[8] = fVar28;
        fVar28 = pfVar2[9];
        fVar29 = pfVar1[9];
        if (pfVar1[9] < fVar28) {
          pfVar1[9] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[9] = fVar28;
        fVar28 = pfVar2[10];
        fVar29 = pfVar1[10];
        if (pfVar1[10] < fVar28) {
          pfVar1[10] = fVar28;
          fVar29 = fVar28;
        }
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[10] = fVar28;
        fVar28 = pfVar2[0xb];
        fVar29 = pfVar1[0xb];
        if (pfVar1[0xb] < fVar28) {
          pfVar1[0xb] = fVar28;
          fVar29 = fVar28;
        }
        iVar12 = iVar12 - iVar11;
        fVar28 = g_02390124;
        if (fVar29 + fVar29 <= g_02390124) {
          fVar28 = fVar29 + fVar29;
        }
        pfVar1[0xb] = fVar28;
        if (local_70 == 0 && local_78 == 0) {
          iVar11 = iVar10 + 3 >> 0x1f;
          iVar14 = (((uint)((iVar10 + 3) / 6 + iVar11) >> 1) - iVar11) * -0xc + iVar10 + 3;
          iVar11 = iVar10 + 4 >> 0x1f;
          iVar11 = (((uint)((iVar10 + 4) / 6 + iVar11) >> 1) - iVar11) * -0xc + iVar10 + 4;
          auVar24 = insertps(ZEXT416((uint)pfVar2[iVar11]),pfVar2[iVar14],0x10);
          auVar26 = insertps(ZEXT416((uint)pfVar1[iVar11]),pfVar1[iVar14],0x10);
          fVar28 = auVar26._4_4_ + auVar24._4_4_ * _UNK_02417114;
          fVar29 = auVar26._12_4_ + auVar24._12_4_ * _UNK_0241711c;
          auVar27._0_4_ = (auVar26._0_4_ + auVar24._0_4_ * g_02417110) - fVar28;
          auVar27._4_4_ = fVar28 - fVar28;
          auVar27._8_4_ = (auVar26._8_4_ + auVar24._8_4_ * _UNK_02417118) - fVar29;
          auVar27._12_4_ = fVar29 - fVar29;
          auVar24._0_4_ = (uint)auVar27._0_4_ ^ g_023945e0;
          auVar24._4_4_ = (uint)auVar27._4_4_ ^ _UNK_023945e4;
          auVar24._8_4_ = (uint)auVar27._8_4_ ^ _UNK_023945e8;
          auVar24._12_4_ = (uint)auVar27._12_4_ ^ _UNK_023945ec;
          auVar31 = insertps(in_XMM2,auVar27,0x1d);
          auVar24 = insertps(auVar24,auVar27,0x1c);
          auVar26 = blendps(auVar27,g_0238ff00,2);
          uVar19 = -(uint)(auVar26._0_4_ <= auVar31._0_4_);
          uVar20 = -(uint)(auVar26._4_4_ <= auVar31._4_4_);
          uVar21 = -(uint)(auVar26._8_4_ <= auVar31._8_4_);
          uVar22 = -(uint)(auVar26._12_4_ <= auVar31._12_4_);
          in_XMM2._4_4_ = uVar20;
          in_XMM2._0_4_ = uVar19;
          in_XMM2._8_4_ = uVar21;
          in_XMM2._12_4_ = uVar22;
          local_d8._4_4_ = (float)local_d8._4_4_ + (float)iVar12 * (float)(auVar24._4_4_ & uVar20);
          local_d8._0_4_ = (float)local_d8._0_4_ + (float)iVar12 * (float)(auVar24._0_4_ & uVar19);
          fStack_d0 = fStack_d0 + (float)(auVar24._8_4_ & uVar21) * 0.0;
          fStack_cc = fStack_cc + (float)(auVar24._12_4_ & uVar22) * 0.0;
          local_98 = local_98 + iVar12;
        }
        pcVar3 = (char *)local_48[2];
        if ((((pcVar3[2] != '\0') || (pcVar3[3] != '\0')) ||
            ((byte)(pcVar3[9] != '\0' | local_70 | local_78) == 1)) || (bVar18)) {
LAB_0186b100:
          FUN_00d50b20();
        }
        else {
          fVar28 = (float)iVar12;
          if ((*pcVar3 != '\0') && (pcVar3[2] != '\0')) {
            local_34 = local_34 +
                       pfVar1[(int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) -
                                             (iVar10 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[1] != '\0') && (pcVar3[3] != '\0')) {
            iVar11 = iVar10 + 1;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[2] != '\0') && (pcVar3[4] != '\0')) {
            iVar11 = iVar10 + 2;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[3] != '\0') && (pcVar3[5] != '\0')) {
            iVar11 = iVar10 + 3;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[4] != '\0') && (pcVar3[6] != '\0')) {
            iVar11 = iVar10 + 4;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[5] != '\0') && (pcVar3[7] != '\0')) {
            iVar11 = iVar10 + 5;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[6] != '\0') && (pcVar3[8] != '\0')) {
            iVar11 = iVar10 + 6;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[7] != '\0') && (pcVar3[9] != '\0')) {
            iVar11 = iVar10 + 7;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[8] != '\0') && (pcVar3[10] != '\0')) {
            iVar11 = iVar10 + 8;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[9] != '\0') && (pcVar3[0xb] != '\0')) {
            iVar11 = iVar10 + 9;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[10] != '\0') && (*pcVar3 != '\0')) {
            iVar11 = iVar10 + 10;
            local_34 = local_34 +
                       pfVar1[(int)(iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                             (iVar11 >> 0x1f)) * -0xc)] * fVar28;
            in_XMM2 = ZEXT416((uint)local_34);
          }
          if ((pcVar3[0xb] != '\0') && (pcVar3[1] != '\0')) {
            iVar10 = iVar10 + 0xb;
            local_34 = local_34 +
                       fVar28 * pfVar1[(int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1)
                                                      - (iVar10 >> 0x1f)) * -0xc)];
          }
          if (local_48 != (int64_t *)0x0) goto LAB_0186b100;
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        if (!bVar16) {
          FUN_00d50b20();
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        local_7c = local_7c + iVar12;
      }
      lVar15 = lVar15 + 1;
      lVar13 = *this_ptr;
      local_1f8 = local_1f8 + 1;
    } while (lVar15 < *(int *)(lVar13 + 0xc));
    if (0 < local_98) {
      auVar26._0_4_ = (float)local_98;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_8_ = 0;
      auVar24 = divps(_local_d8,auVar26);
      local_d8 = auVar24._0_8_;
    }
    if (0 < local_7c) {
      local_34 = local_34 / (float)local_7c;
    }
  }
  local_220 = *arg1;
  local_218 = 0;
  FUN_0185ebf0(&local_220,in_ECX,0xffffffff,0);
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_208 = 1;
  fVar28 = (float)FUN_01877200();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  fVar32 = (float)local_d8._0_4_ + (float)local_d8._4_4_;
  fVar25 = (g_02394250 - fVar32) / g_02417218;
  fVar30 = ((g_02390124 - fVar25) * g_0241b544 + local_34) * g_023942a8;
  fVar29 = g_0239011c;
  if (g_02394274 < fVar32) {
    fVar29 = (float)local_d8._4_4_ / fVar32;
  }
  fVar28 = fVar28 - (g_02390118 + fVar32);
  *local_res10 = fVar28;
  *(bool *)local_res18 = param_1 < fVar28;
  *(bool *)param_5 = g_02390124 <= fVar25 + fVar30 || param_1 < fVar28;
  *param_4 = fVar32;
  *param_3 = fVar29;
  *local_res8 = local_34;
  return;
}

