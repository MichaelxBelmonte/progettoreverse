// ===================================================================
// MUAmplitudeAnalyzer — Complete reconstructed pseudocode
// 9 functions
// ===================================================================


// ============================================================
// 01418c90
// ============================================================
// Function: FUN_01418c90
// Address: 01418c90
// Size: 7302 bytes
// Class: MUAmplitudeAnalyzer

void FUN_01418c90(void* param_1)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_027c0fd8;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_027c0fd8, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_027c0fd8 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 4) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 4;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x54) = 0;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_027c0fe0;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_027c0fe0, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_027c0fe0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 2) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 2;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x54) = 0;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_027c0fe8;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_027c0fe8, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_027c0fe8 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 1) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x54) = 0;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_027c0ff0;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_027c0ff0, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_027c0ff0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 1) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x54) = 0;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_027c0ff8;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_027c0ff8, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_027c0ff8 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 3) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 3;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x54) = 0;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_02729620;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_02729620, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_02729620 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 3) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 3;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x54) = 0;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_02729638;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_02729638, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_02729638 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 1) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x54) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x59);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x59);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x59) = 1;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_027c1000;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_027c1000, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_027c1000 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 1) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 1;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x54);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x54) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x59);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x59);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x59) = 1;
    FUN_00d64910();
  }
  FUN_0141ace0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010f05c0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d50b20();
  pvVar5 = _pthread_getspecific(param_1);
  plVar3 = plVar4;
  lVar7 = g_02729560;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = g_02729560, lVar6 != 0)) {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_02729560 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  if (plVar3[8] != lVar7) {
    FUN_00d64850();
    lVar6 = plVar3[8];
    if (lVar6 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar7;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    iVar2 = (int)plVar4[10];
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    iVar2 = (int)plVar3[10];
  }
  if (iVar2 != 0) {
    FUN_00d64850();
    *(void*)(plVar3 + 10) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x55);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x55);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x55) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x56);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x56);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x56) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x57);
    plVar3 = plVar4;
  }
  else {
    plVar3 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar3 + 0x57);
  }
  if (cVar1 != '\0') {
    FUN_00d64850();
    *(void*)((int64_t)plVar3 + 0x57) = 0;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  else {
    plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    cVar1 = *(char *)((int64_t)plVar4 + 0x54);
  }
  if (cVar1 != '\x01') {
    FUN_00d64850();
    *(void*)((int64_t)plVar4 + 0x54) = 1;
    FUN_00d64910();
  }
  FUN_0141ace0();
  FUN_00d50b20();
  return;
}



// ============================================================
// 010cce30
// ============================================================
// Function: FUN_010cce30
// Address: 010cce30
// Size: 1374 bytes
// Class: MUAmplitudeAnalyzer
// String references:
//   "xn--"

