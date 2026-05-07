// Function: FUN_00c7ace0
// Address: 00c7ace0
// Size: 537 bytes
// Class: GNAttributeType


void FUN_00c7ace0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  bool bVar7;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((DAT_028a6cb0 == (longlong *)0x0) || (DAT_028a6cb9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a6cb0 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028a6cb0 == plVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar7 = DAT_028a6cb0 != (longlong *)0x0;
        DAT_028a6cb0 = plVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a6cb8 == '\0') {
        DAT_028a6cb8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      DAT_028a6cb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a6cb9 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00c7a420(param_1,&local_70);
  lVar6 = local_40;
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
  if (lVar6 == 0) {
    FUN_00c7b030();
    if ((local_40 != 0) && (lVar6 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    lVar2 = *(longlong *)(lVar6 + 0x10);
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(lVar6 + 0x10) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    local_58 = '\0';
    local_50 = *unaff_RSI;
    local_48 = '\0';
    local_60 = lVar6;
    FUN_00c7a730(param_1,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


