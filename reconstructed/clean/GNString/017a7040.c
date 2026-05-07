// Function: FUN_017a7040
// Address: 017a7040
// Size: 808 bytes
// Class: GNString
// String references:
//   "GNString"
//   "(%@)"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017a7040(uint32_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint32_t local_40;
  int64_t local_38;
  char local_30;
  
  lVar3 = g_027c2510;
  if (*(int64_t *)(arg1 + 0x30) == 0) {
    bVar1 = false;
  }
  else {
    if (g_027c2510 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_98 = lVar3;
    local_90 = '\x01';
    pplVar7 = &local_48;
    FUN_000175c0(param_1,&local_98);
    plVar6 = local_48;
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
    if (plVar6 == (int64_t *)0x0) {
LAB_017a70d0:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_017a70d0;
    }
    plVar6 = *pplVar7;
    if (plVar6 == (int64_t *)0x0) {
      bVar1 = false;
      plVar6 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar7 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
      }
      bVar1 = true;
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) goto LAB_017a728c;
  }
  lVar3 = g_02784780;
  if (g_02784780 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0270b858;
  local_88 = lVar3;
  local_80 = '\x01';
  if (g_0270b858 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  uVar8 = FUN_00d31230(&local_68,&local_78);
  local_40 = 1;
  local_48 = &g_024c5048;
  local_30 = 0;
  if (local_a8 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_38 = local_a8;
  local_30 = '\x01';
  FUN_00d8cb40(uVar8,&local_48);
  plVar6 = local_58;
  if (local_58 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
  }
  else if (local_50 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
    bVar1 = true;
  }
  local_48 = &g_024c5048;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
LAB_017a728c:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

