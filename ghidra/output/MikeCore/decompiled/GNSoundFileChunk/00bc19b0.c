// Function: FUN_00bc19b0
// Address: 00bc19b0
// Size: 2342 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bc1b15) */
/* WARNING: Removing unreachable block (ram,0x00bc1b21) */
/* WARNING: Removing unreachable block (ram,0x00bc1b2f) */
/* WARNING: Removing unreachable block (ram,0x00bc1b3b) */

void FUN_00bc19b0(void)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  uint *puVar12;
  longlong *unaff_RSI;
  uint *puVar13;
  longlong unaff_RDI;
  uint uVar14;
  uint uVar15;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  
  lVar1 = DAT_02765700;
  if (*unaff_RSI == 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02764880;
  puVar12 = *(uint **)(*unaff_RSI + 0x10);
  uVar15 = *puVar12;
  if (uVar15 == 0) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_50 = plVar9;
  (**(code **)(*plVar9 + 0x18))();
  if (uVar15 != 0) {
    uVar14 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    puVar12 = puVar12 + 1;
    uVar15 = 1;
    if (1 < uVar14) {
      uVar15 = uVar14;
    }
    uVar14 = 0;
    do {
      FUN_00d93730();
      plVar9 = local_48;
      if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar5 = (uint *)((longlong)puVar12 + 3);
      puVar13 = puVar12;
      do {
        puVar12 = puVar5;
        puVar13 = (uint *)((longlong)puVar13 + 1);
        puVar5 = (uint *)((longlong)puVar12 + 1);
      } while (*(char *)puVar13 != '\0');
      FUN_00d93730();
      plVar3 = local_48;
      if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      do {
        uVar2 = *puVar12;
        puVar12 = (uint *)((longlong)puVar12 + 1);
      } while ((char)uVar2 != '\0');
      FUN_00cd2930();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar15);
  }
  plVar9 = DAT_02765710;
  if (DAT_02765710 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar9;
  local_40 = '\0';
  cVar6 = FUN_00c9ff50();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = DAT_02765718;
  if (cVar6 == '\0') {
    cVar6 = '\0';
  }
  else {
    if (DAT_02765718 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar3;
    local_40 = '\0';
    cVar6 = FUN_00c9ff50();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02764880;
  if (cVar6 == '\0') {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar9 = DAT_02765710;
  if (DAT_02765710 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01de4130();
  uVar7 = FUN_00d8d560();
  *(undefined4 *)(unaff_RDI + 0x18) = uVar7;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = DAT_02765718;
  if (DAT_02765718 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar10 = FUN_01de4130();
  plVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar9 != (longlong *)0x0) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = DAT_02704060;
  if (plVar3 == (longlong *)0x0) {
    local_54 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    local_60 = 0;
    lVar1 = DAT_02764880;
joined_r0x00bc1f0c:
    DAT_02764880 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_d0 = lVar1;
    FUN_00cc78b0();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_02704060 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_54 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    local_e0 = lVar1;
    local_d8 = '\x01';
    uVar10 = FUN_00d91000(1,&local_e0);
    plVar9 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      local_60 = 0;
    }
    else if (local_40 == '\0') {
      uVar10 = FUN_00d50b00();
      local_60 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      local_60 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if ((plVar9 == (longlong *)0x0) || (local_54 = 0, *(int *)((longlong)plVar9 + 0xc) != 2))
    goto joined_r0x00bc1f0c;
  }
  uVar7 = FUN_00d8d560();
  *(undefined4 *)(unaff_RDI + 0x10) = uVar7;
  uVar7 = FUN_00d8d560();
  *(undefined4 *)(unaff_RDI + 0x14) = uVar7;
  *(undefined1 *)(unaff_RDI + 0xc) = 1;
  local_c0 = DAT_02765728;
  if (DAT_02765728 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  FUN_01de4130();
  plVar9 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02765730;
  uVar7 = 0;
  if (plVar9 != (longlong *)0x0) {
    if (DAT_02765730 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    cVar6 = (**(code **)(*plVar9 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02765738;
    uVar7 = 2;
    if (cVar6 == '\0') {
      if (DAT_02765738 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar1;
      local_98 = '\x01';
      cVar6 = (**(code **)(*plVar9 + 0x50))();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02765740;
      uVar7 = 1;
      if (cVar6 == '\0') {
        if (DAT_02765740 != 0) {
          FUN_00d50b00();
        }
        local_90 = lVar1;
        local_88 = '\x01';
        cVar6 = (**(code **)(*plVar9 + 0x50))();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = DAT_02765748;
        uVar7 = 3;
        if (cVar6 == '\0') {
          if (DAT_02765748 != 0) {
            FUN_00d50b00();
          }
          local_80 = lVar1;
          local_78 = '\x01';
          cVar6 = (**(code **)(*plVar9 + 0x50))();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = 0;
          if (cVar6 == '\0') goto LAB_00bc213a;
        }
      }
    }
  }
  *(undefined4 *)(unaff_RDI + 0x20) = uVar7;
LAB_00bc213a:
  lVar1 = DAT_02765750;
  if (DAT_02765750 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  FUN_01de4130();
  plVar4 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    *(undefined4 *)(unaff_RDI + 0x1c) = 0;
  }
  else {
    uVar7 = 0;
    cVar6 = FUN_00d8ca70();
    if ((int)cVar6 - 0x41U < 8) {
      uVar7 = *(undefined4 *)(&DAT_023d92ac + (longlong)(int)((int)cVar6 - 0x41U) * 4);
    }
    *(undefined4 *)(unaff_RDI + 0x1c) = uVar7;
    iVar8 = FUN_00d8c7a0();
    if (iVar8 == 2) {
      cVar6 = FUN_00d8ca70();
      iVar8 = *(int *)(unaff_RDI + 0x1c);
      if (cVar6 == 'b') {
        iVar11 = 0xb;
        if (0 < iVar8) {
          iVar11 = iVar8 + -1;
        }
      }
      else {
        iVar11 = 0;
        if (iVar8 < 0xb) {
          iVar11 = iVar8 + 1;
        }
      }
      *(int *)(unaff_RDI + 0x1c) = iVar11;
    }
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_60 != '\0' && (char)local_54 == '\0') {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


