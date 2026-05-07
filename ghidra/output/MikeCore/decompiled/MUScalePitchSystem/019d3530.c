// Function: FUN_019d3530
// Address: 019d3530
// Size: 1157 bytes
// Class: MUScalePitchSystem


undefined8 FUN_019d3530(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RDI;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
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
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  iVar3 = FUN_01caea40();
  if (param_2 != 0) {
    (**(code **)(*unaff_RDI + 0xd08))();
    (**(code **)(*unaff_RDI + 0xd00))();
    (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                *unaff_RDI + 0x40))();
  }
  FUN_01caeae0();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return 1;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == 0) {
    return 1;
  }
  (**(code **)(*unaff_RDI + 0xd08))();
  FUN_01d66ab0();
  if (iVar3 == 2) {
    iVar3 = (**(code **)(&UNK_00001588 + *unaff_RDI))();
    lVar1 = DAT_027e13f8;
    if (iVar3 == 3) {
      if (DAT_027e13f8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027e1400;
      if (DAT_027e1400 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      local_d8 = 0;
      local_d0 = '\0';
      FUN_00d31230(&local_d8,&local_e8);
      local_68 = local_38;
      local_60 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_60 = '\x01';
      FUN_01d64eb0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else if (iVar3 == 4) {
      if (DAT_027e13f8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027e1408;
      local_c8 = lVar1;
      local_c0 = '\x01';
      if (DAT_027e1408 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar2;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      local_58 = local_38;
      local_50 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_50 = '\x01';
      FUN_01d64eb0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_027e13f8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027e1410;
      local_98 = lVar1;
      local_90 = '\x01';
      if (DAT_027e1410 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar2;
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      FUN_00d31230(&local_78,&local_88);
      local_48 = local_38;
      local_40 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_40 = '\x01';
      FUN_01d64eb0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
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
    }
  }
  FUN_00d50b20();
  return 1;
}


