// Function: FUN_013f70b0
// Address: 013f70b0
// Size: 4590 bytes
// Class: MUDataPointFunction

double FUN_013f70b0(double param_1,double param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  byte in_CL;
  void* pVar13;
  void* pVar14;
  void* pVar15;
  int64_t lVar17;
  uint64_t uVar18;
  int iVar19;
  uint *in_RDX;
  int64_t lVar20;
  void* *arg1;
  int64_t this_ptr;
  void* pVar21;
  uint64_t uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  double dVar28;
  double dVar29;
  double local_b8;
  void* local_ac;
  int iVar16;
  
  pVar14 = *(void* *)(*(int64_t *)(this_ptr + 0x48) + 0xc);
  lVar17 = (int64_t)(int)pVar14;
  pVar13 = *arg1;
  pVar15 = 1;
  if (0 < (int)pVar13) {
    pVar15 = pVar13;
  }
  lVar8 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
  pvVar6 = _pthread_getspecific(pVar13);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  plVar1 = (int64_t *)(this_ptr + 0x48);
  dVar28 = (double)(int)pVar15 * param_2;
  if (*(double *)(lVar8 + 0x38) <= param_1) {
    lVar8 = lVar17 + -1;
    lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pVar13 = (void*)lVar8;
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    if (param_1 < *(double *)(lVar7 + 0x38) || param_1 == *(double *)(lVar7 + 0x38)) {
      uVar5 = *in_RDX;
      uVar22 = (uint64_t)uVar5;
      if (((int)uVar5 < 0) || ((int)pVar14 <= (int)uVar5)) {
        *in_RDX = 0xffffffff;
        pVar21 = uVar5;
      }
      else {
        lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8);
        uVar18 = uVar22;
        pvVar6 = _pthread_getspecific(uVar5);
        if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        pVar21 = (void*)uVar18;
        if (*(double *)(lVar7 + 0x38) <= param_1) {
          if ((int)uVar5 < (int)pVar13) {
            lVar7 = 0;
            do {
              lVar9 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8 + lVar7 * 8);
              pvVar6 = _pthread_getspecific((void*)uVar18);
              if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                ;
              }
              if (*(double *)(lVar9 + 0x38) <= param_1) {
                lVar9 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8 + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((void*)uVar18);
                if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar9 = *(int64_t *)
                           (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                if (param_1 < *(double *)(lVar9 + 0x38)) {
                  uVar22 = uVar22 + lVar7;
                  pVar21 = (void*)uVar18;
                  if ((int)uVar22 != -1) goto LAB_013f7621;
                  break;
                }
              }
              pVar21 = (void*)uVar18;
              if ((lVar8 <= (int64_t)(uVar22 + lVar7 + 1)) ||
                 (iVar4 = (int)lVar7, lVar7 = lVar7 + 1, iVar4 == 2)) break;
            } while( true );
          }
        }
        else if (0 < (int)uVar5) {
          iVar4 = -1;
          do {
            lVar7 = *(int64_t *)(*plVar1 + 0x10);
            lVar9 = *(int64_t *)(lVar7 + (uint64_t)(uVar5 + iVar4) * 8);
            pvVar6 = _pthread_getspecific((void*)lVar7);
            pVar21 = (void*)lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            if (*(double *)(lVar9 + 0x38) <= param_1) {
              lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8);
              pvVar6 = _pthread_getspecific(pVar21);
              if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
              if (param_1 < *(double *)(lVar7 + 0x38)) {
                uVar22 = (uint64_t)(uVar5 + iVar4);
                goto LAB_013f7621;
              }
            }
            if ((int64_t)uVar22 < 2) break;
            uVar22 = uVar22 - 1;
            bVar23 = iVar4 != -3;
            iVar4 = iVar4 + -1;
          } while (bVar23);
        }
      }
      lVar7 = **(int64_t **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar21);
      if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      uVar22 = 0;
      if ((*(double *)(lVar7 + 0x38) != param_1) || (NAN(*(double *)(lVar7 + 0x38)) || NAN(param_1))
         ) {
        uVar5 = FUN_013f3690(param_1);
        uVar22 = 0;
        if (uVar5 != 0xffffffff) {
          uVar22 = (uint64_t)uVar5;
        }
      }
