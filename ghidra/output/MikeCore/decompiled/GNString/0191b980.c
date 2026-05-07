// Function: FUN_0191b980
// Address: 0191b980
// Size: 3165 bytes
// Class: GNString


void FUN_0191b980(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined7 uVar5;
  undefined7 extraout_var;
  undefined8 *puVar4;
  byte bVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  bool bVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong *local_188;
  char local_180;
  longlong local_178;
  char local_170;
  undefined8 *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined8 *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  undefined8 *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined4 local_e4;
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
  longlong *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  char local_40;
  uint local_34;
  
  iVar1 = FUN_01d3a5a0();
  if (iVar1 != 1) goto LAB_0191c533;
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  uVar14 = (**(code **)(*plVar2 + 0x18))();
  lVar8 = DAT_027e0728;
  if (unaff_RDI[0x4b] != 0) {
    local_60 = plVar2;
    if (DAT_027e0728 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_178 = lVar8;
    local_170 = '\x01';
    uVar3 = FUN_01d5e6e0(uVar14,&local_178);
    lVar8 = local_48;
    uVar14 = extraout_XMM0_Da;
    if (local_48 == 0) {
      bVar13 = true;
      lVar8 = 0;
      local_34 = 0;
    }
    else {
      if (local_40 == '\0') {
        uVar3 = FUN_00d50b00();
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        uVar14 = extraout_XMM0_Da_00;
        bVar13 = false;
        if ((local_40 == '\0') || (bVar13 = false, local_48 == 0)) goto LAB_0191ba6a;
        uVar3 = FUN_00d50b20();
        uVar14 = extraout_XMM0_Da_01;
      }
      else {
        local_40 = '\0';
      }
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      bVar13 = false;
    }
LAB_0191ba6a:
    if ((local_170 != '\0') && (local_178 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (bVar13) {
      local_e4 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      local_58 = 0;
      local_50 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026846d0;
      puVar4[2] = &DAT_02684a60;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x3a) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x42) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined2 *)(puVar4 + 0xe) = 0;
      (*DAT_026846e8)();
      local_50 = puVar4;
      FUN_01d65230();
      local_d0 = local_48;
      local_c8 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c8 = '\x01';
      FUN_01d64eb0();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d64cb0();
      local_c0 = local_48;
      local_b8 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_b8 = '\x01';
      FUN_01d654e0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_168 = local_50;
      local_160 = '\0';
      uVar3 = FUN_01d5d8d0();
      local_e4 = 0;
      local_58 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      uVar14 = extraout_XMM0_Da_02;
      if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
        uVar3 = FUN_00d50b20();
        local_58 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        local_e4 = 0;
        uVar14 = extraout_XMM0_Da_03;
      }
    }
    lVar9 = DAT_027e0730;
    uVar11 = unaff_RDI[0x4b];
    if (DAT_027e0730 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_158 = lVar9;
    local_150 = '\x01';
    uVar3 = FUN_01d5e6e0(uVar14,&local_158);
    lVar9 = local_48;
    plVar2 = local_60;
    uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
    uVar12 = (undefined7)(uVar11 >> 8);
    if (local_48 == lVar8) {
      lVar9 = lVar8;
      if ((bool)(bVar13 & local_48 != 0)) {
        if (local_40 != '\0') goto LAB_0191bce3;
        uVar11 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
      else {
        uVar11 = (ulonglong)local_34;
      }
LAB_0191bd46:
      uVar14 = (undefined4)uVar11;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar11 = CONCAT71(uVar12,1);
        if (((byte)local_34 & lVar8 != 0) == 1) {
          FUN_00d50b20();
        }
        goto LAB_0191bd46;
      }
      bVar13 = lVar8 != 0;
      lVar8 = lVar9;
      if (((byte)local_34 & bVar13) == 1) {
        FUN_00d50b20();
        uVar5 = extraout_var;
      }
LAB_0191bce3:
      local_40 = '\0';
      lVar9 = lVar8;
      uVar14 = (int)CONCAT71(uVar5,1);
    }
    local_34 = uVar14;
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026846d0;
      puVar4[2] = &DAT_02684a60;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x3a) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x42) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined2 *)(puVar4 + 0xe) = 0;
      uVar3 = (*DAT_026846e8)();
      uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
      if (puVar4 == local_50) {
        if ((char)local_e4 == '\0') {
          FUN_00d50b20();
          puVar4 = local_50;
        }
        else {
          local_58 = CONCAT71(uVar5,1);
          puVar4 = local_50;
        }
      }
      else {
        bVar6 = (byte)local_58;
        local_58 = CONCAT71(uVar5,1);
        if ((bVar6 & local_50 != (undefined8 *)0x0) == 1) {
          FUN_00d50b20();
        }
      }
      local_50 = puVar4;
      FUN_01d65230();
      local_b0 = local_48;
      local_a8 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_a8 = '\x01';
      FUN_01d64eb0();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d64cb0();
      local_a0 = local_48;
      local_98 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_98 = '\x01';
      FUN_01d654e0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_148 = local_50;
      local_140 = '\0';
      FUN_01d5d8d0();
      if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar14 = (**(code **)(*unaff_RDI + 0xad8))();
    if (local_48 == 0) {
      bVar13 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0xad8))();
      uVar3 = (**(code **)((longlong)&dylib_command_00001220.cmd + *local_188))();
      lVar8 = local_e0;
      uVar5 = (undefined7)(uVar11 >> 8);
      uVar14 = extraout_XMM0_Da_04;
      if (local_e0 == lVar9) {
        lVar8 = lVar9;
        uVar10 = local_34;
        if (((char)local_34 == '\0') && (local_e0 != 0)) {
          if (local_d8 != '\0') goto LAB_0191c01d;
          uVar14 = FUN_00d50b00();
          uVar10 = (int)CONCAT71(uVar5,1);
        }
LAB_0191c080:
        lVar9 = lVar8;
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            uVar14 = FUN_00d50b00();
          }
          uVar10 = (uint)CONCAT71(uVar5,1);
          if (((char)local_34 != '\0') && (lVar9 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          goto LAB_0191c080;
        }
        if (((char)local_34 != '\0') && (lVar9 != 0)) {
          uVar3 = FUN_00d50b20();
          uVar14 = extraout_XMM0_Da_05;
        }
LAB_0191c01d:
        local_d8 = '\0';
        lVar9 = lVar8;
        uVar10 = (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      local_34 = uVar10;
      bVar13 = lVar9 != 0;
      if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (bVar13) {
      FUN_01d5dc80();
      local_130 = '\0';
      local_138 = lVar9;
      FUN_01d5d8d0();
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      uVar14 = FUN_01d66790();
    }
    lVar7 = DAT_027e0738;
    lVar8 = unaff_RDI[0x4b];
    if (DAT_027e0738 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_128 = lVar7;
    local_120 = '\x01';
    uVar3 = FUN_01d5e6e0(uVar14,&local_128);
    lVar7 = local_48;
    uVar5 = (undefined7)((ulonglong)lVar8 >> 8);
    if (local_48 == lVar9) {
      lVar7 = lVar9;
      uVar10 = local_34;
      if (((char)local_34 == '\0') && (local_48 != 0)) {
        if (local_40 != '\0') goto LAB_0191c1a3;
        local_34 = 0;
        FUN_00d50b00();
        uVar10 = (int)CONCAT71(uVar5,1);
      }
LAB_0191c22f:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != 0) {
          uVar3 = FUN_00d50b00();
        }
        uVar10 = (uint)CONCAT71(uVar5,1);
        if (((char)local_34 != '\0') && (lVar9 != 0)) {
          local_34 = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          FUN_00d50b20();
          uVar10 = (int)CONCAT71(uVar5,1);
        }
        goto LAB_0191c22f;
      }
      if (((char)local_34 != '\0') && (lVar9 != 0)) {
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        uVar3 = FUN_00d50b20();
      }
LAB_0191c1a3:
      local_40 = '\0';
      uVar10 = (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    local_34 = uVar10;
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = local_50;
    if (lVar7 != 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026846d0;
      puVar4[2] = &DAT_02684a60;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x3a) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x42) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined2 *)(puVar4 + 0xe) = 0;
      (*DAT_026846e8)();
      if (puVar4 == local_50) {
        puVar4 = local_50;
        if ((char)local_58 != '\0') {
          FUN_00d50b20();
          puVar4 = local_50;
        }
      }
      else if (((char)local_58 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d65230();
      local_90 = local_48;
      local_88 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_88 = '\x01';
      FUN_01d64eb0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d64cb0();
      local_80 = local_48;
      local_78 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = '\x01';
      FUN_01d654e0();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_110 = '\0';
      local_118 = puVar4;
      uVar3 = FUN_01d5d8d0();
      local_58 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_58 != '\0') && (puVar4 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_34 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  local_100 = '\0';
  local_108 = plVar2;
  FUN_01d778e0();
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xad8))();
  local_70 = local_48;
  local_68 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_68 = '\x01';
  FUN_01d62b10();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0191c533:
  iVar1 = FUN_01d3a5a0();
  if (iVar1 == 6) {
    FUN_01d77960();
    lVar8 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_01d77960();
      FUN_01d62b80();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_f8 = *unaff_RSI;
  local_f0 = '\0';
  FUN_01d79730();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  return;
}


