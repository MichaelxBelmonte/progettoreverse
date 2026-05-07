// Function: FUN_0179b200
// Address: 0179b200
// Size: 1002 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0179b50a) */
/* WARNING: Removing unreachable block (ram,0x0179b513) */
/* WARNING: Removing unreachable block (ram,0x0179b3cb) */
/* WARNING: Removing unreachable block (ram,0x0179b3d7) */
/* WARNING: Removing unreachable block (ram,0x0179b5b2) */
/* WARNING: Removing unreachable block (ram,0x0179b5bf) */

void FUN_0179b200(pthread_key_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  longlong unaff_RDI;
  int iVar8;
  undefined4 uVar9;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  
  if (*(longlong *)(unaff_RDI + 0x68) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0112f8a0();
    (**(code **)(*plVar5 + 0x18))();
    plVar2 = *(longlong **)(unaff_RDI + 0x68);
    if (plVar2 == plVar5) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0x68) = plVar5;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0179ac80();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar3 = _pthread_getspecific((pthread_key_t)puVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific((pthread_key_t)puVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_0150d280();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  uVar9 = FUN_00d214d0(uVar9,*(undefined4 *)((longlong)puVar4 + 0xc));
  if (local_50 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  FUN_00d242c0(uVar9,0);
  for (iVar8 = 0; iVar8 < *(int *)((longlong)puVar4 + 0xc); iVar8 = iVar8 + 1) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025c2b00;
    *(undefined2 *)(puVar6 + 7) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x3a) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    FUN_00d500e0();
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0179b1a0();
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0179b1f0();
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0179ac10();
    FUN_00d50b20();
  }
  FUN_0015ed50();
  FUN_00d50b20();
  return;
}


