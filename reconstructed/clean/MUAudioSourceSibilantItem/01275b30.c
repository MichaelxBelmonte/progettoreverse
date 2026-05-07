// Function: FUN_01275b30
// Address: 01275b30
// Size: 1437 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01275b30(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char *pcVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *arg1;
  void*this_ptr;
  double dVar9;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar4 = (int64_t *)*arg1;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    plVar4 = (int64_t *)*arg1;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
  }
  dVar9 = (double)(**(code **)(*plVar4 + 0x398))();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25c86c0;
  *puVar3 = &g_025c86c0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  (*g_025c86d8)();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x1e] != dVar9) || (NAN((double)plVar4[0x1e]) || NAN(dVar9)))
    goto LAB_01275c4c;
  }
  else {
    plVar5 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x1e] != dVar9) || (NAN((double)plVar5[0x1e]) || NAN(dVar9))) {
LAB_01275c4c:
      FUN_00d64850();
      plVar5[0x1e] = (int64_t)dVar9;
      FUN_00d64910();
    }
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x18] == dVar9) && (!NAN((double)plVar4[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  else {
    plVar5 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x18] == dVar9) && (!NAN((double)plVar5[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  FUN_00d64850();
  plVar5[0x18] = (int64_t)dVar9;
  FUN_00d64910();
LAB_01275cf6:
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265bc0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  plVar5 = plVar4;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar5 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  FUN_013f82a0(g_0238fee8,plVar5[0x1e]);
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  FUN_01265f70();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  local_38[0] = local_48[0];
  pcVar6 = local_38;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  FUN_00d23310();
  pcVar6 = local_40;
  pcVar8 = local_48;
  if (local_48[0] == '\0') {
    pcVar8 = pcVar6;
  }
  local_40[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar7 = (void*)pcVar6;
  if (local_40[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef3f0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd9a0();
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

