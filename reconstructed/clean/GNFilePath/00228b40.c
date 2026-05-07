// Function: FUN_00228b40
// Address: 00228b40
// Size: 11889 bytes
// Class: GNFilePath

void FUN_00228b40(int64_t *param_1,double param_2)

{
  char cVar1;
  byte bVar2;
  uint32_t uVar3;
  void* pVar4;
  int iVar5;
  void *pvVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *in_RDX;
  int unaff_ESI;
  int iVar14;
  int64_t this_ptr;
  int64_t *plVar15;
  int64_t **pplVar16;
  bool bVar17;
  uint64_t uVar18;
  double dVar19;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  double local_110;
  double local_108;
  int64_t local_e0;
  char local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  uint64_t local_b8;
  int *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int local_94;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  local_94 = unaff_ESI;
  if (unaff_ESI == 1) {
    uVar18 = FUN_00d6f370();
    local_1c0 = g_026de538;
    if (g_026de538 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_1b8 = '\x01';
    FUN_00d70ea0(uVar18,&local_1c0);
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 0) {
    uVar18 = FUN_00d6f370();
    local_1d0 = g_026de538;
    if (g_026de538 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_1c8 = '\x01';
    FUN_00d70ea0(uVar18,&local_1d0);
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(this_ptr + 0x198) == local_94) {
    return;
  }
  plVar15 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar15))();
  plVar7 = local_58;
  pplVar16 = (int64_t **)local_50;
  local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
  pplVar8 = pplVar16;
  if (local_50[0] == '\0') {
    pplVar8 = &local_90;
  }
  *(char *)pplVar8 = '\0';
  if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar4 = (void*)pplVar16;
  local_70 = (int64_t *)(this_ptr + 0x90);
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = (int64_t *)*local_70;
LAB_00228cd8:
    FUN_00d50b00();
  }
  else if ((char)local_90 == '\0') goto LAB_00228cd8;
  uVar18 = (**(code **)(*plVar7 + 0xe20))();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (uVar18 = FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if (plVar15 != (int64_t *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    local_b8 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
    local_78 = plVar7;
LAB_00228ebc:
    if (1 < *(int *)(this_ptr + 0x198) - 1U) goto LAB_0022901b;
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    pplVar16 = &local_68;
    if (local_50[0] != '\0') {
      pplVar16 = (int64_t **)local_50;
    }
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
    *(char *)pplVar16 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_00228f28:
      FUN_00d50b00();
    }
    else if ((char)local_68 == '\0') goto LAB_00228f28;
    local_a8 = (int64_t *)(**(code **)(*plVar7 + 0xf08))();
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_d0 = g_023908c8;
    if (*(int64_t *)(this_ptr + 0xc0) == 0) {
      local_c8 = g_023908c8;
      local_80 = (int64_t *)g_023908c8;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_80 = (int64_t *)(**(code **)(*plVar15 + 0x408))();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_c8 = (double)(**(code **)(*plVar15 + 0x418))();
      FUN_00d50b20();
    }
    local_a0 = (int64_t *)g_023908c8;
    local_c0 = g_023908c8;
  }
  else {
    if (*(int *)((int64_t)plVar7 + 0xc) == 0) {
LAB_00228ea5:
      FUN_00d50b20();
      local_78 = (int64_t *)0x0;
      local_b8 = 0;
      goto LAB_00228ebc;
    }
    iVar14 = *(int *)(this_ptr + 0x198);
    if (iVar14 == 0) {
      if (local_94 != 1) goto LAB_00228ea5;
      local_1a0 = plVar7;
      local_198 = '\0';
      FUN_01278c70();
      plVar15 = local_58;
      if (plVar7 == local_58) {
        local_78 = plVar7;
        plVar15 = plVar7;
LAB_0022b5ab:
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          plVar7 = (int64_t *)FUN_00d50b20();
        }
      }
      else {
        if (local_50[0] == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar7 = (int64_t *)FUN_00d50b20();
          local_78 = plVar15;
          plVar15 = local_58;
          goto LAB_0022b5ab;
        }
        plVar7 = (int64_t *)FUN_00d50b20();
        local_50[0] = '\0';
        local_78 = plVar15;
      }
      if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
        plVar7 = (int64_t *)FUN_00d50b20();
      }
      local_b8 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
      goto LAB_00228ebc;
    }
    local_a8 = plVar7;
    if (iVar14 == 1) {
      if (local_94 != 0) goto LAB_00228ea5;
      FUN_00226f20();
      plVar15 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 == (int64_t *)0x0) goto LAB_0022b56a;
        FUN_00d50b00();
