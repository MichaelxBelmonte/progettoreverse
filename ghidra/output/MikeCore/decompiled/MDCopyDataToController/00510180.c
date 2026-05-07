// Function: FUN_00510180
// Address: 00510180
// Size: 2891 bytes
// Class: MDCopyDataToController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510180(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *unaff_RDI;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
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
  ulonglong local_f0;
  undefined8 local_e8;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined4 local_34;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined4)param_2;
  uVar10 = FUN_00d6f370();
  local_1e0 = DAT_0270af68;
  if (DAT_0270af68 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1d8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = uVar4;
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_118 = 0;
  lVar1 = unaff_RDI[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  local_120 = lVar1;
  cVar5 = FUN_002664b0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
    (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x998))();
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x998))();
  }
  uVar10 = FUN_00d6f370();
  local_1d0 = DAT_0270af70;
  if (DAT_0270af70 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1c8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(undefined1 *)((longlong)unaff_RDI + 0x95) = uVar4;
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_108 = 0;
  lVar1 = unaff_RDI[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_110 = lVar1;
  cVar5 = FUN_002639e0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x95) = 0;
    (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x998))();
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x998))();
  }
  uVar10 = FUN_00d6f370();
  local_1c0 = DAT_0270af78;
  if (DAT_0270af78 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1b8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(undefined1 *)((longlong)unaff_RDI + 0x96) = uVar4;
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = 0;
  lVar1 = unaff_RDI[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_100 = lVar1;
  cVar5 = FUN_00262e30();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x96) = 0;
    uVar10 = (**(code **)(*(longlong *)unaff_RDI[0x15] + 0x998))();
  }
  else {
    uVar10 = (**(code **)(*(longlong *)unaff_RDI[0x15] + 0x998))();
  }
  if ((char)unaff_RDI[0x10] == '\0') {
    plVar8 = (longlong *)unaff_RDI[0x17];
    bVar9 = plVar8 == (longlong *)0x0;
    if (bVar9) {
      plVar8 = (longlong *)0x0;
      plVar7 = (longlong *)unaff_RDI[0x16];
    }
    else {
      uVar10 = FUN_00d50b00();
      plVar7 = (longlong *)unaff_RDI[0x16];
    }
    uVar6 = (ulonglong)!bVar9;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00510573;
    }
  }
  else {
    plVar8 = (longlong *)unaff_RDI[0x16];
    bVar9 = plVar8 == (longlong *)0x0;
    if (bVar9) {
      plVar8 = (longlong *)0x0;
      plVar7 = (longlong *)unaff_RDI[0x17];
    }
    else {
      uVar10 = FUN_00d50b00();
      plVar7 = (longlong *)unaff_RDI[0x17];
    }
    uVar6 = (ulonglong)!bVar9;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
LAB_00510573:
      local_34 = 0;
      goto LAB_00510584;
    }
  }
  local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  plVar7 = (longlong *)0x0;
LAB_00510584:
  local_f0 = uVar6;
  uVar10 = (**(code **)(*plVar8 + 0x4d8))();
  local_e8 = CONCAT44(uVar14,uVar13);
  (**(code **)(*(longlong *)unaff_RDI[0x16] + 0x4d8))();
  (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x4d8))();
  fVar15 = extraout_XMM0_Db_00;
  if (extraout_XMM0_Db <= extraout_XMM0_Db_00) {
    fVar15 = extraout_XMM0_Db;
  }
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar10;
  auVar11._4_4_ = extraout_XMM0_Db_00;
  auVar11._0_4_ = fVar15;
  auVar11._8_4_ = extraout_XMM0_Dd;
  auVar11._12_4_ = extraout_XMM0_Dd;
  auVar11 = insertps(auVar2,auVar11,0x10);
  (**(code **)(*plVar8 + 0x4d0))(auVar11._0_8_,(undefined4)local_e8);
  auVar12._0_8_ = (**(code **)(*plVar7 + 0x4d8))();
  auVar12._8_8_ = extraout_XMM0_Qb_00;
  auVar11 = blendps(auVar12,_DAT_023b4c30,0xe);
  (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_);
  (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x918))();
  (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x918))();
  (**(code **)(*(longlong *)unaff_RDI[0x15] + 0x918))();
  FUN_00511610();
  local_140 = DAT_0270af80;
  local_138 = 0;
  if (DAT_0270af80 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_00d46530();
  local_130 = DAT_0270af88;
  local_128 = 0;
  if (DAT_0270af88 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_00511500(&local_1f0,&local_140,&local_130);
  FUN_000b4da0();
  local_e8 = local_150;
  if (local_148 == '\0') {
    if (((local_150 != 0) && (FUN_00d50b00(), local_148 != '\0')) && (local_150 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_148 = '\0';
  }
  FUN_002d10d0();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0270af90;
  plVar8 = (longlong *)unaff_RDI[0x17];
  if (DAT_0270af90 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar1;
  local_1a8 = '\x01';
  local_1a0 = local_e8;
  local_198 = '\0';
  FUN_01e57360(&local_1a0,&local_1b0);
  local_d8 = local_88;
  local_d0 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_d0 = '\x01';
  (**(code **)(*plVar8 + 0x968))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)unaff_RDI[0x17];
  (**(code **)(*plVar8 + 0x970))();
  local_c8 = local_88;
  local_c0 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_c0 = '\x01';
  cVar5 = (char)local_f0;
  (**(code **)(*plVar8 + 0x6a8))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0270afa0;
  lVar1 = DAT_0270af98;
  if ((char)unaff_RDI[0x10] != '\0') {
    plVar8 = (longlong *)unaff_RDI[0x16];
    if ((int)unaff_RDI[0x12] < 2) {
      if (DAT_0270af98 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar1;
      local_188 = '\x01';
      local_180 = local_e8;
      local_178 = '\0';
      FUN_01e57360(&local_180,&local_190);
      local_b8 = local_88;
      local_b0 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_b0 = '\x01';
      (**(code **)(*plVar8 + 0x968))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_0270afa0 != 0) {
        FUN_00d50b00();
      }
      local_170 = lVar3;
      local_168 = '\x01';
      local_160 = local_e8;
      local_158 = '\0';
      FUN_01e57360(&local_160,&local_170);
      local_a8 = local_88;
      local_a0 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_a0 = '\x01';
      (**(code **)(*plVar8 + 0x968))();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar8 = (longlong *)unaff_RDI[0x16];
    (**(code **)(*plVar8 + 0x970))();
    local_98 = local_88;
    local_90 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_90 = '\x01';
    cVar5 = (char)local_f0;
    (**(code **)(*plVar8 + 0x6a8))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x5f0))();
  if (local_e8 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_00d50b20();
  }
  return;
}


