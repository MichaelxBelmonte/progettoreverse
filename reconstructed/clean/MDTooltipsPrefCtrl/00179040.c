// Function: FUN_00179040
// Address: 00179040
// Size: 575 bytes
// Class: MDTooltipsPrefCtrl
// String references:
//   "%@ [Module]"
//   "%@ [Header]"

void FUN_00179040(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  void*local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00176c40();
  puVar3 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00176c40();
    local_40 = *arg1;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    FUN_00d8cb40(param_1,&local_50);
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_003b6200();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *arg1;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_00d8cb40(param_1,&local_50);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_003b6200();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

