// Function: FUN_01d32790
// Address: 01d32790
// Size: 629 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d32790(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *this_ptr;
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
  
  lVar1 = g_027edfd0;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  FUN_01ccaae0(param_1,&local_88);
  FUN_01d25f70();
  lVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027edfd0;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_01ccab60(param_1,&local_78);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_68 = lVar2;
  local_60 = '\0';
  cVar4 = FUN_00c878f0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_58 = lVar2;
    local_50 = '\0';
    cVar4 = FUN_00c87a10();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      local_48 = lVar2;
      local_40 = '\0';
      FUN_00c85680(param_1,&local_48);
      lVar3 = local_38;
      *(void*)(this_ptr + 1) = 0;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *this_ptr = 0;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *this_ptr = lVar3;
          *(void*)(this_ptr + 1) = 1;
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        *this_ptr = local_38;
        *(void*)(this_ptr + 1) = 1;
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto joined_r0x01d32937;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x01d32937:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

