// Function: FUN_01a7cd20
// Address: 01a7cd20
// Size: 679 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a7cf42) */
/* WARNING: Removing unreachable block (ram,0x01a7cf4e) */
/* WARNING: Removing unreachable block (ram,0x01a7cfa7) */
/* WARNING: Removing unreachable block (ram,0x01a7cfb0) */

void FUN_01a7cd20(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  cVar2 = FUN_01a87c60();
  if (cVar2 == '\0') {
    FUN_01a81c00();
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    FUN_01a78a20(param_1,&local_70);
    lVar3 = local_40;
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
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      FUN_01a81c00();
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01a76d90();
      if ((local_40 != 0) && (lVar3 = local_40, local_38 == '\0')) {
        FUN_00d50b00();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01a81c00();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      FUN_01a804e0(param_1,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a77150();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01a87c80();
  return;
}


