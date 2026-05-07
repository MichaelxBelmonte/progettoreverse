// Function: FUN_013ebd50
// Address: 013ebd50
// Size: 580 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013ebf1d) */
/* WARNING: Removing unreachable block (ram,0x013ebf26) */

undefined8 * FUN_013ebd50(double param_1,double param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  pthread_key_t pVar8;
  undefined8 *puVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_50;
  char local_48;
  undefined8 *puVar9;
  
  dVar1 = *(double *)(unaff_RSI + 0x50);
  lVar6 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  FUN_00d50b20();
  iVar7 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  puVar9 = (undefined8 *)(ulonglong)(uint)(iVar7 >> 2);
  if (iVar7 >> 2 < (int)(param_2 * dVar1) + (int)(param_1 * dVar1)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
    *(undefined2 *)(puVar4 + 8) = 0;
    *puVar4 = &DAT_025dc9e8;
    puVar4[9] = 0;
    puVar4[10] = 0;
    FUN_00d500e0();
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar9);
    puVar10 = puVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      puVar9 = puVar4;
      puVar10 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    pVar8 = (pthread_key_t)puVar9;
    uVar2 = *(undefined8 *)(unaff_RSI + 0x50);
    FUN_00d64850();
    puVar10[10] = uVar2;
    FUN_00d64910();
    pvVar5 = _pthread_getspecific(pVar8);
    if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
      lVar6 = *(longlong *)(unaff_RSI + 0x48);
    }
    else {
      lVar6 = *(longlong *)(unaff_RSI + 0x48);
    }
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_00c92250();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


