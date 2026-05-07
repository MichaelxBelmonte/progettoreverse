// Function: FUN_00ce0c00
// Address: 00ce0c00
// Size: 646 bytes
// Class: GNFilePath
// String references:
//   ".."

void FUN_00ce0c00(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00cde020();
  lVar2 = _opendir_INODE64();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    while (lVar2 = _readdir_INODE64(), lVar2 != 0) {
      iVar1 = FUN_00e7ddf0();
      if ((iVar1 != 0) && (iVar1 = FUN_00e7ddf0(), iVar1 != 0)) {
        (**(code **)(*arg1 + 0x368))();
        FUN_00d93290();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d8ef00();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_00cddf30();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          local_48 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
    }
    _closedir();
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