LAB_0022b312:
        local_a0 = plVar15;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        plVar15 = local_58;
        if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0025e9a0();
        plVar12 = local_58;
        if (((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_50[0] != '\0' && (local_58 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        local_80 = plVar12;
        local_50[0] = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar7;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar14 = -local_40._4_4_;
            }
            else {
              iVar14 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar14);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar14 = 0;
            }
            local_40 = CONCAT44(iVar14,(int)local_40);
          }
          lVar11 = (int64_t)(int)local_40;
          iVar14 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar14);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar11 * 8);
          pvVar6 = _pthread_getspecific((void*)local_48[2]);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_1b0 = local_58;
          local_1a8 = '\0';
          FUN_012f98b0();
          plVar12 = local_68;
          if (local_60 == '\0') {
            if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
               (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (int64_t *)0x0) {
            local_60 = '\0';
            local_68 = plVar12;
            FUN_00d21140();
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        plVar10 = (int64_t *)FUN_001159b0();
        plVar12 = local_80;
        if (plVar7 == local_80) {
          local_78 = plVar7;
        }
        else {
          if (local_80 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          local_78 = plVar12;
          plVar10 = plVar12;
        }
        if (plVar12 != (int64_t *)0x0) {
          plVar10 = (int64_t *)FUN_00d50b20();
        }
        local_b8 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        bVar17 = false;
      }
      else {
        if (local_58 != (int64_t *)0x0) goto LAB_0022b312;
LAB_0022b56a:
        FUN_00d50b20();
        bVar17 = true;
        local_78 = (int64_t *)0x0;
        local_b8 = 0;
      }
      if (!bVar17) {
        FUN_00d50b20();
      }
      goto LAB_00228ebc;
    }
    if (iVar14 == 2) {
      if (local_94 == 0) {
        if (*(int64_t **)(this_ptr + 0x1b8) != (int64_t *)0x0) {
          local_78 = plVar7;
          local_80 = *(int64_t **)(this_ptr + 0x1b8);
          uVar18 = FUN_00d50b00();
          local_a0 = (int64_t *)CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
          goto LAB_0022b6aa;
        }
      }
      else {
        FUN_00226f20();
        plVar15 = local_58;
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar15 != (int64_t *)0x0) {
          FUN_00226f20();
          plVar15 = local_90;
          pvVar6 = _pthread_getspecific(pVar4);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01657380();
          pvVar6 = _pthread_getspecific(pVar4);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01650330();
          local_80 = local_58;
          if (local_58 == (int64_t *)0x0) {
            local_80 = (int64_t *)0x0;
            local_a0 = (int64_t *)0x0;
          }
          else if (local_50[0] == '\0') {
            uVar18 = FUN_00d50b00();
            local_a0 = (int64_t *)CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
            if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50[0] = '\0';
            local_a0 = (int64_t *)CONCAT71((int7)((uint64_t)local_58 >> 8),1);
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_0022b6aa:
          if (local_80 != (int64_t *)0x0) {
            FUN_0025e9a0();
            plVar15 = local_58;
            if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_50[0] = '\0';
            local_58 = (int64_t *)0x0;
            local_48 = plVar7;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar14 = -local_40._4_4_;
                }
                else {
                  iVar14 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar14);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar14 = 0;
                }
                local_40 = CONCAT44(iVar14,(int)local_40);
              }
              lVar11 = (int64_t)(int)local_40;
              iVar14 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar14);
              if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
              lVar13 = local_48[2];
              local_58 = *(int64_t **)(lVar13 + 8 + lVar11 * 8);
              pvVar6 = _pthread_getspecific((void*)lVar13);
              pVar4 = (void*)lVar13;
              if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar4 = (void*)local_80;
              }
              pvVar6 = _pthread_getspecific(pVar4);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar18 = FUN_0125e7c0();
              plVar7 = local_a8;
              local_e0 = local_120;
              local_d8 = 0;
              if (local_118 == '\0') {
                if (local_120 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_118 = '\0';
              }
              local_d8 = '\x01';
              uVar18 = FUN_012eb1d0(uVar18,&local_e0);
              plVar12 = local_90;
              if (local_88 == '\0') {
                if (local_90 != (int64_t *)0x0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_88 = '\0';
              }
              local_68 = plVar12;
              local_60 = '\0';
              FUN_00d214d0(uVar18,*(void*)((int64_t)plVar15 + 0xc));
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar12 = (int64_t *)FUN_001159b0();
            if (plVar7 != plVar15) {
              if (plVar15 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              local_78 = plVar15;
              plVar12 = plVar15;
              plVar7 = local_78;
            }
            local_78 = plVar7;
            if (plVar15 != (int64_t *)0x0) {
              plVar12 = (int64_t *)FUN_00d50b20();
            }
            local_b8 = CONCAT71((int7)((uint64_t)plVar12 >> 8),1);
            if ((char)local_a0 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_00228ebc;
          }
        }
      }
      local_78 = (int64_t *)0x0;
      FUN_00d50b20();
      local_b8 = 0;
      goto LAB_00228ebc;
    }
    local_b8 = CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
    local_78 = plVar7;
