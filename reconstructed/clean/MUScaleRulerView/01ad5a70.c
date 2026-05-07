// Function: FUN_01ad5a70
// Address: 01ad5a70
// Size: 1510 bytes
// Class: MUScaleRulerView

void FUN_01ad5a70(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int iVar6;
  int64_t this_ptr;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  float fVar21;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar11 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint64_t extraout_XMM0_Qb_13;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  float fVar30;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t local_38 [16];
  uint8_t local_28 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_10;
  uint64_t extraout_XMM0_Qb_11;
  uint64_t extraout_XMM0_Qb_12;
  uint64_t extraout_XMM0_Qb_14;
  uint64_t extraout_XMM0_Qb_15;
  
  uVar7 = FUN_01adad50();
  local_38._0_4_ = in_XMM1._0_4_;
  local_28._0_4_ = (uint32_t)uVar7;
  auVar22 = in_XMM1;
  if (*(int64_t **)(this_ptr + 0x238) != (int64_t *)0x0) {
    auVar8._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x238) + 0x4d8))();
    auVar8._8_8_ = extraout_XMM0_Qb_00;
    auVar8 = blendps(auVar8,ZEXT416((uint)((float)local_28._0_4_ + 0.0 + g_02390d00)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(g_02390d34 + (float)local_38._0_4_)),1);
    (**(code **)(**(int64_t **)(this_ptr + 0x238) + 0x4d0))(auVar8._0_8_);
    (**(code **)(**(int64_t **)(this_ptr + 0x238) + 0x998))();
    FUN_01e058a0();
  }
  if (*(int64_t **)(this_ptr + 0x240) != (int64_t *)0x0) {
    auVar9._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x240) + 0x4d8))();
    auVar9._8_8_ = extraout_XMM0_Qb_01;
    auVar34._4_12_ = in_XMM1._4_12_;
    auVar34._0_4_ = (float)local_38._0_4_ + g_02390d34;
    local_28._4_4_ = (uint32_t)((uint64_t)uVar7 >> 0x20);
    local_28._8_4_ = (uint32_t)extraout_XMM0_Qb;
    local_28._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar2._4_4_ = local_28._4_4_;
    auVar2._0_4_ = (float)local_28._0_4_ + 0.0 + g_02390d00;
    auVar2._8_4_ = local_28._8_4_;
    auVar2._12_4_ = local_28._12_4_;
    auVar8 = blendps(auVar9,auVar2,1);
    auVar22 = blendps(auVar22,auVar34,1);
    (**(code **)(**(int64_t **)(this_ptr + 0x240) + 0x4d0))(auVar8._0_8_);
  }
  if (*(int *)(this_ptr + 0x284) == 0) {
    local_28._8_8_ = 0;
    local_28._0_8_ = g_023dccec;
    local_38._8_8_ = 0;
    local_38._0_8_ = g_023dccf4;
    plVar1 = *(int64_t **)(this_ptr + 0x270);
    auVar8 = auVar22;
    goto joined_r0x01ad5bb3;
  }
  auVar10._0_8_ = FUN_01e3f820();
  auVar10._8_8_ = extraout_XMM0_Qb_02;
  iVar6 = *(int *)(this_ptr + 0x284);
  fVar30 = (float)((uint64_t)auVar10._0_8_ >> 0x20);
  fVar21 = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
  if (iVar6 == 3) {
    auVar8 = auVar22;
    FUN_01e3f820();
    auVar8 = blendps(auVar8,g_0241c700,0xd);
    iVar6 = *(int *)(this_ptr + 0x284);
    auVar23._0_4_ = auVar8._0_4_ + (float)auVar10._0_8_;
    auVar23._4_4_ = auVar8._4_4_ + fVar30;
    auVar23._8_4_ = auVar8._8_4_ + (float)extraout_XMM0_Qb_02;
    auVar23._12_4_ = auVar8._12_4_ + fVar21;
    if (iVar6 == 1) goto LAB_01ad5bd6;
LAB_01ad5bd2:
    if (iVar6 == 0) goto LAB_01ad5bd6;
    auVar8 = auVar23;
    FUN_01e3f820();
    if (*(int *)(this_ptr + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar31 = blendps(auVar8,g_0241c710,0xd);
  }
  else {
    auVar23._0_4_ = (float)g_023dccf4 + (float)auVar10._0_8_;
    auVar23._4_4_ = (float)(g_023dccf4 >> 0x20) + fVar30;
    auVar23._8_4_ = (float)extraout_XMM0_Qb_02 + 0.0;
    auVar23._12_4_ = fVar21 + 0.0;
    if (iVar6 != 1) goto LAB_01ad5bd2;
LAB_01ad5bd6:
    auVar31._8_8_ = 0;
    auVar31._0_8_ = g_023dccf4;
  }
  auVar24._0_4_ = auVar23._0_4_ + auVar31._0_4_;
  auVar24._4_4_ = auVar23._4_4_ + auVar31._4_4_;
  auVar24._8_4_ = auVar23._8_4_ + auVar31._8_4_;
  auVar24._12_4_ = auVar23._12_4_ + auVar31._12_4_;
  auVar8 = blendps(auVar24,auVar10,2);
  local_38 = blendps(auVar22,g_0241c720,0xd);
  plVar1 = *(int64_t **)(this_ptr + 0x270);
  local_28 = auVar8;
joined_r0x01ad5bb3:
  if (plVar1 != (int64_t *)0x0) {
    auVar22._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
    auVar22._8_8_ = extraout_XMM0_Qb_03;
    auVar8 = blendps(auVar8,local_38,0xd);
    auVar22 = blendps(auVar22,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    (**(code **)(**(int64_t **)(this_ptr + 0x270) + 0x4d0))(auVar22._0_8_);
  }
  if (*(int64_t **)(this_ptr + 0x278) != (int64_t *)0x0) {
    auVar11._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x4d8))();
    auVar11._8_8_ = extraout_XMM0_Qb_04;
    auVar35._4_12_ = local_38._4_12_;
    auVar35._0_4_ = local_38._0_4_ + g_02390124;
    auVar3._4_4_ = local_28._4_4_;
    auVar3._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar3._8_4_ = local_28._8_4_;
    auVar3._12_4_ = local_28._12_4_;
    auVar22 = blendps(auVar11,auVar3,1);
    auVar8 = blendps(auVar8,auVar35,1);
    (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x4d0))(auVar22._0_8_);
  }
  if (*(int64_t *)(this_ptr + 0x230) != 0) {
    local_38._0_8_ = FUN_01adabe0();
    local_38._8_8_ = extraout_XMM0_Qb_05;
    auVar22 = auVar8;
    auVar12._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x230) + 0x4d8))();
    auVar12._8_8_ = extraout_XMM0_Qb_06;
    auVar8 = blendps(auVar22,auVar8,0xd);
    auVar22 = blendps(auVar12,local_38,0xd);
    (**(code **)(**(int64_t **)(this_ptr + 0x230) + 0x4d0))(auVar22._0_8_);
  }
  if ((*(int *)(this_ptr + 0x284) == 1) || (*(int *)(this_ptr + 0x284) == 0)) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = g_023dccec;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = g_023dccf4;
  }
  else {
    auVar13._0_8_ = FUN_01e3f820();
    auVar13._8_8_ = extraout_XMM0_Qb_07;
    if (*(int *)(this_ptr + 0x284) == 3) {
      auVar22 = auVar8;
      FUN_01e3f820();
      auVar25 = blendps(auVar22,g_0241c700,0xd);
    }
    else {
      auVar25._8_8_ = 0;
      auVar25._0_8_ = g_023dccf4;
    }
    auVar26._0_4_ = auVar25._0_4_ + (float)auVar13._0_8_;
    auVar26._4_4_ = auVar25._4_4_ + (float)((uint64_t)auVar13._0_8_ >> 0x20);
    auVar26._8_4_ = auVar25._8_4_ + (float)extraout_XMM0_Qb_07;
    auVar26._12_4_ = auVar25._12_4_ + (float)((uint64_t)extraout_XMM0_Qb_07 >> 0x20);
    auVar27 = blendps(auVar26,auVar13,2);
    auVar36 = blendps(auVar8,g_0241c710,0xd);
  }
  fVar30 = auVar36._0_4_;
  local_38 = ZEXT416((uint)(g_0239011c * fVar30));
  local_28._4_12_ = auVar27._4_12_;
  local_28._0_4_ = auVar27._0_4_ + g_0239011c * fVar30;
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_28 = auVar27;
  }
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_38 = auVar36;
  }
  if (*(int64_t **)(this_ptr + 0x248) != (int64_t *)0x0) {
    auVar14._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x248) + 0x4d8))();
    auVar14._8_8_ = extraout_XMM0_Qb_08;
    auVar22 = blendps(auVar14,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    auVar27 = blendps(auVar27,ZEXT416((uint)(g_02390124 + (float)local_38._0_4_)),1);
    (**(code **)(**(int64_t **)(this_ptr + 0x248) + 0x4d0))(auVar22._0_8_);
  }
  if (*(int64_t **)(this_ptr + 0x250) != (int64_t *)0x0) {
    auVar15._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x250) + 0x4d8))();
    auVar15._8_8_ = extraout_XMM0_Qb_09;
    auVar37._4_12_ = local_38._4_12_;
    auVar37._0_4_ = (float)local_38._0_4_ + g_02390124;
    auVar4._4_4_ = local_28._4_4_;
    auVar4._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar4._8_4_ = local_28._8_4_;
    auVar4._12_4_ = local_28._12_4_;
    auVar22 = blendps(auVar15,auVar4,1);
    auVar27 = blendps(auVar27,auVar37,1);
    (**(code **)(**(int64_t **)(this_ptr + 0x250) + 0x4d0))(auVar22._0_8_);
  }
  if ((*(int *)(this_ptr + 0x284) == 1) || (*(int *)(this_ptr + 0x284) == 0)) {
    local_28._8_8_ = 0;
    local_28._0_8_ = g_023dccec;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = g_023dccf4;
    auVar22 = auVar27;
  }
  else {
    auVar16._0_8_ = FUN_01e3f820();
    auVar16._8_8_ = extraout_XMM0_Qb_10;
    if (*(int *)(this_ptr + 0x284) == 3) {
      auVar22 = auVar27;
      FUN_01e3f820();
      auVar28 = blendps(auVar22,g_0241c700,0xd);
    }
    else {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = g_023dccf4;
    }
    auVar29._0_4_ = auVar28._0_4_ + (float)auVar16._0_8_;
    auVar29._4_4_ = auVar28._4_4_ + (float)((uint64_t)auVar16._0_8_ >> 0x20);
    auVar29._8_4_ = auVar28._8_4_ + (float)extraout_XMM0_Qb_10;
    auVar29._12_4_ = auVar28._12_4_ + (float)((uint64_t)extraout_XMM0_Qb_10 >> 0x20);
    auVar22 = blendps(auVar29,auVar16,2);
    auVar32 = blendps(auVar27,g_0241c710,0xd);
    local_28 = auVar22;
  }
  fVar30 = auVar32._0_4_;
  local_38 = ZEXT416((uint)(g_0239011c * fVar30));
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_38 = auVar32;
  }
  if (*(int64_t **)(this_ptr + 0x260) != (int64_t *)0x0) {
    auVar17._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x260) + 0x4d8))();
    auVar17._8_8_ = extraout_XMM0_Qb_11;
    auVar8 = blendps(auVar17,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(g_02390124 + (float)local_38._0_4_)),1);
    (**(code **)(**(int64_t **)(this_ptr + 0x260) + 0x4d0))(auVar8._0_8_);
  }
  if (*(int64_t **)(this_ptr + 0x228) != (int64_t *)0x0) {
    auVar18._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x228) + 0x4d8))();
    auVar18._8_8_ = extraout_XMM0_Qb_12;
    auVar38._4_12_ = local_28._4_12_;
    auVar38._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar8 = blendps(auVar18,auVar38,1);
    auVar5._4_4_ = local_38._4_4_;
    auVar5._0_4_ = (float)local_38._0_4_ + g_02390124;
    auVar5._8_4_ = local_38._8_4_;
    auVar5._12_4_ = local_38._12_4_;
    auVar22 = blendps(auVar22,auVar5,1);
    (**(code **)(**(int64_t **)(this_ptr + 0x228) + 0x4d0))(auVar8._0_8_);
  }
  if (*(int *)(this_ptr + 0x284) == 3) {
    local_38._0_8_ = FUN_01e3f820();
    local_38._8_8_ = extraout_XMM0_Qb_13;
    auVar22 = blendps(auVar22,g_0241c700,0xd);
    plVar1 = *(int64_t **)(this_ptr + 600);
    local_28 = auVar22;
  }
  else {
    local_38._8_8_ = 0;
    local_38._0_8_ = g_023dccec;
    local_28._8_8_ = 0;
    local_28._0_8_ = g_023dccf4;
    plVar1 = *(int64_t **)(this_ptr + 600);
  }
  if (plVar1 != (int64_t *)0x0) {
    auVar19._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
    auVar19._8_8_ = extraout_XMM0_Qb_14;
    auVar8 = blendps(auVar19,ZEXT416((uint)((float)local_38._0_4_ + 0.0)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(g_02390124 + (float)local_28._0_4_)),1);
    (**(code **)(**(int64_t **)(this_ptr + 600) + 0x4d0))(auVar8._0_8_,auVar22._0_8_);
  }
  if (*(int64_t **)(this_ptr + 0x268) != (int64_t *)0x0) {
    auVar20._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x268) + 0x4d8))();
    auVar20._8_8_ = extraout_XMM0_Qb_15;
    auVar39._4_12_ = local_28._4_12_;
    auVar39._0_4_ = (float)local_28._0_4_ + g_023b36a8;
    auVar33._4_12_ = local_38._4_12_;
    auVar33._0_4_ = (float)local_38._0_4_ + g_02390d04;
    auVar8 = blendps(auVar20,auVar33,1);
    auVar22 = blendps(auVar22,auVar39,1);
                                            (**(code **)(**(int64_t **)(this_ptr + 0x268) + 0x4d0))(auVar8._0_8_,auVar22._0_8_);
    return;
  }
  return;
}

