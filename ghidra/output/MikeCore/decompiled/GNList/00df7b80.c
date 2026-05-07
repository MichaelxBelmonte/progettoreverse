// Function: FUN_00df7b80
// Address: 00df7b80
// Size: 2045 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00df820d) */
/* WARNING: Removing unreachable block (ram,0x00df80fa) */
/* WARNING: Removing unreachable block (ram,0x00df7ee3) */
/* WARNING: Removing unreachable block (ram,0x00df7eef) */
/* WARNING: Removing unreachable block (ram,0x00df7c40) */
/* WARNING: Removing unreachable block (ram,0x00df7c49) */
/* WARNING: Removing unreachable block (ram,0x00df7d3d) */
/* WARNING: Removing unreachable block (ram,0x00df7d46) */
/* WARNING: Removing unreachable block (ram,0x00df803a) */
/* WARNING: Removing unreachable block (ram,0x00df803f) */
/* WARNING: Removing unreachable block (ram,0x00df826b) */
/* WARNING: Removing unreachable block (ram,0x00df8274) */
/* WARNING: Removing unreachable block (ram,0x00df8180) */
/* WARNING: Removing unreachable block (ram,0x00df8095) */
/* WARNING: Removing unreachable block (ram,0x00df8125) */
/* WARNING: Removing unreachable block (ram,0x00df812e) */
/* WARNING: Removing unreachable block (ram,0x00df80f4) */
/* WARNING: Removing unreachable block (ram,0x00df8189) */
/* WARNING: Removing unreachable block (ram,0x00df7e2f) */
/* WARNING: Removing unreachable block (ram,0x00df7e50) */
/* WARNING: Removing unreachable block (ram,0x00df7e31) */
/* WARNING: Removing unreachable block (ram,0x00df7e52) */

void FUN_00df7b80(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  undefined4 uVar9;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  undefined8 *local_120;
  char local_118;
  undefined8 *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_70;
  int local_58;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  pcVar1 = DAT_02572370;
  (*DAT_02572370)();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00ca0e70();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar1)();
  FUN_00e128b0();
  lVar7 = local_d0;
  if (local_c8 == '\0') {
    if (local_d0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  (**(code **)(*plVar4 + 0x98))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d243f0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_02585b30;
  plVar6[2] = 0;
  plVar6[3] = 0;
  uVar9 = (*DAT_02585b48)();
  local_70 = 0;
  local_58 = -1;
  while( true ) {
    plVar2 = DAT_02784930;
    lVar7 = (longlong)local_58;
    local_58 = local_58 + 1;
    if (*(int *)((longlong)puVar5 + 0xc) <= local_58) break;
    local_70 = *(longlong *)(puVar5[2] + 8 + lVar7 * 8);
    if (DAT_02784930 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_40 = plVar2;
    local_38 = '\0';
    FUN_00ca0840(uVar9,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar7 = unaff_RDI[7];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    local_138 = '\x01';
    local_128 = '\0';
    local_140 = lVar7;
    local_130 = plVar4;
    uVar9 = (**(code **)(*plVar6 + 0x388))(&local_130,&local_140);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar9 = FUN_00d50b20();
    }
  }
  FUN_00083b20();
  uVar9 = (**(code **)(*unaff_RDI + 0x398))();
  if (local_70 == 0) {
    local_108 = '\0';
    lVar7 = unaff_RDI[8];
    local_110 = puVar3;
    if (lVar7 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_100 = lVar7;
    FUN_00d95130(uVar9,&local_100);
    bVar8 = false;
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar9 = (**(code **)(*unaff_RDI + 0x398))();
    local_118 = '\0';
    local_120 = puVar3;
    (**(code **)(*local_40 + 0x388))(uVar9,&local_120);
    bVar8 = local_70 != 0;
    if (bVar8) {
      FUN_00d50b00();
    }
    if ((local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025795a8;
  (*DAT_025795c0)();
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8dbf0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  FUN_00e12970();
  FUN_00e12990();
  FUN_00e12970();
  FUN_00e7b4e0();
  local_f0 = local_70;
  local_e8 = '\0';
  FUN_00d8e100(local_70,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = '\0';
  local_e0 = puVar5;
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((bVar8) && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


