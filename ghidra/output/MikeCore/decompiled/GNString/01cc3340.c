// Function: FUN_01cc3340
// Address: 01cc3340
// Size: 1991 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01cc39fb) */
/* WARNING: Removing unreachable block (ram,0x01cc3a07) */
/* WARNING: Removing unreachable block (ram,0x01cc3914) */
/* WARNING: Removing unreachable block (ram,0x01cc3920) */
/* WARNING: Removing unreachable block (ram,0x01cc3422) */
/* WARNING: Removing unreachable block (ram,0x01cc342e) */
/* WARNING: Removing unreachable block (ram,0x01cc3685) */
/* WARNING: Removing unreachable block (ram,0x01cc3691) */
/* WARNING: Removing unreachable block (ram,0x01cc3874) */
/* WARNING: Removing unreachable block (ram,0x01cc3884) */
/* WARNING: Removing unreachable block (ram,0x01cc3a59) */
/* WARNING: Removing unreachable block (ram,0x01cc3a65) */
/* WARNING: Removing unreachable block (ram,0x01cc34d3) */
/* WARNING: Removing unreachable block (ram,0x01cc34e0) */
/* WARNING: Removing unreachable block (ram,0x01cc347c) */
/* WARNING: Removing unreachable block (ram,0x01cc3489) */
/* WARNING: Removing unreachable block (ram,0x01cc35df) */
/* WARNING: Removing unreachable block (ram,0x01cc35e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc3340(undefined8 param_1,undefined8 param_2,int param_3,char param_4,undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong *in_RCX;
  longlong *in_RDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 in_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char local_res8;
  char local_res10;
  undefined1 local_res18;
  char local_res20;
  float local_198;
  float fStack_194;
  uint uStack_190;
  uint uStack_18c;
  float local_188;
  float fStack_184;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  longlong local_48;
  char local_40;
  
  uStack_160 = in_XMM0_Qb;
  local_168 = param_1;
  local_188 = (float)param_2;
  fStack_184 = (float)((ulonglong)param_2 >> 0x20);
  uStack_150 = (undefined4)in_XMM1_Qb;
  uStack_14c = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar7 = (float)(**(code **)(*unaff_RDI + 0x630))();
  if (param_3 == 0xff) {
    (**(code **)(*unaff_RDI + 0x5c0))();
  }
  (**(code **)(*unaff_RDI + 0x5e0))(local_res10,local_res8,local_res18,local_res20);
  if (local_res10 == '\0') {
    if (local_res8 == '\0') {
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x4c8))();
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      FUN_01cfd290();
      if (local_48 == 0) {
        bVar4 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        local_40 = '\0';
        bVar4 = true;
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (local_48 == 0) goto LAB_01cc34ea;
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x4d8))();
    if (local_48 == 0) {
LAB_01cc34ea:
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  if (*in_RCX == 0) {
    (**(code **)(*unaff_RDI + 0x370))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d48a10();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d48a10();
  }
  lVar5 = DAT_026fce10;
  uStack_190 = (uint)((ulonglong)in_XMM0_Qb >> 0x20);
  fStack_194 = (float)((ulonglong)param_1 >> 0x20);
  local_198 = fStack_194 + DAT_02390d00;
  uStack_18c = uStack_190;
  auVar23._4_4_ = local_198;
  auVar23._0_4_ = local_198;
  auVar23._8_4_ = uStack_190;
  auVar23._12_4_ = uStack_190;
  auVar21._4_12_ = local_168._4_12_;
  auVar21._0_4_ = (float)param_1 + fVar7;
  _local_d8 = blendps(auVar23,auVar21,1);
  fVar8 = local_188 - (fVar7 + fVar7);
  auVar20._8_8_ = in_XMM1_Qb;
  auVar20._0_8_ = param_2;
  register0x00001204 = auVar20._4_12_;
  local_98._0_4_ = local_188 - (fVar7 + fVar7);
  in_RDX = (longlong *)*in_RDX;
  if (in_RDX != (longlong *)0x0) {
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*in_RDX + 0x50))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((cVar6 != '\0') && (local_res8 == '\0')) {
      local_198 = local_198 + fStack_184 * DAT_0239011c;
      auVar13._0_4_ = _DAT_023945e0 & (uint)local_198;
      auVar13._4_4_ = _UNK_023945e4 & (uint)fStack_194;
      auVar13._8_4_ = _UNK_023945e8 & uStack_190;
      auVar13._12_4_ = _UNK_023945ec & uStack_190;
      auVar14._4_12_ = SUB1612(auVar13 | _DAT_023945f0,4);
      auVar14._0_4_ = SUB164(auVar13 | _DAT_023945f0,0) + local_198;
      auVar19._0_12_ = ZEXT812(0);
      auVar19._12_4_ = 0;
      auVar20 = roundss(auVar19,auVar14,0xb);
      auVar20 = insertps(auVar21,auVar20,0x10);
      auVar1._4_4_ = fStack_184;
      auVar1._0_4_ = fVar8;
      auVar1._8_4_ = uStack_150;
      auVar1._12_4_ = uStack_14c;
      auVar21 = blendps(auVar1,_DAT_023b1620,0xe);
      (**(code **)(*unaff_RDI + 0x3c0))(auVar20._0_8_,auVar21._0_8_);
      bVar3 = true;
      goto LAB_01cc39d5;
    }
  }
  if (local_res20 == '\0') {
    bVar3 = false;
  }
  else {
    uVar12 = (**(code **)(*unaff_RDI + 0x5c8))();
    auVar22._8_4_ = (int)extraout_XMM0_Qb;
    auVar22._0_8_ = uVar12;
    auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar27._4_12_ = local_198._4_12_;
    auVar27._0_4_ = local_198 + DAT_02390124;
    auVar20 = insertps(_local_d8,auVar27,0x10);
    auVar23 = blendps(auVar22,_local_98,0xe);
    (**(code **)(*unaff_RDI + 0x5f8))(auVar20._0_8_,auVar23._0_8_,local_res10);
    fVar7 = (float)(**(code **)(*unaff_RDI + 0x5c8))();
    fVar9 = (float)(**(code **)(*unaff_RDI + 0x630))();
    fVar10 = (float)(**(code **)(*unaff_RDI + 0x5c8))();
    fVar11 = (float)(**(code **)(*unaff_RDI + 0x630))();
    auVar24._0_4_ = auVar21._0_4_ + fVar7 + fVar9;
    auVar24._4_12_ = auVar21._4_12_;
    auVar2._4_4_ = fStack_184;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = uStack_150;
    auVar2._12_4_ = uStack_14c;
    auVar15._4_12_ = auVar2._4_12_;
    auVar15._0_4_ = fVar8 - (fVar10 + fVar11);
    _local_98 = blendps(_local_98,auVar15,1);
    auVar16._0_4_ = auVar27._0_4_ + DAT_02390d00;
    auVar16._4_12_ = auVar27._4_12_;
    _local_d8 = insertps(auVar24,auVar16,0x10);
    bVar3 = false;
  }
LAB_01cc39d5:
  FUN_01d488d0();
  if ((!bVar3) && ((**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(), param_4 != '\0')) {
    auVar17._0_4_ = (float)local_d8._0_4_ + (float)local_98._0_4_;
    auVar17._4_4_ = (float)local_d8._4_4_ + (float)local_98._4_4_;
    auVar17._8_4_ = fStack_d0 + fStack_90;
    auVar17._12_4_ = fStack_cc + fStack_8c;
    auVar25._4_4_ = auVar17._4_4_;
    auVar25._0_4_ = auVar17._4_4_;
    auVar25._8_4_ = auVar17._12_4_;
    auVar25._12_4_ = auVar17._12_4_;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = (auVar17._0_4_ + DAT_02390d00) - (float)local_98._4_4_ * DAT_0239011c;
    auVar26._4_12_ = auVar25._4_12_;
    auVar26._0_4_ =
         ((auVar17._4_4_ + DAT_02390d00) - (float)local_98._4_4_ * DAT_0239011c) + DAT_02390124;
    auVar20 = insertps(auVar18,auVar26,0x10);
    FUN_01cb3a60(auVar20._0_8_,param_5);
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


