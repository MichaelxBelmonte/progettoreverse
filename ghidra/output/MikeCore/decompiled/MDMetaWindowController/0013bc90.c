// Function: FUN_0013bc90
// Address: 0013bc90
// Size: 960 bytes
// Class: MDMetaWindowController
// String references:
//   "_scaleModeSequence"


void FUN_0013bc90(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar3 = *unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0xb8) == lVar3) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
    FUN_0013c230();
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      *(undefined8 *)(unaff_RDI + 0x78) = 0;
      FUN_00d50b20();
    }
    lVar3 = *unaff_RSI;
  }
  lVar4 = *(longlong *)(unaff_RDI + 0xb8);
  lVar1 = lVar4;
  if (lVar4 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0xb8) = lVar3;
    lVar1 = lVar3;
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar1 = *(longlong *)(unaff_RDI + 0xb8);
    }
  }
  if (lVar1 == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  lVar3 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_0013c230();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_88 = DAT_026e37d0;
  if (DAT_026e37d0 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_58 = FUN_00e8b990();
  local_50 = 0;
  if (local_58 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  FUN_0013db50();
  lVar3 = FUN_00e85ef0();
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x28), lVar3 != 0)) goto LAB_0013bf21;
LAB_0013bf2f:
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) goto LAB_0013bf2f;
LAB_0013bf21:
    local_40 = 0;
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  local_48 = lVar3;
  FUN_000bfbc0(&local_58,&local_88,0x20,&local_48);
  lVar3 = *(longlong *)(unaff_RDI + 0x78);
  lVar4 = lVar3;
  if (lVar3 == local_38) goto LAB_0013bfc5;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_0013bf83;
    }
    FUN_00d50b00();
    lVar3 = *(longlong *)(unaff_RDI + 0x78);
    *(longlong *)(unaff_RDI + 0x78) = local_38;
    lVar4 = local_38;
  }
  else {
    local_30 = '\0';
    lVar4 = local_38;
LAB_0013bf83:
    *(longlong *)(unaff_RDI + 0x78) = lVar4;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_0013bfc5:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}


