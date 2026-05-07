// Function: FUN_01661910
// Address: 01661910
// Size: 723 bytes
// Class: MUAraAudioSource
// String references:
//   "_composition"
//   "MUAraAudioSource"
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


void FUN_01661910(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  void*arg1;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = FUN_00d50f50();
  if ((g_0272a630 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar4 != 0)) {
    g_02708978 = FUN_0049c750();
    g_02708960 = "MUAraAudioSource";
    g_02708968 = 0x138;
    param_1 = 0x49c720;
    g_02708970 = FUN_0049c720;
    g_02708980 = 0;
    ram_0000000002708988 = 0;
    g_02708990 = 0;
    ram_0000000002708998 = 0;
    g_027089a0 = 0;
    ram_00000000027089a8 = 0;
    g_027089b0 = 0;
    ram_00000000027089b8 = 0;
    g_027089c0 = 0;
    ram_00000000027089c8 = 0;
    g_027089d0 = 0;
    ram_00000000027089d8 = 0;
    g_027089e0 = 0;
    ram_00000000027089e8 = 0;
    g_027089f0 = 0;
    ram_00000000027089f8 = 0;
    g_02708a00 = 0;
    ram_0000000002708a08 = 0;
    g_02708a10 = 0;
    ram_0000000002708a18 = 0;
    g_02708a20 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar5 = FUN_00e85ef0(uVar8,1);
  if (lVar5 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x590))();
  if (cVar3 == '\0') goto LAB_01661b1d;
  local_50 = plVar2;
  local_48 = '\0';
  pplVar7 = &local_40;
  (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_50);
  plVar1 = local_40;
  FUN_000be210();
  if (plVar1 == (int64_t *)0x0) {
LAB_01661a57:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01661a57;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505de0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
  }
LAB_01661b1d:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

