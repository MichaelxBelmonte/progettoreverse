// Function: FUN_01dc0220
// Address: 01dc0220
// Size: 882 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01dc0314) */
/* WARNING: Removing unreachable block (ram,0x01dc0320) */
/* WARNING: Removing unreachable block (ram,0x01dc0365) */
/* WARNING: Removing unreachable block (ram,0x01dc0371) */

void FUN_01dc0220(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  undefined8 uVar7;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x640))();
  local_50 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x920))();
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*local_50 + 0x3f0))((float)uVar7,param_2,uVar4,uVar3);
  plVar6 = (longlong *)unaff_RDI[0x30];
  if (plVar6 == (longlong *)0x0) {
    uVar5 = (**(code **)(*local_50 + 0x370))();
    plVar6 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      local_48 = 0;
    }
    else {
      local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar5 = FUN_00d50b00();
    local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  FUN_01d48a10();
  FUN_01cfbc00();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x960))();
  local_58 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_58 = '\x01';
  local_60 = local_90;
  FUN_01d44870(param_2 + DAT_023b8b2c,&local_60);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x3f0))
            (DAT_02394298 + (float)uVar7,(float)((ulonglong)uVar7 >> 0x20) + DAT_023b36a0);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((char)local_48 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


