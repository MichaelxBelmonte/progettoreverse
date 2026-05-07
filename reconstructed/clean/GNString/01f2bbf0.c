// Function: FUN_01f2bbf0
// Address: 01f2bbf0
// Size: 1523 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01f2bbf0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint32_t uVar7;
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
  int64_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar2 = g_027fff38;
  if (g_027fff38 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar3 == '\0') || (this_ptr[0xb] == 0)) goto LAB_01f2befc;
  uVar7 = FUN_00d3ed20();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01f2befc;
    uVar7 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01f2befc;
  lVar2 = g_027092c0;
  local_70 = this_ptr[0xb];
  local_48 = plVar1;
  if (g_027092c0 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  pplVar6 = &local_40;
  FUN_000175c0(uVar7,&local_e0);
  plVar1 = local_40;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
    pplVar6 = &g_02802688;
    local_68 = g_02802688;
    if (g_02802690 == '\0') goto LAB_01f2bd95;
LAB_01f2bd6a:
    *(void*)(pplVar6 + 1) = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar6 = &g_02802688;
    }
    local_68 = *pplVar6;
    if (*(char *)(pplVar6 + 1) != '\0') goto LAB_01f2bd6a;
LAB_01f2bd95:
    local_60 = 0;
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  local_60 = '\x01';
  uVar7 = FUN_01f7def0();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = g_027295d8;
  local_70 = this_ptr[0xb];
  if (g_027295d8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  pplVar6 = &local_40;
  FUN_000175c0(uVar7,&local_d0);
  plVar1 = local_40;
  FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01f2be65:
    pplVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01f2be65;
  }
  local_50 = 0;
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  local_50 = '\x01';
  local_58 = plVar1;
  FUN_01f7e070();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f2befc:
  FUN_00d3ecc0();
  plVar1 = local_40;
  local_c0 = g_027e2660;
  if (g_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    uVar7 = FUN_00d6f370();
    local_b0 = g_027fff30;
    if (g_027fff30 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    bVar4 = FUN_00d70f90(uVar7,0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x688 + (uint64_t)(bVar4 ^ 1) * 8))();
  }
  FUN_00d3ecc0();
  plVar1 = local_40;
  local_a0 = g_027fff48;
  if (g_027fff48 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0x570))();
  }
  FUN_00d3ecc0();
  plVar1 = local_40;
  local_90 = g_027fff40;
  if (g_027fff40 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_80 = *arg1;
    local_78 = '\0';
    FUN_00d530a0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    g_028ba7f0 = g_028ba7f0 + 0x100;
  }
  return;
}

