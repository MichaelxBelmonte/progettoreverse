// Function: FUN_017ccf90
// Address: 017ccf90
// Size: 715 bytes
// Class: GNString
// String references:
//   "GNString"
//   "%@.title"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017ccf90(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t **pplVar6;
  uint32_t uVar7;
  int64_t *local_88;
  char local_80;
  void*local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  plVar5 = *(int64_t **)(arg1 + 0x58);
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar5;
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (g_027dcfc0 == 0) goto LAB_017ccff4;
LAB_017cd01b:
    lVar4 = g_027dcfc0;
    FUN_00d50b00();
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    FUN_00d50b00();
  }
  else {
    plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    if (g_027dcfc0 != 0) goto LAB_017cd01b;
LAB_017ccff4:
    local_70 = 1;
    local_78 = &g_024c5048;
    lVar4 = g_027dcfc0;
  }
  local_60 = '\x01';
  local_68 = lVar4;
  uVar7 = FUN_00d8cb40();
  local_40 = local_58;
  local_38 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_38 = '\x01';
  pplVar6 = &local_88;
  (**(code **)(*plVar5 + 0x98))(uVar7,&local_40);
  plVar5 = local_88;
  if ((g_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 != '\0') goto LAB_017cd0e4;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_017cd0e4:
  *(void*)(this_ptr + 1) = 0;
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar5;
    *(void*)(this_ptr + 1) = 1;
    plVar5 = local_48;
  }
  else {
    *this_ptr = (int64_t)plVar5;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(pplVar6 + 1) = 0;
    plVar5 = local_48;
  }
  local_48 = plVar5;
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

