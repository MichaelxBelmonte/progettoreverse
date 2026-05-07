// Function: FUN_00dcc2a0
// Address: 00dcc2a0
// Size: 753 bytes
// Class: GNString
// String references:
//   " %@"
//   ":%I"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00dcc2a0(void)

{
  void*puVar1;
  int64_t *arg1;
  int64_t local_a0;
  char local_98;
  void*local_70;
  uint local_68;
  uint32_t local_64;
  void*local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  (*g_02572370)();
  FUN_00d4ffd0();
  puVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar1;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x388))();
  local_58 = 1;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (local_a0 != 0) {
    FUN_00d50b00();
  }
  local_50 = local_a0;
  local_48 = '\x01';
  FUN_00d8cb40();
  puVar1 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = local_68 & 0xffffff00;
  }
  local_40 = puVar1;
  local_38 = '\0';
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_64 = (**(code **)(*arg1 + 0x390))();
  local_68 = 1;
  local_70 = &g_024cc6f0;
  FUN_00d8cb40(&g_024cc6f0,&local_70);
  puVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar1;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  puVar1 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  FUN_00d95130();
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

