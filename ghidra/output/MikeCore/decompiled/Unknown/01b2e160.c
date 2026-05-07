// Function: FUN_01b2e160
// Address: 01b2e160
// Size: 1340 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b2e512) */
/* WARNING: Removing unreachable block (ram,0x01b2e51e) */
/* WARNING: Removing unreachable block (ram,0x01b2e3bd) */
/* WARNING: Removing unreachable block (ram,0x01b2e3c9) */
/* WARNING: Removing unreachable block (ram,0x01b2e460) */
/* WARNING: Removing unreachable block (ram,0x01b2e46c) */
/* WARNING: Removing unreachable block (ram,0x01b2e65f) */
/* WARNING: Removing unreachable block (ram,0x01b2e66b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b2e160(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar5;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint in_XMM1_Dc;
  uint uVar14;
  uint in_XMM1_Dd;
  uint uVar15;
  float fVar16;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  longlong local_138;
  char local_130;
  float local_128;
  undefined1 local_f8 [8];
  uint uStack_f0;
  uint uStack_ec;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  undefined1 auVar17 [16];
  
  fVar13 = (float)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  local_f8._0_4_ = fVar12;
  local_f8._4_4_ = fVar13;
  uStack_f0 = in_XMM1_Dc;
  uStack_ec = in_XMM1_Dd;
  uVar5 = FUN_01e436c0();
  local_128 = (float)uVar5;
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  FUN_01d48b40();
  FUN_01cfbee0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  FUN_01d488d0();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar10 = (float)local_f8._0_4_;
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
  FUN_01b2e910();
  fVar16 = DAT_02390d28 + fVar10;
  auVar17 = ZEXT416((uint)fVar16);
  fVar11 = ((float)local_f8._0_4_ - fVar16) * DAT_0239011c + local_128 + fVar16;
  auVar18._0_4_ = _DAT_023945e0 & (uint)fVar11;
  auVar18._4_4_ = _UNK_023945e4 & local_f8._4_4_;
  auVar18._8_4_ = _UNK_023945e8 & uStack_f0;
  auVar18._12_4_ = _UNK_023945ec & uStack_ec;
  auVar6._4_12_ = SUB1612(auVar18 | _DAT_023945f0,4);
  auVar6._0_4_ = SUB164(auVar18 | _DAT_023945f0,0) + fVar11;
  roundss(auVar6,auVar6,0xb);
  fVar16 = (float)local_f8._4_4_;
  uVar14 = uStack_f0;
  uVar15 = uStack_ec;
  FUN_01e436c0();
  FUN_01e436c0();
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar5;
  auVar18 = blendps(ZEXT816(0),auVar2,2);
  auVar7._4_12_ = auVar2._4_12_;
  auVar7._0_4_ = local_128 + auVar17._0_4_;
  fVar22 = (float)local_f8._0_4_ - auVar17._0_4_;
  auVar20._4_4_ = fVar16;
  auVar20._0_4_ = fVar11 * DAT_02390120;
  auVar20._8_4_ = uVar14;
  auVar20._12_4_ = uVar15;
  auVar20 = blendps(_local_f8,auVar20,1);
  FUN_01b2b5e0(auVar7._0_8_,fVar22,auVar18._0_8_,auVar20._0_8_,auVar17,*unaff_RSI,0);
  FUN_01e3f820();
  auVar17._4_4_ = local_f8._4_4_;
  auVar17._0_4_ = fVar22;
  auVar17._8_4_ = uStack_f0;
  auVar17._12_4_ = uStack_ec;
  blendps(auVar17,_DAT_023b45e0,0xe);
  cVar4 = FUN_00d054a0();
  if (cVar4 != '\0') {
    fVar12 = (float)param_1;
    fVar13 = (float)((ulonglong)param_1 >> 0x20);
    in_XMM1_Dc = (uint)in_XMM0_Qb;
    in_XMM1_Dd = (uint)((ulonglong)in_XMM0_Qb >> 0x20);
    FUN_01ad8e90();
  }
  uVar5 = FUN_01e3f820();
  auVar19._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar19._0_8_ = uVar5;
  auVar19._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar21._4_4_ = fVar13;
  auVar21._0_4_ = fVar12;
  auVar21._8_4_ = in_XMM1_Dc;
  auVar21._12_4_ = in_XMM1_Dd;
  auVar8._4_4_ = fVar13;
  auVar8._0_4_ = fVar13;
  auVar8._8_4_ = in_XMM1_Dd;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = fVar13 + DAT_023b1608;
  insertps(auVar19,auVar9,0x10);
  blendps(auVar21,_DAT_023b45e0,0xe);
  cVar4 = FUN_00d054a0();
  if (cVar4 != '\0') {
    FUN_01ad8e90();
  }
  cVar4 = FUN_00d054a0();
  if (cVar4 != '\0') {
    uVar1 = *(undefined1 *)((longlong)unaff_RDI + 0x1d9);
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_38 + 0x3f0))(0,fVar10,uVar1,1);
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x640))();
    plVar3 = local_38;
    FUN_01b2eaa0();
    local_40 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_78;
    FUN_01b2ebd0();
    local_60 = 0;
    if ((local_130 == '\0') && (local_138 != 0)) {
      FUN_00d50b00();
    }
    local_68 = local_138;
    local_60 = '\x01';
    (**(code **)(*plVar3 + 0x400))(&local_48,fVar10,&local_68,0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d48390();
  return;
}


