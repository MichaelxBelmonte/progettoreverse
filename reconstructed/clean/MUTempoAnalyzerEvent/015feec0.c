// Function: FUN_015feec0
// Address: 015feec0
// Size: 530 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "%@%@"
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015feec0(void* param_1,int64_t *param_2)

{
  uint32_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar6 = (int64_t *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  lVar4 = g_026e3bc8;
  uVar1 = *(void*)(arg1 + 0x48);
  if (g_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  (**(code **)(*plVar6 + 0x3c8))(&local_90,uVar1,&local_80);
  puVar2 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  lVar4 = *(int64_t *)(arg1 + 0x40);
  if (lVar4 == 0) {
    FUN_00d8ede0();
  }
  else {
    local_38 = 0;
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar4;
  }
  local_98 = local_40;
  FUN_00083ea0(2,&local_98);
  FUN_00d94d80();
  local_70 = (void*)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

