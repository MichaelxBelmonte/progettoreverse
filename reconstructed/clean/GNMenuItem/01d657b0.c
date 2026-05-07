// Function: FUN_01d657b0
// Address: 01d657b0
// Size: 1045 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d657b0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t in_stack_ffffffffffffffb8;
  char local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *(void*)(this_ptr + 0x70) = 1;
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  if (*(int64_t *)(*arg1 + 0x48) != 0) {
    FUN_01d5e2b0();
    FUN_00d50b00();
    local_40 = '\0';
    iVar5 = FUN_00d237a0();
    FUN_00d50b20();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    bVar3 = FUN_01d5b410();
    if (lVar1 != 0) {
      if (*(int64_t *)(lVar1 + 0x48) != 0) {
        (*PTR__objc_msgSend_024a9998)();
      }
      _objc_alloc();
      uVar6 = (*PTR__objc_msgSend_024a9998)();
      *(void*)(lVar1 + 0x48) = uVar6;
    }
    cVar4 = FUN_01d65330();
    in_stack_ffffffffffffffb8 = this_ptr;
    if (cVar4 == '\0') {
      _objc_alloc();
      uVar6 = (*PTR__objc_msgSend_024a9998)();
      FUN_00d50b00();
      (*PTR__objc_msgSend_024a9998)();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x20);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01f1fc80();
      (*PTR__objc_msgSend_024a9998)();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x28);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar7 = FUN_00e1cfc0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        (*PTR__objc_msgSend_024a9998)();
      }
      (*PTR__objc_msgSend_024a9998)();
      (*PTR__objc_msgSend_024a9998)();
      (*PTR__objc_msgSend_024a9998)((int64_t)(int)(iVar5 + (uint)bVar3),uVar6);
      if ((lVar1 != 0) && (*(int64_t *)(lVar1 + 0x48) != 0)) {
        (*PTR__objc_msgSend_024a9998)();
        (*PTR__objc_msgSend_024a9998)();
        (*PTR__objc_msgSend_024a9998)();
      }
      FUN_00d50b00();
      FUN_01f25af0();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      (*PTR__objc_release_024a99a0)();
    }
    else {
      (*PTR__objc_msgSend_024a9998)();
      (*PTR__objc_msgSend_024a9998)();
    }
  }
  (*PTR__objc_release_024a99a0)();
  if (lVar1 != 0) {
    if (((*(int64_t *)(lVar1 + 0x48) != 0) && (*(int64_t *)(*arg1 + 0x48) != 0)) &&
       (iVar5 = FUN_01d5b230(), 0 < iVar5)) {
      iVar8 = 0;
      do {
        FUN_01d5b240();
        FUN_01d657b0();
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar5 != iVar8);
    }
    FUN_00d50b20();
  }
  return;
}

