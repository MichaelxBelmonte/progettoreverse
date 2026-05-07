// Function: FUN_01671370
// Address: 01671370
// Size: 1437 bytes
// Class: MUAraAudioSource
// String references:
//   "GNList"
//   "MUAraAudioSource"
//   "_musicalContextData"
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


void FUN_01671370(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d61ea0();
  uVar8 = FUN_016be450();
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
    local_b0 = plVar3;
    local_a8 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_b0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_a0 = plVar3;
    local_98 = '\0';
    (**(code **)(*this_ptr + 0x1f0))(0,&local_a0,0);
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = g_027c8380;
  plVar1 = (int64_t *)*arg1;
  if (g_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar6;
  local_88 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = g_026fce90;
  if (iVar5 < 3) {
    plVar1 = (int64_t *)*arg1;
    if (g_026fce90 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar6;
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    uVar8 = extraout_XMM0_Da_01;
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar6 = g_026fce90;
    if (cVar4 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_026fce90 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar6;
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x578))(uVar8,&local_70);
      plVar1 = local_40;
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
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 != '\0') {
          if ((g_0272a630 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
            ___cxa_guard_release();
          }
          cVar4 = FUN_00e8da30();
          pplVar7 = &local_40;
          if (cVar4 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar2 = (int64_t *)this_ptr[9];
      plVar1 = *pplVar7;
      if (plVar2 != plVar1) {
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar1 == (int64_t *)0x0) {
            this_ptr[9] = 0;
          }
          else {
            FUN_00d50b00();
            plVar2 = (int64_t *)this_ptr[9];
            this_ptr[9] = (int64_t)*pplVar7;
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
          this_ptr[9] = (int64_t)plVar1;
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = g_027c8380;
  plVar1 = (int64_t *)*arg1;
  if (g_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar6;
  local_58 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 < 2) {
    *(void*)((int64_t)this_ptr + 0x51) = 1;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

