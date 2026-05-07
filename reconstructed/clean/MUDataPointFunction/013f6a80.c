// Function: FUN_013f6a80
// Address: 013f6a80
// Size: 1560 bytes
// Class: MUDataPointFunction

double FUN_013f6a80(double param_1,void* param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  void* in_ECX;
  void* pVar12;
  uint64_t uVar13;
  uint uVar14;
  uint *arg1;
  int64_t this_ptr;
  void* pVar15;
  int iVar16;
  uint64_t uVar17;
  bool bVar18;
  char local_50;
  
  iVar5 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc);
  pVar15 = iVar5 - 1;
  if (iVar5 == 0) {
    return 0.0;
  }
  lVar10 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
  pvVar7 = _pthread_getspecific(in_ECX);
  local_50 = (char)param_2;
  if ((pVar15 == 0) && (local_50 != '\0')) {
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar10 + 0x38);
    lVar10 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
    pvVar7 = _pthread_getspecific(in_ECX);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    return (param_1 - dVar1) + *(double *)(lVar10 + 0x40);
  }
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
  }
  if (param_1 <= *(double *)(lVar10 + 0x38)) {
    if (arg1 != (uint *)0x0) {
      *arg1 = 0;
    }
    if (local_50 == '\0') {
      lVar10 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
      pvVar7 = _pthread_getspecific(param_2);
joined_r0x013f6d6e:
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      return *(double *)(lVar10 + 0x40);
    }
    pVar15 = 1;
    uVar14 = 0;
  }
  else {
    lVar8 = (int64_t)(int)pVar15;
    lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + lVar8 * 8);
    pvVar7 = _pthread_getspecific(pVar15);
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    if (param_1 < *(double *)(lVar10 + 0x38) || param_1 == *(double *)(lVar10 + 0x38)) {
      if (arg1 != (uint *)0x0) {
        uVar6 = *arg1;
        uVar17 = (uint64_t)uVar6;
        if (((int)uVar6 < 0) || (iVar5 <= (int)uVar6)) {
          *arg1 = 0xffffffff;
        }
        else {
          lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8)
          ;
          uVar13 = uVar17;
          pvVar7 = _pthread_getspecific(uVar6);
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          if (*(double *)(lVar10 + 0x38) <= param_1) {
            if ((int)uVar6 < (int)pVar15) {
              lVar10 = 0;
              do {
                lVar9 = *(int64_t *)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8 +
                         lVar10 * 8);
                pvVar7 = _pthread_getspecific((void*)uVar13);
                if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  lVar9 = *(int64_t *)
                           (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                }
                iVar16 = (int)lVar10;
                if (*(double *)(lVar9 + 0x38) <= param_1) {
                  lVar9 = *(int64_t *)
                           (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8 + 8 +
                           lVar10 * 8);
                  pvVar7 = _pthread_getspecific((void*)uVar13);
                  if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                    lVar9 = *(int64_t *)
                             (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                  }
                  if (param_1 < *(double *)(lVar9 + 0x38)) {
                    uVar6 = uVar6 + iVar16;
                    if (uVar6 != 0xffffffff) goto LAB_013f6ebb;
                    break;
                  }
                }
                if ((lVar8 <= (int64_t)(uVar17 + lVar10 + 1)) || (lVar10 = lVar10 + 1, iVar16 == 2)
                   ) break;
              } while( true );
            }
          }
          else if (0 < (int)uVar6) {
            iVar16 = -1;
            do {
              lVar10 = *(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10);
              lVar8 = *(int64_t *)(lVar10 + (uint64_t)(uVar6 + iVar16) * 8);
              pvVar7 = _pthread_getspecific((void*)lVar10);
              pVar15 = (void*)lVar10;
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                ;
              }
              if (*(double *)(lVar8 + 0x38) <= param_1) {
                lVar10 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8);
                pvVar7 = _pthread_getspecific(pVar15);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar10 = *(int64_t *)
                            (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                if (param_1 < *(double *)(lVar10 + 0x38)) {
                  uVar6 = uVar6 + iVar16;
                  goto LAB_013f6ebb;
                }
              }
              if ((int64_t)uVar17 < 2) break;
              uVar17 = uVar17 - 1;
              bVar18 = iVar16 != -3;
              iVar16 = iVar16 + -1;
            } while (bVar18);
          }
        }
      }
      uVar6 = FUN_013f3690(param_1);
LAB_013f6ebb:
      uVar14 = 0;
      if (uVar6 != 0xffffffff) {
        uVar14 = uVar6;
      }
      pVar15 = uVar14 + 1;
      if (arg1 != (uint *)0x0) {
        *arg1 = uVar14;
      }
    }
    else {
      if (arg1 != (uint *)0x0) {
        *arg1 = pVar15;
      }
      if (local_50 == '\0') {
        lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + lVar8 * 8);
        pvVar7 = _pthread_getspecific(pVar15);
        goto joined_r0x013f6d6e;
      }
      uVar14 = iVar5 - 2;
    }
    if ((int)uVar14 < 0) goto LAB_013f7063;
  }
  if ((((int)uVar14 < iVar5) && (-1 < (int)pVar15)) && ((int)pVar15 < iVar5)) {
    pVar12 = 0x2802558;
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)uVar14 * 8);
    pvVar7 = _pthread_getspecific(0x2802558);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar10 + 0x38);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)uVar14 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar2 = *(double *)(lVar10 + 0x40);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)pVar15 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar3 = *(double *)(lVar10 + 0x38);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)pVar15 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    if ((dVar1 == dVar3) && (!NAN(dVar1) && !NAN(dVar3))) {
      return dVar2;
    }
    dVar4 = *(double *)(lVar10 + 0x40);
    if ((dVar1 + dVar3) * g_023942d0 < param_1) {
      return ((dVar4 - dVar2) * (param_1 - dVar3)) / (dVar3 - dVar1) + dVar4;
    }
    return dVar2 + ((dVar4 - dVar2) * (param_1 - dVar1)) / (dVar3 - dVar1);
  }
LAB_013f7063:
  if (local_50 == '\0') {
    param_1 = 0.0;
  }
  return param_1;
}

