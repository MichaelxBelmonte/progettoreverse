// Function: FUN_01653e10
// Address: 01653e10
// Size: 1164 bytes
// Class: MULSSGenerator


void FUN_01653e10(pthread_key_t param_1)

{
  longlong lVar1;
  pthread_key_t pVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01708f80();
  *(undefined8 *)(unaff_RDI + 0x80) = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_0164fef0();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar2 = FUN_01666ed0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  pVar5 = pVar2;
  FUN_012c9ae0(pVar2,1);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_01653f96;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x90);
      *(longlong *)(unaff_RDI + 0x90) = local_38;
    }
    else {
      local_30 = '\0';
LAB_01653f96:
      *(longlong *)(unaff_RDI + 0x90) = lVar4;
    }
    pVar5 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4be0();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_012f83f0();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_012c9ae0(pVar2,0);
  lVar1 = *(longlong *)(unaff_RDI + 0x98);
  lVar4 = lVar1;
  if (lVar1 == local_38) goto LAB_01654174;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_01654129;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x98);
    *(longlong *)(unaff_RDI + 0x98) = local_38;
  }
  else {
    local_30 = '\0';
LAB_01654129:
    *(longlong *)(unaff_RDI + 0x98) = lVar4;
  }
  pVar2 = (pthread_key_t)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_01654174:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar2);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4be0();
  pvVar3 = _pthread_getspecific(pVar2);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_012f83f0();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  *(undefined8 *)(unaff_RDI + 0x68) = 0x3ff0000000000000;
  FUN_01654510();
  *(undefined1 *)(unaff_RDI + 0xa5) = 1;
  return;
}


