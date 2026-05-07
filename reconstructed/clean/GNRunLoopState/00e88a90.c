// Function: FUN_00e88a90
// Address: 00e88a90
// Size: 569 bytes
// Class: GNRunLoopState

void FUN_00e88a90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  void*arg1;
  void*this_ptr;
  uint64_t local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  local_98 = g_027c24d8;
  if (cVar4 == '\0') {
    if (g_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02789420;
    local_90 = '\x01';
    if (g_02789420 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_027c24e8;
    local_88 = lVar1;
    local_80 = '\x01';
    if (g_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar2;
    local_a0 = *arg1;
    FUN_00083ea0(2,&local_a0);
    FUN_00e972c0();
    local_78 = (void*)&g_0253d630;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
    local_38 = local_48;
    local_30 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_30 = '\x01';
    FUN_00daa940();
    puVar3 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (void*)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e88ea0();
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

