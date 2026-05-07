// Function: FUN_01f08380
// Address: 01f08380
// Size: 623 bytes
// Class: GNList
// String references:
//   "%I"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01f08380(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t local_90;
  char local_88;
  void*local_70;
  uint32_t local_68;
  uint32_t local_64;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01ccad60();
  lVar3 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
joined_r0x01f083cc:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      lVar5 = lVar3;
      goto joined_r0x01f083cc;
    }
  }
  lVar2 = g_02800140;
  if (g_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar4 = local_40;
  if (local_40 == 0) {
    bVar1 = true;
    lVar4 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01f08447;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = false;
  }
LAB_01f08447:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_01d25cb0();
    if (local_40 == 0) {
      bVar6 = false;
    }
    else {
      FUN_01d25cb0();
      bVar6 = *(int *)((int64_t)local_70 + 0xc) != 0;
      if ((char)local_68 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_01d25cb0();
      local_64 = *(void*)(local_90 + 0xc);
      local_68 = 1;
      local_70 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_70);
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_01e03520();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
      local_60 = 0;
      FUN_01e03520();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (!bVar1 && lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((lVar3 != 0) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

