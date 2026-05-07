// Function: FUN_01e18220
// Address: 01e18220
// Size: 602 bytes
// Class: GNList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18220(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  longlong *unaff_RDI;
  int iVar8;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Dc;
  float fVar12;
  float in_XMM1_Dd;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong *local_38;
  char local_30;
  
  fVar19 = (float)((ulonglong)param_2 >> 0x20);
  fVar18 = (float)param_2;
  if (*(char *)((longlong)unaff_RDI + 0x161) == '\0') {
    FUN_01f27fe0();
    cVar7 = (**(code **)(*local_38 + 0x6c0))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      return;
    }
  }
  uVar6 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3c8))();
  uVar1 = *(uint *)(unaff_RDI + 0x2e);
  fVar20 = fVar18;
  fVar21 = fVar19;
  fVar12 = in_XMM1_Dc;
  fVar13 = in_XMM1_Dd;
  FUN_01e3f820();
  auVar16._8_4_ = extraout_XMM0_Dc;
  auVar16._0_8_ = uVar6;
  auVar16._12_4_ = extraout_XMM0_Dd;
  auVar10._0_8_ = CONCAT44(fVar21 - fVar19,fVar20 - fVar18);
  auVar10._8_4_ = fVar12 - in_XMM1_Dc;
  auVar10._12_4_ = fVar13 - in_XMM1_Dd;
  auVar15._8_4_ = auVar10._8_4_;
  auVar15._0_8_ = auVar10._0_8_;
  auVar15._12_4_ = auVar10._12_4_;
  auVar11._4_12_ = auVar10._4_12_;
  if ((uVar1 & 0xf) == 1) {
    auVar16 = blendps(auVar15,auVar16,2);
LAB_01e182cf:
    fVar20 = auVar16._0_4_;
  }
  else {
    auVar16 = blendps(auVar16,auVar16,2);
    if ((uVar1 & 0xf) != 2) goto LAB_01e182cf;
    auVar11._0_4_ = (fVar20 - fVar18) * DAT_0239011c;
    auVar16 = blendps(auVar16,auVar11,1);
    fVar20 = auVar16._0_4_;
  }
  auVar9 = auVar16;
  if (fVar20 <= (float)param_1) {
    auVar9._8_4_ = in_XMM0_Dc;
    auVar9._0_8_ = param_1;
    auVar9._12_4_ = in_XMM0_Dd;
  }
  auVar2._8_4_ = in_XMM0_Dc;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = in_XMM0_Dd;
  auVar10 = blendps(auVar9,auVar2,2);
  iVar8 = -(uint)((float)((ulonglong)param_1 >> 0x20) < auVar16._4_4_);
  auVar3._4_4_ = iVar8;
  auVar3._0_4_ = iVar8;
  auVar3._8_4_ = iVar8;
  auVar3._12_4_ = iVar8;
  auVar10 = blendvps(auVar10,auVar16,auVar3);
  fVar18 = fVar18 + auVar16._0_4_ + _DAT_023b5de0;
  fVar19 = fVar19 + auVar16._4_4_ + _UNK_023b5de4;
  fVar20 = in_XMM1_Dc + auVar16._8_4_ + _UNK_023b5de8;
  fVar21 = in_XMM1_Dd + auVar16._12_4_ + _UNK_023b5dec;
  auVar17._4_4_ = fVar19;
  auVar17._0_4_ = fVar18;
  auVar17._8_4_ = fVar20;
  auVar17._12_4_ = fVar21;
  if (auVar10._0_4_ <= fVar18) {
    auVar17 = auVar10;
  }
  auVar16 = blendps(auVar17,auVar10,2);
  iVar8 = -(uint)(fVar19 < auVar16._4_4_);
  auVar4._4_4_ = iVar8;
  auVar4._0_4_ = iVar8;
  auVar4._8_4_ = iVar8;
  auVar4._12_4_ = iVar8;
  auVar5._4_4_ = fVar19;
  auVar5._0_4_ = fVar18;
  auVar5._8_4_ = fVar20;
  auVar5._12_4_ = fVar21;
  auVar16 = blendvps(auVar16,auVar5,auVar4);
  uVar14 = auVar16._0_4_;
  iVar8 = FUN_01eacf20(uVar14);
  if (iVar8 == -1) {
    return;
  }
  if ((int)unaff_RDI[0x33] == -1) {
    return;
  }
  if (*(int *)((longlong)unaff_RDI + 0x194) == 3) {
    iVar8 = FUN_01eacf20(uVar14);
    if ((iVar8 == -1) ||
       ((iVar8 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3e0))(), iVar8 == -1 &&
        (iVar8 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3d8))(), iVar8 == 0)))) {
      iVar8 = FUN_00e7b4e0();
    }
    else {
      iVar8 = FUN_01eab6a0();
    }
  }
  else {
    if (*(int *)((longlong)unaff_RDI + 0x194) != 2) goto LAB_01e18440;
    iVar8 = FUN_01e17b30(uVar14);
  }
  if (iVar8 != -1) {
    FUN_00e7b670();
  }
LAB_01e18440:
  (**(code **)(*unaff_RDI + 0x968))();
  return;
}


