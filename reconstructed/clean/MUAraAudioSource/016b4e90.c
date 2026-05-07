// Function: FUN_016b4e90
// Address: 016b4e90
// Size: 1067 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioModification"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016b4e90(void* param_1,uint64_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void*this_ptr;
  int64_t *plVar5;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  if ((g_028ad850 == 0) || (g_028ad859 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad850 == 0) {
      if ((g_027c8358 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
        g_027c82a8 = FUN_0049c750();
        g_027c8290 = "MUAraAudioModification";
        g_027c8298 = 0xb8;
        param_1 = 0x166fbe0;
        g_027c82a0 = FUN_0166fbe0;
        g_027c82b0 = 0;
        ram_00000000027c82b8 = 0;
        g_027c82c0 = 0;
        ram_00000000027c82c8 = 0;
        g_027c82d0 = 0;
        ram_00000000027c82d8 = 0;
        g_027c82e0 = 0;
        ram_00000000027c82e8 = 0;
        g_027c82f0 = 0;
        ram_00000000027c82f8 = 0;
        g_027c8300 = 0;
        ram_00000000027c8308 = 0;
        g_027c8310 = 0;
        ram_00000000027c8318 = 0;
        g_027c8320 = 0;
        ram_00000000027c8328 = 0;
        g_027c8330 = 0;
        ram_00000000027c8338 = 0;
        g_027c8340 = 0;
        ram_00000000027c8348 = 0;
        g_027c8350 = 0;
        ___cxa_guard_release();
      }
      lVar2 = FUN_00e86210();
      lVar4 = g_028ad850;
      if (g_028ad850 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        g_028ad850 = lVar2;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if ((lVar2 != 0) && (g_028ad858 == '\0')) {
        g_028ad858 = '\x01';
        FUN_00e8cb90();
      }
      g_028ad859 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad859 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00c811e0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = local_40;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0164df60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01660830();
  FUN_0167ab60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01538000();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_016b4a70();
  if (*param_3 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016501d0();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_016b51f7;
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) goto LAB_016b51f7;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650af0();
    FUN_00d50b20();
  }
LAB_016b51f7:
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}

