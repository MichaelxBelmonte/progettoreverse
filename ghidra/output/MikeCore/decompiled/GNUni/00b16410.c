// Function: FUN_00b16410
// Address: 00b16410
// Size: 2542 bytes
// Class: GNUni


undefined8 * FUN_00b16410(void)

{
  uint3 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint7 uVar11;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *unaff_RDI;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  FUN_00d6f370();
  local_e8 = DAT_02703ad8;
  if (DAT_02703ad8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_00d704d0(&local_d8,&local_e8);
  plVar14 = local_158;
  if (local_150 == '\0') {
    if (((local_158 != (longlong *)0x0) && (FUN_00d50b00(), local_150 != '\0')) &&
       (local_158 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_150 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_80 = plVar14;
  FUN_00b15f30();
  local_60 = local_158;
  if ((local_150 == '\0') && (local_158 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar14 == (longlong *)0x0) {
    iVar5 = *(int *)((longlong)local_60 + 0xc);
    local_58 = 0;
    local_50 = (longlong *)0x0;
    local_40 = 0;
    plVar14 = (longlong *)0x0;
  }
  else {
    if (*(int *)((longlong)local_60 + 0xc) < 1) {
      local_50 = (longlong *)0x0;
      local_58 = 0;
      cVar4 = '\0';
      plVar10 = (longlong *)0x0;
      local_40 = 0;
      plVar14 = (longlong *)0x0;
      goto LAB_00b16977;
    }
    lVar15 = 0;
    plVar14 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    local_58 = 0;
    uVar12 = 0;
    do {
      plVar10 = *(longlong **)(local_60[2] + lVar15 * 8);
      uVar13 = (undefined7)(uVar12 >> 8);
      if (plVar14 == plVar10) {
        if (((char)uVar12 == '\0') && (plVar14 != (longlong *)0x0)) {
          uVar12 = CONCAT71(uVar13,1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (((char)uVar12 == '\0') || (plVar14 == (longlong *)0x0)) {
          uVar12 = CONCAT71(uVar13,1);
          plVar14 = plVar10;
        }
        else {
          FUN_00d50b20();
          uVar12 = CONCAT71(uVar13,1);
          plVar14 = plVar10;
        }
      }
      (**(code **)(*plVar14 + 0x5e0))();
      local_c8 = local_80;
      local_c0 = '\0';
      local_40 = uVar12;
      uVar6 = (**(code **)(*local_158 + 0x50))();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar12 = local_40;
      uVar9 = local_58;
      plVar10 = local_50;
      if ((char)uVar6 == '\0') goto LAB_00b1671a;
      cVar4 = (**(code **)(*plVar14 + 0x5f8))();
      cVar2 = (char)uVar12;
      if (cVar4 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (cVar2 == '\0') {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar14;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        cVar4 = '\0';
        plVar16 = (longlong *)0x0;
        goto LAB_00b16aaf;
      }
      if (plVar14[0x15] != 0) {
        plVar14[0x15] = 0;
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00d50b00();
      }
      (**(code **)(*plVar14 + 0x5e8))();
      cVar4 = (**(code **)(*plVar14 + 0x5f8))();
      if (cVar4 != '\0') {
        (**(code **)(*plVar14 + 0x5c8))();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if ((char)local_40 == '\0') {
          FUN_00d50b00();
          *unaff_RDI = plVar14;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          cVar4 = '\0';
          plVar16 = plVar14;
          goto LAB_00b16aaf;
        }
        *unaff_RDI = plVar14;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        cVar4 = '\x01';
        goto LAB_00b16d81;
      }
      if (cVar2 != '\0') {
        FUN_00d50b20();
      }
      FUN_00b173b0();
      plVar10 = local_50;
      uVar1 = (uint3)((uint)uVar6 >> 8);
      uVar11 = (uint7)uVar1;
      if (local_158 == local_50) {
        if (((char)local_58 == '\0') && (local_158 != (longlong *)0x0)) {
          uVar9 = CONCAT71(uVar11,1);
          if (local_150 != '\0') goto LAB_00b1671a;
          uVar9 = (ulonglong)CONCAT31(uVar1,1);
          FUN_00d50b00();
        }
        else {
          uVar9 = local_58 & 0xffffffff;
        }
LAB_00b1692b:
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = local_158;
        if (local_150 == '\0') {
          if (local_158 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          uVar9 = CONCAT71(uVar11,1);
          if (((char)local_58 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00b1692b;
        }
        uVar9 = CONCAT71(uVar11,1);
        if (((char)local_58 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00b1671a:
      local_50 = plVar10;
      local_58 = uVar9;
      lVar15 = lVar15 + 1;
      iVar5 = *(int *)((longlong)local_60 + 0xc);
      uVar12 = local_40;
    } while (lVar15 < iVar5);
  }
  if (iVar5 < 1) {
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar15 = 0;
    local_48 = 0;
    plVar16 = (longlong *)0x0;
    do {
      lVar7 = local_60[2];
      plVar10 = *(longlong **)(lVar7 + lVar15 * 8);
      if (plVar14 == plVar10) {
        if (((char)local_40 == '\0') && (plVar14 != (longlong *)0x0)) {
          local_40 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (plVar14 == (longlong *)0x0)) {
          local_40 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          plVar14 = plVar10;
        }
        else {
          uVar8 = FUN_00d50b20();
          local_40 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          plVar14 = plVar10;
        }
      }
      cVar2 = (**(code **)(*plVar14 + 0x5f8))();
      cVar3 = (char)local_40;
      cVar4 = (char)local_48;
      if (cVar2 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (cVar3 == '\0') {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar14;
        *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00b16aaf:
        cVar2 = '\0';
        goto LAB_00b16d86;
      }
      if (plVar16 == plVar14) {
        plVar10 = plVar16;
        uVar12 = local_48;
        if ((cVar3 != '\0') && (uVar12 = local_48, cVar4 == '\0')) {
          uVar12 = local_48 >> 8;
          FUN_00d50b00();
          uVar12 = CONCAT71((int7)uVar12,1);
        }
      }
      else {
        if (cVar3 != '\0') {
          FUN_00d50b00();
        }
        plVar10 = plVar14;
        uVar12 = local_40;
        if (((char)local_48 != '\0') && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
          uVar12 = local_40;
        }
      }
      (**(code **)(*plVar14 + 0x5e8))();
      local_48 = uVar12 & 0xffffffff;
      cVar4 = (**(code **)(*plVar14 + 0x5f8))();
      if (cVar4 != '\0') {
        (**(code **)(*plVar14 + 0x5c8))();
        if (plVar10 == plVar14) {
          local_48 = uVar12;
          if (((char)local_40 != '\0') && (local_48 = uVar12 & 0xffffffff, (char)uVar12 == '\0')) {
            local_48 = CONCAT71((int7)((uVar12 & 0xffffffff) >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if ((char)local_40 != '\0') {
            FUN_00d50b00();
          }
          local_48 = local_40;
          if (((char)uVar12 != '\0') && (local_48 = local_40, plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_48 = local_40;
          }
        }
        lVar15 = DAT_0275e010;
        cVar2 = (char)local_40;
        cVar4 = (char)local_48;
        if (local_50 != (longlong *)0x0) {
          if (DAT_0275e010 != 0) {
            FUN_00d50b00();
          }
          lVar7 = DAT_0275e018;
          local_88 = lVar15;
          if (DAT_0275e018 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar14 + 0x5e0))();
          lVar15 = DAT_0275e020;
          if (DAT_0275e020 != 0) {
            FUN_00d50b00();
          }
          local_190 = local_88;
          local_188 = local_50;
          local_180 = lVar7;
          local_178 = local_168;
          local_170 = lVar15;
          FUN_007f7950(&local_188,&local_190,&local_180,&local_178);
          FUN_000b4da0();
          local_78 = local_70;
          if (local_68 == '\0') {
            if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_68 = '\0';
          }
          local_158 = (longlong *)&DAT_02511748;
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          local_158 = &DAT_02511780;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          FUN_007f76c0();
          if (lVar15 != 0) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          lVar15 = DAT_0275e028;
          if (DAT_0275e028 != 0) {
            FUN_00d50b00();
          }
          lVar7 = DAT_0275e030;
          local_b8 = lVar15;
          local_b0 = '\x01';
          if (DAT_0275e030 != 0) {
            FUN_00d50b00();
          }
          local_a8 = lVar7;
          local_a0 = '\x01';
          FUN_01f6ca30();
          local_98 = local_78;
          local_90 = '\0';
          cVar2 = (char)local_40;
          (**(code **)(*local_158 + 0x5d8))();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if (local_78 != 0) {
            FUN_00d50b20();
          }
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (cVar2 == '\0') {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar14;
        *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00b16d81:
        cVar2 = '\0';
        plVar16 = plVar14;
        goto LAB_00b16d86;
      }
      lVar15 = lVar15 + 1;
      local_48 = uVar12 & 0xffffffff;
      plVar16 = plVar10;
    } while (lVar15 < *(int *)((longlong)local_60 + 0xc));
  }
  cVar4 = (char)uVar12;
LAB_00b16977:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  cVar2 = (char)local_40;
  plVar16 = plVar10;
LAB_00b16d86:
  FUN_00d50b20();
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (plVar16 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 != '\0') && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


