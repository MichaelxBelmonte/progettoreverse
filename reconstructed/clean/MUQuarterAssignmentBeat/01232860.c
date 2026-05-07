// Function: FUN_01232860
// Address: 01232860
// Size: 1258 bytes
// Class: MUQuarterAssignmentBeat

void FUN_01232860(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  char *pcVar7;
  void* pVar8;
  int64_t **pplVar9;
  void*puVar10;
  char *pcVar11;
  void*puVar12;
  int64_t this_ptr;
  int iVar13;
  int64_t local_a0;
  char local_98;
  int local_68;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  puVar10 = *(void**)(this_ptr + 0x60);
  if (puVar10 != (void*)0x0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(puVar10 + 0xc) <= local_68) break;
      plVar1 = *(int64_t **)(*(int64_t *)(puVar10 + 0x10) + 8 + lVar5 * 8);
      local_48 = plVar1;
      FUN_0006e1c0();
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar9 = &local_48;
        if (cVar3 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar9 != (int64_t *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7220();
    puVar12 = puVar10;
    if (puVar4 == (void*)0x0) {
      bVar2 = true;
      goto LAB_01232d4a;
    }
  }
  if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
    iVar13 = 0;
    do {
      pvVar6 = _pthread_getspecific((void*)puVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar1 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar8 = (void*)puVar12;
      if (plVar1 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        plVar1 = local_48;
        local_38[0] = local_40[0];
        pcVar11 = local_38;
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = pcVar11;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar8 = (void*)pcVar11;
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a280();
        pVar8 = 0;
        FUN_016cb9d0(0,4);
        FUN_015084d0();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012646c0();
        puVar12 = (void*)0x0;
        FUN_016cb9d0(0,4);
        FUN_015085a0();
        if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)((int64_t)puVar4 + 0xc));
  }
  FUN_001159b0();
  bVar2 = false;
LAB_01232d4a:
  FUN_0152eef0();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

