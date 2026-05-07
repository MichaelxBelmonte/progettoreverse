// Function: FUN_001227e0
// Address: 001227e0
// Size: 4917 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.tempo.%@"

void FUN_001227e0(uint64_t param_1,double param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  int64_t **pplVar8;
  int64_t **pplVar9;
  void* pVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  double dVar16;
  int64_t *local_1f0;
  uint8_t local_1e8;
  int64_t *local_1e0;
  uint8_t local_1d8;
  int64_t *local_1d0;
  uint8_t local_1c8;
  uint8_t local_1b8;
  int64_t *local_1b0;
  uint8_t local_1a8;
  uint64_t local_1a0;
  int64_t *local_198;
  uint8_t local_190;
  int64_t *local_188;
  uint8_t local_180;
  int64_t *local_178;
  uint8_t local_170;
  int64_t *local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  uint64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  double local_c0;
  double local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t local_70;
  int local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40 [8];
  int64_t *local_38;
  
  if (*(int64_t **)(this_ptr + 0x148) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x920))();
    FUN_00d6f370();
    local_148 = g_026e1880;
    if (g_026e1880 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    FUN_00d70ea0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_01d70da0();
  lVar1 = *(int64_t *)
           (*(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x10) + (int64_t)iVar5 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar6 = FUN_003b9000();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  switch(uVar6) {
  case 0:
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b00();
    local_130 = '\x01';
    local_138 = (int64_t *)(this_ptr + 0x70);
    FUN_007faee0();
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      (**(code **)(*local_138 + 0x10))();
      FUN_00d50b20();
    }
    local_128 = *arg1;
    local_120 = '\0';
    FUN_007faf50();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    FUN_007fdfe0();
    FUN_007fdff0();
    *(void*)(this_ptr + 0xb1) = 1;
    break;
  case 1:
    dVar16 = 0.0;
    FUN_00e7b500(g_023908c8);
    if (*arg1 != 0) {
      local_78._0_1_ = '\0';
      local_80 = (int64_t *)0x0;
      local_70 = *(int64_t *)(*arg1 + 0x10);
      local_68 = 0;
      if (0 < *(int *)(local_70 + 0xc)) {
        local_50 = (int64_t *)0x0;
        local_108 = 0;
        plVar14 = (int64_t *)0x0;
        bVar3 = false;
        do {
          local_80 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + (int64_t)local_68 * 8);
          FUN_00124d30((int64_t)local_68,&local_80);
          lVar1 = CONCAT71(uStack_47,local_48);
          if ((((local_40[0] == '\0') && (lVar1 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          local_c0 = (double)FUN_0011edf0(0,1);
          local_1f0 = local_80;
          local_1e8 = 0;
          local_b8 = dVar16;
          uVar15 = FUN_00124e00(local_c0,&local_1f0,param_3,param_4,0);
          bVar4 = bVar3;
          if ((local_50 == (int64_t *)0x0) && (lVar1 != 0)) {
            if (*(int *)(lVar1 + 0xc) == 0) {
              local_50 = (int64_t *)0x0;
            }
            else {
              local_38 = plVar14;
              FUN_00d23310();
              local_b0._0_1_ = local_40[0];
              pplVar9 = &local_b0;
              pplVar8 = (int64_t **)local_40;
              if (local_40[0] == '\0') {
                pplVar8 = pplVar9;
              }
              lVar1 = CONCAT71(uStack_47,local_48);
              *(char *)pplVar8 = '\0';
              if ((local_40[0] != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((void*)pplVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e8920();
              local_50 = (int64_t *)CONCAT71(local_90._1_7_,(char)local_90);
              if (local_50 == (int64_t *)0x0) {
                local_50 = (int64_t *)0x0;
              }
              else if (local_88 == '\0') {
                uVar15 = FUN_00d50b00();
                local_108 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
                if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_88 = '\0';
                local_108 = CONCAT71(local_90._1_7_,1);
              }
              if (((char)local_b0 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
              (**(code **)(*local_80 + 0x3f0))();
              plVar14 = local_38;
              plVar13 = (int64_t *)CONCAT71(uStack_47,local_48);
              if (plVar13 == local_38) {
                if ((!bVar3) && (plVar13 != (int64_t *)0x0)) {
                  bVar4 = true;
                  if (local_40[0] != '\0') goto LAB_001230a7;
                  FUN_00d50b00();
                  bVar4 = true;
                }
              }
              else {
                plVar14 = plVar13;
                if (local_40[0] != '\0') {
                  bVar4 = true;
                  if ((bVar3) && (local_38 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_001230a7;
                }
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                bVar4 = true;
                if ((bVar3) && (local_38 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
                FUN_00d50b20();
              }
            }
LAB_001230a7:
            uVar15 = FUN_00d50b20();
            bVar3 = bVar4;
          }
          else if (lVar1 != 0) goto LAB_001230a7;
          local_68 = local_68 + 1;
        } while (local_68 < *(int *)(local_70 + 0xc));
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        lVar1 = g_026e1890;
        if ((((local_50 != (int64_t *)0x0) && (plVar14 != (int64_t *)0x0)) &&
            (*(int64_t *)(this_ptr + 0xc0) != 0)) && (*(char *)(this_ptr + 0xb0) == '\0')) {
          if (g_026e1890 != 0) {
            uVar15 = FUN_00d50b00();
          }
          local_118 = lVar1;
          local_110 = '\x01';
          FUN_01e57260(uVar15,&local_118);
          plVar13 = local_80;
          if ((char)local_78 == '\0') {
            if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
               (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78._0_1_ = '\0';
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          plVar11 = plVar13;
          if (*(int64_t **)(this_ptr + 0xc0) == (int64_t *)0x0) {
LAB_001236dc:
            FUN_007585f0();
            plVar12 = local_80;
            if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 != (int64_t *)0x0) {
              FUN_007585f0();
              plVar11 = local_80;
              plVar12 = plVar13;
              if (plVar13 != local_80) {
                if ((char)local_78 != '\0') {
                  if (plVar13 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  goto LAB_001237c4;
                }
                if (local_80 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                plVar12 = plVar11;
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
              plVar11 = plVar12;
              if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x468))();
            plVar12 = local_80;
            if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 == (int64_t *)0x0) goto LAB_001236dc;
            (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x468))();
            (**(code **)(*(int64_t *)CONCAT71(uStack_47,local_48) + 0x390))();
            if (plVar13 == local_80) {
LAB_00123783:
              if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar11 = local_80;
              if ((char)local_78 == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_00123783;
              }
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              local_78._0_1_ = '\0';
            }
            if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
LAB_001237c4:
          local_1d8 = 0;
          local_1e0 = plVar11;
          FUN_001166a0();
          plVar13 = local_80;
          plVar12 = plVar11;
          if (local_80 == plVar11) {
LAB_0012382a:
            plVar13 = plVar12;
            if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((char)local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              plVar12 = plVar13;
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_0012382a;
            }
            if (plVar11 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00b5dfe0();
          FUN_00df1af0();
          local_1a0 = CONCAT71(local_b0._1_7_,(char)local_b0);
          local_d0 = plVar13;
          uVar15 = FUN_00083ea0(2,&local_1a0);
          FUN_00d8cb40(uVar15,&local_80);
          local_f8 = 0;
          local_100 = CONCAT71(local_90._1_7_,(char)local_90);
          if (local_88 == '\0') {
            if (local_100 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_f8 = '\x01';
          FUN_00b5dfe0();
          local_f0 = local_d0;
          local_e8 = 0;
          if (local_c8 == '\0') {
            if (local_d0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_e8 = '\x01';
          (**(code **)(*plVar14 + 0x4f8))(&local_f0,&local_100);
          lVar1 = CONCAT71(uStack_47,local_48);
          if (local_40[0] == '\0') {
            if (((lVar1 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
            FUN_00d50b20();
          }
          local_80 = (int64_t *)&g_0253d630;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_80 = &g_024c5048;
          if (((char)local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (CONCAT71(local_e0._1_7_,(char)local_e0) != 0)) {
            FUN_00d50b20();
          }
          local_1d0 = local_50;
          local_1c8 = 0;
          local_1b8 = 0;
          FUN_00125420(local_c0,local_b8);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((bVar3) && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_108 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    break;
  case 2:
    FUN_00ca1380();
    plVar14 = local_80;
    local_48 = (char)local_78;
    pplVar9 = &local_78;
    if ((char)local_78 == '\0') {
      pplVar9 = (int64_t **)&local_48;
    }
    *(void*)pplVar9 = 0;
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)((int64_t)plVar14 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      FUN_00ca1380();
      plVar14 = local_80;
      local_90._0_1_ = (char)local_78;
      pplVar9 = &local_78;
      if ((char)local_78 == '\0') {
        pplVar9 = &local_90;
      }
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar13 = local_80;
      pplVar9 = (int64_t **)&local_48;
      if ((char)local_78 != '\0') {
        pplVar9 = &local_78;
      }
      local_48 = (char)local_78;
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 == '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (((char)local_90 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((int64_t)plVar13 + 0xc)) {
        local_1b0 = plVar13;
        local_1a8 = 0;
        pVar10 = 0;
        local_c0 = (double)FUN_0011edf0(0,1);
        local_b8 = param_2;
        FUN_00d23310();
        plVar14 = local_80;
        pplVar9 = &local_90;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        local_90._0_1_ = (char)local_78;
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = plVar14;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        local_178 = (int64_t *)CONCAT71(uStack_47,local_48);
        local_38 = local_178;
        if (local_40[0] == '\0') {
          if (local_178 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_170 = 1;
        FUN_00c9fe20();
        plVar14 = local_80;
        local_e0._0_1_ = (char)local_78;
        pplVar9 = &local_e0;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar13 = local_80;
        pplVar9 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar9 = &local_b0;
        }
        local_b0._0_1_ = (char)local_78;
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = local_50;
        if (((char)local_b0 == '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_198 = plVar13;
        local_190 = 1;
        FUN_00125420(local_c0,local_b8);
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_e0 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_90 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    break;
  case 3:
    FUN_00ca1380();
    plVar14 = local_80;
    local_48 = (char)local_78;
    pplVar9 = &local_78;
    if ((char)local_78 == '\0') {
      pplVar9 = (int64_t **)&local_48;
    }
    *(void*)pplVar9 = 0;
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)((int64_t)plVar14 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      FUN_00ca1380();
      plVar14 = local_80;
      local_90._0_1_ = (char)local_78;
      pplVar9 = &local_78;
      if ((char)local_78 == '\0') {
        pplVar9 = &local_90;
      }
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar13 = local_80;
      pplVar9 = (int64_t **)&local_48;
      if ((char)local_78 != '\0') {
        pplVar9 = &local_78;
      }
      local_48 = (char)local_78;
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = plVar13;
      if ((local_48 == '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (((char)local_90 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((int64_t)local_50 + 0xc)) {
        dVar16 = 0.0;
        local_c0 = (double)FUN_00e7b500(g_023908c8);
        local_b8 = dVar16;
        iVar5 = FUN_01d70da0();
        if (iVar5 == 1) {
          local_c0 = *(double *)(this_ptr + 0x90);
          local_b8 = *(double *)(this_ptr + 0x98) - local_c0;
        }
        FUN_00d23310();
        plVar14 = local_80;
        pplVar9 = &local_78;
        pplVar8 = &local_90;
        if ((char)local_78 != '\0') {
          pplVar8 = pplVar9;
        }
        local_90._0_1_ = (char)local_78;
        *(void*)pplVar8 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar10 = (void*)pplVar9;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        lVar1 = CONCAT71(uStack_47,local_48);
        if (local_40[0] == '\0') {
          if (((lVar1 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if (((char)local_90 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_168 = (int64_t *)CONCAT71(uStack_47,local_48);
        local_38 = local_168;
        if (local_40[0] == '\0') {
          if (local_168 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_160 = 1;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7fb0();
        lVar2 = CONCAT71(local_90._1_7_,(char)local_90);
        if (local_88 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_150 = 1;
        local_158 = lVar2;
        FUN_00c9fe20();
        plVar14 = local_80;
        local_d0 = (int64_t *)CONCAT71(local_d0._1_7_,(char)local_78);
        pplVar9 = &local_d0;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar13 = local_80;
        pplVar9 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar9 = &local_e0;
        }
        local_e0._0_1_ = (char)local_78;
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_e0 == '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_188 = plVar13;
        local_180 = 1;
        FUN_001256c0(local_c0,local_b8);
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_d0 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    break;
  default:
    goto switchD_001228f7_default;
  }
  FUN_01e54790();
switchD_001228f7_default:
  return;
}

