// Function: FUN_00cdf9a0
// Address: 00cdf9a0
// Size: 708 bytes
// Class: GNFilePath


void FUN_00cdf9a0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  local_58 = DAT_02775668;
  lVar2 = DAT_02704030;
  if (cVar4 == '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_02775668 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    iVar5 = (**(code **)(*plVar1 + 0x598))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
      lVar2 = local_38;
      if ((((local_30 == '\0') && (local_38 != 0)) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02704030;
      if (DAT_02704030 != 0) {
        FUN_00d50b00();
      }
      local_48 = lVar3;
      local_40 = '\x01';
      FUN_000175c0(param_1,&local_48);
      lVar3 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar3 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            *(undefined8 *)(unaff_RDI + 0x10) = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = *(longlong *)(unaff_RDI + 0x10);
            *(longlong *)(unaff_RDI + 0x10) = local_38;
          }
        }
        else {
          local_30 = '\0';
          *(longlong *)(unaff_RDI + 0x10) = local_38;
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
      lVar2 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar2 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            *(undefined8 *)(unaff_RDI + 0x10) = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = *(longlong *)(unaff_RDI + 0x10);
            *(longlong *)(unaff_RDI + 0x10) = local_38;
          }
        }
        else {
          local_30 = '\0';
          *(longlong *)(unaff_RDI + 0x10) = local_38;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_02704030 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_68);
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *(undefined8 *)(unaff_RDI + 0x10) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(longlong *)(unaff_RDI + 0x10);
          *(longlong *)(unaff_RDI + 0x10) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(longlong *)(unaff_RDI + 0x10) = local_38;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


