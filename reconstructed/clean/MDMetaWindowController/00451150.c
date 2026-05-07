// Function: FUN_00451150
// Address: 00451150
// Size: 596 bytes
// Class: MDMetaWindowController

void FUN_00451150(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t arg1;
  void*this_ptr;
  uint8_t local_88 [8];
  uint8_t local_80;
  uint8_t local_78 [8];
  uint8_t local_70;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    cVar1 = *(char *)(arg1 + 0x248);
    pvVar2 = _pthread_getspecific(param_1);
    if (cVar1 == '\0') {
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8b20();
    }
    else {
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8a60();
    }
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = 1;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = 1;
    FUN_00451bd0(local_78,local_88);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    return;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

