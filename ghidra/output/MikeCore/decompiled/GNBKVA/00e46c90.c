// Function: FUN_00e46c90
// Address: 00e46c90
// Size: 1186 bytes
// Class: GNBKVA


/* WARNING: Removing unreachable block (ram,0x00e46dc2) */
/* WARNING: Removing unreachable block (ram,0x00e46e10) */
/* WARNING: Removing unreachable block (ram,0x00e46e25) */
/* WARNING: Removing unreachable block (ram,0x00e46e14) */
/* WARNING: Removing unreachable block (ram,0x00e46dcc) */
/* WARNING: Removing unreachable block (ram,0x00e46dd0) */
/* WARNING: Removing unreachable block (ram,0x00e46dd8) */
/* WARNING: Removing unreachable block (ram,0x00e46f6d) */
/* WARNING: Removing unreachable block (ram,0x00e46f79) */
/* WARNING: Removing unreachable block (ram,0x00e46fde) */
/* WARNING: Removing unreachable block (ram,0x00e46fea) */
/* WARNING: Removing unreachable block (ram,0x00e470f2) */
/* WARNING: Removing unreachable block (ram,0x00e470fe) */
/* WARNING: Removing unreachable block (ram,0x00e46d98) */
/* WARNING: Removing unreachable block (ram,0x00e46da1) */
/* WARNING: Removing unreachable block (ram,0x00e46e03) */
/* WARNING: Removing unreachable block (ram,0x00e46e43) */
/* WARNING: Removing unreachable block (ram,0x00e46e4c) */
/* WARNING: Removing unreachable block (ram,0x00e47123) */
/* WARNING: Removing unreachable block (ram,0x00e47128) */

void FUN_00e46c90(void)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
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
  if (lVar1 != local_48) {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar4 = 0;
        goto LAB_00e46cfc;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
      *(longlong *)(unaff_RDI + 0x40) = local_48;
    }
    else {
      local_40 = '\0';
LAB_00e46cfc:
      *(longlong *)(unaff_RDI + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    do {
      cVar2 = FUN_00e3a1c0();
      if (cVar2 == '\0') break;
      FUN_00c80a40();
    } while (lVar1 != 0);
    local_40 = '\0';
    lVar4 = *(longlong *)(unaff_RDI + 0x40);
    local_48 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
  }
  FUN_00e47ad0();
  *(longlong *)(unaff_RDI + 0x48) = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    plVar3 = (longlong *)FUN_00e4c0a0();
    (**(code **)(*plVar3 + 0x18))();
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00e47b80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    *(longlong **)(unaff_RDI + 0x48) = plVar3;
    FUN_00d50b20();
  }
  plVar3 = *(longlong **)(unaff_RDI + 200);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
    cVar2 = (**(code **)(*plVar3 + 0x18))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_00e47094;
  }
  cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x1e8))();
  plVar3 = (longlong *)*unaff_RSI;
  if (cVar2 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x120))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x250))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47094:
  plVar3 = *(longlong **)(unaff_RDI + 200);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x20))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


