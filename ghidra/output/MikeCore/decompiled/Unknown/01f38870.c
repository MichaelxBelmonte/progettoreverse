// Function: FUN_01f38870
// Address: 01f38870
// Size: 3523 bytes
// Class: Unknown


void FUN_01f38870(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined7 extraout_var;
  undefined7 uVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *unaff_RDI;
  uint uVar12;
  undefined7 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
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
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00db2740();
  plVar11 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)unaff_RDI[5];
    iVar16 = 0;
    iVar5 = 0;
    if (plVar11 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
      local_a8 = 0;
      uVar8 = 0;
      goto LAB_01f38a00;
    }
    uVar8 = 0;
    local_a8 = 0;
LAB_01f389d4:
    local_78 = (longlong *)0x0;
    unaff_RDI[5] = 0;
    iVar5 = iVar16;
joined_r0x01f389e5:
    plVar14 = local_78;
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar14 = local_78;
    }
  }
  else {
    FUN_00db2740();
    uVar7 = FUN_00db38a0();
    plVar14 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_a8 = 0;
    }
    else if (local_38 == '\0') {
      uVar7 = FUN_00d50b00();
      local_a8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_a8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_00db2740();
    iVar5 = FUN_00db43d0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00db2740();
    uVar8 = FUN_00db43e0();
    uVar8 = uVar8 & 0xffffffff;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = (longlong *)unaff_RDI[5];
    if (plVar14 != plVar11) {
      iVar16 = iVar5;
      if (plVar14 == (longlong *)0x0) goto LAB_01f389d4;
      local_78 = plVar14;
      FUN_00d50b00();
      unaff_RDI[5] = (longlong)local_78;
      goto joined_r0x01f389e5;
    }
LAB_01f38a00:
    if ((iVar5 == (int)unaff_RDI[6]) && ((int)uVar8 == *(int *)((longlong)unaff_RDI + 0x34))) {
      local_50 = 0;
      plVar11 = (longlong *)0x0;
      local_68 = 0;
      local_58 = (longlong *)0x0;
      local_70 = 0;
      local_60 = (longlong *)0x0;
      goto LAB_01f395d6;
    }
  }
  local_78 = plVar14;
  *(int *)(unaff_RDI + 6) = iVar5;
  *(int *)((longlong)unaff_RDI + 0x34) = (int)uVar8;
  FUN_00db2740();
  plVar11 = local_40;
  plVar14 = local_78;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
    local_70 = 0;
    local_58 = (longlong *)0x0;
    local_68 = 0;
