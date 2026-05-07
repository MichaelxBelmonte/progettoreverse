// Function: FUN_00c9e710
// Address: 00c9e710
// Size: 690 bytes
// Class: GNDictionary


ulonglong FUN_00c9e710(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  float local_2c;
  
  local_a8 = *unaff_RSI;
  local_a0 = '\0';
  FUN_00d496b0(param_1,&local_a8);
  lVar3 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else {
    if (local_38 != '\0') {
      local_38 = '\0';
      lVar5 = local_40;
      goto LAB_00c9e788;
    }
    FUN_00d50b00();
    lVar5 = lVar3;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00c9e788:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02727800;
  if (lVar5 == 0) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_02727800 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02773100;
    local_98 = lVar2;
    local_90 = '\x01';
    if (DAT_02773100 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d31230(&local_78,&local_88);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = 0;
    if (cVar4 == '\0') {
      local_2c = *(float *)(unaff_RDI + 2);
      fVar6 = local_2c;
      if (local_2c <= 0.0) {
        *(undefined4 *)(unaff_RDI + 2) = 0x3727c5ac;
        fVar6 = DAT_02411280;
      }
      local_58 = *(undefined4 *)((longlong)unaff_RDI + 0x14);
      uVar7 = (**(code **)(*unaff_RDI + 0x3c8))(fVar6);
      *(undefined4 *)(unaff_RDI + 2) = uVar7;
      uVar7 = (**(code **)(*unaff_RDI + 0x3c8))(*(undefined4 *)((longlong)unaff_RDI + 0x14));
      *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar7;
      local_68 = *unaff_RSI;
      local_60 = '\0';
      local_54 = FUN_00d4afa0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      *(float *)(unaff_RDI + 2) = local_2c;
      *(undefined4 *)((longlong)unaff_RDI + 0x14) = local_58;
      uVar8 = (**(code **)(*unaff_RDI + 0x3d0))(local_54);
    }
  }
  else {
    local_2c = (float)FUN_00d459e0();
    if (lVar3 == 0) {
      uVar8 = (ulonglong)(uint)local_2c;
    }
    else {
      FUN_00d50b20();
      uVar8 = (ulonglong)(uint)local_2c;
    }
  }
  return uVar8;
}


