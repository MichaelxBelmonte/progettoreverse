// Function: FUN_01d30bb0
// Address: 01d30bb0
// Size: 1164 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNMultipleValue"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d30bb0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar7 = &local_40;
  uVar8 = FUN_01ccad60();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    local_58 = local_40;
    uVar8 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    local_58 = local_40;
    if (local_40 == (int64_t *)0x0) {
      return;
    }
  }
  lVar2 = g_027edfd0;
  if (g_027edfd0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  (**(code **)(*this_ptr + 0x4c8))(uVar8,&local_98);
  plVar6 = local_50;
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      local_38 = '\x01';
      plVar6 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_40 = plVar6;
      local_38 = '\x01';
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_50;
    local_38 = '\x01';
    local_48 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d30cb1:
    pplVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d30cb1;
  }
  cVar4 = *(char *)(pplVar7 + 1);
  if ((cVar4 == '\0') || (*pplVar7 == (int64_t *)0x0)) {
    if (*pplVar7 == (int64_t *)0x0) goto LAB_01d30dc9;
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987e0();
  cVar3 = local_38;
  plVar1 = local_40;
  plVar6 = local_50;
  if (local_40 == local_50) {
    if ((local_38 == '\0') && (local_50 != (int64_t *)0x0)) {
      if (local_48 != '\0') goto LAB_01d30d5e;
      FUN_00d50b00();
      goto LAB_01d30da4;
    }
LAB_01d30da8:
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar6;
      if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01d30da4:
      local_38 = '\x01';
      goto LAB_01d30da8;
    }
    local_40 = local_50;
    if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01d30d5e:
    local_38 = '\x01';
  }
  if (cVar4 != '\0') {
    FUN_00d50b20();
  }
LAB_01d30dc9:
  plVar6 = local_40;
  if (local_40 == (int64_t *)0x0) {
    local_80 = '\0';
    local_88 = 0;
    FUN_01d2a770();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
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
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = local_40;
    plVar1 = local_40;
    if (cVar4 == '\0') {
      plVar1 = g_02802688;
    }
    if (plVar1 == (int64_t *)0x0) {
      local_68 = local_40;
      local_60 = '\0';
      FUN_01d2a770();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78 = local_40;
      local_70 = '\0';
      FUN_01d2a8f0();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