uint64_t FUN_010cce30(byte *param_1,char *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  int64_t lVar7;
  byte *pbVar8;
  byte bVar9;
  char cVar10;
  byte *arg1;
  byte *pbVar11;
  byte bVar12;
  byte *this_ptr;
  byte *pbVar13;
  byte *pbVar14;
  int64_t lVar15;
  bool bVar16;
  char *pcVar6;
  
  if (((param_1 < (byte *)((int64_t)&MACH_HEADER.magic + 2)) || (*param_2 != '.')) &&
     (arg1 != (byte *)0x0)) {
    bVar9 = 1;
    if ((param_3 & 4) == 0) {
      pbVar4 = (byte *)0x0;
      iVar3 = 0;
      pbVar8 = arg1;
      pbVar14 = this_ptr;
      do {
        bVar1 = *pbVar14;
        if (bVar1 == 0x2a) {
          bVar16 = true;
          if (pbVar8 != (byte *)((int64_t)&MACH_HEADER.magic + 1)) {
            bVar16 = pbVar14[1] == 0x2e;
          }
          if (((pbVar4 != (byte *)0x0) || ((bVar9 & 8) != 0 || iVar3 != 0)) ||
             ((bVar9 & 1 | bVar16) != 1)) goto LAB_010cd0ff;
          bVar9 = bVar9 & 0xfe;
          iVar3 = 0;
          pbVar4 = pbVar14;
        }
        else {
          bVar5 = (bVar1 & 0xdf) + 0xbf;
          pcVar6 = (char *)(uint64_t)bVar5;
          if ((bVar5 < 0x1a) ||
             (pcVar6 = (char *)(uint64_t)(bVar1 - 0x30), (byte)(bVar1 - 0x30) < 10)) {
            if (((bVar9 & 1) != 0) &&
               (((byte *)((int64_t)&MACH_HEADER.magic + 3) < pbVar8 &&
                (iVar2 = _strncasecmp(pcVar6,(char *)&MACH_HEADER.cputype,param_3), iVar2 == 0)))) {
              bVar9 = 8;
            }
            bVar9 = bVar9 & 0xfa;
          }
          else if (bVar1 == 0x2e) {
            if ((bVar9 & 5) != 0) goto LAB_010cd0ff;
            iVar3 = iVar3 + 1;
            bVar9 = 1;
          }
          else {
            if ((bVar1 != 0x2d) || ((bVar9 & 1) != 0)) goto LAB_010cd0ff;
            bVar9 = bVar9 | 4;
          }
        }
        pbVar14 = pbVar14 + 1;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    else {
      pbVar4 = (byte *)0x0;
      iVar3 = 0;
      pbVar8 = this_ptr;
      pbVar14 = arg1;
      do {
        bVar1 = *pbVar8;
        if (bVar1 == 0x2a) {
          bVar16 = true;
          if (pbVar14 != (byte *)((int64_t)&MACH_HEADER.magic + 1)) {
            bVar16 = pbVar8[1] == 0x2e;
          }
          if (((pbVar4 != (byte *)0x0) || ((bVar9 & 8) != 0 || iVar3 != 0)) ||
             ((bVar16 & bVar9) != 1)) goto LAB_010cd0ff;
          bVar9 = bVar9 & 0xfe;
          iVar3 = 0;
          pbVar4 = pbVar8;
        }
        else {
          bVar5 = (bVar1 & 0xdf) + 0xbf;
          pcVar6 = (char *)(uint64_t)bVar5;
          if ((bVar5 < 0x1a) ||
             (pcVar6 = (char *)(uint64_t)(bVar1 - 0x30), (byte)(bVar1 - 0x30) < 10)) {
            if (((bVar9 & 1) != 0) &&
               (((byte *)((int64_t)&MACH_HEADER.magic + 3) < pbVar14 &&
                (iVar2 = _strncasecmp(pcVar6,(char *)&MACH_HEADER.cputype,param_3), iVar2 == 0)))) {
              bVar9 = 8;
            }
            bVar9 = bVar9 & 0xfa;
          }
          else if (bVar1 == 0x2d) {
            if ((bVar9 & 1) != 0) goto LAB_010cd0ff;
            bVar9 = bVar9 | 4;
          }
          else {
            if ((bVar1 != 0x2e) || ((bVar9 & 5) != 0)) goto LAB_010cd0ff;
            iVar3 = iVar3 + 1;
            bVar9 = 1;
          }
        }
        pbVar8 = pbVar8 + 1;
        pbVar14 = pbVar14 + -1;
      } while (pbVar14 != (byte *)0x0);
    }
    if ((((bVar9 & 5) == 0) && (1 < iVar3)) && (pbVar4 != (byte *)0x0)) {
      lVar15 = (int64_t)pbVar4 - (int64_t)this_ptr;
      pbVar8 = this_ptr + (int64_t)arg1;
      pbVar13 = pbVar8 + ~(uint64_t)pbVar4;
      pbVar14 = pbVar13 + lVar15;
      if (param_1 < pbVar14) {
        return 0;
      }
      if (lVar15 != 0) {
        lVar7 = 0;
        do {
          bVar9 = this_ptr[lVar7];
          if (bVar9 == 0) {
            return 0;
          }
          bVar1 = param_2[lVar7];
          if (bVar9 != bVar1) {
            bVar5 = bVar9 + 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar5 = bVar9;
            }
            pbVar14 = (byte *)(uint64_t)bVar1;
            bVar9 = bVar1 + 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar9 = bVar1;
            }
            if (bVar5 != bVar9) {
              return 0;
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar15 != lVar7);
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar8 = pbVar8 + -(int64_t)pbVar4;
        pbVar11 = (byte *)((int64_t)&MACH_HEADER.magic + 1);
        do {
          bVar9 = (param_2 +
                  (int64_t)
                  (param_1 + (int64_t)pbVar4 + (-(int64_t)this_ptr - (int64_t)arg1)))
                  [(int64_t)pbVar11];
          if (bVar9 == 0) {
            return 0;
          }
          bVar1 = pbVar4[(int64_t)pbVar11];
          if (bVar9 != bVar1) {
            bVar5 = bVar9 + 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar5 = bVar9;
            }
            bVar12 = bVar1 + 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar12 = bVar1;
            }
            bVar9 = bVar1;
            if (bVar5 != bVar12) {
              return 0;
            }
          }
          pbVar14 = (byte *)(uint64_t)bVar9;
          pbVar11 = pbVar11 + 1;
        } while (pbVar8 != pbVar11);
      }
      lVar7 = (int64_t)param_1 - (int64_t)pbVar13;
      if ((lVar15 == 0) && (pbVar4[1] == 0x2e)) {
        if (lVar7 == 0) {
          return 0;
        }
        cVar10 = (char)((param_3 & 8) >> 3);
      }
      else {
        cVar10 = '\0';
        if ((byte *)((int64_t)&MACH_HEADER.magic + 3) < param_1) {
          iVar3 = _strncasecmp((char *)pbVar14,(char *)&MACH_HEADER.cputype,(size_t)pbVar8);
          cVar10 = '\0';
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      pcVar6 = param_2 + lVar15;
      if ((param_2 + lVar7 == pcVar6 + 1) && (*pcVar6 == '*')) {
        return 1;
      }
      if (lVar7 == lVar15) {
        return 1;
      }
      pbVar8 = (byte *)0x0;
      if (cVar10 == '\0') {
        while (((cVar10 = pcVar6[(int64_t)pbVar8], (byte)(cVar10 - 0x30U) < 10 ||
                ((byte)(cVar10 + 0xbfU) < 0x1a)) ||
               ((cVar10 == '-' || ((byte)(cVar10 + 0x9fU) < 0x1a))))) {
          pbVar8 = pbVar8 + 1;
          if (param_1 + (1 - (int64_t)arg1) == pbVar8) {
            return 1;
          }
        }
      }
      else {
        while ((((cVar10 = pcVar6[(int64_t)pbVar8], (byte)(cVar10 - 0x30U) < 10 ||
                 ((byte)(cVar10 + 0xbfU) < 0x1a)) || ((byte)(cVar10 + 0x9fU) < 0x1a)) ||
               ((byte)(cVar10 - 0x2dU) < 2))) {
          pbVar8 = pbVar8 + 1;
          if (param_1 + (1 - (int64_t)arg1) == pbVar8) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
LAB_010cd0ff:
  if ((short)param_3 < 0) {
    pbVar8 = arg1;
    pbVar14 = this_ptr;
    if (param_1 <= arg1 && (int64_t)arg1 - (int64_t)param_1 != 0) {
      pbVar4 = this_ptr + ((int64_t)arg1 - (int64_t)param_1);
      if ((param_3 & 0x10) == 0) {
        do {
          if (*pbVar14 == 0) goto LAB_010cd1d5;
          pbVar8 = pbVar8 + -1;
          pbVar14 = pbVar14 + 1;
        } while (param_1 < pbVar8);
      }
      else {
        do {
          if ((*pbVar14 == 0) || (*pbVar14 == 0x2e)) goto LAB_010cd1d5;
          pbVar14 = pbVar14 + 1;
          pbVar8 = pbVar8 + -1;
        } while (param_1 < pbVar8);
      }
      goto LAB_010cd1e1;
    }
LAB_010cd1d5:
    pbVar4 = pbVar14;
    if (pbVar8 == param_1) goto LAB_010cd1e1;
  }
  pbVar4 = this_ptr;
  if (arg1 != param_1) {
    return 0;
  }
LAB_010cd1e1:
  if (param_1 != (byte *)0x0) {
    pbVar8 = (byte *)0x0;
    do {
      bVar9 = pbVar4[(int64_t)pbVar8];
      if (bVar9 == 0) {
        return 0;
      }
      bVar1 = param_2[(int64_t)pbVar8];
      if (bVar9 != bVar1) {
        bVar5 = bVar9 + 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar5 = bVar9;
        }
        bVar9 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if (bVar5 != bVar9) {
          return 0;
        }
      }
      pbVar8 = pbVar8 + 1;
    } while (param_1 != pbVar8);
  }
  return 1;
}



// ============================================================
// 010cdb40
// ============================================================
// Function: FUN_010cdb40
// Address: 010cdb40
// Size: 1415 bytes
// Class: MUAmplitudeAnalyzer

void FUN_010cdb40(void)

{
  FUN_00cec890();
  FUN_01e72c40();
  FUN_00aef290();
  FUN_010ce0d0();
  FUN_010ce360();
  FUN_010ce440();
  FUN_010ce760();
  FUN_010ce910();
  FUN_010cec50();
  FUN_010cedf0();
  FUN_010cef10();
  FUN_010cefe0();
  FUN_010cf0d0();
  FUN_010cf300();
  FUN_010cf520();
  FUN_010cf7b0();
  FUN_010cf8a0();
  FUN_010cfaf0();
  FUN_010cfd00();
  FUN_010cffa0();
  FUN_010d0100();
  FUN_010d0460();
  FUN_010d05b0();
  FUN_010d0750();
  FUN_010d0810();
  FUN_010d0a50();
  FUN_010d0be0();
  FUN_010d0e50();
  FUN_010d0fe0();
  FUN_010d12c0();
  FUN_010d1480();
  FUN_010d1620();
  FUN_010d1710();
  FUN_010d1960();
  FUN_010d1b00();
  FUN_010d1bd0();
  FUN_010d1dd0();
  FUN_010d2040();
  FUN_010d2220();
  FUN_010d23d0();
  FUN_010d24c0();
  FUN_010d2640();
  FUN_010d2700();
  FUN_010d2900();
  FUN_010d2a50();
  FUN_010d2b20();
  FUN_010d2cc0();
  FUN_010d2e70();
  FUN_010d3110();
  FUN_010d32e0();
  FUN_010d33a0();
  FUN_000e9350();
  FUN_010d3470();
  FUN_010d3740();
  FUN_010d3920();
  FUN_010d3ae0();
  FUN_010d3da0();
  FUN_010d3ec0();
  FUN_010d3f90();
  FUN_010d4170();
  FUN_010d4360();
  FUN_010d4610();
  FUN_010d48d0();
  FUN_010d4a70();
  FUN_010d4c80();
  FUN_010d4df0();
  FUN_010d4ec0();
  FUN_010d4fc0();
  FUN_010d5080();
  FUN_010d52b0();
  FUN_010d54e0();
  FUN_010d5750();
  FUN_010d5900();
  FUN_010d5ba0();
  FUN_010d5de0();
  FUN_010d6040();
  FUN_010d6140();
  FUN_010d6390();
  FUN_010d6560();
  FUN_010d6710();
  FUN_010d68a0();
  FUN_010d6970();
  FUN_010d6b40();
  FUN_010d6c10();
  FUN_010d6eb0();
  FUN_010d7110();
  FUN_010d73f0();
  FUN_010d7590();
  FUN_010d78b0();
  FUN_010d7b20();
  FUN_010d7e50();
  FUN_010d80b0();
  FUN_010d8290();
  FUN_010d83e0();
  FUN_010d85a0();
  FUN_010d8740();
  FUN_010d8830();
  FUN_010d8920();
  FUN_010d8c50();
  FUN_010d8e90();
  FUN_010d9030();
  FUN_010d91d0();
  FUN_010d9360();
  FUN_010d94f0();
  FUN_010d9670();
  FUN_010d98e0();
  FUN_010d9a90();
  FUN_010d9ba0();
  FUN_010d9e30();
  FUN_010d9f10();
  FUN_010da0a0();
  FUN_010da410();
  FUN_010da4e0();
  FUN_010da6a0();
  FUN_010da8c0();
  FUN_010daa80();
  FUN_010dac20();
  FUN_010dacf0();
  FUN_010daeb0();
  FUN_010daf80();
  FUN_010db060();
  FUN_010db1c0();
  FUN_010db290();
  FUN_010db4b0();
  FUN_010db670();
  FUN_010db760();
  FUN_010db830();
  FUN_010db9a0();
  FUN_010dbb60();
  FUN_010dbd10();
  FUN_010dbec0();
  FUN_010dc060();
  FUN_010dc2c0();
  FUN_010dc510();
  FUN_010dc5e0();
  FUN_010dc7b0();
  FUN_010dca10();
  FUN_010dcc30();
  FUN_010dcd80();
  FUN_010dd030();
  FUN_010dd260();
  FUN_010dd560();
  FUN_010dd790();
  FUN_010dda50();
  FUN_010ddb20();
  FUN_0053c510();
  FUN_010ddd20();
  FUN_010ddf30();
  FUN_010de0d0();
  FUN_010de270();
  FUN_010de3d0();
  FUN_010de590();
  FUN_0057cff0();
  FUN_010de740();
  FUN_010de970();
  FUN_010deba0();
  FUN_010ded60();
  FUN_010def50();
  FUN_010df180();
  FUN_010df250();
  FUN_010df410();
  FUN_010df5b0();
  FUN_010df770();
  FUN_010df870();
  FUN_010dfa40();
  FUN_010dfd50();
  FUN_010dfe20();
  FUN_010dff10();
  FUN_010dffe0();
  FUN_010e0210();
  FUN_010e0390();
  FUN_010e0640();
  FUN_010e0710();
  FUN_010e0970();
  FUN_010e0b20();
  FUN_010e0ce0();
  FUN_010e0eb0();
  FUN_010e1090();
  FUN_010e1230();
  FUN_010e13f0();
  FUN_010e15b0();
  FUN_010e1750();
  FUN_010e1910();
  FUN_010e19e0();
  FUN_010e1b80();
  FUN_010e1c60();
  FUN_010e1f30();
  FUN_010e20d0();
  FUN_010e2270();
  FUN_010e2480();
  FUN_010e2560();
  FUN_010e27a0();
  FUN_010e2970();
  FUN_010e2a40();
  FUN_010e2bf0();
  FUN_010e2da0();
  FUN_010e2fa0();
  FUN_010e3220();
  FUN_00515a80();
  FUN_010e3410();
  FUN_010e3640();
  FUN_010e3870();
  FUN_010e3a90();
  FUN_010e3c30();
  FUN_010e3d00();
  FUN_010e3ed0();
  FUN_010e3fd0();
  FUN_010e4270();
  FUN_010e44f0();
  FUN_010e46c0();
  FUN_010e4870();
  FUN_010e4b80();
  FUN_010e4d40();
  FUN_010e4fd0();
  FUN_010e50c0();
  FUN_010e51f0();
  FUN_010e5470();
  FUN_010e55a0();
  FUN_010e57f0();
  FUN_010e5940();
  FUN_010e5a40();
  FUN_010e5ca0();
  FUN_010e5d70();
  FUN_010e5e50();
  FUN_010e5f10();
  FUN_010e6070();
  FUN_010e6230();
  FUN_010e6480();
  FUN_010e6640();
  FUN_010e6890();
  FUN_010e6a50();
  FUN_010e6ca0();
  FUN_010e6e60();
  FUN_010e70b0();
  FUN_010e7270();
  FUN_010e74c0();
  FUN_010e77b0();
  FUN_010e7960();
  FUN_010e7c60();
  FUN_010e7d30();
  FUN_010e7f40();
  FUN_010e8100();
  FUN_010e8400();
  FUN_010e84d0();
  FUN_010e8730();
  FUN_010e8950();
  FUN_010e8bb0();
  FUN_010e8ea0();
  FUN_005dbc40();
  FUN_010e8f80();
  FUN_010e92b0();
  FUN_010e9380();
  FUN_010e9490();
  FUN_010e9640();
  FUN_010e9870();
  FUN_010e9af0();
  FUN_010e9c90();
  FUN_010e9e50();
  FUN_010ea020();
  FUN_010ea1b0();
  FUN_010ea3b0();
  FUN_010ea610();
  FUN_00816320();
  FUN_010ea810();
  FUN_010ea9b0();
  FUN_010eac00();
  FUN_010eaf00();
  FUN_010eb0a0();
  FUN_010eb240();
  FUN_010eb400();
  FUN_010eb6b0();
  FUN_010eb850();
  FUN_010ebb80();
  FUN_010ebd10();
  FUN_010ebf60();
  FUN_010ec100();
  FUN_008171e0();
  FUN_00817380();
  FUN_00817690();
  FUN_010ec380();
  FUN_010ec5e0();
  FUN_00817820();
  return;
}



// ============================================================
// 014178f0
// ============================================================
// Function: FUN_014178f0
// Address: 014178f0
// Size: 1563 bytes
// Class: MUAmplitudeAnalyzer

void FUN_014178f0(double param_1,double param_2)

{
  double dVar1;
  void*puVar2;
  double dVar3;
  void*puVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  void* pVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int64_t *this_ptr;
  uint32_t uVar15;
  void*local_e0;
  int64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  float local_ac;
  double local_a8;
  void*local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  local_a8 = param_1;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar7 + 7) = 0;
  *(void*)((int64_t)puVar7 + 0x3c) = 0;
  *(void*)(puVar7 + 8) = 0;
  pVar11 = 0x25dc9e8;
  *puVar7 = &g_025dc9e8;
  puVar7[9] = 0;
  puVar7[10] = 0;
  (*g_025dca00)();
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(g_023934d0,0));
  lVar9 = this_ptr[0x10];
  iVar6 = *(int *)(lVar9 + 0x18);
  iVar12 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar12 = iVar6;
  }
  if (iVar12 >> 2 < (int)((local_a8 + param_2) * g_023934d0 + g_0238fee8)) {
    FUN_00d50b00();
    local_40 = '\0';
    FUN_00c8e4f0();
    puVar4 = local_a0;
    if (local_98 == '\0') {
      if (((local_a0 != (void*)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
         (local_a0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98 = '\0';
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar15 = FUN_00d50b20();
    FUN_00c8e340(uVar15,0);
    puVar2 = (void*)this_ptr[0x10];
    if (puVar2 != puVar4) {
      if (puVar4 != (void*)0x0) {
        FUN_00d50b00();
      }
      this_ptr[0x10] = (int64_t)puVar4;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    local_48 = lVar9;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c8e340(iVar12 >> 2,0);
  }
  uVar13 = this_ptr[0x10];
  local_d8 = (int64_t)(int)(g_023934d0 * local_a8) * 4 + *(int64_t *)(uVar13 + 0x10);
  pvVar8 = _pthread_getspecific((void*)uVar13);
  if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
    lVar9 = this_ptr[0x10];
  }
  else {
    lVar9 = this_ptr[0x10];
  }
  if (lVar9 != 0) {
    local_68 = 0;
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar9;
  FUN_013eb890();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  iVar6 = (int)(param_2 * g_023934d0);
  if (0 < iVar6) {
    local_ac = (float)iVar6;
    lVar9 = 0;
    do {
      dVar1 = (double)this_ptr[0x11];
      plVar14 = (int64_t *)this_ptr[0xc];
      pvVar8 = _pthread_getspecific((void*)uVar13);
      if (pvVar8 != (void *)0x0) {
        plVar14 = (int64_t *)this_ptr[0xc];
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
      }
      dVar3 = (double)(**(code **)(*plVar14 + 0x370))();
      uVar13 = (uint64_t)(uint)(int)(double)this_ptr[0x11];
      FUN_01418260(uVar13,(int64_t)(int)((double)(int)lVar9 * dVar1 + dVar3 * local_a8));
      uVar15 = (**(code **)(g_02786500 + 0x10))();
      *(void*)(local_d8 + lVar9 * 4) = uVar15;
      cVar5 = FUN_00e34a50();
      if (cVar5 != '\0') {
        FUN_00e34a60();
        goto LAB_01417e85;
      }
      pvVar8 = _pthread_getspecific((void*)uVar13);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_0124c5d0();
      if (cVar5 == '\0') {
        (**(code **)(*this_ptr + 0x380))((float)(int)lVar9 / local_ac);
      }
      lVar9 = lVar9 + 1;
    } while (iVar6 != (int)lVar9);
  }
  lVar9 = g_027c0df8;
  if (g_027c0df8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = puVar7;
  FUN_00083ea0(2,&local_e0);
  FUN_0036bfe0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_a0 = (void*)&g_0253d630;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = &g_024c5048;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_d0 = g_027c0df0;
  if (g_027c0df0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  FUN_00d50b00();
  local_c0 = local_48;
  local_b8 = '\0';
  FUN_00d40470(&local_c0,&stack0xffffffffffffffa0,1,3);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_01417e85:
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01416f10
// ============================================================
// Function: FUN_01416f10
// Address: 01416f10
// Size: 1215 bytes
// Class: MUAmplitudeAnalyzer
// String references:
//   "MUAmplitudeAnalyzer"

int64_t * FUN_01416f10(void* param_1)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t *this_ptr;
  bool bVar8;
  int64_t *local_90;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar6 = local_58;
  if ((g_028ace68 == (void*)0x0) || (g_028ace71 == '\0')) {
    FUN_00e8cb50();
    if (g_028ace68 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_025e01b8;
      FUN_00d500e0();
      bVar8 = g_028ace68 == (void*)0x0;
      g_028ace68 = puVar3;
      if (((bVar8) || (FUN_00d50b20(), g_028ace68 != (void*)0x0)) && (g_028ace70 == '\0')
         ) {
        g_028ace70 = '\x01';
        FUN_00e8cb90();
      }
      g_028ace71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ace71 = '\x01';
      FUN_00e8cb70();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124e0d0();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01417231;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_01417231;
  local_58 = (int64_t *)0x0;
  local_40 = -1;
  while( true ) {
    local_50 = '\0';
    lVar5 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)plVar6 + 0xc) <= local_40) break;
    local_58 = *(int64_t **)(plVar6[2] + 8 + lVar5 * 8);
    local_90 = local_58;
    if ((g_0272a440 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_0272a390 = FUN_000fddb0();
      g_0272a378 = "MUAmplitudeAnalyzer";
      g_0272a380 = 0x90;
      g_0272a388 = FUN_0079c0e0;
      g_0272a398 = 0;
      ram_000000000272a3a0 = 0;
      g_0272a3a8 = 0;
      g_0272a420 = 0;
      ram_000000000272a428 = 0;
      g_0272a430 = 0;
      g_0272a432 = 1;
      g_0272a3b0 = 0;
      ram_000000000272a3b8 = 0;
      g_0272a3c0 = 0;
      ram_000000000272a3c8 = 0;
      g_0272a3d0 = 0;
      ram_000000000272a3d8 = 0;
      g_0272a3e0 = 0;
      ram_000000000272a3e8 = 0;
      g_0272a3f0 = 0;
      ram_000000000272a3f8 = 0;
      g_0272a400 = 0;
      ram_000000000272a408 = 0;
      g_0272a410 = 0;
      ram_000000000272a418 = 0;
      g_0272a43b = 0;
      g_0272a433 = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (int64_t **)&g_02802688;
    if (local_58 != (int64_t *)0x0) {
      (**(code **)(*local_58 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar7 = &local_90;
      if (cVar1 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
    }
    if (((*pplVar7 != (int64_t *)0x0) && (cVar1 = FUN_00e34240(), cVar1 == '\0')) &&
       (cVar1 = FUN_00e34a50(), cVar1 == '\0')) {
      *(void*)(this_ptr + 1) = 0;
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)local_58;
      *(void*)(this_ptr + 1) = 1;
      FUN_01418a70();
      FUN_00d50b20();
      return this_ptr;
    }
  }
  FUN_01418a70();
  param_1 = (void*)plVar6;
  FUN_00d50b20();
LAB_01417231:
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)plVar6 + 0x2f) = 0;
  *(void*)((int64_t)plVar6 + 0x37) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  *(void*)((int64_t)plVar6 + 0x49) = 0;
  *(void*)((int64_t)plVar6 + 0x51) = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  *plVar6 = (int64_t)&g_025dfd88;
  plVar6[2] = (int64_t)&g_025e0148;
  plVar6[3] = (int64_t)&g_025e0180;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  FUN_00d500e0();
  FUN_013fb180();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_013fb3d0();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x398))();
  *this_ptr = (int64_t)plVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01417540
// ============================================================
// Function: FUN_01417540
// Address: 01417540
// Size: 778 bytes
// Class: MUAmplitudeAnalyzer

void FUN_01417540(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  double dVar5;
  double dVar6;
  double local_40;
  int64_t local_38;
  char local_30;
  
  plVar4 = *(int64_t **)(this_ptr + 0x60);
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    plVar4 = *(int64_t **)(this_ptr + 0x60);
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  dVar5 = (double)(**(code **)(*plVar4 + 0x370))();
  *(double *)(this_ptr + 0x88) = dVar5 / g_023934d0;
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar3 = *(int64_t *)(this_ptr + 0x80);
  if (lVar3 == local_38) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x80) = local_38;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(int64_t *)(this_ptr + 0x78);
  if (lVar3 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x78) = local_38;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(int64_t **)(this_ptr + 0x60);
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    plVar4 = *(int64_t **)(this_ptr + 0x60);
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  dVar6 = (double)(**(code **)(*plVar4 + 0x398))();
  dVar5 = 0.0;
  do {
    local_40 = dVar6;
    FUN_014178f0(dVar5);
    while( true ) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0124c5d0();
      if ((cVar1 == '\0') || (cVar1 = FUN_00e34a50(), cVar1 != '\0')) {
        cVar1 = FUN_00e34a50();
        if (cVar1 == '\0') {
          plVar4 = *(int64_t **)(this_ptr + 0x60);
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            plVar4 = *(int64_t **)(this_ptr + 0x60);
            lVar3 = FUN_00e8b990();
            if (lVar3 != 0) {
              plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
          }
          dVar5 = (double)(**(code **)(*plVar4 + 0x398))();
          if (local_40 < dVar5) {
            FUN_014178f0(local_40,dVar5 - local_40);
          }
        }
        else {
          FUN_00e34a60();
        }
        return;
      }
      plVar4 = *(int64_t **)(this_ptr + 0x60);
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        plVar4 = *(int64_t **)(this_ptr + 0x60);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      dVar6 = (double)(**(code **)(*plVar4 + 0x398))();
      if ((local_40 < dVar6) && (dVar5 = local_40, g_023934c8 < dVar6 - local_40)) break;
      FUN_00da68a0(g_023934c8);
    }
  } while( true );
}



// ============================================================
// 01418260
// ============================================================
// Function: FUN_01418260
// Address: 01418260
// Size: 631 bytes
// Class: MUAmplitudeAnalyzer

void FUN_01418260(void* param_1,uint64_t param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t this_ptr;
  int iVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  int64_t *local_58;
  char local_50;
  
  pVar7 = param_1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_0124c6a0();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      uVar11 = FUN_00d50b00();
      goto LAB_01418303;
    }
LAB_014183a2:
    bVar1 = true;
  }
  else {
    if (local_58 == (int64_t *)0x0) goto LAB_014183a2;
LAB_01418303:
    cVar2 = (**(code **)(*local_58 + 0x3c8))(uVar11,param_1);
    if (cVar2 != '\0') {
      FUN_00ae96c0(extraout_XMM0_Qa,param_1);
      iVar3 = FUN_013fbeb0();
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          uVar11 = param_2;
          (**(code **)(*local_58 + 0x3d8))(param_2,iVar8,param_1);
          pVar7 = (void*)uVar11;
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      (**(code **)(g_02786500 + 0x20))(g_02390124 / (float)iVar3);
      bVar1 = false;
      goto LAB_01418473;
    }
    bVar1 = false;
  }
  plVar9 = *(int64_t **)(this_ptr + 0x60);
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x60);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  plVar10 = *(int64_t **)(this_ptr + 0x60);
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar10 = *(int64_t **)(this_ptr + 0x60);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  uVar4 = (**(code **)(*plVar10 + 0x3a0))();
  pVar7 = 0;
  (**(code **)(*plVar9 + 0x388))(0,(int)g_0238fee8,uVar4,param_2);
LAB_01418473:
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124c620();
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 010ce440
// ============================================================
// Function: FUN_010ce440
// Address: 010ce440
// Size: 501 bytes
// Class: MUAmplitudeAnalyzer
// String references:
//   "MU12TETPitchSystem"

void FUN_010ce440(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_a8;
  int64_t local_98;
  int64_t local_88;
  
  if ((g_0278c570 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027c3448 = FUN_0015ea50();
    g_027c3430 = "MU12TETPitchSystem";
    g_027c3438 = 0x68;
    g_027c3440 = FUN_0015ec50;
    g_027c3450 = 0;
    ram_00000000027c3458 = 0;
    g_027c3460 = 0;
    ram_00000000027c3468 = 0;
    g_027c3470 = 0;
    ram_00000000027c3478 = 0;
    g_027c3480 = 0;
    ram_00000000027c3488 = 0;
    g_027c3490 = 0;
    ram_00000000027c3498 = 0;
    g_027c34a0 = 0;
    ram_00000000027c34a8 = 0;
    g_027c34b0 = 0;
    ram_00000000027c34b8 = 0;
    g_027c34c0 = 0;
    ram_00000000027c34c8 = 0;
    g_027c34d0 = 0;
    ram_00000000027c34d8 = 0;
    g_027c34e0 = 0;
    _ram_00000000027c34e8 = 0;
    g_027c34f0 = 0;
    ___cxa_guard_release();
  }
  if (g_027c34eb == '\0') {
    FUN_010e13f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_010ed520();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



// ============================================================
// 010ce910
// ============================================================
// Function: FUN_010ce910
// Address: 010ce910
// Size: 586 bytes
// Class: MUAmplitudeAnalyzer
// String references:
//   "MUAmplitudeAnalyzer"

void FUN_010ce910(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_d0;
  int64_t local_c8;
  
  if ((g_0272a440 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0272a390 = FUN_000fddb0();
    g_0272a378 = "MUAmplitudeAnalyzer";
    g_0272a380 = 0x90;
    g_0272a388 = FUN_0079c0e0;
    g_0272a398 = 0;
    ram_000000000272a3a0 = 0;
    g_0272a3a8 = 0;
    g_0272a420 = 0;
    ram_000000000272a428 = 0;
    g_0272a430 = 0;
    g_0272a432 = 1;
    g_0272a3b0 = 0;
    ram_000000000272a3b8 = 0;
    g_0272a3c0 = 0;
    ram_000000000272a3c8 = 0;
    g_0272a3d0 = 0;
    ram_000000000272a3d8 = 0;
    g_0272a3e0 = 0;
    ram_000000000272a3e8 = 0;
    g_0272a3f0 = 0;
    ram_000000000272a3f8 = 0;
    g_0272a400 = 0;
    ram_000000000272a408 = 0;
    g_0272a410 = 0;
    ram_000000000272a418 = 0;
    g_0272a43b = 0;
    g_0272a433 = 0;
    ___cxa_guard_release();
  }
  if (g_0272a433 == '\0') {
    FUN_010cedf0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_010ee860();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_01416d50();
    if (local_c8 != 0) {
      FUN_00d50b20();
    }
    if (local_d0 != 0) {
      FUN_00d50b20();
    }
    FUN_000fe370();
    FUN_000fe370();
  }
  return;
}

