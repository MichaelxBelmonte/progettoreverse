// Function: FUN_01d26990
// Address: 01d26990
// Size: 513 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d26b39) */
/* WARNING: Removing unreachable block (ram,0x01d26b46) */
/* WARNING: Removing unreachable block (ram,0x01d26a0c) */
/* WARNING: Removing unreachable block (ram,0x01d26a15) */
/* WARNING: Removing unreachable block (ram,0x01d269d2) */
/* WARNING: Removing unreachable block (ram,0x01d269db) */
/* WARNING: Removing unreachable block (ram,0x01d26a70) */
/* WARNING: Removing unreachable block (ram,0x01d26a79) */
/* WARNING: Removing unreachable block (ram,0x01d26ab9) */
/* WARNING: Removing unreachable block (ram,0x01d26ae0) */
/* WARNING: Removing unreachable block (ram,0x01d26abb) */
/* WARNING: Removing unreachable block (ram,0x01d26ae3) */

longlong * FUN_01d26990(void)

{
  undefined4 uVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  int local_48;
  
  (**(code **)(*unaff_RSI + 0x3f8))();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  (**(code **)(*unaff_RSI + 0x3f8))();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01d26b78;
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
LAB_01d26b78:
    *unaff_RDI = local_60;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    goto LAB_01d26b80;
  }
  local_48 = -1;
  while (local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc)) {
    uVar1 = FUN_00d237a0();
    *(undefined4 *)(*(longlong *)(local_60 + 0x10) + (longlong)local_48 * 4) = uVar1;
  }
  FUN_00083b20();
  FUN_00d50b20();
  *unaff_RDI = local_60;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_60 == 0) {
    return unaff_RDI;
  }
LAB_01d26b80:
  FUN_00d50b20();
  return unaff_RDI;
}


