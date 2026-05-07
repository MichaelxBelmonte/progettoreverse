// Function: FUN_0171c800
// Address: 0171c800
// Size: 5337 bytes
// Class: GNString
// String references:
//   "%@%@"


/* WARNING: Removing unreachable block (ram,0x0171dc16) */
/* WARNING: Removing unreachable block (ram,0x0171ce0c) */
/* WARNING: Removing unreachable block (ram,0x0171ce18) */
/* WARNING: Removing unreachable block (ram,0x0171ccaf) */
/* WARNING: Removing unreachable block (ram,0x0171ccb8) */
/* WARNING: Removing unreachable block (ram,0x0171cba5) */
/* WARNING: Removing unreachable block (ram,0x0171cbae) */
/* WARNING: Removing unreachable block (ram,0x0171ca9b) */
/* WARNING: Removing unreachable block (ram,0x0171caa4) */
/* WARNING: Removing unreachable block (ram,0x0171ca16) */
/* WARNING: Removing unreachable block (ram,0x0171ca1f) */
/* WARNING: Removing unreachable block (ram,0x0171cb20) */
/* WARNING: Removing unreachable block (ram,0x0171cb29) */
/* WARNING: Removing unreachable block (ram,0x0171cc2a) */
/* WARNING: Removing unreachable block (ram,0x0171cc33) */
/* WARNING: Removing unreachable block (ram,0x0171cd34) */
/* WARNING: Removing unreachable block (ram,0x0171cd3d) */
/* WARNING: Removing unreachable block (ram,0x0171d21c) */
/* WARNING: Removing unreachable block (ram,0x0171d228) */
/* WARNING: Removing unreachable block (ram,0x0171dc1f) */
/* WARNING: Removing unreachable block (ram,0x0171d755) */
/* WARNING: Removing unreachable block (ram,0x0171d31a) */
/* WARNING: Removing unreachable block (ram,0x0171d327) */
/* WARNING: Removing unreachable block (ram,0x0171d044) */
/* WARNING: Removing unreachable block (ram,0x0171d051) */
/* WARNING: Removing unreachable block (ram,0x0171ce65) */
/* WARNING: Removing unreachable block (ram,0x0171ce6e) */
/* WARNING: Removing unreachable block (ram,0x0171d2e8) */
/* WARNING: Removing unreachable block (ram,0x0171d2f5) */
/* WARNING: Removing unreachable block (ram,0x0171d3da) */
/* WARNING: Removing unreachable block (ram,0x0171d9f0) */

