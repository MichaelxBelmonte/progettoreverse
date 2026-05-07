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

