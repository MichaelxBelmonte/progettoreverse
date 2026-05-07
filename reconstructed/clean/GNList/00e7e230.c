// Function: FUN_00e7e230
// Address: 00e7e230
// Size: 1050 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e7e230(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00dec0e0();
  (**(code **)(*local_48 + 0x398))();
  lVar2 = local_38;
  lVar1 = g_02788f90;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar1 = g_02788f90;
    }
  }
  else {
    local_30 = '\0';
  }
  g_02788f90 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00dec0e0();
  (**(code **)(*local_48 + 0x3a0))();
  lVar2 = local_38;
  lVar1 = g_02788f98;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar1 = g_02788f98;
    }
  }
  else {
    local_30 = '\0';
  }
  g_02788f98 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00dec0e0();
  (**(code **)(*local_48 + 0x3a8))();
  lVar2 = local_38;
  lVar1 = g_0276cb20;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar1 = g_0276cb20;
    }
  }
  else {
    local_30 = '\0';
  }
  g_0276cb20 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e0d540();
  if (local_30 == '\0') {
    if (local_38 == 0) goto LAB_00e7e5c9;
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == 0) goto LAB_00e7e5c9;
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar1;
  local_50 = '\x01';
  FUN_00d97f20(param_1,&local_58);
  lVar2 = local_38;
  lVar1 = g_02788fa0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar1 = g_02788fa0;
    }
  }
  else {
    local_30 = '\0';
  }
  g_02788fa0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00e7e5c9:
  lVar1 = g_02788fa8;
  if (g_02788fa8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02788fb0;
  if (g_02788fb0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

