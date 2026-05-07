// Function: FUN_012b7100
// Address: 012b7100
// Size: 4833 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_012b7100(char param_1,float param_2,uint32_t param_3,int64_t *param_4,uint param_5,
                 int *param_6,char *param_7,char *param_8,char *param_9,char *param_10)

{
  float fVar1;
  uint8_t auVar2 [16];
  int iVar3;
  uint64_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint64_t uVar13;
  void *pvVar14;
  void *pvVar15;
  int64_t lVar16;
  uint64_t uVar17;
  float *pfVar18;
  int64_t lVar19;
  dword *pdVar20;
  int64_t lVar21;
  char in_DL;
  uint uVar22;
  uint64_t uVar23;
  int64_t lVar24;
  int64_t lVar25;
  float *pfVar26;
  int64_t lVar27;
  float *pfVar28;
  int unaff_ESI;
  uint64_t uVar29;
  uint64_t uVar30;
  int64_t this_ptr;
  uint64_t uVar31;
  uint64_t uVar32;
  uint uVar33;
  uint64_t in_R8;
  uint64_t uVar34;
  uint64_t uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  uint32_t in_XMM5_Da;
  float fVar47;
  uint32_t in_XMM5_Db;
  uint local_res20;
  int64_t local_c0;
  char local_b8;
  char local_98;
  int local_40;
  int local_3c;
  
  pfVar28 = g_028ac5d0;
  if ((unaff_ESI == 0) && (pfVar26 = g_028ac5c0, param_1 == '\0')) goto LAB_012b8249;
  uVar22 = *(uint *)(this_ptr + 0x160);
  uVar29 = (uint64_t)uVar22;
  uVar32 = in_R8;
  if (0 < (int)uVar22) {
    fVar36 = g_023d5f44 / (float)(int)param_5;
    lVar27 = *(int64_t *)(this_ptr + 0x1e0);
    if (local_res20 == 0) {
      if (param_5 == 0) {
        uVar35 = (uint64_t)(uVar22 & 7);
        if (6 < uVar29 - 1) {
          lVar27 = -(uint64_t)(uVar22 & 0xfffffff8);
          do {
            lVar27 = lVar27 + 8;
          } while (lVar27 != 0);
        }
        for (; uVar35 != 0; uVar35 = uVar35 - 1) {
        }
      }
      else {
        uVar35 = 0;
        do {
          pfVar26 = *(float **)(lVar27 + uVar35 * 8);
          if ((param_5 & 1) == 0) {
            fVar38 = 0.0;
            uVar33 = param_5;
          }
          else {
            *pfVar26 = pfVar28[0x2000] * *pfVar26;
            pfVar26 = pfVar26 + 1;
            fVar38 = fVar36 + 0.0;
            uVar33 = param_5 - 1;
          }
          if (param_5 != 1) {
            lVar19 = 0;
            do {
              pfVar26[lVar19] = pfVar28[(int64_t)(int)fVar38 + 0x2000] * pfVar26[lVar19];
              pfVar26[lVar19 + 1] =
                   pfVar28[(int64_t)(int)(fVar38 + fVar36) + 0x2000] * pfVar26[lVar19 + 1];
              fVar38 = fVar38 + fVar36 + fVar36;
              lVar19 = lVar19 + 2;
            } while (uVar33 != (uint)lVar19);
          }
          uVar35 = uVar35 + 1;
          uVar32 = (uint64_t)(param_5 - 1);
        } while (uVar35 != uVar29);
      }
    }
    else {
      fVar38 = g_023d5f44 / (float)(int)local_res20;
      uVar33 = local_res20 - 1;
      uVar32 = (uint64_t)uVar33;
      if (param_5 == 0) {
        uVar35 = 0;
        do {
          pfVar26 = *(float **)(lVar27 + uVar35 * 8);
          if ((local_res20 & 1) == 0) {
            fVar36 = 0.0;
            uVar11 = local_res20;
          }
          else {
            *pfVar26 = *pfVar28 * *pfVar26;
            pfVar26 = pfVar26 + 1;
            uVar11 = uVar33;
            fVar36 = fVar38 + 0.0;
          }
          if (local_res20 != 1) {
            lVar19 = 0;
            do {
              pfVar26[lVar19] = pfVar28[(int)fVar36] * pfVar26[lVar19];
              pfVar26[lVar19 + 1] = pfVar28[(int)(fVar36 + fVar38)] * pfVar26[lVar19 + 1];
              fVar36 = fVar36 + fVar38 + fVar38;
              lVar19 = lVar19 + 2;
            } while (uVar11 != (uint)lVar19);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar29);
      }
      else {
        uVar35 = 0;
        do {
          pfVar18 = *(float **)(lVar27 + uVar35 * 8);
          pfVar26 = pfVar18;
          uVar11 = local_res20;
          fVar43 = 0.0;
          if ((local_res20 & 1) != 0) {
            pfVar26 = pfVar18 + 1;
            *pfVar18 = *pfVar28 * *pfVar18;
            uVar11 = uVar33;
            fVar43 = fVar38 + 0.0;
          }
          if (local_res20 != 1) {
            lVar19 = 0;
            do {
              pfVar26[lVar19] = pfVar28[(int)fVar43] * pfVar26[lVar19];
              pfVar26[lVar19 + 1] = pfVar28[(int)(fVar43 + fVar38)] * pfVar26[lVar19 + 1];
              fVar43 = fVar43 + fVar38 + fVar38;
              lVar19 = lVar19 + 2;
            } while (uVar11 != (uint)lVar19);
          }
          pfVar18 = pfVar18 + (int)local_res20;
          fVar43 = 0.0;
          uVar11 = param_5;
          if ((param_5 & 1) != 0) {
            *pfVar18 = pfVar28[0x2000] * *pfVar18;
            pfVar18 = pfVar18 + 1;
            fVar43 = fVar36 + 0.0;
            uVar11 = param_5 - 1;
          }
          if (param_5 != 1) {
            lVar19 = 0;
            do {
              pfVar18[lVar19] = pfVar28[(int64_t)(int)fVar43 + 0x2000] * pfVar18[lVar19];
              pfVar18[lVar19 + 1] =
                   pfVar28[(int64_t)(int)(fVar43 + fVar36) + 0x2000] * pfVar18[lVar19 + 1];
              fVar43 = fVar43 + fVar36 + fVar36;
              lVar19 = lVar19 + 2;
            } while (uVar11 != (uint)lVar19);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar29);
      }
    }
  }
  local_40 = param_5 + local_res20;
  fVar36 = g_02390124;
  if ((char)unaff_ESI != '\0') {
    uVar33 = 0x10;
    do {
      uVar11 = uVar33;
      uVar33 = uVar11 * 2;
    } while ((int)uVar11 < local_40);
    pdVar20 = &dylib_command_00000ff0.dylib.current_version;
    if (uVar11 < 0x1000) {
      pdVar20 = (dword *)(uint64_t)uVar11;
    }
    iVar12 = (int)pdVar20;
    if (iVar12 != *param_6) {
      FUN_012b9080(this_ptr,pdVar20);
      lVar27 = *(int64_t *)(this_ptr + 0x1b0);
      if (lVar27 == local_c0) {
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
          lVar27 = *(int64_t *)(this_ptr + 0x1b0);
        }
        *(int64_t *)(this_ptr + 0x1b0) = local_c0;
        if (lVar27 != 0) {
          FUN_00d50b20();
        }
      }
      *param_6 = iVar12;
      uVar22 = *(uint *)(this_ptr + 0x160);
    }
    iVar3 = *(int *)(this_ptr + 0x164);
    if (0 < (int)uVar22) {
      lVar27 = 0;
      do {
        FUN_00e83530(this_ptr,*(void*)(*(int64_t *)(this_ptr + 0x1e0) + lVar27 * 8));
        lVar27 = lVar27 + 1;
      } while (lVar27 < *(int *)(this_ptr + 0x160));
    }
    uVar29 = (uint64_t)pdVar20 >> 1;
    ___bzero();
    uVar33 = g_02390140;
    fVar36 = g_02390124;
    uVar22 = *(uint *)(this_ptr + 0x160);
    uVar32 = (uint64_t)uVar22;
    if (0 < (int)uVar22) {
      pdVar20 = *(dword **)(this_ptr + 0x1b8);
      lVar27 = *(int64_t *)(this_ptr + 0x1e8);
      uVar35 = 2;
      if (2 < (uint)uVar29) {
        uVar35 = uVar29;
      }
      uVar31 = 0;
      do {
        lVar19 = *(int64_t *)(lVar27 + uVar31 * 8);
        uVar13 = 1;
        do {
          uVar34 = *(void*)(lVar19 + uVar13 * 8);
          fVar43 = (float)((uint64_t)uVar34 >> 0x20);
          fVar44 = (float)((uint)fVar43 & uVar33);
          fVar38 = (float)uVar34;
          if ((fVar38 != 0.0) || (fVar41 = fVar44, NAN(fVar38))) {
            fVar41 = (float)((uint)fVar38 & uVar33);
            if ((fVar43 != 0.0) || (NAN(fVar43))) {
              if (fVar41 <= fVar44) {
                fVar41 = SQRT((fVar41 / fVar44) * (fVar41 / fVar44) + fVar36) * fVar44;
              }
              else {
                fVar41 = SQRT((fVar44 / fVar41) * (fVar44 / fVar41) + fVar36) * fVar41;
              }
            }
          }
          pdVar20[uVar13] = (dword)(fVar41 + (float)pdVar20[uVar13]);
          uVar13 = uVar13 + 1;
        } while (uVar35 != uVar13);
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar32);
      if (1 < (int)uVar22) {
        (**(code **)(g_02786500 + 0x20))(fVar36 / (float)(int)uVar22);
      }
    }
    uVar35 = 1;
    if (1 < (uint)uVar29) {
      uVar35 = uVar29;
    }
    _memset_pattern16(pdVar20,(void *)(uVar35 * 4),(size_t)uVar32);
    local_98 = (char)in_R8;
    if (local_98 == '\0') {
      if (in_DL == '\0') goto LAB_012b7a2f;
LAB_012b77a7:
      if (*(int64_t *)(this_ptr + 0x2b8) == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = *param_4;
        pvVar14 = _pthread_getspecific((void*)pdVar20);
        if (pvVar14 != (void *)0x0) {
          lVar27 = *param_4;
          lVar19 = FUN_00e8b990();
          if (lVar19 != 0) {
            lVar27 = *(int64_t *)(lVar27 + 0x20 + (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8);
          }
        }
        if (*(float *)(lVar27 + 0xbc) <= 0.0) {
          lVar27 = 0;
        }
        else {
          lVar27 = *(int64_t *)(this_ptr + 0x170);
        }
      }
      pvVar14 = (void *)(uint64_t)param_5;
      FUN_012bafd0(param_3,local_res20,uVar29,
                   ((float)(double)CONCAT44(in_XMM5_Db,in_XMM5_Da) / (float)iVar3) / (float)iVar12);
      lVar19 = *param_4;
      uVar32 = uVar29;
      if (lVar19 == 0) {
LAB_012b7902:
        if (in_DL == '\0') {
          _memset_pattern16(pvVar14,(void *)(uVar35 * 4),(size_t)uVar32);
          goto LAB_012b7a2f;
        }
      }
      else {
        pvVar15 = _pthread_getspecific((void*)pvVar14);
        if (pvVar15 != (void *)0x0) {
          lVar19 = *param_4;
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar19 = *(int64_t *)(lVar19 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        uVar32 = uVar29;
        if (*(char *)(lVar19 + 0x78) == '\0') goto LAB_012b7902;
      }
      uVar33 = g_02390140;
      fVar36 = g_02390124;
      if (lVar27 == 0) goto LAB_012b7a2f;
      uVar22 = *(uint *)(this_ptr + 0x160);
      if ((int)uVar22 < 1) goto joined_r0x012b7b10;
      lVar19 = *(int64_t *)(this_ptr + 0x1c0);
      uVar32 = *(uint64_t *)(this_ptr + 0x1e8);
      uVar29 = 0;
      uVar11 = (uint)g_023945e0;
      do {
        lVar16 = *(int64_t *)(uVar32 + uVar29 * 8);
        lVar25 = *(int64_t *)(lVar27 + uVar29 * 8);
        uVar31 = 0;
        do {
          uVar34 = *(void*)(lVar16 + uVar31 * 8);
          fVar43 = (float)((uint64_t)uVar34 >> 0x20);
          fVar44 = (float)((uint)fVar43 & uVar33);
          fVar38 = (float)uVar34;
          if ((fVar38 != 0.0) || (fVar41 = fVar44, NAN(fVar38))) {
            fVar41 = (float)((uint)fVar38 & uVar33);
            if ((fVar43 != 0.0) || (NAN(fVar43))) {
              if (fVar41 <= fVar44) {
                fVar41 = SQRT((fVar41 / fVar44) * (fVar41 / fVar44) + fVar36) * fVar44;
              }
              else {
                fVar41 = SQRT((fVar44 / fVar41) * (fVar44 / fVar41) + fVar36) * fVar41;
              }
            }
          }
          fVar41 = fVar41 * *(float *)(lVar19 + uVar31 * 4);
          *(float *)(lVar16 + uVar31 * 8) = *(float *)(lVar25 + uVar31 * 8) * fVar41;
          *(float *)(lVar16 + 4 + uVar31 * 8) =
               (float)((uint)fVar41 ^ uVar11) * *(float *)(lVar25 + 4 + uVar31 * 8);
          uVar31 = uVar31 + 1;
        } while (uVar35 != uVar31);
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar22);
    }
    else {
      if ((*param_4 != 0) || (in_DL != '\0')) goto LAB_012b77a7;
LAB_012b7a2f:
      uVar22 = *(uint *)(this_ptr + 0x160);
      uVar29 = (uint64_t)uVar22;
      fVar36 = g_02390124;
      if ((int)uVar22 < 1) goto joined_r0x012b7b10;
      uVar31 = *(uint64_t *)(this_ptr + 0x1c0);
      lVar27 = *(int64_t *)(this_ptr + 0x1e8);
      uVar33 = (uint)uVar35;
      if (uVar33 < 4) {
        uVar13 = 0;
        do {
          lVar19 = *(int64_t *)(lVar27 + uVar13 * 8);
          uVar23 = 0;
          do {
            *(float *)(lVar19 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + uVar23 * 8);
            *(float *)(lVar19 + 4 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + 4 + uVar23 * 8);
            *(float *)(lVar19 + 8 + uVar23 * 8) =
                 *(float *)(uVar31 + 4 + uVar23 * 4) * *(float *)(lVar19 + 8 + uVar23 * 8);
            *(float *)(lVar19 + 0xc + uVar23 * 8) =
                 *(float *)(uVar31 + 4 + uVar23 * 4) * *(float *)(lVar19 + 0xc + uVar23 * 8);
            uVar23 = uVar23 + 2;
          } while ((uVar33 & 0xff8) != uVar23);
          if ((uVar35 & 1) != 0) {
            *(float *)(lVar19 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + uVar23 * 8);
            *(float *)(lVar19 + 4 + uVar23 * 8) =
                 *(float *)(uVar31 + uVar23 * 4) * *(float *)(lVar19 + 4 + uVar23 * 8);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar29);
      }
      else {
        uVar13 = uVar31 + uVar35 * 4;
        uVar23 = (uint64_t)(uVar33 & 0xff8);
        uVar32 = (uVar23 - 4 >> 2) + 1;
        if (uVar23 == uVar35) {
          uVar30 = 0;
          do {
            uVar4 = *(uint64_t *)(lVar27 + uVar30 * 8);
            if ((uVar4 < uVar13) && (uVar31 < uVar4 + uVar35 * 8)) {
              uVar17 = 0;
              do {
                *(float *)(uVar4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + uVar17 * 8);
                *(float *)(uVar4 + 4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + 4 + uVar17 * 8);
                *(float *)(uVar4 + 8 + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 8 + uVar17 * 8);
                *(float *)(uVar4 + 0xc + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 0xc + uVar17 * 8);
                uVar17 = uVar17 + 2;
              } while (uVar23 != uVar17);
              if ((uVar35 & 1) != 0) {
                *(float *)(uVar4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + uVar17 * 8);
                *(float *)(uVar4 + 4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + 4 + uVar17 * 8);
              }
            }
            else {
              lVar19 = 0x10;
              uVar17 = uVar32;
              do {
                pfVar26 = (float *)((uVar31 - 0x10) + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar18 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                fVar41 = pfVar18[1];
                fVar1 = pfVar18[2];
                fVar42 = pfVar18[3];
                auVar2 = *(uint8_t (*) [16])((uVar4 - 0x10) + lVar19 * 2);
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                fVar37 = *pfVar26;
                fVar45 = pfVar26[1];
                fVar47 = pfVar26[2];
                fVar5 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                fVar6 = *pfVar26;
                fVar7 = pfVar26[1];
                fVar8 = pfVar26[2];
                fVar9 = pfVar26[3];
                pfVar26 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                *pfVar26 = *pfVar18 * fVar36;
                pfVar26[1] = fVar41 * fVar36;
                pfVar26[2] = fVar1 * fVar38;
                pfVar26[3] = fVar42 * fVar38;
                pfVar26 = (float *)((uVar4 - 0x10) + lVar19 * 2);
                *pfVar26 = auVar2._0_4_ * fVar43;
                pfVar26[1] = auVar2._4_4_ * fVar43;
                pfVar26[2] = auVar2._8_4_ * fVar44;
                pfVar26[3] = auVar2._12_4_ * fVar44;
                pfVar26 = (float *)(uVar31 + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                *pfVar26 = fVar37 * fVar36;
                pfVar26[1] = fVar45 * fVar36;
                pfVar26[2] = fVar47 * fVar38;
                pfVar26[3] = fVar5 * fVar38;
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                *pfVar26 = fVar6 * fVar43;
                pfVar26[1] = fVar7 * fVar43;
                pfVar26[2] = fVar8 * fVar44;
                pfVar26[3] = fVar9 * fVar44;
                lVar19 = lVar19 + 0x20;
                uVar17 = uVar17 - 2;
              } while (uVar17 != 0);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 != uVar29);
        }
        else {
          uVar30 = 0;
          do {
            uVar4 = *(uint64_t *)(lVar27 + uVar30 * 8);
            if ((uVar4 < uVar13) && (uVar31 < uVar4 + uVar35 * 8)) {
              uVar10 = 0;
            }
            else {
              lVar19 = 0x10;
              uVar17 = uVar32;
              do {
                pfVar26 = (float *)((uVar31 - 0x10) + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar18 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                fVar41 = pfVar18[1];
                fVar1 = pfVar18[2];
                fVar42 = pfVar18[3];
                auVar2 = *(uint8_t (*) [16])((uVar4 - 0x10) + lVar19 * 2);
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                fVar37 = *pfVar26;
                fVar45 = pfVar26[1];
                fVar47 = pfVar26[2];
                fVar5 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                fVar6 = *pfVar26;
                fVar7 = pfVar26[1];
                fVar8 = pfVar26[2];
                fVar9 = pfVar26[3];
                pfVar26 = (float *)((uVar4 - 0x20) + lVar19 * 2);
                *pfVar26 = *pfVar18 * fVar36;
                pfVar26[1] = fVar41 * fVar36;
                pfVar26[2] = fVar1 * fVar38;
                pfVar26[3] = fVar42 * fVar38;
                pfVar26 = (float *)((uVar4 - 0x10) + lVar19 * 2);
                *pfVar26 = auVar2._0_4_ * fVar43;
                pfVar26[1] = auVar2._4_4_ * fVar43;
                pfVar26[2] = auVar2._8_4_ * fVar44;
                pfVar26[3] = auVar2._12_4_ * fVar44;
                pfVar26 = (float *)(uVar31 + lVar19);
                fVar36 = *pfVar26;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar44 = pfVar26[3];
                pfVar26 = (float *)(uVar4 + lVar19 * 2);
                *pfVar26 = fVar37 * fVar36;
                pfVar26[1] = fVar45 * fVar36;
                pfVar26[2] = fVar47 * fVar38;
                pfVar26[3] = fVar5 * fVar38;
                pfVar26 = (float *)(uVar4 + 0x10 + lVar19 * 2);
                *pfVar26 = fVar6 * fVar43;
                pfVar26[1] = fVar7 * fVar43;
                pfVar26[2] = fVar8 * fVar44;
                pfVar26[3] = fVar9 * fVar44;
                lVar19 = lVar19 + 0x20;
                uVar17 = uVar17 - 2;
                uVar10 = uVar23;
              } while (uVar17 != 0);
            }
            uVar17 = uVar10;
            if ((uVar35 & 1) != 0) {
              *(float *)(uVar4 + uVar10 * 8) =
                   *(float *)(uVar31 + uVar10 * 4) * *(float *)(uVar4 + uVar10 * 8);
              *(float *)(uVar4 + 4 + uVar10 * 8) =
                   *(float *)(uVar31 + uVar10 * 4) * *(float *)(uVar4 + 4 + uVar10 * 8);
              uVar17 = uVar10 | 1;
            }
            if (~uVar10 != -uVar35) {
              do {
                *(float *)(uVar4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + uVar17 * 8);
                *(float *)(uVar4 + 4 + uVar17 * 8) =
                     *(float *)(uVar31 + uVar17 * 4) * *(float *)(uVar4 + 4 + uVar17 * 8);
                *(float *)(uVar4 + 8 + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 8 + uVar17 * 8);
                *(float *)(uVar4 + 0xc + uVar17 * 8) =
                     *(float *)(uVar31 + 4 + uVar17 * 4) * *(float *)(uVar4 + 0xc + uVar17 * 8);
                uVar17 = uVar17 + 2;
              } while (uVar35 != uVar17);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 != uVar29);
        }
      }
    }
    fVar36 = g_02390124;
    if (0 < (int)uVar22) {
      lVar27 = 0;
      do {
        FUN_00e83640();
        lVar27 = lVar27 + 1;
        uVar22 = *(uint *)(this_ptr + 0x160);
        fVar36 = g_02390124;
      } while (lVar27 < (int)uVar22);
    }
  }
joined_r0x012b7b10:
  pfVar26 = pfVar28;
  g_02390124 = fVar36;
  if (param_1 != '\0') {
    lVar27 = *(int64_t *)(this_ptr + 0x1c8);
    dVar40 = (double)param_2;
    uVar33 = *(uint *)(this_ptr + 0x15c);
    dVar39 = (double)(int)local_res20;
    dVar46 = dVar39 - dVar40 * dVar39;
    local_3c = 0;
    if (param_2 < fVar36) {
      local_3c = (int)dVar46 + 1;
      local_40 = (int)((double)(int)param_5 * dVar40 + dVar39) + 1;
      *param_10 = '\x01';
      *param_9 = '\x01';
    }
    if (0 < (int)uVar22) {
      iVar12 = uVar33 - 2;
      dVar40 = g_0238fee8 / dVar40;
      lVar19 = (int64_t)local_3c;
      uVar22 = local_40 - local_3c;
      fVar38 = g_0241128c / (float)(int)uVar22;
      uVar34 = CONCAT71((int7)(uVar32 >> 8),fVar36 <= param_2);
      lVar16 = 0;
      while( true ) {
        pvVar14 = (void *)(uint64_t)uVar33;
        lVar25 = *(int64_t *)(*(int64_t *)(this_ptr + 0x1e0) + lVar16 * 8);
        ___bzero();
        _memcpy(pvVar14,(void *)((int64_t)*(int *)(this_ptr + 0x15c) << 2),(size_t)uVar34);
        ___bzero();
        fVar44 = g_0240d158;
        fVar43 = g_0239011c;
        if (*(char *)(this_ptr + 0x259) == '\0') {
          if (local_3c < local_40) {
            lVar21 = 0;
            do {
              dVar39 = ((double)((int)lVar21 + local_3c) - dVar46) * dVar40;
              if ((0.0 <= dVar39) && (dVar39 <= (double)iVar12)) {
                fVar43 = *(float *)(lVar27 + (int64_t)(int)dVar39 * 4);
                *(float *)(lVar25 + lVar19 * 4 + lVar21 * 4) =
                     (*(float *)(lVar27 + 4 + (int64_t)(int)dVar39 * 4) - fVar43) *
                     (float)(dVar39 - (double)(int)dVar39) + fVar43;
              }
              lVar21 = lVar21 + 1;
            } while (local_40 - lVar19 != lVar21);
          }
        }
        else if (local_3c < local_40) {
          lVar21 = 0;
          do {
            dVar39 = ((double)((int)lVar21 + local_3c) - dVar46) * dVar40;
            if ((0.0 <= dVar39) && (dVar39 <= (double)iVar12)) {
              fVar37 = (float)(dVar39 - (double)(int)dVar39);
              lVar24 = (int64_t)(int)dVar39;
              fVar41 = *(float *)(lVar27 + -4 + lVar24 * 4);
              fVar1 = *(float *)(lVar27 + lVar24 * 4);
              fVar42 = *(float *)(lVar27 + 4 + lVar24 * 4);
              fVar45 = (*(float *)(lVar27 + 8 + lVar24 * 4) - fVar41) * fVar44;
              fVar47 = (fVar1 - fVar42) * fVar43;
              fVar42 = (fVar42 + fVar41) * fVar43;
              *(float *)(lVar25 + lVar19 * 4 + lVar21 * 4) =
                   (((fVar47 + fVar45) * fVar37 + (fVar42 - fVar1)) * fVar37 +
                   (((fVar42 - fVar45) - fVar47) - fVar41)) * fVar37 + fVar1;
            }
            lVar21 = lVar21 + 1;
          } while (local_40 - lVar19 != lVar21);
        }
        if (uVar22 != 0 && fVar36 > param_2) {
          pfVar18 = (float *)(lVar25 + lVar19 * 4);
          fVar43 = 0.0;
          uVar33 = uVar22;
          if ((uVar22 & 1) != 0) {
            *pfVar18 = *pfVar28 * *pfVar18;
            pfVar18 = pfVar18 + 1;
            fVar43 = fVar38 + 0.0;
            uVar33 = uVar22 - 1;
          }
          if (local_40 != local_3c + 1) {
            lVar25 = 0;
            do {
              pfVar18[lVar25] = pfVar28[(int)fVar43] * pfVar18[lVar25];
              pfVar18[lVar25 + 1] = pfVar28[(int)(fVar43 + fVar38)] * pfVar18[lVar25 + 1];
              fVar43 = fVar43 + fVar38 + fVar38;
              lVar25 = lVar25 + 2;
            } while (uVar33 != (uint)lVar25);
          }
        }
        lVar16 = lVar16 + 1;
        if (*(int *)(this_ptr + 0x160) <= lVar16) break;
        uVar33 = *(uint *)(this_ptr + 0x15c);
      }
    }
  }
LAB_012b8249:
  if ((((*param_7 != '\0') && (*param_9 == '\0')) &&
      (uVar22 = *(uint *)(this_ptr + 0x160), 0 < (int)uVar22)) && (local_res20 != 0)) {
    fVar36 = g_023d5f44 / (float)(int)local_res20;
    lVar27 = *(int64_t *)(this_ptr + 0x1e0);
    uVar32 = 0;
    do {
      pfVar28 = *(float **)(lVar27 + uVar32 * 8);
      if ((local_res20 & 1) == 0) {
        fVar38 = 0.0;
        uVar33 = local_res20;
      }
      else {
        *pfVar28 = *pfVar26 * *pfVar28;
        pfVar28 = pfVar28 + 1;
        uVar33 = local_res20 - 1;
        fVar38 = fVar36 + 0.0;
      }
      if (local_res20 != 1) {
        lVar19 = 0;
        do {
          pfVar28[lVar19] = pfVar26[(int)fVar38] * pfVar28[lVar19];
          pfVar28[lVar19 + 1] = pfVar26[(int)(fVar38 + fVar36)] * pfVar28[lVar19 + 1];
          fVar38 = fVar38 + fVar36 + fVar36;
          lVar19 = lVar19 + 2;
        } while (uVar33 != (uint)lVar19);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar22);
  }
  if ((*param_8 != '\0') && (*param_10 == '\0')) {
    uVar22 = *(uint *)(this_ptr + 0x160);
    if ((0 < (int)uVar22) && (param_5 != 0)) {
      fVar36 = g_023d5f44 / (float)(int)param_5;
      lVar27 = *(int64_t *)(this_ptr + 0x1e0);
      uVar32 = 0;
      do {
        pfVar28 = (float *)(*(int64_t *)(lVar27 + uVar32 * 8) + (int64_t)(int)local_res20 * 4);
        if ((param_5 & 1) == 0) {
          fVar38 = 0.0;
          uVar33 = param_5;
        }
        else {
          *pfVar28 = pfVar26[0x2000] * *pfVar28;
          pfVar28 = pfVar28 + 1;
          fVar38 = fVar36 + 0.0;
          uVar33 = param_5 - 1;
        }
        if (param_5 != 1) {
          lVar19 = 0;
          do {
            pfVar28[lVar19] = pfVar26[(int64_t)(int)fVar38 + 0x2000] * pfVar28[lVar19];
            pfVar28[lVar19 + 1] =
                 pfVar26[(int64_t)(int)(fVar38 + fVar36) + 0x2000] * pfVar28[lVar19 + 1];
            fVar38 = fVar38 + fVar36 + fVar36;
            lVar19 = lVar19 + 2;
          } while (uVar33 != (uint)lVar19);
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar22);
    }
    *param_10 = '\x01';
  }
  return;
}

