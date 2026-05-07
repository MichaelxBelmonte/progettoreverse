// Function: FUN_01906d80
// Address: 01906d80
// Size: 1341 bytes
// Class: Unknown

void FUN_01906d80(uint64_t param_1)

{
  bool bVar1;
  int64_t *plVar2;
  void *pvVar3;
  void*puVar4;
  void* pVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  double dVar10;
  uint64_t uVar11;
  double dVar12;
  double dVar13;
  int64_t local_c8;
  uint8_t local_c0;
  uint8_t local_b8 [8];
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_90;
  char local_88;
  int64_t local_48;
  int64_t local_40;
  char local_38 [8];
  
  if (*arg1 == 0) {
    lVar6 = *(int64_t *)(this_ptr + 0x38);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_016ebac0();
    lVar8 = local_40;
    if (local_40 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      bVar1 = true;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = 0;
    local_c8 = *arg1;
    FUN_01901690(param_1,&local_c8);
    lVar8 = local_40;
    if (local_40 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  FUN_00d23340();
  lVar6 = local_40;
  local_48 = CONCAT71(local_48._1_7_,local_38[0]);
  plVar2 = (int64_t *)local_38;
  if (local_38[0] == '\0') {
    plVar2 = &local_48;
  }
  *(char *)plVar2 = '\0';
  if ((local_38[0] != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 == '\0') && (lVar6 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = lVar6;
  local_a0 = 1;
  pVar5 = 0;
  FUN_01900ec0(0,&local_a8);
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_01907950();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_019079b0();
  dVar12 = (double)FUN_018fd630(uVar11,0);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x25683c0;
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01907950();
  iVar7 = *(int *)(puVar4 + 3);
  FUN_00c8e340(uVar11,1);
  lVar6 = puVar4[2];
  *(void*)(lVar6 + iVar7) = uVar11;
  iVar7 = *(int *)(lVar8 + 0xc);
  if (1 < iVar7) {
    dVar12 = g_023b4df8 / dVar12;
    lVar9 = 1;
    do {
      pvVar3 = _pthread_getspecific((void*)lVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_019079b0();
      FUN_00e7b970();
      local_48 = local_40;
      dVar13 = (double)FUN_00e7c860();
      iVar7 = *(int *)(puVar4 + 3);
      FUN_00c8e340(dVar13,1);
      lVar6 = puVar4[2];
      *(double *)(lVar6 + iVar7) = dVar13 * dVar12 + dVar10;
      lVar9 = lVar9 + 1;
      iVar7 = *(int *)(lVar8 + 0xc);
    } while (lVar9 < iVar7);
  }
  if (local_90 != 0) {
    dVar10 = *(double *)((int64_t)*(int *)(puVar4 + 3) + -8 + lVar6);
    FUN_00d23340();
    lVar6 = local_40;
    plVar2 = (int64_t *)local_38;
    if (local_38[0] == '\0') {
      plVar2 = &local_48;
    }
    local_48 = CONCAT71(local_48._1_7_,local_38[0]);
    *(char *)plVar2 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((void*)plVar2);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01907950();
    if (((char)local_48 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e7bdb0();
    local_b0 = 0;
    lVar6 = 0;
    FUN_01902aa0(dVar10 - dVar12,local_b8);
    iVar7 = *(int *)(lVar8 + 0xc);
  }
  if (1 < iVar7) {
    lVar9 = 1;
    do {
      pvVar3 = _pthread_getspecific((void*)lVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01907cc0(*(void*)(puVar4[2] + lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar8 + 0xc));
  }
  FUN_00d50b20();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}

