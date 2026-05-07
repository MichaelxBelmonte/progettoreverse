// Function: FUN_0025c780
// Address: 0025c780
// Size: 879 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_0025c780(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar6 = local_40;
  pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_38[0]);
  pcVar5 = &local_50;
  if (local_38[0] != '\0') {
    pcVar5 = local_38;
  }
  local_50 = local_38[0];
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
    if (plVar6 == (int64_t *)0x0) {
      return;
    }
LAB_0025c7ff:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_0025c7ff;
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  pplVar7 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000fe4b0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0025c84b:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0025c84b;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_0025cad8;
  (**(code **)(*plVar6 + 0x988))();
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0025c8d7;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_0025c8d7:
    FUN_013fe9a0();
    plVar1 = (int64_t *)CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar1;
    cVar2 = FUN_00d23d70();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_013fe9d0();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_013fe9d0();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_0125a280();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_013fe9d0();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_01264170();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        dVar10 = (double)(**(code **)(*plVar6 + 0x940))();
        dVar11 = (double)(**(code **)(*plVar6 + 0x918))();
        if ((dVar10 + dVar11) - (dVar8 + dVar9) < g_02394dd8) {
          dVar8 = (double)(**(code **)(*plVar6 + 0x918))();
          (**(code **)(*plVar6 + 0x920))(dVar8 + g_02394de0);
          (**(code **)(*plVar6 + 0x540))();
        }
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0025cad8:
  FUN_00d50b20();
  return;
}

