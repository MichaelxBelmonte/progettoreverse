// Function: FUN_01e3f2c0
// Address: 01e3f2c0
// Size: 556 bytes
// Class: Unknown

uint64_t FUN_01e3f2c0(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint32_t uVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar9;
  uint64_t uVar10;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint32_t uVar13;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t in_XMM1_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float fVar17;
  float fVar18;
  uint8_t local_38 [16];
  uint8_t local_28 [16];
  
  plVar9 = (int64_t *)*arg1;
  if (*(int *)((int64_t)plVar9 + 0xb4) == 2) {
LAB_01e3f31c:
    (**(code **)(*plVar9 + 0x5d8))(g_023dccec,g_023dccf4);
    return 0;
  }
  local_28._8_8_ = in_XMM0_Qb;
  local_28._0_8_ = param_1;
  local_38._8_8_ = in_XMM1_Qb;
  local_38._0_8_ = param_2;
  uVar10 = (**(code **)(*plVar9 + 0x5c8))();
  fVar1 = (float)param_2;
  fVar3 = (float)((uint64_t)param_2 >> 0x20);
  fVar4 = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar17 = (float)((uint64_t)uVar10 >> 0x20);
  uVar13 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  if ((*(float *)(this_ptr + 0xb0) <= g_02390124 && g_02390124 != *(float *)(this_ptr + 0xb0))
     && ((fVar1 < (float)uVar10 || (fVar3 < fVar17)))) {
    plVar9 = (int64_t *)*arg1;
    goto LAB_01e3f31c;
  }
  auVar14 = local_38;
  if ((float)uVar10 <= fVar1) {
    auVar14._8_4_ = (int)extraout_XMM0_Qb;
    auVar14._0_8_ = uVar10;
    auVar14._12_4_ = uVar13;
  }
  uVar5 = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  auVar15 = local_38;
  if (fVar17 <= fVar3) {
    auVar15._8_4_ = (int)extraout_XMM0_Qb;
    auVar15._0_8_ = uVar10;
    auVar15._12_4_ = uVar13;
  }
  fVar17 = (float)((uint64_t)param_1 >> 0x20);
  auVar11._4_4_ = fVar17;
  auVar11._0_4_ = fVar17;
  auVar11._8_4_ = uVar5;
  auVar11._12_4_ = uVar5;
  auVar14 = blendps(auVar14,auVar15,2);
  plVar9 = (int64_t *)*arg1;
  iVar2 = (int)plVar9[4];
  auVar12._4_12_ = auVar11._4_12_;
  if (iVar2 == 1) {
    auVar6._4_4_ = fVar3;
    auVar6._0_4_ = (fVar3 - auVar15._4_4_) * g_0239011c;
    auVar6._8_4_ = fVar4;
    auVar6._12_4_ = fVar4;
    auVar15 = roundss(ZEXT416(0),auVar6,9);
    fVar18 = auVar15._0_4_;
LAB_01e3f3ac:
    auVar12._0_4_ = fVar17 + fVar18;
    local_28 = insertps(local_28,auVar12,0x10);
  }
  else {
    if (iVar2 == 2) {
      fVar18 = fVar3 - auVar15._4_4_;
      goto LAB_01e3f3ac;
    }
    if (iVar2 == 3) {
      auVar14 = blendps(auVar14,local_38,2);
    }
  }
  iVar2 = *(int *)((int64_t)plVar9 + 0x24);
  if (iVar2 == 1) {
    auVar8._4_4_ = fVar3;
    auVar8._0_4_ = (fVar1 - auVar14._0_4_) * g_0239011c;
    auVar8._8_4_ = (float)in_XMM1_Qb;
    auVar8._12_4_ = fVar4;
    roundss(ZEXT816(0),auVar8,9);
  }
  else if (iVar2 == 2) {
    auVar7._4_4_ = fVar3 - auVar14._4_4_;
    auVar7._0_4_ = fVar1 - auVar14._0_4_;
    auVar7._8_4_ = (float)in_XMM1_Qb - auVar14._8_4_;
    auVar7._12_4_ = fVar4 - auVar14._12_4_;
    blendps(local_28,auVar7,0xd);
  }
  else if (iVar2 == 3) {
    auVar14 = blendps(auVar14,local_38,0xd);
  }
  if ((((!NAN(*(float *)(plVar9 + 0x1b))) && (!NAN(*(float *)(plVar9 + 0x1c)))) &&
      (!NAN(*(float *)((int64_t)plVar9 + 0xdc)))) && (!NAN(*(float *)((int64_t)plVar9 + 0xe4))))
  goto LAB_01e3f434;
  uVar10 = (**(code **)(*plVar9 + 0x600))();
  auVar16._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar16._0_8_ = uVar10;
  auVar16._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  fVar1 = *(float *)(plVar9 + 0x1b);
  if (NAN(fVar1) || NAN(fVar1)) {
    auVar15 = ZEXT416(*(uint *)((int64_t)plVar9 + 0xdc));
    fVar1 = *(float *)(plVar9 + 0x1c);
    if (!NAN(fVar1)) goto LAB_01e3f4cc;
LAB_01e3f48f:
    if (!NAN(auVar15._0_4_)) goto LAB_01e3f4d7;
LAB_01e3f494:
    fVar1 = *(float *)((int64_t)plVar9 + 0xe4);
  }
  else {
    auVar16 = blendps(auVar16,ZEXT416((uint)fVar1),1);
    auVar15 = ZEXT416(*(uint *)((int64_t)plVar9 + 0xdc));
    fVar1 = *(float *)(plVar9 + 0x1c);
    if (NAN(fVar1)) goto LAB_01e3f48f;
LAB_01e3f4cc:
    auVar14 = blendps(auVar14,ZEXT416((uint)fVar1),1);
    if (NAN(auVar15._0_4_)) goto LAB_01e3f494;
LAB_01e3f4d7:
    insertps(auVar16,auVar15,0x10);
    fVar1 = *(float *)((int64_t)plVar9 + 0xe4);
  }
  if (!NAN(fVar1)) {
    insertps(auVar14,ZEXT416((uint)fVar1),0x10);
  }
LAB_01e3f434:
  FUN_00d05650();
  (**(code **)(*(int64_t *)*arg1 + 0x5d8))();
  return 1;
}

