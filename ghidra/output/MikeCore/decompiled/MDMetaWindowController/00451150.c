// Function: FUN_00451150
// Address: 00451150
// Size: 596 bytes
// Class: MDMetaWindowController


void FUN_00451150(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined1 local_88 [8];
  undefined1 local_80;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
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
    cVar1 = *(char *)(unaff_RSI + 0x248);
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
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


