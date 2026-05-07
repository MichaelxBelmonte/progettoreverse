// Function: FUN_0197a540
// Address: 0197a540
// Size: 2938 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x0197a69b) */
/* WARNING: Removing unreachable block (ram,0x0197a6a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197a540(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 unaff_RBX;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_1a4;
  longlong *local_180;
  char local_178;
  longlong *local_170;
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
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_02;
  
  if (*(char *)((longlong)unaff_RDI + 0x1c1) != '\0') {
    FUN_01d9af20();
  }
  FUN_01d9af20();
  (**(code **)(*unaff_RDI + 0x990))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x980))();
  local_90 = local_78;
  if (local_78 == (longlong *)0x0) {
    local_170 = local_a8;
    local_168 = '\0';
    FUN_01d98a70();
    local_90 = (longlong *)0x0;
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    local_a0 = 0;
    if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
      FUN_00d50b20();
      local_a0 = 0;
      local_90 = (longlong *)0x0;
    }
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    plVar7 = local_90;
    (**(code **)(*local_90 + 0x4d8))();
    blendps(in_XMM1,_DAT_023b4a40,0xd);
    (**(code **)(*plVar7 + 0x4d0))();
    local_180 = local_a8;
    local_178 = '\0';
    FUN_01d98360(&local_180);
    if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = 0;
    local_a0 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  }
  (**(code **)(*unaff_RDI + 0x988))();
  local_80 = local_78;
  local_f0 = (undefined4)uVar12;
  if (local_78 == (longlong *)0x0) {
    local_94 = 1;
    local_88 = 0;
    local_80 = (longlong *)0x0;
  }
  else {
    plVar7 = local_78;
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    local_88 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
    local_50 = 0;
    local_38 = (longlong *)0x0;
    local_48 = 0;
    local_40 = (longlong *)0x0;
    uVar11 = (**(code **)(*local_80 + 0x938))();
    auVar14._8_4_ = (int)extraout_XMM0_Qb;
    auVar14._0_8_ = uVar11;
    auVar14._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    local_50 = 0;
    auVar14 = blendps(auVar14,_DAT_023b4a30,0xe);
    local_38 = (longlong *)0x0;
    local_48 = 0;
    local_40 = (longlong *)0x0;
    (**(code **)(*local_80 + 0x4d0))(0,auVar14._0_8_);
    local_160 = local_80;
    local_158 = '\0';
    uVar11 = FUN_01d980f0();
    if ((local_158 == '\0') || (local_160 == (longlong *)0x0)) {
      local_94 = 0;
      local_88 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    }
    else {
      uVar11 = FUN_00d50b20();
      local_88 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      local_94 = 0;
    }
  }
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d9a650();
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  FUN_01d94ee0();
  (**(code **)(*unaff_RDI + 0x998))();
  local_40 = local_78;
  if (local_78 == (longlong *)0x0) {
    uVar9 = 1;
    local_48 = 0;
    local_40 = (longlong *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_40 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_150 = local_40;
    local_148 = '\0';
    uVar11 = FUN_01d97bd0();
    uVar9 = 0;
    local_48 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar9 = 0;
    }
  }
  (**(code **)(*unaff_RDI + 0x9a0))();
  local_38 = local_78;
  if (local_78 == (longlong *)0x0) {
    local_ac = 1;
    uVar12 = 0;
    local_38 = (longlong *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97e80();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_38 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_140 = local_38;
    local_138 = '\0';
    FUN_01d97920();
    local_ac = 0;
    uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      FUN_00d50b20();
      local_ac = 0;
    }
  }
  local_ec = uVar9;
  local_50 = uVar12;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar7 = local_78;
  if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x580))();
  local_e8._8_8_ = extraout_XMM0_Qb_00;
  (**(code **)(*plVar7 + 0x578))();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(undefined4 *)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(undefined1 *)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(undefined4 *)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  *(undefined1 *)(puVar4 + 0x3b) = 0;
  *puVar4 = &DAT_02623d28;
  puVar4[2] = &DAT_02624858;
  FUN_00d500e0();
  puVar1 = (undefined8 *)unaff_RDI[0x3a];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3a] = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  blendps(_DAT_0241b3e0,local_e8,1);
  (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0x4d0))();
  (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0xab8))();
  (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0xac8))();
  plVar5 = (longlong *)unaff_RDI[0x3a];
  FUN_0197b900();
  local_130 = 0;
  local_128 = '\0';
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *local_78 + 0x18))();
  (**(code **)(*plVar5 + 0x928))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != '\0') {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)unaff_RDI[0x3a];
  FUN_00d46dc0();
  local_c0 = local_78;
  local_b8 = 0;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar5 + 0x988))();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)unaff_RDI[0x3a];
  FUN_0197b900();
  local_d0 = local_78;
  local_c8 = 0;
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  (**(code **)(*plVar5 + 0xa20))();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027e0b78;
  plVar5 = (longlong *)unaff_RDI[0x3a];
  if (DAT_027e0b78 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar6;
  local_118 = '\x01';
  (**(code **)(*plVar5 + 0xa10))();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar5 + 0x18))();
  auVar15 = blendps(local_e8,ZEXT816(0),2);
  (**(code **)(*plVar5 + 0x4d0))();
  local_108 = '\0';
  local_110 = plVar5;
  (**(code **)(*unaff_RDI + 0x970))();
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x598))();
  local_e8._8_8_ = extraout_XMM0_Qb_01;
  (**(code **)(*plVar5 + 0x4a0))();
  plVar3 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_0197afdd;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_78 == (longlong *)0x0) goto LAB_0197afdd;
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_68 = plVar3;
  local_60 = 0xffffffff;
  local_58 = 0;
  while( true ) {
    lVar6 = (longlong)(int)local_60;
    iVar8 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar8);
    if (*(int *)((longlong)local_68 + 0xc) <= iVar8) break;
    local_78 = *(longlong **)(local_68[2] + 8 + lVar6 * 8);
    fVar10 = (float)(**(code **)(*plVar7 + 0x598))();
    auVar13._0_8_ = (**(code **)(*local_78 + 0x4d8))();
    auVar13._8_8_ = extraout_XMM0_Qb_02;
    local_e8._0_4_ = (float)local_e8._0_4_ - fVar10;
    auVar2._4_4_ = local_e8._4_4_;
    auVar2._0_4_ = local_e8._0_4_;
    auVar2._8_4_ = local_e8._8_4_;
    auVar2._12_4_ = local_e8._12_4_;
    auVar14 = insertps(auVar13,auVar2,0x10);
    (**(code **)(*local_78 + 0x4d0))(auVar14._0_8_);
    fStack_1a4 = auVar15._4_4_;
    auVar15._4_12_ = local_e8._4_12_;
    auVar15._0_4_ = local_e8._0_4_ + fStack_1a4;
    local_e8 = auVar15;
    if (local_60._4_4_ != 0) {
      if (local_60 < 0) {
        iVar8 = -local_60._4_4_;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar8 = 0;
      }
      local_60 = CONCAT44(iVar8,(int)local_60);
    }
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_0197afdd:
  uVar12 = (**(code **)(*plVar5 + 0x4d8))();
  auVar14 = insertps(auVar15,local_e8._0_4_,0x10);
  (**(code **)(*plVar5 + 0x4d0))(uVar12,auVar14._0_8_);
  local_f8 = '\0';
  local_100 = plVar5;
  FUN_01d9ab80();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  (**(code **)(*unaff_RDI + 0x928))();
  FUN_00d50b20();
  if (local_a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_ac == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_ec == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_94 == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_f0 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


