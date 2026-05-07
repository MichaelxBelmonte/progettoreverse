// Function: FUN_01e93c70
// Address: 01e93c70
// Size: 554 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01e93c70(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t this_ptr;
  int64_t lVar5;
  int64_t local_a0;
  char local_98;
  int64_t local_88;
  int64_t local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t local_40;
  
  lVar2 = g_027fdca0;
  if (g_027fdca0 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar2;
  local_50 = g_027ef820;
  if ((g_027ef820 == 0) || (FUN_00d50b00(), g_027ef820 == 0)) {
    local_40 = 0;
    lVar2 = g_027fdca0;
  }
  else {
    local_40 = g_027ef820;
    FUN_00d50b00();
    lVar2 = g_027fdca0;
  }
  g_027fdca0 = lVar2;
  if (lVar2 == 0) {
    lVar5 = 0;
    lVar1 = g_027ef820;
  }
  else {
    FUN_00d50b00();
    lVar5 = g_027fdca0;
    if (g_027fdca0 == 0) {
      lVar5 = 0;
      lVar1 = g_027ef820;
    }
    else {
      FUN_00d50b00();
      lVar1 = g_027ef820;
    }
  }
  g_027ef820 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_027fdca0;
  if (g_027fdca0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027ef820;
  if (g_027ef820 != 0) {
    FUN_00d50b00();
  }
  local_88 = local_50;
  local_80 = local_40;
  local_60 = lVar4;
  local_58 = lVar3;
  local_78 = lVar2;
  local_70 = lVar5;
  local_68 = lVar1;
  FUN_01a584a0(&local_80,&local_88,&local_78,&local_70);
  FUN_000b6830();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b1c2d0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

