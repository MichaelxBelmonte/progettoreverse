// Function: FUN_01dccc70
// Address: 01dccc70
// Size: 743 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01dccc70(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  void*this_ptr;
  int64_t *plVar6;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  FUN_01e40eb0();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_58 = plVar6;
      local_50 = '\x01';
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dccc9f;
    }
    local_58 = (int64_t *)0x0;
    local_50 = '\x01';
    plVar6 = (int64_t *)0x0;
  }
  else {
    local_58 = local_48;
    local_50 = '\x01';
LAB_01dccc9f:
    if (plVar6 != (int64_t *)0x0) {
      FUN_01e40eb0();
      plVar2 = local_48;
      plVar1 = plVar6;
      if (plVar6 != local_48) {
        plVar6 = plVar2;
        if (local_40 != '\0') {
          local_58 = local_48;
          FUN_00d50b20();
          local_50 = '\x01';
          goto LAB_01dccd54;
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar2;
        FUN_00d50b20();
        local_50 = '\x01';
        plVar1 = local_48;
      }
      if ((local_40 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01dccd54:
  if ((g_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01dccd86:
    pplVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01dccd86;
    pplVar5 = &local_58;
  }
  local_31 = *(char *)(pplVar5 + 1);
  if ((local_31 == '\0') || (*pplVar5 == (int64_t *)0x0)) {
    if (*pplVar5 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01dccea9;
    }
  }
  else {
    FUN_00d50b00();
  }
  pplVar5 = &local_48;
  FUN_01d982e0();
  plVar6 = local_48;
  FUN_001f33a0();
  if (plVar6 == (int64_t *)0x0) {
    pplVar5 = &g_02802688;
    *(void*)(this_ptr + 1) = 0;
    plVar6 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01dcce0c;
LAB_01dcce3c:
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar5 = &g_02802688;
    }
    *(void*)(this_ptr + 1) = 0;
    plVar6 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01dcce3c;
LAB_01dcce0c:
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
joined_r0x01dccea9:
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

