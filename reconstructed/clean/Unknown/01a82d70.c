// Function: FUN_01a82d70
// Address: 01a82d70
// Size: 2784 bytes
// Class: Unknown

double FUN_01a82d70(double param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  void* pVar7;
  uint uVar8;
  uint64_t in_RCX;
  uint64_t uVar9;
  int64_t this_ptr;
  uint64_t uVar10;
  int iVar11;
  bool bVar12;
  uint64_t uVar13;
  double dVar14;
  double dVar15;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  char local_b0;
  double local_a8;
  uint64_t local_a0;
  char local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  uint64_t local_78;
  double local_70;
  int local_64;
  uint64_t local_60;
  char local_58;
  double local_50;
  uint64_t local_48;
  
  local_70 = param_1;
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      local_78 = local_a0;
      FUN_00d50b00();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01a82e27;
    }
  }
  else {
    local_78 = local_a0;
    if (local_a0 != 0) {
LAB_01a82e27:
      pvVar4 = _pthread_getspecific((void*)in_RCX);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        in_RCX = local_78;
      }
      uVar13 = FUN_013f2b00();
      local_48 = local_a0;
      if ((((local_98 == '\0') && (local_a0 != 0)) && (uVar13 = FUN_00d50b00(), local_98 != '\0'))
         && (local_a0 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      lVar5 = **(int64_t **)(*(int64_t *)(this_ptr + 0x188) + 0x10);
      if (lVar5 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_100 = '\x01';
      local_108 = lVar5;
      FUN_01a83c00(uVar13,&local_108);
      uVar9 = local_a0;
      if ((local_98 == '\0') && (local_a0 != 0)) {
        FUN_00d50b00();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (uVar9 == 0) {
        local_50 = 0.0;
      }
      else {
        local_64 = *(int *)(*(int64_t *)(this_ptr + 0x188) + 0xc);
        if (0.0 <= local_70) {
          local_50 = local_70;
          if (local_48 != 0) {
            local_98 = '\0';
            local_a0 = 0;
            local_90 = local_48;
            local_80 = 0;
            local_88 = 0;
            if (*(int *)(local_48 + 0xc) < 1) {
            }
            else {
              lVar5 = 0;
              iVar11 = 0;
              do {
                uVar10 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + lVar5 * 8);
                local_a0 = uVar10;
                pvVar4 = _pthread_getspecific((void*)in_RCX);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar14 = (double)FUN_013faf20();
                pvVar4 = _pthread_getspecific((void*)in_RCX);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar15 = (double)FUN_013faf20();
                if ((dVar15 < dVar14) && (iVar11 < local_64)) {
                  local_d0 = '\0';
                  local_d8 = uVar10;
                  FUN_01a82870(dVar15,&local_d8);
                  uVar10 = local_b8;
                  if (local_b0 == '\0') {
                    if (local_b8 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_b0 = '\0';
                  }
                  local_60 = uVar10;
                  local_58 = '\0';
                  cVar3 = FUN_00d24090();
                  dVar14 = extraout_XMM0_Qa_00;
                  if ((local_58 != '\0') && (local_60 != 0)) {
                    dVar14 = (double)FUN_00d50b20();
                  }
                  if (uVar10 != 0) {
                    dVar14 = (double)FUN_00d50b20();
                  }
                  if ((local_d0 != '\0') && (local_d8 != 0)) {
                    dVar14 = (double)FUN_00d50b20();
                  }
                  dVar15 = local_50;
                  if (cVar3 == '\0') {
                    pvVar4 = _pthread_getspecific((void*)in_RCX);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar4 = _pthread_getspecific((void*)in_RCX);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013faed0();
                    local_a8 = (double)FUN_0128e5a0();
                    pvVar4 = _pthread_getspecific((void*)in_RCX);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar4 = _pthread_getspecific((void*)in_RCX);
                    if (pvVar4 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar14 = (double)FUN_013faed0();
                    dVar14 = (double)FUN_0128e5a0(dVar14 + g_0241c3a8);
                    if (local_a8 + local_70 <= dVar14) {
                      dVar14 = local_a8 + local_70;
                    }
                    dVar14 = dVar14 - local_a8;
                    dVar15 = dVar14;
                    if (local_50 <= dVar14) {
                      dVar14 = local_50;
                      dVar15 = local_50;
                    }
                  }
                  local_50 = dVar15;
                  iVar11 = iVar11 + 1;
                  if (iVar11 < local_64) {
                    in_RCX = (uint64_t)iVar11;
                    lVar6 = *(int64_t *)
                             (*(int64_t *)(*(int64_t *)(this_ptr + 0x188) + 0x10) + in_RCX * 8);
                    if (lVar6 != 0) {
                      dVar14 = (double)FUN_00d50b00();
                    }
                    local_c0 = '\x01';
                    local_c8 = lVar6;
                    FUN_01a83c00(dVar14,&local_c8);
                    uVar10 = local_60;
                    if (local_60 == uVar9) {
                      if ((local_58 != '\0') && (local_60 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (local_58 == '\0') {
                      if (local_60 != 0) {
                        FUN_00d50b00();
                      }
                      bVar12 = uVar9 != 0;
                      uVar9 = uVar10;
                      if (bVar12) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      bVar12 = uVar9 != 0;
                      uVar9 = uVar10;
                      if (bVar12) {
                        FUN_00d50b20();
                      }
                    }
                    if ((local_c0 != '\0') && (local_c8 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                lVar5 = lVar5 + 1;
                local_88 = CONCAT44(local_88._4_4_,(int)lVar5);
              } while ((int)lVar5 < *(int *)(local_48 + 0xc));
            }
            FUN_01a81420();
          }
        }
        else {
          uVar10 = **(uint64_t **)(local_48 + 0x10);
          if (uVar10 != 0) {
            FUN_00d50b00();
          }
          local_98 = '\0';
          local_a0 = 0;
          local_90 = local_48;
          local_80 = 0;
          local_88 = 0;
          if (*(int *)(local_48 + 0xc) < 1) {
            local_50 = local_70;
          }
          else {
            lVar5 = 0;
            local_50 = local_70;
            local_a8 = (double)((uint64_t)local_a8 & 0xffffffff00000000);
            do {
              uVar1 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + lVar5 * 8);
              local_a0 = uVar1;
              pvVar4 = _pthread_getspecific((void*)in_RCX);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar14 = (double)FUN_013faf20();
              pvVar4 = _pthread_getspecific((void*)in_RCX);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_013faf20();
              pVar7 = (void*)in_RCX;
              if (((dVar14 == dVar15) && (!NAN(dVar14) && !NAN(dVar15))) &&
                 (local_a8._0_4_ < local_64)) {
                local_f0 = '\0';
                local_f8 = uVar10;
                FUN_01a82870(dVar15,&local_f8);
                uVar2 = local_b8;
                if (local_b0 == '\0') {
                  if (local_b8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_b0 = '\0';
                }
                local_60 = uVar2;
                local_58 = '\0';
                cVar3 = FUN_00d24090();
                dVar14 = extraout_XMM0_Qa;
                if ((local_58 != '\0') && (local_60 != 0)) {
                  dVar14 = (double)FUN_00d50b20();
                }
                if (uVar2 != 0) {
                  dVar14 = (double)FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  dVar14 = (double)FUN_00d50b20();
                }
                dVar15 = local_50;
                if (cVar3 == '\0') {
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar4 = _pthread_getspecific(pVar7);
                  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                    pVar7 = (void*)uVar9;
                  }
                  FUN_013faed0();
                  dVar15 = (double)FUN_0128e5a0();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar14 = (double)FUN_013faed0();
                  dVar14 = (double)FUN_0128e5a0(dVar14 + g_0241c3a0);
                  if (dVar14 <= dVar15 + local_70) {
                    dVar14 = dVar15 + local_70;
                  }
                  dVar14 = dVar14 - dVar15;
                  dVar15 = dVar14;
                  if (dVar14 <= local_50) {
                    dVar14 = local_50;
                    dVar15 = local_50;
                  }
                }
                local_50 = dVar15;
                uVar8 = local_a8._0_4_ + 1;
                in_RCX = (uint64_t)uVar8;
                local_a8 = (double)CONCAT44(local_a8._4_4_,uVar8);
                if ((int)uVar8 < local_64) {
                  in_RCX = (uint64_t)(int)uVar8;
                  lVar6 = *(int64_t *)
                           (*(int64_t *)(*(int64_t *)(this_ptr + 0x188) + 0x10) + in_RCX * 8);
                  if (lVar6 != 0) {
                    dVar14 = (double)FUN_00d50b00();
                  }
                  local_e0 = '\x01';
                  local_e8 = lVar6;
                  FUN_01a83c00(dVar14,&local_e8);
                  uVar2 = local_60;
                  if (local_60 == uVar9) {
                    if ((local_58 != '\0') && (local_60 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  else if (local_58 == '\0') {
                    if (local_60 != 0) {
                      FUN_00d50b00();
                    }
                    bVar12 = uVar9 != 0;
                    uVar9 = uVar2;
                    if (bVar12) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    bVar12 = uVar9 != 0;
                    uVar9 = uVar2;
                    if (bVar12) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              if (uVar1 != uVar10) {
                if (uVar1 != 0) {
                  FUN_00d50b00();
                }
                bVar12 = uVar10 != 0;
                uVar10 = uVar1;
                if (bVar12) {
                  FUN_00d50b20();
                }
              }
              lVar5 = lVar5 + 1;
              local_88 = CONCAT44(local_88._4_4_,(int)lVar5);
            } while ((int)lVar5 < *(int *)(local_48 + 0xc));
          }
          FUN_01a81420();
          if (uVar10 != 0) {
            FUN_00d50b20();
          }
        }
        if (uVar9 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return local_50;
    }
  }
  return 0.0;
}

