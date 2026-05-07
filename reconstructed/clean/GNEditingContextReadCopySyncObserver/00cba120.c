// Function: FUN_00cba120
// Address: 00cba120
// Size: 635 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cba120(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((*(int64_t *)(this_ptr + 0x90) != 0) &&
     (lVar1 = *arg1, *(char *)(lVar1 + 0x39) == '\0')) {
    lVar2 = *(int64_t *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      local_40 = 0;
      lVar1 = *(int64_t *)(lVar1 + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar1;
      FUN_00cb98a0(param_1,&local_48);
      lVar1 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d23d90();
        if (*(int *)(lVar1 + 0xc) == 0) {
          lVar1 = *(int64_t *)(*arg1 + 0x20);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_30 = '\0';
          local_38 = lVar1;
          FUN_00e383c0();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    else {
      local_50 = 0;
      FUN_00d50b00();
      local_50 = '\x01';
      local_58 = lVar2;
      FUN_00cb9950(param_1,&local_58);
      lVar1 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d23d90();
        if (*(int *)(lVar1 + 0xc) == 0) {
          lVar1 = *(int64_t *)(*arg1 + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_30 = '\0';
          local_38 = lVar1;
          FUN_00e383c0();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}

