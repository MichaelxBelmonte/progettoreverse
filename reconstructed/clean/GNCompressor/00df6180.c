// Function: FUN_00df6180
// Address: 00df6180
// Size: 648 bytes
// Class: GNCompressor
// String references:
//   "file '%@' not open while readBytes"
//   "readBytes failed on file '%@'"
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


ssize_t FUN_00df6180(int param_1,int param_2,size_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  ssize_t sVar3;
  void**ppuVar4;
  int64_t *this_ptr;
  void*local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_02784870;
  if ((int)this_ptr[3] == -1) {
    if (g_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    local_60 = local_50;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    ppuVar4 = &local_70;
    FUN_00cc7c70(ppuVar4,"file \'%@\' not open while readBytes");
    param_1 = (int)ppuVar4;
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  sVar3 = _read(param_1,(void *)(int64_t)param_2,param_3);
  lVar1 = g_02784870;
  if (sVar3 == -1) {
    if (g_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    lVar2 = local_50;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7c70(&local_70,"readBytes failed on file \'%@\'");
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return sVar3;
}

