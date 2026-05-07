// Function: FUN_0006bed0
// Address: 0006bed0
// Size: 939 bytes
// Class: MDAudioTrackItem


void FUN_0006bed0(float param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  undefined8 uVar4;
  undefined8 in_XMM1_Qb;
  undefined1 auVar5 [16];
  float fStack_94;
  longlong local_38;
  char local_30;
  
  uVar4 = param_2;
  FUN_01e3f820();
  FUN_01cfc6a0(DAT_02390120);
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
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1);
  FUN_01cfc6a0(DAT_0239011c);
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
  fStack_94 = (float)((ulonglong)uVar4 >> 0x20);
  fStack_94 = fStack_94 * DAT_0239011c;
  FUN_01d48b40(DAT_02390124);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  fVar3 = (float)FUN_01e436c0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(DAT_0239011c * fStack_94 + fVar3);
  if (param_1 < DAT_02390114) {
    FUN_01cfc6a0(DAT_02390128);
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
    auVar5._8_8_ = in_XMM1_Qb;
    auVar5._0_8_ = param_2;
    auVar5 = blendps(auVar5,ZEXT416((uint)(DAT_02390114 - param_1)),1);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1,auVar5._0_8_);
  }
  lVar2 = unaff_RDI[0x2a];
  if (lVar2 == 0) {
    (**(code **)(*unaff_RDI + 0x990))();
    lVar2 = unaff_RDI[0x2a];
    if (lVar2 == 0) {
      return;
    }
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x400))(DAT_02390114);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01cfc6a0(DAT_02390124);
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
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  return;
}


