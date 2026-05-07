// Function: FUN_0138ca60
// Address: 0138ca60
// Size: 1492 bytes
// Class: Unknown

void FUN_0138ca60(void)

{
  int iVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  void*puVar6;
  void*puVar7;
  int64_t lVar8;
  void*this_ptr;
  int local_60;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  puVar7 = (void*)*this_ptr;
  if (puVar7 != (void*)0x0) {
    local_60 = -1;
LAB_0138cafb:
    while (local_60 = local_60 + 1, local_60 < *(int *)(puVar7 + 0xc)) {
      pVar5 = (void*)*(void*)(puVar7 + 0x10);
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') goto LAB_0138cba0;
      if (local_40 != 0) goto LAB_0138cbd0;
    }
    FUN_001159b0();
    puVar6 = puVar7;
    if (puVar2 == (void*)0x0) {
      return;
    }
  }
  if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
    iVar1 = 0;
    do {
      pvVar3 = _pthread_getspecific((void*)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific((void*)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc340();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d19a0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int64_t)puVar2 + 0xc));
  }
  FUN_001150f0();
  FUN_00d50b20();
  return;
LAB_0138cba0:
  if (local_40 != 0) {
    FUN_00d50b00();
LAB_0138cbd0:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar3 = _pthread_getspecific(pVar5);
    lVar8 = local_40;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar8 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar1 = 5;
    if ((*(int64_t *)(lVar8 + 0x1f8) == 0) && (iVar1 = 6, *(int64_t *)(lVar8 + 0x200) == 0)) {
      if (*(int64_t *)(lVar8 + 0x148) == 0) {
        iVar1 = 0;
      }
      else {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar1 = FUN_0141bab0();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 2) {
      local_38 = '\0';
      FUN_00d235a0();
    }
    FUN_00d50b20();
  }
  goto LAB_0138cafb;
}

