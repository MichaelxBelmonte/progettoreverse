// Function: FUN_0197e990
// Address: 0197e990
// Size: 793 bytes
// Class: MUSpectrumShaper


void FUN_0197e990(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x180) != *unaff_RSI) {
    if (*(longlong *)(unaff_RDI + 0x180) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
      FUN_00d50b00();
      FUN_001156b0();
      FUN_00e86210();
      lVar1 = DAT_027e0cc0;
      if (DAT_027e0cc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00e8b9a0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((longlong *)(unaff_RDI + 0x168) != (longlong *)0x0) {
        (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = *unaff_RSI;
    lVar2 = *(longlong *)(unaff_RDI + 0x180);
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x180) = lVar1;
      lVar3 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = *(longlong *)(unaff_RDI + 0x180);
      }
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
      FUN_00d50b00();
      FUN_001156b0();
      FUN_00e86210();
      lVar1 = DAT_027e0cc0;
      if (DAT_027e0cc0 != 0) {
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
      if ((longlong *)(unaff_RDI + 0x168) != (longlong *)0x0) {
        (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}


