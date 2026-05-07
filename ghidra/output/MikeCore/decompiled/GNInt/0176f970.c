// Function: FUN_0176f970
// Address: 0176f970
// Size: 717 bytes
// Class: GNInt


longlong * FUN_0176f970(pthread_key_t param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  int iVar9;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_01a016a0();
  local_38 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = DAT_027cd5a0;
  plVar3 = local_38;
  if ((pvVar4 != (void *)0x0) &&
     (lVar5 = FUN_00e8b990(), lVar7 = DAT_027cd5a0, plVar3 = local_38, lVar5 != 0)) {
    plVar3 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  DAT_027cd5a0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_027cd5c0;
  if (DAT_027cd5c0 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar5;
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  plVar8 = &local_58;
  FUN_00d31230(plVar8,&local_68);
  lVar5 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar3[8] != lVar5) {
    FUN_00d64850();
    lVar1 = plVar3[8];
    if (lVar1 != lVar5) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = DAT_025ffd78;
  iVar9 = 0;
  do {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025ffd60;
    puVar6[7] = 0;
    puVar6[8] = 0;
    (*pcVar2)();
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779ed0((float)iVar9 * DAT_023908e0);
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779f40();
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
    if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar8 = local_38;
    }
    FUN_0176fde0();
    FUN_00d50b20();
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xd);
  *unaff_RDI = (longlong)local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


