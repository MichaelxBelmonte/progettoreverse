// Function: FUN_01537720
// Address: 01537720
// Size: 528 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01537902) */
/* WARNING: Removing unreachable block (ram,0x0153790b) */

void FUN_01537720(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  longlong *local_30;
  char local_28;
  
  FUN_00003020();
  FUN_00d91a70();
  plVar1 = *(longlong **)(unaff_RDI + 0x60);
  plVar3 = plVar1;
  if (plVar1 != local_30) {
    plVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_01537760;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x60);
      *(longlong **)(unaff_RDI + 0x60) = local_30;
    }
    else {
      local_28 = '\0';
LAB_01537760:
      *(longlong **)(unaff_RDI + 0x60) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d91a70();
  plVar1 = *(longlong **)(unaff_RDI + 0x68);
  plVar3 = plVar1;
  if (plVar1 != local_30) {
    plVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_015377df;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x68);
      *(longlong **)(unaff_RDI + 0x68) = local_30;
    }
    else {
      local_28 = '\0';
LAB_015377df:
      *(longlong **)(unaff_RDI + 0x68) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00003010();
  FUN_00d91a70();
  plVar1 = *(longlong **)(unaff_RDI + 0x70);
  plVar3 = plVar1;
  if (plVar1 == local_30) goto LAB_015378a0;
  plVar3 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_0153785e;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x70);
    *(longlong **)(unaff_RDI + 0x70) = local_30;
  }
  else {
    local_28 = '\0';
LAB_0153785e:
    *(longlong **)(unaff_RDI + 0x70) = plVar3;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar3 = local_30;
  }
LAB_015378a0:
  if ((local_28 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x550))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(unaff_RDI + 0x78) = 1;
  }
  FUN_00d630e0();
  return;
}


