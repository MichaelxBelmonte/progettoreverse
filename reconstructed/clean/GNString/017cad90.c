// Function: FUN_017cad90
// Address: 017cad90
// Size: 514 bytes
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


void FUN_017cad90(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
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
  
  plVar1 = *(int64_t **)(arg1 + 0x58);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = g_027d37d8;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar3 = g_027d37d8, lVar7 != 0)) {
    plVar2 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  g_027d37d8 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  pplVar8 = &local_50;
  local_40 = lVar3;
  (**(code **)(*plVar2 + 0x88))();
  plVar2 = local_50;
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
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_017cae67;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_017cae67:
  *(void*)(this_ptr + 1) = 0;
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = (int64_t)plVar2;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

