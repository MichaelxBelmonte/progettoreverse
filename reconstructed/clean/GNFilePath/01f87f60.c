// Function: FUN_01f87f60
// Address: 01f87f60
// Size: 1753 bytes
// Class: GNFilePath
// String references:
//   "\"%@\""
//   "\t\"%@\""

void FUN_01f87f60(void)

{
  void*puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t local_d8;
  char local_d0;
  int64_t local_90;
  char local_88;
  int64_t local_78;
  char local_70;
  int local_60;
  void*local_50;
  char local_48;
  
  iVar2 = FUN_00d8c7a0();
  if (iVar2 != 0) {
    FUN_00d92220();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_00d8dbf0();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01caf0e0();
  if (local_50 != (void*)0x0) {
    FUN_00d50b00();
  }
  FUN_00d94d80();
  if (local_50 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_01caf140();
  local_78 = 0;
  local_60 = -1;
  while( true ) {
    puVar1 = local_50;
    lVar3 = (int64_t)local_60;
    local_60 = local_60 + 1;
    if (g_024c5054 <= local_60) break;
    local_78 = *(int64_t *)(g_024c5058 + 8 + lVar3 * 8);
    FUN_00d92220();
    if ((local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d8ede0();
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_01da4890();
    FUN_01caf470();
    if (local_d0 == '\0') {
      if (local_d8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_d0 = '\0';
    }
    FUN_01da5370();
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != (void*)0x0) {
      FUN_01d42800();
      FUN_00d50b20();
      FUN_00d50b00();
    }
    FUN_00d94d80();
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_01caf470();
    if (local_90 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01caf440();
    local_48 = '\x01';
    if (local_90 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_002a0990();
  FUN_00d50b20();
  FUN_01caf110();
  if (local_78 != 0) {
    FUN_00d50b00();
    for (iVar2 = 0; iVar2 < *(int *)(local_78 + 0xc); iVar2 = iVar2 + 1) {
      FUN_01f87f60();
    }
    FUN_01cb0380();
    FUN_00d50b20();
  }
  return;
}

