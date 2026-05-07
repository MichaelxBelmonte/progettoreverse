// Function: FUN_01df27e0
// Address: 01df27e0
// Size: 1326 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01df27e0(uint32_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int64_t *plVar7;
  char cVar8;
  int iVar9;
  void*this_ptr;
  int64_t **pplVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint32_t uVar15;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int local_94;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027edfd8;
  if (g_027edfd8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_c8 = lVar1;
  local_c0 = '\x01';
  uVar15 = FUN_01ccaae0(param_1,&local_c8);
  plVar14 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar6 = true;
    plVar14 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      uVar15 = FUN_00d50b00();
      bVar6 = false;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01df287c;
      uVar15 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar6 = false;
  }
LAB_01df287c:
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar1 = g_02800140;
  if (g_02800140 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_b8 = lVar1;
  local_b0 = '\x01';
  local_94 = param_2;
  uVar15 = FUN_01ccaae0(uVar15,&local_b8);
  plVar12 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar5 = true;
    plVar12 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      uVar15 = FUN_00d50b00();
      bVar5 = false;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01df291b;
      uVar15 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar5 = false;
  }
LAB_01df291b:
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar1 = g_027edfd8;
  if ((plVar14 == (int64_t *)0x0) || (plVar12 == (int64_t *)0x0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01df2bbb;
  }
  if (g_027edfd8 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  uVar15 = FUN_01ccab60(uVar15,&local_a8);
  local_70 = local_90;
  local_68 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_68 = '\x01';
  pplVar10 = &local_40;
  FUN_01d26620(uVar15,&local_70);
  plVar13 = local_40;
  if ((g_027048b0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
  if (plVar13 == (int64_t *)0x0) {
LAB_01df2a0c:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_01df2a0c;
  }
  plVar13 = *pplVar10;
  if (plVar13 == (int64_t *)0x0) {
    bVar2 = true;
    bVar4 = true;
    plVar13 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar10 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    bVar2 = false;
    bVar4 = false;
  }
  if ((local_38 != '\0') && (bVar4 = bVar2, local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d25cb0();
  plVar11 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
    bVar2 = true;
    plVar11 = (int64_t *)0x0;
    if (plVar13 == (int64_t *)0x0) goto LAB_01df2b80;
LAB_01df2aee:
    lVar1 = *(int64_t *)(plVar11[2] + (int64_t)local_94 * 8);
    local_78 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = lVar1;
    FUN_00d23d70();
    FUN_00d46300();
    plVar7 = local_40;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2 && plVar11 != (int64_t *)0x0) {
LAB_01df2b9a:
      FUN_00d50b20();
    }
  }
  else {
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = bVar2;
    if (plVar13 != (int64_t *)0x0) goto LAB_01df2aee;
LAB_01df2b80:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (!bVar3 && plVar11 != (int64_t *)0x0) goto LAB_01df2b9a;
  }
  if (!bVar4 && plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01df2bbb:
  if (!bVar5 && plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar6 && plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

