// Function: FUN_01f81660
// Address: 01f81660
// Size: 537 bytes
// Class: GNRadialColorGradient


/* WARNING: Removing unreachable block (ram,0x01f8180d) */
/* WARNING: Removing unreachable block (ram,0x01f81816) */
/* WARNING: Removing unreachable block (ram,0x01f8184b) */
/* WARNING: Removing unreachable block (ram,0x01f81854) */
/* WARNING: Removing unreachable block (ram,0x01f816b2) */
/* WARNING: Removing unreachable block (ram,0x01f816bb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f81660(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d48370();
  (**(code **)(*local_40 + 0x4f0))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3b0))();
  (**(code **)(*local_40 + 0x3a8))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))(_DAT_023b4a20);
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3f0))();
  FUN_01eab940(param_1,param_2);
  FUN_01d48390();
  FUN_00d50b20();
  return;
}


