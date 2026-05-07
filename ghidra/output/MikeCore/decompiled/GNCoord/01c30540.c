// Function: FUN_01c30540
// Address: 01c30540
// Size: 841 bytes
// Class: GNCoord


void FUN_01c30540(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (longlong *)(unaff_RDI + 0xb8);
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e1b98;
    if (DAT_027e1b98 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    pVar3 = 0x20;
    FUN_00e8b850(0x20,&local_70);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar4 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e3ba0;
    if (DAT_027e3ba0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e8b850(0x20,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}


