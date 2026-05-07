// Function: FUN_0197ef60
// Address: 0197ef60
// Size: 703 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0197f011) */
/* WARNING: Removing unreachable block (ram,0x0197f01a) */

void FUN_0197ef60(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (unaff_RDI[0x2e] != *unaff_RSI) {
    if (unaff_RDI[0x2e] != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = 0;
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      local_40 = '\x01';
      local_48 = unaff_RDI + 0x2d;
      FUN_00e8b9a0();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = *unaff_RSI;
    lVar2 = unaff_RDI[0x2e];
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x2e] = lVar1;
      lVar3 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = unaff_RDI[0x2e];
      }
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_30 = 0;
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      local_30 = '\x01';
      local_68 = 0;
      local_60 = '\0';
      local_38 = unaff_RDI + 0x2d;
      FUN_00e8b850(0x20,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        (**(code **)(*local_38 + 0x10))();
        FUN_00d50b20();
      }
    }
    FUN_0197f3b0();
    lVar1 = unaff_RDI[0x2e];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_0197f680();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_0197e990();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)((longlong)unaff_RDI + 0x194) = 1;
  }
  return;
}


