// Function: FUN_00526a80
// Address: 00526a80
// Size: 589 bytes
// Class: GNString
// String references:
//   "%@.pmpd"


void FUN_00526a80(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x368);
  if (lVar1 != 0) goto joined_r0x00526c82;
  FUN_00ce7000();
  FUN_00d9bb60();
  if (local_c0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  (**(code **)(*local_d0 + 0x400))();
  lVar1 = *(longlong *)(unaff_RDI + 0x368);
  lVar2 = lVar1;
  if (lVar1 != local_90) {
    lVar2 = local_90;
    if (local_88 == '\0') {
      if (local_90 == 0) {
        lVar2 = 0;
        goto LAB_00526b92;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x368);
      *(longlong *)(unaff_RDI + 0x368) = local_90;
    }
    else {
      local_88 = '\0';
LAB_00526b92:
      *(longlong *)(unaff_RDI + 0x368) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_90;
    }
  }
  if ((local_88 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x368);
joined_r0x00526c82:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00c91c80();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


