// Function: FUN_01512890
// Address: 01512890
// Size: 666 bytes
// Class: MUPercussivePitchSystem


uint FUN_01512890(pthread_key_t param_1)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar4 + 0x88) == 0) {
    do {
      lVar3 = *(longlong *)(lVar4 + 0x50);
      if (lVar3 == 0) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)(lVar4 + 0x50);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
      }
      lVar4 = lVar3;
    } while (*(longlong *)(lVar3 + 0x88) == 0);
    lVar4 = *(longlong *)(lVar3 + 0x88);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x88);
  }
  if (lVar4 == 0) {
    return 0;
  }
  FUN_00d50b00();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = *(longlong *)(unaff_RDI + 0x88);
  }
  else {
    lVar4 = *(longlong *)(unaff_RDI + 0x88);
  }
  if (lVar4 == 0) {
    do {
      lVar4 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar4 == 0) {
        local_50 = 0;
        goto LAB_01512a5a;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar4 = *(longlong *)(unaff_RDI + 0x50);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      unaff_RDI = lVar4;
    } while (*(longlong *)(lVar4 + 0x88) == 0);
    local_50 = *(longlong *)(lVar4 + 0x88);
  }
  else {
    local_50 = *(longlong *)(unaff_RDI + 0x88);
  }
  if (local_50 != 0) {
    FUN_00d50b00();
  }
LAB_01512a5a:
  uVar1 = FUN_00d51e10();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150c7f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return uVar1 ^ 1;
}