LAB_013f7621:
      uVar5 = (uint)uVar22;
      lVar9 = (int64_t)(int)uVar5;
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
      uVar18 = uVar22;
      pvVar6 = _pthread_getspecific(uVar5);
      if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      local_ac = uVar5 + 1;
      dVar29 = *(double *)(lVar7 + 0x38);
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
      pvVar6 = _pthread_getspecific((void*)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      local_b8 = *(double *)(lVar7 + 0x40);
      lVar10 = (int64_t)(int)local_ac;
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar10 * 8);
      pvVar6 = _pthread_getspecific((void*)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      dVar24 = *(double *)(lVar7 + 0x38);
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar10 * 8);
      pvVar6 = _pthread_getspecific((void*)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      dVar25 = *(double *)(lVar7 + 0x40);
      if ((param_2 == 0.0) && (!NAN(param_2))) {
        *arg1 = pVar15;
        *in_RDX = uVar5;
        return (param_1 - dVar29) * ((dVar25 - local_b8) / (dVar24 - dVar29)) + local_b8;
      }
      dVar28 = dVar28 + param_1;
      dVar3 = param_1 + param_2;
      if (param_2 <= 0.0) {
        iVar4 = 0;
        if (dVar3 < dVar29) {
          uVar22 = uVar22 & 0xffffffff;
          lVar8 = (uVar22 << 0x20) + 0x100000000;
          lVar17 = uVar22 * 8;
          lVar7 = 0;
          do {
            if ((int)(uVar5 + (int)lVar7) < 1) {
              if (in_CL == 0) {
                lVar17 = **(int64_t **)(*plVar1 + 0x10);
                pvVar6 = _pthread_getspecific((void*)uVar18);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
              }
              else {
                lVar9 = lVar9 * 8;
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 + lVar7 * 8);
                lVar10 = lVar9;
                pvVar6 = _pthread_getspecific((void*)lVar9);
                pVar13 = (void*)lVar10;
                if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                dVar29 = *(double *)(lVar17 + 0x38);
                lVar17 = *(int64_t *)(lVar9 + *(int64_t *)(*plVar1 + 0x10) + lVar7 * 8);
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + (lVar8 >> 0x1d));
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
                dVar24 = *(double *)(lVar17 + 0x38);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + (lVar8 >> 0x20) * 8);
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = (dVar3 - dVar29) *
                         ((*(double *)(lVar17 + 0x40) - dVar28) / (dVar24 - dVar29)) + dVar28;
              }
              *arg1 = 1;
              *in_RDX = 0;
              return dVar28;
            }
            lVar10 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar17 + -8 + lVar7 * 8);
            pvVar6 = _pthread_getspecific((void*)uVar18);
            if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8)
              ;
            }
            dVar29 = *(double *)(lVar10 + 0x38);
            lVar7 = lVar7 + -1;
            lVar8 = lVar8 + -0x100000000;
          } while (dVar3 < dVar29);
          lVar8 = *(int64_t *)(*plVar1 + 0x10);
          lVar9 = *(int64_t *)(lVar8 + (uVar22 + lVar7 & 0xffffffff) * 8);
          pvVar6 = _pthread_getspecific((void*)lVar8);
          pVar13 = (void*)lVar8;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_b8 = *(double *)(lVar9 + 0x40);
          lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar17 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific(pVar13);
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          dVar24 = *(double *)(lVar8 + 0x38);
          lVar17 = *(int64_t *)(lVar17 + *(int64_t *)(*plVar1 + 0x10) + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific(pVar13);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          dVar25 = *(double *)(lVar17 + 0x40);
          iVar4 = 1;
          uVar5 = (uint)(uVar22 + lVar7);
        }
        if (dVar29 <= dVar28) goto LAB_013f8197;
        iVar19 = (uint)(uVar5 == 0 & in_CL) +
                 (int)((param_1 - dVar29) / (double)(g_023945b0 ^ (uint64_t)param_2));
        iVar16 = 1;
        if (0 < iVar19) {
          iVar16 = iVar19;
        }
      }
      else {
        iVar4 = 0;
        if (dVar24 < dVar3) {
          lVar7 = lVar10 << 0x20;
          do {
            lVar11 = lVar7 >> 0x1d;
            lVar9 = lVar7 >> 0x20;
            if (lVar8 <= lVar10) {
              if (in_CL == 0) {
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
              }
              else {
                lVar17 = *(int64_t *)(*plVar1 + 0x10);
                lVar8 = *(int64_t *)(lVar17 + (lVar7 + -0x100000000 >> 0x1d));
                pvVar6 = _pthread_getspecific((void*)lVar17);
                pVar14 = (void*)lVar17;
                if ((pvVar6 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  lVar8 = *(int64_t *)
                           (lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8);
                }
                dVar29 = *(double *)(lVar8 + 0x38);
                lVar17 = *(int64_t *)
                          (*(int64_t *)(*plVar1 + 0x10) + (lVar7 + -0x100000000 >> 0x20) * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar11);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar24 = *(double *)(lVar17 + 0x38);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = (dVar3 - dVar29) *
                         ((*(double *)(lVar17 + 0x40) - dVar28) / (dVar24 - dVar29)) + dVar28;
              }
              *arg1 = 1;
              *in_RDX = pVar13;
              return dVar28;
            }
            lVar20 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + 8 + lVar10 * 8);
            pvVar6 = _pthread_getspecific((void*)uVar18);
            if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              lVar20 = *(int64_t *)(lVar20 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8)
              ;
            }
            pVar21 = (void*)uVar18;
            dVar24 = *(double *)(lVar20 + 0x38);
            lVar7 = lVar7 + 0x100000000;
            iVar4 = (int)uVar22;
            uVar5 = iVar4 + 1;
            uVar22 = (uint64_t)uVar5;
            lVar10 = lVar10 + 1;
          } while (dVar24 < dVar3);
          lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar11);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          dVar29 = *(double *)(lVar17 + 0x38);
          lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_b8 = *(double *)(lVar17 + 0x40);
          lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar10 * 8);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_ac = iVar4 + 2;
          dVar25 = *(double *)(lVar17 + 0x40);
          iVar4 = 1;
        }
        if (dVar28 <= dVar24) goto LAB_013f8197;
        iVar19 = (uint)(local_ac == pVar13 & in_CL) + (int)((dVar24 - param_1) / param_2);
        iVar16 = 1;
        if (0 < iVar19) {
          iVar16 = iVar19;
        }
      }
      dVar28 = (double)iVar16 * param_2 + param_1;
      pVar15 = iVar16 + iVar4;
