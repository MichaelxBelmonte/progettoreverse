// Function: FUN_01a5e160
// Address: 01a5e160
// Size: 2679 bytes
// Class: MUTool

uint64_t FUN_01a5e160(uint64_t param_1,int64_t *param_2)

{
  double dVar1;
  bool bVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  void*puVar10;
  void *pvVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t this_ptr;
  undefined7 uVar17;
  int64_t lVar16;
  bool bVar18;
  uint32_t uVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar20;
  uint32_t uVar21;
  double dVar22;
  float fStack_114;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  int64_t *local_80;
  uint32_t local_74;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  uint64_t local_38;
  
  if (*param_2 == 0) {
    uVar15 = 0;
    goto LAB_01a5e36a;
  }
  uVar19 = FUN_01a58dc0();
  local_80 = local_68;
  if (local_68 == (int64_t *)0x0) {
    bVar2 = true;
    bVar18 = false;
    local_80 = (int64_t *)0x0;
LAB_01a5e2e9:
    local_b8 = *param_2;
    local_b0 = '\0';
    uVar7 = FUN_01a58d30(uVar19,&local_b8);
    uVar15 = (uint64_t)uVar7;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar18) goto LAB_01a5e36a;
  }
  else {
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_80))();
    if (cVar5 != '\0') {
      iVar6 = FUN_01d3a5a0();
      bVar18 = true;
      if (iVar6 == 1) {
        iVar6 = FUN_01d3b630();
        if (iVar6 == 1) {
          (**(code **)("/usr/lib/libobjc.A.dylib" + *local_80 + 0x18))();
          plVar9 = local_80;
          FUN_01d3abf0();
          local_a8 = FUN_01e466c0();
          (**(code **)(*plVar9 + 0xe30))();
          local_70 = local_68;
          if (local_68 == (int64_t *)0x0) {
            local_74 = 1;
            local_88 = 0;
          }
          else {
            plVar9 = local_68;
            if (local_60 == '\0') {
              uVar8 = FUN_00d50b00();
              if ((local_60 == '\0') || (local_68 == (int64_t *)0x0)) {
                local_74 = 0;
                local_88 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                goto LAB_01a5e394;
              }
              plVar9 = (int64_t *)FUN_00d50b20();
            }
            local_88 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
            local_74 = 0;
          }
LAB_01a5e394:
          iVar6 = FUN_01d3b620();
          if (iVar6 == 2) {
            if (*(int64_t *)(this_ptr + 0x38) == 0) {
              uVar8 = 0;
              plVar14 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              FUN_00d50b20();
              lVar16 = *(int64_t *)(this_ptr + 0x38);
              if (lVar16 != 0) {
                FUN_00d50b00();
              }
              FUN_00d74120();
              plVar14 = local_68;
              if (local_68 == (int64_t *)0x0) {
                plVar14 = (int64_t *)0x0;
                uVar8 = 0;
              }
              else {
                uVar17 = (undefined7)((uint64_t)this_ptr >> 8);
                if (local_60 == '\0') {
                  FUN_00d50b00();
                  uVar8 = CONCAT71(uVar17,1);
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_60 = '\0';
                  uVar8 = CONCAT71(uVar17,1);
                }
              }
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
            if (local_70 == (int64_t *)0x0) {
              local_38._0_1_ = '\0';
              plVar9 = (int64_t *)0x0;
            }
            else {
              local_60 = '\0';
              local_68 = (int64_t *)0x0;
              local_58 = local_70;
              local_48 = 0;
              local_50 = 0;
              local_a8 = uVar8;
              if (*(int *)((int64_t)local_70 + 0xc) < 1) {
                local_38 = 0;
                plVar9 = (int64_t *)0x0;
              }
              else {
                lVar16 = 0;
                local_38 = 0;
                plVar13 = (int64_t *)0x0;
                do {
                  pVar12 = (void*)local_38;
                  local_38 = local_38 & 0xffffffff;
                  local_68 = *(int64_t **)(local_70[2] + lVar16 * 8);
                  pvVar11 = _pthread_getspecific(pVar12);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar8 = FUN_012708c0();
                  plVar9 = local_98;
                  uVar17 = (undefined7)((uint64_t)uVar8 >> 8);
                  cVar5 = (char)local_38;
                  if (local_98 == plVar13) {
                    plVar9 = plVar13;
                    if ((cVar5 == '\0') && (local_98 != (int64_t *)0x0)) {
                      local_38 = CONCAT71(uVar17,1);
                      if (local_90 != '\0') goto LAB_01a5e987;
                      local_38 = CONCAT71(uVar17,1);
                      FUN_00d50b00();
                    }
joined_r0x01a5e960:
                    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_90 == '\0') {
                      if (local_98 != (int64_t *)0x0) {
                        uVar8 = FUN_00d50b00();
                      }
                      local_38 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                      if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto joined_r0x01a5e960;
                    }
                    local_38 = CONCAT71(uVar17,1);
                    if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
LAB_01a5e987:
                  lVar4 = g_027bf050;
                  if ((plVar9 != (int64_t *)0x0) && (plVar14 != (int64_t *)0x0)) {
                    plVar13 = plVar9;
                    if (g_027bf050 != 0) {
                      FUN_00d50b00();
                    }
                    pVar12 = (void*)plVar13;
                    cVar5 = (**(code **)(*plVar14 + 0x50))();
                    if (lVar4 != 0) {
                      FUN_00d50b20();
                    }
                    lVar4 = g_027e1e80;
                    if (cVar5 == '\0') {
                      if (g_027e1e80 != 0) {
                        FUN_00d50b00();
                      }
                      cVar5 = (**(code **)(*plVar14 + 0x50))();
                      if (lVar4 != 0) {
                        FUN_00d50b20();
                      }
                      lVar4 = g_027bf048;
                      if (cVar5 == '\0') {
                        if (g_027bf048 != 0) {
                          FUN_00d50b00();
                        }
                        cVar5 = (**(code **)(*plVar14 + 0x50))();
                        if (lVar4 != 0) {
                          FUN_00d50b20();
                        }
                        if (cVar5 != '\0') {
                          pvVar11 = _pthread_getspecific(pVar12);
                          if (pvVar11 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_012dfbc0();
                        }
                      }
                      else {
                        pvVar11 = _pthread_getspecific(pVar12);
                        if (pvVar11 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012df8d0();
                      }
                    }
                    else {
                      pvVar11 = _pthread_getspecific(pVar12);
                      if (pvVar11 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_012dfc10();
                    }
                  }
                  lVar16 = lVar16 + 1;
                  local_50 = CONCAT44(local_50._4_4_,(int)lVar16);
                  plVar13 = plVar9;
                } while ((int)lVar16 < *(int *)((int64_t)local_70 + 0xc));
              }
              FUN_001159b0();
              uVar8 = local_a8;
            }
            if (((char)uVar8 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar9 = (int64_t *)0x0;
            local_38._0_1_ = '\0';
            uVar8 = local_a8;
LAB_01a5e430:
            uVar3 = uVar8;
            (**(code **)(*local_80 + 0x658))();
            plVar14 = local_68;
            plVar13 = (int64_t *)*arg1;
            if (plVar13 != local_68) {
              lVar16 = arg1[1];
              if (local_60 != '\0') {
                *arg1 = (int64_t)local_68;
                if (((char)lVar16 != '\0') && (plVar13 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a5e481;
              }
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)plVar14;
              if (((char)lVar16 != '\0') && (plVar13 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a5e4c3:
              *(void*)(arg1 + 1) = 1;
              if (*arg1 == 0) goto LAB_01a5e76d;
LAB_01a5e4d4:
              uVar7 = FUN_01d3a5a0();
              plVar14 = (int64_t *)(uint64_t)uVar7;
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (uVar7 == 6) goto LAB_01a5e781;
              iVar6 = FUN_01d3a5a0();
              uVar8 = uVar3;
              if (iVar6 == 5) {
                FUN_01d3abf0();
                local_a8 = FUN_01e466c0();
                uVar8 = local_a8;
                if (local_70 != (int64_t *)0x0) {
                  local_60 = '\0';
                  local_68 = (int64_t *)0x0;
                  local_58 = local_70;
                  local_50 = 0xffffffff;
                  local_48 = 0;
                  fStack_114 = (float)((uint64_t)uVar3 >> 0x20);
                  fVar20 = (fStack_114 - (float)((uint64_t)local_a8 >> 0x20)) / g_023908e0;
                  local_50._4_4_ = 0;
                  while( true ) {
                    if (local_50._4_4_ != 0) {
                      if (local_50._4_4_ < 1) {
                        iVar6 = -local_50._4_4_;
                      }
                      else {
                        iVar6 = (int)local_50 - local_50._4_4_;
                        local_50 = CONCAT44(local_50._4_4_,iVar6);
                        FUN_00d23690();
                        local_48 = local_48 + local_50._4_4_;
                        iVar6 = 0;
                      }
                      local_50 = CONCAT44(iVar6,(int)local_50);
                    }
                    lVar16 = (int64_t)(int)local_50;
                    iVar6 = (int)local_50 + 1;
                    local_50 = CONCAT44(local_50._4_4_,iVar6);
                    if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
                    local_68 = *(int64_t **)(local_58[2] + 8 + lVar16 * 8);
                    pvVar11 = _pthread_getspecific((void*)local_58[2]);
                    if (pvVar11 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012708c0();
                    plVar13 = local_98;
                    if (local_98 == plVar9) {
                      plVar13 = plVar9;
                      cVar5 = (char)local_38;
                      if (((char)local_38 == '\0') && (local_98 != (int64_t *)0x0)) {
                        local_38._0_1_ = '\x01';
                        if (local_90 != '\0') goto LAB_01a5e6f6;
                        FUN_00d50b00();
                        cVar5 = '\x01';
                      }
LAB_01a5e6d4:
                      local_38._0_1_ = cVar5;
                      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (local_90 == '\0') {
                        if (local_98 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        cVar5 = '\x01';
                        if (((char)local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01a5e6d4;
                      }
                      cVar5 = '\x01';
                      bVar18 = (char)local_38 != '\0';
                      local_38._0_1_ = cVar5;
                      if ((bVar18) && (plVar9 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_01a5e6f6:
                    if (plVar13 != (int64_t *)0x0) {
                      if (*(int64_t *)(this_ptr + 0x38) == 0) {
                        uVar19 = 0;
                        uVar21 = 0;
                      }
                      else {
                        pvVar11 = _pthread_getspecific((void*)plVar13);
                        plVar9 = plVar13;
                        if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                          plVar9 = (int64_t *)
                                   plVar13[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                        }
                        puVar10 = (void*)(**(code **)(*plVar9 + 0x218))();
                        uVar19 = (uint32_t)*puVar10;
                        uVar21 = (uint32_t)((uint64_t)*puVar10 >> 0x20);
                      }
                      dVar1 = (double)CONCAT44(uVar21,uVar19) + (double)fVar20;
                      dVar22 = g_0238fee8;
                      if (dVar1 <= g_0238fee8) {
                        dVar22 = dVar1;
                      }
                      uVar19 = 0;
                      if (0.0 <= dVar22) {
                        uVar19 = SUB84(dVar22,0);
                      }
                      FUN_01a5e030(uVar19);
                    }
                    plVar9 = plVar13;
                  }
                  FUN_001159b0();
                  uVar8 = local_a8;
                }
              }
              goto LAB_01a5e430;
            }
            if (((char)arg1[1] == '\0') && (local_68 != (int64_t *)0x0)) {
              if (local_60 == '\0') {
                FUN_00d50b00();
                goto LAB_01a5e4c3;
              }
LAB_01a5e481:
              *(void*)(arg1 + 1) = 1;
              local_60 = '\0';
            }
            if (*arg1 != 0) goto LAB_01a5e4d4;
LAB_01a5e76d:
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a5e781:
            FUN_0199eb40();
          }
          if (((char)local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_74 == '\0' && local_70 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar2 = false;
          uVar15 = CONCAT71((int7)((uint64_t)plVar14 >> 8),1);
          goto LAB_01a5e35c;
        }
        bVar2 = false;
        bVar18 = true;
        uVar19 = extraout_XMM0_Da_00;
      }
      else {
        bVar2 = false;
        uVar19 = extraout_XMM0_Da;
      }
      goto LAB_01a5e2e9;
    }
    bVar2 = false;
    uVar15 = 0;
  }
LAB_01a5e35c:
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_01a5e36a:
  return uVar15 & 0xffffffff;
}

