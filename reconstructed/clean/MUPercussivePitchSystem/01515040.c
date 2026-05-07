// Function: FUN_01515040
// Address: 01515040
// Size: 4434 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01515040(uint64_t param_1,void*param_2,uint64_t param_3,int64_t *param_4)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  byte bVar12;
  void* pVar13;
  int64_t *in_RCX;
  int64_t *plVar14;
  void*puVar15;
  int64_t *plVar16;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar17;
  undefined7 uVar18;
  uint64_t uVar19;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  void*local_res8;
  uint8_t local_res10;
  char local_res18;
  char local_res20;
  uint64_t local_218;
  uint8_t local_210;
  uint64_t local_208;
  uint8_t local_200;
  uint64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  uint8_t local_1e0;
  uint64_t local_1d8;
  uint8_t local_1d0;
  uint64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  uint64_t local_1a8;
  uint8_t local_1a0;
  uint64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  uint64_t local_178;
  uint8_t local_170;
  uint64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  uint64_t local_148;
  uint8_t local_140;
  int64_t *local_138;
  uint8_t local_130;
  uint64_t local_128;
  int64_t *local_120;
  uint64_t local_118;
  uint64_t local_110;
  int64_t *local_108;
  uint64_t local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint32_t local_d4;
  int64_t local_d0;
  char local_c8;
  uint64_t local_c0;
  int64_t *local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  uint32_t local_7c;
  uint64_t local_78;
  int64_t *local_70;
  int64_t local_68;
  void*local_60;
  int64_t *local_50;
  char local_38;
  
  lVar10 = *arg1;
  local_120 = in_RCX;
  local_a8 = param_4;
  local_78 = param_1;
  local_60 = param_2;
  pvVar6 = _pthread_getspecific((void*)in_RCX);
  if (pvVar6 != (void *)0x0) {
    lVar10 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar10 + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar10 + 0x50);
      if (lVar7 == 0) {
        lVar10 = 0;
        goto LAB_01515137;
      }
      pvVar6 = _pthread_getspecific((void*)in_RCX);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar10 + 0x50);
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      lVar10 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    lVar10 = *(int64_t *)(lVar7 + 0x80);
  }
  else {
    lVar10 = *(int64_t *)(lVar10 + 0x80);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
LAB_01515137:
  local_68 = lVar10;
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0124b580();
  (**(code **)(*plVar8 + 0x18))();
  if (lVar10 == 0) {
    uVar19 = 0;
  }
  else {
    local_90 = '\0';
    local_98 = 0;
    local_d4 = 0xffffffff;
    local_108 = (int64_t *)(this_ptr + 0x78);
    bVar1 = true;
    local_118 = param_3 >> 0x20;
    local_110 = (uint64_t)local_a8 >> 0x20;
    puVar15 = local_60;
    local_128 = param_3;
    while( true ) {
      pvVar6 = _pthread_getspecific((void*)in_RCX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      in_RCX = local_a8;
      cVar2 = FUN_01252960(local_a8,param_3,&local_98,&local_88);
      if (cVar2 == '\0') break;
      if (local_98 != 0) {
        uVar11 = extraout_XMM0_Qa;
        if (((uint64_t)local_88 >> 0x20 == 0) && (local_118 != 0)) {
          local_218 = *puVar15;
          local_210 = 0;
          local_88 = (int64_t *)FUN_01514010(0,&local_218);
          uVar11 = extraout_XMM0_Qa_00;
        }
        if ((local_b0._4_4_ == 0) && (local_110 != 0)) {
          local_208 = *puVar15;
          local_200 = 0;
          local_b0 = (int64_t *)FUN_01514010(uVar11,&local_208);
        }
        plVar17 = local_120;
        local_1f8 = *puVar15;
        local_1f0 = 0;
        local_1e8 = *local_120;
        local_1e0 = 0;
        local_1d8 = *local_res8;
        local_1d0 = 0;
        local_88 = (int64_t *)FUN_01514120(local_78,&local_1f8,&local_1d8,local_res10);
        local_1c8 = *puVar15;
        local_1c0 = 0;
        local_1b8 = *plVar17;
        local_1b0 = 0;
        local_1a8 = *local_res8;
        local_1a0 = 0;
        local_b8 = (int64_t *)FUN_01514120(local_78,&local_1c8,&local_1a8,local_res10);
        plVar17 = local_88;
        param_3 = local_128;
        in_RCX = (int64_t *)((uint64_t)local_88 >> 0x20);
        local_b0 = local_b8;
        if (((in_RCX == (int64_t *)0x0) || ((uint64_t)local_b8 >> 0x20 == 0)) ||
           (cVar2 = FUN_00e7c020(), puVar15 = local_60, cVar2 != '\0')) {
          puVar15 = local_60;
          lVar10 = local_98;
          pvVar6 = _pthread_getspecific((void*)in_RCX);
          lVar7 = local_98;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar10 = lVar7, lVar9 != 0)) {
            lVar10 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_00d51d20();
          if ((local_38 == '\0') && (plVar17 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          pVar13 = (void*)in_RCX;
          plVar14 = plVar17;
          if (local_res20 != '\0') {
            local_70 = plVar17;
            lVar7 = *arg1;
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *arg1;
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            if (*(int64_t *)(lVar7 + 0x78) == 0) {
              do {
                lVar9 = *(int64_t *)(lVar7 + 0x50);
                if (lVar9 == 0) goto LAB_01515608;
                pvVar6 = _pthread_getspecific((void*)in_RCX);
                if (pvVar6 != (void *)0x0) {
                  lVar9 = *(int64_t *)(lVar7 + 0x50);
                  lVar7 = FUN_00e8b990();
                  if (lVar7 != 0) {
                    lVar9 = *(int64_t *)
                             (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                  }
                }
                lVar7 = lVar9;
              } while (*(int64_t *)(lVar9 + 0x78) == 0);
              if (*(int64_t *)(lVar9 + 0x78) != 0) goto LAB_0151554f;
LAB_01515608:
              uVar11 = 0;
              local_50 = (int64_t *)0x0;
            }
            else {
              if (*(int64_t *)(lVar7 + 0x78) == 0) goto LAB_01515608;
LAB_0151554f:
              FUN_00d50b00();
              FUN_00d50b20();
              lVar7 = *arg1;
              pvVar6 = _pthread_getspecific((void*)in_RCX);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *arg1;
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (void*)in_RCX;
              if (*(int64_t *)(lVar7 + 0x78) == 0) {
                do {
                  pVar13 = (void*)in_RCX;
                  lVar9 = *(int64_t *)(lVar7 + 0x50);
                  if (lVar9 == 0) {
                    bVar1 = true;
                    lVar7 = 0;
                    goto LAB_01515637;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar9 = *(int64_t *)(lVar7 + 0x50);
                    lVar7 = FUN_00e8b990();
                    if (lVar7 != 0) {
                      lVar9 = *(int64_t *)
                               (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                    }
                  }
                  pVar13 = (void*)in_RCX;
                  lVar7 = lVar9;
                } while (*(int64_t *)(lVar9 + 0x78) == 0);
                lVar7 = *(int64_t *)(lVar9 + 0x78);
              }
              else {
                lVar7 = *(int64_t *)(lVar7 + 0x78);
              }
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              bVar1 = false;
LAB_01515637:
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01822e80();
              local_50 = plVar17;
              in_RCX = plVar17;
              if (plVar17 == (int64_t *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar18 = (undefined7)((uint64_t)lVar10 >> 8);
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  uVar11 = CONCAT71(uVar18,1);
                }
                else {
                  local_38 = '\0';
                  uVar11 = CONCAT71(uVar18,1);
                }
              }
              if (!bVar1 && lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            plVar14 = local_108;
            lVar10 = this_ptr;
            local_100 = uVar11;
            if (*local_108 == 0) {
              do {
                pVar13 = (void*)in_RCX;
                lVar7 = *(int64_t *)(lVar10 + 0x50);
                if (lVar7 == 0) {
                  local_c0 = 0;
                  plVar17 = (int64_t *)0x0;
                  goto LAB_0151589a;
                }
                pvVar6 = _pthread_getspecific(pVar13);
                if (pvVar6 != (void *)0x0) {
                  lVar7 = *(int64_t *)(lVar10 + 0x50);
                  lVar10 = FUN_00e8b990();
                  if (lVar10 != 0) {
                    lVar7 = *(int64_t *)
                             (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                  }
                }
                lVar10 = lVar7;
              } while (*(int64_t *)(lVar7 + 0x78) == 0);
              plVar14 = (int64_t *)(lVar7 + 0x78);
            }
            pVar13 = (void*)in_RCX;
            if (*plVar14 == 0) {
              local_c0 = 0;
              plVar17 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              uVar11 = FUN_00d50b20();
              pVar13 = (void*)in_RCX;
              lVar10 = this_ptr;
              if (*local_108 == 0) {
                do {
                  pVar13 = (void*)in_RCX;
                  lVar7 = *(int64_t *)(lVar10 + 0x50);
                  if (lVar7 == 0) {
                    local_7c = (uint32_t)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
                    lVar10 = 0;
                    plVar14 = (int64_t *)0x0;
                    goto LAB_01515799;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar7 = *(int64_t *)(lVar10 + 0x50);
                    lVar10 = FUN_00e8b990();
                    if (lVar10 != 0) {
                      lVar7 = *(int64_t *)
                               (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                    }
                  }
                  uVar11 = 0;
                  pVar13 = (void*)in_RCX;
                  lVar10 = lVar7;
                } while (*(int64_t *)(lVar7 + 0x78) == 0);
                lVar10 = *(int64_t *)(lVar7 + 0x78);
                plVar14 = (int64_t *)(lVar7 + 0x78);
              }
              else {
                lVar10 = *local_108;
                plVar14 = local_108;
              }
              if (lVar10 != 0) {
                FUN_00d50b00();
              }
              local_7c = 0;
LAB_01515799:
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01822e80();
              if (plVar17 == (int64_t *)0x0) {
                local_c0 = 0;
              }
              else {
                uVar18 = (undefined7)((uint64_t)plVar14 >> 8);
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  local_c0 = CONCAT71(uVar18,1);
                }
                else {
                  local_c0 = CONCAT71(uVar18,1);
                }
              }
              bVar12 = (byte)local_7c | lVar10 == 0;
              pVar13 = CONCAT31((int3)((uint)local_7c >> 8),bVar12);
              if (bVar12 == 0) {
                FUN_00d50b20();
              }
            }
LAB_0151589a:
            puVar15 = local_60;
            plVar14 = local_70;
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f8 = local_50;
            local_f0 = '\0';
            local_e0 = '\0';
            local_e8 = plVar17;
            FUN_017380d0();
            if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_c0 != '\0') && (plVar17 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_100 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = '\0';
          in_RCX = local_b0;
          FUN_012502a0(local_b0,local_88,1);
          bVar1 = false;
          if (plVar14 != (int64_t *)0x0) {
            bVar1 = false;
            FUN_00d50b20();
          }
        }
      }
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
LAB_01515e1c:
      uVar19 = 0;
    }
    else {
      local_98 = FUN_00e7bdb0();
      lVar10 = local_68;
      local_b8 = (int64_t *)FUN_00e7bdb0();
      plVar17 = local_120;
      if (local_118 != 0) {
        local_198 = *local_60;
        local_190 = 0;
        local_188 = *local_120;
        local_180 = 0;
        local_178 = *local_res8;
        local_170 = 0;
        in_RCX = &local_188;
        local_98 = FUN_01514120(local_78,&local_198,&local_178,local_res10);
      }
      if (local_110 != 0) {
        local_168 = *local_60;
        local_160 = 0;
        local_158 = *plVar17;
        local_150 = 0;
        local_148 = *local_res8;
        local_140 = 0;
        in_RCX = &local_158;
        local_b8 = (int64_t *)FUN_01514120(local_78,&local_168,&local_148,local_res10);
      }
      uVar3 = 2;
      if (local_res18 == '\0') {
        pvVar6 = _pthread_getspecific((void*)in_RCX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0124ae30();
      }
      local_78 = CONCAT44(local_78._4_4_,uVar3);
      param_3 = param_3 | (uint64_t)local_a8;
      plVar17 = (int64_t *)(this_ptr + 0x80);
      lVar7 = this_ptr;
      if (*(int64_t *)(this_ptr + 0x80) == 0) {
        do {
          lVar9 = *(int64_t *)(lVar7 + 0x50);
          if (lVar9 == 0) goto LAB_01515cdb;
          pvVar6 = _pthread_getspecific((void*)in_RCX);
          if (pvVar6 != (void *)0x0) {
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(int64_t *)(lVar9 + 0x80) == 0);
        if (*(int64_t *)(lVar9 + 0x80) != 0) goto LAB_01515be5;
LAB_01515cdb:
        pvVar6 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          in_RCX = plVar8;
        }
        FUN_0124ae40();
        pvVar6 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          if (*plVar17 == 0) goto LAB_01515d81;
LAB_01515dce:
          local_d0 = *plVar17;
        }
        else {
          in_RCX = plVar8;
          if (*plVar17 != 0) goto LAB_01515dce;
LAB_01515d81:
          do {
            lVar7 = *(int64_t *)(this_ptr + 0x50);
            if (lVar7 == 0) {
              local_d0 = 0;
              goto LAB_01515de6;
            }
            pvVar6 = _pthread_getspecific((void*)in_RCX);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *(int64_t *)(this_ptr + 0x50);
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            this_ptr = lVar7;
          } while (*(int64_t *)(this_ptr + 0x80) == 0);
          local_d0 = *(int64_t *)(this_ptr + 0x80);
        }
        if (local_d0 != 0) {
          FUN_00d50b00();
        }
LAB_01515de6:
        local_c8 = '\x01';
        cVar2 = FUN_00d51e10();
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') goto LAB_01515e1c;
        local_130 = 0;
        uVar19 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
        local_138 = plVar8;
        FUN_0150ceb0();
      }
      else {
        if (*plVar17 == 0) goto LAB_01515cdb;
LAB_01515be5:
        FUN_00d50b00();
        FUN_00d50b20();
        pVar13 = (void*)in_RCX;
        if (param_3 >> 0x20 == 0) goto LAB_01515cdb;
        plVar14 = plVar17;
        if (*plVar17 == 0) {
          lVar10 = 0;
          lVar7 = this_ptr;
          do {
            pVar13 = (void*)in_RCX;
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01515e8a;
            }
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(int64_t *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            pVar13 = (void*)in_RCX;
            lVar7 = lVar9;
          } while (*(int64_t *)(lVar9 + 0x80) == 0);
          plVar14 = (int64_t *)(lVar9 + 0x80);
        }
        lVar10 = *plVar14;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar1 = false;
LAB_01515e8a:
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar14 = local_b8;
        uVar4 = FUN_01254260(local_b8,local_98);
        if (!bVar1 && lVar10 != 0) {
          FUN_00d50b20();
        }
        pVar13 = (void*)plVar14;
        if ((char)uVar4 == '\0') {
          plVar16 = plVar17;
          if (*plVar17 == 0) {
            lVar10 = 0;
            lVar7 = this_ptr;
            do {
              pVar13 = (void*)plVar14;
              lVar9 = *(int64_t *)(lVar7 + 0x50);
              if (lVar9 == 0) {
                bVar1 = true;
                goto LAB_01515f95;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar9 = *(int64_t *)(lVar7 + 0x50);
                lVar7 = FUN_00e8b990();
                if (lVar7 != 0) {
                  lVar9 = *(int64_t *)
                           (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (void*)plVar14;
              lVar7 = lVar9;
            } while (*(int64_t *)(lVar9 + 0x80) == 0);
            plVar16 = (int64_t *)(lVar9 + 0x80);
          }
          lVar10 = *plVar16;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar1 = false;
LAB_01515f95:
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar14 = local_b8;
          FUN_012549c0(local_b8,local_98,1);
          if (!bVar1 && lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        plVar16 = plVar17;
        if (*plVar17 == 0) {
          lVar10 = 0;
          lVar7 = this_ptr;
          do {
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01516097;
            }
            pvVar6 = _pthread_getspecific((void*)plVar14);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(int64_t *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            lVar7 = lVar9;
          } while (*(int64_t *)(lVar9 + 0x80) == 0);
          plVar16 = (int64_t *)(lVar9 + 0x80);
        }
        lVar10 = *plVar16;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar1 = false;
LAB_01516097:
        pvVar6 = _pthread_getspecific((void*)plVar14);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0124ae30();
        if (!bVar1 && lVar10 != 0) {
          FUN_00d50b20();
        }
        pVar13 = (void*)plVar14;
        if (iVar5 < (int)local_78) {
          if (*plVar17 == 0) {
            lVar10 = 0;
            do {
              pVar13 = (void*)plVar14;
              lVar7 = *(int64_t *)(this_ptr + 0x50);
              if (lVar7 == 0) {
                bVar1 = true;
                goto LAB_0151616f;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *(int64_t *)(this_ptr + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              this_ptr = lVar7;
              pVar13 = (void*)plVar14;
            } while (*(int64_t *)(this_ptr + 0x80) == 0);
            plVar17 = (int64_t *)(this_ptr + 0x80);
          }
          lVar10 = *plVar17;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar1 = false;
LAB_0151616f:
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124ae40();
          uVar19 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
          if (!bVar1 && lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          uVar19 = (uint64_t)uVar4 ^ 1;
        }
      }
    }
    if (plVar8 == (int64_t *)0x0) goto LAB_015161ce;
  }
  FUN_00d50b20();
LAB_015161ce:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return uVar19 & 0xffffffff;
}

