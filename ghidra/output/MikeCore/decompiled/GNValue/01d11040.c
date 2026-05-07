// Function: FUN_01d11040
// Address: 01d11040
// Size: 511 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01d11107) */
/* WARNING: Removing unreachable block (ram,0x01d11110) */
/* WARNING: Removing unreachable block (ram,0x01d1116c) */
/* WARNING: Removing unreachable block (ram,0x01d11175) */
/* WARNING: Removing unreachable block (ram,0x01d110c8) */
/* WARNING: Removing unreachable block (ram,0x01d110d1) */
/* WARNING: Removing unreachable block (ram,0x01d11085) */
/* WARNING: Removing unreachable block (ram,0x01d1108e) */
/* WARNING: Removing unreachable block (ram,0x01d111d5) */
/* WARNING: Removing unreachable block (ram,0x01d111e2) */

void FUN_01d11040(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong *unaff_RDI;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0xa18))();
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0xab0))();
    if (local_40 != (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      local_50 = local_40;
      FUN_01caeba0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      FUN_01caeb80();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x3b8))(param_1,0);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      bVar1 = false;
      bVar2 = false;
      goto LAB_01d111fb;
    }
    bVar1 = false;
  }
  bVar2 = true;
  local_50 = (longlong *)0x0;
LAB_01d111fb:
  (**(code **)(*unaff_RDI + 0x998))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2 && local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


