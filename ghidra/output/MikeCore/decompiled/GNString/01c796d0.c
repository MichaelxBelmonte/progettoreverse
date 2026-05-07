// Function: FUN_01c796d0
// Address: 01c796d0
// Size: 606 bytes
// Class: GNString


void FUN_01c796d0(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x1a8) == 0) {
    if (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x198) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x198);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01c51000();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x1a8);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01c51000();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x160) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar3 = *(longlong *)(unaff_RDI + 0x18);
    lVar1 = *(longlong *)(lVar3 + 0x160);
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
    }
    lVar3 = *(longlong *)(lVar3 + 0x188);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_01c878e0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


