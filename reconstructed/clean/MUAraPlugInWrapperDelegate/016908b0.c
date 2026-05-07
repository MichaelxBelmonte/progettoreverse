// Function: FUN_016908b0
// Address: 016908b0
// Size: 689 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_016908b0(void* param_1)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar5 = local_58;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_016909f2;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_016909f2;
  local_50 = '\0';
  local_58 = 0;
  local_40 = -1;
  while( true ) {
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(lVar5 + 0xc) <= local_40) break;
    local_58 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar4 * 8);
    FUN_0168eff0();
  }
  FUN_00277f20();
  param_1 = (void*)lVar5;
  FUN_00d50b20();
LAB_016909f2:
  plVar1 = *(int64_t **)(this_ptr + 0x28);
  if ((g_02723560 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_02723548 = "MUAraPlugInWrapperDelegate";
    g_02723558 = 0;
    g_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
    lVar5 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    lVar5 = FUN_00e86120();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar5) + 0x50))();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23f50();
  return;
}

