// Function: FUN_0142c440
// Address: 0142c440
// Size: 952 bytes
// Class: MUBezierFunctionPoint
// String references:
//   "MUBezierFunctionPoint"
// === MUBezierFunctionPoint properties ===
//                   _slope
//                   _isXLocked
//                   _isYLocked
//                   _isOffsetToNextPointLocked
//                   _leftControlPointXDelta
//                   _leftControlPointYDelta
//                   _rightControlPointXDelta
//                   _rightControlPointYDelta
//                   _syncsSlopes
//                   _rootFifthsIndex
//                   _bassFifthsIndex
//                   _degreeBits


void FUN_0142c440(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0x38) = *(void*)(lVar8 + 0x38);
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0x40) = *(void*)(lVar8 + 0x40);
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0x48) = *(void*)(lVar8 + 0x48);
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0x50) = *(void*)(lVar8 + 0x50);
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0x51) = *(void*)(lVar8 + 0x51);
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0x52) = *(void*)(lVar8 + 0x52);
  plVar1 = (int64_t *)*arg1;
  if ((g_02794640 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02794590 = FUN_01112390();
    g_02794578 = "MUBezierFunctionPoint";
    g_02794580 = 0x88;
    param_1 = 0x1112330;
    g_02794588 = FUN_01112330;
    g_02794598 = 0;
    ram_00000000027945a0 = 0;
    g_027945a8 = 0;
    ram_00000000027945b0 = 0;
    g_027945b8 = 0;
    ram_00000000027945c0 = 0;
    g_027945c8 = 0;
    ram_00000000027945d0 = 0;
    g_027945d8 = 0;
    ram_00000000027945e0 = 0;
    g_027945e8 = 0;
    ram_00000000027945f0 = 0;
    g_027945f8 = 0;
    ram_0000000002794600 = 0;
    g_02794608 = 0;
    ram_0000000002794610 = 0;
    g_02794618 = 0;
    ram_0000000002794620 = 0;
    g_02794628 = 0;
    ram_0000000002794630 = 0;
    g_02794638 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0142c5ea;
  }
  arg1 = &g_02802688;
LAB_0142c5ea:
  lVar8 = *arg1;
  lVar5 = arg1[1];
  if (((char)lVar5 == '\0') || (lVar8 == 0)) {
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(void*)(this_ptr + 0x60) = *(void*)(lVar7 + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(void*)(this_ptr + 0x68) = *(void*)(lVar7 + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(void*)(this_ptr + 0x70) = *(void*)(lVar7 + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(void*)(this_ptr + 0x78) = *(void*)(lVar7 + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    *(void*)(this_ptr + 0x80) = *(void*)(lVar8 + 0x80);
  }
  else {
    *(void*)(this_ptr + 0x80) =
         *(void*)
          (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0x80);
  }
  if ((char)lVar5 != '\0') {
    FUN_00d50b20();
  }
  return;
}

