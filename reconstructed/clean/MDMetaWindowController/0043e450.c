// Function: FUN_0043e450
// Address: 0043e450
// Size: 721 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void* FUN_0043e450(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t **pplVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*arg1 + 0x370))();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_58 = local_68;
  local_38[0] = '\0';
  local_50 = local_68;
  do {
    plVar6 = local_58;
    (**(code **)(*local_58 + 0x370))();
    plVar5 = local_48;
    if (local_48 == plVar6) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        plVar5 = plVar6;
        goto LAB_0043e507;
      }
    }
    else {
      local_58 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_0043e507:
        local_38[0] = '\x01';
        pcVar3 = local_40;
      }
      *pcVar3 = '\0';
      plVar6 = plVar5;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    pplVar4 = (int64_t **)&g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar4 = &local_58;
      if (cVar1 == '\0') {
        pplVar4 = (int64_t **)&g_02802688;
      }
    }
    plVar6 = local_58;
    if (*pplVar4 != (int64_t *)0x0) {
      if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x0043e680;
    }
  } while (local_58 != (int64_t *)0x0);
  plVar6 = (int64_t *)0x0;
joined_r0x0043e680:
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_0062abf0();
  plVar6 = local_48;
  *(void*)(this_ptr + 1) = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      *this_ptr = plVar6;
      *(void*)(this_ptr + 1) = 1;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0043e6d3;
    }
    local_48 = (int64_t *)0x0;
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
LAB_0043e6d3:
  FUN_00d50b20();
  return this_ptr;
}

