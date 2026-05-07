// Function: FUN_00e47ce0
// Address: 00e47ce0
// Size: 794 bytes
// Class: GNBKVA


/* WARNING: Removing unreachable block (ram,0x00e47e34) */
/* WARNING: Removing unreachable block (ram,0x00e47e40) */
/* WARNING: Removing unreachable block (ram,0x00e47ec0) */
/* WARNING: Removing unreachable block (ram,0x00e47ecc) */
/* WARNING: Removing unreachable block (ram,0x00e47fbb) */
/* WARNING: Removing unreachable block (ram,0x00e47fc4) */

void FUN_00e47ce0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  lVar1 = *unaff_RSI;
  lVar4 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x38) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d4efa0();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_00e47d47;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
      *(longlong *)(unaff_RDI + 0x40) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e47d47:
      *(longlong *)(unaff_RDI + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e47ad0();
  *(longlong *)(unaff_RDI + 0x48) = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d797a0();
  FUN_00e5d8a0();
  FUN_00dac5e0();
  ___bzero();
  FUN_00dac5e0();
  plVar2 = *(longlong **)(unaff_RDI + 200);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    cVar3 = (**(code **)(*plVar2 + 0x18))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_00e47f73;
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x1e8))();
  plVar2 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x120))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x250))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47f73:
  plVar2 = *(longlong **)(unaff_RDI + 200);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x20))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


