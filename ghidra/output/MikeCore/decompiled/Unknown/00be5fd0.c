// Function: FUN_00be5fd0
// Address: 00be5fd0
// Size: 682 bytes
// Class: Unknown
// String references:
//   "</%@>\n"
//   "<%@>"


undefined4 FUN_00be5fd0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 local_a0 [8];
  undefined1 local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined1 local_80 [8];
  undefined1 local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *param_2;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  FUN_00d94e10();
  lVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_98 = 1;
  cVar3 = FUN_00be5e40(param_3,local_a0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    local_70 = *param_1;
    local_68 = '\0';
    FUN_00ca2310();
    puVar2 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_88 = 1;
    local_90 = puVar2;
    cVar3 = FUN_00be5e40(0,&local_90);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94e10();
      lVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_78 = 1;
      uVar4 = FUN_00be5e40(0,local_80);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &DAT_024c5048;
      if (local_38 == '\0') {
        return uVar4;
      }
      if (local_40 == 0) {
        return uVar4;
      }
      FUN_00d50b20();
      return uVar4;
    }
  }
  return 0;
}