LAB_0022901b:
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    pplVar16 = &local_68;
    if (local_50[0] != '\0') {
      pplVar16 = (int64_t **)local_50;
    }
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
    *(char *)pplVar16 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_00229074:
      FUN_00d50b00();
    }
    else if ((char)local_68 == '\0') goto LAB_00229074;
    local_a0 = (int64_t *)(**(code **)(*plVar7 + 0xf08))();
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_c8 = g_023908c8;
    if (*(int64_t *)(this_ptr + 0xc0) == 0) {
      local_d0 = g_023908c8;
      local_c0 = g_023908c8;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_c0 = (double)(**(code **)(*plVar15 + 0x408))();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_d0 = (double)(**(code **)(*plVar15 + 0x418))();
      FUN_00d50b20();
    }
    local_80 = (int64_t *)g_023908c8;
    local_a8 = (int64_t *)g_023908c8;
  }
  plVar15 = (int64_t *)*local_70;
  (**(code **)(&UNK_00001550 + *plVar15))();
  plVar7 = local_58;
  local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
  pplVar16 = (int64_t **)local_50;
  if (local_50[0] == '\0') {
    pplVar16 = &local_90;
  }
  *(char *)pplVar16 = '\0';
  if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = (int64_t *)*local_70;
LAB_002291b3:
    FUN_00d50b00();
  }
  else if ((char)local_90 == '\0') goto LAB_002291b3;
  dVar19 = (double)(**(code **)(*plVar7 + 0x970))();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (dVar19 = (double)FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      dVar19 = (double)FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if (plVar15 != (int64_t *)0x0) {
    dVar19 = (double)FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    pplVar16 = &local_58;
    FUN_01d98320();
    plVar15 = local_58;
    uVar18 = FUN_00275460();
    if (plVar15 == (int64_t *)0x0) {
LAB_0022922a:
      pplVar16 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar15 + 0x360))();
      cVar1 = FUN_00e85ea0();
      uVar18 = extraout_XMM0_Qa;
      if (cVar1 == '\0') goto LAB_0022922a;
    }
    plVar15 = *pplVar16;
    if (*(char *)(pplVar16 + 1) == '\0') {
      if (plVar15 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar16 + 1) = 0;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      local_188 = '\0';
      local_190 = 0;
      (**(code **)(*plVar15 + 0x9b8))(uVar18,1);
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    dVar19 = (double)FUN_00d50b20();
  }
  iVar14 = *(int *)(this_ptr + 0x198);
  if (iVar14 == 2) {
    iVar14 = *(int *)(this_ptr + 0x19c);
    bVar17 = local_94 == 1 && iVar14 == 0;
    dVar19 = (double)FUN_00239fc0();
    if ((iVar14 == 1) && (local_94 == 0)) goto LAB_00229346;
LAB_002293c4:
    if (bVar17) goto LAB_002295c8;
LAB_00229836:
    local_b0 = (int *)(this_ptr + 0x19c);
    *(void*)(this_ptr + 0x19c) = *(void*)(this_ptr + 0x198);
    *(int *)(this_ptr + 0x198) = local_94;
    if (local_94 == 2) {
      if (*(int64_t *)(this_ptr + 0xb8) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
        plVar15 = local_58;
        local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
        pplVar16 = (int64_t **)local_50;
        if (local_50[0] == '\0') {
          pplVar16 = &local_68;
        }
        *(char *)pplVar16 = '\0';
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar15 == (int64_t *)0x0) {
          plVar15 = (int64_t *)*local_70;
          if (plVar15 != (int64_t *)0x0) goto LAB_002298ea;
          plVar15 = (int64_t *)0x0;
          plVar7 = (int64_t *)0x0;
        }
        else {
          if ((char)local_68 == '\0') {
LAB_002298ea:
            FUN_00d50b00();
          }
          plVar7 = (int64_t *)*local_70;
        }
        (**(code **)(&UNK_00001550 + *plVar7))();
        plVar7 = local_58;
        local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
        pplVar16 = (int64_t **)local_50;
        if (local_50[0] == '\0') {
          pplVar16 = &local_68;
        }
        *(char *)pplVar16 = '\0';
        if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (int64_t *)0x0) {
          plVar7 = (int64_t *)*local_70;
LAB_00229948:
          FUN_00d50b00();
        }
        else if ((char)local_68 == '\0') goto LAB_00229948;
        (**(code **)(&g_000015c0 + *plVar7))();
        lVar11 = *(int64_t *)(this_ptr + 0xb8);
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        uVar3 = FUN_00440c80();
        FUN_003a25e0(extraout_XMM0_Qa_00,uVar3);
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        dVar19 = (double)FUN_00d50b20();
        if (plVar15 != (int64_t *)0x0) {
          dVar19 = (double)FUN_00d50b20();
        }
      }
      local_180 = *in_RDX;
      local_178 = '\0';
      local_170 = *param_1;
      local_168 = '\0';
      FUN_00236ad0(dVar19,&local_170);
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    bVar17 = local_94 == 1 && iVar14 == 0;
    if ((iVar14 != 1) || (local_94 != 0)) goto LAB_002293c4;
