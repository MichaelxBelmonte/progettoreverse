// Function: FUN_0142d0b0
// Address: 0142d0b0
// Size: 900 bytes
// Class: MUBezierFunctionPoint


/* WARNING: Removing unreachable block (ram,0x0142d2a9) */
/* WARNING: Removing unreachable block (ram,0x0142d2b2) */
/* WARNING: Removing unreachable block (ram,0x0142d3cd) */
/* WARNING: Removing unreachable block (ram,0x0142d3d6) */

void FUN_0142d0b0(pthread_key_t param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x50) == 0) {
    plVar3 = (longlong *)FUN_000bea40();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb6d0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb720();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025ddb28;
    puVar5[0xb] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x4b) = 0;
    pcVar2 = DAT_025ddb40;
    (*DAT_025ddb40)();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013fae90((int)DAT_023e11c8);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013faee0((int)*(undefined8 *)(unaff_RDI + 0x48));
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b30();
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025ddb28;
    puVar6[0xb] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4b) = 0;
    (*pcVar2)();
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013fae90((int)DAT_02411188);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013faee0((int)*(undefined8 *)(unaff_RDI + 0x48));
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b30();
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0x50);
    if (plVar1 != plVar3) {
      FUN_00d50b00();
      *(longlong **)(unaff_RDI + 0x50) = plVar3;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


