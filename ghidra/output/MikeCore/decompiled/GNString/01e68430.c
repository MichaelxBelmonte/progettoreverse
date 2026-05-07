// Function: FUN_01e68430
// Address: 01e68430
// Size: 2053 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e68b5e) */
/* WARNING: Removing unreachable block (ram,0x01e68b6a) */
/* WARNING: Removing unreachable block (ram,0x01e68968) */
/* WARNING: Removing unreachable block (ram,0x01e68978) */
/* WARNING: Removing unreachable block (ram,0x01e68784) */
/* WARNING: Removing unreachable block (ram,0x01e68790) */
/* WARNING: Removing unreachable block (ram,0x01e6851c) */
/* WARNING: Removing unreachable block (ram,0x01e68528) */
/* WARNING: Removing unreachable block (ram,0x01e68a1b) */
/* WARNING: Removing unreachable block (ram,0x01e68a27) */
/* WARNING: Removing unreachable block (ram,0x01e68af1) */
/* WARNING: Removing unreachable block (ram,0x01e68afd) */
/* WARNING: Removing unreachable block (ram,0x01e68bff) */
/* WARNING: Removing unreachable block (ram,0x01e68c0b) */
/* WARNING: Removing unreachable block (ram,0x01e685cf) */
/* WARNING: Removing unreachable block (ram,0x01e685dc) */
/* WARNING: Removing unreachable block (ram,0x01e68577) */
/* WARNING: Removing unreachable block (ram,0x01e68584) */
/* WARNING: Removing unreachable block (ram,0x01e686dd) */
/* WARNING: Removing unreachable block (ram,0x01e686e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e68430(undefined8 param_1,undefined8 param_2,int param_3,char param_4,undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *in_RCX;
  longlong *in_RDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined8 in_XMM1_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char local_res8;
  char local_res10;
  undefined1 local_res18;
  char local_res20;
  float local_1b8;
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  longlong local_48;
  char local_40;
  
  local_1a8 = (float)param_2;
  fStack_1a4 = (float)((ulonglong)param_2 >> 0x20);
  uStack_1a0 = (undefined4)in_XMM1_Qb;
  uStack_19c = (uint)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar10 = (**(code **)(*unaff_RDI + 0x630))();
  local_1b8 = (float)uVar10;
  if (param_3 == 0xff) {
    (**(code **)(*unaff_RDI + 0x5c0))();
  }
  (**(code **)(*unaff_RDI + 0x5e0))(local_res10,local_res8,local_res18,local_res20);
  if (local_res10 == '\0') {
    if (local_res8 == '\0') {
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c0 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x4c8))();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
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
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (local_48 == 0) goto LAB_01e685e6;
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x4d8))();
    if (local_48 == 0) {
LAB_01e685e6:
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
  local_a8._0_4_ = (undefined4)param_1;
  uVar6 = local_a8._0_4_;
  local_a8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_a0 = (undefined4)in_XMM0_Qb;
  uStack_9c = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  local_a8._0_4_ = (float)local_a8._0_4_ + local_1b8;
  local_e8._4_4_ = local_a8._4_4_;
  local_e8._0_4_ = (float)uVar6 + local_1b8;
  fStack_e0 = (float)uStack_a0;
  fStack_dc = (float)uStack_9c;
  fVar19 = local_1a8 - (local_1b8 + local_1b8);
  auVar22._8_4_ = uStack_1a0;
  auVar22._0_8_ = param_2;
  auVar22._12_4_ = uStack_19c;
  register0x00001244 = auVar22._4_12_;
  local_98._0_4_ = local_1a8 - (local_1b8 + local_1b8);
  in_RDX = (longlong *)*in_RDX;
  if (in_RDX != (longlong *)0x0) {
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*in_RDX + 0x50))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((cVar7 != '\0') && (local_res8 == '\0')) {
      fVar20 = fStack_1a4 * DAT_0239011c + (float)local_a8._4_4_;
      auVar12._0_4_ = _DAT_023945e0 & (uint)fVar20;
      auVar12._4_4_ = _UNK_023945e4 & (uint)fStack_1a4;
      auVar12._8_4_ = _UNK_023945e8 & uStack_19c;
      auVar12._12_4_ = _UNK_023945ec & uStack_19c;
      auVar13._4_12_ = SUB1612(auVar12 | _DAT_023945f0,4);
      auVar13._0_4_ = SUB164(auVar12 | _DAT_023945f0,0) + fVar20;
      auVar21._0_12_ = ZEXT812(0);
      auVar21._12_4_ = 0;
      auVar22 = roundss(auVar21,auVar13,0xb);
      auVar22 = insertps(_local_a8,auVar22,0x10);
      auVar23._4_4_ = fStack_1a4;
      auVar23._0_4_ = fVar19;
      auVar23._8_4_ = uStack_1a0;
      auVar23._12_4_ = uStack_19c;
      auVar23 = blendps(auVar23,_DAT_023b1620,0xe);
      (**(code **)(*unaff_RDI + 0x3c0))(auVar22._0_8_,auVar23._0_8_);
      bVar3 = true;
      goto LAB_01e68aca;
    }
  }
  if (local_res20 == '\0') {
    bVar3 = false;
  }
  else {
    uVar11 = (**(code **)(*unaff_RDI + 0x5c8))();
    auVar24._8_4_ = (int)extraout_XMM0_Qb_00;
    auVar24._0_8_ = uVar11;
    auVar24._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    auVar14._4_12_ = local_a8._4_12_;
    auVar14._0_4_ = (float)local_a8._0_4_ - local_1b8;
    auVar27._4_4_ = local_a8._4_4_;
    auVar27._0_4_ = local_a8._4_4_;
    auVar27._8_4_ = uStack_9c;
    auVar27._12_4_ = uStack_9c;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)local_a8._4_4_ + DAT_02390124;
    auVar22 = insertps(auVar14,auVar28,0x10);
    auVar23 = blendps(auVar24,_local_98,0xe);
    (**(code **)(*unaff_RDI + 0x5f8))(auVar22._0_8_,auVar23._0_8_,local_res10);
    fVar20 = (float)(**(code **)(*unaff_RDI + 0x5c8))();
    fVar8 = (float)(**(code **)(*unaff_RDI + 0x5c8))();
    fVar9 = (float)(**(code **)(*unaff_RDI + 0x630))();
    auVar1._8_8_ = extraout_XMM0_Qb;
    auVar1._0_8_ = uVar10;
    auVar29._4_12_ = auVar1._4_12_;
    auVar29._0_4_ = local_1b8 + auVar14._0_4_ + fVar20;
    auVar2._4_4_ = fStack_1a4;
    auVar2._0_4_ = fVar19;
    auVar2._8_4_ = uStack_1a0;
    auVar2._12_4_ = uStack_19c;
    auVar15._4_12_ = auVar2._4_12_;
    auVar15._0_4_ = fVar19 - (fVar8 + fVar9);
    _local_98 = blendps(_local_98,auVar15,1);
    auVar16._0_4_ = auVar28._0_4_ + DAT_02390d00;
    auVar16._4_12_ = auVar28._4_12_;
    _local_e8 = insertps(auVar29,auVar16,0x10);
    bVar3 = false;
  }
LAB_01e68aca:
  FUN_01d488d0();
  if (!bVar3) {
    fVar19 = (float)local_e8._0_4_ + _DAT_023b5570;
    fVar20 = (float)local_e8._4_4_ + _UNK_023b5574;
    fStack_e0 = fStack_e0 + _UNK_023b5578;
    fStack_dc = fStack_dc + _UNK_023b557c;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
    if (param_4 != '\0') {
      auVar17._0_4_ = fVar19 + _DAT_023b5de0 + (float)local_98._0_4_;
      auVar17._4_4_ = fVar20 + _UNK_023b5de4 + (float)local_98._4_4_;
      auVar17._8_4_ = fStack_e0 + _UNK_023b5de8 + fStack_90;
      auVar17._12_4_ = fStack_dc + _UNK_023b5dec + fStack_8c;
      auVar25._4_4_ = auVar17._4_4_;
      auVar25._0_4_ = auVar17._4_4_;
      auVar25._8_4_ = auVar17._12_4_;
      auVar25._12_4_ = auVar17._12_4_;
      auVar18._4_12_ = auVar17._4_12_;
      auVar18._0_4_ = (auVar17._0_4_ + DAT_02390d00) - (float)local_98._4_4_ * DAT_0239011c;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ =
           ((auVar17._4_4_ + DAT_02390d00) - (float)local_98._4_4_ * DAT_0239011c) + DAT_02390124;
      auVar22 = insertps(auVar18,auVar26,0x10);
      FUN_01cb3a60(auVar22._0_8_,param_5);
    }
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


