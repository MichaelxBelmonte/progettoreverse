// Function: FUN_00dc0c90
// Address: 00dc0c90
// Size: 1175 bytes
// Class: GNValue
// String references:
//   "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
//   "xmlns:x=\"%@\" xmlns=\"%@\""


/* WARNING: Removing unreachable block (ram,0x00dc0d56) */
/* WARNING: Removing unreachable block (ram,0x00dc0d62) */
/* WARNING: Removing unreachable block (ram,0x00dc0fea) */
/* WARNING: Removing unreachable block (ram,0x00dc0ffa) */

undefined8 * FUN_00dc0c90(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  longlong local_160;
  char local_158;
  undefined8 local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  longlong local_90;
  char local_88;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  char local_40;
  longlong local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_0256d868;
  plVar6[2] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
  *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
  (*DAT_0256d880)();
  uVar7 = FUN_00cccf90();
  uVar7 = FUN_00d8cb40(uVar7,DAT_025908a0);
  puVar3 = local_78;
  if ((((local_70 == '\0') && (local_78 != (undefined8 *)0x0)) &&
      (uVar7 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (undefined8 *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  uVar7 = FUN_00d8cbf0(uVar7,6);
  local_48 = local_78;
  local_40 = 0;
  if (local_70 == '\0') {
    if (local_78 != (undefined8 *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = '\x01';
  FUN_00ccdbb0(uVar7,&local_48);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02783b38;
  if (DAT_02783b38 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02783b40;
  if (DAT_02783b40 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = lVar2;
  uVar7 = FUN_00083ea0(2,&local_c8);
  uVar7 = FUN_00d8cb40(uVar7,&local_78);
  local_38 = local_90;
  if ((local_88 == '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = (undefined8 *)&DAT_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = DAT_02783b48;
  if (DAT_02783b48 != 0) {
    uVar7 = FUN_00d50b00();
  }
  lVar2 = DAT_02783b60;
  local_130 = *unaff_RSI;
  local_128 = 0;
  local_120 = lVar1;
  local_118 = 0;
  if (DAT_02783b60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_110 = lVar2;
  local_108 = 1;
  FUN_00dbdbc0(uVar7,&local_110);
  puVar4 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_b8 = 1;
  local_c0 = puVar4;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = local_38;
  local_e8 = 0;
  FUN_00dc1400(&local_130,0,&local_c0,&local_100);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x368))();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


