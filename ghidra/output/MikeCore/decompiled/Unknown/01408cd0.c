// Function: FUN_01408cd0
// Address: 01408cd0
// Size: 3402 bytes
// Class: Unknown
// String references:
//   "%@%@%@"
//   "%@es"


/* WARNING: Removing unreachable block (ram,0x01409129) */
/* WARNING: Removing unreachable block (ram,0x0140913b) */
/* WARNING: Removing unreachable block (ram,0x0140914b) */
/* WARNING: Removing unreachable block (ram,0x01409457) */
/* WARNING: Removing unreachable block (ram,0x01409554) */
/* WARNING: Removing unreachable block (ram,0x01409560) */
/* WARNING: Removing unreachable block (ram,0x0140900d) */
/* WARNING: Removing unreachable block (ram,0x0140901d) */
/* WARNING: Removing unreachable block (ram,0x01408f01) */
/* WARNING: Removing unreachable block (ram,0x01408f11) */
/* WARNING: Removing unreachable block (ram,0x01408d6b) */
/* WARNING: Removing unreachable block (ram,0x01408d77) */
/* WARNING: Removing unreachable block (ram,0x01408d2b) */
/* WARNING: Removing unreachable block (ram,0x01408d37) */
/* WARNING: Removing unreachable block (ram,0x014091f0) */
/* WARNING: Removing unreachable block (ram,0x01409200) */
/* WARNING: Removing unreachable block (ram,0x014092a1) */
/* WARNING: Removing unreachable block (ram,0x014092b1) */
/* WARNING: Removing unreachable block (ram,0x014092fd) */
/* WARNING: Removing unreachable block (ram,0x0140930d) */
/* WARNING: Removing unreachable block (ram,0x01409757) */
/* WARNING: Removing unreachable block (ram,0x01409763) */

