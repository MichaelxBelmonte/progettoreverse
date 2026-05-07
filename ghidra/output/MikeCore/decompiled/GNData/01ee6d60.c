// Function: FUN_01ee6d60
// Address: 01ee6d60
// Size: 1983 bytes
// Class: GNData
// String references:
//   "1_%i_%f %.0f,%.0f,%.0f,%.0f"


/* WARNING: Removing unreachable block (ram,0x01ee6eb3) */
/* WARNING: Removing unreachable block (ram,0x01ee6ec3) */

void FUN_01ee6d60(undefined4 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int in_ECX;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c0;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_34;
  
  fStack_94 = (float)((ulonglong)param_2 >> 0x20);
  local_98 = (float)param_2;
  local_34 = in_XMM1._0_4_;
  auVar16 = roundss(in_XMM3,in_XMM1,9);
  local_58._4_4_ = in_XMM1._4_4_;
  local_58._0_4_ = local_58._4_4_;
  local_58._12_4_ = in_XMM1._12_4_;
  local_58._8_4_ = local_58._12_4_;
  local_48._4_4_ = fStack_94;
  local_48._0_4_ = fStack_94;
  fStack_40 = in_XMM2_Dd;
  fStack_3c = in_XMM2_Dd;
  local_78._0_4_ = param_1;
  fStack_90 = in_XMM2_Dc;
  fStack_8c = in_XMM2_Dd;
  _local_68 = in_XMM1;
  if ((auVar16._0_4_ != local_34) || (NAN(auVar16._0_4_) || NAN(local_34))) {
LAB_01ee6ecd:
    local_80 = 0;
    local_108 = (undefined8 *)0x0;
  }
  else {
    auVar16 = roundss(ZEXT816(0),local_58,9);
    if ((auVar16._0_4_ != local_58._4_4_) || (NAN(auVar16._0_4_) || NAN(local_58._4_4_)))
    goto LAB_01ee6ecd;
    auVar16._8_4_ = in_XMM2_Dc;
    auVar16._0_8_ = param_2;
    auVar16._12_4_ = in_XMM2_Dd;
    auVar16 = roundss(ZEXT816(0),auVar16,9);
    if ((auVar16._0_4_ != local_98) || (NAN(auVar16._0_4_) || NAN(local_98))) goto LAB_01ee6ecd;
    auVar16 = roundss(ZEXT816(0),_local_48,9);
    if ((auVar16._0_4_ != fStack_94) || (NAN(auVar16._0_4_) || NAN(fStack_94))) goto LAB_01ee6ecd;
    local_b8 = 6;
    local_c0 = (undefined8 *)&DAT_026b24a8;
    local_b4 = in_ECX;
    local_b0 = param_1;
    local_ac = local_34;
    local_a8 = local_58._4_4_;
    local_a4 = local_98;
    uVar7 = FUN_00d8cb40(local_98,&local_c0);
    uVar9 = extraout_XMM0_Da;
    if (local_108 == (undefined8 *)0x0) {
      local_108 = (undefined8 *)0x0;
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if (local_100 == '\0') {
        uVar9 = FUN_00d50b00();
      }
    }
    local_f0 = '\0';
    local_f8 = local_108;
    FUN_000175c0(uVar9,&local_f8);
    puVar8 = local_c0;
    if ((char)local_b8 == '\0') {
      if (local_c0 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_b8 = local_b8 & 0xffffff00;
    }
    if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      *unaff_RDI = puVar8;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto joined_r0x01ee744c;
    }
  }
  fVar17 = (float)local_48._0_4_ * DAT_0239011c + DAT_02390118;
  if ((float)local_78._0_4_ <= fVar17) {
    fVar17 = (float)local_78._0_4_;
  }
  auVar1._4_4_ = fStack_94;
  auVar1._0_4_ = local_98;
  auVar1._8_4_ = fStack_90;
  auVar1._12_4_ = fStack_8c;
  register0x00001284 = auVar1._4_12_;
  fVar14 = local_98 * DAT_0239011c + DAT_02390118;
  if (fVar17 <= fVar14) {
    fVar14 = fVar17;
  }
  local_48._0_4_ = fVar14;
  if (fVar14 <= DAT_0239011c) {
    uVar9 = FUN_01d39800(local_68._0_4_);
    puVar8 = local_c0;
    if (local_c0 == (undefined8 *)0x0) {
      bVar6 = false;
      puVar8 = (undefined8 *)0x0;
    }
    else {
      bVar6 = true;
      if ((char)local_b8 == '\0') {
        uVar9 = FUN_00d50b00();
        if (((char)local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
    }
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
    auVar15._0_4_ = (float)local_68._0_4_ + local_98;
    auVar15._4_4_ = (float)local_68._4_4_ + fStack_94;
    auVar15._8_4_ = fStack_60 + fStack_90;
    auVar15._12_4_ = fStack_5c + fStack_8c;
    local_78._4_12_ = auVar15._4_12_;
    local_78._0_4_ = auVar15._0_4_ + DAT_02390d00;
    local_98 = auVar15._4_4_ + DAT_02390d00;
    fStack_94 = auVar15._4_4_;
    fStack_90 = auVar15._12_4_;
    fStack_8c = auVar15._12_4_;
    if (in_ECX == 1) {
      local_d8 = local_58._0_4_ + (float)local_48._0_4_;
      FUN_01d39400(local_34);
      local_68._0_4_ = (float)local_68._0_4_ + (float)local_48._0_4_;
      FUN_01d39310();
      fVar17 = (float)local_78._0_4_ - (float)local_48._0_4_;
      FUN_01d38ba0();
      FUN_01d39310(fVar17);
      auVar3._4_4_ = fStack_94;
      auVar3._0_4_ = local_98;
      auVar3._8_4_ = fStack_90;
      auVar3._12_4_ = fStack_8c;
      local_58._4_12_ = auVar3._4_12_;
      local_58._0_4_ = local_98 - (float)local_48._0_4_;
      FUN_01d38ba0(local_78._0_4_);
      FUN_01d39310(fVar17);
      FUN_01d38ba0(local_68._0_4_);
      FUN_01d39310(local_68._0_4_);
      uVar9 = FUN_01d38ba0(local_34);
    }
    else if (in_ECX == 2) {
      FUN_01d39400(local_34);
      local_68._4_4_ = local_78._4_4_;
      local_68._0_4_ = (float)local_78._0_4_ - (float)local_48._0_4_;
      fStack_60 = (float)local_78._8_4_;
      fStack_5c = (float)local_78._12_4_;
      FUN_01d38ba0();
      auVar11._4_12_ = local_58._4_12_;
      auVar11._0_4_ = local_58._0_4_ + (float)local_48._0_4_;
      FUN_01d39310(local_68._0_4_,auVar11._0_8_);
      auVar4._4_4_ = fStack_94;
      auVar4._0_4_ = local_98;
      auVar4._8_4_ = fStack_90;
      auVar4._12_4_ = fStack_8c;
      auVar12._4_12_ = auVar4._4_12_;
      auVar12._0_4_ = local_98 - (float)local_48._0_4_;
      uVar9 = local_78._0_4_;
      local_78 = auVar12;
      FUN_01d38ba0(uVar9);
      FUN_01d39310(local_68._0_4_);
      FUN_01d38ba0(local_34);
      uVar9 = FUN_01d38ba0(local_34);
    }
    else if (in_ECX == 3) {
      local_68._0_4_ = (float)local_68._0_4_ + (float)local_48._0_4_;
      FUN_01d39400();
      FUN_01d38ba0(local_78._0_4_);
      FUN_01d38ba0(local_78._0_4_);
      FUN_01d38ba0(local_68._0_4_);
      auVar2._4_4_ = fStack_94;
      auVar2._0_4_ = local_98;
      auVar2._8_4_ = fStack_90;
      auVar2._12_4_ = fStack_8c;
      auVar10._4_12_ = auVar2._4_12_;
      auVar10._0_4_ = local_98 - (float)local_48._0_4_;
      FUN_01d39310(local_68._0_4_,auVar10._0_8_);
      local_58._0_4_ = local_58._0_4_ + (float)local_48._0_4_;
      FUN_01d38ba0(local_34);
      uVar9 = FUN_01d39310(local_68._0_4_);
    }
    else {
      local_68._0_4_ = (float)local_68._0_4_ + (float)local_48._0_4_;
      FUN_01d39400();
      local_d8 = (float)local_78._0_4_ - (float)local_48._0_4_;
      uStack_d4 = local_78._4_4_;
      uStack_d0 = local_78._8_4_;
      uStack_cc = local_78._12_4_;
      FUN_01d38ba0();
      local_58._0_4_ = local_58._0_4_ + (float)local_48._0_4_;
      FUN_01d39310(local_d8);
      auVar5._4_4_ = fStack_94;
      auVar5._0_4_ = local_98;
      auVar5._8_4_ = fStack_90;
      auVar5._12_4_ = fStack_8c;
      auVar13._4_12_ = auVar5._4_12_;
      auVar13._0_4_ = local_98 - (float)local_48._0_4_;
      uVar9 = local_78._0_4_;
      local_78 = auVar13;
      FUN_01d38ba0(uVar9);
      FUN_01d39310(local_d8);
      FUN_01d38ba0(local_68._0_4_);
      FUN_01d39310(local_68._0_4_);
      FUN_01d38ba0(local_34);
      uVar9 = FUN_01d39310(local_68._0_4_);
    }
    bVar6 = true;
  }
  if (local_108 != (undefined8 *)0x0) {
    local_e0 = '\0';
    local_b8 = local_b8 & 0xffffff00;
    local_e8 = puVar8;
    local_c0 = local_108;
    FUN_00ca0840(uVar9,&local_c0);
    if (((char)local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar6) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x01ee744c:
  if (((char)local_80 != '\0') && (local_108 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


