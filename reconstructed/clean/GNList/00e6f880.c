// Function: FUN_00e6f880
// Address: 00e6f880
// Size: 837 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e6f880(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar5 = g_02784a80;
  if (*this_ptr != 0) {
    if (g_02784a80 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_40 = lVar5;
    local_38 = '\x01';
    FUN_000175c0(param_1,&local_40);
    plVar1 = local_78;
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
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 != '\0') {
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
        cVar3 = FUN_00e8da30();
        pplVar6 = &local_78;
        if (cVar3 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
    }
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      local_70 = 0;
      local_78 = (int64_t *)0x0;
      local_58 = 0;
      local_60 = 0;
      local_68 = plVar1;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = g_02787950;
          local_78 = *(int64_t **)(plVar1[2] + lVar5 * 8);
          if (g_02787950 != 0) {
            FUN_00d50b00();
          }
          local_50 = lVar2;
          local_48 = '\0';
          FUN_00ca13a0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          local_60 = CONCAT44(local_60._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_015ac3a0();
      FUN_00d50b20();
    }
  }
  return;
}

