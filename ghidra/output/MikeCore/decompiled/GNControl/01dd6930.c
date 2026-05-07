// Function: FUN_01dd6930
// Address: 01dd6930
// Size: 567 bytes
// Class: GNControl


/* WARNING: Removing unreachable block (ram,0x01dd6b37) */
/* WARNING: Removing unreachable block (ram,0x01dd6b40) */
/* WARNING: Removing unreachable block (ram,0x01dd69f9) */
/* WARNING: Removing unreachable block (ram,0x01dd6aba) */
/* WARNING: Removing unreachable block (ram,0x01dd6abf) */
/* WARNING: Removing unreachable block (ram,0x01dd6aca) */
/* WARNING: Removing unreachable block (ram,0x01dd6a03) */
/* WARNING: Removing unreachable block (ram,0x01dd69a6) */
/* WARNING: Removing unreachable block (ram,0x01dd69af) */
/* WARNING: Removing unreachable block (ram,0x01dd6af9) */
/* WARNING: Removing unreachable block (ram,0x01dd6b02) */
/* WARNING: Removing unreachable block (ram,0x01dd6a90) */
/* WARNING: Removing unreachable block (ram,0x01dd6a99) */
/* WARNING: Removing unreachable block (ram,0x01dd6a49) */
/* WARNING: Removing unreachable block (ram,0x01dd6a56) */

undefined8 FUN_01dd6930(undefined4 param_1)

{
  longlong *plVar1;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x30);
  if (plVar1 == (longlong *)0x0) {
    FUN_01e4ae50();
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
      (**(code **)(*plVar1 + 0x6c8))();
      FUN_00d50b20();
    }
    else {
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x490))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x6c8))();
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