LAB_01f38b9a:
    lVar1 = DAT_02800118;
    if (DAT_02800118 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02800120;
    if (DAT_02800120 != 0) {
      FUN_00d50b00();
    }
    local_1b0 = lVar3;
    local_1a8 = '\x01';
    local_1a0 = 0;
    local_198 = '\0';
    FUN_00d31230(&local_1a0,&local_1b0);
    local_60 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      uVar7 = FUN_00d50b00();
      local_70 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_70 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00db2740();
    FUN_00db3940();
    local_60 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
      local_70 = 0;
    }
    else if (local_38 == '\0') {
      uVar7 = FUN_00d50b00();
      local_70 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_70 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_00db2740();
    FUN_00db3d40();
    local_58 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      local_68 = 0;
    }
    else if (local_38 == '\0') {
      uVar7 = FUN_00d50b00();
      local_68 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_68 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) goto LAB_01f38b9a;
  }
  lVar1 = DAT_02800118;
  if (local_58 == (longlong *)0x0) {
    if (DAT_02800118 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02800128;
    local_190 = lVar1;
    local_188 = '\x01';
    if (DAT_02800128 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar3;
    local_178 = '\x01';
    local_170 = 0;
    local_168 = '\0';
    FUN_00d31230(&local_170,&local_180);
    local_58 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      uVar7 = FUN_00d50b00();
      local_68 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_68 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x480))();
  plVar11 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar10 = 1;
    local_50 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    local_160 = local_60;
    local_158 = '\0';
    uVar7 = FUN_01d64eb0();
    local_50 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    bVar10 = 0;
    if ((local_158 != '\0') && (bVar10 = 0, local_160 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
      local_50 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      bVar10 = 0;
    }
  }
  (**(code **)(*unaff_RDI + 0x488))();
  plVar17 = local_40;
  uVar13 = (undefined7)(uVar8 >> 8);
  uVar9 = (undefined7)((ulonglong)local_40 >> 8);
  if (local_40 == plVar11) {
    plVar17 = plVar11;
    if ((bool)(bVar10 & local_40 != (longlong *)0x0)) {
      if (local_38 != '\0') goto joined_r0x01f38e6b;
      uVar8 = CONCAT71(uVar13,1);
      FUN_00d50b00();
    }
    else {
      uVar8 = local_50 & 0xffffffff;
    }
LAB_01f38f4b:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_50 = uVar8;
    if (plVar17 == (longlong *)0x0) {
      plVar17 = (longlong *)0x0;
    }
    else {
LAB_01f38f6b:
      local_150 = local_58;
      local_148 = '\0';
      FUN_01d64eb0();
      if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar8 = CONCAT71(uVar13,1);
      if (((byte)local_50 & plVar11 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01f38f4b;
    }
    if (((byte)local_50 & plVar11 != (longlong *)0x0) == 1) {
      FUN_00d50b20();
      uVar9 = extraout_var;
    }
joined_r0x01f38e6b:
    local_50 = CONCAT71(uVar9,1);
    if (plVar17 != (longlong *)0x0) goto LAB_01f38f6b;
    plVar17 = (longlong *)0x0;
  }
  uVar7 = (**(code **)(*unaff_RDI + 0x490))();
  plVar11 = local_40;
  uVar9 = (undefined7)((ulonglong)plVar17 >> 8);
  if (local_40 == plVar17) {
    if (((char)local_50 != '\0') || (local_40 == (longlong *)0x0)) {
      uVar8 = local_50 & 0xffffffff;
      goto joined_r0x01f39064;
    }
    if (local_38 == '\0') {
      local_48 = plVar17;
      FUN_00d50b00();
      goto LAB_01f3904d;
    }
    uVar9 = (undefined7)((ulonglong)uVar7 >> 8);
    plVar2 = local_48;
joined_r0x01f39018:
    local_48 = plVar17;
    local_50 = CONCAT71(uVar9,1);
    if (local_48 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      local_48 = plVar2;
      goto LAB_01f395d6;
    }
  }
  else {
    if (local_38 != '\0') {
      if (((char)local_50 != '\0') && (plVar17 != (longlong *)0x0)) {
        local_48 = local_40;
        uVar7 = FUN_00d50b20();
      }
      uVar9 = (undefined7)((ulonglong)uVar7 >> 8);
      plVar17 = plVar11;
      plVar2 = local_48;
      goto joined_r0x01f39018;
    }
    local_48 = plVar17;
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    uVar8 = CONCAT71(uVar9,1);
    plVar17 = plVar11;
    if (((char)local_50 != '\0') && (local_48 != (longlong *)0x0)) {
      local_48 = plVar11;
      FUN_00d50b20();
LAB_01f3904d:
      uVar8 = CONCAT71(uVar9,1);
      plVar17 = local_48;
    }
joined_r0x01f39064:
    local_48 = plVar17;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0) {
      local_50 = uVar8 & 0xffffffff;
      plVar11 = (longlong *)0x0;
      goto LAB_01f395d6;
    }
    local_50 = uVar8 & 0xffffffff;
  }
  FUN_00db2740();
  plVar11 = local_40;
  local_c0 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
    local_e8 = 0;
    local_88 = (longlong *)0x0;
    local_f0 = 0;
    local_b0 = (longlong *)0x0;
    local_a0 = 0;
  }
  else {
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_00db43f0();
    local_88 = local_40;
    if (local_40 == (longlong *)0x0) {
      uVar7 = 0;
      local_88 = (longlong *)0x0;
    }
    else {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_f0 = uVar7;
    uVar7 = FUN_00db4140();
    if (local_40 == (longlong *)0x0) {
      local_a0 = 0;
      local_b0 = (longlong *)0x0;
    }
    else {
      local_b0 = local_40;
      if (((local_38 == '\0') && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        local_a0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        FUN_00d50b20();
      }
      else {
        local_a0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
    }
    local_e8 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
  }
  local_80 = 0;
  local_b8 = plVar11;
  cVar4 = FUN_01d64c70();
  if (cVar4 == '\0') {
    plVar17 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar17 + 0x18))();
    local_138 = '\0';
    local_140 = plVar17;
    uVar7 = FUN_01d654e0();
    local_80 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = FUN_01d64cb0();
    plVar17 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_80 = 0;
      plVar17 = (longlong *)0x0;
    }
    else {
      local_80 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01d5deb0();
  uVar6 = *(uint *)((longlong)local_88 + 0xc);
  uVar12 = 0x14;
  if ((int)uVar6 < 0x14) {
    uVar12 = uVar6;
  }
  if (0 < (int)uVar6) {
    uVar8 = 1;
    if (1 < (int)uVar12) {
      uVar8 = (ulonglong)uVar12;
    }
    do {
      uVar12 = uVar12 - 1;
      lVar1 = *(longlong *)(local_88[2] + (longlong)(int)uVar12 * 8);
      local_d8 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02800130;
      local_d8 = '\x01';
      local_e0 = lVar1;
      if (DAT_02800130 != 0) {
        FUN_00d50b00();
      }
      local_130 = lVar3;
      local_128 = '\x01';
      local_120 = 0;
      local_118 = '\0';
      FUN_01d5da10(&local_120,&local_130);
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar6 = *(uint *)((longlong)local_88 + 0xc);
  }
  plVar11 = local_b0;
  if (((uVar6 != 0) && (local_b0 != (longlong *)0x0)) && (*(int *)((longlong)local_b0 + 0xc) != 0))
  {
    FUN_01d5dc80();
  }
  uVar6 = *(uint *)((longlong)plVar11 + 0xc);
  if (0 < (int)uVar6) {
    uVar8 = 0x14;
    if ((int)uVar6 < 0x14) {
      uVar8 = (ulonglong)uVar6;
    }
    uVar15 = 0;
    do {
      lVar1 = *(longlong *)(plVar11[2] + uVar15 * 8);
      local_c8 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02800130;
      local_c8 = '\x01';
      local_d0 = lVar1;
      if (DAT_02800130 != 0) {
        FUN_00d50b00();
      }
      plVar11 = local_b0;
      local_110 = lVar3;
      local_108 = '\x01';
      local_100 = 0;
      local_f8 = '\0';
      FUN_01d5da10(&local_100,&local_110);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      uVar15 = uVar15 + 1;
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (uVar8 != uVar15);
  }
  if (((char)local_a0 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar11 = local_48;
  plVar14 = local_78;
  if (((char)local_f0 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar17 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f395d6:
  if (((char)local_a8 != '\0') && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


