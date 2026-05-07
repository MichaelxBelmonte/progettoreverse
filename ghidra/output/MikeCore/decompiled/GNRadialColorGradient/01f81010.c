// Function: FUN_01f81010
// Address: 01f81010
// Size: 817 bytes
// Class: GNRadialColorGradient


/* WARNING: Removing unreachable block (ram,0x01f8104f) */
/* WARNING: Removing unreachable block (ram,0x01f81058) */

void FUN_01f81010(void)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = FUN_01cc5a70();
  if (lVar2 == 0) {
    FUN_01ea9910();
    (**(code **)(*local_58 + 0x370))();
    (**(code **)(*local_38 + 0x4f8))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*local_38 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ea9910();
    (**(code **)(*local_58 + 0x370))();
    pcVar3 = (code *)FUN_01cc5a70();
    (**(code **)(*local_38 + 0x4f8))();
    (*pcVar3)();
    FUN_01cff4e0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*local_38 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ea9910();
  (**(code **)(*local_58 + 0x370))();
  (**(code **)(*local_38 + 0x370))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  (**(code **)(*local_38 + 0x370))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)unaff_RDI[0x27];
  (**(code **)(*plVar1 + 0x388))();
  (**(code **)(*plVar1 + 0x3a8))();
  FUN_00d50b20();
  return;
}


