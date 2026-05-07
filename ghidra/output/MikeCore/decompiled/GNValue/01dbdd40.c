// Function: FUN_01dbdd40
// Address: 01dbdd40
// Size: 601 bytes
// Class: GNValue


void FUN_01dbdd40(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  uVar6 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x9e8))();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d48a10();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x9e8))();
  (**(code **)(*unaff_RDI + 0x960))();
  local_40 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_78;
  FUN_01d44870(param_2 + DAT_023b8b2c,&local_48);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  fVar3 = (float)(**(code **)(*unaff_RDI + 0xb48))();
  fVar4 = (float)(**(code **)(*unaff_RDI + 0xb48))();
  (**(code **)(*unaff_RDI + 0x9e8))();
  fVar5 = (float)FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))
            (fVar3 + (float)uVar6,(float)((ulonglong)uVar6 >> 0x20) + fVar4 + fVar5);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


