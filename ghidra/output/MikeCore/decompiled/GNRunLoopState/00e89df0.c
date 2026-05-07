// Function: FUN_00e89df0
// Address: 00e89df0
// Size: 603 bytes
// Class: GNRunLoopState


/* WARNING: Removing unreachable block (ram,0x00e89f39) */
/* WARNING: Removing unreachable block (ram,0x00e89f42) */
/* WARNING: Removing unreachable block (ram,0x00e89e7a) */
/* WARNING: Removing unreachable block (ram,0x00e89e83) */
/* WARNING: Removing unreachable block (ram,0x00e89fdd) */
/* WARNING: Removing unreachable block (ram,0x00e89fe6) */
/* WARNING: Removing unreachable block (ram,0x00e89f25) */
/* WARNING: Removing unreachable block (ram,0x00e89f2e) */

void FUN_00e89df0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  lVar2 = FUN_00e89a30(param_3,param_1,param_4);
  if (lVar2 == -1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00dac760();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00e89e88;
    }
  }
  else if (local_40 != 0) {
LAB_00e89e88:
    FUN_00daa910();
    if (local_40 == 0) {
      local_40 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    FUN_00d50b20();
    goto LAB_00e89f4f;
  }
  FUN_00dac790();
  (**(code **)(*local_80 + 0x370))();
  (**(code **)(*local_90 + 0x4d8))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa940();
  if (local_40 == 0) {
    local_40 = 0;
    bVar1 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
  }
  else {
    bVar1 = true;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00e89f4f:
  FUN_00dac5e0();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


