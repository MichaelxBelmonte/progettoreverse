// Function: FUN_0171c180
// Address: 0171c180
// Size: 620 bytes
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


uint64_t FUN_0171c180(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint32_t uVar6;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  plVar1 = local_38;
  lVar2 = g_027e2660;
  if (g_027e2660 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    return 0;
  }
  uVar6 = FUN_00d3ed20();
  local_58 = g_02704000;
  if (g_02704000 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_50 = '\x01';
  pplVar5 = &local_38;
  FUN_000175c0(uVar6,&local_58);
  plVar1 = local_38;
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
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0171c279;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_0171c279:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027cc850;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027cc850 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar2;
    local_40 = '\x01';
    uVar6 = FUN_00d90870();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar6 != '\0') {
      FUN_00d50b20();
      return CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    }
    FUN_00d50b20();
  }
  return 0;
}

