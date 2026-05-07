// Function: FUN_013e0cc0
// Address: 013e0cc0
// Size: 1652 bytes
// Class: MUAudioSourceAttackItem


/* WARNING: Removing unreachable block (ram,0x013e11ab) */
/* WARNING: Removing unreachable block (ram,0x013e11b4) */
/* WARNING: Removing unreachable block (ram,0x013e0ee9) */
/* WARNING: Removing unreachable block (ram,0x013e0e7e) */
/* WARNING: Removing unreachable block (ram,0x013e0e8a) */
/* WARNING: Removing unreachable block (ram,0x013e0dc4) */
/* WARNING: Removing unreachable block (ram,0x013e0db8) */
/* WARNING: Removing unreachable block (ram,0x013e0e22) */
/* WARNING: Removing unreachable block (ram,0x013e0e2e) */
/* WARNING: Removing unreachable block (ram,0x013e0ee0) */
/* WARNING: Removing unreachable block (ram,0x013e1135) */
/* WARNING: Removing unreachable block (ram,0x013e113e) */
/* WARNING: Removing unreachable block (ram,0x013e1204) */
/* WARNING: Removing unreachable block (ram,0x013e120d) */
/* WARNING: Removing unreachable block (ram,0x013e0d55) */
/* WARNING: Removing unreachable block (ram,0x013e0d5e) */

void FUN_013e0cc0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x58) != 0) {
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_013e0d63;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_013e0d63:
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbe30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328650();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc570();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd650();
    FUN_013dfe00();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01334f30();
  if (cVar1 == '\0') {
    return;
  }
  FUN_013de560();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  plVar5 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  cVar1 = (**(code **)(*plVar5 + 0x3c0))();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    plVar5 = local_40;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    cVar1 = (**(code **)(*plVar5 + 0x3c8))();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      plVar5 = local_40;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      cVar1 = (**(code **)(*plVar5 + 0x3d0))();
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_014bc070();
        if (cVar1 == '\0') goto LAB_013e131a;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_007ef480();
  *puVar4 = &DAT_025fb6c8;
  pVar6 = 0x25fbb28;
  puVar4[7] = &DAT_025fbb28;
  (*DAT_025fb6e0)();
  plVar5 = (longlong *)FUN_00115860();
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01329b30();
  FUN_013dfe00();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd650();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc440();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar6);
  plVar5 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x380))();
  FUN_014bb250();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar6);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*local_40 + 0x388))();
  FUN_014bb2b0();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_013e131a:
  FUN_00d50b20();
  return;
}


