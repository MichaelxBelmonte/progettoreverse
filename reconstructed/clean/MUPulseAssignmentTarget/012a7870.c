// Function: FUN_012a7870
// Address: 012a7870
// Size: 2423 bytes
// Class: MUPulseAssignmentTarget

uint64_t FUN_012a7870(int64_t param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar8;
  double dVar9;
  double dVar10;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  int64_t local_38;
  
  lVar6 = *this_ptr;
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *this_ptr;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  local_40 = *(int64_t *)(lVar6 + 0x50);
  lVar6 = *arg1;
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  local_38 = *(int64_t *)(lVar6 + 0x50);
  lVar6 = *this_ptr;
  if (lVar6 != 0) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      lVar6 = *this_ptr;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    uVar8 = 0;
    if ((*(int64_t *)(lVar6 + 0x48) == 0) || (local_40 == 0)) goto LAB_012a7b13;
  }
  lVar6 = *arg1;
  if (lVar6 != 0) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      lVar6 = *arg1;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    uVar8 = 0;
    if ((*(int64_t *)(lVar6 + 0x48) == 0) || (uVar8 = 0, local_38 == 0)) goto LAB_012a7b13;
  }
  lVar6 = *this_ptr;
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *this_ptr;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x48);
  lVar3 = *arg1;
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  uVar8 = 0;
  if ((lVar6 == 0) || (lVar3 = *(int64_t *)(lVar3 + 0x48), lVar3 == 0)) goto LAB_012a7b13;
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = *(int64_t *)(lVar6 + 0x100);
  }
  else {
    lVar4 = *(int64_t *)
             (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x100);
  }
  if (lVar4 != 0) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(int64_t *)(lVar3 + 0x100);
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x100)
      ;
    }
    if (lVar4 != 0) {
      pvVar2 = _pthread_getspecific((void*)param_1);
      lVar4 = lVar6;
      if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        lVar4 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      if (NAN(*(double *)(lVar4 + 0x120))) {
        pvVar2 = _pthread_getspecific((void*)param_1);
        lVar4 = lVar3;
        if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar4 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        if (NAN(*(double *)(lVar4 + 0x118))) {
          if (param_2 == 1) {
            pvVar2 = _pthread_getspecific((void*)param_1);
            if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              param_1 = local_38;
            }
            cVar1 = FUN_013ddf90();
            if (cVar1 == '\0') {
              lVar4 = *this_ptr;
              pvVar2 = _pthread_getspecific((void*)param_1);
              if (pvVar2 != (void *)0x0) {
                lVar4 = *this_ptr;
                lVar5 = FUN_00e8b990();
                if (lVar5 != 0) {
                  lVar4 = *(int64_t *)
                           (lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                }
              }
              dVar9 = (double)FUN_011eeeb0();
              pvVar2 = _pthread_getspecific((void*)param_1);
              if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
              }
              dVar9 = dVar9 + *(double *)(lVar6 + 0xe8);
              pvVar2 = _pthread_getspecific((void*)param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar10 = (double)FUN_011eedd0();
              pvVar2 = _pthread_getspecific((void*)param_1);
              if ((pvVar2 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
              }
              dVar10 = dVar10 + *(double *)(lVar3 + 0xe8);
              if (((dVar9 == dVar10) && (!NAN(dVar9) && !NAN(dVar10))) ||
                 ((double)((uint64_t)(dVar9 - dVar10) & g_023908f0) <= g_0240d190)) {
                pvVar2 = _pthread_getspecific((void*)param_1);
                lVar6 = local_40;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                  param_1 = local_40;
                  lVar6 = *(int64_t *)
                           (local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
                }
                lVar3 = *(int64_t *)(lVar6 + 0x48);
                pVar7 = (void*)param_1;
                pvVar2 = _pthread_getspecific(pVar7);
                if (pvVar2 != (void *)0x0) {
                  lVar3 = *(int64_t *)(lVar6 + 0x48);
                  lVar6 = FUN_00e8b990();
                  if (lVar6 != 0) {
                    lVar3 = *(int64_t *)
                             (lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                  }
                }
                pvVar2 = _pthread_getspecific(pVar7);
                lVar6 = local_38;
                if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  lVar6 = *(int64_t *)
                           (local_38 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                }
                lVar3 = *(int64_t *)(lVar3 + 0xb8);
                uVar8 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
                if (lVar3 == *(int64_t *)(lVar6 + 0x48)) goto LAB_012a7b13;
                pvVar2 = _pthread_getspecific((void*)lVar3);
                lVar6 = local_40;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  lVar3 = local_40;
                  lVar6 = *(int64_t *)
                           (local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                lVar4 = *(int64_t *)(lVar6 + 0x48);
                pvVar2 = _pthread_getspecific((void*)lVar3);
                if (pvVar2 != (void *)0x0) {
                  lVar4 = *(int64_t *)(lVar6 + 0x48);
                  lVar6 = FUN_00e8b990();
                  if (lVar6 != 0) {
                    lVar4 = *(int64_t *)
                             (lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                  }
                }
                lVar6 = *(int64_t *)(lVar4 + 0x78);
                if (lVar6 == 0) {
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  lVar6 = local_40;
                  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                    lVar3 = local_40;
                    lVar6 = *(int64_t *)
                             (local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                  }
                  lVar4 = *(int64_t *)(lVar6 + 0x40);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(int64_t *)(lVar6 + 0x40);
                    lVar6 = FUN_00e8b990();
                    if (lVar6 != 0) {
                      lVar4 = *(int64_t *)
                               (lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                    }
                  }
                  lVar6 = *(int64_t *)(lVar4 + 0x60);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar6 = *(int64_t *)(lVar4 + 0x60);
                    lVar4 = FUN_00e8b990();
                    if (lVar4 != 0) {
                      lVar6 = *(int64_t *)
                               (lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                    }
                  }
                  lVar6 = *(int64_t *)(lVar6 + 0x38);
                }
                pvVar2 = _pthread_getspecific((void*)lVar3);
                lVar4 = local_38;
                if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  lVar3 = local_38;
                  lVar4 = *(int64_t *)
                           (local_38 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                }
                lVar5 = *(int64_t *)(lVar4 + 0x48);
                pvVar2 = _pthread_getspecific((void*)lVar3);
                if (pvVar2 != (void *)0x0) {
                  lVar5 = *(int64_t *)(lVar4 + 0x48);
                  lVar4 = FUN_00e8b990();
                  if (lVar4 != 0) {
                    lVar5 = *(int64_t *)
                             (lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                  }
                }
                lVar4 = *(int64_t *)(lVar5 + 0x78);
                if (lVar4 == 0) {
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  lVar4 = local_38;
                  if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    lVar3 = local_38;
                    lVar4 = *(int64_t *)
                             (local_38 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                  }
                  lVar5 = *(int64_t *)(lVar4 + 0x40);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar5 = *(int64_t *)(lVar4 + 0x40);
                    lVar4 = FUN_00e8b990();
                    if (lVar4 != 0) {
                      lVar5 = *(int64_t *)
                               (lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                    }
                  }
                  lVar4 = *(int64_t *)(lVar5 + 0x60);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(int64_t *)(lVar5 + 0x60);
                    lVar5 = FUN_00e8b990();
                    if (lVar5 != 0) {
                      lVar4 = *(int64_t *)
                               (lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                    }
                  }
                  lVar4 = *(int64_t *)(lVar4 + 0x38);
                }
                if (lVar6 == lVar4) {
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  lVar6 = local_40;
                  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                    lVar3 = local_40;
                    lVar6 = *(int64_t *)
                             (local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                  }
                  lVar4 = *(int64_t *)(lVar6 + 0x48);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(int64_t *)(lVar6 + 0x48);
                    lVar6 = FUN_00e8b990();
                    if (lVar6 != 0) {
                      lVar4 = *(int64_t *)
                               (lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                    }
                  }
                  lVar6 = *(int64_t *)(lVar4 + 0x58);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                    lVar3 = *(int64_t *)
                             (local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                    local_40 = lVar3;
                  }
                  lVar4 = *(int64_t *)(local_40 + 0x48);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(int64_t *)(local_40 + 0x48);
                    lVar5 = FUN_00e8b990();
                    if (lVar5 != 0) {
                      lVar4 = *(int64_t *)
                               (lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                    }
                  }
                  lVar4 = *(int64_t *)(lVar4 + 0x60);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    lVar3 = *(int64_t *)
                             (local_38 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                    local_38 = lVar3;
                  }
                  lVar5 = *(int64_t *)(local_38 + 0x48);
                  pvVar2 = _pthread_getspecific((void*)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar5 = *(int64_t *)(local_38 + 0x48);
                    lVar3 = FUN_00e8b990();
                    if (lVar3 != 0) {
                      lVar5 = *(int64_t *)
                               (lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
                    }
                  }
                  if (lVar6 + lVar4 == *(int64_t *)(lVar5 + 0x58)) goto LAB_012a7b13;
                }
              }
            }
          }
          else if (param_2 == 0) {
            pvVar2 = _pthread_getspecific((void*)param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 == lVar3) {
              uVar8 = 1;
              goto LAB_012a7b13;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_012a7b13:
  return uVar8 & 0xffffffff;
}

