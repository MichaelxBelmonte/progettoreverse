// Function: FUN_00a291b2
// Address: 00a291b2
// Size: 1137 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00a291b2(_Unwind_Exception *param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void*puVar4;
  code *pcVar5;
  void*puVar6;
  void *pvVar7;
  void *pvVar8;
  int64_t lVar9;
  void *pvVar10;
  int64_t this_ptr;
  size_t sVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t local_60;
  
  puVar6 = operator_new((ulong)param_1);
  *puVar6 = &g_02528d90;
  puVar6[1] = &g_0252a720;
  *(void*)(puVar6 + 2) = 0xffffffff;
  puVar6[3] = 0xffffffffffffffff;
  *(void*)(puVar6 + 4) = 0x101;
  *(void*)(puVar6 + 5) = 0;
  *(void*)((int64_t)puVar6 + 0x2c) = 0;
  FUN_00a29f68();
  FUN_00a29f68();
  puVar6[0x15] = 0x101000100;
  puVar6[0x14] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  FUN_00a6cd30();
  FUN_00a1c116();
  uVar2 = puVar6[3];
  lVar3 = *(int64_t *)(this_ptr + 8);
  puVar4 = *(void**)(lVar3 + 0x10);
  if (puVar4 == *(void**)(lVar3 + 0x18)) {
    lVar12 = *(int64_t *)(lVar3 + 8);
    pvVar7 = (void *)((int64_t)puVar4 - lVar12);
    uVar1 = ((int64_t)pvVar7 >> 3) + 1;
    sVar11 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a29601;
    lVar9 = (int64_t)*(void**)(lVar3 + 0x18) - lVar12;
    param_1 = (_Unwind_Exception *)(lVar9 >> 3);
    uVar13 = lVar9 >> 2;
    if (uVar13 < uVar1) {
      uVar13 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar13) goto LAB_00a29606;
      sVar11 = 0xffffffff;
      pvVar10 = operator_new((ulong)param_1);
    }
    param_1 = (_Unwind_Exception *)((int64_t)pvVar10 + uVar13 * 8);
    lVar9 = (int64_t)pvVar10 + ((int64_t)pvVar7 >> 3) * 8 + 8;
    *(void*)(lVar9 + -8) = uVar2;
    if (0 < (int64_t)pvVar7) {
      _memcpy(param_1,pvVar7,sVar11);
    }
    *(void **)(lVar3 + 8) = pvVar10;
    *(int64_t *)(lVar3 + 0x10) = lVar9;
    *(_Unwind_Exception **)(lVar3 + 0x18) = param_1;
    if (lVar12 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = uVar2;
    *(void**)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a29652();
  puVar4 = *(void**)(this_ptr + 0x40);
  if (puVar4 == *(void**)(this_ptr + 0x48)) {
    lVar3 = *(int64_t *)(this_ptr + 0x38);
    pvVar7 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar7 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a29601;
    lVar12 = (int64_t)*(void**)(this_ptr + 0x48) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar12 >> 3);
    uVar13 = lVar12 >> 2;
    if (uVar13 < uVar1) {
      uVar13 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar13) goto LAB_00a29606;
      pvVar10 = operator_new((ulong)param_1);
    }
    lVar12 = (int64_t)pvVar10 + ((int64_t)pvVar7 >> 3) * 8 + 8;
    *(void**)(lVar12 + -8) = puVar6;
    if (0 < (int64_t)pvVar7) {
      _memcpy(param_1,pvVar7,(size_t)lVar3);
    }
    *(void **)(this_ptr + 0x38) = pvVar10;
    *(int64_t *)(this_ptr + 0x40) = lVar12;
    *(void **)(this_ptr + 0x48) = (void *)((int64_t)pvVar10 + uVar13 * 8);
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = puVar6;
    *(void**)(this_ptr + 0x40) = puVar4 + 1;
  }
  pvVar7 = operator_new((ulong)param_1);
  FUN_00a1b6e8();
  puVar4 = *(void**)(this_ptr + 0x28);
  sVar11 = 0xffffffff;
  if (puVar4 == *(void**)(this_ptr + 0x30)) {
    lVar3 = *(int64_t *)(this_ptr + 0x20);
    pvVar10 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar10 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a29601:
                          std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (int64_t)*(void**)(this_ptr + 0x30) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar12 >> 3);
    uVar13 = lVar12 >> 2;
    if (uVar13 < uVar1) {
      uVar13 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar13) {
LAB_00a29606:
        FUN_00a29fea();
        FUN_00aa9aa2();
        __Unwind_Resume(param_1);
                            pcVar5 = invalidInstructionException();
        (*pcVar5)();
      }
      sVar11 = 0xffffffff;
      pvVar8 = operator_new((ulong)param_1);
    }
    lVar12 = (int64_t)pvVar8 + ((int64_t)pvVar10 >> 3) * 8 + 8;
    *(void **)(lVar12 + -8) = pvVar7;
    if (0 < (int64_t)pvVar10) {
      _memcpy(param_1,pvVar10,sVar11);
    }
    *(void **)(this_ptr + 0x20) = pvVar8;
    *(int64_t *)(this_ptr + 0x28) = lVar12;
    *(void **)(this_ptr + 0x30) = (void *)((int64_t)pvVar8 + uVar13 * 8);
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = pvVar7;
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

