// Function: FUN_0035bbc0
// Address: 0035bbc0
// Size: 541 bytes
// Class: MDKeyModifierActionHelper
// === MDKeyModifierActionHelper properties ===
//                   _cachePath
//                   _updateViewPositionDisabled
//                   _multiTrackViewDelegate


void FUN_0035bbc0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar1 = local_60;
  if (*this_ptr == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 != 0) {
    if (local_58 == '\0') {
      FUN_00d50b00();
    }
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar3 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      local_60 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      FUN_0035bbc0();
    }
    lVar3 = lVar1;
    FUN_000be170();
    param_1 = (void*)lVar3;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0035bdc4;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0035bdc4;
  if (*(int *)(local_60 + 0xc) != 0) {
    FUN_00d21140();
  }
  FUN_00d50b20();
LAB_0035bdc4:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

