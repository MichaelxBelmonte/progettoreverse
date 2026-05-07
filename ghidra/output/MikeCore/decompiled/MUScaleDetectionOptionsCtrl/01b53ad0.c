// Function: FUN_01b53ad0
// Address: 01b53ad0
// Size: 566 bytes
// Class: MUScaleDetectionOptionsCtrl


/* WARNING: Removing unreachable block (ram,0x01b53ce9) */
/* WARNING: Removing unreachable block (ram,0x01b53cf2) */

void FUN_01b53ad0(pthread_key_t param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float fVar5;
  
  if (*unaff_RSI != 0) {
    *(longlong *)(unaff_RDI + 0x70) = *unaff_RSI;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02513f50;
    puVar3[7] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x3e) = 0;
    FUN_00d500e0();
    puVar1 = *(undefined8 **)(unaff_RDI + 0xc0);
    if (puVar1 == puVar3) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xc0) = puVar3;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b16fc0();
    FUN_01b56c30();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b16fd0();
    FUN_01b56d20();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01b16fe0();
    fVar5 = (float)_exp2f((float)iVar2 * DAT_023941f4);
    FUN_01b56d80(fVar5 * DAT_023941f8);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01b16ff0();
    fVar5 = (float)_exp2f((float)iVar2 * DAT_023941f4);
    FUN_01b56de0(fVar5 * DAT_023941f8);
    FUN_01acf890();
  }
  return;
}