LAB_00229346:
    FUN_00226f20();
    plVar15 = local_58;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      plVar15 = (int64_t *)*local_70;
      (**(code **)(&UNK_00001550 + *plVar15))();
      plVar7 = local_58;
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
      pplVar16 = &local_68;
      pplVar8 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar8 = pplVar16;
      }
      *(char *)pplVar8 = '\0';
      if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar4 = (void*)pplVar16;
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)*local_70;
LAB_002293d9:
        FUN_00d50b00();
      }
      else if ((char)local_68 == '\0') goto LAB_002293d9;
      local_b0 = (int *)(**(code **)(*plVar7 + 0xa50))();
      local_110 = param_2;
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00226f20();
      plVar15 = local_58;
      pvVar6 = _pthread_getspecific(pVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_108 = (double)FUN_01656080(local_b0);
      if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00226f20();
      plVar15 = local_58;
      pvVar6 = _pthread_getspecific(pVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b0 = (int *)FUN_01656080((double)local_b0 + local_110);
      if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)(this_ptr + 0x1d0) == 0) {
        plVar15 = (int64_t *)*local_70;
        if (plVar15 == (int64_t *)0x0) {
LAB_00229593:
          plVar7 = (int64_t *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar15))();
          plVar7 = local_58;
          local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
          pplVar16 = (int64_t **)local_50;
          if (local_50[0] == '\0') {
            pplVar16 = &local_68;
          }
          *(char *)pplVar16 = '\0';
          if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (int64_t *)0x0) {
            plVar7 = (int64_t *)*local_70;
            if (plVar7 == (int64_t *)0x0) goto LAB_00229593;
          }
          else if ((char)local_68 != '\0') goto LAB_00229595;
          FUN_00d50b00();
        }
