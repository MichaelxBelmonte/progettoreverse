// Function: FUN_00ddc6f0
// Address: 00ddc6f0
// Size: 504 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x00ddc87f) */
/* WARNING: Removing unreachable block (ram,0x00ddc888) */

ulonglong FUN_00ddc6f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  int iVar8;
  
  cVar4 = (**(code **)(*unaff_RDI + 0x388))();
  pcVar3 = DAT_025795c0;
  if (cVar4 != '\0') {
LAB_00ddc717:
    uVar7 = 0;
    goto LAB_00ddc8aa;
  }
  iVar8 = (int)unaff_RDI[4];
  bVar2 = false;
  puVar6 = (undefined8 *)0x0;
  while (iVar5 = (**(code **)(*unaff_RDI + 0x390))(), iVar8 < iVar5) {
    FUN_00d8cbc0();
    cVar4 = FUN_00d90d50();
    if (cVar4 != '\0') break;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025795a8;
      (*pcVar3)();
      bVar2 = true;
    }
    FUN_00d8ea20();
    iVar8 = (int)unaff_RDI[4] + 1;
    *(int *)(unaff_RDI + 4) = iVar8;
  }
  if (puVar6 == (undefined8 *)0x0) {
    cVar4 = (**(code **)(*unaff_RDI + 0x388))();
    if (cVar4 != '\0') goto LAB_00ddc717;
    cVar4 = (**(code **)(*unaff_RDI + 0x388))();
    if (cVar4 == '\0') {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025795a8;
      (*pcVar3)();
      bVar2 = true;
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    unaff_RDI = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *unaff_RDI = (longlong)&DAT_025795a8;
    (*pcVar3)();
    plVar1 = (longlong *)*param_2;
    if (plVar1 == unaff_RDI) {
      if (*(char *)(param_2 + 1) == '\0') goto LAB_00ddc860;
      FUN_00d50b20();
    }
    else {
      *param_2 = unaff_RDI;
      if ((*(char *)(param_2 + 1) != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00ddc860:
      *(undefined1 *)(param_2 + 1) = 1;
    }
    FUN_00d8dbf0();
    FUN_00d8c7d0();
  }
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_00ddc8aa:
  return uVar7 & 0xffffffff;
}


