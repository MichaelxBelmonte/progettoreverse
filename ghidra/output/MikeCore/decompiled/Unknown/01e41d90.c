// Function: FUN_01e41d90
// Address: 01e41d90
// Size: 543 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e41ef0) */
/* WARNING: Removing unreachable block (ram,0x01e41ecd) */

void FUN_01e41d90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar10;
  int local_48;
  
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  plVar7 = (longlong *)unaff_RDI[6];
  plVar8 = unaff_RDI;
  while (plVar4 = plVar7, plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)plVar4[6];
    plVar8 = plVar4;
    if ((longlong *)plVar4[6] == plVar4) {
      plVar7 = plVar4;
    }
  }
  cVar5 = (**(code **)(*plVar8 + 0x4b8))();
  if (cVar5 == '\0') {
    plVar8 = (longlong *)0x0;
    iVar1 = *(int *)((longlong)unaff_RDI + 0xb4);
    uVar9 = extraout_XMM0_Da;
  }
  else {
    uVar9 = FUN_00d50b00();
    iVar1 = *(int *)((longlong)unaff_RDI + 0xb4);
  }
  if (iVar1 == 0) {
    plVar4 = (longlong *)unaff_RDI[6];
    plVar7 = unaff_RDI;
    while (plVar3 = plVar4, plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[6];
      plVar7 = plVar3;
      if ((longlong *)plVar3[6] == plVar3) {
        plVar4 = plVar3;
      }
    }
    cVar5 = (**(code **)(*plVar7 + 0x4b8))();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar5 != '\0') {
      FUN_00d50b00();
      FUN_00d50b20();
      uVar9 = uVar10;
      FUN_01e436c0();
    }
  }
  FUN_01e3c350(uVar9);
  lVar2 = unaff_RDI[7];
  if (lVar2 != 0) {
    local_48 = -1;
    while( true ) {
      lVar6 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x10) + 8 + lVar6 * 8) + 0x4c0))();
    }
    FUN_000a9680();
  }
  if (plVar8 != (longlong *)0x0) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d8fd00();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar7 = (longlong *)unaff_RDI[0xc];
  FUN_00015ff0();
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar7 = unaff_RDI + 0xc;
    if (cVar5 != '\0') goto LAB_01e41f89;
  }
  plVar7 = &DAT_02802688;
LAB_01e41f89:
  if (*plVar7 != 0) {
    (**(code **)(*(longlong *)unaff_RDI[0xc] + 0x4e0))();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


