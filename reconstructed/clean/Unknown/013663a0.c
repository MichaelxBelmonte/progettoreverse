// Function: FUN_013663a0
// Address: 013663a0
// Size: 1062 bytes
// Class: Unknown

char FUN_013663a0(double param_1,uint param_2)

{
  void*puVar1;
  uint uVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*puVar7;
  void* in_ECX;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t local_80 [8];
  uint8_t local_78;
  int64_t local_70;
  char local_68;
  uint local_5c;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  local_48 = *arg1;
  local_40 = '\0';
  local_31 = FUN_00d23d70();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    plVar8 = *(int64_t **)(this_ptr + 0x38);
    local_5c = param_2;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x38);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    dVar9 = (double)(**(code **)(*plVar8 + 0x370))();
    auVar10._8_8_ = _UNK_023945b8 & extraout_XMM0_Qb | _UNK_023945c8;
    auVar10._0_8_ =
         (double)(g_023945b0 & (uint64_t)(dVar9 * param_1) | g_023945c0) + dVar9 * param_1;
    auVar10 = roundsd(ZEXT816(0),auVar10,0xb);
    plVar8 = (int64_t *)*arg1;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = (int64_t *)*arg1;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    lVar4 = (**(code **)(*plVar8 + 0x380))();
    plVar8 = (int64_t *)*arg1;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = (int64_t *)*arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    lVar5 = (**(code **)(*plVar8 + 0x388))();
    plVar8 = *(int64_t **)(this_ptr + 0x38);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x38);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    lVar6 = (**(code **)(*plVar8 + 0x378))();
    if (lVar6 <= lVar5 + lVar4 + (int64_t)auVar10._0_8_) {
      plVar8 = *(int64_t **)(this_ptr + 0x38);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        plVar8 = *(int64_t **)(this_ptr + 0x38);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar8 + 0x378))();
      plVar8 = (int64_t *)*arg1;
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        plVar8 = (int64_t *)*arg1;
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar8 + 0x388))();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bb250();
    local_70 = *arg1;
    local_68 = '\0';
    FUN_0135dd30();
    lVar4 = local_58;
    uVar2 = local_5c;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_78 = 1;
    FUN_01355320(uVar2 & 0xff,local_80,1);
    lVar5 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*g_02572370)();
      puVar1 = *(void**)(this_ptr + 0x1c0);
      if (puVar1 == puVar7) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x1c0) = puVar7;
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar4 = 0;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar4 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = lVar6;
        FUN_00d235a0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar5 + 0xc));
    }
    FUN_00d50b20();
  }
  return local_31;
}