LAB_013f8197:
      *arg1 = pVar15;
      *in_RDX = uVar5;
      return (dVar28 - dVar29) * ((dVar25 - local_b8) / (dVar24 - dVar29)) + local_b8;
    }
    *in_RDX = pVar13;
    pVar21 = 1;
    if (0.0 <= param_2) {
LAB_013f72d1:
      if (in_CL != 0) goto LAB_013f78bd;
      lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
      pvVar6 = _pthread_getspecific(pVar14);
      goto joined_r0x013f72f8;
    }
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    pVar21 = pVar15;
    if (*(double *)(lVar8 + 0x38) <= dVar28 + param_1 &&
        dVar28 + param_1 != *(double *)(lVar8 + 0x38)) goto LAB_013f72d1;
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar4 = (int)((param_1 - *(double *)(lVar8 + 0x38)) /
                 (double)(g_023945b0 ^ (uint64_t)param_2));
    pVar21 = 1;
    if (-1 < iVar4) {
      pVar21 = iVar4 + 1;
    }
LAB_013f78bd:
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -0x10 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    dVar28 = *(double *)(lVar8 + 0x38);
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -0x10 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    dVar29 = *(double *)(lVar8 + 0x40);
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    uVar2 = *(void*)(lVar8 + 0x38);
    lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar24 = *(double *)(lVar17 + 0x40) - dVar29;
    uVar26 = (uint32_t)uVar2;
    uVar27 = (uint32_t)((uint64_t)uVar2 >> 0x20);
  }
  else {
    *in_RDX = 0;
    pVar21 = 1;
    if (0.0 < param_2) {
      lVar17 = **(int64_t **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar13);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      pVar21 = pVar15;
      if (dVar28 + param_1 < *(double *)(lVar17 + 0x38)) goto LAB_013f71d3;
      lVar17 = **(int64_t **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar13);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      iVar4 = (int)((*(double *)(lVar17 + 0x38) - param_1) / param_2);
      pVar13 = iVar4 + 1;
      pVar21 = 1;
      if (-1 < iVar4) {
        pVar21 = pVar13;
      }
    }
    else {
LAB_013f71d3:
      if (in_CL == 0) {
        lVar17 = **(int64_t **)(*plVar1 + 0x10);
        pvVar6 = _pthread_getspecific(pVar13);
joined_r0x013f72f8:
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        dVar29 = *(double *)(lVar17 + 0x40);
        goto LAB_013f7a0a;
      }
    }
    lVar17 = **(int64_t **)(*plVar1 + 0x10);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar28 = *(double *)(lVar17 + 0x38);
    lVar17 = **(int64_t **)(*plVar1 + 0x10);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar29 = *(double *)(lVar17 + 0x40);
    lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + 8);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    uVar2 = *(void*)(lVar17 + 0x38);
    lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + 8);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar24 = *(double *)(lVar17 + 0x40) - dVar29;
    uVar26 = (uint32_t)uVar2;
    uVar27 = (uint32_t)((uint64_t)uVar2 >> 0x20);
  }
  dVar29 = (((double)(int)pVar21 * param_2 + param_1) - dVar28) *
           (dVar24 / ((double)CONCAT44(uVar27,uVar26) - dVar28)) + dVar29;
LAB_013f7a0a:
  *arg1 = pVar21;
  return dVar29;
}

