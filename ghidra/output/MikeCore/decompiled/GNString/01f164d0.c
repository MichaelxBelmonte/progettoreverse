// Function: FUN_01f164d0
// Address: 01f164d0
// Size: 586 bytes
// Class: GNString


void FUN_01f164d0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ccad60();
  lVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar2;
  FUN_01ccad60();
  lVar2 = local_40;
  if (local_40 == 0) {
    local_48 = 0;
joined_r0x01f1655f:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_48 = lVar2;
      goto joined_r0x01f1655f;
    }
  }
  lVar3 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar3;
  local_68 = '\x01';
  FUN_01ccaae0(param_1,&local_70);
  lVar3 = local_40;
  if (local_40 == 0) {
    bVar1 = true;
    lVar3 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01f165de;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = false;
  }
LAB_01f165de:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_01d25f70();
    bVar4 = false;
    if ((local_40 == 0) && (bVar4 = false, lVar3 != 0)) {
      FUN_01d25f70();
      bVar4 = local_88 != 0;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar4) {
      FUN_01d25f70();
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      FUN_01d25f20();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01cc9ce0();
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = local_60;
  if ((lVar2 != 0) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