LAB_00229595:
        param_2 = (double)local_b0 - local_108;
        FUN_019af2a0();
        if ((plVar15 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (bVar17) {
LAB_002295c8:
      dVar19 = (double)FUN_00226f20();
      plVar15 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        dVar19 = (double)FUN_00d50b20();
      }
      if (plVar15 == (int64_t *)0x0) goto LAB_00229836;
      plVar15 = (int64_t *)*local_70;
      (**(code **)(&UNK_00001550 + *plVar15))();
      plVar7 = local_58;
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
      pplVar16 = &local_68;
      pplVar8 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar8 = pplVar16;
      }
      *(char *)pplVar8 = '\0';
      if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar4 = (void*)pplVar16;
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)*local_70;
LAB_0022967b:
        FUN_00d50b00();
      }
      else if ((char)local_68 == '\0') goto LAB_0022967b;
      local_b0 = (int *)(**(code **)(*plVar7 + 0xa50))();
      local_110 = param_2;
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00226f20();
      plVar15 = local_58;
      pvVar6 = _pthread_getspecific(pVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_108 = (double)FUN_016553c0(local_b0);
      if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00226f20();
      plVar15 = local_58;
      pvVar6 = _pthread_getspecific(pVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar19 = (double)FUN_016553c0((double)local_b0 + local_110);
      local_b0 = (int *)dVar19;
      if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
        dVar19 = (double)FUN_00d50b20();
      }
      if (*(int *)(this_ptr + 0x1d0) == 0) {
        plVar15 = (int64_t *)*local_70;
        if (plVar15 == (int64_t *)0x0) {
LAB_00229806:
          plVar7 = (int64_t *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar15))();
          plVar7 = local_58;
          local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
          pplVar16 = (int64_t **)local_50;
          if (local_50[0] == '\0') {
            pplVar16 = &local_68;
          }
          *(char *)pplVar16 = '\0';
          if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (int64_t *)0x0) {
            plVar7 = (int64_t *)*local_70;
            if (plVar7 == (int64_t *)0x0) goto LAB_00229806;
          }
          else if ((char)local_68 != '\0') goto LAB_00229808;
          FUN_00d50b00();
        }
LAB_00229808:
        dVar19 = (double)FUN_019af2a0(local_108,(double)local_b0 - local_108);
        if ((plVar15 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
          dVar19 = (double)FUN_00d50b20();
        }
      }
      goto LAB_00229836;
    }
    local_b0 = (int *)(this_ptr + 0x19c);
    *(void*)(this_ptr + 0x19c) = *(void*)(this_ptr + 0x198);
    *(int *)(this_ptr + 0x198) = local_94;
  }
  FUN_0022d390();
  iVar14 = *(int *)(this_ptr + 0x198);
  if (iVar14 == 2) {
    plVar15 = (int64_t *)*local_70;
    if (plVar15 == (int64_t *)0x0) {
LAB_00229fcd:
      plVar7 = (int64_t *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar15))();
      plVar7 = local_58;
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
      pplVar16 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar16 = &local_68;
      }
      *(char *)pplVar16 = '\0';
      if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)*local_70;
        if (plVar7 == (int64_t *)0x0) goto LAB_00229fcd;
      }
      else if ((char)local_68 != '\0') goto LAB_00229fcf;
      FUN_00d50b00();
    }
