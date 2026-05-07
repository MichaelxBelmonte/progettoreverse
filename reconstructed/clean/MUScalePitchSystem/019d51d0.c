// Function: FUN_019d51d0
// Address: 019d51d0
// Size: 5390 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_019d51d0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint64_t uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  void* pVar15;
  int64_t *plVar16;
  int64_t lVar17;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar18;
  double dVar19;
  double dVar20;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  uint32_t local_d0;
  int iStack_cc;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint *local_a8;
  uint64_t local_90;
  char local_88;
  uint local_58;
  int iStack_54;
  char local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  if (*param_2 == 0) goto LAB_019d574e;
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if (local_40 == 0) {
    bVar18 = true;
  }
  else {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    bVar18 = CONCAT44(iStack_54,local_58) == 0;
    if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (bVar18) goto LAB_019d574e;
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_90 = FUN_01507970();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar19 = (double)FUN_012643f0();
  if (0.0 < dVar19) {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar20 = (double)FUN_01264170();
    if (dVar19 < dVar20) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019d54f7;
        }
      }
      else if (local_40 != 0) {
LAB_019d54f7:
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01267000();
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar20 = (double)FUN_0125a280();
        FUN_00e7bcc0();
        param_1 = 0;
        local_90 = FUN_016cb9d0(dVar19 + dVar20,4);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  if (local_90._4_4_ == 0) {
LAB_019d574e:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01274b60();
  lVar2 = local_40;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_40 = FUN_012f92d0();
    FUN_00e7b820();
  }
  plVar1 = (int64_t *)(arg1 + 0x28);
  if (((*(int64_t *)(arg1 + 0x28) != 0) &&
      ((*(int *)(arg1 + 0x34) == 0 ||
       ((local_90._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) &&
     ((*(int *)(arg1 + 0x3c) == 0 ||
      ((local_90._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) {
    *(void*)(this_ptr + 1) = 0;
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  if (*plVar1 != 0) {
    *plVar1 = 0;
    FUN_00d50b20();
  }
  uVar9 = FUN_00e7bdb0();
  *(void*)(arg1 + 0x30) = uVar9;
  uVar9 = FUN_00e7bdb0();
  *(void*)(arg1 + 0x38) = uVar9;
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa28))();
  lVar2 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = (**(code **)(&UNK_00001588 + **(int64_t **)(arg1 + 0x40)))();
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
  lVar3 = local_40;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
LAB_019d5b86:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_019d6496;
  }
  puVar12 = (uint *)(arg1 + 0x30);
  local_a8 = (uint *)(arg1 + 0x38);
  if (uVar6 < 3) {
LAB_019d5856:
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    lVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) goto LAB_019d5b86;
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510e20();
    lVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(local_90,1,puVar12,local_a8);
    lVar17 = local_40;
    puVar11 = (uint *)local_38;
    puVar10 = &local_58;
    if (local_38[0] != '\0') {
      puVar10 = puVar11;
    }
    local_58 = CONCAT31(local_58._1_3_,local_38[0]);
    *(void*)puVar10 = 0;
    if ((local_38[0] != '\0') && (lVar17 != 0)) {
      FUN_00d50b20();
    }
    pVar15 = (void*)puVar11;
    lVar13 = *plVar1;
    if (lVar13 == lVar17) {
      if (((char)local_58 != '\0') && (lVar17 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_58 == '\0') {
        if (lVar17 != 0) {
          FUN_00d50b00();
          lVar13 = *plVar1;
        }
      }
      else {
        local_58 = local_58 & 0xffffff00;
      }
      *plVar1 = lVar17;
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
    }
    bVar18 = true;
    if ((uVar6 == 4) && (*plVar1 != 0)) {
      (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
      pvVar8 = _pthread_getspecific(pVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510280();
      lVar17 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (lVar17 == 0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        bVar18 = false;
      }
      else {
        pvVar8 = _pthread_getspecific(pVar15);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012521f0(local_90,1,&local_58,&local_d0);
        lVar17 = local_40;
        local_48[0] = local_38[0];
        puVar11 = (uint *)local_48;
        puVar10 = (uint *)local_38;
        if (local_38[0] == '\0') {
          puVar10 = puVar11;
        }
        *(char *)puVar10 = '\0';
        if ((local_38[0] != '\0') && (lVar17 != 0)) {
          FUN_00d50b20();
        }
        if (local_48[0] == '\0') {
          if (lVar17 != 0) {
            FUN_00d50b00();
            goto LAB_019d5e7f;
          }
        }
        else if (lVar17 != 0) {
LAB_019d5e7f:
          if ((*(int *)(arg1 + 0x34) == 0) ||
             ((iStack_54 != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
            *(uint64_t *)puVar12 = CONCAT44(iStack_54,local_58);
            puVar11 = puVar12;
          }
          if ((local_a8[1] == 0) || ((iStack_cc != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
            *(uint64_t *)local_a8 = CONCAT44(iStack_cc,local_d0);
            puVar11 = local_a8;
          }
          if (*(int *)(arg1 + 0x34) == 0) {
            lVar13 = 0;
LAB_019d5fbe:
            bVar4 = false;
          }
          else {
            pvVar8 = _pthread_getspecific((void*)puVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012521f0(*(void*)puVar12,0,0,0);
            lVar13 = local_40;
            puVar12 = (uint *)local_38;
            if (local_38[0] == '\0') {
              puVar12 = (uint *)local_48;
            }
            local_48[0] = local_38[0];
            *(void*)puVar12 = 0;
            if ((local_38[0] != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
            if (lVar13 == 0) goto LAB_019d5fbe;
            bVar4 = true;
            if (local_48[0] == '\0') {
              FUN_00d50b00();
            }
          }
          local_100 = lVar17;
          local_f8 = '\0';
          plVar16 = (int64_t *)*plVar1;
          if ((g_027c0160 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
            g_0270ab28 = FUN_0015ea50();
            g_0270ab10 = "MUScalePitchSystem";
            g_0270ab18 = 0x78;
            g_0270ab20 = FUN_0015ecf0;
            g_0270ab30 = 0;
            ram_000000000270ab38 = 0;
            g_0270ab40 = 0;
            ram_000000000270ab48 = 0;
            g_0270ab50 = 0;
            ram_000000000270ab58 = 0;
            g_0270ab60 = 0;
            ram_000000000270ab68 = 0;
            g_0270ab70 = 0;
            ram_000000000270ab78 = 0;
            g_0270ab80 = 0;
            ram_000000000270ab88 = 0;
            g_0270ab90 = 0;
            ram_000000000270ab98 = 0;
            g_0270aba0 = 0;
            ram_000000000270aba8 = 0;
            g_0270abb0 = 0;
            ram_000000000270abb8 = 0;
            g_0270abc0 = 0;
            ram_000000000270abc8 = 0;
            g_0270abd0 = 0;
            ___cxa_guard_release();
          }
          if (plVar16 == (int64_t *)0x0) {
LAB_019d6013:
            plVar16 = &g_02802688;
          }
          else {
            (**(code **)(*plVar16 + 0x360))();
            cVar5 = FUN_00e85ea0();
            plVar16 = plVar1;
            if (cVar5 == '\0') goto LAB_019d6013;
          }
          local_c0 = 0;
          lVar17 = *plVar16;
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          local_c0 = '\x01';
          local_e8 = '\0';
          local_f0 = lVar13;
          local_c8 = lVar17;
          FUN_019fc330(&local_c8,&local_100,&local_f0);
          lVar17 = *plVar1;
          lVar14 = lVar17;
          if (lVar17 != local_40) {
            if (local_38[0] == '\0') {
              if (local_40 == 0) {
                lVar14 = 0;
              }
              else {
                FUN_00d50b00();
                lVar17 = *plVar1;
                lVar14 = local_40;
              }
            }
            else {
              local_38[0] = '\0';
              lVar14 = local_40;
            }
            *plVar1 = lVar14;
            if (lVar17 != 0) {
              FUN_00d50b20();
              lVar14 = local_40;
            }
          }
          if ((local_38[0] != '\0') && (lVar14 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((bVar4) && (lVar13 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (!bVar18) goto LAB_019d6496;
  }
  else if (uVar6 == 3) {
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    lVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) goto LAB_019d5b86;
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    lVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_50 != '\0') && (CONCAT44(iStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = local_90;
      FUN_012521f0(local_90,1,0,0);
      lVar17 = local_40;
      param_1 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),local_38[0]);
      puVar11 = (uint *)local_38;
      if (local_38[0] == '\0') {
        puVar11 = &local_58;
      }
      local_58 = CONCAT31(local_58._1_3_,local_38[0]);
      *(void*)puVar11 = 0;
      if ((local_38[0] != '\0') && (lVar17 != 0)) {
        FUN_00d50b20();
      }
      lVar13 = *plVar1;
      if (lVar13 == lVar17) {
        if (((char)local_58 != '\0') && (lVar17 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_58 == '\0') {
          if (lVar17 != 0) {
            FUN_00d50b00();
            lVar13 = *plVar1;
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        *plVar1 = lVar17;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(local_90,1,puVar12,local_a8);
    lVar17 = local_40;
    puVar12 = (uint *)local_38;
    if (local_38[0] == '\0') {
      puVar12 = &local_58;
    }
    local_58 = CONCAT31(local_58._1_3_,local_38[0]);
    *(void*)puVar12 = 0;
    if ((local_38[0] != '\0') && (lVar17 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_58 == '\0') {
      if (lVar17 == 0) goto LAB_019d616c;
      FUN_00d50b00();
    }
    else if (lVar17 == 0) {
LAB_019d616c:
      plVar16 = (int64_t *)*plVar1;
      if ((g_027c0160 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_0270ab28 = FUN_0015ea50();
        g_0270ab10 = "MUScalePitchSystem";
        g_0270ab18 = 0x78;
        g_0270ab20 = FUN_0015ecf0;
        g_0270ab30 = 0;
        ram_000000000270ab38 = 0;
        g_0270ab40 = 0;
        ram_000000000270ab48 = 0;
        g_0270ab50 = 0;
        ram_000000000270ab58 = 0;
        g_0270ab60 = 0;
        ram_000000000270ab68 = 0;
        g_0270ab70 = 0;
        ram_000000000270ab78 = 0;
        g_0270ab80 = 0;
        ram_000000000270ab88 = 0;
        g_0270ab90 = 0;
        ram_000000000270ab98 = 0;
        g_0270aba0 = 0;
        ram_000000000270aba8 = 0;
        g_0270abb0 = 0;
        ram_000000000270abb8 = 0;
        g_0270abc0 = 0;
        ram_000000000270abc8 = 0;
        g_0270abd0 = 0;
        ___cxa_guard_release();
      }
      if (plVar16 == (int64_t *)0x0) {
LAB_019d61a9:
        plVar16 = &g_02802688;
      }
      else {
        (**(code **)(*plVar16 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar16 = plVar1;
        if (cVar5 == '\0') goto LAB_019d61a9;
      }
      if (*plVar16 != 0) {
        pvVar8 = _pthread_getspecific((void*)plVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0176a580();
        if ((((local_40 != 0) && (lVar17 = local_40, local_38[0] == '\0')) &&
            (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if (lVar17 == 0) {
      if (*plVar1 != 0) {
        *plVar1 = 0;
        FUN_00d50b20();
      }
    }
    else {
      local_d8 = '\0';
      plVar16 = (int64_t *)*plVar1;
      local_e0 = lVar17;
      if ((g_027c0160 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_0270ab28 = FUN_0015ea50();
        g_0270ab10 = "MUScalePitchSystem";
        g_0270ab18 = 0x78;
        g_0270ab20 = FUN_0015ecf0;
        g_0270ab30 = 0;
        ram_000000000270ab38 = 0;
        g_0270ab40 = 0;
        ram_000000000270ab48 = 0;
        g_0270ab50 = 0;
        ram_000000000270ab58 = 0;
        g_0270ab60 = 0;
        ram_000000000270ab68 = 0;
        g_0270ab70 = 0;
        ram_000000000270ab78 = 0;
        g_0270ab80 = 0;
        ram_000000000270ab88 = 0;
        g_0270ab90 = 0;
        ram_000000000270ab98 = 0;
        g_0270aba0 = 0;
        ram_000000000270aba8 = 0;
        g_0270abb0 = 0;
        ram_000000000270abb8 = 0;
        g_0270abc0 = 0;
        ram_000000000270abc8 = 0;
        g_0270abd0 = 0;
        ___cxa_guard_release();
      }
      if (plVar16 == (int64_t *)0x0) {
LAB_019d627b:
        plVar16 = &g_02802688;
      }
      else {
        (**(code **)(*plVar16 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar16 = plVar1;
        if (cVar5 == '\0') goto LAB_019d627b;
      }
      local_b0 = 0;
      lVar17 = *plVar16;
      if (lVar17 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar17;
      FUN_019fbe00(&local_b8,&local_e0);
      lVar17 = *plVar1;
      lVar13 = lVar17;
      if (lVar17 != local_40) {
        if (local_38[0] == '\0') {
          if (local_40 == 0) {
            lVar13 = 0;
          }
          else {
            FUN_00d50b00();
            lVar17 = *plVar1;
            lVar13 = local_40;
          }
        }
        else {
          local_38[0] = '\0';
          lVar13 = local_40;
        }
        *plVar1 = lVar13;
        if (lVar17 != 0) {
          FUN_00d50b20();
          lVar13 = local_40;
        }
      }
      if ((local_38[0] != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else if (uVar6 == 4) goto LAB_019d5856;
  *(void*)(this_ptr + 1) = 0;
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
LAB_019d6496:
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}

