// Function: FUN_0128f850
// Address: 0128f850
// Size: 1936 bytes
// Class: MUAudioSourceAttackItem

int64_t * FUN_0128f850(int64_t *param_1,int64_t *param_2)

{
  uint uVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t local_b8;
  char local_b0;
  uint32_t local_98;
  uint32_t uStack_94;
  char local_90;
  int64_t *local_60;
  char local_58;
  void* local_48;
  
  plVar2 = local_60;
  plVar6 = (int64_t *)*param_2;
  if (plVar6 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = *arg1;
    if ((char)arg1[1] != '\0') {
      *this_ptr = lVar4;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
      return this_ptr;
    }
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)*arg1;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_90 != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb4a0();
  pvVar3 = _pthread_getspecific((void*)param_1);
  plVar6 = local_60;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  bVar9 = local_60 == (int64_t *)0x0;
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      bVar10 = true;
      goto LAB_0128fd8c;
    }
    FUN_00d50b00();
  }
  bVar10 = local_60 == (int64_t *)0x0;
  if ((local_60 != (int64_t *)0x0) && (local_60 != (int64_t *)0x0)) {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    while( true ) {
      lVar4 = (int64_t)(int)local_48;
      local_48 = local_48 + 1;
      uVar1 = *(uint *)((int64_t)plVar2 + 0xc);
      param_1 = (int64_t *)(uint64_t)uVar1;
      if ((int)uVar1 <= (int)local_48) break;
      local_60 = *(int64_t **)(plVar2[2] + 8 + lVar4 * 8);
      if ((local_48 != 0) && (pVar5 = uVar1 - 1, local_48 != pVar5)) {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_013faf20();
        pvVar3 = _pthread_getspecific(pVar5);
        plVar6 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar3 = _pthread_getspecific(pVar5);
        plVar7 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar7 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        uVar12 = (**(code **)(*plVar7 + 0x380))(uVar11);
        (**(code **)(*plVar6 + 0x410))(uVar12,uVar11);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
    bVar10 = false;
    bVar9 = false;
  }
LAB_0128fd8c:
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  plVar6 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != (int64_t *)0x0) {
    for (iVar8 = 0; iVar8 < *(int *)((int64_t)local_60 + 0xc); iVar8 = iVar8 + 1) {
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      plVar6 = plVar2;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
        plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faf20();
      (**(code **)(*plVar6 + 0x3b8))();
      FUN_013faee0();
    }
    FUN_01a81420();
  }
  *this_ptr = (int64_t)plVar2;
  *(void*)(this_ptr + 1) = 1;
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar10) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

