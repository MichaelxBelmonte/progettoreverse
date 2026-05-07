// Function: FUN_01b06140
// Address: 01b06140
// Size: 1691 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x01b0679e) */
/* WARNING: Removing unreachable block (ram,0x01b067aa) */
/* WARNING: Removing unreachable block (ram,0x01b061da) */
/* WARNING: Removing unreachable block (ram,0x01b061e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b06140(pthread_key_t param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  float local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  longlong *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01740240();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((*(int *)((longlong)unaff_RDI + 0x284) == 1) || (*(int *)((longlong)unaff_RDI + 0x284) == 0))
  {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = DAT_023dccec;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = DAT_023dccf4;
  }
  else {
    local_c8._0_8_ = FUN_01e3f820();
    local_c8._8_8_ = extraout_XMM0_Qb;
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar14 = in_XMM1;
      FUN_01e3f820();
      auVar24 = blendps(auVar14,_DAT_0241c700,0xd);
    }
    else {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = DAT_023dccf4;
    }
    auVar23._0_4_ = auVar24._0_4_ + (float)local_c8._0_8_;
    auVar23._4_4_ = auVar24._4_4_ + (float)((ulonglong)local_c8._0_8_ >> 0x20);
    auVar23._8_4_ = auVar24._8_4_ + (float)extraout_XMM0_Qb;
    auVar23._12_4_ = auVar24._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar14 = blendps(auVar23,local_c8,2);
    auVar17 = blendps(in_XMM1,_DAT_0241c710,0xd);
  }
  fVar21 = auVar17._0_4_;
  fVar7 = DAT_0239011c * fVar21;
  local_b8._4_12_ = auVar14._4_12_;
  local_b8._0_4_ = auVar14._0_4_ + fVar7;
  if ((fVar21 == 0.0) && (!NAN(fVar21))) {
    local_b8 = auVar14;
  }
  auVar14 = ZEXT416((uint)fVar7);
  if ((fVar21 == 0.0) && (!NAN(fVar21))) {
    auVar14 = auVar17;
  }
  pvVar2 = _pthread_getspecific(param_1);
  plVar6 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x3a0))();
  uVar8 = (**(code **)(*unaff_RDI + 0x918))();
  uVar9 = FUN_01a1da00();
  uVar10 = FUN_01a1da00();
  if (unaff_RDI[0x52] != 0) {
    FUN_01b1dbf0();
  }
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
  *puVar4 = &DAT_0269c118;
  puVar4[2] = &DAT_0269cc70;
  pVar5 = 0x269ccb0;
  puVar4[0x39] = &DAT_0269ccb0;
  puVar4[0x45] = 0;
  *(undefined2 *)(puVar4 + 0x46) = 0;
  puVar4[0x47] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0;
  *(undefined4 *)(puVar4 + 0x3c) = 0;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3e] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x205) = 0;
  puVar4[0x42] = 0;
  puVar4[0x43] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar1 = (undefined8 *)unaff_RDI[0x52];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x52] = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_f8 = (float)uVar8;
  uStack_f4 = (uint)((ulonglong)uVar8 >> 0x20);
  uStack_f0 = (uint)extraout_XMM0_Qb_00;
  uStack_ec = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar11._0_4_ = _DAT_023945e0 & (uint)local_f8;
  auVar11._4_4_ = _UNK_023945e4 & uStack_f4;
  auVar11._8_4_ = _UNK_023945e8 & uStack_f0;
  auVar11._12_4_ = _UNK_023945ec & uStack_ec;
  auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
  auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + local_f8;
  auVar24 = roundss(unaff_XMM6,auVar12,0xb);
  auVar13._4_12_ = local_b8._4_12_;
  auVar13._0_4_ = local_b8._0_4_ + DAT_023942a8;
  local_e8 = (float)uVar9;
  uStack_e4 = (uint)((ulonglong)uVar9 >> 0x20);
  uStack_e0 = (uint)extraout_XMM0_Qb_01;
  uStack_dc = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  auVar15._0_4_ = _DAT_023945e0 & (uint)(local_e8 * DAT_02390438);
  auVar15._4_4_ = _UNK_023945e4 & uStack_e4;
  auVar15._8_4_ = _UNK_023945e8 & uStack_e0;
  auVar15._12_4_ = _UNK_023945ec & uStack_dc;
  auVar16._4_12_ = SUB1612(auVar15 | _DAT_023945f0,4);
  auVar16._0_4_ = SUB164(auVar15 | _DAT_023945f0,0) + local_e8 * DAT_02390438;
  auVar17 = roundss(auVar16,auVar16,0xb);
  fVar7 = DAT_02392fd8;
  if (auVar17._0_4_ <= DAT_02392fd8) {
    fVar7 = auVar17._0_4_;
  }
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar23 = roundss(auVar22,ZEXT416((uint)((float)((uint)(fVar7 * DAT_0239011c) & _DAT_023945e0 |
                                                  DAT_02394dc8) + fVar7 * DAT_0239011c)),0xb);
  local_d8 = (float)uVar10;
  uStack_d4 = (uint)((ulonglong)uVar10 >> 0x20);
  uStack_d0 = (uint)extraout_XMM0_Qb_02;
  uStack_cc = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
  auVar18._0_4_ = _DAT_023945e0 & (uint)(local_d8 * DAT_02390438);
  auVar18._4_4_ = _UNK_023945e4 & uStack_d4;
  auVar18._8_4_ = _UNK_023945e8 & uStack_d0;
  auVar18._12_4_ = _UNK_023945ec & uStack_cc;
  auVar19._4_12_ = SUB1612(auVar18 | ZEXT416(DAT_02394dc8),4);
  auVar19._0_4_ = SUB164(auVar18 | ZEXT416(DAT_02394dc8),0) + local_d8 * DAT_02390438;
  auVar17 = roundss(auVar19,auVar19,0xb);
  fVar7 = DAT_02392fd8;
  if (auVar17._0_4_ <= DAT_02392fd8) {
    fVar7 = auVar17._0_4_;
  }
  auVar20._4_12_ = auVar14._4_12_;
  auVar20._0_4_ = auVar14._0_4_ + DAT_023b1698;
  auVar17 = insertps(auVar20,ZEXT416((uint)fVar7),0x10);
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = auVar24._0_4_ - auVar23._0_4_;
  auVar14 = insertps(auVar13,auVar25,0x10);
  (**(code **)(*(longlong *)unaff_RDI[0x52] + 0x4d0))(auVar14._0_8_,auVar17._0_8_);
  (**(code **)(*(longlong *)unaff_RDI[0x52] + 0x9c8))();
  plVar6 = (longlong *)unaff_RDI[0x52];
  FUN_01ad3320();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar6 + 0x9d8))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)unaff_RDI[0x52];
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017394e0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar6 + 0x968))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x52] + 0x3a0))();
  lVar3 = DAT_027ebf00;
  plVar6 = (longlong *)unaff_RDI[0x52];
  if (DAT_027ebf00 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar6 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)unaff_RDI[0x52];
  FUN_00d50b00();
  (**(code **)(*plVar6 + 0xa20))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x52] + 0xa80))();
  lVar3 = unaff_RDI[0x52];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x52] + 0xac0))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


