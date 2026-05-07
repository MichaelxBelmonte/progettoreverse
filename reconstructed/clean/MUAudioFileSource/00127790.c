// Function: FUN_00127790
// Address: 00127790
// Size: 5152 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void* FUN_00127790(void* param_1)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  void*puVar11;
  uint64_t uVar12;
  void* pVar13;
  int64_t *plVar14;
  int64_t lVar15;
  void*puVar16;
  int iVar17;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar18;
  uint64_t uVar19;
  uint32_t extraout_XMM0_Da;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  void*local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  int64_t *local_c8;
  int64_t local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  uint64_t local_98;
  int local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_b8 = plVar4;
  FUN_00757c60();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_d0 = local_b0;
  if ((char)local_a8 == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), (char)local_a8 != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8._0_1_ = '\0';
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  if (local_d0 != 0) {
    local_a8._0_1_ = '\0';
    local_b0 = 0;
    local_a0 = local_d0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_98._4_4_ = 0;
    while( true ) {
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar17 = -local_98._4_4_;
        }
        else {
          iVar17 = (int)local_98 - local_98._4_4_;
          local_98 = CONCAT44(local_98._4_4_,iVar17);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar17 = 0;
        }
        local_98 = CONCAT44(iVar17,(int)local_98);
      }
      lVar6 = (int64_t)(int)local_98;
      iVar17 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar17);
      if (*(int *)(local_a0 + 0xc) <= iVar17) break;
      lVar15 = *(int64_t *)(local_a0 + 0x10);
      local_b0 = *(int64_t *)(lVar15 + 8 + lVar6 * 8);
      plVar4 = (int64_t *)FUN_00e8fc40();
      pVar13 = (void*)lVar15;
      FUN_00022d50();
      (**(code **)(*plVar4 + 0x18))();
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      plVar7 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00127a30;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_00127a30:
        local_60[0] = '\0';
        local_68 = (int64_t *)0x0;
        local_58 = plVar7;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar17 = -local_50._4_4_;
            }
            else {
              iVar17 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar17);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar17 = 0;
            }
            local_50 = CONCAT44(iVar17,(int)local_50);
          }
          lVar6 = (int64_t)(int)local_50;
          iVar17 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar17);
          if (*(int *)((int64_t)local_58 + 0xc) <= iVar17) break;
          local_68 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((void*)local_58[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          plVar7 = (int64_t *)CONCAT71(local_78._1_7_,(char)local_78);
          if ((g_026fdd70 == '\0') && (iVar17 = ___cxa_guard_acquire(), iVar17 != 0)) {
            g_026e3238 = FUN_00115af0();
            g_026e3220 = "MUAudioFileSource";
            g_026e3228 = 0xa0;
            g_026e3230 = FUN_00136df0;
            g_026e3240 = 0;
            ram_00000000026e3248 = 0;
            g_026e3250 = 0;
            ram_00000000026e3258 = 0;
            g_026e3260 = 0;
            ram_00000000026e3268 = 0;
            g_026e3270 = 0;
            ram_00000000026e3278 = 0;
            g_026e3280 = 0;
            ram_00000000026e3288 = 0;
            g_026e3290 = 0;
            ram_00000000026e3298 = 0;
            g_026e32a0 = 0;
            ram_00000000026e32a8 = 0;
            g_026e32b0 = 0;
            ram_00000000026e32b8 = 0;
            g_026e32c0 = 0;
            ram_00000000026e32c8 = 0;
            g_026e32d0 = 0;
            ram_00000000026e32d8 = 0;
            g_026e32e0 = 0;
            ___cxa_guard_release();
          }
          plVar14 = &g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            plVar14 = &local_78;
            if (cVar2 == '\0') {
              plVar14 = &g_02802688;
            }
          }
          plVar7 = (int64_t *)*plVar14;
          if ((char)plVar14[1] == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(plVar14 + 1) = 0;
          }
          pVar13 = (void*)plVar14;
          if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (int64_t *)0x0) {
            pvVar5 = _pthread_getspecific(pVar13);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_0124d450();
            if (cVar2 != '\0') {
              pvVar5 = _pthread_getspecific(pVar13);
              plVar14 = plVar7;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar14 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar3 = (**(code **)(*plVar14 + 0x478))();
              lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
              if ((local_70 != '\0') && (lVar6 != 0)) {
                uVar3 = FUN_00d50b20();
              }
              if (lVar6 != 0) {
                local_1a8 = '\0';
                local_1b0 = plVar7;
                FUN_00129760(uVar3,&local_1b0);
                lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                if (local_70 == '\0') {
                  if (((lVar6 != 0) && (FUN_00d50b00(), local_70 != '\0')) &&
                     (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_70 = '\0';
                }
                if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar6 == 0) {
                  uVar3 = FUN_00d46530();
                  local_d8 = 0;
                  lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                  if (local_70 == '\0') {
                    if (lVar6 != 0) {
                      uVar3 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = '\0';
                  }
                  local_d8 = '\x01';
                  local_188 = '\0';
                  local_190 = plVar7;
                  local_e0 = lVar6;
                  FUN_00129810(uVar3,&local_190);
                  if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d8 != '\0') && (local_e0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  FUN_00d45870();
                  uVar3 = FUN_00d46530();
                  local_e8 = 0;
                  lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                  if (local_70 == '\0') {
                    if (lVar6 != 0) {
                      uVar3 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = '\0';
                  }
                  local_e8 = '\x01';
                  local_198 = '\0';
                  local_1a0 = plVar7;
                  local_f0 = lVar6;
                  FUN_00129810(uVar3,&local_1a0);
                  if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_e8 != '\0') && (local_f0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar18 = 0xffffffff;
      uVar19 = 0;
      local_80 = plVar4;
      while( true ) {
        FUN_00ca1380();
        plVar4 = local_68;
        local_78._0_1_ = local_60[0];
        plVar7 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar7 = &local_78;
        }
        *(char *)plVar7 = '\0';
        if ((local_60[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar17 = *(int *)((int64_t)plVar4 + 0xc);
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        plVar4 = local_80;
        if ((int64_t)iVar17 <= (int64_t)uVar19) break;
        if (uVar19 == 0) {
LAB_00127f20:
          uVar18 = uVar19 & 0xffffffff;
        }
        else {
          FUN_00ca1380();
          plVar4 = local_68;
          local_78._0_1_ = local_60[0];
          plVar7 = (int64_t *)local_60;
          if (local_60[0] == '\0') {
            plVar7 = &local_78;
          }
          *(char *)plVar7 = '\0';
          if ((local_60[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d45870();
          local_88 = (int64_t *)CONCAT44(local_88._4_4_,uVar3);
          FUN_00ca1380();
          plVar7 = local_68;
          local_40[0] = local_60[0];
          pcVar8 = local_60;
          if (local_60[0] == '\0') {
            pcVar8 = local_40;
          }
          *pcVar8 = '\0';
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar17 = FUN_00d45870();
          if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar17 < (int)local_88) goto LAB_00127f20;
        }
        uVar19 = uVar19 + 1;
      }
      if (-1 < (int)uVar18) {
        FUN_00c9fe20();
        plVar7 = local_68;
        local_78._0_1_ = local_60[0];
        plVar14 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = &local_78;
        }
        *(char *)plVar14 = '\0';
        if ((local_60[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = *(int64_t **)(plVar7[2] + uVar18 * 8);
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        FUN_00ca1380();
        plVar14 = local_68;
        local_78._0_1_ = local_60[0];
        plVar9 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar9 = &local_78;
        }
        *(char *)plVar9 = '\0';
        if ((local_60[0] != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_60[0] = '\0';
        local_68 = plVar7;
        cVar2 = FUN_00d23d70();
        uVar3 = extraout_XMM0_Da;
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_178 = '\0';
          local_170 = local_b0;
          local_168 = '\0';
          local_180 = plVar7;
          FUN_001298c0(uVar3,&local_170);
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_c8 = plVar4;
  FUN_00c9fe20();
  lVar6 = local_b0;
  pplVar10 = &local_a8;
  if ((char)local_a8 == '\0') {
    pplVar10 = &local_68;
  }
  local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_a8);
  *(void*)pplVar10 = 0;
  if (((char)local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = lVar6;
  if ((char)local_68 == '\0') {
    if (lVar6 == 0) goto LAB_00128bbf;
    FUN_00d50b00();
  }
  else if (lVar6 == 0) goto LAB_00128bbf;
  local_a8._0_1_ = '\0';
  local_b0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = local_c0;
  while( true ) {
    lVar6 = (int64_t)(int)local_98;
    iVar17 = (int)local_98 + 1;
    local_98 = CONCAT44(local_98._4_4_,iVar17);
    if (*(int *)(local_a0 + 0xc) <= iVar17) break;
    lVar15 = *(int64_t *)(local_a0 + 0x10);
    local_160 = *(int64_t *)(lVar15 + 8 + lVar6 * 8);
    local_158 = '\0';
    local_d0 = local_160;
    local_b0 = local_160;
    FUN_00129970();
    plVar4 = local_68;
    pVar13 = (void*)lVar15;
    if (local_60[0] == '\0') {
      if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar13);
    plVar7 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar7 + 0x478))();
    local_88 = local_68;
    plVar7 = local_68;
    if ((((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), plVar7 = local_88, local_60[0] != '\0')) && (local_68 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    local_148 = '\0';
    local_150 = plVar7;
    uVar3 = FUN_00721510();
    local_80 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != (int64_t *)0x0) && (uVar3 = FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        uVar3 = FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      uVar3 = FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar1 = true;
    }
    else {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_024d07b0;
      *(void*)((int64_t)puVar11 + 0xc) = 0;
      *(void*)((int64_t)puVar11 + 0x14) = 0;
      *(void*)((int64_t)puVar11 + 0x1c) = 0;
      *(void*)((int64_t)puVar11 + 0x24) = 0;
      *(void*)((int64_t)puVar11 + 0x2c) = 0;
      FUN_00d500e0();
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar12 = FUN_00b7a6d0();
      puVar11[3] = uVar12;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b88630();
      puVar16 = (void*)((int64_t)puVar11 + 0xc);
      *puVar16 = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar13 = (void*)puVar16;
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b86c20();
      *(void*)(puVar11 + 2) = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b86d10();
      *(void*)((int64_t)puVar11 + 0x14) = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar12 = FUN_00b7a710();
      puVar11[4] = uVar12;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_88 == local_80) {
        local_140 = local_88;
        local_138 = '\0';
        FUN_00720770();
        plVar7 = local_68;
        if (local_60[0] == '\0') {
          if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
             (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          pvVar5 = _pthread_getspecific(pVar13);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_130 = plVar7;
          local_128 = '\0';
          FUN_0123bf80();
          if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = (int64_t *)puVar11[5];
          if (plVar7 != local_88) {
            if (local_88 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            puVar11[5] = local_88;
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          goto LAB_00128918;
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        bVar1 = true;
      }
      else {
        cVar2 = (**(code **)(*local_80 + 0x398))();
        plVar7 = (int64_t *)puVar11[5];
        if (cVar2 == '\0') {
          if (plVar7 != local_80) {
            FUN_00d50b00();
            puVar11[5] = local_80;
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else if (plVar7 != local_80) {
          FUN_00d50b00();
          puVar11[5] = local_80;
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
LAB_00128918:
        uVar3 = FUN_00ca1380();
        plVar7 = local_68;
        local_78._0_1_ = local_60[0];
        plVar14 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = &local_78;
        }
        *(char *)plVar14 = '\0';
        if ((local_60[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if ((char)local_78 == '\0') {
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_00128981;
          }
        }
        else if (plVar7 != (int64_t *)0x0) {
LAB_00128981:
          local_60[0] = '\0';
          local_68 = (int64_t *)0x0;
          local_58 = plVar7;
          local_50 = 0xffffffff;
          local_48 = 0;
          while( true ) {
            lVar6 = (int64_t)(int)local_50;
            iVar17 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar17);
            if (*(int *)((int64_t)local_58 + 0xc) <= iVar17) break;
            local_68 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
            plVar7 = (int64_t *)puVar11[5];
            local_f8 = 0;
            lVar6 = local_68[5];
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            local_f8 = '\x01';
            local_100 = lVar6;
            cVar2 = (**(code **)(*plVar7 + 0x50))();
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              FUN_00136e40();
              bVar1 = false;
              FUN_00d50b20();
              goto LAB_00128b60;
            }
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar17 = -local_50._4_4_;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar17 = 0;
              }
              local_50 = CONCAT44(iVar17,(int)local_50);
            }
          }
          FUN_00136e40();
          uVar3 = FUN_00d50b20();
        }
        local_118 = '\0';
        local_110 = local_d0;
        local_108 = '\0';
        local_120 = puVar11;
        FUN_00129a20(uVar3,&local_110);
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = false;
        if ((local_118 != '\0') && (local_120 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00128b60:
      FUN_00d50b20();
      uVar3 = FUN_00d50b20();
    }
    if (local_88 != (int64_t *)0x0) {
      uVar3 = FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      uVar3 = FUN_00d50b20();
    }
    if (bVar1) {
      FUN_000be170();
      FUN_00d50b20();
      if (local_c8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00128c53;
    }
    iVar17 = local_98._4_4_;
    if (local_98._4_4_ != 0) {
      if (local_98._4_4_ < 1) {
        iVar17 = -local_98._4_4_;
      }
      else {
        local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
        FUN_00d23690(uVar3,local_98._4_4_);
        local_90 = local_90 + iVar17;
        iVar17 = 0;
      }
      local_98 = CONCAT44(iVar17,(int)local_98);
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_00128bbf:
  (**(code **)(**(int64_t **)(arg1 + 0xc0) + 0x468))();
  lVar6 = local_b0;
  if (((char)local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    (**(code **)(**(int64_t **)(arg1 + 0xc0) + 0x4f8))();
  }
  *this_ptr = local_c8;
  *(void*)(this_ptr + 1) = 1;
LAB_00128c53:
  if (local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

