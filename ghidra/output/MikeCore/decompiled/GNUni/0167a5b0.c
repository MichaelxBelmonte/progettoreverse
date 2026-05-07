// Function: FUN_0167a5b0
// Address: 0167a5b0
// Size: 736 bytes
// Class: GNUni


void FUN_0167a5b0(void)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  FUN_00cb1f10();
  local_40 = local_70;
  local_38 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_38 = '\x01';
  plVar5 = &local_40;
  FUN_00d41040(plVar5,&local_a0);
  pVar4 = (pthread_key_t)plVar5;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_016ae5f0();
  if (cVar2 != '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = 0;
    local_88 = '\0';
    local_80 = 0;
    local_78 = '\0';
    plVar5 = &local_80;
    FUN_00d41040(plVar5,&local_90);
    pVar4 = (pthread_key_t)plVar5;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00caee20();
  FUN_00cafd20();
  FUN_00cb1f10();
  FUN_00db3260();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db3290();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x38) + 0x470))();
  FUN_00d50130();
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    *(undefined8 *)(unaff_RDI + 0x38) = 0;
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50130();
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
    FUN_00d50b20();
  }
  FUN_00e83070();
  *(undefined8 *)(unaff_RDI + 0x28) = 0;
  FUN_00d50550();
  return;
}


