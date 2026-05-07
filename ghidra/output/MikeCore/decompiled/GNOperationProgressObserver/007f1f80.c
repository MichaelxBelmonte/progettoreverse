// Function: FUN_007f1f80
// Address: 007f1f80
// Size: 502 bytes
// Class: GNOperationProgressObserver


void FUN_007f1f80(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_68 = '\0';
  local_70 = 0;
  FUN_01502670(param_2,&local_70);
  lVar4 = local_40;
  pVar5 = (pthread_key_t)param_2;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    local_50 = local_60;
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    FUN_016cbba0();
    lVar2 = local_40;
    if (local_40 == 0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        bVar1 = true;
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = 0;
    if (bVar1) {
      lVar4 = lVar2;
    }
    if (lVar2 != 0 && !bVar1) {
      FUN_00d50b00();
      lVar4 = lVar2;
    }
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


