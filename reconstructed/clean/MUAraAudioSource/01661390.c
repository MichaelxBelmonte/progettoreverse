// Function: FUN_01661390
// Address: 01661390
// Size: 1102 bytes
// Class: MUAraAudioSource
// String references:
//   "GNList"
//   "MUAraAudioSource"
//   "_audioModifications"
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


void FUN_01661390(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = FUN_00d61ea0();
  if ((g_0272a630 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar5 != 0)) {
    g_02708978 = FUN_0049c750();
    g_02708960 = "MUAraAudioSource";
    g_02708968 = 0x138;
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
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x590))();
  if (cVar4 != '\0') {
    local_50 = plVar3;
    local_48 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_50);
    plVar2 = local_40;
    if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026cd478 = FUN_00d4fe50();
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      g_026cd470 = FUN_00018210;
      g_026cd480 = 0;
      ram_00000000026cd488 = 0;
      g_026cd490 = 0;
      g_026cd508 = 0;
      ram_00000000026cd510 = 0;
      g_026cd518 = 0;
      g_026cd51a = 6;
      g_026cd498 = 0;
      ram_00000000026cd4a0 = 0;
      g_026cd4a8 = 0;
      ram_00000000026cd4b0 = 0;
      g_026cd4b8 = 0;
      ram_00000000026cd4c0 = 0;
      g_026cd4c8 = 0;
      ram_00000000026cd4d0 = 0;
      g_026cd4d8 = 0;
      ram_00000000026cd4e0 = 0;
      g_026cd4e8 = 0;
      ram_00000000026cd4f0 = 0;
      g_026cd4f8 = 0;
      ram_00000000026cd500 = 0;
      g_026cd523 = 0;
      g_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if ((g_027c8358 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_027c82a8 = FUN_0049c750();
          g_027c8290 = "MUAraAudioModification";
          g_027c8298 = 0xb8;
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
        cVar4 = FUN_00e8da30();
        pplVar7 = &local_40;
        if (cVar4 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
    }
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    plVar2 = *pplVar7;
    if (plVar1 != plVar2) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar2 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0xb0) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(int64_t **)(this_ptr + 0xb0);
          *(int64_t **)(this_ptr + 0xb0) = *pplVar7;
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
        *(int64_t **)(this_ptr + 0xb0) = plVar2;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

