// Function: FUN_01b6d800
// Address: 01b6d800
// Size: 1007 bytes
// Class: MDMetaWindowController


void FUN_01b6d800(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (unaff_RDI[0x2b] != *unaff_RSI) {
    cVar3 = (**(code **)(*unaff_RDI + 0xa28))();
    if ((cVar3 != '\0') && (unaff_RDI[0x29] != 0)) {
      FUN_01e04c20();
      if (unaff_RDI[0x29] != 0) {
        unaff_RDI[0x29] = 0;
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x620))();
    }
    lVar5 = 0;
    if (unaff_RDI[0x2b] != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      if (lVar5 == 0) {
        local_50 = 0;
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b00();
        local_50 = '\x01';
        local_58 = unaff_RDI + 0x27;
        FUN_00cbb340();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          (**(code **)(*local_58 + 0x10))();
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b00();
        local_70 = 0;
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b00();
        local_70 = '\x01';
        local_60 = 0;
        local_68 = unaff_RDI[0x2b];
        local_78 = unaff_RDI + 0x27;
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_a8 = 0;
        local_a0 = '\0';
        plVar6 = &local_a8;
        FUN_00cbadd0(plVar6,&local_68);
        param_1 = (pthread_key_t)plVar6;
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar5 = unaff_RDI[0x2b];
    }
    lVar1 = *unaff_RSI;
    lVar2 = lVar5;
    if (lVar5 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x2b] = lVar1;
      lVar2 = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
        lVar2 = unaff_RDI[0x2b];
      }
    }
    if (lVar2 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        FUN_00d50b00();
        local_40 = 0;
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_30 = 0;
        local_38 = unaff_RDI[0x2b];
        local_48 = unaff_RDI + 0x27;
        if (local_38 != 0) {
          FUN_00d50b00();
        }
        local_30 = '\x01';
        local_98 = 0;
        local_90 = '\0';
        FUN_00cbad80(&local_98,&local_38,0x20);
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    cVar3 = (**(code **)(*unaff_RDI + 0x998))();
    if (cVar3 != '\0') {
      local_80 = '\0';
      local_88 = 0;
      (**(code **)(*unaff_RDI + 0x9a8))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    cVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
    if (cVar3 != '\0') {
      (**(code **)(*unaff_RDI + 0xa10))();
    }
    (**(code **)(*unaff_RDI + 0x620))();
  }
  return;
}


