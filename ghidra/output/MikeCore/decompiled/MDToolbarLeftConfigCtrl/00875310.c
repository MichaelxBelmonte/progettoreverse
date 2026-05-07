// Function: FUN_00875310
// Address: 00875310
// Size: 1568 bytes
// Class: MDToolbarLeftConfigCtrl


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00875310(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_30;
  char local_28;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar4 = DAT_027403f0;
  if (DAT_027403f0 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_80 + 0x450))();
  uVar8 = DAT_02394298;
  if (cVar5 == '\0') {
    uVar8 = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_70 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar5 == '\0') {
    uVar9 = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_60 + 0x450))();
  uVar10 = DAT_02394298;
  if (cVar5 == '\0') {
    uVar10 = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_50 + 0x450))();
  uVar11 = DAT_02394298;
  if (cVar5 == '\0') {
    uVar11 = DAT_02390124;
  }
  auVar13 = insertps(ZEXT416(uVar10),ZEXT416(uVar11),0x10);
  auVar12 = insertps(ZEXT416(uVar8),uVar9,0x10);
  (**(code **)(*local_30 + 0x940))(auVar12._0_8_,auVar13._0_8_);
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_024c5a38;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*DAT_024c5a50)();
  puVar1 = (undefined8 *)unaff_RDI[0x14];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x14] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_024f5620;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  (*DAT_024f5638)();
  puVar1 = (undefined8 *)unaff_RDI[0x15];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x15] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_024cc728;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  (*DAT_024cc740)();
  puVar1 = (undefined8 *)unaff_RDI[0x11];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x11] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_024c6008;
  puVar6[0xe] = &DAT_024c65f8;
  puVar6[0xf] = &DAT_024c6640;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x20] = 0;
  puVar6[0x21] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
  puVar6[0x24] = 0;
  puVar6[0x25] = 0;
  *(undefined1 *)(puVar6 + 0x26) = 0;
  (*DAT_024c6020)();
  puVar1 = (undefined8 *)unaff_RDI[0x12];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x12] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_024d1190;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  uVar3 = _UNK_02393728;
  puVar6[0x1d] = _DAT_02393720;
  puVar6[0x1e] = uVar3;
  puVar6[0x1f] = 0;
  (*DAT_024d11a8)();
  puVar1 = (undefined8 *)unaff_RDI[0x19];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x19] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_024cccf8;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*DAT_024ccd10)();
  puVar1 = (undefined8 *)unaff_RDI[0x13];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x13] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_02516a00;
  puVar6[0xe] = 0;
  (*DAT_02516a18)();
  puVar1 = (undefined8 *)unaff_RDI[0x16];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x16] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_000f58f0();
  (**(code **)(*plVar7 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0x17];
  if (plVar2 == plVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x17] = (longlong)plVar7;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &DAT_024c3820;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*DAT_024c3838)();
  puVar1 = (undefined8 *)unaff_RDI[0x18];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x18] = (longlong)puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x608))();
  return;
}


