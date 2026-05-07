// Function: FUN_01f61ce0
// Address: 01f61ce0
// Size: 511 bytes
// Class: GNDictionary
// String references:
//   "(%@ *)%p"


void FUN_01f61ce0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RDI;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  local_b0 = *param_1;
  local_a8 = 0;
  FUN_01f618c0(param_1,&local_b0);
  if (local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_01f61d3c;
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
LAB_01f61d3c:
    local_a0 = (longlong)local_50;
    local_98 = 0;
    FUN_01f5f5b0();
    FUN_00c7e7b0();
    local_90 = local_80;
    local_88 = (longlong)local_50;
    FUN_00083ea0(2,&local_88);
    FUN_00d8cb40();
    lVar1 = local_60;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = local_60;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_58 = '\0';
    }
    local_50 = (undefined8 *)&DAT_0253d630;
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  FUN_00d8ede0();
  puVar2 = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
      *unaff_RDI = (longlong)puVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_48 == '\0') {
        return;
      }
      if (local_50 == (undefined8 *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_50 = (undefined8 *)0x0;
  }
  *unaff_RDI = (longlong)local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


