// Function: FUN_012988e0
// Address: 012988e0
// Size: 841 bytes
// Class: MUAudioSourcePrincipalItem


void FUN_012988e0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = *unaff_RDI;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    lVar5 = *unaff_RDI;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0xa8);
  if (lVar5 != 0) {
    FUN_00d50b00();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar1 = _pthread_getspecific(param_1);
    lVar2 = local_50;
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar2 = *(longlong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    lVar2 = *(longlong *)(lVar2 + 0x100);
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = local_40;
    if ((pvVar1 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar3 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    lVar3 = *(longlong *)(lVar3 + 0x100);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != lVar3) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dffb0();
    }
  }
  lVar2 = *unaff_RDI;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    lVar2 = *unaff_RDI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar2 + 0xa0) != 0) {
    FUN_00d50b00();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar1 = _pthread_getspecific(param_1);
    lVar2 = local_50;
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar2 = *(longlong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    lVar2 = *(longlong *)(lVar2 + 0x100);
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = local_40;
    if ((pvVar1 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar3 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    lVar3 = *(longlong *)(lVar3 + 0x100);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != lVar3) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dffb0();
    }
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}


