// Function: FUN_00d15850
// Address: 00d15850
// Size: 1335 bytes
// Class: GNList
// String references:
//   "GNList"
//   "Error evaluating qualifier with key %@ , selector %@, value %@ - value must be substitued for varia...
//   "GNQualifierVariable"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00d15850(uint32_t param_1)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined7 uVar8;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void*arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  uint64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint32_t local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar6 = *(int64_t **)(this_ptr + 0x20);
  if (plVar6 != (int64_t *)0x0) {
    if ((g_0277ce78 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_0277cdc8 = FUN_00d4fe50();
      g_0277cdb0 = "GNQualifierVariable";
      g_0277cdb8 = 0x18;
      g_0277cdc0 = FUN_00d17140;
      g_0277cdd0 = 0;
      ram_000000000277cdd8 = 0;
      g_0277cde0 = 0;
      g_0277ce58 = 0;
      ram_000000000277ce60 = 0;
      g_0277ce68 = 0;
      g_0277ce6a = 1;
      g_0277cde8 = 0;
      ram_000000000277cdf0 = 0;
      g_0277cdf8 = 0;
      ram_000000000277ce00 = 0;
      g_0277ce08 = 0;
      ram_000000000277ce10 = 0;
      g_0277ce18 = 0;
      ram_000000000277ce20 = 0;
      g_0277ce28 = 0;
      ram_000000000277ce30 = 0;
      g_0277ce38 = 0;
      ram_000000000277ce40 = 0;
      g_0277ce48 = 0;
      ram_000000000277ce50 = 0;
      g_0277ce73 = 0;
      g_0277ce6b = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    lVar1 = g_027816e8;
    plVar6 = g_02802688;
    if (cVar2 != '\0') {
      plVar6 = *(int64_t **)(this_ptr + 0x20);
    }
    param_1 = extraout_XMM0_Da;
    if (plVar6 != (int64_t *)0x0) {
      if (g_027816e8 != 0) {
        FUN_00d50b00();
      }
      local_d0 = lVar1;
      local_c8 = '\x01';
      local_58 = *(int64_t **)(this_ptr + 0x10);
      local_d8 = *(void*)(this_ptr + 0x20);
      uVar10 = FUN_00083ea0(3,&local_d8);
      local_90 = (int64_t *)&g_02571cc0;
      local_60 = *(void*)(this_ptr + 0x28);
      param_1 = FUN_00cc7b40(uVar10,&local_90);
      local_90 = (int64_t *)&g_0253d630;
      if ((local_68 != '\0') && (local_70 != 0)) {
        param_1 = FUN_00d50b20();
      }
      local_90 = &g_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        param_1 = FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        param_1 = FUN_00d50b20();
      }
    }
  }
  plVar6 = (int64_t *)*arg1;
  local_40 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar1 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar1;
  (**(code **)(*plVar6 + 0xa0))(param_1,&local_48);
  plVar6 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      local_90 = (int64_t *)0x0;
      local_88 = '\x01';
      plVar6 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_90 = plVar6;
      local_88 = '\x01';
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_90 = local_58;
    local_88 = '\x01';
    local_50 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  plVar7 = (int64_t *)0x0;
  if (plVar6 == (int64_t *)0x0) {
LAB_00d15b9c:
    local_98 = '\0';
    local_a0 = plVar7;
    uVar3 = FUN_00d14ff0();
    uVar5 = (uint64_t)uVar3;
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
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
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar8 = (undefined7)((uint64_t)plVar6 >> 8);
    if (cVar2 == '\0') {
      uVar5 = CONCAT71(uVar8,g_02802690);
      plVar6 = g_02802688;
      if (g_02802690 == '\0') goto LAB_00d15aa5;
LAB_00d15a96:
      if (plVar6 == (int64_t *)0x0) goto LAB_00d15aa5;
      FUN_00d50b00();
    }
    else {
      uVar5 = CONCAT71(uVar8,local_88);
      plVar6 = local_90;
      if (local_88 != '\0') goto LAB_00d15a96;
LAB_00d15aa5:
      plVar7 = local_90;
      if (plVar6 == (int64_t *)0x0) goto LAB_00d15b9c;
    }
    local_31 = (char)uVar5;
    if (*(int *)(this_ptr + 0x28) == 6) {
      local_b8 = '\0';
      local_c0 = plVar6;
      uVar3 = FUN_00d14ff0();
      uVar5 = (uint64_t)uVar3;
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar9 = (uint64_t)*(uint *)((int64_t)plVar6 + 0xc);
      do {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),0 < (int)uVar9);
        if ((int)uVar9 < 1) goto LAB_00d15b85;
        lVar1 = *(int64_t *)(plVar6[2] + -8 + uVar9 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        local_b0 = lVar1;
        uVar3 = FUN_00d14ff0();
        uVar5 = (uint64_t)uVar3;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        uVar9 = uVar9 - 1;
      } while ((char)uVar3 == '\0');
      uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
LAB_00d15b85:
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}

