// Function: FUN_018ec910
// Address: 018ec910
// Size: 6499 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_018ec910(void* param_1,int param_2,int param_3,int64_t *param_4)

{
  code *pcVar1;
  int64_t *plVar2;
  char cVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void*puVar8;
  void *pvVar9;
  int64_t lVar10;
  uint64_t uVar11;
  void* pVar12;
  void* pVar13;
  int64_t **pplVar14;
  int64_t lVar15;
  undefined7 uVar18;
  uint64_t uVar16;
  int64_t *plVar17;
  int iVar19;
  int iVar20;
  int64_t *arg1;
  void*this_ptr;
  bool bVar21;
  uint32_t uVar22;
  uint32_t extraout_XMM0_Da;
  int64_t *local_res8;
  int64_t *local_178;
  char local_170;
  int64_t local_100;
  char local_f8;
  code *local_f0;
  int64_t *local_e8;
  int64_t *local_e0;
  char local_d8;
  void* local_cc;
  int local_c8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_90;
  void*local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  uint64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  if (g_028b06a0 == '\x01') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_cc = param_1;
  local_c8 = param_2;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_02572358;
  pcVar1 = g_02572370;
  (*g_02572370)();
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_02572358;
  (*pcVar1)();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_02572358;
  (*pcVar1)();
  local_e8 = plVar7;
  local_40 = plVar5;
  if (arg1[5] == 0) {
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    puVar8 = (void*)FUN_00e8fc40();
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    (*pcVar1)();
    lVar10 = arg1[5];
    arg1[5] = (int64_t)puVar8;
    if (lVar10 != 0) {
      local_38 = (int64_t *)0x0;
      local_48 = 0;
      FUN_00d50b20();
    }
    lVar10 = arg1[2];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c4750();
    local_38 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      local_68[0] = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = local_38;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar19 = -local_58._4_4_;
          }
          else {
            iVar19 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar19);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar19 = 0;
          }
          local_58 = CONCAT44(iVar19,(int)local_58);
        }
        lVar10 = (int64_t)(int)local_58;
        iVar19 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar19);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar19) break;
        lVar15 = local_60[2];
        local_70 = *(int64_t **)(lVar15 + 8 + lVar10 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar15);
        pVar12 = (void*)lVar15;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01893a20();
        pvVar9 = _pthread_getspecific(pVar12);
        plVar5 = local_b0;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar5 = (int64_t *)local_b0[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        lVar10 = g_027d8ea0;
        if (g_027d8ea0 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar5 + 0x1f8))();
        plVar5 = local_80;
        if ((g_026fd0c0 == '\0') && (iVar19 = ___cxa_guard_acquire(), iVar19 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
        }
        pplVar14 = (int64_t **)&g_02802688;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar14 = &local_80;
          if (cVar3 == '\0') {
            pplVar14 = (int64_t **)&g_02802688;
          }
        }
        plVar5 = *pplVar14;
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar14 + 1) = 0;
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d99300();
          lVar10 = g_027dfeb8;
          if (g_027dfeb8 != 0) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d90eb0();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_80 = local_70;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      plVar5 = local_60;
      FUN_018c80e0();
      param_1 = (void*)plVar5;
      FUN_00d50b20();
    }
  }
  plVar5 = g_027dfec0;
  if (param_3 == 3) {
    if (g_027dfec0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_70 = plVar5;
    local_68[0] = '\0';
    FUN_00d21140();
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_90 = (int64_t *)*param_4;
  if (local_90 == (int64_t *)0x0) {
    lVar10 = arg1[2];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c4750();
    local_90 = local_70;
    if (local_70 == (int64_t *)0x0) {
      local_48 = 0;
    }
    else if (local_68[0] == '\0') {
      uVar11 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
      local_48 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  else if ((char)param_4[1] == '\0') {
    local_48 = 0;
  }
  else {
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    uVar11 = FUN_00d50b00();
    local_48 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
  }
  if (local_cc != 0) {
    local_f0 = g_025683d8;
    puVar8 = (void*)0x0;
    local_38 = (int64_t *)0x0;
    pVar12 = local_cc;
    do {
      if (local_90 != (int64_t *)0x0) {
        local_68[0] = '\0';
        local_70 = (int64_t *)0x0;
        local_60 = local_90;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar19 = -local_58._4_4_;
            }
            else {
              iVar19 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar19);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar19 = 0;
            }
            local_58 = CONCAT44(iVar19,(int)local_58);
          }
          lVar10 = (int64_t)(int)local_58;
          iVar19 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar19);
          if (*(int *)((int64_t)local_60 + 0xc) <= iVar19) break;
          lVar15 = local_60[2];
          local_70 = *(int64_t **)(lVar15 + 8 + lVar10 * 8);
          pvVar9 = _pthread_getspecific((void*)lVar15);
          pVar13 = (void*)lVar15;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar19 = FUN_018939c0();
          if (iVar19 == local_c8) {
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar4 = FUN_01893a00();
            if (pVar4 == pVar12) {
              pvVar9 = _pthread_getspecific(pVar13);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01893a50();
              bVar21 = true;
              if (local_80 == (int64_t *)0x0) {
                pvVar9 = _pthread_getspecific(pVar13);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_018939d0();
                bVar21 = local_b0 != (int64_t *)0x0;
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (bVar21) {
                local_80 = local_70;
                local_78 = '\0';
                FUN_00d21140();
                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        FUN_018c80e0();
      }
      if (*(int *)((int64_t)plVar6 + 0xc) != 0) break;
      if (puVar8 == (void*)0x0) {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_025683c0;
        (*local_f0)();
        FUN_00c92170();
        uVar11 = FUN_00c92160();
        local_38 = (int64_t *)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
        switch(pVar12) {
        case 1:
          iVar19 = *(int *)(puVar8 + 3);
          uVar22 = FUN_00c8e340(&switchD_018ed304::switchdataD_018eec48,1);
          *(void*)(puVar8[2] + (int64_t)iVar19) = 2;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340(uVar22,1);
          *(void*)(puVar8[2] + (int64_t)iVar19) = 4;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          break;
        case 2:
          iVar19 = *(int *)(puVar8 + 3);
          uVar22 = FUN_00c8e340(&switchD_018ed304::switchdataD_018eec48,1);
          *(void*)(puVar8[2] + (int64_t)iVar19) = 1;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340(uVar22,1);
          *(void*)(puVar8[2] + (int64_t)iVar19) = 4;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          break;
        default:
          goto switchD_018ed304_caseD_3;
        case 4:
          iVar19 = *(int *)(puVar8 + 3);
          uVar22 = FUN_00c8e340(&switchD_018ed304::switchdataD_018eec48,1);
          *(void*)(puVar8[2] + (int64_t)iVar19) = 1;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340(uVar22,1);
          *(void*)(puVar8[2] + (int64_t)iVar19) = 2;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          break;
        case 5:
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
        }
        *(void*)(puVar8[2] + (int64_t)iVar19) = 3;
      }
switchD_018ed304_caseD_3:
      if (*(int *)(puVar8 + 3) + 3U < 7) break;
      pVar12 = *(void* *)puVar8[2];
      FUN_00e7b4e0();
      FUN_00c921e0();
    } while (pVar12 != 0);
    if (((char)local_38 != '\0') && (puVar8 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((*(int *)((int64_t)plVar6 + 0xc) == 0) && (local_90 != (int64_t *)0x0)) {
    local_68[0] = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = local_90;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar19 = -local_58._4_4_;
        }
        else {
          iVar19 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar19);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar19 = 0;
        }
        local_58 = CONCAT44(iVar19,(int)local_58);
      }
      lVar10 = (int64_t)(int)local_58;
      iVar19 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar19);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar19) break;
      lVar15 = local_60[2];
      local_70 = *(int64_t **)(lVar15 + 8 + lVar10 * 8);
      pvVar9 = _pthread_getspecific((void*)lVar15);
      pVar12 = (void*)lVar15;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar19 = FUN_018939c0();
      if (iVar19 == local_c8) {
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01893a50();
        bVar21 = true;
        if (local_80 == (int64_t *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018939d0();
          bVar21 = local_b0 != (int64_t *)0x0;
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar21) {
          local_80 = local_70;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_018c80e0();
  }
  pcVar1 = g_025683d8;
  if (param_3 == 0) {
    local_38 = (int64_t *)0x0;
    plVar5 = (int64_t *)0x0;
    iVar19 = *(int *)((int64_t)local_40 + 0xc);
    plVar7 = local_40;
  }
  else {
    plVar5 = (int64_t *)0x0;
    local_38 = (int64_t *)0x0;
    local_f0 = 0x0;
    local_88 = (void*)0x0;
    iVar19 = param_3;
    do {
      if (plVar6 != (int64_t *)0x0) {
        local_68[0] = '\0';
        local_70 = (int64_t *)0x0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_60 = plVar6;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar20 = -local_58._4_4_;
            }
            else {
              iVar20 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar20);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar20 = 0;
            }
            local_58 = CONCAT44(iVar20,(int)local_58);
          }
          lVar10 = (int64_t)(int)local_58;
          iVar20 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar20);
          if (*(int *)((int64_t)local_60 + 0xc) <= iVar20) break;
          plVar7 = *(int64_t **)(local_60[2] + 8 + lVar10 * 8);
          local_70 = plVar7;
          pvVar9 = _pthread_getspecific((void*)local_60[2]);
          plVar17 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar7 = plVar17, lVar10 != 0)) {
            plVar7 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          iVar20 = FUN_01893a10();
          plVar17 = local_70;
          if (iVar20 == iVar19) {
            uVar18 = (undefined7)((uint64_t)plVar7 >> 8);
            if (local_70 == plVar5) {
              plVar17 = plVar5;
              if (((char)local_38 == '\0') && (local_70 != (int64_t *)0x0)) {
                if (local_68[0] != '\0') goto LAB_018ed7de;
                uVar16 = CONCAT71(uVar18,1);
                FUN_00d50b00();
              }
              else {
                uVar16 = (uint64_t)local_38 & 0xffffffff;
              }
            }
            else if (local_68[0] == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              uVar16 = CONCAT71(uVar18,1);
              if (((char)local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (((char)local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_018ed7de:
              local_68[0] = '\0';
              uVar16 = CONCAT71(uVar18,1);
            }
            plVar5 = plVar17;
            local_80 = local_70;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_38 = (int64_t *)(uVar16 & 0xffffffff);
          }
        }
        FUN_018c80e0();
      }
      if (*(int *)((int64_t)local_40 + 0xc) != 0) break;
      if (local_88 == (void*)0x0) {
        local_88 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_88 = &g_025683c0;
        (*pcVar1)();
        FUN_00c92170();
        uVar11 = FUN_00c92160();
        local_f0 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
        if (iVar19 == 3) {
          iVar19 = *(int *)(local_88 + 3);
          FUN_00c8e340(extraout_XMM0_Da,1);
          *(void*)(local_88[2] + (int64_t)iVar19) = 2;
          iVar19 = *(int *)(local_88 + 3);
          uVar22 = 1;
          FUN_00c8e340();
        }
        else if (iVar19 == 2) {
          iVar19 = *(int *)(local_88 + 3);
          FUN_00c8e340(extraout_XMM0_Da,1);
          *(void*)(local_88[2] + (int64_t)iVar19) = 3;
          iVar19 = *(int *)(local_88 + 3);
          uVar22 = 1;
          FUN_00c8e340();
        }
        else {
          if (iVar19 != 1) goto LAB_018ed9b8;
          iVar19 = *(int *)(local_88 + 3);
          FUN_00c8e340(extraout_XMM0_Da,1);
          *(void*)(local_88[2] + (int64_t)iVar19) = 2;
          iVar19 = *(int *)(local_88 + 3);
          uVar22 = 3;
          FUN_00c8e340();
        }
        *(void*)(local_88[2] + (int64_t)iVar19) = uVar22;
      }
LAB_018ed9b8:
      if (*(int *)(local_88 + 3) + 3U < 7) break;
      iVar19 = *(int *)local_88[2];
      FUN_00e7b4e0();
      FUN_00c921e0();
    } while (iVar19 != 0);
    plVar7 = local_40;
    if (((char)local_f0 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    iVar19 = *(int *)((int64_t)plVar7 + 0xc);
  }
  plVar17 = plVar5;
  if ((1 < iVar19) && (*local_res8 != 0)) {
    FUN_00d242c0();
    plVar7 = local_40;
    FUN_00d23340();
    plVar17 = local_70;
    pplVar14 = &local_80;
    if (local_68[0] != '\0') {
      pplVar14 = (int64_t **)local_68;
    }
    local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_68[0]);
    *(char *)pplVar14 = '\0';
    if ((local_68[0] != '\0') && (plVar17 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar18 = (undefined7)((uint64_t)this_ptr >> 8);
    if (plVar17 == plVar5) {
      if (((char)local_38 == '\0') && (plVar17 != (int64_t *)0x0)) {
        uVar16 = CONCAT71(uVar18,1);
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
        }
      }
      else if (((char)local_80 == '\0') || (plVar17 == (int64_t *)0x0)) {
        uVar16 = (uint64_t)local_38 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        uVar16 = (uint64_t)local_38 & 0xffffffff;
      }
    }
    else if ((char)local_80 == '\0') {
      if (plVar17 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar16 = CONCAT71(uVar18,1);
      if (((char)local_38 == '\0') || (plVar5 == (int64_t *)0x0)) goto LAB_018edb14;
      FUN_00d50b20();
      plVar5 = plVar17;
    }
    else {
      uVar16 = CONCAT71(uVar18,1);
      if (((char)local_38 == '\0') || (plVar5 == (int64_t *)0x0)) {
LAB_018edb14:
        uVar16 = CONCAT71(uVar18,1);
        plVar5 = plVar17;
      }
      else {
        FUN_00d50b20();
        plVar5 = plVar17;
      }
    }
    local_88 = (void*)uVar16;
    if (*(int *)((int64_t)local_e8 + 0xc) != 0) {
      local_88 = (void*)(uVar16 & 0xffffffff);
      local_68[0] = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = local_e8;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar10 = (int64_t)(int)local_58;
        iVar19 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar19);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar19) break;
        lVar15 = local_60[2];
        local_70 = *(int64_t **)(lVar15 + 8 + lVar10 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar15);
        pVar12 = (void*)lVar15;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01893a20();
        if (local_80 == (int64_t *)0x0) {
          bVar21 = true;
        }
        else {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01893a20();
          plVar17 = local_e0;
          pvVar9 = _pthread_getspecific(pVar12);
          plVar2 = local_e0;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar17 = plVar2, lVar10 != 0)) {
            plVar17 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar17 + 0x88))();
          plVar17 = (int64_t *)*local_res8;
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            plVar17 = (int64_t *)*local_res8;
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar17 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar17 + 0x88))();
          bVar21 = local_b0 != local_178;
          if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar21) {
          FUN_00018280();
          if (plVar7 == (int64_t *)0x0) goto LAB_018edfbe;
          local_68[0] = '\0';
          local_70 = (int64_t *)0x0;
          local_60 = plVar7;
          local_58 = 0xffffffff;
          local_50 = 0;
          goto LAB_018ede62;
        }
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar19 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar19 = 0;
          }
          local_58 = CONCAT44(iVar19,(int)local_58);
        }
      }
      FUN_00018280();
    }
