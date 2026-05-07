// Function: FUN_004ba0d0
// Address: 004ba0d0
// Size: 805 bytes
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


void FUN_004ba0d0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  int64_t **pplVar6;
  uint32_t uVar7;
  int64_t local_a8;
  char local_a0;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027e2660;
  if (g_027e2660 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') goto LAB_004ba308;
  uVar7 = FUN_00d3ed20();
  local_80 = g_02704000;
  if (g_02704000 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = '\x01';
  pplVar6 = &local_40;
  FUN_000175c0(uVar7,&local_80);
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
LAB_004ba1f2:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004ba1f2;
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
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027096c8;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027096c8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    lVar2 = g_027096d0;
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      if (g_027096d0 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar2;
      local_58 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_004ba5c0();
    }
    FUN_00d50b20();
  }
LAB_004ba308:
  local_50 = *arg1;
  local_48 = '\0';
  FUN_00d530a0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

