// Function: FUN_00110e00
// Address: 00110e00
// Size: 1509 bytes
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


void* FUN_00110e00(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  uVar8 = (*g_02572370)();
  local_80 = g_026e1378;
  if (g_026e1378 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_78 = '\x01';
  uVar8 = FUN_01cacbe0(uVar8,&local_80);
  plVar1 = local_68;
  if ((g_026fdd40 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar3 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  pplVar7 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar2 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      cVar2 = FUN_00e8db60();
      pplVar7 = &local_68;
      uVar8 = extraout_XMM0_Da_00;
      if (cVar2 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar6 = g_026e13a8;
  if (plVar1 == (int64_t *)0x0) {
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_70 = plVar1;
    if (g_026e13a8 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_40 = lVar6;
    local_38 = '\0';
    FUN_000175c0(uVar8,&local_40);
    plVar1 = local_68;
    if ((g_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      cVar2 = FUN_00e85ea0();
      if (cVar2 != '\0') {
        if ((g_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
        cVar2 = FUN_00e8da30();
        pplVar7 = &local_68;
        if (cVar2 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
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
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_48 = 0;
      local_50 = 0;
      local_58 = plVar1;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar6 = 0;
        do {
          local_68 = *(int64_t **)(plVar1[2] + lVar6 * 8);
          lVar5 = FUN_00dd6dc0();
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\0';
          local_40 = lVar5;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
        } while ((int)lVar6 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_00115a50();
      FUN_00d50b20();
    }
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

