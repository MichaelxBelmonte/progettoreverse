// Function: FUN_01483ef0
// Address: 01483ef0
// Size: 1163 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01483ef0(void* param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void*puVar7;
  int iVar8;
  void* pVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t this_ptr;
  double dVar13;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  cVar2 = FUN_00e34a50();
  if (cVar2 != '\0') {
    FUN_00e34a60();
    return;
  }
  plVar12 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar12 + 0x370))();
  *(void*)(this_ptr + 0xa8) = uVar6;
  plVar12 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar12 + 0x378))();
  *(void*)(this_ptr + 0x98) = uVar6;
  plVar12 = *(int64_t **)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  dVar13 = (double)(**(code **)(*plVar12 + 0x398))();
  *(double *)(this_ptr + 0xb0) = dVar13;
  *(void*)(this_ptr + 0xb8) = 0x407b900000000000;
  pVar9 = 1;
  if (0 < (int)(dVar13 * g_0240f0f0)) {
    pVar9 = (int)(dVar13 * g_0240f0f0);
  }
  *(void* *)(this_ptr + 0xc0) = pVar9;
  FUN_013fb420();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(local_38 + 0x30);
  uVar10 = (uint64_t)(int)uVar1;
  uVar11 = *(uint64_t *)(this_ptr + 0x98);
  if ((uVar11 | uVar10) >> 0x20 == 0) {
    iVar3 = (int)((uVar11 & 0xffffffff) / (uint64_t)uVar1);
    uVar11 = (uVar11 & 0xffffffff) % (uint64_t)uVar1;
  }
  else {
    iVar3 = (int)((int64_t)uVar11 / (int64_t)uVar10);
    uVar11 = (int64_t)uVar11 % (int64_t)uVar10;
  }
  iVar8 = 2;
  if (2 < iVar3 + 1) {
    iVar8 = iVar3 + 1;
  }
  *(int *)(this_ptr + 0x19c) = iVar8;
  puVar7 = (void*)FUN_00e8fc40(iVar8,uVar11);
  FUN_00d4ff40();
  pVar9 = 0x25f1800;
  *puVar7 = &g_025f1800;
  puVar7[7] = 0;
  *(void*)(puVar7 + 8) = 0;
  *(void*)(puVar7 + 0xc) = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(void*)(puVar7 + 6) = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  *(void*)((int64_t)puVar7 + 0x55) = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  (*g_025f1818)();
  lVar5 = *(int64_t *)(this_ptr + 0x1d0);
  *(void**)(this_ptr + 0x1d0) = puVar7;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_015c6ee0((int)*(void*)(local_38 + 0x10),*(void*)(local_38 + 0x28));
  *(void*)(this_ptr + 0x1d8) = *(void*)(this_ptr + 0x19c);
  FUN_01484480();
  lVar5 = *(int64_t *)(this_ptr + 0x70);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_0141bab0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (iVar3 == 3) {
    *(void*)(this_ptr + 0xe1) = 1;
    if (*(char *)(this_ptr + 0x198) == '\0') {
      FUN_014902f0();
    }
    else {
      FUN_018acae0();
      lVar5 = g_027db978;
      if (g_027db978 != 0) {
        FUN_00d50b00();
      }
      dVar13 = (double)FUN_018ade30();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (g_023942d0 < dVar13) {
        FUN_01484850();
        FUN_01484bc0();
      }
      *(void*)(this_ptr + 0x22c) = 0xc00000028;
      FUN_0148ced0(0,g_02390124,g_02390124,g_02390124,0xc,0);
    }
    if (*(char *)(this_ptr + 0x3c) != '\0') {
      FUN_00e34a60();
      goto LAB_01484363;
    }
  }
  else {
    FUN_01484850();
    FUN_01484bc0();
    if (*(char *)(this_ptr + 0x3c) != '\0') {
      FUN_00e34a60();
      goto LAB_01484363;
    }
  }
  FUN_01483d60();
LAB_01484363:
  FUN_00d50b20();
  return;
}