LAB_00229fcf:
    FUN_019f3ae0();
    if ((plVar15 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
    pplVar16 = (int64_t **)local_50;
    if (local_50[0] == '\0') {
      pplVar16 = &local_90;
    }
    *(char *)pplVar16 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_0022a050:
      FUN_00d50b00();
    }
    else if ((char)local_90 == '\0') goto LAB_0022a050;
    (**(code **)(&UNK_00001888 + *plVar7))();
    local_150 = 0;
    local_148 = '\0';
    (**(code **)(*local_68 + 0x3e0))();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    pplVar16 = (int64_t **)local_50;
    pplVar8 = &local_90;
    if (local_50[0] != '\0') {
      pplVar8 = pplVar16;
    }
    local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
    *(char *)pplVar8 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar4 = (void*)pplVar16;
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_0022a12b:
      FUN_00d50b00();
    }
    else if ((char)local_90 == '\0') goto LAB_0022a12b;
    (**(code **)(&UNK_00001888 + *plVar7))();
    FUN_000bdcb0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!NAN((double)local_a0)) {
      FUN_00226f20();
      plVar15 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (int64_t *)FUN_016553c0(local_a0);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (!NAN((double)local_a8)) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      if (local_58 == (int64_t *)0x0) {
        bVar17 = false;
      }
      else {
        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *local_90 + 0x20))();
        bVar17 = local_68 != (int64_t *)0x0;
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          (**(code **)(*local_68 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar17) {
        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *local_68 + 0x20))();
        (**(code **)(*local_58 + 0x60))(local_a8);
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          (**(code **)(*local_58 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (!NAN(local_c0)) {
      FUN_00226f20();
      plVar15 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = (int64_t *)FUN_016553c0(local_c0);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c8 = (double)FUN_016553c0(local_d0);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((!NAN((double)local_80)) && (*(int64_t *)(this_ptr + 0xc0) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar15 + 0x428))(local_80,local_c8);
      FUN_00d50b20();
    }
    plVar15 = g_026f6ea0;
    if (g_026f6ea0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar19 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar19 * g_023907c0);
    dVar19 = dVar19 * g_023907c0 - g_023907c8;
    uVar18 = FUN_0071a120();
    if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
        (uVar18 = FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    bVar2 = (byte)(((int64_t)dVar19 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
    local_68 = plVar15;
    local_60 = '\0';
    FUN_000175c0(uVar18,&local_68);
    plVar7 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      local_50[0] = '\0';
      local_58 = plVar7;
      bVar2 = FUN_00c70bc0();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar7 != (int64_t *)0x0 & bVar2) == 0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_019f7880();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_00212950();
      FUN_019f78b0();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
      FUN_00212a20();
      FUN_019f7a40();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
      FUN_00212b00();
      FUN_019f7880();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
    lVar11 = g_026f6e50;
    if (g_026f6e50 != 0) {
      FUN_00d50b00();
    }
    FUN_00234140();
    FUN_019ef470();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
    plVar15 = local_58;
    lVar11 = g_026f6df8;
    if (g_026f6df8 != 0) {
      FUN_00d50b00();
    }
    FUN_00233fe0();
    (**(code **)(&UNK_00001578 + *plVar15))();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
    plVar15 = local_58;
    lVar11 = g_026f6e08;
    if (g_026f6e08 != 0) {
      FUN_00d50b00();
    }
    FUN_00234140();
    (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                *plVar15 + 0x20))();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
    plVar15 = local_58;
    lVar11 = g_026f6e28;
    if (g_026f6e28 != 0) {
      FUN_00d50b00();
    }
    FUN_00234140();
    (**(code **)((int64_t)&dylib_command_00001288.dylib.name.offset + *plVar15))();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + *(int64_t *)*local_70))();
    plVar15 = local_58;
    lVar11 = g_026f6e00;
    if (g_026f6e00 != 0) {
      FUN_00d50b00();
    }
    FUN_00234140();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" + *plVar15)
    )();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (iVar14 == 1) {
    plVar15 = (int64_t *)*local_70;
    if (plVar15 == (int64_t *)0x0) {
LAB_00229d5b:
      plVar7 = (int64_t *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar15))();
      plVar7 = local_58;
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
      pplVar16 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar16 = &local_68;
      }
      *(char *)pplVar16 = '\0';
      if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)*local_70;
        if (plVar7 == (int64_t *)0x0) goto LAB_00229d5b;
      }
      else if ((char)local_68 != '\0') goto LAB_00229d5d;
      FUN_00d50b00();
    }
