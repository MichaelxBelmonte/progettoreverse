// Function: FUN_01d80540
// Address: 01d80540
// Size: 513 bytes
// Class: GNBackgroundView


/* WARNING: Removing unreachable block (ram,0x01d8072a) */
/* WARNING: Removing unreachable block (ram,0x01d80737) */
/* WARNING: Removing unreachable block (ram,0x01d8065e) */
/* WARNING: Removing unreachable block (ram,0x01d80667) */
/* WARNING: Removing unreachable block (ram,0x01d806e3) */
/* WARNING: Removing unreachable block (ram,0x01d806ec) */

void FUN_01d80540(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_b8;
  char local_b0;
  
  if (unaff_RDI[0x2d] == 0) {
    if (((*(float *)(unaff_RDI + 0x30) <= 0.0) || (unaff_RDI[0x31] == 0)) &&
       ((char)unaff_RDI[0x36] == '\0')) {
      FUN_01e44a80(param_1,param_2);
      goto LAB_01d8069e;
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_01d48370();
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01d7ebd0();
  if ((local_b0 == '\0') && (local_b8 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x398))();
  if (local_b8 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] != 0) {
    FUN_01d80840();
  }
  FUN_01e44a80(param_1,param_2);
  if (unaff_RDI[0x28] == 0) {
    FUN_01d80840();
  }
  FUN_01d48390();
LAB_01d8069e:
  if (unaff_RDI[0x29] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*unaff_RDI + 0x918))(param_1,param_2);
  }
  return;
}


