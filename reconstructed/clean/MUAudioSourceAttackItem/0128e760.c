// Function: FUN_0128e760
// Address: 0128e760
// Size: 1870 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

double FUN_0128e760(void* param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  int iVar11;
  int64_t this_ptr;
  int64_t *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_60;
  char local_58;
  int64_t **local_50;
  uint64_t local_48;
  int local_40;
  
  if (*(int64_t ***)(this_ptr + 0xe0) == (int64_t **)0x0) {
    local_68 = 0;
    plVar9 = (int64_t *)0x0;
  }
  else {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_68 = 0;
    local_50 = *(int64_t ***)(this_ptr + 0xe0);
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar11 = -local_48._4_4_;
        }
        else {
          iVar11 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar11);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar11 = 0;
        }
        local_48 = CONCAT44(iVar11,(int)local_48);
      }
      lVar4 = (int64_t)(int)local_48;
      iVar11 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar11);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar11) break;
      plVar9 = local_50[2];
      local_60 = (int64_t *)plVar9[lVar4 + 1];
      pvVar5 = _pthread_getspecific((void*)plVar9);
      pVar8 = (void*)plVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar9 = local_78;
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        plVar9 = local_78;
        uVar6 = 0;
        if ((g_02790f20 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
          g_0272f7c8 = FUN_007ef2d0();
          g_0272f7b0 = "MUAudioSourceAttackItem";
          g_0272f7b8 = 0xe8;
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
          uVar6 = ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          uVar6 = FUN_00e85ea0();
          pplVar10 = &local_78;
          if ((char)uVar6 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = *pplVar10;
        if (plVar9 == (int64_t *)0x0) {
          plVar9 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            uVar6 = FUN_00d50b00();
          }
          else {
            *(void*)(pplVar10 + 1) = 0;
          }
          local_68 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) goto LAB_0128ea56;
      }
    }
    plVar9 = (int64_t *)0x0;
    pplVar10 = local_50;
LAB_0128ea56:
    param_1 = (void*)pplVar10;
    FUN_0015edf0();
  }
  FUN_0125e7c0();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0128eab0;
    }
LAB_0128eb39:
    bVar2 = true;
    bVar1 = true;
    dVar15 = g_023908c8;
joined_r0x0128ec0f:
    if (plVar9 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_014bb4b0();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_0128ee8b;
  }
  else {
    if (local_60 == (int64_t *)0x0) goto LAB_0128eb39;
LAB_0128eab0:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    plVar3 = local_60;
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      bVar2 = false;
      bVar1 = false;
      dVar15 = g_023908c8;
      goto joined_r0x0128ec0f;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    plVar3 = local_60;
    if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) && (FUN_00d50b00(), local_58 != '\0')
        ) && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_014bd180();
    dVar15 = g_023908c8;
    if (0 < lVar4) {
      pvVar5 = _pthread_getspecific(param_1);
      plVar12 = plVar3;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      lVar7 = (**(code **)(*plVar12 + 0x380))();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013df730();
      dVar15 = (double)(lVar7 + lVar4) / dVar15;
      if (plVar9 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_014bacf0();
        if (dVar15 < dVar13) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_014bacf0();
        }
      }
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (NAN(dVar15)) {
      bVar2 = false;
      bVar1 = false;
      goto joined_r0x0128ec0f;
    }
  }
  if (!NAN(dVar15)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_013de8d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar14 = (double)FUN_013de9b0();
    if (g_023942d0 < (dVar15 - dVar13) / dVar14) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013de9b0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013de8d0();
      dVar15 = dVar13 * g_023942d0 + dVar15;
    }
  }
  FUN_00d50b20();
LAB_0128ee8b:
  if (((char)local_68 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return dVar15;
}

