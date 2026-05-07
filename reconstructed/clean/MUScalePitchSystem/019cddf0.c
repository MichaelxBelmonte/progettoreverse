// Function: FUN_019cddf0
// Address: 019cddf0
// Size: 2428 bytes
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


uint64_t FUN_019cddf0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  void*puVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t *this_ptr;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t **pplVar13;
  uint64_t uVar14;
  bool bVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  (**(code **)(*this_ptr + 0xe20))();
  plVar12 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar12 + 0xc) == 0) {
    uVar14 = 0;
    goto LAB_019ce70c;
  }
  pplVar13 = &local_78;
  uVar16 = (**(code **)(*this_ptr + 0xa28))();
  plVar11 = local_78;
  if ((g_027c0160 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_01, iVar10 != 0)) {
    local_50 = plVar12;
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
    uVar16 = ___cxa_guard_release();
    plVar12 = local_50;
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_019cde95:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_019cde95;
  }
  plVar11 = *pplVar13;
  if (*(char *)(pplVar13 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar13 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  uVar14 = 0;
  if (plVar11 != (int64_t *)0x0) {
    local_38 = (int64_t *)CONCAT44(local_38._4_4_,param_2);
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = plVar12;
    local_50 = plVar12;
    do {
      iVar10 = (int)uVar14;
      if (iVar10 != 0) {
        if (iVar10 < 1) {
          uVar14 = (uint64_t)(uint)-iVar10;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar10);
          FUN_00d23690(uVar16,uVar14);
          local_58 = local_58 + local_60._4_4_;
          uVar14 = 0;
        }
        local_60 = CONCAT44((int)uVar14,(int)local_60);
      }
      lVar4 = (int64_t)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar10) {
        FUN_001159b0();
        plVar12 = local_50;
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        if ((char)local_38 == '\0') goto LAB_019ce6ff;
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar9 = (int64_t *)&g_02572358;
        *puVar6 = &g_02572358;
        uVar16 = (*g_02572370)();
        uVar16 = (**(code **)(*this_ptr + 0x9b0))(uVar16,1);
        plVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 == (int64_t *)0x0) goto LAB_019ce69b;
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_78 == (int64_t *)0x0) goto LAB_019ce69b;
        local_70 = '\0';
        local_78 = (int64_t *)0x0;
        local_68 = plVar1;
        local_58 = 0;
        local_60 = 0;
        local_38 = plVar11;
        if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
          lVar4 = 0;
          do {
            plVar12 = *(int64_t **)(plVar1[2] + lVar4 * 8);
            local_78 = plVar12;
            pvVar5 = _pthread_getspecific((void*)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            plVar11 = local_48;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 == (int64_t *)0x0) {
              pvVar5 = _pthread_getspecific((void*)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar16 = FUN_0125a2c0();
              pvVar5 = _pthread_getspecific((void*)plVar9);
              plVar11 = local_38;
              if ((pvVar5 != (void *)0x0) &&
                 (lVar7 = FUN_00e8b990(), plVar11 = local_38, lVar7 != 0)) {
                plVar9 = local_38;
                plVar11 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar11 + 0x3a8))(uVar16);
            }
            else {
              pvVar5 = _pthread_getspecific((void*)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar5 = _pthread_getspecific((void*)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152ebe0();
              pvVar5 = _pthread_getspecific((void*)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507f00();
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            pvVar5 = _pthread_getspecific((void*)plVar9);
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar9 = local_38;
            }
            cVar2 = FUN_017516f0();
            if (cVar2 != '\0') {
              local_40 = '\0';
              local_48 = plVar12;
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar4 = lVar4 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)lVar4);
          } while ((int)lVar4 < *(int *)((int64_t)plVar1 + 0xc));
        }
        FUN_001159b0();
        uVar16 = FUN_00d50b20();
        plVar12 = local_50;
LAB_019ce69b:
        if (*(int *)((int64_t)puVar6 + 0xc) != 0) {
          (**(code **)(*this_ptr + 0xdb8))(uVar16,1);
        }
        FUN_00d50b20();
        goto LAB_019ce6ff;
      }
      lVar7 = local_68[2];
      local_78 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar7);
      pVar8 = (void*)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_48 == (int64_t *)0x0) {
        bVar15 = true;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar10 = FUN_0132dd30();
        bVar15 = iVar10 == 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar15) goto LAB_019ce306;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar12 = local_48;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 == (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(pVar8);
        plVar12 = plVar11;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar12 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2c0();
        uVar16 = (**(code **)(*plVar12 + 0x3a8))();
        if ((int)local_60 != 0 || local_58 != 0) goto LAB_019ce276;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_01507f00();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((int)local_60 != 0 || local_58 != 0) {
LAB_019ce276:
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar10 = FUN_01751520();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar3 = FUN_01751520();
          uVar16 = extraout_XMM0_Da_00;
          if (iVar10 != iVar3) goto LAB_019ce306;
        }
      }
      uVar14 = local_60 >> 0x20;
    } while( true );
  }
LAB_019ce70c:
  FUN_00d50b20();
  return uVar14;
LAB_019ce306:
  FUN_001159b0();
  uVar14 = 0;
  plVar12 = local_50;
LAB_019ce6ff:
  FUN_00d50b20();
  if (plVar12 == (int64_t *)0x0) {
    return uVar14;
  }
  goto LAB_019ce70c;
}

