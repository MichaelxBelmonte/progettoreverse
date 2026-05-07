// Function: FUN_01f43950
// Address: 01f43950
// Size: 557 bytes
// Class: GNInfoController


/* WARNING: Removing unreachable block (ram,0x01f43b48) */
/* WARNING: Removing unreachable block (ram,0x01f43ada) */
/* WARNING: Removing unreachable block (ram,0x01f43a9c) */
/* WARNING: Removing unreachable block (ram,0x01f43aa5) */
/* WARNING: Removing unreachable block (ram,0x01f43ad1) */
/* WARNING: Removing unreachable block (ram,0x01f43b34) */
/* WARNING: Removing unreachable block (ram,0x01f43b3d) */
/* WARNING: Removing unreachable block (ram,0x01f43b51) */
/* WARNING: Removing unreachable block (ram,0x01f4399c) */
/* WARNING: Removing unreachable block (ram,0x01f439a5) */
/* WARNING: Removing unreachable block (ram,0x01f439e1) */
/* WARNING: Removing unreachable block (ram,0x01f439ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f43950(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x478))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01d64cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01f43b66;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_01f43b66;
  iVar1 = FUN_01d5b230();
  if (0 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_01f50d20();
    FUN_01f51370();
    FUN_01ede360(0,0,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5ef60(_DAT_02422dc0,DAT_023dcce4);
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f43b66:
  FUN_00d50b20();
  return;
}


