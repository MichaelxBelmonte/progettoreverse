// Function: FUN_01d2aeb0
// Address: 01d2aeb0
// Size: 605 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2b0db) */
/* WARNING: Removing unreachable block (ram,0x01d2b0e4) */
/* WARNING: Removing unreachable block (ram,0x01d2af49) */
/* WARNING: Removing unreachable block (ram,0x01d2af52) */

void FUN_01d2aeb0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong unaff_RDI;
  int iVar6;
  undefined8 *local_68;
  char local_60;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar1 == 0) {
    puVar4 = *(undefined8 **)(unaff_RDI + 0x10);
LAB_01d2af17:
    local_68 = puVar4;
    if (local_68 == (undefined8 *)0x0) {
      bVar2 = false;
      local_68 = (undefined8 *)0x0;
      goto LAB_01d2b0c1;
    }
    FUN_00d50b00();
    bVar2 = true;
  }
  else {
    puVar4 = *(undefined8 **)(unaff_RDI + 0x10);
    if (*(int *)((longlong)*(undefined8 **)(unaff_RDI + 0x10) + 0xc) == 0) goto LAB_01d2af17;
    FUN_00d50b00();
    FUN_01d2c130();
    if (local_68 == (undefined8 *)0x0) {
      local_68 = (undefined8 *)0x0;
      bVar2 = false;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = *(int *)(unaff_RDI + 0xb4);
  if ((iVar5 == 0) || (local_68 == (undefined8 *)0x0)) goto LAB_01d2b0c1;
  iVar6 = *(int *)((longlong)local_68 + 0xc);
  if (iVar6 < iVar5) {
    *(undefined4 *)(unaff_RDI + 0xb0) = 0;
    goto LAB_01d2b0c1;
  }
  iVar5 = (uint)(0 < iVar6 % iVar5) + iVar6 / iVar5;
  if (iVar5 <= *(int *)(unaff_RDI + 0xb0)) {
    *(int *)(unaff_RDI + 0xb0) = iVar5 + -1;
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  iVar5 = *(int *)(unaff_RDI + 0xb4);
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 * *(int *)(unaff_RDI + 0xb0) + iVar6;
      if (*(int *)((longlong)local_68 + 0xc) <= iVar5) break;
      lVar1 = *(longlong *)(local_68[2] + (longlong)iVar5 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(unaff_RDI + 0xb4);
    } while (iVar6 < iVar5);
  }
  if (puVar4 == local_68) {
    bVar3 = bVar2;
    if ((bVar2) || (puVar4 == (undefined8 *)0x0)) goto joined_r0x01d2b112;
    bVar2 = true;
    FUN_00d50b00();
  }
  else {
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    local_68 = puVar4;
    bVar3 = true;
    if (bVar2) {
      FUN_00d50b20();
    }
joined_r0x01d2b112:
    bVar2 = bVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_01d2b0c1;
  }
  FUN_00d50b20();
LAB_01d2b0c1:
  FUN_01d2b660();
  if ((bVar2) && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


