// Function: FUN_006101a0
// Address: 006101a0
// Size: 535 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00610303) */
/* WARNING: Removing unreachable block (ram,0x00610308) */
/* WARNING: Removing unreachable block (ram,0x00610279) */
/* WARNING: Removing unreachable block (ram,0x00610282) */
/* WARNING: Removing unreachable block (ram,0x006101fc) */
/* WARNING: Removing unreachable block (ram,0x00610205) */
/* WARNING: Removing unreachable block (ram,0x00610249) */
/* WARNING: Removing unreachable block (ram,0x00610252) */
/* WARNING: Removing unreachable block (ram,0x006102b7) */
/* WARNING: Removing unreachable block (ram,0x00610335) */
/* WARNING: Removing unreachable block (ram,0x0061033e) */

undefined8 FUN_006101a0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  
  (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x478))();
  lVar1 = unaff_RDI[0x42];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d237a0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x960))();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0xa78))();
  (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x960))();
  lVar2 = unaff_RDI[0x42];
  lVar3 = *(longlong *)(lVar2 + 0x18);
  if (lVar3 != lVar1) {
    if (lVar1 == 0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = *(longlong *)(lVar2 + 0x18);
      *(longlong *)(lVar2 + 0x18) = lVar1;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[0x40] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x40] + 0x38))();
  }
  if (unaff_RDI[0x41] != 0) {
    unaff_RDI[0x41] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x42] != 0) {
    unaff_RDI[0x42] = 0;
    FUN_00d50b20();
  }
  FUN_006083c0();
  (**(code **)(*unaff_RDI + 0x620))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return 1;
}