longlong * FUN_01408cd0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  undefined8 *local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_50;
  
  plVar4 = local_90;
  local_50 = FUN_00d8c7a0();
  FUN_00d99300();
  if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d99300();
  if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_1b0 = DAT_027c0ae8;
  if (DAT_027c0ae8 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = '\x01';
  cVar6 = (**(code **)(*local_90 + 0x50))();
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027c0af0;
  lVar1 = DAT_02781628;
  plVar11 = local_90;
  if (cVar6 == '\0') {
    if (DAT_02781628 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar1;
    local_148 = '\x01';
    cVar6 = (**(code **)(*local_90 + 0x50))();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027c0b08;
    if (cVar6 == '\0') {
      local_88 = '\x01';
      FUN_00d50b00();
      local_80 = local_90;
      local_78 = '\x01';
      FUN_00d8cb40();
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_90 = &DAT_024c5048;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_100 = local_b0;
      local_f8 = '\0';
      cVar6 = FUN_00d90870();
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        bVar2 = false;
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar8 = FUN_00d8c7a0();
        FUN_00d8c7a0();
        FUN_00d8f140();
        local_f0 = DAT_02781610;
        bVar2 = true;
        plVar11 = &DAT_024c5048;
        if (DAT_02781610 != 0) {
          FUN_00d50b00();
        }
        local_e8 = '\x01';
        FUN_00d8dbf0();
        local_50 = local_50 - iVar8;
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_b0 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_027c0b08 != 0) {
        FUN_00d50b00();
      }
      local_140 = lVar1;
      local_138 = '\x01';
      cVar6 = FUN_00d90870();
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0277d5f0;
      if (cVar6 == '\0') {
        if (DAT_0277d5f0 != 0) {
          FUN_00d50b00();
        }
        local_120 = lVar1;
        local_118 = '\x01';
        cVar6 = FUN_00d90870();
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') goto LAB_014092bb;
        FUN_00d8f140();
        if (local_90 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_88 == '\0') {
            FUN_00d50b00();
          }
        }
        lVar1 = DAT_02781610;
        if (DAT_02781610 != 0) {
          FUN_00d50b00();
        }
        local_110 = lVar1;
        local_108 = '\x01';
        FUN_00d8dbf0();
        local_50 = local_50 + -2;
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d8f140();
        if (local_90 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_88 == '\0') {
            FUN_00d50b00();
          }
        }
        lVar1 = DAT_027c0b00;
        if (DAT_027c0b00 != 0) {
          FUN_00d50b00();
        }
        local_130 = lVar1;
        local_128 = '\x01';
        FUN_00d8dbf0();
        local_50 = local_50 + -4;
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (DAT_027c0af0 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar3;
    local_198 = '\x01';
    cVar6 = FUN_00d90870();
    lVar1 = DAT_027c0af8;
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      if (DAT_027c0af8 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar1;
      local_188 = '\x01';
      cVar7 = FUN_00d90870();
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027c09d8;
    if (cVar7 == '\0') {
      if (DAT_027c09d8 != 0) {
        FUN_00d50b00();
      }
      local_170 = lVar1;
      local_168 = '\x01';
      cVar6 = FUN_00d90870();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
LAB_014092bb:
        bVar2 = false;
        plVar11 = (longlong *)0x0;
      }
      else {
        FUN_00d8f140();
        if (local_90 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_88 == '\0') {
            FUN_00d50b00();
          }
        }
        lVar1 = DAT_02781610;
        if (DAT_02781610 != 0) {
          FUN_00d50b00();
        }
        local_160 = lVar1;
        local_158 = '\x01';
        FUN_00d8dbf0();
        local_50 = local_50 + -2;
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d8f140();
      if (local_90 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_88 == '\0') {
          FUN_00d50b00();
        }
      }
      lVar1 = DAT_027c0b00;
      if (DAT_027c0b00 != 0) {
        FUN_00d50b00();
      }
      local_180 = lVar1;
      local_178 = '\x01';
      FUN_00d8dbf0();
      local_50 = local_50 + -4;
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  iVar8 = FUN_00d8c7a0();
  if (local_50 == iVar8) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d8c7a0();
    FUN_00d97ce0();
    plVar10 = plVar11;
    bVar5 = bVar2;
    if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    while( true ) {
      bVar2 = bVar5;
      plVar11 = plVar10;
      lVar1 = DAT_0277d5f0;
      if (DAT_0277d5f0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      cVar6 = FUN_00d90870();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02781610;
      if (cVar6 == '\0') break;
      if (DAT_02781610 != 0) {
        FUN_00d50b00();
      }
      local_d0 = lVar1;
      local_c8 = '\x01';
      FUN_00d8dbf0();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8f140();
      if (local_90 == plVar11) {
        plVar10 = plVar11;
        bVar5 = bVar2;
        if ((bVar2) || (local_90 == (longlong *)0x0)) goto LAB_014096df;
        bVar5 = true;
        if (local_88 == '\0') {
          FUN_00d50b00();
          bVar5 = true;
LAB_014096df:
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar10 = local_90;
        if (local_88 == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar2) && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_014096df;
        }
        bVar5 = true;
        if ((bVar2) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_1b8 = local_90;
    local_1c0 = puVar9;
    FUN_002bd7b0(&local_1b8,&local_1c0,3);
    FUN_00d8cb40();
    lVar1 = *param_2;
    if (lVar1 == local_b0) {
      if (((char)param_2[1] == '\0') && (local_b0 != 0)) {
        if (local_a8 != '\0') goto LAB_0140982d;
        FUN_00d50b00();
        goto LAB_01409872;
      }
LAB_0140987b:
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_2[1];
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_b0;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01409872:
        *(undefined1 *)(param_2 + 1) = 1;
        goto LAB_0140987b;
      }
      *param_2 = local_b0;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0140982d:
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar1 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
    }
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (puVar9 == (undefined8 *)0x0) goto LAB_0140997f;
  }
  FUN_00d50b20();
LAB_0140997f:
  if ((bVar2) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return unaff_RDI;
}


