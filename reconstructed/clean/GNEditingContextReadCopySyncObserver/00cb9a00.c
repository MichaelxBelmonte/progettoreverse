// Function: FUN_00cb9a00
// Address: 00cb9a00
// Size: 806 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cb9a00(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  void*local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x90) != 0) &&
     (lVar1 = *arg1, *(char *)(lVar1 + 0x39) == '\0')) {
    lVar2 = *(int64_t *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      lVar1 = *(int64_t *)(lVar1 + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
        FUN_00cb98a0();
        if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b00();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (local_40 == (void*)0x0) {
          local_40 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &g_02572358;
          (*g_02572370)();
          lVar1 = *(int64_t *)(*arg1 + 0x20);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00cba070();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d21140();
        if (local_40 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d50b00();
      FUN_00cb9950();
      if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == (void*)0x0) {
        local_40 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &g_02572358;
        (*g_02572370)();
        lVar1 = *(int64_t *)(*arg1 + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00cb9fc0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d21140();
      if (local_40 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

