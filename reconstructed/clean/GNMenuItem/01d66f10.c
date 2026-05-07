// Function: FUN_01d66f10
// Address: 01d66f10
// Size: 530 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d66f10(void)

{
  int64_t lVar1;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(char *)(this_ptr + 0x49) != '\0') {
    if (*(int64_t *)(this_ptr + 0x30) == 0) {
      if (*(int64_t *)(this_ptr + 0x20) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        local_30 = 0;
        (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
        FUN_00d50b00();
        local_30 = '\x01';
        local_78 = *(int64_t *)(this_ptr + 0x20);
        local_38 = (int64_t *)(this_ptr + 0x10);
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        local_70 = '\x01';
        lVar1 = *(int64_t *)(this_ptr + 0x28);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar1;
        FUN_00e3fb50(&local_68,&local_78);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          (**(code **)(*local_38 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
      FUN_00d50b00();
      local_98 = g_027f0988;
      local_40 = '\x01';
      local_48 = (int64_t *)(this_ptr + 0x10);
      if (g_027f0988 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      lVar1 = *(int64_t *)(this_ptr + 0x28);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar1;
      FUN_00e3fb50(&local_88,&local_98);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t **)(this_ptr + 0x30) != (int64_t *)0x0) {
    local_58 = *arg1;
    local_50 = '\0';
    (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x370))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

