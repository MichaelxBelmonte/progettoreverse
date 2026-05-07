// Function: FUN_00a2d6b4
// Address: 00a2d6b4
// Size: 1159 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00a2d6b4(ulong param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void*puVar4;
  void*puVar5;
  void *pvVar6;
  void *pvVar7;
  uint64_t uVar8;
  char *pcVar9;
  void *pvVar10;
  void *pvVar11;
  int64_t this_ptr;
  size_t sVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t local_60;
  
  puVar5 = operator_new(param_1);
  pcVar9 = segment_command_00000020.segname + 8;
  *puVar5 = &g_0252a000;
  puVar5[1] = &g_0252a720;
  *(void*)(puVar5 + 2) = 0xffffffff;
  puVar5[3] = 0xffffffffffffffff;
  *(void*)(puVar5 + 4) = 0x101;
  *(void*)(puVar5 + 5) = 0;
  *(void*)((int64_t)puVar5 + 0x2c) = 0;
  *(void*)(puVar5 + 6) = 0;
  *(void*)((int64_t)puVar5 + 0x4c) = 0;
  *(void*)((int64_t)puVar5 + 0x34) = 0;
  *(void*)((int64_t)puVar5 + 0x3c) = 0;
  puVar5[8] = 0;
  *(void*)(puVar5 + 9) = 0;
  FUN_00a2e49a();
  FUN_00a2e49a();
  *(void*)(puVar5 + 0x11) = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  *(void*)(puVar5 + 0x18) = 0x100;
  *(void*)((int64_t)puVar5 + 0xc2) = 0;
  *(void*)((int64_t)puVar5 + 0xca) = 0;
  *(void*)((int64_t)puVar5 + 0xcc) = 0x101;
  *(void*)(puVar5 + 0x1a) = 0;
  FUN_00a9728e();
  FUN_00a3f600();
  uVar2 = puVar5[3];
  lVar3 = *(int64_t *)(this_ptr + 8);
  puVar4 = *(void**)(lVar3 + 0x10);
  if (puVar4 == *(void**)(lVar3 + 0x18)) {
    lVar13 = *(int64_t *)(lVar3 + 8);
    pvVar6 = (void *)((int64_t)puVar4 - lVar13);
    uVar1 = ((int64_t)pvVar6 >> 3) + 1;
    sVar12 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2db31;
    lVar15 = (int64_t)*(void**)(lVar3 + 0x18) - lVar13;
    uVar8 = lVar15 >> 3;
    uVar14 = lVar15 >> 2;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if (0xffffffffffffffe < uVar8) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar14) goto LAB_00a2db36;
      sVar12 = 0xffffffff;
      pvVar11 = operator_new((ulong)uVar8);
    }
    pcVar9 = (char *)((int64_t)pvVar11 + uVar14 * 8);
    lVar15 = (int64_t)pvVar11 + ((int64_t)pvVar6 >> 3) * 8 + 8;
    *(void*)(lVar15 + -8) = uVar2;
    if (0 < (int64_t)pvVar6) {
      _memcpy(pcVar9,pvVar6,sVar12);
    }
    *(void **)(lVar3 + 8) = pvVar11;
    *(int64_t *)(lVar3 + 0x10) = lVar15;
    *(char **)(lVar3 + 0x18) = pcVar9;
    if (lVar13 != 0) {
      operator_delete(pcVar9);
    }
  }
  else {
    *puVar4 = uVar2;
    *(void**)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a2db84();
  puVar4 = *(void**)(this_ptr + 0x40);
  if (puVar4 == *(void**)(this_ptr + 0x48)) {
    lVar3 = *(int64_t *)(this_ptr + 0x38);
    pvVar6 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar6 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2db31;
    lVar13 = (int64_t)*(void**)(this_ptr + 0x48) - lVar3;
    pcVar9 = (char *)(lVar13 >> 3);
    uVar14 = lVar13 >> 2;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if ((char *)0xffffffffffffffe < pcVar9) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar14) goto LAB_00a2db36;
      pvVar11 = operator_new((ulong)pcVar9);
    }
    lVar13 = (int64_t)pvVar11 + ((int64_t)pvVar6 >> 3) * 8 + 8;
    *(void**)(lVar13 + -8) = puVar5;
    if (0 < (int64_t)pvVar6) {
      _memcpy(pcVar9,pvVar6,(size_t)lVar3);
    }
    *(void **)(this_ptr + 0x38) = pvVar11;
    *(int64_t *)(this_ptr + 0x40) = lVar13;
    *(void **)(this_ptr + 0x48) = (void *)((int64_t)pvVar11 + uVar14 * 8);
    if (lVar3 != 0) {
      operator_delete(pcVar9);
    }
  }
  else {
    *puVar4 = puVar5;
    *(void**)(this_ptr + 0x40) = puVar4 + 1;
  }
  pvVar6 = operator_new((ulong)pcVar9);
  FUN_00a3ef70();
  puVar4 = *(void**)(this_ptr + 0x28);
  sVar12 = 0xffffffff;
  if (puVar4 == *(void**)(this_ptr + 0x30)) {
    lVar3 = *(int64_t *)(this_ptr + 0x20);
    pvVar11 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar11 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a2db31:
                          std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (int64_t)*(void**)(this_ptr + 0x30) - lVar3;
    pvVar10 = (void *)(lVar13 >> 3);
    uVar14 = lVar13 >> 2;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if ((void *)0xffffffffffffffe < pvVar10) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar14) {
LAB_00a2db36:
                            FUN_00a2e51c();
      }
      sVar12 = 0xffffffff;
      pvVar7 = operator_new((ulong)pvVar10);
    }
    lVar13 = (int64_t)pvVar7 + ((int64_t)pvVar11 >> 3) * 8 + 8;
    *(void **)(lVar13 + -8) = pvVar6;
    if (0 < (int64_t)pvVar11) {
      _memcpy(pvVar10,pvVar11,sVar12);
    }
    *(void **)(this_ptr + 0x20) = pvVar7;
    *(int64_t *)(this_ptr + 0x28) = lVar13;
    *(void **)(this_ptr + 0x30) = (void *)((int64_t)pvVar7 + uVar14 * 8);
    if (lVar3 != 0) {
      operator_delete(pvVar10);
    }
  }
  else {
    *puVar4 = pvVar6;
    *(void**)(this_ptr + 0x28) = puVar4 + 1;
  }
  FUN_00aa9d4e();
  if (0x7fffffff00000000 < local_60) {
    FUN_009b9a6e();
  }
  uVar2 = *(void*)(*(int64_t *)(this_ptr + 0x28) + -8);
  FUN_00aa9aa2();
  return uVar2;
}

