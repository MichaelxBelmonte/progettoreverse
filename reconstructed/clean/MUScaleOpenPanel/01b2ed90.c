// Function: FUN_01b2ed90
// Address: 01b2ed90
// Size: 3131 bytes
// Class: MUScaleOpenPanel
// === MUScaleOpenPanel properties ===
//                   _modeMatrix
//                   _tuningMatrix
//                   _fundamentalPopUp
//                   _pitchPopUp
//                   _stretchingPopUp
//                   _externalScalesButton
//                   _openedDistribution


void FUN_01b2ed90(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint32_t uVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  float fVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float local_158;
  float local_138;
  float fStack_134;
  float local_c8;
  int64_t local_b0;
  char local_a8;
  float local_8c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  cVar4 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar4 != '\0') {
    FUN_01e3f820();
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
      FUN_01d3abf0();
      uVar18 = FUN_01e466c0();
      uVar19 = FUN_01b2e910();
      auVar21._8_4_ = (int)extraout_XMM0_Qb;
      auVar21._0_8_ = uVar19;
      auVar21._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
      cVar4 = FUN_00d05410();
      if (cVar4 != '\0') {
        *(byte *)((int64_t)this_ptr + 0x1d9) = *(byte *)((int64_t)this_ptr + 0x1d9) ^ 1;
                                                (**(code **)(*this_ptr + 0x620))();
        return;
      }
      iVar5 = FUN_01d3b620();
      fStack_134 = (float)((uint64_t)uVar18 >> 0x20);
      if (((iVar5 == 2) && ((char)this_ptr[0x3b] != '\0')) &&
         (lVar7 = this_ptr[0x39], 0xf < *(int *)(lVar7 + 0x18))) {
        local_44 = g_02411fd8;
        uVar11 = 0xffffffff;
        lVar9 = 8;
        uVar10 = 0;
        do {
          uVar1 = *(uint64_t *)(*(int64_t *)(lVar7 + 0x10) + -8 + lVar9);
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar1;
          cVar4 = FUN_00d05410(lVar7,uVar1,(int)*(void*)(*(int64_t *)(lVar7 + 0x10) + lVar9)
                              );
          lVar7 = this_ptr[0x39];
          if (cVar4 != '\0') {
            fVar13 = (float)((uint)((*(float *)(*(int64_t *)(lVar7 + 0x10) + 4 + lVar9) *
                                     g_0239011c +
                                    *(float *)(*(int64_t *)(lVar7 + 0x10) + -4 + lVar9)) -
                                   fStack_134) & g_02390140);
            auVar21 = ZEXT416((uint)local_44);
            if (fVar13 < local_44) {
              uVar11 = uVar10 & 0xffffffff;
              local_44 = fVar13;
            }
          }
          uVar10 = uVar10 + 1;
          iVar5 = *(int *)(lVar7 + 0x18);
          iVar8 = iVar5 + 0xf;
          if (-1 < iVar5) {
            iVar8 = iVar5;
          }
          lVar9 = lVar9 + 0x10;
        } while ((int64_t)uVar10 < (int64_t)(iVar8 >> 4));
        if ((int)uVar11 != -1) {
          lVar7 = *this_ptr;
          _exp2f(*(float *)(*(int64_t *)(this_ptr[0x3a] + 0x10) + (int64_t)(int)uVar11 * 4) *
                 g_023941f4);
          (**(code **)(lVar7 + 0x928))();
          (**(code **)(*this_ptr + 0xa18))();
          if (local_40 == (int64_t *)0x0) {
            bVar12 = false;
          }
          else {
            (**(code **)(*this_ptr + 0xa28))();
            bVar12 = local_b0 != 0;
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar12) {
            return;
          }
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_026717b8;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(void*)((int64_t)puVar6 + 0x2c) = 0;
          *(void*)((int64_t)puVar6 + 0x34) = 0;
          (*g_026717d0)();
          (**(code **)(*this_ptr + 0xa18))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01caeb20();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar18 = (**(code **)(*this_ptr + 0xa28))();
          (**(code **)(*local_40 + 0x3b8))(uVar18,1);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return;
        }
      }
      (**(code **)(*this_ptr + 0x930))();
      fVar14 = (float)_log10f();
      FUN_01e436c0();
      FUN_01e436c0();
      fVar13 = *(float *)(this_ptr + 0x3d);
      fVar15 = fVar15 * g_0239011c;
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (int64_t *)this_ptr[0x40], plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x18))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      pcVar3 = g_026717d0;
      local_158 = auVar21._0_4_;
      fVar14 = fVar14 * local_158 * g_02390120;
      local_138 = (float)uVar18;
      local_158 = local_138;
      local_c8 = local_138;
      local_8c = fVar14;
