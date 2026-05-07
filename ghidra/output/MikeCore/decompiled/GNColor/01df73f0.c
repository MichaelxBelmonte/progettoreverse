// Function: FUN_01df73f0
// Address: 01df73f0
// Size: 502 bytes
// Class: GNColor


void FUN_01df73f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
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
  
  lVar1 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f2e88;
  if (lVar2 != 0) {
    local_80 = *param_1;
    local_78 = '\0';
    if (DAT_027f2e88 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_01d26fb0(&local_70,&local_80);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = *param_1;
  local_48 = '\0';
  FUN_01ed2b70(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


