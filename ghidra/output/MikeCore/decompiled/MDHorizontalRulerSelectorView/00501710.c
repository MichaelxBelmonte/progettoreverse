// Function: FUN_00501710
// Address: 00501710
// Size: 557 bytes
// Class: MDHorizontalRulerSelectorView


void FUN_00501710(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_0197a540();
  (**(code **)(*unaff_RDI + 0x9f8))();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &DAT_024c4260;
  puVar4[2] = &DAT_024c4b98;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  (*DAT_024c4278)();
  FUN_01d9ac40();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &DAT_024dc470;
  puVar4[2] = &DAT_024dcdc0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  (*DAT_024dc488)();
  FUN_01d9ade0();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6f70;
  plVar1 = (longlong *)unaff_RDI[0x3a];
  if (plVar1 != (longlong *)0x0) {
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02709df0;
    if (DAT_02709df0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    local_50 = 0;
    local_48 = '\0';
    FUN_00d31230(&local_50,&local_60);
    local_30 = local_40;
    local_28 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_28 = '\x01';
    (**(code **)(*plVar1 + 0x6a8))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x928))();
  return;
}


