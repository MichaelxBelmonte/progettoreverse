// Function: FUN_01998b60
// Address: 01998b60
// Size: 814 bytes
// Class: MUScalePitchSystem


float FUN_01998b60(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_68;
  undefined1 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar6 = 0.0;
  if ((*(float *)((longlong)unaff_RDI + 0x4d4) != 0.0) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0x4d4)))) {
    lVar4 = unaff_RDI[0x9e];
    if (lVar4 == 0) {
      uVar7 = (**(code **)(*unaff_RDI + 0x988))();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar7 = FUN_00d50b00();
        }
        lVar1 = unaff_RDI[0x3e];
      }
      else {
        local_38 = '\0';
        lVar1 = unaff_RDI[0x3e];
      }
      local_68 = 1;
      if (lVar1 != 0) {
        local_68 = 1;
        uVar7 = FUN_00d50b00();
      }
      local_c8 = 1;
      local_d0 = lVar1;
      FUN_019f2c90(uVar7,&local_d0);
      lVar2 = local_50;
      lVar5 = unaff_RDI[0x9e];
      if (lVar5 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar5 = unaff_RDI[0x9e];
          }
        }
        else {
          local_48 = '\0';
        }
        unaff_RDI[0x9e] = lVar2;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = unaff_RDI[0x9e];
    }
    local_c0 = *unaff_RSI;
    local_b8 = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_a8 = 1;
    local_b0 = lVar4;
    iVar3 = FUN_019f3840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (iVar3 < 0) {
      uVar7 = (**(code **)(*unaff_RDI + 0x988))();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar7 = FUN_00d50b00();
        }
        lVar1 = unaff_RDI[0x3e];
      }
      else {
        local_38 = '\0';
        lVar1 = unaff_RDI[0x3e];
      }
      local_58 = 1;
      if (lVar1 != 0) {
        local_58 = 1;
        uVar7 = FUN_00d50b00();
      }
      local_98 = 1;
      local_a0 = lVar1;
      FUN_019f2c90(uVar7,&local_a0);
      lVar5 = unaff_RDI[0x9e];
      if (lVar5 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar5 = unaff_RDI[0x9e];
          }
        }
        else {
          local_48 = '\0';
        }
        unaff_RDI[0x9e] = local_50;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_90 = *unaff_RSI;
      local_88 = 0;
      lVar4 = unaff_RDI[0x9e];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_78 = 1;
      local_80 = lVar4;
      iVar3 = FUN_019f3840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    fVar6 = (float)(**(code **)(*unaff_RDI + 3000))();
    fVar6 = (float)iVar3 * fVar6 * DAT_02390d38 * *(float *)((longlong)unaff_RDI + 0x4d4);
  }
  return fVar6;
}


