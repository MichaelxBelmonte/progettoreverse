// Function: FUN_00e36370
// Address: 00e36370
// Size: 766 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x00e365b6) */
/* WARNING: Removing unreachable block (ram,0x00e365bf) */
/* WARNING: Removing unreachable block (ram,0x00e36657) */
/* WARNING: Removing unreachable block (ram,0x00e36664) */
/* WARNING: Removing unreachable block (ram,0x00e36600) */
/* WARNING: Removing unreachable block (ram,0x00e364c0) */
/* WARNING: Removing unreachable block (ram,0x00e36420) */
/* WARNING: Removing unreachable block (ram,0x00e36518) */
/* WARNING: Removing unreachable block (ram,0x00e36521) */
/* WARNING: Removing unreachable block (ram,0x00e36695) */
/* WARNING: Removing unreachable block (ram,0x00e36499) */
/* WARNING: Removing unreachable block (ram,0x00e363f9) */
/* WARNING: Removing unreachable block (ram,0x00e365d4) */

void FUN_00e36370(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00e313d0();
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x368))();
  lVar1 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar1 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      FUN_00e34b50();
    }
    FUN_00097c40();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      FUN_00e34b50();
    }
    FUN_00097c40();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x378))();
  FUN_00e367a0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  do {
    FUN_00d216c0();
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x368))();
    lVar1 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar1 != 0) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
        FUN_00d21140();
        FUN_00dee620();
      }
      FUN_00e37e10();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x378))();
    cVar2 = FUN_00da6900(DAT_02390108);
  } while (cVar2 == '\0');
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50550();
  return;
}


