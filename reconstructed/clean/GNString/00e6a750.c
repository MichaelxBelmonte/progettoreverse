// Function: FUN_00e6a750
// Address: 00e6a750
// Size: 1323 bytes
// Class: GNString
// String references:
//   "%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e6a750(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  int64_t lVar3;
  void*puVar4;
  int iVar5;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  uint local_58;
  void*local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00e97f30();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_006e17f0();
  puVar4 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  puVar2 = g_02787918;
  if (g_02787918 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_60 = puVar2;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00ca91d0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d93320(param_1,6);
  puVar2 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_58 = 1;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (puVar2 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_50 = puVar2;
  local_48 = '\x01';
  FUN_00d8cb40(param_1,&local_60);
  lVar3 = local_70;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_40 = lVar3;
  local_38 = '\0';
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  puVar1 = g_02787920;
  if (*param_2 != 0) {
    if (g_02787920 != (void*)0x0) {
      FUN_00d50b00();
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
    puVar1 = (void*)*param_2;
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = puVar1;
    FUN_00d8cb40(param_1,&local_60);
    lVar3 = local_70;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_40 = lVar3;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d92220();
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  FUN_00d95130(param_1,&local_80);
  puVar1 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    iVar5 = FUN_00d8c7a0();
    if (iVar5 != 0) {
      FUN_00e97f60();
    }
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

