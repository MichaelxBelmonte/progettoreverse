// Function: FUN_01cc2760
// Address: 01cc2760
// Size: 640 bytes
// Class: Unknown

uint64_t FUN_01cc2760(uint64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  char cVar10;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  float fVar11;
  float fVar12;
  float fVar14;
  uint64_t uVar13;
  float in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  float in_XMM0_Dd;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  float fVar15;
  float fVar16;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar17;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  
  fVar17 = (float)((uint64_t)param_3 >> 0x20);
  fVar12 = (float)param_3;
  fVar16 = (float)((uint64_t)param_2 >> 0x20);
  fVar15 = (float)param_2;
  fVar14 = (float)((uint64_t)param_1 >> 0x20);
  fVar11 = (float)param_1;
  auVar23._8_4_ = in_XMM0_Dc;
  auVar23._0_8_ = param_1;
  auVar23._12_4_ = in_XMM0_Dd;
  switch(unaff_ESI) {
  case 8:
    param_1 = (**(code **)(*this_ptr + 0x548))(fVar11,fVar15);
    break;
  case 9:
  case 0x23:
  case 0x24:
    uVar13 = (**(code **)(*this_ptr + 0x548))(fVar11);
    auVar19._8_4_ = extraout_XMM0_Dc;
    auVar19._0_8_ = uVar13;
    auVar19._12_4_ = extraout_XMM0_Dd;
    auVar18._4_4_ = fVar16;
    auVar18._0_4_ = fVar15;
    auVar18._8_4_ = in_XMM1_Dc;
    auVar18._12_4_ = in_XMM1_Dd;
    if (fVar16 < fVar15) {
      fVar11 = fVar16;
      if (fVar16 <= param_4 * fVar15) {
        fVar11 = param_4 * fVar15;
      }
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = (float)uVar13 + (fVar15 - fVar11) * fVar12;
      auVar2._4_4_ = fVar16;
      auVar2._0_4_ = fVar11;
      auVar2._8_4_ = in_XMM1_Dd;
      auVar2._12_4_ = in_XMM1_Dd;
      blendps(auVar18,auVar2,1);
      return auVar20._0_8_;
    }
    if (fVar15 <= param_4 * fVar16) {
      fVar15 = param_4 * fVar16;
    }
    fVar12 = (fVar16 - fVar15) * fVar12;
    goto LAB_01cc28d5;
  case 10:
    cVar10 = (**(code **)(*this_ptr + 0x620))();
    if (cVar10 == '\0') {
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ = fVar11 + (fVar15 - (fVar16 + fVar16));
      param_1 = auVar24._0_8_;
    }
    else {
      auVar4._4_4_ = fVar14 + fVar14;
      auVar4._0_4_ = fVar11 + fVar11;
      auVar4._8_4_ = in_XMM0_Dc + in_XMM0_Dc;
      auVar4._12_4_ = in_XMM0_Dd + in_XMM0_Dd;
      auVar23 = blendps(auVar23,auVar4,0xd);
      param_1 = auVar23._0_8_;
    }
    break;
  case 0xb:
    (**(code **)(*this_ptr + 0x620))();
    auVar8._4_4_ = (fVar16 - fVar16) + fVar14;
    auVar8._0_4_ = (fVar15 - fVar16) + fVar11;
    auVar8._8_4_ = (in_XMM1_Dc - in_XMM1_Dd) + in_XMM0_Dc;
    auVar8._12_4_ = (in_XMM1_Dd - in_XMM1_Dd) + in_XMM0_Dd;
    auVar23 = blendps(auVar23,auVar8,0xd);
    param_1 = auVar23._0_8_;
    break;
  case 0xc:
    cVar10 = (**(code **)(*this_ptr + 0x620))();
    if (cVar10 == '\0') {
      auVar7._4_4_ = fVar14;
      auVar7._0_4_ = fVar14 + (fVar16 - (fVar15 + fVar15));
      auVar7._8_4_ = in_XMM0_Dd;
      auVar7._12_4_ = in_XMM0_Dd;
      auVar23 = insertps(auVar23,auVar7,0x10);
      param_1 = auVar23._0_8_;
    }
    break;
  case 0xd:
    (**(code **)(*this_ptr + 0x620))();
    auVar6._4_4_ = fVar14 + (fVar16 - fVar16);
    auVar6._0_4_ = fVar14 + (fVar16 - fVar15);
    auVar6._8_4_ = in_XMM0_Dd + (in_XMM1_Dd - in_XMM1_Dc);
    auVar6._12_4_ = in_XMM0_Dd + (in_XMM1_Dd - in_XMM1_Dd);
    auVar23 = insertps(auVar23,auVar6,0x1c);
    param_1 = auVar23._0_8_;
    break;
  case 0xe:
  case 0x10:
    uVar13 = (**(code **)(*this_ptr + 0x548))(fVar11);
    fVar11 = (float)((uint64_t)uVar13 >> 0x20);
    auVar21._8_4_ = extraout_XMM0_Dc_00;
    auVar21._0_8_ = uVar13;
    auVar21._12_4_ = extraout_XMM0_Dd_00;
    if (fVar15 <= fVar16) {
      auVar3._4_4_ = fVar11;
      auVar3._0_4_ = fVar11 + (fVar16 - fVar15) * fVar12;
      auVar3._8_4_ = extraout_XMM0_Dd_00;
      auVar3._12_4_ = extraout_XMM0_Dd_00;
      auVar23 = insertps(auVar21,auVar3,0x10);
      param_1 = auVar23._0_8_;
    }
    else {
      auVar22._4_12_ = auVar21._4_12_;
      auVar22._0_4_ = (float)uVar13 + (fVar15 - fVar16) * fVar12;
      param_1 = auVar22._0_8_;
    }
    break;
  case 0x27:
    auVar19._0_8_ = (**(code **)(*this_ptr + 0x548))(fVar11);
    auVar19._8_4_ = extraout_XMM0_Dc_01;
    auVar19._12_4_ = extraout_XMM0_Dd_01;
    auVar18._4_4_ = fVar16;
    auVar18._0_4_ = fVar15;
    auVar18._8_4_ = in_XMM1_Dc;
    auVar18._12_4_ = in_XMM1_Dd;
    if (fVar16 <= fVar15) {
      auVar1._4_4_ = (float)(int)fVar17;
      auVar1._0_4_ = (float)(int)(fVar12 * fVar15);
      auVar1._8_4_ = (float)(int)in_XMM2_Dc;
      auVar1._12_4_ = (float)(int)in_XMM2_Dd;
      blendps(auVar18,auVar1,1);
      return auVar19._0_8_;
    }
    fVar15 = (float)(int)(fVar12 * fVar16);
    in_XMM1_Dc = (float)(int)in_XMM2_Dc;
    in_XMM1_Dd = (float)(int)in_XMM2_Dd;
    fVar12 = fVar16 - fVar15;
    fVar16 = (float)(int)fVar17;
LAB_01cc28d5:
    auVar9._4_4_ = auVar19._4_4_;
    auVar9._0_4_ = auVar19._4_4_ + fVar12;
    auVar9._8_4_ = auVar19._12_4_;
    auVar9._12_4_ = auVar19._12_4_;
    auVar23 = insertps(auVar19,auVar9,0x10);
    param_1 = auVar23._0_8_;
    auVar5._4_4_ = fVar16;
    auVar5._0_4_ = fVar15;
    auVar5._8_4_ = in_XMM1_Dc;
    auVar5._12_4_ = in_XMM1_Dd;
    insertps(auVar18,auVar5,0x10);
  }
  return param_1;
}