undefined8 FUN_0171c800(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  void *pvVar11;
  longlong *plVar12;
  pthread_key_t pVar13;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  longlong local_1e0;
  char local_1d8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  longlong *local_c0;
  longlong local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RSI + 0x38) == 0) || (*param_2 == 0)) goto LAB_0171dc31;
  if ((DAT_028ada88 == (longlong *)0x0) || (DAT_028ada91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ada88 == (longlong *)0x0) {
      FUN_0177c8c0();
      plVar12 = DAT_028ada88;
      if (DAT_028ada88 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar12 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar12 = local_60;
        }
        bVar17 = DAT_028ada88 != (longlong *)0x0;
        DAT_028ada88 = plVar12;
        if (bVar17) {
          FUN_00d50b20();
          plVar12 = local_60;
        }
      }
      if ((plVar12 != (longlong *)0x0) && (DAT_028ada90 == '\0')) {
        DAT_028ada90 = '\x01';
        FUN_00e8cb90();
        plVar12 = local_60;
      }
      if ((local_58 != '\0') && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028ada91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ada91 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028ada98 == (undefined8 *)0x0) || (DAT_028adaa1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ada98 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02572358;
      (*DAT_02572370)();
      bVar17 = DAT_028ada98 == (undefined8 *)0x0;
      DAT_028ada98 = puVar8;
      if (((bVar17) || (FUN_00d50b20(), DAT_028ada98 != (undefined8 *)0x0)) &&
         (DAT_028adaa0 == '\0')) {
        DAT_028adaa0 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_60 = local_70;
      local_58 = '\0';
      FUN_00d21140();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028adaa1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adaa1 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar12 = local_60;
  local_158 = 0;
  lVar10 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  local_160 = lVar10;
  uVar5 = FUN_01794580();
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  local_170 = 0;
  if (uVar5 < 7) {
    local_170 = (ulonglong)uVar5;
  }
  FUN_00ddb860();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00d95590();
  local_118 = 0;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_118 = '\x01';
  local_120 = local_60;
  (**(code **)(*local_60 + 0x3e0))();
  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0171e8d0();
  local_108 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_108 = '\x01';
  local_110 = local_80;
  FUN_00d8ede0();
  local_f8 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_f8 = '\x01';
  local_100 = local_98;
  FUN_00d95130();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = local_60;
  FUN_0171ebf0();
  local_e8 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_e8 = '\x01';
  local_f0 = local_80;
  FUN_00d8ede0();
  local_d8 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_d8 = '\x01';
  local_e0 = local_98;
  FUN_00d95130();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  local_128 = local_60;
  FUN_00083ea0(2,&local_128);
  FUN_00d8cb40();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_168 = local_80;
  cVar3 = (**(code **)(*local_60 + 0x3e0))();
  iVar14 = 0;
  if (cVar3 != '\0') {
    iVar14 = 0;
    for (iVar15 = 0; iVar6 = FUN_00d8c7a0(), iVar15 < iVar6; iVar15 = iVar15 + 1) {
      FUN_00d8cbc0();
      uVar5 = FUN_00d90d50();
      FUN_00d8cbc0();
      bVar4 = FUN_00d90d50();
      iVar14 = (iVar14 - (uVar5 & 0xff)) + (uint)bVar4;
    }
  }
  FUN_00d95590();
  local_c8 = 0;
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  else {
    local_58 = '\0';
  }
  local_c8 = '\x01';
  local_d0 = &DAT_024c5048;
  (**(code **)(*local_60 + 0x3e0))();
  if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*local_60 + 0x380))();
  FUN_00d97ce0();
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  (**(code **)(*local_60 + 0x380))();
  FUN_00d8f140();
  puVar8 = (undefined8 *)*param_2;
  if (puVar8 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (local_58 != '\0') goto LAB_0171d459;
      FUN_00d50b00();
      goto LAB_0171d493;
    }
LAB_0171d49b:
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    lVar10 = param_2[1];
    if (local_58 == '\0') {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar10 != '\0') && (puVar8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_0171d493:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_0171d49b;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar10 != '\0') && (puVar8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_0171d459:
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar10 = DAT_027c0a18;
  if (DAT_027c0a18 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027cc860;
  local_1a0 = lVar10;
  local_198 = '\x01';
  if (DAT_027cc860 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar1;
  local_188 = '\x01';
  FUN_00d98db0(&local_190,&local_1a0,1);
  puVar8 = (undefined8 *)*param_2;
  if (puVar8 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (local_58 != '\0') goto LAB_0171d566;
      FUN_00d50b00();
      goto LAB_0171d5a0;
    }
LAB_0171d5a4:
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    lVar10 = param_2[1];
    if (local_58 == '\0') {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar10 != '\0') && (puVar8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_0171d5a0:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_0171d5a4;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar10 != '\0') && (puVar8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_0171d566:
    *(undefined1 *)(param_2 + 1) = 1;
    local_58 = '\0';
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  lVar10 = 0;
  do {
    iVar15 = *(int *)((longlong)&DAT_02411aa0 + lVar10);
    lVar1 = *(longlong *)(DAT_028ada88[2] + (longlong)iVar15 * 8);
    local_148 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    local_150 = lVar1;
    uVar9 = FUN_00d90650();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    iVar6 = (int)((ulonglong)uVar9 >> 0x20);
    if (iVar6 == 0) {
      lVar1 = *(longlong *)(DAT_028ada98[2] + (longlong)iVar15 * 8);
      local_138 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      local_140 = lVar1;
      uVar9 = FUN_00d90650();
      iVar6 = (int)((ulonglong)uVar9 >> 0x20);
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((iVar6 != 0) && ((int)uVar9 == 0)) {
      FUN_00d8f140();
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
      local_130 = &DAT_024c5048;
      iVar15 = (iVar15 + (int)local_170) % 7;
      pVar13 = (iVar15 >> 0x1f & 7U) + iVar15;
      iVar15 = 0;
      if (pVar13 < 7) {
        lVar10 = (longlong)(int)pVar13;
        pVar13 = 0x2411d30;
        iVar15 = *(int *)(&DAT_02411d30 + lVar10 * 4);
      }
      iVar6 = (int)local_170 * 2;
      iVar16 = 6;
      if (iVar6 < 6) {
        iVar16 = iVar6;
      }
      pvVar11 = _pthread_getspecific(pVar13);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01743720();
      FUN_0171aac0();
      FUN_01780260(iVar14 * 7,
                   ((iVar15 + iVar14 * 7) -
                   ((((iVar6 - iVar16) + 6U) / 7) * -7 + (int)local_170 * 2)) + iVar7);
      plVar2 = local_130;
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_58 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_128 = plVar2;
      FUN_00083ea0(2,&local_128);
      FUN_00d8cb40();
      lVar10 = *param_2;
      if (lVar10 == local_80) {
        if (((char)param_2[1] == '\0') && (local_80 != 0)) {
          if (local_78 != '\0') goto LAB_0171da2b;
          FUN_00d50b00();
          goto LAB_0171dae2;
        }
LAB_0171daea:
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = param_2[1];
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
          *param_2 = local_80;
          if (((char)lVar1 != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
LAB_0171dae2:
          *(undefined1 *)(param_2 + 1) = 1;
          goto LAB_0171daea;
        }
        *param_2 = local_80;
        if (((char)lVar1 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
LAB_0171da2b:
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_130 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0171dbcc;
    }
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x1c);
  local_128 = (longlong *)*param_2;
  FUN_00083ea0(2,&local_128);
  FUN_00d8cb40();
  lVar10 = *param_2;
  if (lVar10 == local_80) {
    if (((char)param_2[1] == '\0') && (local_80 != 0)) {
      if (local_78 != '\0') goto LAB_0171da67;
      FUN_00d50b00();
      goto LAB_0171db6b;
    }
LAB_0171db73:
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_80;
      if (((char)lVar1 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
LAB_0171db6b:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_0171db73;
    }
    *param_2 = local_80;
    if (((char)lVar1 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
LAB_0171da67:
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_0171dbcc:
  local_60 = &DAT_024c5048;
  FUN_00d50b20();
  if (local_168 != 0) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0171dc31:
  local_180 = *param_2;
  local_178 = '\0';
  FUN_01407af0();
  FUN_0171aac0();
  FUN_01411410();
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


