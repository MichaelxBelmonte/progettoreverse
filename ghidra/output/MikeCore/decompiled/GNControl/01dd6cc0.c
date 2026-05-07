// Function: FUN_01dd6cc0
// Address: 01dd6cc0
// Size: 569 bytes
// Class: GNControl


/* WARNING: Removing unreachable block (ram,0x01dd6ec1) */
/* WARNING: Removing unreachable block (ram,0x01dd6eca) */
/* WARNING: Removing unreachable block (ram,0x01dd6d88) */
/* WARNING: Removing unreachable block (ram,0x01dd6e43) */
/* WARNING: Removing unreachable block (ram,0x01dd6e48) */
/* WARNING: Removing unreachable block (ram,0x01dd6e53) */
/* WARNING: Removing unreachable block (ram,0x01dd6d92) */
/* WARNING: Removing unreachable block (ram,0x01dd6d39) */
/* WARNING: Removing unreachable block (ram,0x01dd6d45) */
/* WARNING: Removing unreachable block (ram,0x01dd6e7e) */
/* WARNING: Removing unreachable block (ram,0x01dd6e87) */
/* WARNING: Removing unreachable block (ram,0x01dd6e21) */
/* WARNING: Removing unreachable block (ram,0x01dd6e2e) */
/* WARNING: Removing unreachable block (ram,0x01dd6dd1) */
/* WARNING: Removing unreachable block (ram,0x01dd6dde) */

undefined8 FUN_01dd6cc0(undefined4 param_1)

{
  longlong *plVar1;
  longlong unaff_RDI;
  undefined8 uVar2;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = FUN_01e4ae70();
  }
  else {
    FUN_00d50b00();
    FUN_01e48f80(param_1);
    (**(code **)(*plVar1 + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (longlong *)0x0) {
      FUN_01e48f80(param_1);
      uVar2 = (**(code **)(*plVar1 + 0x6d0))();
    }
    else {
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x490))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x6d0))(param_1);
      uVar2 = FUN_01e437f0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar2;
}