LAB_018edfbe:
    local_38 = (int64_t *)((uint64_t)local_88 & 0xffffffff);
    plVar17 = plVar5;
  }
  if (plVar17 == (int64_t *)0x0) goto LAB_018ee0cc;
LAB_018edfd9:
  bVar21 = false;
  *(void*)(this_ptr + 1) = 0;
  cVar3 = (char)local_38;
  goto joined_r0x018ee2ec;
LAB_018ede62:
  lVar10 = (int64_t)(int)local_58;
  iVar19 = (int)local_58 + 1;
  local_58 = CONCAT44(local_58._4_4_,iVar19);
  if (iVar19 < *(int *)((int64_t)local_60 + 0xc)) {
    lVar15 = local_60[2];
    local_70 = *(int64_t **)(lVar15 + 8 + lVar10 * 8);
    pvVar9 = _pthread_getspecific((void*)lVar15);
    pVar12 = (void*)lVar15;
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar11 = FUN_01893a20();
    if (local_80 == (int64_t *)0x0) {
      bVar21 = true;
    }
    else {
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01893a20();
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_018bf900();
      bVar21 = *(int *)((int64_t)local_b0 + 0xc) == 0;
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    plVar17 = local_70;
    if (bVar21) {
      local_88._0_1_ = (char)uVar16;
      if (local_70 == plVar5) {
        if (((char)local_88 != '\0') || (local_70 == (int64_t *)0x0)) {
          local_38 = (int64_t *)(uVar16 & 0xffffffff);
          plVar17 = plVar5;
          goto LAB_018ee0ba;
        }
        plVar17 = plVar5;
        if (local_68[0] == '\0') {
          local_38 = (int64_t *)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          FUN_00d50b00();
          goto LAB_018ee0ba;
        }
      }
      else {
        if (local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            uVar11 = FUN_00d50b00();
          }
          local_38 = (int64_t *)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          if (((char)local_88 != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_018ee0ba;
        }
        if (((char)local_88 != '\0') && (plVar5 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      local_68[0] = '\0';
      local_38 = (int64_t *)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
      goto LAB_018ee0ba;
    }
    if (local_58._4_4_ != 0) {
      if (local_58._4_4_ < 1) {
        iVar19 = -local_58._4_4_;
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
        FUN_00d23690();
        local_50 = local_50 + local_58._4_4_;
        iVar19 = 0;
      }
      local_58 = CONCAT44(iVar19,(int)local_58);
    }
    goto LAB_018ede62;
  }
  local_38 = (int64_t *)(uVar16 & 0xffffffff);
  plVar17 = plVar5;
LAB_018ee0ba:
  FUN_018c80e0();
  if (plVar17 != (int64_t *)0x0) goto LAB_018edfd9;
LAB_018ee0cc:
  FUN_00d23310();
  plVar17 = local_70;
  pplVar14 = &local_80;
  if (local_68[0] != '\0') {
    pplVar14 = (int64_t **)local_68;
  }
  local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_68[0]);
  *(char *)pplVar14 = '\0';
  if ((local_68[0] != '\0') && (plVar17 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar17 == (int64_t *)0x0) {
    plVar17 = (int64_t *)0x0;
    cVar3 = (char)local_38;
  }
  else {
    cVar3 = '\x01';
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
    }
  }
  if (plVar17 == (int64_t *)0x0) {
    bVar21 = true;
    if (*param_4 != 0) {
      lVar10 = arg1[5];
      if (*(int *)(lVar10 + 0xc) != 0) {
        local_f8 = 0;
        FUN_00d50b00();
        local_f8 = '\x01';
        local_100 = lVar10;
        (**(code **)(*arg1 + 0x3c0))(local_cc,local_c8,param_3,&local_100);
        plVar7 = local_40;
        bVar21 = true;
        if ((local_f8 != '\0') && (bVar21 = true, local_100 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_018ee16e;
      }
      plVar17 = (int64_t *)0x0;
      *(void*)(this_ptr + 1) = 0;
      plVar7 = local_40;
      goto joined_r0x018ee2ec;
    }
    plVar17 = (int64_t *)0x0;
  }
  else {
    bVar21 = false;
  }
  *(void*)(this_ptr + 1) = 0;
joined_r0x018ee2ec:
  if ((cVar3 == '\0') && (!bVar21)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar17;
  *(void*)(this_ptr + 1) = 1;
  cVar3 = '\0';
LAB_018ee16e:
  if (local_e8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0' && !bVar21) {
    FUN_00d50b20();
  }
  uVar11 = local_48;
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar11 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

