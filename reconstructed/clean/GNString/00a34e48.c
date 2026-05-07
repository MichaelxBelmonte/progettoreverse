// Function: FUN_00a34e48
// Address: 00a34e48
// Size: 983 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00a34e48(_Unwind_Exception *param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void*puVar4;
  code *pcVar5;
  void *pvVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  size_t sVar10;
  int64_t lVar11;
  void *pvVar12;
  int64_t local_60;
  
  pvVar6 = operator_new((ulong)param_1);
  FUN_00a348e6();
  FUN_00aa31be();
  FUN_00a530b2();
  uVar2 = *(void*)((int64_t)pvVar6 + 0x18);
  lVar3 = *(int64_t *)(this_ptr + 8);
  puVar4 = *(void**)(lVar3 + 0x10);
  if (puVar4 == *(void**)(lVar3 + 0x18)) {
    lVar8 = *(int64_t *)(lVar3 + 8);
    pvVar12 = (void *)((int64_t)puVar4 - lVar8);
    uVar1 = ((int64_t)pvVar12 >> 3) + 1;
    param_3 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a351fd;
    lVar11 = (int64_t)*(void**)(lVar3 + 0x18) - lVar8;
    param_1 = (_Unwind_Exception *)(lVar11 >> 3);
    uVar9 = lVar11 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) goto LAB_00a35202;
      param_3 = 0xffffffff;
      pvVar7 = operator_new((ulong)param_1);
    }
    lVar11 = (int64_t)pvVar7 + ((int64_t)pvVar12 >> 3) * 8 + 8;
    *(void*)(lVar11 + -8) = uVar2;
    if (0 < (int64_t)pvVar12) {
      _memcpy(param_1,pvVar12,param_3);
    }
    *(void **)(lVar3 + 8) = pvVar7;
    *(int64_t *)(lVar3 + 0x10) = lVar11;
    *(void **)(lVar3 + 0x18) = (void *)((int64_t)pvVar7 + uVar9 * 8);
    if (lVar8 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = uVar2;
    *(void**)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a35232();
  puVar4 = *(void**)(this_ptr + 0x40);
  if (puVar4 == *(void**)(this_ptr + 0x48)) {
    lVar3 = *(int64_t *)(this_ptr + 0x38);
    pvVar12 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar12 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a351fd;
    lVar8 = (int64_t)*(void**)(this_ptr + 0x48) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar8 >> 3);
    uVar9 = lVar8 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) goto LAB_00a35202;
      pvVar7 = operator_new((ulong)param_1);
    }
    param_1 = (_Unwind_Exception *)((int64_t)pvVar7 + uVar9 * 8);
    lVar8 = (int64_t)pvVar7 + ((int64_t)pvVar12 >> 3) * 8 + 8;
    *(void **)(lVar8 + -8) = pvVar6;
    if (0 < (int64_t)pvVar12) {
      _memcpy(param_1,pvVar12,param_3);
    }
    *(void **)(this_ptr + 0x38) = pvVar7;
    *(int64_t *)(this_ptr + 0x40) = lVar8;
    *(_Unwind_Exception **)(this_ptr + 0x48) = param_1;
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = pvVar6;
    *(void**)(this_ptr + 0x40) = puVar4 + 1;
  }
  pvVar6 = operator_new((ulong)param_1);
  FUN_00a521f0();
  puVar4 = *(void**)(this_ptr + 0x28);
  sVar10 = 0xffffffff;
  if (puVar4 == *(void**)(this_ptr + 0x30)) {
    lVar3 = *(int64_t *)(this_ptr + 0x20);
    pvVar12 = (void *)((int64_t)puVar4 - lVar3);
    uVar1 = ((int64_t)pvVar12 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a351fd:
                          std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (int64_t)*(void**)(this_ptr + 0x30) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar8 >> 3);
    uVar9 = lVar8 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) {
LAB_00a35202:
        FUN_00a35bda();
        FUN_00aa9aa2();
        __Unwind_Resume(param_1);
                            pcVar5 = invalidInstructionException();
        (*pcVar5)();
      }
      sVar10 = 0xffffffff;
      pvVar7 = operator_new((ulong)param_1);
    }
    lVar8 = (int64_t)pvVar7 + ((int64_t)pvVar12 >> 3) * 8 + 8;
    *(void **)(lVar8 + -8) = pvVar6;
    if (0 < (int64_t)pvVar12) {
      _memcpy(param_1,pvVar12,sVar10);
    }
    *(void **)(this_ptr + 0x20) = pvVar7;
    *(int64_t *)(this_ptr + 0x28) = lVar8;
    *(void **)(this_ptr + 0x30) = (void *)((int64_t)pvVar7 + uVar9 * 8);
    if (lVar3 != 0) {
      operator_delete(param_1);
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

