// Function: FUN_013ff8e0
// Address: 013ff8e0
// Size: 580 bytes
// Class: MUDataPointFunction


/* WARNING: Removing unreachable block (ram,0x013ffb05) */
/* WARNING: Removing unreachable block (ram,0x013ff947) */
/* WARNING: Removing unreachable block (ram,0x013ff953) */
/* WARNING: Removing unreachable block (ram,0x013ffb0e) */
/* WARNING: Removing unreachable block (ram,0x013ff997) */
/* WARNING: Removing unreachable block (ram,0x013ff9a0) */

undefined4 FUN_013ff8e0(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int local_84;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00ddb860();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar2 = (**(code **)(*local_40 + 0x410))();
    if ((char)uVar2 != '\0') {
      *param_1 = local_84 + -1;
      uVar3 = FUN_013ff630();
      *param_2 = uVar3;
    }
    FUN_00d50b20();
  }
  return uVar2;
}


