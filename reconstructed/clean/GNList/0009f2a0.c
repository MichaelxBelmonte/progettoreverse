// Function: FUN_0009f2a0
// Address: 0009f2a0
// Size: 2713 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNValue"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0009f2a0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar5;
  int64_t *plVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  plVar1 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  plVar6 = &g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8db60();
      plVar6 = arg1;
      if (cVar3 == '\0') {
        plVar6 = &g_02802688;
      }
    }
  }
  local_31 = (char)plVar6[1];
  if ((local_31 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  plVar1 = g_026d8e58;
  if (g_026d8e58 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar1;
  local_40 = '\0';
  cVar3 = FUN_00c9ff50();
  uVar7 = extraout_XMM0_Da;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar7 = FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    if (*(int64_t *)(this_ptr + 0x78) == 0) goto LAB_0009f73c;
    local_a0 = g_026d8e58;
    if (*(int64_t *)(this_ptr + 0x90) == 0) {
      uVar7 = FUN_0009ddd0();
      local_a0 = g_026d8e58;
    }
    g_026d8e58 = local_a0;
    if (local_a0 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_000175c0(uVar7,&local_a0);
    plVar1 = local_48;
    if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 != '\0') {
        if ((g_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_026d4348 = FUN_00d4fe50();
          g_026d4330 = "GNValue";
          g_026d4338 = 0x18;
          g_026d4340 = FUN_00053cb0;
          g_026d4350 = 0;
          ram_00000000026d4358 = 0;
          g_026d4360 = 0;
          ram_00000000026d4368 = 0;
          g_026d4370 = 0;
          ram_00000000026d4378 = 0;
          g_026d4380 = 0;
          ram_00000000026d4388 = 0;
          g_026d4390 = 0;
          ram_00000000026d4398 = 0;
          g_026d43a0 = 0;
          ram_00000000026d43a8 = 0;
          g_026d43b0 = 0;
          ram_00000000026d43b8 = 0;
          g_026d43c0 = 0;
          ram_00000000026d43c8 = 0;
          g_026d43d0 = 0;
          ram_00000000026d43d8 = 0;
          g_026d43e0 = 0;
          ram_00000000026d43e8 = 0;
          g_026d43f0 = 0;
          ___cxa_guard_release();
        }
        cVar3 = FUN_00e8da30();
        pplVar5 = &local_48;
        if (cVar3 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
    }
    local_68 = 0;
    plVar1 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    local_68 = '\x01';
    local_70 = plVar1;
    uVar7 = FUN_006c5ee0();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar2 = g_026d8e60;
  if (g_026d8e60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  FUN_000175c0(uVar7,&local_90);
  plVar1 = local_48;
  if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  pplVar5 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((g_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d4348 = FUN_00d4fe50();
        g_026d4330 = "GNValue";
        g_026d4338 = 0x18;
        g_026d4340 = FUN_00053cb0;
        g_026d4350 = 0;
        ram_00000000026d4358 = 0;
        g_026d4360 = 0;
        ram_00000000026d4368 = 0;
        g_026d4370 = 0;
        ram_00000000026d4378 = 0;
        g_026d4380 = 0;
        ram_00000000026d4388 = 0;
        g_026d4390 = 0;
        ram_00000000026d4398 = 0;
        g_026d43a0 = 0;
        ram_00000000026d43a8 = 0;
        g_026d43b0 = 0;
        ram_00000000026d43b8 = 0;
        g_026d43c0 = 0;
        ram_00000000026d43c8 = 0;
        g_026d43d0 = 0;
        ram_00000000026d43d8 = 0;
        g_026d43e0 = 0;
        ram_00000000026d43e8 = 0;
        g_026d43f0 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8da30();
      pplVar5 = &local_48;
      if (cVar3 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
  }
  local_58 = 0;
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  local_58 = '\x01';
  local_60 = plVar1;
  uVar7 = FUN_006c5ee0();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = g_026d8e68;
  if (g_026d8e68 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_000175c0(uVar7,&local_80);
  plVar1 = local_48;
  if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  pplVar5 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((g_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d4348 = FUN_00d4fe50();
        g_026d4330 = "GNValue";
        g_026d4338 = 0x18;
        g_026d4340 = FUN_00053cb0;
        g_026d4350 = 0;
        ram_00000000026d4358 = 0;
        g_026d4360 = 0;
        ram_00000000026d4368 = 0;
        g_026d4370 = 0;
        ram_00000000026d4378 = 0;
        g_026d4380 = 0;
        ram_00000000026d4388 = 0;
        g_026d4390 = 0;
        ram_00000000026d4398 = 0;
        g_026d43a0 = 0;
        ram_00000000026d43a8 = 0;
        g_026d43b0 = 0;
        ram_00000000026d43b8 = 0;
        g_026d43c0 = 0;
        ram_00000000026d43c8 = 0;
        g_026d43d0 = 0;
        ram_00000000026d43d8 = 0;
        g_026d43e0 = 0;
        ram_00000000026d43e8 = 0;
        g_026d43f0 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8da30();
      pplVar5 = &local_48;
      if (cVar3 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0xd8);
  if (plVar6 != plVar1) {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0xd8) = plVar1;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0009f73c:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}

