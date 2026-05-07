// Function: FUN_01b4d890
// Address: 01b4d890
// Size: 3080 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"


/* WARNING: Removing unreachable block (ram,0x01b4e114) */
/* WARNING: Removing unreachable block (ram,0x01b4d9e7) */
/* WARNING: Removing unreachable block (ram,0x01b4d9f3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01b4d890(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong unaff_RDI;
  longlong *plVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong **pplVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  undefined8 *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  char local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  byte local_41;
  longlong *local_40;
  longlong *local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  pplVar14 = &local_70;
  FUN_01ceb020();
  plVar10 = local_70;
  if ((DAT_02737920 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_01b4d8f5:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b4d8f5;
  }
  plVar11 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = plVar11;
  if ((plVar11 == (longlong *)0x0) ||
     (uVar3 = FUN_01aa3f90(), plVar11 = local_70, local_70 == (longlong *)0x0)) {
    uVar3 = FUN_017bf2e0();
    plVar11 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (((local_68[0] == '\0') && (uVar3 = FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      uVar3 = FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  cVar2 = FUN_01ab2450();
  if (cVar2 == '\0') {
    local_188 = '\0';
    local_190 = plVar11;
    uVar3 = FUN_01ab2a40(extraout_XMM0_Da,&local_190);
    plVar9 = local_70;
    uVar13 = (undefined7)((ulonglong)plVar10 >> 8);
    if (local_70 == plVar11) {
      plVar9 = plVar11;
      if (((char)local_80 == '\0') && (plVar11 != (longlong *)0x0)) {
        if (local_68[0] != '\0') goto LAB_01b4da61;
        uVar12 = CONCAT71(uVar13,1);
        FUN_00d50b00();
      }
      else {
        uVar12 = local_80 & 0xffffffff;
      }
LAB_01b4daba:
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = uVar12 & 0xffffffff;
      plVar11 = plVar9;
    }
    else {
      if (local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar12 = CONCAT71(uVar13,1);
        if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b4daba;
      }
      if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
        uVar3 = FUN_00d50b20();
      }
LAB_01b4da61:
      local_68[0] = '\0';
      local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      plVar11 = plVar9;
    }
    if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = DAT_027e47e0;
  if (plVar11 == (longlong *)0x0) {
    local_78 = 0;
    local_40 = (longlong *)0x0;
    plVar10 = local_a8;
    goto LAB_01b4e39b;
  }
  if (DAT_027e47e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e47e8;
  local_180 = lVar6;
  local_178 = '\x01';
  if (DAT_027e47e8 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar1;
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  uVar15 = FUN_00d31230(&local_160,&local_170);
  local_f0 = local_90;
  local_e8 = 0;
  if (local_88 == '\0') {
    if (local_90 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_e8 = '\x01';
  (**(code **)(*plVar11 + 0x400))(uVar15,&local_f0);
  local_a0 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a0 + 0x428))();
  uVar15 = FUN_01ce9490();
  local_b0 = (ulonglong)*(uint *)((longlong)local_70 + 0xc);
  if (local_68[0] != '\0') {
    uVar15 = FUN_00d50b20();
  }
  if ((int)local_b0 < 1) {
    uVar3 = 0;
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_01cecec0(uVar15,(int)local_b0 + -1);
    plVar10 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)pplVar14 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_40 = plVar10;
    FUN_01dd4a30();
    FUN_00d23340();
    plVar10 = local_70;
    pcVar8 = &local_c0;
    if (local_68[0] != '\0') {
      pcVar8 = local_68;
    }
    local_c0 = local_68[0];
    *pcVar8 = '\0';
    if ((local_68[0] != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d45870();
    if ((local_c0 != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = local_40;
    FUN_01ce6530();
    FUN_01dd3d10();
    local_150 = plVar10;
    local_148 = '\0';
    uVar15 = (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x958))();
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
  }
  uVar4 = FUN_01cecec0(uVar15,local_b0);
  plVar10 = local_70;
  uVar13 = (undefined7)((ulonglong)uVar4 >> 8);
  cVar2 = (char)uVar3;
  if (local_70 == local_40) {
    local_78 = uVar3;
    plVar10 = local_40;
    if ((cVar2 == '\0') && (local_70 != (longlong *)0x0)) {
      local_78 = CONCAT71(uVar13,1);
      if (local_68[0] != '\0') goto LAB_01b4df17;
      local_78 = CONCAT71(uVar13,1);
      FUN_00d50b00();
      plVar10 = local_40;
    }
joined_r0x01b4df07:
    local_40 = plVar10;
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      local_78 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if ((cVar2 != '\0') && (local_40 != (longlong *)0x0)) {
        local_40 = plVar10;
        FUN_00d50b20();
        plVar10 = local_40;
      }
      goto joined_r0x01b4df07;
    }
    local_78 = CONCAT71(uVar13,1);
    if ((cVar2 == '\0') || (local_40 == (longlong *)0x0)) {
      local_40 = local_70;
    }
    else {
      local_40 = local_70;
      FUN_00d50b20();
    }
  }
LAB_01b4df17:
  FUN_01ce6530();
  if ((int)local_b0 < 1) {
    local_98 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02641258;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    (*DAT_02641270)();
    local_98 = puVar5;
    (**(code **)(*local_a0 + 0x3f0))();
    local_e0 = local_70;
    local_d8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_d8 = '\x01';
    FUN_01aa3fc0();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_41 = (int)local_b0 < 1;
  plVar10 = *(longlong **)(unaff_RDI + 0x80);
  local_f8 = 0;
  lVar6 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_140 = local_98;
  local_138 = '\0';
  local_100 = lVar6;
  (**(code **)(*plVar10 + 0x5c8))(&local_140);
  plVar9 = local_70;
  plVar10 = local_a8;
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_138 != '\0') && (local_140 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar9;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_38 = plVar11;
    while( true ) {
      lVar6 = (longlong)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar7) break;
      local_70 = *(longlong **)(local_60[2] + 8 + lVar6 * 8);
      FUN_01aa3f10();
      plVar10 = local_90;
      lVar6 = DAT_027e47e0;
      if (DAT_027e47e0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_027e47e8;
      local_130 = lVar6;
      local_128 = '\x01';
      if (DAT_027e47e8 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar1;
      local_118 = '\x01';
      local_110 = 0;
      local_108 = '\0';
      FUN_00d31230(&local_110,&local_120);
      local_c8 = 0;
      lVar6 = CONCAT71(uStack_bf,local_c0);
      if (local_b8 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = lVar6;
      cVar2 = (**(code **)(*plVar10 + 0x50))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        iVar7 = local_50 + (int)local_58;
        goto LAB_01b4e337;
      }
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
    }
    iVar7 = -1;
LAB_01b4e337:
    uVar15 = FUN_01b53440();
    plVar11 = local_38;
    plVar10 = local_a8;
    if (-1 < iVar7) {
      FUN_01b4d260(uVar15,iVar7);
    }
    FUN_00d50b20();
  }
  local_41 = local_41 | local_98 == (undefined8 *)0x0;
  if (local_41 == 0) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01b4e39b:
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return 1;
}


