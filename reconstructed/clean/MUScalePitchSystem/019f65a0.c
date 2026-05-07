// Function: FUN_019f65a0
// Address: 019f65a0
// Size: 3099 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void* FUN_019f65a0(code *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar8;
  uint64_t local_108;
  uint64_t local_100;
  int64_t local_f8;
  char local_f0;
  uint32_t local_e4;
  int64_t *local_e0;
  char local_d8;
  uint64_t local_c8;
  uint64_t local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*arg1 + 0xa20))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_019f66cc;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_019f66cc:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_019f70fa;
  }
  local_80 = FUN_00e7bdb0();
  local_c8 = FUN_00e7bdb0();
  local_e4 = 0xffffffff;
  FUN_019f76e0();
  local_d8 = '\0';
  local_e0 = (int64_t *)0x0;
  pplVar8 = &local_40;
  (**(code **)(*arg1 + 0xa28))();
  plVar1 = local_40;
  if ((g_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_0270ab28 = FUN_0015ea50();
    g_0270ab10 = "MUScalePitchSystem";
    g_0270ab18 = 0x78;
    param_1 = FUN_0015ecf0;
    g_0270ab20 = FUN_0015ecf0;
    g_0270ab30 = 0;
    ram_000000000270ab38 = 0;
    g_0270ab40 = 0;
    ram_000000000270ab48 = 0;
    g_0270ab50 = 0;
    ram_000000000270ab58 = 0;
    g_0270ab60 = 0;
    ram_000000000270ab68 = 0;
    g_0270ab70 = 0;
    ram_000000000270ab78 = 0;
    g_0270ab80 = 0;
    ram_000000000270ab88 = 0;
    g_0270ab90 = 0;
    ram_000000000270ab98 = 0;
    g_0270aba0 = 0;
    ram_000000000270aba8 = 0;
    g_0270abb0 = 0;
    ram_000000000270abb8 = 0;
    g_0270abc0 = 0;
    ram_000000000270abc8 = 0;
    g_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f66b0:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_019f66b0;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar7 = (void*)param_1;
  if (plVar1 != (int64_t *)0x0) {
    do {
      pVar7 = (void*)param_1;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510d50();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_00e7bdb0();
      param_1 = FUN_00e7bdb0();
      cVar2 = FUN_01252960(param_1,uVar5,&local_e0,&local_108);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar7 = (void*)param_1;
      if (cVar2 == '\0') goto LAB_019f684d;
    } while (local_e0 != plVar1);
    local_80 = local_108;
    local_c8 = local_100;
LAB_019f684d:
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar7 = (void*)plVar1;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    cVar2 = FUN_00d51e10();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_0173f250();
      if (cVar2 == '\0') {
        local_80 = FUN_00e7bdb0();
        local_c8 = FUN_00e7bdb0();
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01822eb0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar7 = (void*)plVar1;
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    cVar2 = FUN_00d51e10();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_40 = local_78;
      local_38 = '\0';
      FUN_012502a0(local_c8,local_80,1);
      pVar7 = (void*)local_c8;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018232c0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124ae40();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_019d4cc0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015104e0();
  (**(code **)(*arg1 + 0x620))();
  if (local_80 >> 0x20 == 0) {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510360(0,0,0);
  }
  else {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510b20(0,local_80,0,0);
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_019f70fa:
  FUN_00d50b20();
  return this_ptr;
}

