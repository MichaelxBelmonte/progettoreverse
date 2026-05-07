// Function: FUN_012996f0
// Address: 012996f0
// Size: 1802 bytes
// Class: MUAudioSourcePrincipalItem

uint64_t FUN_012996f0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  void* pVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  uint uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  uint64_t unaff_R15;
  undefined7 uVar14;
  uint64_t uVar13;
  int local_58;
  
  lVar1 = *this_ptr;
  uVar14 = (undefined7)((uint64_t)unaff_R15 >> 8);
  if (lVar1 == 0) {
    uVar13 = CONCAT71(uVar14,1);
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      uVar13 = CONCAT71(uVar14,1);
    }
    else {
      uVar13 = CONCAT71(uVar14,1);
      uVar11 = 0;
      do {
        lVar12 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar11 * 8);
        pvVar5 = _pthread_getspecific(uVar11);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        lVar12 = *(int64_t *)(lVar12 + 0xe0);
        if (lVar12 != 0) {
          FUN_00d50b00();
          local_58 = -1;
          while( true ) {
            lVar6 = (int64_t)local_58;
            local_58 = local_58 + 1;
            if (*(int *)(lVar12 + 0xc) <= local_58) break;
            lVar9 = *(int64_t *)(lVar12 + 0x10);
            lVar6 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar9);
            pVar10 = (void*)lVar9;
            lVar9 = lVar6;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar9 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            lVar9 = *(int64_t *)(lVar9 + 0x50);
            if (lVar9 != 0) {
              pvVar5 = _pthread_getspecific(pVar10);
              lVar7 = lVar9;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar7 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              lVar7 = *(int64_t *)(lVar7 + 0x40);
              pvVar5 = _pthread_getspecific(pVar10);
              if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
                if (*(int64_t *)(lVar7 + 0x60) != *arg1) goto LAB_01299950;
              }
              else if (*(int64_t *)
                        (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                        + 0x60) != *arg1) {
LAB_01299950:
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar3 = FUN_00d23d20();
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pVar4 = FUN_00d23d20();
                goto LAB_01299a6a;
              }
              uVar2 = (uint)(byte)uVar13;
              goto LAB_01299822;
            }
            pvVar5 = _pthread_getspecific(pVar10);
            lVar7 = lVar6;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar7 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            iVar3 = *(int *)(lVar7 + 0x60);
            pvVar5 = _pthread_getspecific(pVar10);
            lVar7 = lVar6;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar7 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            pVar4 = *(void* *)(lVar7 + 100);
LAB_01299a6a:
            if (iVar3 == -1) {
LAB_01299820:
              uVar2 = 0;
            }
            else {
              lVar7 = *arg1;
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                lVar7 = *arg1;
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  lVar7 = *(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
              }
              if (*(int *)(*(int64_t *)(lVar7 + 0x40) + 0xc) <= iVar3) goto LAB_01299820;
              lVar7 = *arg1;
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                lVar7 = *arg1;
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  lVar7 = *(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
              }
              lVar7 = *(int64_t *)
                       (*(int64_t *)(*(int64_t *)(lVar7 + 0x40) + 0x10) + (int64_t)iVar3 * 8);
              pVar10 = 0;
              uVar2 = 0;
              if ((lVar7 != 0) && (pVar4 != 0xffffffff)) {
                pvVar5 = _pthread_getspecific(0);
                if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
                  iVar3 = *(int *)(*(int64_t *)(lVar7 + 0x40) + 0xc);
                }
                else {
                  iVar3 = *(int *)(*(int64_t *)
                                    (*(int64_t *)
                                      (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                                    + 0x40) + 0xc);
                }
                if ((int)pVar4 < iVar3) {
                  pvVar5 = _pthread_getspecific(pVar10);
                  if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    lVar7 = *(int64_t *)
                             (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                  }
                  lVar8 = (int64_t)(int)pVar4;
                  lVar7 = *(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar7 + 0x40) + 0x10) + lVar8 * 8);
                  if (lVar7 != 0) {
                    if (param_2 == '\0') {
                      if (lVar9 != 0) {
                        pvVar5 = _pthread_getspecific(pVar4);
                        pVar4 = (void*)lVar8;
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_013ddad0();
                      }
                      pvVar5 = _pthread_getspecific(pVar4);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_011ef3f0();
                      pvVar5 = _pthread_getspecific(pVar4);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_013dd9a0();
                    }
                    else {
                      if (lVar9 != 0) {
                        pvVar5 = _pthread_getspecific(pVar4);
                        pVar4 = (void*)lVar8;
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_00d23d90();
                      }
                      pvVar5 = _pthread_getspecific(pVar4);
                      if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                        lVar6 = *(int64_t *)
                                 (lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                      }
                      if (*(int64_t *)(lVar6 + 0x50) != lVar7) {
                        FUN_00d50b00();
                        lVar9 = *(int64_t *)(lVar6 + 0x50);
                        *(int64_t *)(lVar6 + 0x50) = lVar7;
                        if (lVar9 != 0) {
                          FUN_00d50b20();
                        }
                      }
                      pvVar5 = _pthread_getspecific(pVar4);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_00d21140();
                    }
                    uVar2 = (uint)(byte)uVar13;
                    goto LAB_01299822;
                  }
                }
                goto LAB_01299820;
              }
            }
LAB_01299822:
            uVar13 = (uint64_t)uVar2;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return uVar13 & 0xffffff01;
}

