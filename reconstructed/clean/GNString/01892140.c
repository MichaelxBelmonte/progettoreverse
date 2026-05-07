// Function: FUN_01892140
// Address: 01892140
// Size: 630 bytes
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


void FUN_01892140(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar8;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x70) != 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018babe0();
    return;
  }
  lVar1 = *(int64_t *)(arg1 + 0x48);
  if (lVar1 != 0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  plVar2 = *(int64_t **)(arg1 + 0x68);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  plVar3 = plVar2;
  lVar1 = g_027d8ea8;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar1 = g_027d8ea8, lVar7 != 0)) {
    plVar3 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  g_027d8ea8 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  pplVar8 = &local_50;
  local_40 = lVar1;
  (**(code **)(*plVar3 + 0x88))();
  plVar3 = local_50;
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
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0189228a;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_0189228a:
  plVar3 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    *this_ptr = (int64_t)plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

