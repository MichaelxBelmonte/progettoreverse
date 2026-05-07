// Function: FUN_01690310
// Address: 01690310
// Size: 611 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01690310(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_016948c0();
  lVar1 = *arg1;
  FUN_00d21140();
  plVar2 = *(int64_t **)(this_ptr + 0x28);
  if ((g_02723560 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02723548 = "MUAraPlugInWrapperDelegate";
    g_02723558 = 0;
    g_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
    lVar4 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    lVar4 = FUN_00e86120();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)((int64_t)plVar2 + lVar4) + 0x48))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (lVar1 != 0) {
    FUN_00d50b00();
    for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
      FUN_0168f6a0();
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
  return;
}

