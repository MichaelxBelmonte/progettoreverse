// Function: FUN_0174be30
// Address: 0174be30
// Size: 1944 bytes
// Class: Unknown

uint64_t FUN_0174be30(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_54;
  int64_t local_48;
  char local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar4 = FUN_0173ed60();
  if (cVar4 != '\0') {
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0173ed60();
    if (cVar4 != '\0') {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0174c730();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01737f00();
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar8 = *param_2;
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        lVar8 = *param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
      }
      lVar6 = *(int64_t *)(lVar8 + 0x58);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736cb0();
      FUN_01736cc0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736e70();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pVar7 = (void*)param_1;
      if (0 < *(int *)(local_48 + 0xc)) {
        lVar6 = 0;
        do {
          pvVar5 = _pthread_getspecific((void*)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar8 = g_027cd580;
          if (g_027cd580 != 0) {
            FUN_00d50b00();
          }
          FUN_017395b0();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          pVar7 = (void*)param_1;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(local_48 + 0xc));
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c50();
      fVar11 = (float)FUN_01742280();
      lVar6 = 0;
      do {
        if (*(int *)(*(int64_t *)(local_48 + 0x10) + lVar6 * 4) == 3) {
          fVar12 = (float)(int)lVar6 * g_02394240;
          if (0 < *(int *)(local_48 + 0xc)) {
            iVar10 = 0;
            local_54 = g_02411fd8;
            do {
              FUN_017482a0();
              fVar13 = (float)FUN_01742280();
              for (fVar13 = fVar13 - fVar11; fVar13 < 0.0; fVar13 = fVar13 + g_0239394c) {
              }
              for (; g_0239394c <= fVar13; fVar13 = fVar13 + g_02394218) {
              }
              fVar13 = (float)((uint)(fVar13 - fVar12) & g_02390140);
              if (local_54 <= fVar13) {
                fVar13 = local_54;
              }
              iVar10 = iVar10 + 1;
              local_54 = fVar13;
            } while (iVar10 < *(int *)(local_48 + 0xc));
          }
          pvVar5 = _pthread_getspecific((void*)*(void*)(local_48 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar8 = g_027cd560;
          if (g_027cd560 != 0) {
            FUN_00d50b00();
          }
          FUN_017395b0();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x18);
      FUN_0174c730();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          goto LAB_0174c33b;
        }
        uVar9 = 0;
      }
      else {
LAB_0174c33b:
        if ((local_48 == 0) || (local_48 == 0)) {
          uVar9 = 0;
          if (local_48 == 0) goto LAB_0174c454;
        }
        else {
          piVar2 = *(int **)(local_48 + 0x10);
          piVar3 = *(int **)(local_48 + 0x10);
          if (*piVar2 == 3) {
            if (*piVar3 == 3) {
LAB_0174c37d:
              if (piVar2[1] == 3) {
                if (piVar3[1] == 3) {
LAB_0174c3a1:
                  if (piVar2[2] == 3) {
                    if (piVar3[2] == 3) {
LAB_0174c3be:
                      if (piVar2[3] == 3) {
                        if (piVar3[3] == 3) {
LAB_0174c3d3:
                          if (piVar2[4] == 3) {
                            if (piVar3[4] == 3) {
LAB_0174c3e8:
                              if (piVar2[5] == 3) {
                                if (piVar3[5] == 3) {
LAB_0174c3fd:
                                  if (piVar2[6] == 3) {
                                    if (piVar3[6] == 3) {
LAB_0174c412:
                                      if (piVar2[7] == 3) {
                                        if (piVar3[7] == 3) {
LAB_0174c427:
                                          if (piVar2[8] == 3) {
                                            if (piVar3[8] == 3) {
LAB_0174c43c:
                                              if (piVar2[9] == 3) {
                                                if (piVar3[9] == 3) {
LAB_0174c47d:
                                                  if (piVar2[10] == 3) {
                                                    if (piVar3[10] == 3) {
LAB_0174c499:
                                                      if (piVar2[0xb] == 3) {
                                                        if (piVar3[0xb] == 3) {
LAB_0174c4b5:
                                                          if (piVar2[0xc] == 3) {
                                                            if (piVar3[0xc] == 3) {
LAB_0174c4d1:
                                                              if (piVar2[0xd] == 3) {
                                                                if (piVar3[0xd] == 3) {
LAB_0174c4ed:
                                                                  if (piVar2[0xe] == 3) {
                                                                    if (piVar3[0xe] == 3) {
LAB_0174c509:
                                                                      if (piVar2[0xf] == 3) {
                                                                        if (piVar3[0xf] == 3) {
LAB_0174c525:
                                                                          if (piVar2[0x10] == 3) {
                                                                            if (piVar3[0x10] == 3) {
LAB_0174c541:
                                                                              if (piVar2[0x11] == 3)
                                                                              {
                                                                                if (piVar3[0x11] ==
                                                                                    3) {
LAB_0174c556:
                                                                                  if (piVar2[0x12]
                                                                                      == 3) {
                                                                                    if (piVar3[0x12]
                                                                                        == 3) {
LAB_0174c56b:
                                                                                      if (piVar2[
                                                  0x13] == 3) {
                                                    if (piVar3[0x13] == 3) {
LAB_0174c580:
                                                      if (piVar2[0x14] == 3) {
                                                        if (piVar3[0x14] == 3) {
LAB_0174c595:
                                                          if (piVar2[0x15] == 3) {
                                                            if (piVar3[0x15] == 3) {
LAB_0174c5aa:
                                                              if (piVar2[0x16] == 3) {
                                                                if (piVar3[0x16] == 3) {
LAB_0174c5bf:
                                                                  if (piVar2[0x17] == 3) {
                                                                    if (piVar3[0x17] == 3) {
LAB_0174c5dd:
                                                                      uVar9 = CONCAT71((int7)((
                                                  uint64_t)lVar8 >> 8),1);
                                                  goto LAB_0174c44c;
                                                  }
                                                  }
                                                  else if (piVar3[0x17] != 3) goto LAB_0174c5dd;
                                                  }
                                                  }
                                                  else if (piVar3[0x16] != 3) goto LAB_0174c5bf;
                                                  }
                                                  }
                                                  else if (piVar3[0x15] != 3) goto LAB_0174c5aa;
                                                  }
                                                  }
                                                  else if (piVar3[0x14] != 3) goto LAB_0174c595;
                                                  }
                                                  }
                                                  else if (piVar3[0x13] != 3) goto LAB_0174c580;
                                                  }
                                                  }
                                                  else if (piVar3[0x12] != 3) goto LAB_0174c56b;
                                                  }
                                                  }
                                                  else if (piVar3[0x11] != 3) goto LAB_0174c556;
                                                  }
                                                  }
                                                  else if (piVar3[0x10] != 3) goto LAB_0174c541;
                                                  }
                                                  }
                                                  else if (piVar3[0xf] != 3) goto LAB_0174c525;
                                                  }
                                                  }
                                                  else if (piVar3[0xe] != 3) goto LAB_0174c509;
                                                  }
                                                  }
                                                  else if (piVar3[0xd] != 3) goto LAB_0174c4ed;
                                                  }
                                                  }
                                                  else if (piVar3[0xc] != 3) goto LAB_0174c4d1;
                                                  }
                                                  }
                                                  else if (piVar3[0xb] != 3) goto LAB_0174c4b5;
                                                  }
                                                  }
                                                  else if (piVar3[10] != 3) goto LAB_0174c499;
                                                  uVar9 = 0;
                                                  goto LAB_0174c44c;
                                                }
                                              }
                                              else if (piVar3[9] != 3) goto LAB_0174c47d;
                                            }
                                          }
                                          else if (piVar3[8] != 3) goto LAB_0174c43c;
                                        }
                                      }
                                      else if (piVar3[7] != 3) goto LAB_0174c427;
                                    }
                                  }
                                  else if (piVar3[6] != 3) goto LAB_0174c412;
                                }
                              }
                              else if (piVar3[5] != 3) goto LAB_0174c3fd;
                            }
                          }
                          else if (piVar3[4] != 3) goto LAB_0174c3e8;
                        }
                      }
                      else if (piVar3[3] != 3) goto LAB_0174c3d3;
                    }
                  }
                  else if (piVar3[2] != 3) goto LAB_0174c3be;
                }
              }
              else if (piVar3[1] != 3) goto LAB_0174c3a1;
            }
          }
          else if (*piVar3 != 3) goto LAB_0174c37d;
          uVar9 = 0;
        }
LAB_0174c44c:
        FUN_00d50b20();
      }
LAB_0174c454:
      if (local_48 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      goto LAB_0174bf47;
    }
  }
  uVar9 = 0;
LAB_0174bf47:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar9 & 0xffffffff;
}

