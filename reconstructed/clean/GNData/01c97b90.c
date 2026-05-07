// Function: FUN_01c97b90
// Address: 01c97b90
// Size: 3987 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_01c97b90(uint64_t param_1,int64_t *param_2)

{
  void* pVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  void *pvVar9;
  void*puVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *plVar14;
  char in_CL;
  void* pVar15;
  void*puVar16;
  uint64_t uVar17;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar18;
  double dVar19;
  double extraout_XMM0_Qa;
  uint64_t uVar20;
  int64_t local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  uint8_t local_1a8;
  int64_t local_1a0;
  uint8_t local_198;
  int64_t local_190;
  uint8_t local_188;
  int64_t *local_180;
  uint8_t local_178 [8];
  uint8_t local_170;
  double local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_a8;
  double local_98;
  int64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    uVar17 = 0;
    goto LAB_01c98b19;
  }
  lVar2 = *(int64_t *)(this_ptr + 0x38);
  if (lVar2 != 0) {
    param_1 = FUN_00d50b00();
  }
  iVar8 = FUN_01c99400(param_1,0);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_160 = *arg1;
  local_158 = '\0';
  FUN_01273200();
  lVar2 = local_70;
  local_88 = local_70;
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (iVar8 == 1) {
    FUN_00c9fe20();
    lVar11 = local_70;
    local_48 = CONCAT71(local_48._1_7_,(char)local_68);
    plVar14 = &local_48;
    if ((char)local_68 != '\0') {
      plVar14 = &local_68;
    }
    *(void*)plVar14 = 0;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    iVar8 = *(int *)(lVar11 + 0xc);
    if (((char)local_48 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if (iVar8 != 1) goto LAB_01c98b09;
    local_a8 = *(int64_t *)(this_ptr + 0x38);
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
    local_1b8 = 1;
    local_1c0 = local_a8;
    FUN_00d23310();
    lVar11 = local_70;
    local_38[0] = (char)local_68;
    plVar14 = &local_68;
    plVar12 = (int64_t *)local_38;
    if ((char)local_68 != '\0') {
      plVar12 = plVar14;
    }
    *(char *)plVar12 = '\0';
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific((void*)plVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    lVar13 = local_e0;
    if (local_d8 == '\0') {
      if (local_e0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_d8 = '\0';
    }
    local_180 = param_2;
    FUN_000ba510();
    lVar4 = CONCAT71(local_80._1_7_,(char)local_80);
    if (local_78 == '\0') {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_170 = 1;
    FUN_01c99560(local_178,&local_1c0,in_CL);
    lVar6 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
      FUN_00d50b20();
    }
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if ((lVar6 != 0) && (in_CL != '\0')) {
      FUN_00d23310();
      lVar11 = local_70;
      local_80._0_1_ = (char)local_68;
      plVar14 = &local_80;
      plVar12 = &local_68;
      if ((char)local_68 == '\0') {
        plVar12 = plVar14;
      }
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)plVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      lVar13 = local_48;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_80 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      if (lVar13 == 0) {
        bVar5 = false;
        local_a8 = 0;
      }
      else {
        FUN_00d23310();
        lVar11 = local_70;
        local_80._0_1_ = (char)local_68;
        plVar14 = &local_80;
        plVar12 = &local_68;
        if ((char)local_68 == '\0') {
          plVar12 = plVar14;
        }
        *(void*)plVar12 = 0;
        if (((char)local_68 != '\0') && (lVar11 != 0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((void*)plVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        local_a8 = local_48;
        if (local_48 == 0) {
          bVar5 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar5 = true;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar5 = true;
        }
        if (((char)local_80 != '\0') && (lVar11 != 0)) {
          FUN_00d50b20();
        }
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_02572358;
        (*g_02572370)();
        puVar16 = (void*)0x0;
        if (*arg1 != 0) {
          local_68._0_1_ = '\0';
          local_70 = 0;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          local_60 = *arg1;
          while( true ) {
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar8 = -local_58._4_4_;
              }
              else {
                iVar8 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar8);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar8 = 0;
              }
              local_58 = CONCAT44(iVar8,(int)local_58);
            }
            lVar11 = (int64_t)(int)local_58;
            iVar8 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            if (*(int *)(local_60 + 0xc) <= iVar8) break;
            local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar11 * 8);
            pvVar9 = _pthread_getspecific((void*)*(int64_t *)(local_60 + 0x10));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            lVar11 = CONCAT71(local_80._1_7_,(char)local_80);
            if (local_78 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_40 = '\0';
            local_48 = lVar11;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_001159b0();
          puVar16 = (void*)*arg1;
        }
        lVar11 = arg1[1];
        if (puVar16 == puVar10) {
          if (((char)lVar11 == '\0') && (puVar10 != (void*)0x0)) {
            FUN_00d50b00();
            goto LAB_01c98283;
          }
        }
        else {
          if (puVar10 != (void*)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)puVar10;
          if (((char)lVar11 != '\0') && (puVar16 != (void*)0x0)) {
            FUN_00d50b20();
          }
LAB_01c98283:
          *(void*)(arg1 + 1) = 1;
        }
        local_150 = *arg1;
        local_148 = '\0';
        FUN_01273200();
        lVar11 = local_70;
        if (lVar2 == local_70) {
LAB_01c982fd:
          if (((char)local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
            if (lVar2 == 0) {
              local_88 = lVar11;
            }
            else {
              local_88 = lVar11;
              FUN_00d50b20();
            }
            goto LAB_01c982fd;
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          local_68._0_1_ = '\0';
          local_88 = lVar11;
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
        if (puVar10 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d23310();
      lVar2 = local_70;
      local_80._0_1_ = (char)local_68;
      plVar14 = &local_80;
      plVar12 = &local_68;
      if ((char)local_68 == '\0') {
        plVar12 = plVar14;
      }
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)plVar14;
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      lVar11 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if (((char)local_80 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      local_140 = *arg1;
      local_138 = '\0';
      FUN_01266770();
      lVar2 = local_70;
      if ((char)local_68 == '\0') {
        if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68._0_1_ = '\0';
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      local_130 = *arg1;
      local_128 = '\0';
      FUN_01266770();
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_168 = (double)FUN_0125a280();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      local_120 = *arg1;
      local_118 = '\0';
      FUN_01266b80();
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = (double)FUN_01259520();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      local_98 = local_98 - local_168;
      dVar19 = local_98;
      if (*(char *)(this_ptr + 0x2a) != '\0') {
        pvVar9 = _pthread_getspecific(pVar15);
        pVar1 = (void*)lVar2;
        if ((pvVar9 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = pVar1;
        }
        dVar19 = (double)FUN_01264240();
        if (local_70 == 0) {
          bVar18 = false;
        }
        else {
          pvVar9 = _pthread_getspecific(pVar15);
          if ((pvVar9 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar1;
          }
          FUN_01264240();
          pvVar9 = _pthread_getspecific(pVar15);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_01326de0();
          bVar18 = iVar8 == 3;
          dVar19 = extraout_XMM0_Qa;
          if ((local_40 != '\0') && (local_48 != 0)) {
            dVar19 = (double)FUN_00d50b20();
          }
        }
        if (((char)local_68 != '\0') && (local_70 != 0)) {
          dVar19 = (double)FUN_00d50b20();
        }
        if (bVar18) {
          local_98 = g_023908c8;
          dVar19 = g_023908c8;
        }
      }
      local_1b0 = lVar6;
      local_1a8 = 0;
      local_1a0 = lVar11;
      local_198 = 0;
      FUN_01c9b940(dVar19,&local_1a0);
      FUN_00ca1380();
      lVar13 = local_70;
      local_80._0_1_ = (char)local_68;
      plVar14 = &local_68;
      if ((char)local_68 == '\0') {
        plVar14 = &local_80;
      }
      *(void*)plVar14 = 0;
      if (((char)local_68 != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      lVar4 = local_70;
      plVar14 = &local_48;
      if ((char)local_68 != '\0') {
        plVar14 = &local_68;
      }
      local_48 = CONCAT71(local_48._1_7_,(char)local_68);
      *(void*)plVar14 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 == '\0') && (lVar4 != 0)) {
        FUN_00d50b00();
      }
      if (((char)local_80 != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      lVar13 = local_70;
      plVar14 = &local_80;
      plVar12 = &local_68;
      if ((char)local_68 == '\0') {
        plVar12 = plVar14;
      }
      local_80._0_1_ = (char)local_68;
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)plVar14;
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      lVar7 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if (((char)local_80 != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_110 = lVar4;
      local_108 = '\0';
      FUN_012edae0();
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar13 = *(int64_t *)(lVar6 + 0x10);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      local_f8 = '\x01';
      local_100 = lVar13;
      FUN_012ee5e0(local_168,local_98);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      lVar13 = *local_180;
      if (lVar13 != 0) {
        local_190 = local_a8;
        local_188 = 0;
        lVar3 = *(int64_t *)(lVar6 + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_e8 = '\x01';
        local_f0 = lVar3;
        uVar20 = FUN_01c9d710(&local_f0,&local_190);
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            uVar20 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_70 = lVar3;
        local_68._0_1_ = '\0';
        FUN_00d214d0(uVar20,*(void*)(lVar13 + 0xc));
        if (((char)local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      if ((bVar5) && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar6 == 0) goto LAB_01c98b09;
    uVar17 = CONCAT71((int7)((uint64_t)local_a8 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_01c98b09:
    uVar17 = 0;
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
LAB_01c98b19:
  return uVar17 & 0xffffffff;
}

