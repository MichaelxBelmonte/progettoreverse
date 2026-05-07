// Function: FUN_017a8f30
// Address: 017a8f30
// Size: 849 bytes
// Class: GNData
// String references:
//   "GNData"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_017a8f30(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar7 = FUN_017a7800();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_017a8ffb;
    uVar7 = FUN_00d50b00();
    local_60 = g_02729548;
  }
  else {
    local_60 = g_02729548;
    if (local_40 == (int64_t *)0x0) {
LAB_017a8ffb:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
  }
  g_02729548 = local_60;
  if (local_60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_58 = '\x01';
  pplVar5 = &local_40;
  uVar7 = FUN_000175c0(uVar7,&local_60);
  plVar6 = local_40;
  if ((g_026d0220 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar4 != 0)) {
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
    uVar7 = ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_017a8fe5:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_017a8fe5;
  }
  plVar6 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar6 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = g_027d2070;
  if (plVar6 != (int64_t *)0x0) goto LAB_017a9043;
  if (g_027d2070 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_50 = lVar2;
  local_48 = '\x01';
  pplVar5 = &local_40;
  FUN_000175c0(uVar7,&local_50);
  plVar1 = local_40;
  if ((g_026d0220 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_017a90ca:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_017a90ca;
  }
  plVar1 = *pplVar5;
  if (plVar1 != (int64_t *)0x0) {
    plVar6 = plVar1;
    if (*(char *)(pplVar5 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_017a9043:
  *this_ptr = (int64_t)plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}

