// Function: FUN_00e4a130
// Address: 00e4a130
// Size: 635 bytes
// Class: GNBKVA


void FUN_00e4a130(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0x2c) == '\0') {
    local_40 = *param_2;
    local_38 = '\0';
    FUN_00e3a2a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = *(longlong *)(unaff_RDI + 0x48);
    local_48 = '\0';
    iVar3 = FUN_00e5d7f0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == -1) {
      local_60 = *param_2;
      local_58 = 0;
      FUN_00e484f0(param_1,&local_60);
      lVar2 = *unaff_RSI;
      lVar1 = local_40;
    }
    else {
      FUN_00dac5e0();
      lVar2 = *unaff_RSI;
      lVar1 = local_40;
    }
    local_40 = lVar2;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e3a2a0();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
        lVar1 = local_40;
      }
    }
    local_40 = lVar1;
    FUN_00daab70();
  }
  else {
    local_70 = *param_2;
    local_68 = 0;
    FUN_00e484f0(param_1,&local_70);
    local_40 = *unaff_RSI;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


