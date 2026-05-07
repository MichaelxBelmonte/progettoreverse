// Function: FUN_007a3240
// Address: 007a3240
// Size: 2866 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_007a3240(uint64_t param_1)

{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  uint64_t uVar9;
  char *pcVar10;
  int64_t *this_ptr;
  int64_t lVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  double dVar15;
  double extraout_XMM0_Qa;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  double local_78;
  double local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  char local_50 [8];
  uint64_t local_48;
  char local_40 [8];
  uint64_t local_38;
  
  if (this_ptr[0x17] != 0) {
    FUN_00c9fe20();
    uVar4 = local_48;
    uVar9 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
    pcVar10 = local_50;
    if (local_40[0] != '\0') {
      pcVar10 = local_40;
    }
    local_50[0] = local_40[0];
    *pcVar10 = '\0';
    if ((local_40[0] != '\0') && (uVar4 != 0)) {
      FUN_00d50b20();
    }
    if (local_50[0] == '\0') {
      if (uVar4 == 0) {
        return;
      }
      FUN_00d50b00();
      iVar2 = *(int *)(uVar4 + 0xc);
    }
    else {
      if (uVar4 == 0) {
        return;
      }
      iVar2 = *(int *)(uVar4 + 0xc);
    }
    if (iVar2 != 0) {
      (**(code **)(*this_ptr + 0x5e8))();
      if (0 < *(int *)(uVar4 + 0xc)) {
        lVar11 = 0;
        local_80 = uVar4;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar11 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific((void*)uVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e930();
          uVar4 = local_48;
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if (uVar4 != 0) {
            pvVar6 = _pthread_getspecific((void*)uVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar6 = _pthread_getspecific((void*)uVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_0152e880();
            local_58 = CONCAT44(local_58._4_4_,uVar12);
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            uVar13 = local_58 & 0xffffffff;
            if (NAN((float)local_58)) {
              pvVar6 = _pthread_getspecific((void*)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar6 = _pthread_getspecific((void*)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar6 = _pthread_getspecific((void*)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01265b60();
              uVar13 = FUN_0152e890();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                uVar13 = FUN_00d50b20();
              }
            }
          }
          local_a8 = '\0';
          local_b0 = lVar3;
          uVar14 = FUN_007a2fc0(uVar13,&local_b0);
          uVar4 = local_48;
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if (uVar4 != 0) {
            local_98 = '\0';
            local_a0 = lVar3;
            FUN_007a2fc0(uVar14,&local_a0);
            uVar14 = FUN_00d459e0();
            local_58 = CONCAT44(local_58._4_4_,(int)uVar14);
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            local_88 = '\0';
            local_90 = lVar3;
            FUN_007a2fc0(uVar14,&local_90);
            uVar12 = FUN_00d459e0();
            local_38 = CONCAT44(local_38._4_4_,uVar12);
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((float)local_58 <= (float)local_38) {
              fVar1 = *(float *)((int64_t)this_ptr + 0xac);
            }
            else {
              fVar1 = *(float *)(this_ptr + 0x15);
            }
            if (!NAN(fVar1)) {
              local_70 = (double)CONCAT44(local_70._4_4_,fVar1);
              uVar12 = _powf(local_38 & 0xffffffff,g_02390124 - fVar1);
              local_38 = CONCAT44(local_38._4_4_,uVar12);
              uVar12 = _powf(local_58 & 0xffffffff,(uint64_t)local_70 & 0xffffffff);
              local_58 = CONCAT44(local_58._4_4_,uVar12);
              pvVar6 = _pthread_getspecific((void*)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01265b00((float)local_58 * (float)local_38);
              pvVar6 = _pthread_getspecific((void*)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar14 = FUN_01270ab0();
              local_58 = local_48;
              if (local_40[0] == '\0') {
                if (local_48 == 0) goto LAB_007a36e0;
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
LAB_007a3670:
                pvVar6 = _pthread_getspecific((void*)uVar9);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  uVar9 = local_58;
                }
                cVar5 = FUN_012df8b0();
                uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
                pVar8 = (void*)uVar9;
                local_70 = (double)CONCAT44(local_70._4_4_,pVar8);
                if (cVar5 == '\0') {
LAB_007a37c0:
                  local_68 = 0;
                  local_38 = 0;
                }
                else {
                  pvVar6 = _pthread_getspecific(pVar8);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012640f0();
                  local_38 = local_48;
                  uVar9 = local_48;
                  if (local_48 == 0) goto LAB_007a37c0;
                  if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
                     (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  pvVar6 = _pthread_getspecific((void*)uVar9);
                  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    uVar9 = local_38;
                  }
                  cVar5 = FUN_01263cf0();
                  if (cVar5 != '\0') {
LAB_007a37b7:
                    FUN_00d50b20();
                    goto LAB_007a37c0;
                  }
                  pvVar6 = _pthread_getspecific((void*)uVar9);
                  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    uVar9 = local_38;
                  }
                  cVar5 = FUN_01263ef0();
                  if (cVar5 != '\0') goto LAB_007a37b7;
                  pvVar6 = _pthread_getspecific((void*)uVar9);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_70 = (double)FUN_01264170();
                  pvVar6 = _pthread_getspecific((void*)uVar9);
                  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    uVar9 = local_38;
                  }
                  dVar15 = (double)FUN_01264170();
                  if (dVar15 < local_70) {
                    pvVar6 = _pthread_getspecific((void*)uVar9);
                    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      uVar9 = local_38;
                    }
                    local_70 = (double)FUN_01264170();
                  }
                  local_70 = local_70 * g_023942d0;
                  if (g_023934c8 <= local_70) {
                    local_70 = g_023934c8;
                  }
                  pvVar6 = _pthread_getspecific((void*)uVar9);
                  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    uVar9 = local_58;
                  }
                  uVar14 = FUN_012dfc00();
                  local_68 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
                  if (extraout_XMM0_Qa < local_70) {
                    pvVar6 = _pthread_getspecific((void*)uVar9);
                    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      uVar9 = local_58;
                    }
                    FUN_012df460(local_70);
                  }
                  local_70 = (double)((uint64_t)local_70 & 0xffffffff00000000);
                }
                local_60 = 0;
              }
              else {
                if (local_48 != 0) goto LAB_007a3670;
LAB_007a36e0:
                local_70 = (double)CONCAT44(local_70._4_4_,
                                            (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                local_68 = 0;
                local_38 = 0;
                local_60 = 1;
              }
              pvVar6 = _pthread_getspecific((void*)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_007a3850;
                }
              }
              else if (local_48 != 0) {
LAB_007a3850:
                pvVar6 = _pthread_getspecific((void*)uVar9);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar5 = FUN_012df8b0();
                if (cVar5 != '\0') {
                  pvVar6 = _pthread_getspecific((void*)uVar9);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012641c0();
                  if (local_48 != 0) {
                    if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
                       (local_48 != 0)) {
                      FUN_00d50b20();
                    }
                    pvVar6 = _pthread_getspecific((void*)uVar9);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar5 = FUN_01263cf0();
                    if (cVar5 == '\0') {
                      pvVar6 = _pthread_getspecific((void*)uVar9);
                      if (pvVar6 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      cVar5 = FUN_01263ef0();
                      if (cVar5 == '\0') {
                        pvVar6 = _pthread_getspecific((void*)uVar9);
                        if (pvVar6 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        local_78 = (double)FUN_01264170();
                        pvVar6 = _pthread_getspecific((void*)uVar9);
                        if (pvVar6 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        dVar15 = (double)FUN_01264170();
                        if (dVar15 < local_78) {
                          pvVar6 = _pthread_getspecific((void*)uVar9);
                          if (pvVar6 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          local_78 = (double)FUN_01264170();
                        }
                        local_78 = local_78 * g_023942d0;
                        if (g_023934c8 <= local_78) {
                          local_78 = g_023934c8;
                        }
                        pvVar6 = _pthread_getspecific((void*)uVar9);
                        if (pvVar6 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        dVar15 = (double)FUN_012dfc00();
                        if (dVar15 < local_78) {
                          pvVar6 = _pthread_getspecific((void*)uVar9);
                          if (pvVar6 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_012df460(local_78);
                        }
                        FUN_00d50b20();
                        goto LAB_007a3c80;
                      }
                    }
                    FUN_00d50b20();
                  }
                }
LAB_007a3c80:
                FUN_00d50b20();
              }
              if (local_70._0_1_ == '\0') {
                FUN_00d50b20();
              }
              if ((char)local_60 == '\0') {
                FUN_00d50b20();
              }
            }
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(local_80 + 0xc));
      }
      (**(code **)(*this_ptr + 0x5f0))();
    }
    FUN_00d50b20();
  }
  return;
}

