// Function: FUN_0039f7d0
// Address: 0039f7d0
// Size: 541 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x0039f98e) */
/* WARNING: Removing unreachable block (ram,0x0039f997) */
/* WARNING: Removing unreachable block (ram,0x0039f965) */
/* WARNING: Removing unreachable block (ram,0x0039f96e) */
/* WARNING: Removing unreachable block (ram,0x0039f9bb) */
/* WARNING: Removing unreachable block (ram,0x0039f9c4) */
/* WARNING: Removing unreachable block (ram,0x0039f825) */
/* WARNING: Removing unreachable block (ram,0x0039f82e) */
/* WARNING: Removing unreachable block (ram,0x0039f8e6) */
/* WARNING: Removing unreachable block (ram,0x0039f8f3) */

void FUN_0039f7d0(void)

{
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  FUN_01d39800(unaff_RDI[0x5c],unaff_RDI[0x5d],DAT_02390124);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_90 + 0x390))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  FUN_01cfcdc0(*(undefined4 *)(local_40 + 0x10),*(undefined4 *)(local_40 + 0x14),
               *(undefined4 *)(local_40 + 0x18),DAT_02394288);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  FUN_01d488d0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


