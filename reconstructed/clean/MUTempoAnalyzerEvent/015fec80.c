// Function: FUN_015fec80
// Address: 015fec80
// Size: 523 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015fec80(uint32_t param_1,void* param_2)

{
  uint32_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  void* pVar7;
  uint64_t in_RCX;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025f4940;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  FUN_00d500e0();
  lVar8 = 0;
  do {
    lVar5 = *arg1;
    pvVar3 = _pthread_getspecific((void*)in_RCX);
    if (pvVar3 != (void *)0x0) {
      lVar5 = *arg1;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    uVar1 = *(void*)(*(int64_t *)(*(int64_t *)(lVar5 + 0x38) + 0x10) + lVar8 * 4);
    pvVar3 = _pthread_getspecific((void*)in_RCX);
    puVar6 = puVar2;
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar7 = (void*)in_RCX;
    *(void*)(*(int64_t *)(puVar6[7] + 0x10) + lVar8 * 4) = uVar1;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x18);
  lVar8 = *arg1;
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar8 = *(int64_t *)(lVar8 + 0x40);
    lVar4 = puVar2[8];
    puVar6 = puVar2;
    if (lVar4 == lVar8) goto LAB_015fee11;
  }
  else {
    lVar8 = *(int64_t *)(lVar8 + 0x40);
    lVar4 = ((void*)puVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4])[8];
    puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    if (lVar4 == lVar8) goto LAB_015fee11;
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  puVar6[8] = lVar8;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_015fee11:
  pvVar3 = _pthread_getspecific(pVar7);
  puVar6 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  *(void* *)(puVar6 + 9) = param_2;
  pvVar3 = _pthread_getspecific(param_2);
  puVar6 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    puVar6 = (void*)puVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  *(void*)((int64_t)puVar6 + 0x4c) = param_1;
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

