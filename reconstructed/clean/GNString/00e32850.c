// Function: FUN_00e32850
// Address: 00e32850
// Size: 763 bytes
// Class: GNString
// String references:
//   "%@: %p"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e32850(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t arg1;
  uint64_t local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  char local_30;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_00d4ffd0();
  puVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_68 = puVar2;
  local_60 = '\0';
  FUN_00d21140();
  if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(arg1 + 0x18) != 0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    local_38 = (void*)local_b8;
    local_c0 = *(void*)(arg1 + 0x18);
    FUN_00083ea0(2,&local_c0);
    FUN_00d8cb40();
    puVar2 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_38 = puVar2;
    local_30 = '\0';
    FUN_00d21140();
    if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_68 = (void*)&g_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(arg1 + 0x20) != 0) {
    FUN_00d74120();
    puVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_68 = puVar2;
    local_60 = '\0';
    FUN_00d21140();
    if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027259e0;
  local_90 = '\0';
  local_98 = puVar3;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  FUN_00d95130();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

