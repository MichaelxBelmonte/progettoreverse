// Function: FUN_01e18220
// Address: 01e18220
// Size: 602 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e18220(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint64_t uVar6;
  char cVar7;
  int64_t *this_ptr;
  int iVar8;
  uint32_t in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  uint32_t in_XMM0_Dd;
  uint32_t extraout_XMM0_Dd;
  float in_XMM1_Dc;
  float fVar12;
  float in_XMM1_Dd;
  float fVar13;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint32_t uVar14;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int64_t *local_38;
  char local_30;
  
  fVar19 = (float)((uint64_t)param_2 >> 0x20);
  fVar18 = (float)param_2;
  if (*(char *)((int64_t)this_ptr + 0x161) == '\0') {
    FUN_01f27fe0();
    cVar7 = (**(code **)(*local_38 + 0x6c0))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      return;
    }
  }
  uVar6 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3c8))();
  uVar1 = *(uint *)(this_ptr + 0x2e);
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
    auVar11._0_4_ = (fVar20 - fVar18) * g_0239011c;
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
  iVar8 = -(uint)((float)((uint64_t)param_1 >> 0x20) < auVar16._4_4_);
  auVar3._4_4_ = iVar8;
  auVar3._0_4_ = iVar8;
  auVar3._8_4_ = iVar8;
  auVar3._12_4_ = iVar8;
  auVar10 = blendvps(auVar10,auVar16,auVar3);
  fVar18 = fVar18 + auVar16._0_4_ + g_023b5de0;
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
  if ((int)this_ptr[0x33] == -1) {
    return;
  }
  if (*(int *)((int64_t)this_ptr + 0x194) == 3) {
    iVar8 = FUN_01eacf20(uVar14);
    if ((iVar8 == -1) ||
       ((iVar8 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3e0))(), iVar8 == -1 &&
        (iVar8 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3d8))(), iVar8 == 0)))) {
      iVar8 = FUN_00e7b4e0();
    }
    else {
      iVar8 = FUN_01eab6a0();
    }
  }
  else {
    if (*(int *)((int64_t)this_ptr + 0x194) != 2) goto LAB_01e18440;
    iVar8 = FUN_01e17b30(uVar14);
  }
  if (iVar8 != -1) {
    FUN_00e7b670();
  }
LAB_01e18440:
  (**(code **)(*this_ptr + 0x968))();
  return;
}

