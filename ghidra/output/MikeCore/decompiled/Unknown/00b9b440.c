// Function: FUN_00b9b440
// Address: 00b9b440
// Size: 581 bytes
// Class: Unknown


undefined4 FUN_00b9b440(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  bool bVar6;
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
  
  if (*unaff_RDI == 0) {
    uVar4 = 0;
  }
  else {
    if ((DAT_028a5690 == (longlong *)0x0) || (DAT_028a5699 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5690 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar5 + 0x18))();
        if (DAT_028a5690 == plVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5690 != (longlong *)0x0;
          DAT_028a5690 = plVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5698 == '\0') {
          DAT_028a5698 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        DAT_028a5699 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5699 = '\x01';
        FUN_00e8cb70();
      }
    }
    local_78 = *unaff_RDI;
    local_70 = '\0';
    FUN_007f4af0(param_1,&local_78);
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) {
      cVar3 = (**(code **)(*(longlong *)*unaff_RDI + 0x3a0))();
      if (cVar3 == '\0') {
        local_68 = *unaff_RDI;
        local_60 = '\0';
        uVar4 = FUN_00b80190();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar4 = 0;
      }
      FUN_00d46300();
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
      local_38 = *unaff_RDI;
      local_30 = '\0';
      FUN_00ca0840(param_1,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_00d45ad0();
      FUN_00d50b20();
    }
  }
  return uVar4;
}


