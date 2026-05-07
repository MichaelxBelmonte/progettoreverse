// Function: FUN_01786b30
// Address: 01786b30
// Size: 1947 bytes
// Class: MUBarSignature

void FUN_01786b30(void* param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_00e8b7a0();
  FUN_00c8e2b0(g_02412520,0x30);
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *(int64_t *)(this_ptr + 0x40);
  if (lVar5 == local_68) {
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x40) = local_68;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x54) = 3;
  *(void*)(this_ptr + 0x4c) = 0x101;
  uVar2 = FUN_00e7bcc0();
  *(void*)(this_ptr + 0x58) = uVar2;
  *(void*)(this_ptr + 0x4e) = 1;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x60);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x60) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x60);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,g_0238fee8);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x60);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_0238fee8,0);
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x4f) = 1;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x68) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_024111c0,g_0238fee8);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b7c08,g_0238fee8);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b4df8,g_023942d0);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_024124f0,g_023942d0);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_024124f8,0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x50) = 0;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x70);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x70) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x70);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x70);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_0238fee8,g_0238fee8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x51) = 1;
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x78) = plVar3;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_02412500,g_02412508);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b2c70,g_0238fee8);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)g_023b3bc0,g_0238fee8);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}

