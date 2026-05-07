// Function: FUN_01290750
// Address: 01290750
// Size: 1585 bytes
// Class: MUAudioSourceAttackItem

void* FUN_01290750(double param_1)

{
  bool bVar1;
  void *pvVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  void* in_ECX;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar9;
  double dVar10;
  double dVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_68;
  char local_60;
  int local_50;
  
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  plVar5 = (int64_t *)*arg1;
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    plVar5 = (int64_t *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  pVar7 = 0;
  dVar10 = (double)(**(code **)(*plVar5 + 0x380))(param_1);
  plVar5 = (int64_t *)FUN_011114e0();
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ef430(g_02391038,g_02391038);
  if (local_68 == 0) {
    bVar1 = false;
    plVar6 = (int64_t *)0x0;
  }
  else {
    local_50 = -1;
    bVar1 = false;
    plVar6 = (int64_t *)0x0;
    while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
      plVar8 = *(int64_t **)(local_68 + 0x10);
      pvVar2 = _pthread_getspecific((void*)plVar8);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faed0();
      pVar7 = (void*)plVar8;
      if (param_1 <= dVar11) {
        if (plVar6 == (int64_t *)0x0) {
          pvVar2 = _pthread_getspecific(pVar7);
          plVar6 = plVar5;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = plVar5;
            plVar6 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          pVar7 = (void*)plVar8;
          (**(code **)(*plVar6 + 0x418))(param_1,dVar10);
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          plVar6 = (int64_t *)FUN_011114e0();
          (**(code **)(*plVar6 + 0x18))();
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013ef430(g_02391038,g_02391038);
          pvVar2 = _pthread_getspecific(pVar7);
          plVar8 = plVar6;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x418))(0,0);
          bVar1 = true;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar2 = _pthread_getspecific(pVar7);
        plVar8 = plVar6;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        (**(code **)(*plVar8 + 0x418))(dVar11 - param_1,dVar14 - dVar10);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar7);
        plVar9 = plVar5;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = plVar5;
          plVar9 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pVar7 = (void*)plVar8;
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013faf20();
        (**(code **)(*plVar9 + 0x418))(uVar12,uVar13);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
  }
  FUN_00d21140();
  FUN_00d21140();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

