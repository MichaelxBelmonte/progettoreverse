// Function: FUN_01c1fe10
// Address: 01c1fe10
// Size: 538 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01c1ff4b) */
/* WARNING: Removing unreachable block (ram,0x01c1ff42) */
/* WARNING: Removing unreachable block (ram,0x01c1ff77) */
/* WARNING: Removing unreachable block (ram,0x01c1ff84) */
/* WARNING: Removing unreachable block (ram,0x01c1fe60) */
/* WARNING: Removing unreachable block (ram,0x01c1fe80) */
/* WARNING: Removing unreachable block (ram,0x01c1fe62) */
/* WARNING: Removing unreachable block (ram,0x01c1fe82) */

void FUN_01c1fe10(void)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40;
  int local_30;
  
  lVar1 = unaff_RDI[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_40 = '\0';
    local_48 = (longlong *)0x0;
    local_30 = -1;
    iVar4 = 0;
    while( true ) {
      lVar3 = (longlong)local_30;
      local_30 = local_30 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_30) break;
      local_48 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      bVar2 = (**(code **)(*local_48 + 0x380))();
      iVar4 = iVar4 + (uint)bVar2;
    }
    FUN_01c2d1e0();
    FUN_00d50b20();
    if (iVar4 != 0) {
      if ((char)unaff_RDI[0x37] != '\0') {
        return;
      }
      *(undefined1 *)(unaff_RDI + 0x37) = 1;
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2b] + 0x10))();
      FUN_00d50b00();
      FUN_01f47190();
      if (unaff_RDI + 0x2b != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2b] + 0x10))();
        FUN_00d50b20();
      }
      goto LAB_01c20016;
    }
  }
  if ((char)unaff_RDI[0x37] == '\0') {
    return;
  }
  *(undefined1 *)(unaff_RDI + 0x37) = 0;
  FUN_01f27fe0();
  (**(code **)(unaff_RDI[0x2b] + 0x10))();
  FUN_00d50b00();
  FUN_01f474f0();
  if (unaff_RDI + 0x2b != (longlong *)0x0) {
    (**(code **)(unaff_RDI[0x2b] + 0x10))();
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01c20016:
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


