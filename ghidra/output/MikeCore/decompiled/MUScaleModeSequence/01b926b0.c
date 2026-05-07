// Function: FUN_01b926b0
// Address: 01b926b0
// Size: 909 bytes
// Class: MUScaleModeSequence
// String references:
//   "_scaleModeSequence"


void FUN_01b926b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) == *unaff_RSI) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
    FUN_00d50b00();
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01b927a0;
LAB_01b92792:
      FUN_00d50b00();
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01b92792;
LAB_01b927a0:
      lVar4 = 0;
    }
    FUN_00e8b9a0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((longlong *)(unaff_RDI + 0x138) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar4 = *unaff_RSI;
  lVar1 = *(longlong *)(unaff_RDI + 0x1f8);
  lVar2 = lVar1;
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x1f8) = lVar4;
    lVar2 = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = *(longlong *)(unaff_RDI + 0x1f8);
    }
  }
  if (lVar2 == 0) {
    local_38 = 0;
    local_30 = '\0';
    FUN_01b6d800();
    if (local_30 == '\0') {
      return;
    }
    if (local_38 != 0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
  FUN_00d50b00();
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      goto joined_r0x01b92927;
    }
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
joined_r0x01b92927:
    if (lVar4 != 0) {
      local_40 = 0;
      FUN_00d50b00();
      goto LAB_01b92939;
    }
  }
  lVar4 = 0;
LAB_01b92939:
  local_40 = '\x01';
  pVar5 = 0x10;
  local_48 = lVar4;
  FUN_00e8b850(0x10,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((longlong *)(unaff_RDI + 0x138) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_38 = local_88;
  local_30 = '\0';
  FUN_01b6d800();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}


