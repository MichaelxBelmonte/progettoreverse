// Function: FUN_01dd0960
// Address: 01dd0960
// Size: 894 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x01dd0a97) */
/* WARNING: Removing unreachable block (ram,0x01dd0aa3) */
/* WARNING: Removing unreachable block (ram,0x01dd0a7b) */
/* WARNING: Removing unreachable block (ram,0x01dd0a87) */
/* WARNING: Removing unreachable block (ram,0x01dd0b01) */
/* WARNING: Removing unreachable block (ram,0x01dd0b20) */
/* WARNING: Removing unreachable block (ram,0x01dd0b25) */
/* WARNING: Removing unreachable block (ram,0x01dd0b30) */
/* WARNING: Removing unreachable block (ram,0x01dd0b37) */
/* WARNING: Removing unreachable block (ram,0x01dd0b07) */
/* WARNING: Removing unreachable block (ram,0x01dd0b0e) */
/* WARNING: Removing unreachable block (ram,0x01dd0b85) */
/* WARNING: Removing unreachable block (ram,0x01dd0b91) */
/* WARNING: Removing unreachable block (ram,0x01dd0a19) */
/* WARNING: Removing unreachable block (ram,0x01dd0a22) */

void FUN_01dd0960(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int in_ECX;
  longlong *in_RDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  if (((unaff_RDI[0x40] != 0) && ((int)unaff_RDI[0x41] == param_3)) &&
     (*(int *)((longlong)unaff_RDI + 0x20c) == in_ECX)) {
    return;
  }
  if (((unaff_RDI[0x28] != 0) && ((int)unaff_RDI[0x27] == param_3)) &&
     (*(int *)((longlong)unaff_RDI + 0x13c) == in_ECX)) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x938))(in_ECX,param_3);
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01dd0aae;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_01dd0aae;
  (**(code **)(*unaff_RDI + 0x9a0))(param_1,param_2);
LAB_01dd0aae:
  (**(code **)(*(longlong *)*in_RDX + 0x4d0))(param_1,param_2);
  FUN_01d48370();
  (**(code **)(*unaff_RDI + 0x940))(in_ECX,param_3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_01d488d0();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))(param_1,param_2);
  plVar1 = (longlong *)unaff_RDI[0x3e];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    local_90 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)in_ECX * 8);
    if (local_90 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = *in_RDX;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x30))(&local_90,param_3,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  (**(code **)(*(longlong *)*in_RDX + 0x610))(0,param_2);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


