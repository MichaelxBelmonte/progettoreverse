// Function: FUN_00c1ea10
// Address: 00c1ea10
// Size: 1808 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNData"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00c1ea10(void *param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  float *pfVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_f0;
  uint8_t local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  void*local_48;
  int64_t *local_40;
  char local_38;
  
  local_e0 = *arg1;
  local_d8 = '\0';
  FUN_00d61ea0();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = g_0276c9d8;
  plVar1 = (int64_t *)*arg1;
  if (g_0276c9d8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar4;
  local_c8 = '\x01';
  iVar6 = (**(code **)(*plVar1 + 0x598))();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = g_0276c9d8;
  if (iVar6 == 2) {
    return;
  }
  plVar1 = (int64_t *)*arg1;
  if (g_0276c9d8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar4;
  local_b8 = '\x01';
  iVar6 = (**(code **)(*plVar1 + 0x598))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (1 < iVar6) {
    return;
  }
  pfVar2 = *(float **)(*(int64_t *)(this_ptr + 0x98) + 0x10);
  *pfVar2 = *pfVar2 + g_02390d34;
  *(void*)(pfVar2 + 7) = *(void*)(pfVar2 + 2);
  *(void*)(pfVar2 + 9) = *(void*)(pfVar2 + 4);
  *(void*)(pfVar2 + 0xb) = *(void*)(pfVar2 + 6);
  *(void*)(pfVar2 + 0xd) = *(void*)(pfVar2 + 8);
  *(void*)(pfVar2 + 0xf) = *(void*)(pfVar2 + 10);
  *(void*)(pfVar2 + 0x11) = *(void*)(pfVar2 + 0xc);
  _memset_pattern16(param_1,&MACH_HEADER.sizeofcmds,param_3);
  local_b0 = g_0276c9e0;
  plVar1 = (int64_t *)*arg1;
  if (g_0276c9e0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  cVar5 = (**(code **)(*plVar1 + 0x590))();
  uVar8 = extraout_XMM0_Da;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar4 = g_0276c9e8;
  if (cVar5 == '\0') {
    return;
  }
  plVar1 = (int64_t *)*arg1;
  if (g_0276c9e8 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_a0 = lVar4;
  local_98 = '\x01';
  pplVar7 = &local_40;
  uVar8 = (**(code **)(*plVar1 + 0x578))(uVar8,&local_a0);
  plVar1 = local_40;
  if ((g_026fd0c0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar6 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00c1ec3c:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_00;
    if (cVar5 == '\0') goto LAB_00c1ec3c;
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
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  local_70 = plVar1;
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar4 = g_0276c9e0;
  plVar1 = (int64_t *)*arg1;
  if (g_0276c9e0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  (**(code **)(*plVar1 + 0x578))(uVar8,&local_90);
  plVar1 = local_40;
  if (g_027048b0 == '\0') {
    local_48 = &g_027048b0;
    iVar6 = ___cxa_guard_acquire();
    if (iVar6 != 0) {
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
  }
  pplVar7 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') {
      if (g_026d0220 == '\0') {
        local_48 = &g_026d0220;
        iVar6 = ___cxa_guard_acquire();
        if (iVar6 != 0) {
          g_02789148 = FUN_00d4fe50();
          g_02789130 = "GNData";
          g_02789138 = 0x28;
          g_02789140 = FUN_000378a0;
          g_02789150 = 0;
          ram_0000000002789158 = 0;
          g_02789160 = 0;
          ram_0000000002789168 = 0;
          g_02789170 = 0;
          ram_0000000002789178 = 0;
          g_02789180 = 0;
          ram_0000000002789188 = 0;
          g_02789190 = 0;
          ram_0000000002789198 = 0;
          g_027891a0 = 0;
          ram_00000000027891a8 = 0;
          g_027891b0 = 0;
          ram_00000000027891b8 = 0;
          g_027891c0 = 0;
          ram_00000000027891c8 = 0;
          g_027891d0 = 0;
          ram_00000000027891d8 = 0;
          g_027891e0 = 0;
          ram_00000000027891e8 = 0;
          g_027891f0 = 0;
          ___cxa_guard_release();
        }
      }
      cVar5 = FUN_00e8da30();
      pplVar7 = &local_40;
      if (cVar5 == '\0') {
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
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = g_0276c9f0;
  plVar3 = (int64_t *)*arg1;
  if (g_0276c9f0 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar4;
  local_78 = '\x01';
  local_48 = (void*)(**(code **)(*plVar3 + 0x540))();
  plVar3 = local_70;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (((plVar3 == (int64_t *)0x0) || (plVar1 == (int64_t *)0x0)) ||
     (((double)local_48 == 0.0 && (!NAN((double)local_48))))) {
    if (plVar1 == (int64_t *)0x0) goto LAB_00c1eebf;
  }
  else {
    lVar4 = **(int64_t **)(*(int64_t *)(this_ptr + 200) + 0x10);
    local_60 = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_e8 = 0;
    local_f0 = plVar1;
    local_68 = lVar4;
    uVar8 = FUN_00c1f4b0((int)local_48,&local_f0);
    local_50 = 0;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b00();
    }
    local_58 = local_40;
    local_50 = '\x01';
    FUN_00c1f400(uVar8,&local_58);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00c1eebf:
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