LAB_01b2f140:
      (**(code **)(*this_ptr + 0x658))();
      plVar2 = (int64_t *)*arg1;
      if (plVar2 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b2f1ed;
          }
          goto LAB_01b2f1a3;
        }
LAB_01b2f1ad:
        if (*arg1 == 0) goto LAB_01b2f829;
LAB_01b2f200:
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01b2f83d;
        iVar5 = FUN_01d3a5a0();
        if (iVar5 == 5) {
          FUN_01d3abf0();
          uVar18 = FUN_01e466c0();
          fVar17 = (float)uVar18;
          uStack_54 = (uint)((uint64_t)uVar18 >> 0x20);
          uStack_50 = (uint)extraout_XMM0_Qb_00;
          uStack_4c = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
          auVar26._0_4_ = (uint)(fVar17 - local_c8) & g_023945e0;
          auVar26._4_4_ = uStack_54 & _UNK_023945e4;
          auVar26._8_4_ = uStack_50 & _UNK_023945e8;
          auVar26._12_4_ = uStack_4c & _UNK_023945ec;
          auVar27._4_12_ = SUB1612(auVar26 | g_023945f0,4);
          auVar27._0_4_ = SUB164(auVar26 | g_023945f0,0) + (fVar17 - local_c8);
          auVar20._0_12_ = ZEXT812(0);
          auVar20._12_4_ = 0;
          auVar21 = roundss(auVar20,auVar27,0xb);
          local_c8 = fVar17;
          if ((auVar21._0_4_ != g_0239424c) || (NAN(auVar21._0_4_) || NAN(g_0239424c))) {
            local_58 = fVar17 - local_138;
            if (fStack_134 <= fVar15) {
              if (*(int *)((int64_t)this_ptr + 0x1dc) == 1) {
                FUN_01e436c0();
                FUN_01e436c0();
                auVar22._4_12_ = local_58._4_12_;
                auVar22._0_4_ = local_58 / (auVar27._0_4_ * g_02390120);
                fVar25 = (float)___exp10f(auVar22._0_8_);
                fVar17 = *(float *)(this_ptr + 0x3e);
                if (*(float *)(this_ptr + 0x3e) <= fVar25) {
                  fVar17 = fVar25;
                }
                fVar25 = *(float *)((int64_t)this_ptr + 500);
                if (fVar17 <= *(float *)((int64_t)this_ptr + 500)) {
                  fVar25 = fVar17;
                }
                auVar21 = ZEXT416((uint)fVar25);
                fVar17 = (float)_log10f();
                FUN_01e436c0();
                FUN_01e436c0();
                auVar28._4_12_ = auVar21._4_12_;
                auVar28._0_4_ = auVar21._0_4_ * g_02390120 * fVar17 + fVar13;
                fVar17 = *(float *)(this_ptr + 0x3d);
                if ((fVar17 != auVar28._0_4_) || (NAN(fVar17) || NAN(auVar28._0_4_))) {
                  auVar21 = auVar28;
                  FUN_01e436c0();
                  FUN_01e436c0();
                  uVar16 = ___exp10f((fVar17 - auVar28._0_4_) / (auVar21._0_4_ * g_02390120));
                  *(void*)((int64_t)this_ptr + 0x1ec) = uVar16;
                  *(float *)(this_ptr + 0x3d) = auVar28._0_4_;
                  (**(code **)(*this_ptr + 0x620))();
                  (**(code **)(*this_ptr + 0xa18))();
                  if (local_40 == (int64_t *)0x0) {
                    bVar12 = false;
                  }
                  else {
                    (**(code **)(*this_ptr + 0xa28))();
                    bVar12 = local_b0 != 0;
                    if ((local_a8 != '\0') && (local_b0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (bVar12) {
                    puVar6 = (void*)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar6 = &g_026717b8;
                    puVar6[2] = 0;
                    puVar6[3] = 0;
                    puVar6[4] = 0;
                    puVar6[5] = 0;
                    *(void*)((int64_t)puVar6 + 0x2c) = 0;
                    *(void*)((int64_t)puVar6 + 0x34) = 0;
                    (*pcVar3)();
                    (**(code **)(*this_ptr + 0xa18))();
                    if (local_38 == '\0') {
                      if (local_40 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_38 = '\0';
                    }
                    FUN_01caeb20();
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar18 = (**(code **)(*this_ptr + 0xa28))();
                    (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                }
                goto LAB_01b2f140;
              }
              if (*(int *)((int64_t)this_ptr + 0x1dc) == 0) {
                uVar10 = FUN_01d3b590();
                if ((uVar10 & 8) == 0) {
                  auVar23._0_4_ = (uint)local_58 & g_023945e0;
                  auVar23._4_4_ = uStack_54 & _UNK_023945e4;
                  auVar23._8_4_ = uStack_50 & _UNK_023945e8;
                  auVar23._12_4_ = uStack_4c & _UNK_023945ec;
                  auVar24._4_12_ = SUB1612(auVar23 | g_023945f0,4);
                  auVar24._0_4_ = SUB164(auVar23 | g_023945f0,0) + local_58;
                  auVar21 = roundss(auVar24,auVar24,0xb);
                  fVar25 = fVar14 - auVar21._0_4_;
                  local_8c = fVar25;
                  local_158 = fVar17;
                  fVar17 = fVar25;
                }
                else {
                  fVar25 = fVar17;
                  fVar17 = (fVar17 - local_158) * g_0241b638 + local_8c;
                }
                auVar21 = ZEXT416((uint)fVar25);
                FUN_01e436c0();
                FUN_01e436c0();
                ___exp10f(fVar17 / (auVar21._0_4_ * g_02390120));
                (**(code **)(*this_ptr + 0x928))();
                (**(code **)(*this_ptr + 0xa18))();
                if (local_40 == (int64_t *)0x0) {
                  bVar12 = false;
                }
                else {
                  (**(code **)(*this_ptr + 0xa28))();
                  bVar12 = local_b0 != 0;
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (bVar12) {
                  puVar6 = (void*)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar6 = &g_026717b8;
                  puVar6[2] = 0;
                  puVar6[3] = 0;
                  puVar6[4] = 0;
                  puVar6[5] = 0;
                  *(void*)((int64_t)puVar6 + 0x2c) = 0;
                  *(void*)((int64_t)puVar6 + 0x34) = 0;
                  (*pcVar3)();
                  (**(code **)(*this_ptr + 0xa18))();
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  FUN_01caeb20();
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar18 = (**(code **)(*this_ptr + 0xa28))();
                  (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
                goto LAB_01b2f140;
              }
            }
            if (fVar15 < fStack_134) {
              local_58 = local_58 + fVar13;
              fVar17 = *(float *)(this_ptr + 0x3d);
              if ((fVar17 != local_58) || (NAN(fVar17) || NAN(local_58))) {
                FUN_01e436c0();
                FUN_01e436c0();
                uVar16 = ___exp10f((fVar17 - local_58) / (auVar27._0_4_ * g_02390120));
                *(void*)((int64_t)this_ptr + 0x1ec) = uVar16;
                *(float *)(this_ptr + 0x3d) = local_58;
                (**(code **)(*this_ptr + 0x620))();
              }
            }
          }
        }
        goto LAB_01b2f140;
      }
      lVar7 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = (int64_t)local_40;
        if (((char)lVar7 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01b2f1a3:
        *(void*)(arg1 + 1) = 1;
        local_38 = '\0';
        goto LAB_01b2f1ad;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar7 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f1ed:
      *(void*)(arg1 + 1) = 1;
      if (*arg1 != 0) goto LAB_01b2f200;
LAB_01b2f829:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f83d:
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (int64_t *)this_ptr[0x40], plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x20))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01d122b0();
    }
  }
  return;
}

