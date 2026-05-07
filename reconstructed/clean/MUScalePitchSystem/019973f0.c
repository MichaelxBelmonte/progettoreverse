// Function: FUN_019973f0
// Address: 019973f0
// Size: 1608 bytes
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


void FUN_019973f0(float param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  void *pvVar5;
  void* in_ECX;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  float local_3c;
  float local_38;
  char local_31;
  
  local_3c = param_2;
  local_38 = param_1;
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa28))();
  plVar6 = local_80;
  local_90 = local_80;
  if (local_78 == '\0') {
    if (local_80 == (int64_t *)0x0) {
      local_90 = (int64_t *)0x0;
      local_88 = '\x01';
      plVar6 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_88 = '\x01';
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = '\x01';
  }
  iVar3 = (**(code **)(&UNK_00001588 + **(int64_t **)(arg1 + 0x40)))();
  if (iVar3 != 0) {
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa18))();
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01997516;
      }
    }
    else if (local_80 != (int64_t *)0x0) {
LAB_01997516:
      if (iVar3 == 1) {
        FUN_019fb4c0(local_38,local_3c);
      }
      else if (iVar3 == 2) {
        FUN_019fb4c0(local_38,local_3c);
      }
      else if (iVar3 == 3) {
        FUN_019f95e0(local_38,local_3c);
      }
      else {
        FUN_019fb4c0(local_38,local_3c);
        plVar6 = local_80;
        if ((((local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_019f95e0(local_38,local_3c);
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01997962;
    }
    FUN_00d46dc0((local_3c - local_38) + g_02390124);
    local_98 = local_50;
    FUN_00083ea0(2,&local_98);
    FUN_019f9540();
    local_80 = (int64_t *)&g_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01997962;
  }
  if ((g_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_0270ab28 = FUN_0015ea50();
    g_0270ab10 = "MUScalePitchSystem";
    g_0270ab18 = 0x78;
    in_ECX = 0x15ecf0;
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
  if (plVar6 == (int64_t *)0x0) {
LAB_019974e5:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_019974e5;
    pplVar4 = &local_90;
  }
  local_31 = *(char *)(pplVar4 + 1);
  if ((local_31 == '\0') || (*pplVar4 == (int64_t *)0x0)) {
    if (*pplVar4 != (int64_t *)0x0) goto LAB_0199767d;
    bVar1 = true;
LAB_01997944:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d50b00();
LAB_0199767d:
    if (*(int64_t *)(arg1 + 0x48) == 0) {
      bVar1 = false;
      goto LAB_01997944;
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0176f850();
    FUN_01774240();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d46dc0((local_3c - local_38) + g_02390124);
    local_98 = local_50;
    FUN_00083ea0(2,&local_98);
    FUN_019f9540();
    local_80 = (int64_t *)&g_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
  }
  if ((local_31 != '\0') && (!bVar1)) {
    FUN_00d50b20();
  }
LAB_01997962:
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

