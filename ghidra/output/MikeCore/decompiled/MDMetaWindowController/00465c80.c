// Function: FUN_00465c80
// Address: 00465c80
// Size: 4224 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465c80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong **pplVar9;
  longlong *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined8 *local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined4 local_5c;
  byte local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  local_98 = puVar7;
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar2)();
  local_70 = puVar7;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar2)();
  plVar12 = DAT_026db000;
  local_68 = puVar7;
  if (DAT_026db000 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar15 = FUN_0071a120();
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar15 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  local_88 = plVar12;
  local_80 = '\0';
  FUN_000175c0(uVar15,&local_88);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = unaff_RDI;
  if (plVar11 != (longlong *)0x0) {
    local_38[0] = '\0';
    local_40 = plVar11;
    uVar5 = FUN_00c70bc0();
    plVar10 = (longlong *)(ulonglong)uVar5;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar11 != (longlong *)0x0 & (byte)plVar10;
  local_48[0] = '\0';
  local_88 = unaff_RDI;
  do {
    plVar12 = local_88;
    (**(code **)(*local_88 + 0x370))();
    plVar11 = local_40;
    if (local_40 == plVar12) {
      if (((local_48[0] == '\0') && (local_40 != (longlong *)0x0)) && (local_38[0] != '\0')) {
        local_48[0] = '\x01';
        plVar11 = plVar12;
        goto LAB_00465ee7;
      }
    }
    else {
      local_88 = local_40;
      if (local_38[0] == '\0') {
        if (local_48[0] == '\0') {
          pcVar8 = local_48;
        }
        else {
          FUN_00d50b20();
          pcVar8 = local_48;
        }
      }
      else {
        if (local_48[0] != '\0') {
          FUN_00d50b20();
        }
        local_48[0] = '\x01';
LAB_00465ee7:
        local_48[0] = '\x01';
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      plVar12 = plVar11;
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_88;
      if (cVar3 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar12 = local_88;
    if (*pplVar9 != (longlong *)0x0) {
      if ((local_48[0] == '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (unaff_RDI == (longlong *)0x0) goto LAB_00466079;
      goto LAB_00466074;
    }
  } while (local_88 != (longlong *)0x0);
  plVar12 = (longlong *)0x0;
  if (unaff_RDI != (longlong *)0x0) {
LAB_00466074:
    FUN_00d50b20();
  }
LAB_00466079:
  bVar14 = true;
  if (plVar12 == (longlong *)0x0) {
    bVar13 = false;
    local_78 = (longlong *)0x0;
    local_90 = 0;
    local_5c = 1;
    goto LAB_00466248;
  }
  FUN_0062abf0();
  bVar13 = local_40[0x61] != 0;
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  uVar15 = (**(code **)(*plVar12 + 0x5e0))();
  if (local_38[0] == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_00466154;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0046610a:
    FUN_00756eb0();
    local_78 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_90 = 0;
      local_78 = (longlong *)0x0;
    }
    else {
      local_90 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar15 = FUN_00d50b20();
    if (local_78 == (longlong *)0x0) {
      local_5c = (undefined4)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
      local_78 = (longlong *)0x0;
    }
    else {
      bVar4 = (**(code **)(*local_78 + 0x4a0))();
      local_50 = local_50 & bVar4;
      local_5c = 0;
    }
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_0046610a;
LAB_00466154:
    local_5c = (undefined4)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
    local_78 = (longlong *)0x0;
    local_90 = 0;
  }
  FUN_00643590();
  iVar6 = *(int *)((longlong)local_40 + 0xc);
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar6 != 0) {
    FUN_00643590();
    FUN_00d23310();
    plVar11 = local_40;
    pcVar8 = local_48;
    if (local_38[0] != '\0') {
      pcVar8 = local_38;
    }
    local_48[0] = local_38[0];
    *pcVar8 = '\0';
    if ((local_38[0] != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar6 = FUN_00228b30();
    bVar14 = iVar6 == 0;
    if ((local_48[0] != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00466248:
  if ((unaff_RDI[0x1b] != 0) && (unaff_RDI[0x17] != 0)) {
    FUN_01e53c20();
    FUN_01e3f820();
    FUN_00714750(param_2);
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar7 = local_98;
  plVar11 = (longlong *)unaff_RDI[0x1c];
  if ((char)unaff_RDI[0x11] == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = plVar11;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (bVar13) {
      lVar1 = unaff_RDI[0x1a];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = unaff_RDI[0x19];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = unaff_RDI[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x20];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x1d];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x25];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (bVar13) {
      lVar1 = unaff_RDI[0x13];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_003ad150();
      lVar1 = unaff_RDI[0x1f];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = unaff_RDI[0x24];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    uVar15 = FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar15 = FUN_00d50b20();
    }
  }
  else {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = plVar11;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x14];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (bVar13) {
      lVar1 = unaff_RDI[0x1a];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = unaff_RDI[0x19];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = unaff_RDI[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x1b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x23];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x20];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x1d];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((bool)(!bVar14 & bVar13)) {
      lVar1 = unaff_RDI[0x1f];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != 0) && (bVar14)) {
      lVar1 = unaff_RDI[0x18];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = unaff_RDI[0x25];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar7 = local_98;
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x13];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_003ad150();
    if ((bVar13) && (lVar1 = unaff_RDI[0x22], lVar1 != 0)) {
      FUN_00d50b00();
      local_38[0] = '\0';
      local_40 = (longlong *)lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x24];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = (longlong *)lVar1;
    uVar15 = FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar15 = FUN_00d50b20();
    }
  }
  uVar15 = FUN_004b43d0(uVar15,0);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_c0 = 1;
  local_c8 = (longlong)plVar11;
  local_f0 = 0;
  local_f8 = puVar7;
  uVar15 = FUN_00467a40(uVar15,&local_f8);
  if (plVar11 != (longlong *)0x0) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  uVar15 = FUN_004b43d0(uVar15,1);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_b0 = 1;
  local_b8 = (longlong)plVar11;
  local_e8 = local_68;
  local_e0 = 0;
  uVar15 = FUN_00467a40(uVar15,&local_e8);
  if (plVar11 != (longlong *)0x0) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  uVar15 = FUN_004b43d0(uVar15,2);
  plVar11 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_a0 = 1;
  local_a8 = (longlong)plVar11;
  local_d8 = local_70;
  local_d0 = 0;
  FUN_00467a40(uVar15,&local_d8);
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5c0))();
  if ((char)local_90 != '\0' && (char)local_5c == '\0') {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


