// Function: FUN_01aa1bf0
// Address: 01aa1bf0
// Size: 914 bytes
// Class: MURelativeTimeProgressor


/* WARNING: Removing unreachable block (ram,0x01aa1e44) */
/* WARNING: Removing unreachable block (ram,0x01aa1e4d) */
/* WARNING: Removing unreachable block (ram,0x01aa1f54) */
/* WARNING: Removing unreachable block (ram,0x01aa1f5d) */
/* WARNING: Removing unreachable block (ram,0x01aa1d5d) */
/* WARNING: Removing unreachable block (ram,0x01aa1d66) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa1bf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar13;
  undefined8 in_XMM1_Qb;
  undefined1 auVar10 [16];
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  longlong *local_88;
  char local_80;
  longlong local_38;
  char local_30;
  
  uVar6 = FUN_01e3f820();
  local_a8 = (float)param_2;
  fStack_a4 = (float)((ulonglong)param_2 >> 0x20);
  fStack_a0 = (float)in_XMM1_Qb;
  fStack_9c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  lVar1 = unaff_RDI[0x40];
  if (lVar1 == 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_88 + 0x390))();
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
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
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
  plVar2 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar2 + 0x390))();
  FUN_01cef410();
  local_b8 = (float)uVar6;
  fStack_b4 = (float)((ulonglong)uVar6 >> 0x20);
  if (local_30 == '\0') {
    if (local_38 == 0) goto LAB_01aa1e62;
    FUN_00d50b00();
  }
  else if (local_38 == 0) goto LAB_01aa1e62;
  uVar6 = FUN_01d526f0();
  fVar5 = (float)((ulonglong)uVar6 >> 0x20);
  fVar13 = (float)extraout_XMM0_Qb_00;
  auVar15._8_4_ = fVar13;
  auVar15._0_8_ = uVar6;
  fVar14 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar15._12_4_ = fVar14;
  auVar10._0_4_ = _DAT_02421800 + local_a8;
  auVar10._4_4_ = _UNK_02421804 + fStack_a4;
  auVar10._8_4_ = _UNK_02421808 + fStack_a0;
  auVar10._12_4_ = _UNK_0242180c + fStack_9c;
  auVar16._4_4_ = -(uint)(auVar10._4_4_ < fVar5);
  auVar16._0_4_ = -(uint)(auVar10._0_4_ < (float)uVar6);
  auVar16._8_4_ = -(uint)(auVar10._8_4_ < fVar13);
  auVar16._12_4_ = -(uint)(auVar10._12_4_ < fVar14);
  auVar10 = divps(auVar10,auVar15);
  auVar16 = blendvps(_DAT_023b5570,auVar10,auVar16);
  FUN_01d48370();
  local_98 = auVar16._0_4_;
  fStack_94 = auVar16._4_4_;
  fStack_90 = auVar16._8_4_;
  if (fStack_94 <= local_98) {
    local_98 = fStack_94;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  fStack_b0 = (float)extraout_XMM0_Qb;
  fStack_ac = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar9 = (local_a8 * _DAT_023945d0 + local_b8) - (float)uVar6 * local_98 * _DAT_023945d0;
  fVar5 = (fStack_a4 * _UNK_023945d4 + fStack_b4) - fVar5 * local_98 * _UNK_023945d4;
  fVar13 = (fStack_a0 * _UNK_023945d8 + fStack_b0) - fVar13 * fStack_90 * _UNK_023945d8;
  fVar14 = (fStack_9c * _UNK_023945dc + fStack_ac) - fVar14 * fStack_90 * _UNK_023945dc;
  auVar7._0_4_ = (float)(_DAT_023945e0 & (uint)fVar9 | _DAT_023945f0) + fVar9;
  auVar7._4_4_ = (float)(_UNK_023945e4 & (uint)fVar5 | _UNK_023945f4) + fVar5;
  auVar7._8_4_ = (float)(_UNK_023945e8 & (uint)fVar13 | _UNK_023945f8) + fVar13;
  auVar7._12_4_ = (float)(_UNK_023945ec & (uint)fVar14 | _UNK_023945fc) + fVar14;
  roundps(auVar7,auVar7,0xb);
  (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
  FUN_01d48390();
  FUN_00d50b20();
LAB_01aa1e62:
  fVar5 = (float)(**(code **)(*unaff_RDI + 0x930))();
  if (0.0 < fVar5) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
    (*DAT_02680418)();
    fVar5 = (float)(**(code **)(*unaff_RDI + 0x930))();
    auVar3._8_4_ = fStack_a0;
    auVar3._0_8_ = param_2;
    auVar3._12_4_ = fStack_9c;
    auVar16 = roundss(ZEXT816(0),ZEXT416((uint)((DAT_023b1608 + local_a8) * DAT_0239011c)),9);
    auVar11._4_4_ = fStack_a4;
    auVar11._0_4_ = fStack_a4;
    auVar11._8_4_ = fStack_9c;
    auVar11._12_4_ = fStack_9c;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = fStack_a4 * DAT_0239011c + fStack_b4;
    auVar8._4_12_ = auVar3._4_12_;
    auVar8._0_4_ = local_a8 * DAT_0239011c + local_b8;
    FUN_01d39310(auVar8._0_8_,auVar12._0_8_,auVar16._0_8_,fVar5 * _DAT_0241e850 + DAT_0241e854);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    FUN_00d50b20();
  }
  FUN_01d48390();
  return;
}


