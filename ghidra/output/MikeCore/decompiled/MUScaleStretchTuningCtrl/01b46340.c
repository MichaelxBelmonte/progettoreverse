// Function: FUN_01b46340
// Address: 01b46340
// Size: 525 bytes
// Class: MUScaleStretchTuningCtrl


void FUN_01b46340(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar3;
  longlong local_38;
  char local_30;
  
  if ((*(longlong *)(unaff_RDI + 0x160) != 0) && (0.0 < *(float *)(unaff_RDI + 0x168))) {
    FUN_01b460b0();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d48a10();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (DAT_0239011c <= *(float *)(unaff_RDI + 0x168)) {
      FUN_01cfc9f0(DAT_0239011c,DAT_02390124);
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
    }
    else {
      FUN_01cfc9f0(DAT_0239011c);
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
    }
    plVar1 = (longlong *)*unaff_RSI;
    lVar2 = *(longlong *)(unaff_RDI + 0x160);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_01b46180();
    (**(code **)(*plVar1 + 0x3f8))(uVar3,2);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


