// Function: FUN_01e03570
// Address: 01e03570
// Size: 904 bytes
// Class: GNDictionary
// String references:
//   "%@%I"

void FUN_01e03570(void)

{
  int64_t lVar1;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
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
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    FUN_00d4efa0();
    FUN_00c82bb0();
    lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x138);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    FUN_00d237a0();
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_40 = local_60;
    local_38 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_38 = '\x01';
    FUN_00e3f850();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((*(char *)(this_ptr + 0x18) != '\0') && (*(int64_t *)(this_ptr + 0x28) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      local_48 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
      FUN_00d50b00();
      local_a0 = g_027f2f40;
      local_48 = '\x01';
      local_50 = (int64_t *)(this_ptr + 0x10);
      if (g_027f2f40 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      lVar1 = *(int64_t *)(this_ptr + 0x28);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar1;
      FUN_00e3fb50(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = g_027f2f48;
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      if (g_027f2f48 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_00e3f850();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_70 = *arg1;
      local_68 = '\0';
      (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x800))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e3faa0();
    }
    FUN_00e3faa0();
  }
  return;
}

