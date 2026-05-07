// Function: FUN_0188cd90
// Address: 0188cd90
// Size: 743 bytes
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


void* FUN_0188cd90(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_70;
  char local_68;
  char local_31;
  
  plVar6 = (int64_t *)*param_2;
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
  if (plVar6 == (int64_t *)0x0) {
LAB_0188cde3:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar1 == '\0') goto LAB_0188cde3;
  }
  lVar7 = *plVar6;
  local_31 = (char)plVar6[1];
  if ((local_31 == '\0') || (lVar7 == 0)) {
    if ((lVar7 == 0) && ((int64_t *)*param_2 != (int64_t *)0x0)) {
      (**(code **)(*(int64_t *)*param_2 + 400))();
      if (local_70 != 0) {
        lVar7 = local_70;
        if (local_68 != '\0') {
          local_31 = '\x01';
          goto LAB_0188ce17;
        }
        FUN_00d50b00();
        local_31 = '\x01';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    local_31 = '\x01';
  }
LAB_0188ce17:
  if (lVar7 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar3 + 7) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    pVar5 = 0x26106d0;
    *puVar3 = &g_026106d0;
    puVar3[10] = 0;
    (*g_026106e8)();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_01822120();
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188f8a0();
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