LAB_00229d5d:
    FUN_019f3ae0();
    if ((plVar15 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
    pplVar16 = (int64_t **)local_50;
    if (local_50[0] == '\0') {
      pplVar16 = &local_90;
    }
    *(char *)pplVar16 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_00229dde:
      FUN_00d50b00();
    }
    else if ((char)local_90 == '\0') goto LAB_00229dde;
    (**(code **)(&UNK_00001670 + *plVar7))();
    plVar7 = local_68;
    FUN_00226f20();
    plVar12 = local_58;
    if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar7 + 0x3e0))();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    pplVar16 = (int64_t **)local_50;
    pplVar8 = &local_90;
    if (local_50[0] != '\0') {
      pplVar8 = pplVar16;
    }
    local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
    *(char *)pplVar8 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar4 = (void*)pplVar16;
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_00229ee3:
      FUN_00d50b00();
    }
    else if ((char)local_90 == '\0') goto LAB_00229ee3;
    (**(code **)(&UNK_00001670 + *plVar7))();
    FUN_000bdcb0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!NAN((double)local_a0)) {
      FUN_00226f20();
      plVar15 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (int64_t *)FUN_016553c0(local_a0);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((!NAN((double)local_a8)) && (*(int64_t *)(this_ptr + 0xc0) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar15 + 0x3a8))(local_a8);
      FUN_00d50b20();
    }
    if (!NAN(local_c0)) {
      FUN_00226f20();
      plVar15 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = (int64_t *)FUN_016553c0(local_c0);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c8 = (double)FUN_016553c0(local_d0);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((!NAN((double)local_80)) && (*(int64_t *)(this_ptr + 0xc0) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar15 + 0x428))(local_80,local_c8);
      FUN_00d50b20();
    }
  }
  else if (iVar14 == 0) {
    plVar15 = (int64_t *)*local_70;
    if (plVar15 == (int64_t *)0x0) {
LAB_00229b92:
      plVar7 = (int64_t *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar15))();
      plVar7 = local_58;
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
      pplVar16 = (int64_t **)local_50;
      if (local_50[0] == '\0') {
        pplVar16 = &local_68;
      }
      *(char *)pplVar16 = '\0';
      if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)*local_70;
        if (plVar7 == (int64_t *)0x0) goto LAB_00229b92;
      }
      else if ((char)local_68 != '\0') goto LAB_00229b94;
      FUN_00d50b00();
    }
