// Function: FUN_00df3740
// Address: 00df3740
// Size: 513 bytes
// Class: GNCompressor
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df3740(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t local_b0;
  void*local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d4efa0();
  FUN_00c7e7b0();
  puVar2 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027847f8;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    local_88 = puVar2;
    local_80 = '\0';
    local_78 = *arg1;
    local_70 = '\0';
    FUN_00e972c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = puVar2;
    local_a0 = '\0';
    local_98 = *arg1;
    local_90 = '\0';
    if (g_027847f8 != 0) {
      FUN_00d50b00();
      lVar3 = *param_2;
    }
    local_38 = lVar1;
    local_b0 = lVar3;
    FUN_00083ea0(2,&local_b0);
    FUN_00e972c0();
    local_68 = (void*)&g_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

