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

