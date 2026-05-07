// Function: FUN_01cbadc0
// Address: 01cbadc0
// Size: 14451 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01cbe0e1) */
/* WARNING: Removing unreachable block (ram,0x01cbe0ed) */
/* WARNING: Removing unreachable block (ram,0x01cbdee4) */
/* WARNING: Removing unreachable block (ram,0x01cbdef0) */
/* WARNING: Removing unreachable block (ram,0x01cbc0ef) */
/* WARNING: Removing unreachable block (ram,0x01cbc0fb) */
/* WARNING: Removing unreachable block (ram,0x01cbc17c) */
/* WARNING: Removing unreachable block (ram,0x01cbc188) */
/* WARNING: Removing unreachable block (ram,0x01cbcd7b) */
/* WARNING: Removing unreachable block (ram,0x01cbcd8b) */
/* WARNING: Removing unreachable block (ram,0x01cbd7a6) */
/* WARNING: Removing unreachable block (ram,0x01cbd7b2) */
/* WARNING: Removing unreachable block (ram,0x01cbcb4d) */
/* WARNING: Removing unreachable block (ram,0x01cbcb5d) */
/* WARNING: Removing unreachable block (ram,0x01cbcaad) */
/* WARNING: Removing unreachable block (ram,0x01cbcab9) */
/* WARNING: Removing unreachable block (ram,0x01cbce45) */
/* WARNING: Removing unreachable block (ram,0x01cbce55) */
/* WARNING: Removing unreachable block (ram,0x01cbc28e) */
/* WARNING: Removing unreachable block (ram,0x01cbc29a) */
/* WARNING: Removing unreachable block (ram,0x01cbc204) */
/* WARNING: Removing unreachable block (ram,0x01cbc210) */
/* WARNING: Removing unreachable block (ram,0x01cbc4b5) */
/* WARNING: Removing unreachable block (ram,0x01cbc4c5) */
/* WARNING: Removing unreachable block (ram,0x01cbcf0b) */
/* WARNING: Removing unreachable block (ram,0x01cbcf17) */
/* WARNING: Removing unreachable block (ram,0x01cbc03a) */
/* WARNING: Removing unreachable block (ram,0x01cbc046) */
/* WARNING: Removing unreachable block (ram,0x01cbecb3) */
/* WARNING: Removing unreachable block (ram,0x01cbecbf) */
/* WARNING: Removing unreachable block (ram,0x01cbc57a) */
/* WARNING: Removing unreachable block (ram,0x01cbc58a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cbadc0(undefined8 param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 in_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  int local_res8;
  char local_res10;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  longlong local_40;
  char local_38;
  
  iVar11 = (int)param_3;
  uVar13 = param_2 & 0xffffffff;
  uStack_90 = in_XMM0_Qb;
  local_98 = (undefined1  [8])param_1;
  auVar22 = _local_98;
  iVar12 = (int)param_2;
  local_98._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_90._4_4_ = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  fStack_74 = in_XMM1._4_4_;
  fStack_6c = in_XMM1._12_4_;
  local_68 = in_XMM1._0_8_;
  uVar15 = local_68;
  local_68._0_4_ = in_XMM1._0_4_;
  uStack_90._0_4_ = (float)in_XMM0_Qb;
  local_98._0_4_ = (undefined4)param_1;
  if ((local_res10 == '\0') || (iVar12 != 1)) {
    switch(iVar12) {
    case 1:
    case 4:
    case 5:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x12:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      goto switchD_01cbae9c_caseD_1;
    case 2:
      uVar15 = FUN_00d05530(&switchD_01cbae9c::switchdataD_01cc0b20,param_2,
                            (DAT_02421224 + fStack_74) * DAT_02390118);
      uStack_50 = extraout_XMM0_Qb;
      local_58 = (undefined1  [8])uVar15;
      auVar22 = _local_58;
      (**(code **)(*unaff_RDI + 0x488))(param_4,2,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      (**(code **)(*unaff_RDI + 0x3c0))();
      FUN_01d48b40();
      if (param_4 == '\0') {
        (**(code **)(*unaff_RDI + 0x3a0))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      local_58._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar5 = local_58._4_4_;
      stack0xffffffffffffffac = auVar22._4_12_;
      local_58._0_4_ = (undefined4)uVar15;
      if (iVar11 == -1) {
        fVar28 = (float)((int)fStack_74 / 2) + DAT_02390d00;
        fVar14 = DAT_02390d2c;
        if (fVar28 <= DAT_02390d2c) {
          fVar14 = fVar28;
        }
        auVar20._0_4_ = ((float)local_58._0_4_ + fStack_74 * DAT_0239011c) - fVar14;
        auVar20._4_12_ = stack0xffffffffffffffac;
        auVar2._4_4_ = fStack_74;
        auVar2._0_4_ = fStack_74 * DAT_0239011c + (float)uVar5 + DAT_02390d00;
        auVar2._8_4_ = fStack_6c;
        auVar2._12_4_ = fStack_6c;
        auVar22 = insertps(auVar20,auVar2,0x10);
        blendps(ZEXT416((uint)(fVar14 + fVar14)),_DAT_023b45e0,0xe);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar22._0_8_);
      }
      else if (iVar11 == 1) {
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      }
      break;
    case 3:
      (**(code **)(*unaff_RDI + 0x3a0))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      fVar28 = (float)((int)fStack_74 / 2) + DAT_02390d00;
      fVar14 = DAT_023908d8;
      if (fVar28 <= DAT_023908d8) {
        fVar14 = fVar28;
      }
      local_68._0_4_ = fStack_74 * DAT_0239011c + (float)local_98._0_4_;
      local_68._4_4_ = fStack_74 * DAT_0239011c + (float)local_98._4_4_;
      fStack_5c = fStack_6c + uStack_90._4_4_;
      fVar27 = DAT_02390d00 + (float)local_68;
      fStack_60 = fStack_6c + (float)uStack_90;
      fStack_74 = local_68._4_4_;
      local_78 = local_68._4_4_;
      fStack_70 = fStack_5c;
      fStack_6c = fStack_5c;
      fVar25 = DAT_02390124 + local_68._4_4_;
      auVar22 = insertps(ZEXT416((uint)fVar27),ZEXT416((uint)fVar25),0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar22._0_8_);
      auVar23._4_12_ = local_78._4_12_;
      auVar23._0_4_ = local_68._4_4_ + DAT_02390d00;
      fVar28 = DAT_02390124 + (float)local_68;
      auVar22 = insertps(ZEXT416((uint)fVar28),auVar23,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar22._0_8_);
      (**(code **)(*unaff_RDI + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar22 = insertps(ZEXT416((uint)fVar27),auVar23._0_4_,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar22._0_8_);
      (**(code **)(*unaff_RDI + 0x398))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar22 = insertps(ZEXT416((uint)fVar28),fVar25,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar22._0_8_);
      (**(code **)(*unaff_RDI + 0x488))(param_4,3,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
      if (param_4 == '\0') {
        (**(code **)(*unaff_RDI + 0x3a0))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      fVar14 = fVar14 + DAT_023b1608;
      if (iVar11 == -1) {
        auVar21._4_12_ = local_68._4_12_;
        auVar21._0_4_ = (float)local_68 - fVar14;
        auVar22 = insertps(auVar21,auVar23._0_4_,0x10);
        auVar19 = blendps(ZEXT416((uint)(fVar14 + fVar14)),_DAT_0241f3a0,0xe);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar22._0_8_,auVar19._0_8_);
      }
      else if (iVar11 == 1) {
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
      }
      break;
    case 6:
      FUN_01cfc0e0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_res10 != '\0') {
        FUN_01cfbc00();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48b40();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
      FUN_01cfc3c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
      FUN_01cfb920();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
      break;
    case 8:
    case 0xe:
    case 0x10:
    case 0x27:
      (**(code **)(*unaff_RDI + 0x480))(param_4,uVar13,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      if (iVar11 == 1) {
        FUN_01cb8c70();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        bVar3 = (float)local_68 < fStack_74;
        if (fStack_74 <= (float)local_68) {
          fStack_74 = (float)local_68;
        }
        fStack_74 = fStack_74 * DAT_0239426c;
        uVar6 = (uint)bVar3;
        auVar17._0_4_ = -(uint)(uVar6 == _DAT_0238fcc0);
        auVar17._4_4_ = -(uint)(uVar6 == _UNK_0238fcc4);
        auVar17._8_4_ = -(uint)(uVar6 == _UNK_0238fcc8);
        auVar17._12_4_ = -(uint)(uVar6 == _UNK_0238fccc);
        auVar1._4_4_ = fStack_74;
        auVar1._0_4_ = fStack_74;
        auVar1._8_4_ = fStack_74;
        auVar1._12_4_ = fStack_74;
        auVar22 = blendvps(in_XMM1,auVar1,auVar17);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(bVar3,auVar22._0_8_);
      }
      (**(code **)(*unaff_RDI + 0x3c0))();
      break;
    case 9:
    case 0x23:
    case 0x24:
      bVar3 = (float)local_68 <= fStack_74;
      if (bVar3) {
        (**(code **)(*unaff_RDI + 0x560))(&switchD_01cbae9c::switchdataD_01cc0b20,param_2,param_3,0)
        ;
        (**(code **)(*unaff_RDI + 0x3f0))(4,0xc,0,param_4);
        (**(code **)(*unaff_RDI + 0x560))();
        (**(code **)(*unaff_RDI + 0x3f0))(4,0xd,0,param_4);
        local_68._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
        local_98._0_4_ = local_68._4_4_;
        local_68._0_4_ = fStack_74;
      }
      else {
        (**(code **)(*unaff_RDI + 0x560))();
        (**(code **)(*unaff_RDI + 0x3f0))(4,10,0,param_4);
        (**(code **)(*unaff_RDI + 0x560))();
        (**(code **)(*unaff_RDI + 0x3f0))(4,0xb,0,param_4);
        local_98._0_4_ = (undefined4)uVar15;
      }
      uVar6 = (uint)bVar3;
      auVar26._0_4_ = (float)local_68 - ((float)local_98._0_4_ + (float)local_98._0_4_);
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar16._0_4_ = -(uint)(uVar6 == _DAT_0238fcc0);
      auVar16._4_4_ = -(uint)(uVar6 == _UNK_0238fcc4);
      auVar16._8_4_ = -(uint)(uVar6 == _UNK_0238fcc8);
      auVar16._12_4_ = -(uint)(uVar6 == _UNK_0238fccc);
      blendvps(in_XMM1,auVar26,auVar16);
      (**(code **)(*unaff_RDI + 0x480))(param_4,uVar13,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      (**(code **)(*unaff_RDI + 0x3c0))();
      break;
    case 0xf:
      (**(code **)(*unaff_RDI + 0x3a0))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_98._0_4_ = fStack_74 * DAT_0239011c + (float)local_98._0_4_;
      fStack_74 = fStack_74 * DAT_0239011c + (float)local_98._4_4_;
      fVar28 = DAT_02390d00 + (float)local_98._0_4_;
      local_78 = fStack_74;
      fStack_70 = fStack_6c + uStack_90._4_4_;
      fStack_6c = fStack_6c + uStack_90._4_4_;
      fVar14 = DAT_02390124 + fStack_74;
      auVar22 = insertps(ZEXT416((uint)fVar28),ZEXT416((uint)fVar14),0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar22._0_8_);
      auVar24._4_12_ = local_78._4_12_;
      auVar24._0_4_ = fStack_74 + DAT_02390d00;
      auVar22 = ZEXT416((uint)(DAT_02390124 + (float)local_98._0_4_));
      auVar19 = insertps(auVar22,auVar24,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar19._0_8_);
      (**(code **)(*unaff_RDI + 0x398))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar19 = insertps(ZEXT416((uint)fVar28),auVar24._0_4_,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar19._0_8_);
      (**(code **)(*unaff_RDI + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar22 = insertps(auVar22,fVar14,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar22._0_8_);
      (**(code **)(*unaff_RDI + 0x488))(param_4,0xf,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
      break;
    case 0x11:
      (**(code **)(*unaff_RDI + 0x480))(param_4,0x11,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      (**(code **)(*unaff_RDI + 0x3c0))();
      break;
    case 0x14:
      FUN_01d48370();
      (**(code **)(*unaff_RDI + 0x488))(param_4,0x14,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cb3a60();
      FUN_01d48390();
      break;
    case 0x15:
      (**(code **)(*unaff_RDI + 0x470))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      (**(code **)(*unaff_RDI + 0x3c0))();
      break;
    case 0x18:
      (**(code **)(*unaff_RDI + 0x480))(param_4,0x18,local_res8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      (**(code **)(*unaff_RDI + 0x3c0))();
      auVar19._4_4_ = local_98._4_4_;
      auVar19._0_4_ = ((float)local_98._0_4_ + (float)local_68 + DAT_02390d00) - fStack_74;
      auVar19._8_4_ = (float)uStack_90;
      auVar19._12_4_ = uStack_90._4_4_;
      auVar22 = blendps(auVar22,auVar19,1);
      auVar22._0_8_ = FUN_00d05530(auVar22._0_8_);
      auVar22._8_8_ = extraout_XMM0_Qb_00;
      auVar18._4_12_ = auVar22._4_12_;
      auVar18._0_4_ = (float)auVar22._0_8_ + DAT_02390124;
      (**(code **)(*unaff_RDI + 0x3f0))(auVar18._0_8_,0x19,iVar11,param_4);
      break;
    case 0x28:
      if (local_res8 != 0) {
        (**(code **)(*unaff_RDI + 0x3a0))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
        (**(code **)(*unaff_RDI + 0x3c0))();
      }
      FUN_01d48370();
      (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
      (**(code **)(*unaff_RDI + 0x3a0))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      if (fStack_74 <= (float)local_68) {
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(longlong *)*unaff_RSI;
      }
      else {
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x390))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(longlong *)*unaff_RSI;
      }
      (**(code **)(lVar9 + 0x3e0))();
      FUN_01d48390();
      break;
    case 0x29:
      if (iVar11 == 1) {
        bVar10 = true;
        bVar3 = false;
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02680400;
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        *(undefined8 *)((longlong)puVar8 + 0x39) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x41) = 0;
        (*DAT_02680418)();
        FUN_01d39400();
        FUN_01d39220(DAT_023908d8 + (float)local_98._0_4_);
        fVar14 = DAT_023b2664 + (float)local_98._0_4_ + (float)local_68 + DAT_02390d00;
        FUN_01d38ba0();
        FUN_01d39220(fVar14 + DAT_023908d8);
        FUN_01d38ba0();
        (**(code **)(*unaff_RDI + 0x3a0))();
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        (**(code **)(*unaff_RDI + 0x3a8))();
        if (local_e0 == '\0') {
          if (local_e8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        FUN_01cfd290();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_e8 != 0) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (local_f8 != 0) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
        bVar10 = false;
        bVar3 = true;
      }
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x41) = 0;
      pcVar4 = DAT_02680418;
      (*DAT_02680418)();
      if (puVar7 == puVar8) {
        puVar7 = puVar8;
        if (bVar10) {
          bVar3 = true;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = (bool)(bVar3 & puVar8 != (undefined8 *)0x0);
        bVar3 = true;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      fVar14 = DAT_023b2664 + DAT_02390d00 + (float)local_98._0_4_ + (float)local_68;
      FUN_01d39400();
      FUN_01d39220(DAT_023908d8 + fVar14);
      (**(code **)(*unaff_RDI + 0x3a0))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x41) = 0;
      (*pcVar4)();
      if (puVar8 == puVar7) {
        puVar8 = puVar7;
        if (bVar3) {
          FUN_00d50b20();
        }
      }
      else if ((bVar3) && (puVar7 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar11 == 1) {
        FUN_01d39400();
      }
      else {
        FUN_01d39400();
        FUN_01d38ba0();
      }
      FUN_01d39220(DAT_023908d8 + (float)local_98._0_4_);
      FUN_01d38ba0();
      (**(code **)(*unaff_RDI + 0x398))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d05530();
    FUN_01d48370();
    FUN_01d48b40();
    (**(code **)(*unaff_RDI + 0x4b8))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    FUN_01d48390();
switchD_01cbae9c_caseD_1:
    (**(code **)(*unaff_RDI + 0x480))(param_4,uVar13,local_res8);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar11 == 1) {
      (**(code **)(*unaff_RDI + 0x3a8))();
      if (local_f0 == '\0') {
        if (local_f8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_f0 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x3a0))();
      if (local_e0 == '\0') {
        if (local_e8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      FUN_01cfd290();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_e8 != 0) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    if (local_res8 == 0) {
      FUN_01d48b40();
      (**(code **)(*unaff_RDI + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*unaff_RDI + 0x3a0))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      FUN_00d05530();
      (**(code **)(*unaff_RDI + 0x398))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    }
    else {
      FUN_01d48b40();
      (**(code **)(*unaff_RDI + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*unaff_RDI + 0x3a0))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      FUN_00d05530();
      (**(code **)(*unaff_RDI + 0x398))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    }
    (**(code **)(*unaff_RDI + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar12 - 4U < 0x16) {
                    /* WARNING: Could not recover jumptable at 0x01cbb895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01cc0bc4 + *(int *)(&DAT_01cc0bc4 + (ulonglong)(iVar12 - 4U) * 4)))();
      return;
    }
    if (iVar12 - 10U < 4) {
      FUN_00d05530();
      (**(code **)(*unaff_RDI + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x3c0))();
    }
  }
  return;
}


