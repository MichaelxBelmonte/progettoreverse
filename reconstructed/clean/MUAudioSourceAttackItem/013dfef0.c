// Function: FUN_013dfef0
// Address: 013dfef0
// Size: 2820 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

void FUN_013dfef0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  void* pVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t **pplVar14;
  double dVar15;
  double local_a8;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  double local_50;
  int64_t *local_48;
  char local_40;
  
  FUN_013de560();
  plVar3 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar13 = plVar3;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  cVar4 = (**(code **)(*plVar13 + 0x3c0))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    cVar4 = (**(code **)(*plVar13 + 0x3c8))();
    if (cVar4 != '\0') {
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      lVar8 = (**(code **)(*plVar13 + 0x3b0))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      lVar10 = (**(code **)(*plVar13 + 0x388))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      lVar11 = (**(code **)(*plVar13 + 0x390))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      lVar9 = (**(code **)(*plVar13 + 0x3b0))();
      local_50 = (double)lVar8 / (double)lVar10;
      if ((lVar11 < lVar9) || (g_023942d0 < local_50)) {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_0133aef0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_50 <= g_023942d0) && (*(int64_t *)(this_ptr + 0x50) == 0)) {
        pvVar7 = _pthread_getspecific(param_1);
        plVar13 = plVar3;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x380))();
        pvVar7 = _pthread_getspecific(param_1);
        plVar13 = plVar3;
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        lVar10 = (**(code **)(*plVar13 + 0x3b0))();
        local_50 = (double)(lVar10 + lVar8);
        if (unaff_SIL == '\0') {
          if (*(int64_t *)(this_ptr + 0x60) == 0) {
            dVar15 = 0.0;
          }
          else {
            pvVar7 = _pthread_getspecific(param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_01327990();
          }
          pVar5 = FUN_00e7d850(dVar15 * g_023944e0);
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = 0;
          FUN_00d50b00();
          local_68 = '\x01';
          param_1 = 0;
          local_70 = this_ptr;
          FUN_0135d2e0(0,&local_70);
          plVar13 = local_48;
          if (local_48 == (int64_t *)0x0) {
            bVar1 = true;
            bVar2 = false;
            plVar13 = (int64_t *)0x0;
          }
          else {
            if (local_40 == '\0') {
              FUN_00d50b00();
              bVar1 = false;
              bVar2 = true;
              if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_013e0820;
              FUN_00d50b20();
            }
            else {
              local_40 = '\0';
            }
            bVar2 = true;
            bVar1 = false;
          }
LAB_013e0820:
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            pvVar7 = _pthread_getspecific(param_1);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            lVar8 = (**(code **)(*plVar13 + 0x3a0))();
            lVar10 = (int64_t)(int)pVar5;
            if (lVar8 <= (int64_t)local_50 + lVar10) goto LAB_013e08a4;
            param_1 = pVar5;
            if (!bVar1) {
              FUN_00d50b20();
              param_1 = (void*)lVar10;
            }
          }
        }
        else {
          if (*(int64_t *)(this_ptr + 0x60) == 0) {
            local_a8 = 0.0;
          }
          else {
            pvVar7 = _pthread_getspecific(param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (double)FUN_01327990();
          }
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_50 = (double)(int64_t)local_50 / local_a8 + g_023b67d8;
          FUN_013671d0(g_0240d788 + local_50,g_0240d790 + local_50);
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pVar5 = 0;
          FUN_01364d50(local_50,0);
          param_1 = pVar5;
          if (local_48 != (int64_t *)0x0) {
            if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar2 = true;
LAB_013e08a4:
            pvVar7 = _pthread_getspecific(pVar5);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = 0;
            FUN_00d50b00();
            local_58 = '\x01';
            local_60 = this_ptr;
            FUN_0135d2a0();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            param_1 = pVar5;
            if (bVar2) {
              FUN_00d50b20();
              param_1 = pVar5;
            }
          }
        }
      }
    }
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_0133aef0();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar13 = plVar3;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  cVar4 = (**(code **)(*plVar13 + 0x3c0))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    lVar8 = (**(code **)(*plVar13 + 0x3b0))();
    if (lVar8 < 1) goto LAB_013e0269;
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    lVar8 = (**(code **)(*plVar13 + 0x3b0))();
  }
  else {
LAB_013e0269:
    lVar8 = 0;
  }
  if (*(int64_t *)(this_ptr + 0x50) == 0) goto LAB_013e03fb;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar14 = &local_48;
  FUN_013dd6a0();
  plVar13 = local_48;
  if ((g_02790f20 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (int64_t *)0x0) {
LAB_013e030e:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_013e030e;
  }
  plVar13 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    plVar12 = plVar13;
    if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar12 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    lVar10 = (**(code **)(*plVar12 + 0x3a0))();
    lVar11 = FUN_013de650();
    if (lVar8 < lVar10 - lVar11) {
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar13 + 0x3a0))();
      FUN_013de650();
    }
    FUN_00d50b20();
  }
LAB_013e03fb:
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bcf30();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01334f30();
  if (cVar4 != '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bd190();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

