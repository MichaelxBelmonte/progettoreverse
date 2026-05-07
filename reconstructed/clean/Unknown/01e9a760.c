// Function: FUN_01e9a760
// Address: 01e9a760
// Size: 571 bytes
// Class: Unknown

void FUN_01e9a760(uint64_t param_1)

{
  int64_t lVar1;
  int64_t this_ptr;
  bool bVar2;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_30;
  char local_28;
  
  FUN_01ccad60();
  if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_01cc98b0(param_1,&local_80);
  lVar1 = g_027edfd8;
  bVar2 = true;
  if (local_30 == (int64_t *)0x0) {
    if (g_027edfd8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_01cc98b0(param_1,&local_70);
    lVar1 = g_027fdc88;
    bVar2 = true;
    if (local_90 == 0) {
      if (g_027fdc88 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar1;
      local_58 = '\x01';
      FUN_01cc98b0(param_1,&local_60);
      bVar2 = local_a0 != 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_30 != (int64_t *)0x0)) {
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_30 + 0xa20))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027fdca8;
    if (g_027fdca8 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    (**(code **)(*local_30 + 0xa10))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01cc9ce0();
  if (local_30 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

