// Function: FUN_01885a40
// Address: 01885a40
// Size: 739 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01885a40(void)

{
  char cVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_018909c0();
  lVar2 = g_027d78d8;
  if (g_027d78d8 != 0) {
    FUN_00d50b00();
  }
  cVar1 = FUN_00d90870();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_018909c0();
    local_88 = g_027d78e0;
    if (g_027d78e0 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    cVar1 = FUN_00d90870();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') goto LAB_01885cd4;
    FUN_018909c0();
    local_78 = g_02774da0;
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00d91000(1,&local_78);
    lVar2 = *(int64_t *)(*(int64_t *)(local_38 + 0x10) + 0x10);
    bVar3 = lVar2 != 0;
    if (bVar3) {
      FUN_00d50b00();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_018909c0();
    local_98 = g_02774da0;
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_00d91000(1,&local_98);
    lVar2 = *(int64_t *)(*(int64_t *)(local_38 + 0x10) + 0x18);
    bVar3 = lVar2 != 0;
    if (bVar3) {
      FUN_00d50b00();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    local_60 = '\0';
    local_68 = lVar2;
    FUN_00c7a7e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01885cd4:
  lVar2 = g_027d78e8;
  if (g_027d78e8 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  local_50 = '\x01';
  FUN_00c7ace0();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}

