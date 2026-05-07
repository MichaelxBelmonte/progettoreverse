// Function: FUN_01836220
// Address: 01836220
// Size: 6198 bytes
// Class: Unknown

void FUN_01836220(double param_1,double param_2,double param_3,uint32_t param_4)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void*puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  void*puVar12;
  void*puVar13;
  uint uVar14;
  int64_t *in_RCX;
  int64_t lVar15;
  int64_t lVar16;
  int iVar17;
  int64_t *in_RDX;
  int64_t lVar18;
  int iVar19;
  int64_t *arg1;
  uint64_t uVar20;
  int64_t lVar21;
  int iVar22;
  int64_t *this_ptr;
  int64_t *in_R8;
  int iVar23;
  int64_t *in_R9;
  int64_t lVar24;
  int iVar25;
  int64_t lVar26;
  uint64_t uVar27;
  int64_t lVar28;
  int64_t lVar29;
  char cVar30;
  uint uVar31;
  uint64_t uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  uint32_t uVar37;
  float fVar38;
  uint32_t uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  float in_XMM5_Da;
  uint32_t unaff_XMM6_Da;
  int64_t *local_res8;
  char local_res10;
  int64_t *local_res18;
  int64_t local_res20;
  int64_t local_e8;
  char local_e0;
  int64_t local_a0;
  int64_t local_90;
  int64_t local_80;
  int local_70;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  char local_32;
  char local_31;
  
  local_80 = *this_ptr;
  local_31 = (char)this_ptr[1];
  bVar33 = local_31 != '\0';
  bVar34 = local_80 != 0;
  if (bVar34 && bVar33) {
    FUN_00d50b00();
  }
  local_90 = *arg1;
  local_32 = (char)arg1[1];
  bVar35 = local_32 != '\0';
  bVar36 = local_90 != 0;
  if (bVar36 && bVar35) {
    FUN_00d50b00();
  }
  lVar15 = *in_RDX;
  cVar1 = (char)in_RDX[1];
  if (lVar15 != 0 && cVar1 != '\0') {
    FUN_00d50b00();
  }
  local_a0 = lVar15;
  cVar30 = cVar1;
  if (local_res10 != '\0') {
    lVar26 = *in_RCX;
    cVar30 = (char)in_RCX[1];
    if (local_80 == lVar26) {
      if (((cVar30 != '\0') && (local_31 == '\0')) && (local_80 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      if ((cVar30 != '\0') && (lVar26 != 0)) {
        FUN_00d50b00();
      }
      local_80 = lVar26;
      local_31 = cVar30;
      if (bVar34 && bVar33) {
        FUN_00d50b20();
      }
    }
    lVar26 = *in_R8;
    cVar30 = (char)in_R8[1];
    if (local_90 == lVar26) {
      if (((cVar30 != '\0') && (local_32 == '\0')) && (local_90 != 0)) {
        local_32 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      if ((cVar30 != '\0') && (lVar26 != 0)) {
        FUN_00d50b00();
      }
      local_90 = lVar26;
      local_32 = cVar30;
      if (bVar36 && bVar35) {
        FUN_00d50b20();
      }
    }
    local_a0 = *in_R9;
    cVar30 = (char)in_R9[1];
    if (lVar15 == local_a0) {
      bVar33 = cVar30 != '\0';
      local_a0 = lVar15;
      cVar30 = cVar1;
      if (((bVar33) && (cVar1 == '\0')) && (lVar15 != 0)) {
        FUN_00d50b00();
        cVar30 = '\x01';
      }
    }
    else {
      if ((cVar30 != '\0') && (local_a0 != 0)) {
        FUN_00d50b00();
      }
      if (lVar15 != 0 && cVar1 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  uVar8 = *(uint *)(*in_RCX + 0xc);
  iVar2 = *(int *)(**(int64_t **)(*in_RCX + 0x10) + 0x18);
  iVar19 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar19 = iVar2;
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025f0d98;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  (*g_025f0db0)();
  dVar43 = *(double *)(*local_res18 + 0x38);
  iVar5 = FUN_014832c0();
  dVar43 = (double)(float)(g_023b2c70 / dVar43);
  uVar10 = FUN_00e7d850(SUB84((param_2 + g_0241b680) * dVar43,0));
  uVar37 = _powf(unaff_XMM6_Da,g_02394298);
  fVar38 = (float)FUN_014b7610(param_4);
  uVar14 = (uint)uVar10;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar11 = uVar10 & 0xffffffff;
  if (0 < (int)uVar14) {
    uVar32 = 0;
    do {
      iVar6 = FUN_00e7d850(SUB84(((double)(int)uVar32 / dVar43) * param_1,0));
      lVar15 = (int64_t)iVar6;
      iVar6 = *(int *)(*local_res8 + 0x18);
      iVar17 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar17 = iVar6;
      }
      iVar23 = (iVar17 >> 3) + -1;
      iVar17 = iVar23;
      if (7 < iVar6) {
        iVar17 = 0;
      }
      uVar20 = (uint64_t)iVar17;
      lVar26 = *(int64_t *)(*local_res8 + 0x10);
      if (lVar15 < *(int64_t *)(lVar26 + uVar20 * 8)) {
        do {
          bVar33 = uVar20 == 0;
          uVar20 = uVar20 - 1;
          if (bVar33) {
            iVar6 = 0;
            iVar17 = 0;
            if (iVar23 < 1) goto LAB_01836653;
            goto LAB_0183674b;
          }
        } while (lVar15 < *(int64_t *)(lVar26 + uVar20 * 8));
        uVar7 = (uint)uVar20;
      }
      else {
        lVar21 = 0;
        do {
          iVar6 = iVar23;
          if (~((int64_t)iVar23 + 1U) + uVar20 + lVar21 == -2) goto LAB_01836653;
          lVar28 = lVar21 + 1;
          lVar24 = lVar21 * 8;
          lVar21 = lVar28;
        } while (*(int64_t *)(lVar26 + uVar20 * 8 + 8 + lVar24) <= lVar15);
        uVar7 = (iVar17 + (int)lVar28) - 1;
        uVar20 = (uint64_t)uVar7;
      }
      iVar6 = (int)uVar20;
      iVar17 = iVar6;
      if ((int)uVar7 < iVar23) {
LAB_0183674b:
        iVar6 = iVar17;
        if (*(int64_t *)(lVar26 + 8 + (int64_t)iVar6 * 8) - lVar15 <
            lVar15 - *(int64_t *)(lVar26 + (int64_t)iVar6 * 8)) {
          iVar6 = iVar6 + 1;
        }
      }
LAB_01836653:
      *(int *)(*(int64_t *)(local_58 + 0x10) + uVar32 * 4) = iVar6;
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar11);
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  uVar7 = iVar19 >> 2;
  uVar32 = (uint64_t)uVar7;
  if (3 < iVar2) {
    uVar20 = uVar32;
    if ((int)uVar14 < 1) {
      do {
        FUN_00c8e690();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_50 = '\0';
        FUN_00d21140();
        FUN_015c15b0(uVar37,uVar10);
        FUN_00d50b20();
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    else {
      uVar20 = 0;
      do {
        FUN_00c8e690();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_50 = '\0';
        FUN_00d21140();
        lVar15 = *(int64_t *)(local_58 + 0x10);
        if (in_XMM5_Da <= g_02394244) {
          lVar26 = *(int64_t *)(local_80 + 0x10);
          lVar21 = *(int64_t *)(local_58 + 0x10);
          if (uVar11 == 1) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            do {
              *(void*)(lVar21 + uVar27 * 4) =
                   *(void*)
                    (*(int64_t *)
                      (*(int64_t *)(lVar26 + (int64_t)*(int *)(lVar15 + uVar27 * 4) * 8) + 0x10) +
                    uVar20 * 4);
              *(void*)(lVar21 + 4 + uVar27 * 4) =
                   *(void*)
                    (*(int64_t *)
                      (*(int64_t *)(lVar26 + (int64_t)*(int *)(lVar15 + 4 + uVar27 * 4) * 8) +
                      0x10) + uVar20 * 4);
              uVar27 = uVar27 + 2;
            } while ((uVar14 & 0xfffffffe) != uVar27);
          }
          if ((uVar10 & 1) != 0) {
            *(void*)(lVar21 + uVar27 * 4) =
                 *(void*)
                  (*(int64_t *)
                    (*(int64_t *)(lVar26 + (int64_t)*(int *)(lVar15 + uVar27 * 4) * 8) + 0x10) +
                  uVar20 * 4);
          }
        }
        else {
          fVar41 = (float)(int)uVar20;
          lVar26 = *(int64_t *)(local_90 + 0x10);
          lVar21 = *(int64_t *)(local_58 + 0x10);
          if (uVar11 == 1) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            do {
              uVar39 = _logf(*(float *)(*(int64_t *)
                                         (*(int64_t *)
                                           (lVar26 + (int64_t)*(int *)(lVar15 + uVar27 * 4) * 8) +
                                         0x10) + uVar20 * 4) / fVar41);
              *(void*)(lVar21 + uVar27 * 4) = uVar39;
              uVar39 = _logf(*(float *)(*(int64_t *)
                                         (*(int64_t *)
                                           (lVar26 + (int64_t)*(int *)(lVar15 + 4 + uVar27 * 4) * 8
                                           ) + 0x10) + uVar20 * 4) / fVar41);
              *(void*)(lVar21 + 4 + uVar27 * 4) = uVar39;
              uVar27 = uVar27 + 2;
            } while ((uVar14 & 0xfffffffe) != uVar27);
          }
          if ((uVar10 & 1) != 0) {
            uVar39 = _logf(*(float *)(*(int64_t *)
                                       (*(int64_t *)
                                         (lVar26 + (int64_t)*(int *)(lVar15 + uVar27 * 4) * 8) +
                                       0x10) + uVar20 * 4) / fVar41);
            *(void*)(lVar21 + uVar27 * 4) = uVar39;
          }
        }
        FUN_015c15b0(uVar37,uVar10);
        FUN_00d50b20();
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar32);
    }
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02572358;
  (*pcVar4)();
  fVar38 = (g_023908dc - fVar38) + g_0241b660;
  iVar19 = 0;
  local_60 = 0;
  bVar33 = false;
  do {
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    local_50 = '\0';
    FUN_00d21140();
    fVar41 = (float)iVar19 * g_02417040 + g_02394240;
    if (0 < (int)uVar14) {
      if (iVar2 < 4) {
        uVar20 = 0;
        do {
          lVar26 = (int64_t)*(int *)(*(int64_t *)(local_58 + 0x10) + uVar20 * 4);
          lVar15 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar26 * 8);
          if (local_60 == lVar15) {
            if ((!bVar33) && (local_60 != 0)) {
              bVar33 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar15 != 0) {
              FUN_00d50b00();
            }
            if ((bVar33) && (local_60 != 0)) {
              FUN_00d50b20();
              bVar33 = true;
              local_60 = lVar15;
            }
            else {
              bVar33 = true;
              local_60 = lVar15;
            }
          }
          if (fVar41 / *(float *)(*(int64_t *)(local_a0 + 0x10) + lVar26 * 4) < (float)(int)uVar7)
          {
            *(void*)(*(int64_t *)(local_58 + 0x10) + uVar20 * 4) = 0;
          }
          uVar20 = uVar20 + 1;
        } while (uVar11 != uVar20);
      }
      else {
        uVar20 = 0;
        do {
          lVar26 = (int64_t)*(int *)(*(int64_t *)(local_58 + 0x10) + uVar20 * 4);
          lVar15 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar26 * 8);
          if (local_60 == lVar15) {
            if ((!bVar33) && (local_60 != 0)) {
              bVar33 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar15 != 0) {
              FUN_00d50b00();
            }
            if ((bVar33) && (local_60 != 0)) {
              FUN_00d50b20();
              bVar33 = true;
              local_60 = lVar15;
            }
            else {
              bVar33 = true;
              local_60 = lVar15;
            }
          }
          fVar42 = fVar41 / *(float *)(*(int64_t *)(local_a0 + 0x10) + lVar26 * 4);
          if (fVar42 < (float)(int)uVar7) {
            pfVar3 = *(float **)(local_60 + 0x10);
            uVar31 = (uint)fVar42;
            if ((int)uVar31 < 0) {
              fVar42 = *pfVar3;
            }
            else if ((int)uVar31 < (int)(uVar7 - 1)) {
              iVar6 = FUN_00e7d780((fVar42 - (float)(int)uVar31) * g_023d5f44);
              lVar15 = FUN_00e84280();
              fVar42 = (pfVar3[(uint64_t)uVar31 + 1] - pfVar3[uVar31]) *
                       *(float *)(lVar15 + (int64_t)iVar6 * 4) + pfVar3[uVar31];
            }
            else {
              fVar42 = pfVar3[uVar7 - 1];
            }
            *(float *)(*(int64_t *)(local_58 + 0x10) + uVar20 * 4) = fVar42;
          }
          uVar20 = uVar20 + 1;
        } while (uVar11 != uVar20);
      }
    }
    FUN_015c15b0(uVar37,uVar10);
    FUN_00d50b20();
    iVar19 = iVar19 + 1;
  } while (iVar19 != 500);
  if (0 < (int)uVar8) {
    fVar41 = (float)(int)fVar38;
    uVar10 = 0;
    fVar38 = g_02390d00;
    do {
      fVar42 = (float)(((double)*(int64_t *)(*(int64_t *)(*local_res8 + 0x10) + uVar10 * 8) /
                       param_1) * dVar43);
      if (g_0239011c < fVar42 - fVar38) {
        fVar38 = (float)_logf(*(float *)(*(int64_t *)(*in_RDX + 0x10) + uVar10 * 4) * g_02394204)
        ;
        fVar38 = (float)FUN_014b7610(fVar38 * g_02394208);
        FUN_014328b0(SUB84((double)fVar42,0),(double)(fVar38 + fVar41));
        if (local_e0 == '\0') {
          if (local_e8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        FUN_00d21140();
        if (local_e8 != 0) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        fVar38 = fVar42;
        if (local_res10 != '\0') {
          fVar40 = (float)_logf(*(float *)(*(int64_t *)(*in_R9 + 0x10) + uVar10 * 4) * g_02394204
                               );
          fVar40 = (float)FUN_014b7610(fVar40 * g_02394208);
          FUN_014328b0(SUB84((double)fVar42,0),(double)(fVar40 + fVar41));
          if (local_e0 == '\0') {
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          FUN_00d21140();
          if (local_e8 != 0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  bVar34 = in_XMM5_Da <= g_02394244;
  bVar35 = g_0239011c <= in_XMM5_Da;
  if (0 < (int)uVar14) {
    fVar38 = (float)(g_0238fee8 / param_3) * g_02417044 * g_0239011c;
    lVar15 = (int64_t)iVar5;
    uVar10 = 2;
    if (2 < (int)uVar7) {
      uVar10 = uVar32;
    }
    iVar19 = 0;
    uVar32 = 0;
    do {
      lVar26 = (int64_t)*(int *)(*(int64_t *)(local_58 + 0x10) + uVar32 * 4);
      fVar41 = *(float *)(*(int64_t *)(local_a0 + 0x10) + lVar26 * 4);
      lVar26 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar26 * 8);
      if (lVar26 != 0) {
        FUN_00d50b00();
      }
      lVar28 = (int64_t)iVar19;
      lVar21 = local_res20 + (int64_t)(iVar5 * (int)uVar32) * 4;
      if (bVar35 && bVar34) {
        lVar24 = 0;
        do {
          if (lVar24 + 500 < lVar15) {
            *(float *)(local_res20 + 2000 + lVar28 * 4 + lVar24 * 4) =
                 ((float)(int)lVar24 * g_02417040 + g_02394240) *
                 *(float *)(*(int64_t *)(*(int64_t *)(puVar13[2] + lVar24 * 8) + 0x10) +
                           uVar32 * 4) * g_023b81d4;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 500);
      }
      else {
        uVar8 = FUN_00e7d780(fVar41 * g_02417044 * g_0239011c);
        if (7 < iVar2) {
          if (in_XMM5_Da <= g_02394244) {
            if ((int)uVar8 < 0) {
              iVar6 = 1;
              do {
                if (g_02394264 < (float)iVar6 * fVar41) break;
                iVar17 = ((int)(((float)iVar6 * fVar41 + g_0241b660) * g_02417044) - uVar8) +
                         500;
                if (iVar17 < iVar5) {
                  *(void*)(lVar21 + (int64_t)iVar17 * 4) = 0;
                }
                iVar6 = iVar6 + 1;
                local_70 = (int)uVar10;
              } while (local_70 != iVar6);
            }
            else {
              uVar20 = 1;
              do {
                fVar42 = (float)(int)uVar20 * fVar41;
                if (g_02394264 < fVar42) break;
                fVar40 = *(float *)(*(int64_t *)(*(int64_t *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                   uVar32 * 4) * fVar42 * g_023b81d4;
                lVar29 = (int64_t)(int)((fVar42 + g_0241b660) * g_02417044);
                lVar24 = (int)-uVar8 + lVar29 + 500;
                if (lVar24 < lVar15) {
                  *(float *)(lVar21 + lVar24 * 4) = fVar40;
                }
                lVar29 = lVar29 + 500;
                if ((uVar8 & 0x7fffffff) != 0) {
                  lVar24 = local_res20 + (int64_t)(int)-uVar8 * 4 + (lVar28 + lVar29) * 4;
                  lVar18 = (1 - (int64_t)(int)uVar8) + lVar29;
                  lVar16 = 2;
                  do {
                    if (lVar18 < lVar15) {
                      *(float *)(lVar24 + -4 + lVar16 * 4) = fVar40;
                    }
                    if (lVar18 + 1 < lVar15) {
                      *(float *)(lVar24 + lVar16 * 4) = fVar40;
                    }
                    lVar16 = lVar16 + 2;
                    lVar18 = lVar18 + 2;
                  } while ((int)lVar16 + uVar8 * -2 != 2);
                }
                iVar6 = (int)lVar29 - uVar8;
                if (iVar6 < iVar5) {
                  *(void*)(lVar21 + (int64_t)iVar6 * 4) = 0;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar10);
            }
          }
          else {
            uVar14 = uVar8;
            if ((int)uVar8 < 1) {
              uVar14 = -uVar8;
            }
            if ((int)uVar8 < 0) {
              uVar20 = 1;
              do {
                fVar42 = (float)(int)uVar20 * fVar41;
                if (g_02394264 < fVar42) break;
                iVar6 = ((int)((fVar42 + g_0241b660) * g_02417044) - uVar8) + 500;
                if (iVar6 < iVar5) {
                  *(void*)(lVar21 + (int64_t)iVar6 * 4) = 0;
                }
                uVar20 = uVar20 + 1;
              } while (uVar10 != uVar20);
            }
            else {
              lVar24 = (int64_t)(int)-uVar8;
              uVar20 = 1;
              do {
                fVar42 = (float)(int)uVar20 * fVar41;
                if (g_02394264 < fVar42) break;
                iVar6 = (int)((fVar42 + g_0241b660) * g_02417044) + 500;
                fVar42 = *(float *)(*(int64_t *)(*(int64_t *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                   uVar32 * 4) * g_023908e0;
                lVar18 = (int64_t)iVar6;
                lVar29 = lVar24;
                if (((uVar8 + uVar14 + 1 & 1) != 0) &&
                   (lVar29 = lVar24 + 1, lVar24 + lVar18 < lVar15)) {
                  *(float *)(lVar21 + (lVar24 + lVar18) * 4) = fVar42;
                }
                if (uVar8 != -uVar14) {
                  lVar16 = local_res20 + lVar28 * 4 + lVar18 * 4;
                  do {
                    if (lVar18 + lVar29 < lVar15) {
                      *(float *)(lVar16 + lVar29 * 4) = fVar42;
                    }
                    if (lVar18 + lVar29 + 1 < lVar15) {
                      *(float *)(lVar16 + 4 + lVar29 * 4) = fVar42;
                    }
                    lVar29 = lVar29 + 2;
                  } while (uVar14 + 1 != (int)lVar29);
                }
                iVar6 = iVar6 - uVar8;
                if (iVar6 < iVar5) {
                  *(void*)(lVar21 + (int64_t)iVar6 * 4) = 0;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar10);
            }
          }
        }
      }
      iVar6 = FUN_00e7d780(fVar38);
      if (7 < iVar2) {
        iVar17 = iVar6 * 2;
        if (in_XMM5_Da <= g_02394244) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x41a;
            uVar20 = 1;
            do {
              if (g_02394264 < (float)(int)uVar20 * fVar41) break;
              if (iVar6 < iVar5) {
                *(void*)(lVar21 + (int64_t)iVar6 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar6 = iVar6 + iVar17;
            } while (uVar10 != uVar20);
          }
          else {
            iVar23 = iVar17 + 0x41a;
            uVar20 = 1;
            do {
              fVar42 = (float)(int)uVar20 * fVar41;
              if (g_02394264 < fVar42) break;
              fVar42 = fVar42 * *(float *)(*(int64_t *)
                                            (*(int64_t *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                          uVar32 * 4) * g_023b81d4;
              iVar22 = iVar17 * (int)uVar20;
              lVar24 = (int64_t)iVar22 + (int64_t)-iVar6 + 0x41a;
              if (lVar24 < lVar15) {
                *(float *)(lVar21 + lVar24 * 4) = fVar42;
              }
              if (iVar17 != 0) {
                lVar24 = local_res20 + (int64_t)-iVar6 * 4 + (lVar28 + iVar23) * 4;
                lVar29 = (int64_t)iVar23 + (1 - (int64_t)iVar6);
                lVar18 = 2;
                do {
                  if (lVar29 < lVar15) {
                    *(float *)(lVar24 + -4 + lVar18 * 4) = fVar42;
                  }
                  if (lVar29 + 1 < lVar15) {
                    *(float *)(lVar24 + lVar18 * 4) = fVar42;
                  }
                  lVar18 = lVar18 + 2;
                  lVar29 = lVar29 + 2;
                } while ((int)lVar18 + iVar6 * -2 != 2);
              }
              iVar22 = (iVar22 + 0x41a) - iVar6;
              if (iVar22 < iVar5) {
                *(void*)(lVar21 + (int64_t)iVar22 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar23 = iVar23 + iVar17;
            } while (uVar20 != uVar10);
          }
        }
        else {
          iVar23 = iVar6;
          if (iVar6 < 1) {
            iVar23 = -iVar6;
          }
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x41a;
            uVar20 = 1;
            do {
              if (g_02394264 < (float)(int)uVar20 * fVar41) break;
              if (iVar6 < iVar5) {
                *(void*)(lVar21 + (int64_t)iVar6 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar6 = iVar6 + iVar17;
            } while (uVar10 != uVar20);
          }
          else {
            lVar24 = (int64_t)-iVar6;
            iVar22 = iVar17 + 0x41a;
            uVar20 = 1;
            do {
              if (g_02394264 < (float)(int)uVar20 * fVar41) break;
              iVar25 = iVar17 * (int)uVar20 + 0x41a;
              fVar42 = *(float *)(*(int64_t *)(*(int64_t *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                 uVar32 * 4) * g_023908e0;
              lVar29 = lVar24;
              if (((iVar6 + iVar23 + 1U & 1) != 0) &&
                 (lVar18 = iVar25 + lVar24, lVar29 = lVar24 + 1, lVar18 < lVar15)) {
                *(float *)(lVar21 + lVar18 * 4) = fVar42;
              }
              if (iVar6 != -iVar23) {
                lVar16 = (int64_t)iVar22;
                lVar18 = local_res20 + lVar28 * 4 + lVar16 * 4;
                do {
                  if (lVar16 + lVar29 < lVar15) {
                    *(float *)(lVar18 + lVar29 * 4) = fVar42;
                  }
                  if (lVar16 + lVar29 + 1 < lVar15) {
                    *(float *)(lVar18 + 4 + lVar29 * 4) = fVar42;
                  }
                  lVar29 = lVar29 + 2;
                } while (iVar23 + 1 != (int)lVar29);
              }
              iVar25 = iVar25 - iVar6;
              if (iVar25 < iVar5) {
                *(void*)(lVar21 + (int64_t)iVar25 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar22 = iVar22 + iVar17;
            } while (uVar20 != uVar10);
          }
        }
      }
      if (lVar26 != 0) {
        FUN_00d50b20();
      }
      uVar32 = uVar32 + 1;
      iVar19 = iVar19 + iVar5;
    } while (uVar32 != uVar11);
  }
  if ((bVar33) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((cVar30 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_32 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}

