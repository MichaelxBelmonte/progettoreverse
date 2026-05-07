// Function: FUN_01aa2e00
// Address: 01aa2e00
// Size: 1056 bytes
// Class: MURelativeTimeProgressor


/* WARNING: Removing unreachable block (ram,0x01aa31f3) */
/* WARNING: Removing unreachable block (ram,0x01aa31fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa2e00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar14;
  undefined8 in_XMM0_Qb;
  undefined1 auVar10 [16];
  float fVar13;
  undefined8 uVar9;
  float fVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  longlong *local_98;
  char local_90;
  longlong local_38;
  char local_30;
  
  local_a8 = (float)param_2;
  fStack_a4 = (float)((ulonglong)param_2 >> 0x20);
  fStack_a0 = (float)in_XMM1_Qb;
  fStack_9c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  fStack_b0 = (float)in_XMM0_Qb;
  fStack_ac = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  lVar1 = unaff_RDI[0x40];
  if (lVar1 == 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_98 + 0x390))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  if ((DAT_028b3170 == 0) || (DAT_028b3179 == '\0')) {
    FUN_00e8cb50();
    lVar1 = DAT_027e3cc8;
    if (DAT_028b3170 == 0) {
      if (DAT_027e3cc8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      lVar6 = DAT_028b3170;
      if (DAT_028b3170 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_00d50b00();
            lVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar6 = local_38;
        }
        bVar4 = DAT_028b3170 != 0;
        DAT_028b3170 = lVar6;
        if (bVar4) {
          FUN_00d50b20();
          lVar6 = local_38;
        }
      }
      if ((lVar6 != 0) && (DAT_028b3178 == '\0')) {
        DAT_028b3178 = '\x01';
        FUN_00e8cb90();
        lVar6 = local_38;
      }
      if ((local_30 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028b3179 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b3179 = '\x01';
      FUN_00e8cb70();
    }
  }
  auVar10._8_4_ = fStack_b0;
  auVar10._0_8_ = param_1;
  auVar10._12_4_ = fStack_ac;
  auVar17._0_4_ = DAT_0239011c * local_a8 + (float)param_1;
  auVar17._4_4_ = (float)((ulonglong)param_1 >> 0x20) + 0.0;
  auVar17._8_4_ = fStack_b0 + 0.0;
  auVar17._12_4_ = fStack_ac + 0.0;
  auVar16._0_4_ = local_a8 * _DAT_02422a60;
  auVar16._4_4_ = fStack_a4 * _UNK_02422a64;
  auVar16._8_4_ = fStack_a0 * _UNK_02422a68;
  auVar16._12_4_ = fStack_9c * _UNK_02422a6c;
  auVar17 = blendps(auVar16,auVar17,0xd);
  auVar10 = blendps(ZEXT416(DAT_02390d00),auVar10,0xe);
  fVar7 = auVar10._0_4_ + auVar17._0_4_;
  fVar13 = auVar10._4_4_ + auVar17._4_4_;
  fVar14 = auVar10._8_4_ + auVar17._8_4_;
  fVar15 = auVar10._12_4_ + auVar17._12_4_;
  uVar9 = FUN_01d526f0();
  lVar1 = DAT_028b3170;
  auVar11._0_4_ = (float)uVar9 * _DAT_0241c4f0 * _DAT_023945d0 + fVar7;
  auVar11._4_4_ = (float)((ulonglong)uVar9 >> 0x20) * _UNK_0241c4f4 * _UNK_023945d4 + fVar13;
  auVar11._8_4_ = (float)extraout_XMM0_Qb * _UNK_0241c4f8 * _UNK_023945d8 + fVar14;
  auVar11._12_4_ =
       (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * _UNK_0241c4fc * _UNK_023945dc + fVar15;
  auVar18._0_4_ = (float)(_DAT_023945e0 & (uint)auVar11._0_4_ | _DAT_023945f0) + auVar11._0_4_;
  auVar18._4_4_ = (float)(_UNK_023945e4 & (uint)auVar11._4_4_ | _UNK_023945f4) + auVar11._4_4_;
  auVar18._8_4_ = (float)(_UNK_023945e8 & (uint)auVar11._8_4_ | _UNK_023945f8) + auVar11._8_4_;
  auVar18._12_4_ = (float)(_UNK_023945ec & (uint)auVar11._12_4_ | _UNK_023945fc) + auVar11._12_4_;
  roundps(auVar11,auVar18,0xb);
  plVar2 = (longlong *)*unaff_RSI;
  if (DAT_028b3170 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x400))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  fVar8 = (float)(**(code **)(*unaff_RDI + 0x930))();
  if (0.0 < fVar8) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
    (*DAT_02680418)();
    (**(code **)(*unaff_RDI + 0x930))();
    auVar3._4_4_ = fVar13;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = fVar14;
    auVar3._12_4_ = fVar15;
    auVar12._4_12_ = auVar3._4_12_;
    auVar12._0_4_ = fVar7 + DAT_02390124;
    FUN_01d39310(auVar12._0_8_);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    FUN_00d50b20();
  }
  return;
}


