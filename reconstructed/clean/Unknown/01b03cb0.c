// Function: FUN_01b03cb0
// Address: 01b03cb0
// Size: 741 bytes
// Class: Unknown

void FUN_01b03cb0(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  uint32_t uVar3;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_38;
  char local_30;
  
  lVar1 = g_027e3c80;
  if (*(char *)(this_ptr + 0x315) != '\0') {
    uVar3 = param_1;
    if (g_027e3c80 != 0) {
      uVar3 = FUN_00d50b00();
    }
    lVar2 = g_027e3d28;
    if (g_027e3d28 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_a8 = lVar2;
    local_a0 = '\x01';
    FUN_01d61e70(uVar3,&local_a8);
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      FUN_01b195d0();
      FUN_00d50b00();
      FUN_01d62b10();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      FUN_01e42030();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        local_90 = '\0';
        local_98 = 0;
        FUN_01e4ac90();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e42030();
        FUN_01e4ace0();
        lVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        (**(code **)(*local_38 + 0x920))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      FUN_01d5ef60(param_1,g_023dcce4);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      FUN_01d62b80();
      FUN_00d50b20();
    }
  }
  return;
}

