// Function: FUN_01b41070
// Address: 01b41070
// Size: 898 bytes
// Class: MUScaleCreationData


/* WARNING: Removing unreachable block (ram,0x01b41111) */
/* WARNING: Removing unreachable block (ram,0x01b4111a) */

void FUN_01b41070(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong unaff_RDI;
  bool bVar8;
  longlong local_c0;
  char local_b8;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027c7928;
  pVar7 = (pthread_key_t)param_1;
  plVar1 = (longlong *)*param_1;
  if (DAT_027c7928 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01d2ac30();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b420c0();
    if (local_40 == 0) {
      bVar8 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01b420c0();
      iVar5 = FUN_00d8c7a0();
      bVar8 = iVar5 != 0;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pcVar2 = *(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x998);
    if (bVar8) {
      (*pcVar2)();
    }
    else {
      (*pcVar2)();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e4848;
  plVar1 = (longlong *)*param_1;
  if (DAT_027e4848 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar3 = *(longlong *)(unaff_RDI + 0xa0), lVar3 != 0)) {
    plVar1 = *(longlong **)(unaff_RDI + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x8a0))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *(longlong *)(unaff_RDI + 0xa0);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_01ab3680();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e4850;
  plVar1 = (longlong *)*param_1;
  if (DAT_027e4850 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar3 = *(longlong *)(unaff_RDI + 0xa8), lVar3 != 0)) {
    plVar1 = *(longlong **)(unaff_RDI + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x8a0))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *(longlong *)(unaff_RDI + 0xa8);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_01ab3680();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


