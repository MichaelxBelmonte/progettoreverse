// Function: FUN_006f41e0
// Address: 006f41e0
// Size: 792 bytes
// Class: Unknown


void FUN_006f41e0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_38;
  char local_30;
  
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d41040(&local_a8,&local_b8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[4] != 0) {
    FUN_006f3f00();
    lVar2 = local_68;
    FUN_00756eb0();
    lVar1 = unaff_RDI[0x11];
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 == lVar1) {
      FUN_006f3f00();
      local_98 = 0;
      local_90 = '\0';
      FUN_00751820();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[2] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = unaff_RDI[2];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\0';
      local_88 = 0;
      FUN_002e9600();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_006f3f00();
    FUN_00752180();
    local_78 = unaff_RDI[2];
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_001081b0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x5e8))();
    FUN_006f3f00();
    FUN_00d50b00();
    FUN_00759c40();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    unaff_RDI[4] = 0;
  }
  FUN_01e4fa60();
  return;
}


