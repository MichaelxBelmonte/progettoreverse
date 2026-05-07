// Function: FUN_015f7fc0
// Address: 015f7fc0
// Size: 522 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015f7fc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  void* in_ECX;
  uint32_t unaff_ESI;
  void*this_ptr;
  uint32_t in_XMM4_Da;
  uint32_t in_XMM5_Da;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02514d30;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(void*)((int64_t)puVar1 + 0x54) = 0;
  *(void*)((int64_t)puVar1 + 0x5c) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[7] = param_1;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[8] = param_2;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[9] = param_3;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[10] = param_4;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(void*)(puVar4 + 0xb) = in_XMM4_Da;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(void*)((int64_t)puVar4 + 0x5c) = in_XMM5_Da;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(void*)(puVar4 + 0xc) = unaff_ESI;
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

