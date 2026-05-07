// Function: FUN_00756aa0
// Address: 00756aa0
// Size: 679 bytes
// Class: MUAudioIOSlot


/* WARNING: Removing unreachable block (ram,0x00756d30) */
/* WARNING: Removing unreachable block (ram,0x00756d3d) */

void FUN_00756aa0(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7c90();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      plVar1 = (longlong *)unaff_RDI[0xe];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013201a0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_01320130();
      (**(code **)(*plVar1 + 0x428))(uVar5,uVar4);
      FUN_00d50b20();
      plVar1 = (longlong *)unaff_RDI[0xe];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x628))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a7cd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x400))();
      param_1 = (pthread_key_t)lVar3;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    plVar1 = (longlong *)unaff_RDI[0xe];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7cf0();
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


