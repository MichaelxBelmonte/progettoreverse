// Function: FUN_016948c0
// Address: 016948c0
// Size: 775 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
//   "%p"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_016948c0(void)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  void*local_68;
  uint local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  if (*(char *)(this_ptr + 0xa4) != '\0') {
    *(void*)(this_ptr + 0xa4) = 0;
    plVar5 = *(int64_t **)(this_ptr + 0x28);
    if ((g_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_02723548 = "MUAraPlugInWrapperDelegate";
      g_02723558 = 0;
      g_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
      lVar2 = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
    }
    (**(code **)(*(int64_t *)((int64_t)plVar5 + lVar2) + 0x18))();
    local_58 = *(void*)(this_ptr + 0x98);
    local_60 = 1;
    pVar4 = 0x2576920;
    local_68 = &g_02576920;
    FUN_00d8cb40(&g_02576920,&local_68);
    local_50 = local_30;
    local_48 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    FUN_00bd69b0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_0167ab60();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01538260();
    local_40 = local_68;
    local_38 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_38 = '\x01';
    FUN_00bd78f0();
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = *(int64_t **)(this_ptr + 0x28);
    if ((g_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_02723548 = "MUAraPlugInWrapperDelegate";
      g_02723558 = 0;
      g_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
      lVar2 = *(int64_t *)(this_ptr + 0x98);
      plVar5 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
      plVar5 = (int64_t *)((int64_t)plVar5 + lVar2);
      lVar2 = *(int64_t *)(this_ptr + 0x98);
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x20))
              (*(void*)(this_ptr + 0xa6),*(void*)(this_ptr + 0xa5),
               *(void*)(this_ptr + 0xa7));
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

