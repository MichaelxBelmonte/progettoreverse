// Function: FUN_019f90e0
// Address: 019f90e0
// Size: 753 bytes
// Class: MUScalePitchSystem


void FUN_019f90e0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x80) != *unaff_RSI) {
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_40 = 0;
        (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_30 = 0;
        local_38 = *(longlong *)(unaff_RDI + 0x80);
        local_48 = (longlong *)(unaff_RDI + 0x10);
        if (local_38 != 0) {
          FUN_00d50b00();
        }
        local_30 = '\x01';
        local_88 = 0;
        local_80 = '\0';
        plVar5 = &local_88;
        FUN_00cbadd0(plVar5,&local_38);
        param_1 = (pthread_key_t)plVar5;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *unaff_RSI;
    lVar1 = *(longlong *)(unaff_RDI + 0x80);
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x80) = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(unaff_RDI + 0x80);
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
        FUN_00d50b00();
        local_70 = '\x01';
        local_50 = 0;
        local_58 = *(longlong *)(unaff_RDI + 0x80);
        local_78 = (longlong *)(unaff_RDI + 0x10);
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = 0;
        local_60 = '\0';
        FUN_00cbad80(&local_68,&local_58,0x20);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


