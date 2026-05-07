// ===================================================================
// MUBezierFunctionPoint — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (12):
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


// ============================================================
// 0142c440
// ============================================================
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



// ============================================================
// 0142d0b0
// ============================================================
// Function: FUN_0142d0b0
// Address: 0142d0b0
// Size: 900 bytes
// Class: MUBezierFunctionPoint
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


void FUN_0142d0b0(void* param_1)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t *plVar3;
  void *pvVar4;
  void*puVar5;
  void*puVar6;
  int64_t this_ptr;
  
  if (*(int64_t *)(this_ptr + 0x50) == 0) {
    plVar3 = (int64_t *)FUN_000bea40();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb6d0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb720();
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025ddb28;
    puVar5[0xb] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    *(void*)((int64_t)puVar5 + 0x43) = 0;
    *(void*)((int64_t)puVar5 + 0x4b) = 0;
    pcVar2 = g_025ddb40;
    (*g_025ddb40)();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013fae90((int)g_023e11c8);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013faee0((int)*(void*)(this_ptr + 0x48));
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b30();
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025ddb28;
    puVar6[0xb] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *(void*)((int64_t)puVar6 + 0x43) = 0;
    *(void*)((int64_t)puVar6 + 0x4b) = 0;
    (*pcVar2)();
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013fae90((int)g_02411188);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013faee0((int)*(void*)(this_ptr + 0x48));
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b30();
    FUN_00d64850();
    plVar1 = *(int64_t **)(this_ptr + 0x50);
    if (plVar1 != plVar3) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0x50) = plVar3;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0142dc30
// ============================================================
// Function: FUN_0142dc30
// Address: 0142dc30
// Size: 753 bytes
// Class: MUBezierFunctionPoint
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


void FUN_0142dc30(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  uint32_t local_68;
  uint32_t local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0xf0);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar2 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar2 * 8) + 0xf8);
      if (lVar2 != 0) {
        local_68 = -1;
        while (local_68 = local_68 + 1, local_68 < *(int *)(lVar2 + 0xc)) {
          FUN_0142dfe0();
        }
        FUN_01431df0();
      }
      FUN_00d21140();
    }
    FUN_01431d80();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  lVar1 = *(int64_t *)(this_ptr + 0xf8);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431e60();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x110);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431ed0();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x118);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431f40();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00b342a0();
  return;
}



// ============================================================
// 01112590
// ============================================================
// Function: FUN_01112590
// Address: 01112590
// Size: 1126 bytes
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


void FUN_01112590(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01112a30();
  *this_ptr = &g_025e2f90;
  this_ptr[0xc] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113040();
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_011131b0();
    FUN_00e87980();
  }
  this_ptr[0xe] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113320();
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113490();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113600();
    FUN_00e87980();
  }
  return;
}