LAB_00229b94:
    FUN_019f3ae0();
    if ((plVar15 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
    pplVar16 = (int64_t **)local_50;
    if (local_50[0] == '\0') {
      pplVar16 = &local_90;
    }
    *(char *)pplVar16 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_00229c12:
      FUN_00d50b00();
    }
    else if ((char)local_90 == '\0') goto LAB_00229c12;
    (**(code **)(&UNK_00001670 + *plVar7))();
    local_160 = 0;
    local_158 = '\0';
    (**(code **)(*local_68 + 0x3e0))();
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    pplVar16 = &local_90;
    if (local_50[0] != '\0') {
      pplVar16 = (int64_t **)local_50;
    }
    local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_50[0]);
    *(char *)pplVar16 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_00229ced:
      FUN_00d50b00();
    }
    else if ((char)local_90 == '\0') goto LAB_00229ced;
    (**(code **)(&UNK_00001670 + *plVar7))();
    cVar1 = *(char *)(this_ptr + 0x1a0);
    if (cVar1 == '\0') {
      pVar4 = 0;
    }
    else {
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_88 = '\0';
        local_90 = (int64_t *)0x0;
      }
      else {
        FUN_006f3f00();
      }
      pVar4 = FUN_00751ba0();
    }
    FUN_000bdcb0();
    if (((cVar1 != '\0') && (local_88 != '\0')) && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!NAN((double)local_a8)) {
      FUN_00226f20();
      plVar15 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a0 = (int64_t *)FUN_01656080(local_a8);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((!NAN((double)local_a0)) && (*(int64_t *)(this_ptr + 0xc0) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar15 + 0x3a8))(local_a0);
      FUN_00d50b20();
    }
    if (!NAN((double)local_80)) {
      FUN_00226f20();
      plVar15 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = (double)FUN_01656080(local_80);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00226f20();
        plVar15 = local_58;
        pvVar6 = _pthread_getspecific(pVar4);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d0 = (double)FUN_01656080(local_c8);
        if ((local_50[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((!NAN(local_c0)) && (*(int64_t *)(this_ptr + 0xc0) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar15 = *(int64_t **)(this_ptr + 0xc0);
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar15 + 0x428))(local_c0,local_d0);
      FUN_00d50b20();
    }
  }
  FUN_0022d800();
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_0022aea3:
    FUN_0022ee90();
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar15 = local_58;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 == (int64_t *)0x0) goto LAB_0022aea3;
  }
  if ((*local_b0 == 2) && (FUN_0021f1f0(), *(int64_t *)(this_ptr + 0x98) != 0)) {
    FUN_00d50b00();
    lVar11 = *(int64_t *)(this_ptr + 0x98);
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_01c446f0();
    iVar14 = *(int *)(this_ptr + 0x154);
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar5 != iVar14) {
      lVar11 = *(int64_t *)(this_ptr + 0x98);
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      FUN_0021e520();
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_78 == (int64_t *)0x0) || (*(int *)((int64_t)local_78 + 0xc) == 0)) {
    plVar15 = (int64_t *)*local_70;
    (**(code **)(&UNK_00001550 + *plVar15))();
    plVar7 = local_58;
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
    pplVar16 = (int64_t **)local_50;
    if (local_50[0] == '\0') {
      pplVar16 = &local_68;
    }
    *(char *)pplVar16 = '\0';
    if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = (int64_t *)*local_70;
LAB_0022afc6:
      FUN_00d50b00();
    }
    else if ((char)local_68 == '\0') goto LAB_0022afc6;
    local_140 = 0;
    local_138 = '\0';
    (**(code **)(*plVar7 + 0xde8))();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar15 = (int64_t *)*local_70;
  uVar18 = (**(code **)(&UNK_00001550 + *plVar15))();
  plVar7 = local_58;
  pplVar16 = (int64_t **)local_50;
  if (local_50[0] == '\0') {
    pplVar16 = &local_68;
  }
  local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
  *(char *)pplVar16 = '\0';
  if ((local_50[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = (int64_t *)*local_70;
LAB_0022b073:
    uVar18 = FUN_00d50b00();
  }
  else if ((char)local_68 == '\0') goto LAB_0022b073;
  local_130 = local_78;
  local_128 = '\0';
  (**(code **)(*plVar7 + 0xdc8))(uVar18,1);
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_58 + 0x450))();
  if (cVar1 != '\0') {
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_0022b1b8;
  }
  iVar14 = *(int *)(this_ptr + 0x198);
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar14 == 2) goto LAB_0022b1b8;
  pplVar16 = &local_58;
  FUN_0064dfb0();
  plVar15 = local_58;
  FUN_00275e90();
  if (plVar15 == (int64_t *)0x0) {
LAB_0022b16a:
    pplVar16 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar15 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0022b16a;
  }
  plVar15 = *pplVar16;
  if (*(char *)(pplVar16 + 1) == '\0') {
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar16 + 1) = 0;
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00465c80();
  if (plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0022b1b8:
  plVar15 = *(int64_t **)(this_ptr + 0xd8);
  if (plVar15 != (int64_t *)0x0) {
    uVar18 = FUN_00d50b00();
    (**(code **)(*plVar15 + 0x650))(uVar18,*(void*)(this_ptr + 0x198));
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00637870();
    plVar15 = local_58;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_00637870();
      FUN_006e6160();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00637870();
      FUN_006e67f0();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00249a80();
  FUN_0024a180();
  if (((char)local_b8 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

