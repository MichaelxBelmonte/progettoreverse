// Function: FUN_012e53c0
// Address: 012e53c0
// Size: 780 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x012e53ea) */
/* WARNING: Removing unreachable block (ram,0x012e53f3) */

void FUN_012e53c0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  
  FUN_00d50f50();
  if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_011f0ad0();
    if (iVar3 != *(int *)(unaff_RDI + 0x94)) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f0a90();
    }
    if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_011f0b20();
      if (iVar3 != *(int *)(unaff_RDI + 0x94)) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f0ae0();
      }
    }
  }
  lVar5 = DAT_027bf3f0;
  plVar1 = *(longlong **)(unaff_RDI + 0xf0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (DAT_027bf3f0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027c0fe0;
  lVar6 = DAT_027bf400;
  if (cVar2 == '\0') {
    plVar1 = *(longlong **)(unaff_RDI + 0xf0);
    if (DAT_027bf400 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar1 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    lVar6 = DAT_027bf3f8;
    lVar5 = DAT_02729638;
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(unaff_RDI + 0xf0);
      if (DAT_027bf3f8 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar5 = DAT_027c1000;
      if (cVar2 == '\0') {
        return;
      }
      if (DAT_027c1000 != 0) {
        FUN_00d50b00();
        lVar6 = *(longlong *)(unaff_RDI + 0xf0);
        if (lVar6 == lVar5) {
          FUN_00d50b20();
          return;
        }
        goto LAB_012e56b0;
      }
    }
    else if (DAT_02729638 != 0) {
      FUN_00d50b00();
      lVar6 = *(longlong *)(unaff_RDI + 0xf0);
      if (lVar6 == lVar5) {
        FUN_00d50b20();
        return;
      }
      goto LAB_012e56b0;
    }
  }
  else if (DAT_027c0fe0 != 0) {
    FUN_00d50b00();
    lVar6 = *(longlong *)(unaff_RDI + 0xf0);
    if (lVar6 == lVar5) {
      FUN_00d50b20();
      return;
    }
    goto LAB_012e56b0;
  }
  lVar6 = *(longlong *)(unaff_RDI + 0xf0);
  if (lVar6 == lVar5) {
    return;
  }
LAB_012e56b0:
  *(longlong *)(unaff_RDI + 0xf0) = lVar5;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


