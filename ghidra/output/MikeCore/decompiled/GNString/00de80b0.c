// Function: FUN_00de80b0
// Address: 00de80b0
// Size: 741 bytes
// Class: GNString


void FUN_00de80b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar2;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d4efa0();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = lVar1;
  local_a8 = '\0';
  (**(code **)(*unaff_RDI + 0x368))();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_a0 = lVar2;
    local_98 = '\0';
    local_c0 = *unaff_RSI;
    local_b8 = 0;
    FUN_00de7b20(&local_60,&local_c0);
    if (lVar2 == local_40) {
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_90 = *param_2;
      local_88 = '\0';
      local_40 = local_60;
      local_38 = '\0';
      FUN_00ca0840();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      local_80 = lVar1;
      local_78 = '\0';
      (**(code **)(*unaff_RDI + 0x368))();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      local_70 = lVar1;
      local_68 = '\0';
      (**(code **)(*unaff_RDI + 0x378))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


