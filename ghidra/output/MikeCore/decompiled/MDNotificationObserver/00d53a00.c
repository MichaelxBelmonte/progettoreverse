// Function: FUN_00d53a00
// Address: 00d53a00
// Size: 1007 bytes
// Class: MDNotificationObserver


void FUN_00d53a00(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_58;
  uint local_50;
  undefined4 local_4c;
  longlong *local_48;
  uint local_40;
  undefined8 local_38;
  
  local_d8 = *param_1;
  local_d0 = '\0';
  uVar4 = (**(code **)(*unaff_RDI + 0xe8))(param_1,&local_d8);
  plVar2 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      uVar4 = FUN_00e31530(uVar4,0);
      if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)FUN_00d8b910();
    uVar4 = extraout_XMM0_Qa;
  }
  if (param_2 == 'I') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &DAT_024cc6f0;
    local_4c = *(undefined4 *)unaff_RSI;
    uVar4 = FUN_00d3af80(&DAT_0277e4be,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'd') {
    FUN_00e31530(uVar4,0);
    local_40 = 1;
    local_48 = (longlong *)&DAT_024de5e0;
    local_38 = *unaff_RSI;
    uVar4 = FUN_00d3af80(&DAT_0277e4b8,pcVar3,&local_48);
    plVar1 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'f') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &DAT_024d0b28;
    local_4c = *(undefined4 *)unaff_RSI;
    uVar4 = FUN_00d3af80(&DAT_0277e4bb,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  local_c8 = *param_1;
  local_c0 = '\0';
  (**(code **)(*unaff_RDI + 0x260))(&local_c8,(int)param_2);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


