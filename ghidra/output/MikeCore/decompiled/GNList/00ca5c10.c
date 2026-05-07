// Function: FUN_00ca5c10
// Address: 00ca5c10
// Size: 882 bytes
// Class: GNList
// String references:
//   "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<plist version=\"1.0\">\n"
//   "</plist>\n"


/* WARNING: Removing unreachable block (ram,0x00ca5cc1) */
/* WARNING: Removing unreachable block (ram,0x00ca5cca) */

undefined8 * FUN_00ca5c10(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar6;
  undefined4 uVar7;
  longlong local_d8;
  char local_d0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_0256d868;
  plVar5[2] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
  (*DAT_0256d880)();
  uVar7 = FUN_00cccf90();
  uVar1 = DAT_025908a0;
  uVar7 = FUN_00d8cb40(uVar7,DAT_025908a0);
  lVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  local_48 = lVar2;
  uVar7 = FUN_00d8cbf0(uVar7,6);
  local_68 = local_40;
  local_60 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = local_48;
  local_60 = '\x01';
  FUN_00ccdbb0(uVar7,&local_68);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  uVar7 = FUN_00ca2870(0,&stack0xffffffffffffff48);
  if (unaff_RSI != 0) {
    uVar7 = FUN_00d50b20();
  }
  uVar7 = FUN_00d8cb40(uVar7,uVar1);
  lVar6 = local_40;
  lVar3 = lVar2;
  if (lVar2 != local_40) {
    if (local_38 != '\0') {
      if (lVar2 != 0) {
        uVar7 = FUN_00d50b20();
      }
      goto LAB_00ca5e72;
    }
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
    lVar3 = lVar6;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar6 = lVar3;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
LAB_00ca5e72:
  uVar7 = FUN_00d8cbf0(uVar7,6);
  local_58 = local_40;
  local_50 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = '\x01';
  FUN_00ccdbb0(uVar7,&local_58);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar5 + 0x368))();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


