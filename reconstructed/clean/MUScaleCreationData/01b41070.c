// Function: FUN_01b41070
// Address: 01b41070
// Size: 898 bytes
// Class: MUScaleCreationData
// === MUScaleCreationData properties ===
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


void FUN_01b41070(void*param_1)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t this_ptr;
  bool bVar8;
  int64_t local_c0;
  char local_b8;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027c7928;
  pVar7 = (void*)param_1;
  plVar1 = (int64_t *)*param_1;
  if (g_027c7928 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01d2ac30();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b420c0();
    if (local_40 == 0) {
      bVar8 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01b420c0();
      iVar5 = FUN_00d8c7a0();
      bVar8 = iVar5 != 0;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pcVar2 = *(code **)(**(int64_t **)(this_ptr + 0x80) + 0x998);
    if (bVar8) {
      (*pcVar2)();
    }
    else {
      (*pcVar2)();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027e4848;
  plVar1 = (int64_t *)*param_1;
  if (g_027e4848 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar3 = *(int64_t *)(this_ptr + 0xa0), lVar3 != 0)) {
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x8a0))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *(int64_t *)(this_ptr + 0xa0);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_01ab3680();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027e4850;
  plVar1 = (int64_t *)*param_1;
  if (g_027e4850 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar3 = *(int64_t *)(this_ptr + 0xa8), lVar3 != 0)) {
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x8a0))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *(int64_t *)(this_ptr + 0xa8);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_01ab3680();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

