// Function: FUN_01a495b0
// Address: 01a495b0
// Size: 4909 bytes
// Class: Unknown

void FUN_01a495b0(double param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  uint32_t in_ECX;
  void* pVar10;
  void*puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int iVar14;
  uint uVar15;
  uint64_t uVar16;
  undefined7 uVar17;
  bool bVar18;
  uint64_t uVar19;
  uint64_t extraout_XMM0_Qa;
  double dVar20;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  uint32_t local_134;
  int64_t local_130;
  char local_128;
  double local_120;
  int64_t *local_118;
  char local_110;
  code *local_108;
  void*local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  int64_t *local_d8;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  int local_98;
  uint64_t local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  local_134 = in_ECX;
  local_120 = param_1;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar11 = &g_02572358;
  *puVar4 = &g_02572358;
  local_108 = g_02572370;
  (*g_02572370)();
  local_100 = puVar4;
  FUN_01a46820(local_120);
  pVar10 = (void*)puVar11;
  uVar15 = *(uint *)(*param_2 + 0xc);
  uVar16 = (uint64_t)uVar15;
  if (0 < (int)uVar15) {
    while( true ) {
      uVar15 = uVar15 - 1;
      pvVar5 = _pthread_getspecific((void*)puVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar5 = _pthread_getspecific((void*)puVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + (uint64_t)uVar15 * 8);
      local_128 = 0;
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_128 = '\x01';
      local_130 = lVar7;
      FUN_012ebc80();
      plVar6 = local_88;
      if ((char)local_80 == '\0') {
        if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
           (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80._0_1_ = '\0';
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        if (*(int *)((int64_t)plVar6 + 0xc) != 0) {
          FUN_00d23620();
        }
        FUN_00d50b20();
      }
      pVar10 = (void*)puVar11;
      if ((int64_t)uVar16 < 2) break;
      uVar16 = uVar16 - 1;
    }
  }
  FUN_01a47310(local_120);
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar19 = (**(code **)(*plVar6 + 0x18))();
  local_e8 = plVar6;
  if (local_100 == (void*)0x0) {
    local_90 = 0;
    local_60 = (int64_t *)0x0;
  }
  else {
    local_80._0_1_ = '\0';
    local_88 = (int64_t *)0x0;
    local_78 = local_100;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_90 = 0;
    local_60 = (int64_t *)0x0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar14 = -local_70._4_4_;
        }
        else {
          iVar14 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar14);
          uVar19 = FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar14 = 0;
        }
        local_70 = CONCAT44(iVar14,(int)local_70);
      }
      lVar7 = (int64_t)(int)local_70;
      iVar14 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar14);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar14) break;
      local_88 = *(int64_t **)(local_78[2] + 8 + lVar7 * 8);
      local_b8 = (int64_t *)((uint64_t)local_b8 & 0xffffffffffffff00);
      pVar10 = (void*)local_78[2];
      if (local_88[2] == 0) {
        if (local_88[3] == 0) {
          plVar6 = (int64_t *)0x0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_013df480();
          plVar6 = local_58;
          if (local_58 != (int64_t *)0x0) {
            pplVar8 = &local_b8;
            if (local_50[0] != '\0') {
              local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,1);
              pplVar8 = (int64_t **)local_50;
            }
            *(void*)pplVar8 = 0;
            if (local_50[0] != '\0') {
              uVar19 = FUN_00d50b20();
            }
          }
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar19 = FUN_013df480();
        plVar6 = local_58;
        if (local_58 != (int64_t *)0x0) {
          pplVar8 = &local_b8;
          if (local_50[0] != '\0') {
            local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,1);
            pplVar8 = (int64_t **)local_50;
          }
          *(void*)pplVar8 = 0;
          if (local_50[0] != '\0') {
            uVar19 = FUN_00d50b20();
          }
        }
      }
      local_1b0 = '\0';
      local_1b8 = plVar6;
      FUN_01a4b3b0(uVar19,&local_1b8);
      plVar9 = local_60;
      uVar17 = (undefined7)(uVar16 >> 8);
      if (local_58 == local_60) {
        if (((char)local_90 == '\0') && (local_58 != (int64_t *)0x0)) {
          if (local_50[0] != '\0') goto LAB_01a49a58;
          uVar16 = CONCAT71(uVar17,1);
          FUN_00d50b00();
        }
        else {
          uVar16 = local_90 & 0xffffffff;
        }
LAB_01a49ac0:
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar9 = local_58;
        if (local_50[0] == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar16 = CONCAT71(uVar17,1);
          if (((char)local_90 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a49ac0;
        }
        if (((char)local_90 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a49a58:
        local_50[0] = '\0';
        uVar16 = CONCAT71(uVar17,1);
      }
      if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 == (int64_t *)0x0) {
        plVar9 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar9 = (int64_t)&g_02572358;
        uVar19 = (*local_108)();
        local_1a0 = '\0';
        local_190 = '\0';
        local_1a8 = plVar9;
        local_198 = plVar6;
        local_60 = plVar9;
        uVar19 = FUN_01a4b460(uVar19,&local_198);
        if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
          uVar19 = FUN_00d50b20();
        }
        local_90 = CONCAT71((int7)((uint64_t)uVar19 >> 8),1);
        if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_90 = uVar16 & 0xffffffff;
        local_60 = plVar9;
      }
      local_58 = local_88;
      local_50[0] = '\0';
      uVar19 = FUN_00d21140();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      if (((char)local_b8 != '\0') && (plVar6 != (int64_t *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
    }
    plVar6 = local_78;
    FUN_01954b60();
    pVar10 = (void*)plVar6;
  }
  FUN_01a58dc0();
  cVar2 = FUN_019a9840();
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    local_f8 = 0;
    local_d8 = (int64_t *)0x0;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe58))();
    local_d8 = local_88;
    plVar6 = local_88;
    if (local_88 == (int64_t *)0x0) {
      local_d8 = (int64_t *)0x0;
      local_f8 = 0;
    }
    else if ((char)local_80 == '\0') {
      uVar19 = FUN_00d50b00();
      local_f8 = CONCAT71((int7)((uint64_t)uVar19 >> 8),1);
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80._0_1_ = '\0';
      local_f8 = CONCAT71((int7)((uint64_t)local_88 >> 8),1);
    }
    pVar10 = (void*)plVar6;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c9fe20();
  plVar6 = local_88;
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_80);
  pplVar8 = &local_58;
  if ((char)local_80 != '\0') {
    pplVar8 = &local_80;
  }
  *(void*)pplVar8 = 0;
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar6;
  if (((char)local_58 == '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar9 = (int64_t)&g_02572358;
  (*local_108)();
  FUN_01a58dc0();
  uVar19 = (**(code **)(*local_b8 + 0xe10))();
  plVar6 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      uVar19 = FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  local_88 = plVar6;
  local_80._0_1_ = '\0';
  uVar19 = FUN_00d214d0(uVar19,*(void*)((int64_t)plVar9 + 0xc));
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    uVar19 = FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  local_108 = 0x0;
  if (*(int *)((int64_t)local_f0 + 0xc) == 1) {
    FUN_00d23310();
    plVar6 = local_88;
    pplVar8 = &local_80;
    if ((char)local_80 == '\0') {
      pplVar8 = &local_58;
    }
    local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_80);
    *(void*)pplVar8 = 0;
    if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar19 = FUN_01326de0();
    local_108 = CONCAT71((int7)((uint64_t)uVar19 >> 8),(int)uVar19 != 3);
    uVar19 = extraout_XMM0_Qa;
    if (((char)local_58 != '\0') && (plVar6 != (int64_t *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
  }
  local_80._0_1_ = '\0';
  local_88 = (int64_t *)0x0;
  local_78 = local_f0;
  local_70._0_4_ = -1;
  local_70._4_4_ = 0;
  local_68 = 0;
  while( true ) {
    if (local_70._4_4_ != 0) {
      if (local_70._4_4_ < 1) {
        local_70._4_4_ = -local_70._4_4_;
      }
      else {
        local_70._0_4_ = (int)local_70 - local_70._4_4_;
        FUN_00d23690(uVar19,local_70._4_4_);
        local_68 = local_68 + local_70._4_4_;
        local_70._4_4_ = 0;
      }
    }
    lVar7 = (int64_t)(int)local_70;
    local_70._0_4_ = (int)local_70 + 1;
    if (*(int *)((int64_t)local_78 + 0xc) <= (int)local_70) break;
    lVar12 = local_78[2];
    local_88 = *(int64_t **)(lVar12 + 8 + lVar7 * 8);
    FUN_01a58dc0();
    pVar10 = (void*)lVar12;
    cVar2 = (**(code **)((int64_t)&dylib_command_00001220.dylib.current_version + *local_58))();
    bVar18 = true;
    if (cVar2 == '\0') {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar14 = FUN_01326de0();
      bVar18 = iVar14 != 3;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_188 = local_88;
    local_180 = '\0';
    FUN_01a4b3b0();
    plVar6 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar6;
      local_40 = 0xffffffff;
      local_38 = 0;
      iVar14 = 0;
      while( true ) {
        iVar3 = 0;
        if (iVar14 != 0) {
          if (iVar14 < 1) {
            iVar3 = -iVar14;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar14);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar3 = 0;
          }
          local_40 = CONCAT44(iVar3,(int)local_40);
        }
        lVar7 = (int64_t)(int)local_40;
        iVar14 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar7 * 8);
        iVar14 = iVar3;
        if (local_58[5] != 0) {
          local_b0 = '\0';
          local_b8 = (int64_t *)0x0;
          local_a0 = 0xffffffff;
          local_98 = 0;
          local_a0._4_4_ = 0;
          local_a8 = local_58[5];
          while( true ) {
            if (local_a0._4_4_ != 0) {
              if (local_a0._4_4_ < 1) {
                iVar14 = -local_a0._4_4_;
              }
              else {
                iVar14 = (int)local_a0 - local_a0._4_4_;
                local_a0 = CONCAT44(local_a0._4_4_,iVar14);
                FUN_00d23690();
                local_98 = local_98 + local_a0._4_4_;
                iVar14 = 0;
              }
              local_a0 = CONCAT44(iVar14,(int)local_a0);
            }
            lVar7 = (int64_t)(int)local_a0;
            iVar14 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar14);
            if (*(int *)(local_a8 + 0xc) <= iVar14) break;
            local_b8 = *(int64_t **)(*(int64_t *)(local_a8 + 0x10) + 8 + lVar7 * 8);
            cVar2 = FUN_00d23d70();
            if (cVar2 != '\0') {
              FUN_00d23f50();
            }
          }
          FUN_001159b0();
          iVar14 = local_40._4_4_;
        }
      }
      FUN_01954b60();
      pVar10 = (void*)lVar7;
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_178 = local_88;
    local_170 = '\0';
    FUN_01a4b3b0();
    plVar13 = local_58;
    local_110 = 0;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    local_110 = '\x01';
    local_118 = plVar13;
    uVar19 = FUN_01388130(bVar18);
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar6;
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
        lVar7 = (int64_t)(int)local_40;
        iVar14 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar7 * 8);
        if ((char)local_108 == '\0') {
          plVar13 = (int64_t *)local_58[5];
          if (plVar13 != (int64_t *)0x0) goto LAB_01a4a4e9;
          bVar18 = true;
          plVar13 = (int64_t *)0x0;
LAB_01a4a4fb:
          local_b0 = '\0';
          local_b8 = plVar13;
          FUN_00d23480();
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar18) {
            FUN_00d50b20();
          }
          if (local_58[5] != 0) {
            local_b0 = '\0';
            local_b8 = (int64_t *)0x0;
            local_a0 = 0xffffffff;
            local_98 = 0;
            local_a0._4_4_ = 0;
            local_a8 = local_58[5];
            while( true ) {
              if (local_a0._4_4_ != 0) {
                if (local_a0._4_4_ < 1) {
                  iVar14 = -local_a0._4_4_;
                }
                else {
                  iVar14 = (int)local_a0 - local_a0._4_4_;
                  local_a0 = CONCAT44(local_a0._4_4_,iVar14);
                  FUN_00d23690();
                  local_98 = local_98 + local_a0._4_4_;
                  iVar14 = 0;
                }
                local_a0 = CONCAT44(iVar14,(int)local_a0);
              }
              lVar7 = (int64_t)(int)local_a0;
              iVar14 = (int)local_a0 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar14);
              if (*(int *)(local_a8 + 0xc) <= iVar14) break;
              local_b8 = *(int64_t **)(*(int64_t *)(local_a8 + 0x10) + 8 + lVar7 * 8);
              FUN_00d23f50();
            }
            FUN_001159b0();
          }
        }
        else {
          plVar13 = (int64_t *)local_58[5];
          if ((*(int *)((int64_t)plVar13 + 0xc) != 2) || (*(int *)((int64_t)plVar6 + 0xc) != 1)) {
LAB_01a4a4e9:
            FUN_00d50b00();
            bVar18 = false;
            goto LAB_01a4a4fb;
          }
          puVar4 = (void*)plVar13[2];
          plVar13 = (int64_t *)*puVar4;
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
            puVar4 = *(void**)(local_58[5] + 0x10);
          }
          plVar1 = (int64_t *)puVar4[1];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pVar10 = (void*)puVar4;
          FUN_00d216c0();
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_120 = (double)FUN_0125a280();
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar20 = (double)FUN_0125a280();
          if (dVar20 <= local_120) {
            local_b0 = '\0';
            local_b8 = plVar1;
            FUN_00d21140();
            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_b0 = '\0';
            local_b8 = plVar13;
            FUN_00d21140();
            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01954b60();
      uVar19 = FUN_00d50b20();
    }
  }
  FUN_00115190();
  plVar6 = plVar9;
  if (local_d8 == (int64_t *)0x0) goto LAB_01a4a83c;
  FUN_01a58dc0();
  local_160 = '\0';
  local_158 = local_d8;
  local_150 = '\0';
  local_168 = plVar9;
  (**(code **)(*local_58 + 0xe50))(&local_158,&local_168);
  plVar6 = local_88;
  if (plVar9 == local_88) {
LAB_01a4a7e0:
    plVar6 = plVar9;
    if ((char)local_80 != '\0') {
LAB_01a4a7e6:
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if ((char)local_80 == '\0') {
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar9 = plVar6;
        goto LAB_01a4a7e0;
      }
      if ((char)local_80 == '\0') goto LAB_01a4a7f4;
      goto LAB_01a4a7e6;
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_80._0_1_ = '\0';
  }
LAB_01a4a7f4:
  if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a4a83c:
  FUN_01a58dc0();
  (**(code **)(*local_88 + 0xda0))();
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar19 = FUN_01a58dc0();
  local_140 = '\0';
  local_148 = plVar6;
  (**(code **)(*local_88 + 0xdb8))(uVar19,1);
  if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_f0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_100 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

