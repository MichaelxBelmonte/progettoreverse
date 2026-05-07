// Function: FUN_019801c0
// Address: 019801c0
// Size: 875 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0198026e) */

void FUN_019801c0(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  bVar2 = false;
  if ((char)unaff_RSI[0x31] == '\0') {
LAB_019804e2:
    *unaff_RDI = 0;
    goto LAB_01980516;
  }
  if (unaff_RSI[0x2f] == 0) {
LAB_019804f1:
    plVar6 = (longlong *)0x0;
  }
  else {
    FUN_01989f80();
    lVar1 = unaff_RSI[0x2f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_48 + 0xaf8))();
    if (local_58 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = local_58;
      if (local_50 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        local_50 = '\0';
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_019804f1;
    (**(code **)(*unaff_RSI + 0x928))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01507f00();
    (**(code **)(*plVar6 + 0x928))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01507f00();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 != iVar4) {
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019804e2;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar6;
LAB_01980516:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


