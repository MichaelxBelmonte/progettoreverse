// Function: FUN_01cba0b0
// Address: 01cba0b0
// Size: 2030 bytes
// Class: GNString


void FUN_01cba0b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 in_EDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar2;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar3;
  float fVar4;
  float in_XMM1_Dd;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong local_38;
  char local_30;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar4 = (float)param_2;
  fVar9 = (float)((ulonglong)param_1 >> 0x20);
  fVar6 = (float)param_1;
  switch(in_EDX) {
  case 1:
    (**(code **)(*unaff_RDI + 0x390))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
  case 8:
  case 0x12:
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*unaff_RDI + 0x390))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar7 = fVar7 + fVar9;
    fVar3 = fVar4 + fVar6 + DAT_02390d00;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    fVar5 = fVar7 + DAT_02390d00;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar6,fVar9,fVar6,fVar5,fVar9,in_XMM0_Dd);
    (**(code **)(*unaff_RDI + 0x3a0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar3,fVar5,fVar3,fVar9);
    lVar1 = *(longlong *)*unaff_RSI;
    fVar9 = fVar5;
    goto LAB_01cba579;
  case 3:
    (**(code **)(*unaff_RDI + 0x3a0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
  case 5:
  case 0xb:
  case 0x13:
  case 0x14:
  case 0x15:
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*unaff_RDI + 0x390))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar8 = in_XMM1_Dd + in_XMM0_Dd;
    fVar5 = fVar4 + fVar6 + DAT_02390d00;
    fVar3 = fVar7 + fVar9 + DAT_02390d00;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar5);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar5,fVar3,fVar6,fVar3,fVar3,fVar8);
    (**(code **)(*unaff_RDI + 0x3a0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar6,fVar9,fVar5,fVar9);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar6,fVar9,fVar6,fVar3);
    uVar2 = FUN_00d05530(fVar6,fVar4,DAT_02390d00);
    fVar5 = (float)((ulonglong)uVar2 >> 0x20);
    fVar3 = (float)uVar2;
    (**(code **)(*unaff_RDI + 0x398))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar7 = fVar7 + fVar5;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (fVar3,fVar5,fVar4 + fVar3 + DAT_02390d00,fVar5,fVar5,extraout_XMM0_Dd);
    lVar1 = *(longlong *)*unaff_RSI;
    fVar6 = fVar3;
    fVar9 = fVar7 + DAT_02390d00;
LAB_01cba579:
    (**(code **)(lVar1 + 0x3e0))(fVar3,fVar5,fVar6,fVar9);
    return;
  default:
    goto switchD_01cba0ea_caseD_6;
  case 9:
    FUN_01d48370();
    _CGColorCreateGenericGray(0,(int)DAT_0238fee8);
    _CGContextSetShadowWithColor((int)DAT_02411100,0,(int)DAT_0241f378);
    FUN_01cfc9f0(DAT_02390124,DAT_02390124);
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(fVar6,fVar4);
    FUN_01d48390();
    _CGColorRelease();
    FUN_01cfc6a0(DAT_0241f370);
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(fVar6,fVar4);
    goto switchD_01cba0ea_caseD_6;
  }
  FUN_01d48b40(DAT_02390124);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))(fVar6,fVar4);
switchD_01cba0ea_caseD_6:
  return;
}


