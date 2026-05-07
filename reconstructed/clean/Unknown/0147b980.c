// Function: FUN_0147b980
// Address: 0147b980
// Size: 3915 bytes
// Class: Unknown

void FUN_0147b980(void* param_1)

{
  uint uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [12];
  int64_t lVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  void*puVar13;
  int64_t lVar14;
  void* pVar15;
  int iVar16;
  int64_t lVar17;
  int iVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t lVar22;
  int64_t lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  float fVar31;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t local_150 [8];
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint64_t local_130;
  int64_t local_128;
  double local_120;
  int64_t local_118;
  char local_110;
  int local_108;
  float local_104;
  int64_t local_100;
  double local_f8;
  int local_ec;
  uint8_t local_e8 [16];
  int64_t local_d8;
  void*local_d0;
  uint64_t local_c8;
  float fStack_c0;
  float fStack_bc;
  int64_t local_b0;
  int64_t local_a8;
  float local_98;
  uint8_t local_68 [31];
  uint8_t local_49;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  pvVar12 = _pthread_getspecific(param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  local_a8 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  local_f8 = *(double *)(local_40 + 0x38);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  local_120 = *(double *)(local_40 + 0x10);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_025f0d98;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  (*g_025f0db0)();
  local_d0 = puVar13;
  local_108 = FUN_00e7d780();
  if (0 < *(int *)(local_a8 + 0xc)) {
    local_104 = (float)(g_023942d0 / local_f8);
    lVar23 = 0;
    do {
      lVar14 = *(int64_t *)(*(int64_t *)(local_a8 + 0x10) + lVar23 * 8);
      lVar17 = local_a8;
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar14;
      pvVar12 = _pthread_getspecific((void*)lVar17);
      if (pvVar12 != (void *)0x0) {
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar17 = local_b0;
        }
      }
      pVar15 = (void*)lVar17;
      FUN_013de560();
      lVar14 = local_40;
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014c2a40();
      lVar17 = local_40;
      local_128 = lVar23;
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar1 = *(uint *)(lVar17 + 0xc);
      uVar21 = (uint64_t)uVar1;
      if (uVar21 == 0) {
LAB_0147c89f:
        FUN_00d50b20();
      }
      else {
        FUN_00c8e690();
        lVar23 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        local_100 = lVar23;
        ___bzero();
        if (0 < (int)uVar1) {
          auVar33 = ZEXT416((uint)g_023b4df0);
          fVar31 = g_02394288;
          while( true ) {
            uVar19 = 0;
            local_68._0_4_ = fVar31;
            do {
              fVar26 = auVar33._0_4_;
              auVar33._0_8_ = FUN_014eeba0();
              auVar33._8_8_ = extraout_XMM0_Qb;
              *(float *)(*(int64_t *)(local_100 + 0x10) + uVar19 * 4) = (float)auVar33._0_8_;
              if ((float)auVar33._0_8_ <= fVar26) {
                auVar33._0_4_ = fVar26;
              }
              uVar19 = uVar19 + 1;
            } while (uVar21 != uVar19);
            if ((g_023b4df0 < auVar33._0_4_) || (fVar31 < g_02394254)) break;
            fVar31 = fVar31 + g_0241b638;
          }
        }
        FUN_00c8e690();
        lVar23 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        fVar31 = g_02391078;
        fVar26 = g_02391074;
        if (0 < (int)uVar1) {
          uVar19 = 0;
          do {
            lVar20 = *(int64_t *)(*(int64_t *)(lVar17 + 0x10) + uVar19 * 8);
            if (lVar20 != 0) {
              FUN_00d50b00();
            }
            fVar31 = *(float *)(lVar20 + 0x44);
            if (!NAN(fVar31)) {
              *(float *)(*(int64_t *)(lVar23 + 0x10) + uVar19 * 4) =
                   SQRT(fVar31 * *(float *)(*(int64_t *)(local_100 + 0x10) + uVar19 * 4));
            }
            FUN_00d50b20();
            uVar19 = uVar19 + 1;
          } while (uVar21 != uVar19);
          uVar19 = 0;
          local_48 = CONCAT44(local_48._4_4_,g_02391078);
          local_98 = g_02391074;
          do {
            lVar20 = *(int64_t *)(*(int64_t *)(lVar17 + 0x10) + uVar19 * 8);
            if (lVar20 != 0) {
              FUN_00d50b00();
            }
            fVar26 = *(float *)(lVar20 + 0x40);
            if (NAN(fVar26)) {
              fVar26 = *(float *)(lVar20 + 0x14);
            }
            local_68._0_4_ = fVar26;
            FUN_00d50b20();
            fVar31 = fVar26;
            if ((float)local_48 <= fVar26) {
              fVar31 = (float)local_48;
            }
            if (fVar26 <= local_98) {
              fVar26 = local_98;
            }
            uVar19 = uVar19 + 1;
            local_48 = CONCAT44(local_48._4_4_,fVar31);
            local_98 = fVar26;
          } while (uVar21 != uVar19);
        }
        iVar10 = FUN_00e7d780(fVar31 / g_023908e0);
        fVar31 = (float)iVar10 * g_023908e0 + g_0241b664;
        iVar10 = FUN_00e7d780(fVar26 / g_023908e0);
        iVar10 = FUN_00e7d780((((float)iVar10 * g_023908e0 + g_023908e0) - fVar31) /
                              g_023908e0);
        FUN_00c8e690();
        local_d8 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        iVar10 = iVar10 * 0x14;
        ___bzero();
        if (0 < (int)uVar1) {
          uVar19 = 0;
          do {
            lVar20 = *(int64_t *)(*(int64_t *)(lVar17 + 0x10) + uVar19 * 8);
            if (lVar20 != 0) {
              FUN_00d50b00();
            }
            fVar26 = *(float *)(lVar20 + 0x40);
            if (NAN(fVar26)) {
              fVar26 = *(float *)(lVar20 + 0x14);
            }
            iVar11 = FUN_00e7d780(fVar26 - fVar31);
            if ((-5 < iVar11) && (iVar11 = iVar11 / 5, iVar11 < iVar10)) {
              *(float *)(*(int64_t *)(local_d8 + 0x10) + (int64_t)iVar11 * 4) =
                   *(float *)(*(int64_t *)(lVar23 + 0x10) + uVar19 * 4) +
                   *(float *)(*(int64_t *)(local_d8 + 0x10) + (int64_t)iVar11 * 4);
            }
            FUN_00d50b20();
            uVar19 = uVar19 + 1;
          } while (uVar21 != uVar19);
        }
        lVar20 = local_d8;
        local_148 = *(void*)(local_d8 + 0x10);
        FUN_015c15b0(0,iVar10);
        local_140 = *(void*)(lVar20 + 0x10);
        local_68._0_4_ = FUN_015b32a0();
        local_138 = *(void*)(lVar20 + 0x10);
        lVar22 = 0;
        FUN_015b4130(0,iVar10);
        lVar20 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar10 = -1;
        local_48 = lVar20;
        if (1 < *(int *)(lVar20 + 0xc)) {
          local_c8 = (double)(float)local_68._0_4_;
          fVar26 = 0.0;
          iVar10 = -1;
          lVar20 = 0;
          do {
            local_68._0_4_ = fVar26;
            iVar11 = FUN_00e7d850(*(void*)
                                   (*(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar20 * 8) +
                                   0x10));
            iVar16 = iVar11 - local_ec;
            if ((iVar16 != 0) &&
               (fVar25 = (float)(*(double *)
                                  (*(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar20 * 8) + 0x18
                                  ) / local_c8), g_02391090 < fVar25)) {
              iVar18 = -iVar16;
              if (0 < iVar16) {
                iVar18 = iVar16;
              }
              if (local_108 <= iVar18 && fVar26 < fVar25) {
                fVar26 = fVar25;
                iVar10 = iVar11;
              }
            }
            lVar20 = lVar20 + 1;
            lVar22 = local_48;
          } while (lVar20 < *(int *)(local_48 + 0xc));
        }
        pvVar12 = _pthread_getspecific((void*)lVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar27 = (double)FUN_014bb310();
        if ((dVar27 <= g_023908d0) || (iVar10 == -1)) {
LAB_0147c861:
          FUN_00d50b20();
        }
        else {
          auVar28._0_4_ = (uint)(iVar10 < local_ec) << 0x1f;
          auVar28._4_4_ = (uint)(iVar10 < local_ec) << 0x1f;
          auVar28._8_8_ = 0;
          auVar30._4_4_ = local_ec;
          auVar30._0_4_ = iVar10;
          auVar30._8_8_ = 0;
          auVar32._4_4_ = iVar10;
          auVar32._0_4_ = local_ec;
          auVar32._8_8_ = 0;
          auVar33 = blendvps(auVar32,auVar30,auVar28);
          local_c8._0_4_ = fVar31 + (float)auVar33._0_4_ * g_0240dfc0;
          local_c8._4_4_ = fVar31 + (float)auVar33._4_4_ * _UNK_0240dfc4;
          fStack_c0 = (float)auVar33._8_4_ * _UNK_0240dfc8 + 0.0;
          fStack_bc = (float)auVar33._12_4_ * _UNK_0240dfcc + 0.0;
          auVar29._4_4_ = local_c8._4_4_;
          auVar29._0_4_ = local_c8._4_4_;
          auVar29._8_4_ = fStack_bc;
          auVar29._12_4_ = fStack_bc;
          local_e8._4_12_ = auVar29._4_12_;
          local_e8._0_4_ = (local_c8._4_4_ - (float)local_c8) * g_0239011c;
          FUN_00c8e690();
          lVar20 = local_40;
          if ((local_38 == '\0') &&
             (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          if (0 < (int)uVar1) {
            auVar2._4_4_ = local_c8._4_4_;
            auVar2._0_4_ = (float)local_c8;
            auVar2._8_4_ = fStack_c0;
            auVar2._12_4_ = fStack_bc;
            local_68._4_12_ = auVar2._4_12_;
            local_68._0_4_ = (float)local_c8 + (float)local_e8._0_4_;
            uVar19 = 0;
            do {
              lVar22 = *(int64_t *)(*(int64_t *)(lVar17 + 0x10) + uVar19 * 8);
              if (lVar22 != 0) {
                FUN_00d50b00();
              }
              fVar31 = *(float *)(lVar22 + 0x40);
              if (NAN(fVar31)) {
                fVar31 = *(float *)(lVar22 + 0x14);
              }
              uVar24 = -(uint)(*(float *)(*(int64_t *)(lVar23 + 0x10) + uVar19 * 4) < g_02391090)
              ;
              fVar31 = (float)(local_68._0_4_ & uVar24 | ~uVar24 & (uint)fVar31);
              local_68._0_16_ = ZEXT416((uint)fVar31);
              fVar26 = (float)((uint)(fVar31 - (float)local_c8) & g_02390140);
              fVar31 = (float)((uint)(fVar31 - local_c8._4_4_) & _UNK_02390144);
              if (fVar31 <= fVar26) {
                fVar26 = g_02390124 - fVar31 / (float)local_e8._0_4_;
                fVar31 = 0.0;
                if (0.0 <= fVar26) {
                  fVar31 = fVar26;
                }
                *(float *)(*(int64_t *)(lVar20 + 0x10) + uVar19 * 4) = fVar31;
              }
              else {
                fVar26 = g_02390124 - fVar26 / (float)local_e8._0_4_;
                fVar31 = 0.0;
                if (0.0 <= fVar26) {
                  fVar31 = fVar26;
                }
                *(uint *)(*(int64_t *)(lVar20 + 0x10) + uVar19 * 4) = (uint)fVar31 ^ g_023945e0;
              }
              FUN_00d50b20();
              uVar19 = uVar19 + 1;
            } while (uVar21 != uVar19);
          }
          local_130 = *(void*)(lVar20 + 0x10);
          FUN_015c15b0(1,uVar1);
          local_c8._0_4_ = (float)((int)uVar1 / 2);
          if (2 < (int)uVar1) {
            auVar3._12_4_ = 0;
            auVar3._0_12_ = local_68._4_12_;
            local_68._0_16_ = auVar3 << 0x20;
            uVar21 = 1;
            do {
              lVar22 = *(int64_t *)(*(int64_t *)(lVar17 + 0x10) + uVar21 * 8);
              if (lVar22 != 0) {
                FUN_00d50b00();
              }
              fVar31 = (float)((uint)(*(float *)(*(int64_t *)(lVar20 + 0x10) + -4 + uVar21 * 4) -
                                     *(float *)(*(int64_t *)(lVar20 + 0x10) + 4 + uVar21 * 4)) &
                              g_02390140);
              local_e8 = ZEXT416((uint)fVar31);
              if ((float)local_68._0_4_ < fVar31) {
                local_c8._0_4_ = (float)uVar21;
              }
              if (lVar22 != 0) {
                FUN_00d50b20();
              }
              uVar21 = uVar21 + 1;
              fVar31 = (float)local_e8._0_4_;
              if ((float)local_e8._0_4_ <= (float)local_68._0_4_) {
                fVar31 = (float)local_68._0_4_;
              }
              local_68._0_4_ = fVar31;
            } while (uVar1 - 1 != uVar21);
          }
          auVar4._12_4_ = 0;
          auVar4._0_12_ = local_e8._4_12_;
          local_e8 = auVar4 << 0x20;
          auVar8 = local_68._4_12_;
          auVar5._12_4_ = 0;
          auVar5._0_12_ = local_68._4_12_;
          local_68._0_16_ = auVar5 << 0x20;
          if (0 < (int)(float)local_c8) {
            uVar19 = (uint64_t)(uint)(float)local_c8;
            auVar6._12_4_ = 0;
            auVar6._0_12_ = auVar8;
            local_68._0_16_ = auVar6 << 0x20;
            uVar21 = 0;
            do {
              if (*(int64_t *)(*(int64_t *)(lVar17 + 0x10) + uVar21 * 8) == 0) {
                fVar31 = *(float *)(*(int64_t *)(lVar23 + 0x10) + uVar21 * 4);
              }
              else {
                FUN_00d50b00();
                fVar31 = *(float *)(*(int64_t *)(lVar23 + 0x10) + uVar21 * 4);
                FUN_00d50b20();
              }
              if (fVar31 <= (float)local_68._0_4_) {
                fVar31 = (float)local_68._0_4_;
              }
              local_68._0_4_ = fVar31;
              uVar21 = uVar21 + 1;
            } while (uVar19 != uVar21);
          }
          if ((int)(float)local_c8 < (int)uVar1) {
            lVar22 = (int64_t)(int)(float)local_c8;
            iVar10 = uVar1 - (int)(float)local_c8;
            auVar7._12_4_ = 0;
            auVar7._0_12_ = local_e8._4_12_;
            local_e8 = auVar7 << 0x20;
            do {
              if (*(int64_t *)(*(int64_t *)(lVar17 + 0x10) + lVar22 * 8) == 0) {
                fVar31 = *(float *)(*(int64_t *)(lVar23 + 0x10) + lVar22 * 4);
              }
              else {
                FUN_00d50b00();
                fVar31 = *(float *)(*(int64_t *)(lVar23 + 0x10) + lVar22 * 4);
                FUN_00d50b20();
              }
              if (fVar31 <= (float)local_e8._0_4_) {
                fVar31 = (float)local_e8._0_4_;
              }
              local_e8._0_4_ = fVar31;
              lVar22 = lVar22 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          lVar22 = local_48;
          if (((g_0239011c < (float)local_68._0_4_) && (g_0239011c < (float)local_e8._0_4_)) &&
             ((g_023934c8 < (double)(int)(float)local_c8 * local_f8 &&
              (g_023934c8 < (double)(int)(uVar1 - (int)(float)local_c8) * local_f8)))) {
            local_49 = 0;
            dVar27 = (double)*(int *)(*(int64_t *)
                                       (*(int64_t *)(lVar17 + 0x10) +
                                       (int64_t)(int)(float)local_c8 * 8) + 0xc);
            local_68._0_8_ = dVar27;
            pvVar12 = _pthread_getspecific((void*)*(int64_t *)(lVar17 + 0x10));
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_118 = local_b0;
            local_110 = '\0';
            FUN_0135f200((int64_t)(dVar27 * local_f8 * local_120),&local_118,local_150,&local_49);
            lVar9 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar20 != 0) {
            FUN_00d50b20();
          }
          if (lVar22 != 0) goto LAB_0147c861;
        }
        if (local_d8 != 0) {
          FUN_00d50b20();
        }
        if (lVar23 != 0) {
          FUN_00d50b20();
        }
        if (local_100 != 0) {
          FUN_00d50b20();
        }
        if (lVar17 != 0) goto LAB_0147c89f;
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar23 = local_128;
      if (local_b0 != 0) {
        FUN_00d50b20();
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < *(int *)(local_a8 + 0xc));
    if (local_d0 == (void*)0x0) goto LAB_0147c922;
  }
  FUN_00d50b20();
LAB_0147c922:
  FUN_00d50b20();
  return;
}

