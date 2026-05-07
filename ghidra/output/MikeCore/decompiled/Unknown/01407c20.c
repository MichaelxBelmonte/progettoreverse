// Function: FUN_01407c20
// Address: 01407c20
// Size: 560 bytes
// Class: Unknown


void FUN_01407c20(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar3;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((DAT_028ace58 == (longlong *)0x0) || (DAT_028ace61 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ace58 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar1 + 0x18))();
      bVar3 = DAT_028ace58 == (longlong *)0x0;
      DAT_028ace58 = plVar1;
      if (((bVar3) || (FUN_00d50b20(), DAT_028ace58 != (longlong *)0x0)) && (DAT_028ace60 == '\0'))
      {
        DAT_028ace60 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028ace61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ace61 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_88 = *unaff_RSI;
  local_80 = '\0';
  FUN_01408000(param_1,&local_88);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    FUN_01780150();
    local_48 = local_58;
    local_40 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_40 = '\x01';
    FUN_0009d720();
    if (local_38 != 0) {
      lVar2 = local_38;
      if (local_30 == '\0') {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_70 = '\0';
    local_68 = *unaff_RSI;
    local_60 = '\0';
    local_78 = lVar2;
    FUN_014080b0(param_1,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


