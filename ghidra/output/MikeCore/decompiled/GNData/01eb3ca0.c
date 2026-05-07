// Function: FUN_01eb3ca0
// Address: 01eb3ca0
// Size: 566 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01eb3eb4) */
/* WARNING: Removing unreachable block (ram,0x01eb3ebd) */

longlong * FUN_01eb3ca0(void)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong local_58;
  longlong local_48;
  char local_40;
  
  if ((int)unaff_RSI[0x39] == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_58 = 0;
    bVar2 = false;
    plVar5 = (longlong *)0x0;
    while( true ) {
      (**(code **)(*unaff_RSI + 0x4a0))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= local_58) break;
      (**(code **)(*unaff_RSI + 0x4a0))();
      plVar4 = *(longlong **)(*(longlong *)(local_48 + 0x10) + local_58 * 8);
      if (plVar5 == plVar4) {
        if ((!bVar2) && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar4 = plVar5;
          goto LAB_01eb3dd6;
        }
      }
      else {
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01eb3dd6:
        bVar2 = true;
        plVar5 = plVar4;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      uVar6 = (**(code **)(*plVar5 + 0x930))();
      iVar1 = *(int *)(puVar3 + 3);
      FUN_00c8e340(uVar6,1);
      *(undefined4 *)(puVar3[2] + (longlong)iVar1) = uVar6;
      local_58 = local_58 + 1;
    }
    *unaff_RDI = (longlong)puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d46530();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        *unaff_RDI = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return unaff_RDI;
      }
      local_48 = 0;
    }
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


