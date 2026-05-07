// Function: FUN_01e3f2c0
// Address: 01e3f2c0
// Size: 556 bytes
// Class: Unknown


undefined8 FUN_01e3f2c0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 in_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  plVar9 = (longlong *)*unaff_RSI;
  if (*(int *)((longlong)plVar9 + 0xb4) == 2) {
LAB_01e3f31c:
    (**(code **)(*plVar9 + 0x5d8))(DAT_023dccec,DAT_023dccf4);
    return 0;
  }
  local_28._8_8_ = in_XMM0_Qb;
  local_28._0_8_ = param_1;
  local_38._8_8_ = in_XMM1_Qb;
  local_38._0_8_ = param_2;
  uVar10 = (**(code **)(*plVar9 + 0x5c8))();
  fVar1 = (float)param_2;
  fVar3 = (float)((ulonglong)param_2 >> 0x20);
  fVar4 = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar17 = (float)((ulonglong)uVar10 >> 0x20);
  uVar13 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if ((*(float *)(unaff_RDI + 0xb0) <= DAT_02390124 && DAT_02390124 != *(float *)(unaff_RDI + 0xb0))
     && ((fVar1 < (float)uVar10 || (fVar3 < fVar17)))) {
    plVar9 = (longlong *)*unaff_RSI;
    goto LAB_01e3f31c;
  }
  auVar14 = local_38;
  if ((float)uVar10 <= fVar1) {
    auVar14._8_4_ = (int)extraout_XMM0_Qb;
    auVar14._0_8_ = uVar10;
    auVar14._12_4_ = uVar13;
  }
  uVar5 = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  auVar15 = local_38;
  if (fVar17 <= fVar3) {
    auVar15._8_4_ = (int)extraout_XMM0_Qb;
    auVar15._0_8_ = uVar10;
    auVar15._12_4_ = uVar13;
  }
  fVar17 = (float)((ulonglong)param_1 >> 0x20);
  auVar11._4_4_ = fVar17;
  auVar11._0_4_ = fVar17;
  auVar11._8_4_ = uVar5;
  auVar11._12_4_ = uVar5;
  auVar14 = blendps(auVar14,auVar15,2);
  plVar9 = (longlong *)*unaff_RSI;
  iVar2 = (int)plVar9[4];
  auVar12._4_12_ = auVar11._4_12_;
  if (iVar2 == 1) {
    auVar6._4_4_ = fVar3;
    auVar6._0_4_ = (fVar3 - auVar15._4_4_) * DAT_0239011c;
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
  iVar2 = *(int *)((longlong)plVar9 + 0x24);
  if (iVar2 == 1) {
    auVar8._4_4_ = fVar3;
    auVar8._0_4_ = (fVar1 - auVar14._0_4_) * DAT_0239011c;
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
      (!NAN(*(float *)((longlong)plVar9 + 0xdc)))) && (!NAN(*(float *)((longlong)plVar9 + 0xe4))))
  goto LAB_01e3f434;
  uVar10 = (**(code **)(*plVar9 + 0x600))();
  auVar16._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar16._0_8_ = uVar10;
  auVar16._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  fVar1 = *(float *)(plVar9 + 0x1b);
  if (NAN(fVar1) || NAN(fVar1)) {
    auVar15 = ZEXT416(*(uint *)((longlong)plVar9 + 0xdc));
    fVar1 = *(float *)(plVar9 + 0x1c);
    if (!NAN(fVar1)) goto LAB_01e3f4cc;
LAB_01e3f48f:
    if (!NAN(auVar15._0_4_)) goto LAB_01e3f4d7;
LAB_01e3f494:
    fVar1 = *(float *)((longlong)plVar9 + 0xe4);
  }
  else {
    auVar16 = blendps(auVar16,ZEXT416((uint)fVar1),1);
    auVar15 = ZEXT416(*(uint *)((longlong)plVar9 + 0xdc));
    fVar1 = *(float *)(plVar9 + 0x1c);
    if (NAN(fVar1)) goto LAB_01e3f48f;
LAB_01e3f4cc:
    auVar14 = blendps(auVar14,ZEXT416((uint)fVar1),1);
    if (NAN(auVar15._0_4_)) goto LAB_01e3f494;
LAB_01e3f4d7:
    insertps(auVar16,auVar15,0x10);
    fVar1 = *(float *)((longlong)plVar9 + 0xe4);
  }
  if (!NAN(fVar1)) {
    insertps(auVar14,ZEXT416((uint)fVar1),0x10);
  }
LAB_01e3f434:
  FUN_00d05650();
  (**(code **)(*(longlong *)*unaff_RSI + 0x5d8))();
  return 1;
}


