// Function: FUN_00a2f0ea
// Address: 00a2f0ea
// Size: 959 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00a2f0ea(void *param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  void *pvVar6;
  uint64_t uVar7;
  void *pvVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t this_ptr;
  size_t sVar11;
  int64_t lVar12;
  void *pvVar13;
  int64_t local_60;
  
  pvVar5 = operator_new((ulong)param_1);
  FUN_00a2eb36();
  FUN_00a993c2();
  FUN_00a41474();
  uVar2 = *(void*)((int64_t)pvVar5 + 0x18);
  lVar3 = *(int64_t *)(this_ptr + 8);
  puVar4 = *(void**)(lVar3 + 0x10);
  if (puVar4 == *(void**)(lVar3 + 0x18)) {
    lVar9 = *(int64_t *)(lVar3 + 8);
    pvVar13 = (void *)((int64_t)puVar4 - lVar9);
    uVar1 = ((int64_t)pvVar13 >> 3) + 1;
    param_3 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2f49f;
    lVar12 = (int64_t)*(void**)(lVar3 + 0x18) - lVar9;
    param_1 = (void *)(lVar12 >> 3);
    uVar10 = lVar12 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    if ((void *)0xffffffffffffffe < param_1) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) goto LAB_00a2f4a4;
      param_3 = 0xffffffff;
      pvVar8 = operator_new((ulong)param_1);
    }
    lVar12 = (int64_t)pvVar8 + ((int64_t)pvVar13 >> 3) * 8 + 8;
    *(void*)(lVar12 + -8) = uVar2;
    if (0 < (int64_t)pvVar13) {
      _memcpy(param_1,pvVar13,param_3);
    }
    *(void **)(lVar3 + 8) = pvVar8;
    *(int64_t *)(lVar3 + 0x10) = lVar12;
    *(void **)(lVar3 + 0x18) = (void *)((int64_t)pvVar8 + uVar10 * 8);
    if (lVar9 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = uVar2;
    *(void**)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a2f4d4();
  puVar4 = *(void**)(this_ptr + 0x40);
  if (puVar4 == *(void**)(this_ptr + 0x48)) {
    lVar3 = *(int64_t *)(this_ptr + 0x38);
    pvVar13 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar13 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2f49f;
    lVar9 = (int64_t)*(void**)(this_ptr + 0x48) - lVar3;
    uVar7 = lVar9 >> 3;
    uVar10 = lVar9 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    if (0xffffffffffffffe < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) goto LAB_00a2f4a4;
      pvVar8 = operator_new((ulong)uVar7);
    }
    param_1 = (void *)((int64_t)pvVar8 + uVar10 * 8);
    lVar9 = (int64_t)pvVar8 + ((int64_t)pvVar13 >> 3) * 8 + 8;
    *(void **)(lVar9 + -8) = pvVar5;
    if (0 < (int64_t)pvVar13) {
      _memcpy(param_1,pvVar13,param_3);
    }
    *(void **)(this_ptr + 0x38) = pvVar8;
    *(int64_t *)(this_ptr + 0x40) = lVar9;
    *(void **)(this_ptr + 0x48) = param_1;
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = pvVar5;
    *(void**)(this_ptr + 0x40) = puVar4 + 1;
  }
  pvVar5 = operator_new((ulong)param_1);
  FUN_00a40500();
  puVar4 = *(void**)(this_ptr + 0x28);
  sVar11 = 0xffffffff;
  if (puVar4 == *(void**)(this_ptr + 0x30)) {
    lVar3 = *(int64_t *)(this_ptr + 0x20);
    pvVar13 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar13 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a2f49f:
                          std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (int64_t)*(void**)(this_ptr + 0x30) - lVar3;
    pvVar8 = (void *)(lVar9 >> 3);
    uVar10 = lVar9 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    if ((void *)0xffffffffffffffe < pvVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) {
LAB_00a2f4a4:
                            FUN_00a2fe7c();
      }
      sVar11 = 0xffffffff;
      pvVar6 = operator_new((ulong)pvVar8);
    }
    lVar9 = (int64_t)pvVar6 + ((int64_t)pvVar13 >> 3) * 8 + 8;
    *(void **)(lVar9 + -8) = pvVar5;
    if (0 < (int64_t)pvVar13) {
      _memcpy(pvVar8,pvVar13,sVar11);
    }
    *(void **)(this_ptr + 0x20) = pvVar6;
    *(int64_t *)(this_ptr + 0x28) = lVar9;
    *(void **)(this_ptr + 0x30) = (void *)((int64_t)pvVar6 + uVar10 * 8);
    if (lVar3 != 0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *puVar4 = pvVar5;
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

