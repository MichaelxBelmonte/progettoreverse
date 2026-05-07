// Function: FUN_01eabe50
// Address: 01eabe50
// Size: 768 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01eabe50(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int unaff_ESI;
  int64_t *this_ptr;
  float fVar2;
  float fVar3;
  uint64_t extraout_XMM0_Qb;
  uint uVar15;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint64_t uVar4;
  uint8_t auVar9 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  float fVar28;
  float fVar29;
  uint8_t auVar27 [16];
  float fVar30;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint8_t local_48 [8];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t local_38 [16];
  uint8_t local_28 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_02;
  
  if (*(int *)((int64_t)this_ptr + 0x54) == unaff_ESI) {
    if (unaff_ESI == 0) {
      (**(code **)(*(int64_t *)this_ptr[8] + 0x370))();
      (**(code **)(*local_58 + 0x378))();
      local_38._0_8_ = FUN_01d43b70();
      local_38._8_8_ = extraout_XMM0_Qb_03;
      fVar2 = (float)(**(code **)(*(int64_t *)this_ptr[8] + 0x390))();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar13._4_12_ = local_38._4_12_;
      auVar13._0_4_ = (float)local_38._0_8_ + fVar2;
      auVar27 = insertps(g_023b1630,auVar13,0x10);
    }
    else {
      local_38._0_8_ = (**(code **)(*this_ptr + 1000))();
      local_38._8_8_ = extraout_XMM0_Qb;
      local_28._8_8_ = in_XMM1_Qb;
      local_28._0_8_ = param_2;
      fVar28 = (float)((uint64_t)local_38._0_8_ >> 0x20);
      uVar15 = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
      fVar2 = fVar28 + g_0239011c;
      fVar3 = (float)(**(code **)(*(int64_t *)this_ptr[8] + 0x390))();
      fVar2 = fVar2 - fVar3;
      auVar16._0_4_ = ~g_02390140 & (uint)fVar2;
      auVar16._4_4_ = ~_UNK_02390144 & (uint)fVar28;
      auVar16._8_4_ = ~_UNK_02390148 & uVar15;
      auVar16._12_4_ = ~_UNK_0239014c & uVar15;
      auVar16 = auVar16 | ZEXT416(g_02394dc8 & g_02390140);
      auVar17._4_12_ = auVar16._4_12_;
      auVar17._0_4_ = auVar16._0_4_ + fVar2;
      fVar2 = (float)((uint64_t)param_2 >> 0x20);
      uVar15 = (uint)((uint64_t)in_XMM1_Qb >> 0x20);
      auVar27 = insertps(local_38,local_28,0x1c);
      fVar3 = auVar27._0_4_ + g_023945d0;
      fVar28 = auVar27._4_4_ + _UNK_023945d4;
      fVar29 = auVar27._8_4_ + _UNK_023945d8;
      fVar30 = auVar27._12_4_ + _UNK_023945dc;
      auVar18 = roundss(auVar17,auVar17,0xb);
      auVar26._0_4_ = (float)(g_023945e0 & (uint)fVar3 | g_023945f0) + fVar3;
      auVar26._4_4_ = (float)(_UNK_023945e4 & (uint)fVar28 | _UNK_023945f4) + fVar28;
      auVar26._8_4_ = (float)(_UNK_023945e8 & (uint)fVar29 | _UNK_023945f8) + fVar29;
      auVar26._12_4_ = (float)(_UNK_023945ec & (uint)fVar30 | _UNK_023945fc) + fVar30;
      auVar19 = roundps(auVar18,auVar26,0xb);
      local_48._4_4_ = auVar19._4_4_;
      local_48._0_4_ = local_48._4_4_;
      uStack_40 = auVar19._12_4_;
      uStack_3c = auVar19._12_4_;
      fVar3 = fVar2 + g_0239011c;
      auVar5._0_4_ = ~g_02390140 & (uint)fVar3;
      auVar5._4_4_ = ~_UNK_02390144 & (uint)fVar2;
      auVar5._8_4_ = ~_UNK_02390148 & uVar15;
      auVar5._12_4_ = ~_UNK_0239014c & uVar15;
      auVar5 = auVar5 | ZEXT416(g_02394dc8 & g_02390140);
      auVar6._4_12_ = auVar5._4_12_;
      auVar6._0_4_ = auVar5._0_4_ + fVar3;
      auVar27 = roundss(auVar6,auVar6,0xb);
      auVar7._0_8_ = (**(code **)(*(int64_t *)this_ptr[8] + 0x390))();
      auVar7._8_8_ = extraout_XMM0_Qb_00;
      auVar8._4_12_ = auVar7._4_12_;
      auVar8._0_4_ = (float)auVar7._0_8_ + (float)auVar7._0_8_ + auVar27._0_4_;
      auVar27 = insertps(_local_48,auVar8,0x10);
      uVar4 = FUN_00d8cbc0();
      cVar1 = FUN_01e9c7e0(uVar4,0);
      if (cVar1 == '\0') {
        auVar14._4_12_ = auVar19._4_12_;
        auVar14._0_4_ = auVar19._0_4_ + (float)local_48._4_4_;
        insertps(auVar14,auVar18._0_4_,0x10);
      }
      else {
        auVar9._4_12_ = auVar18._4_12_;
        auVar9._0_4_ = auVar18._0_4_ + auVar8._0_4_;
        insertps(auVar9,auVar9,0x1d);
      }
    }
  }
  else {
    uVar4 = (**(code **)(*this_ptr + 1000))();
    fVar3 = (float)((uint64_t)uVar4 >> 0x20);
    uVar15 = (uint)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    fVar2 = (float)uVar4 + g_0239011c;
    auVar20._0_4_ = (uint)fVar2 & g_023945e0;
    auVar20._4_4_ = (uint)fVar3 & _UNK_023945e4;
    auVar20._8_4_ = (uint)extraout_XMM0_Qb_01 & _UNK_023945e8;
    auVar20._12_4_ = uVar15 & _UNK_023945ec;
    auVar21._4_12_ = SUB1612(auVar20 | ZEXT416(g_02394dc8),4);
    auVar21._0_4_ = SUB164(auVar20 | ZEXT416(g_02394dc8),0) + fVar2;
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    auVar27 = roundss(auVar27,auVar21,0xb);
    fVar28 = fVar3 + g_0239011c;
    fVar2 = (float)(**(code **)(*(int64_t *)this_ptr[8] + 0x390))();
    fVar28 = fVar28 - fVar2;
    auVar18._0_4_ = (uint)fVar28 & g_023945e0;
    auVar18._4_4_ = (uint)fVar3 & _UNK_023945e4;
    auVar18._8_4_ = uVar15 & _UNK_023945e8;
    auVar18._12_4_ = uVar15 & _UNK_023945ec;
    auVar10 = ZEXT416(g_02394dc8);
    auVar19._4_12_ = SUB1612(auVar18 | auVar10,4);
    auVar19._0_4_ = SUB164(auVar18 | auVar10,0) + fVar28;
    auVar18 = roundss(auVar19,auVar19,0xb);
    insertps(auVar27,auVar18,0x10);
    fVar2 = (float)((uint64_t)param_2 >> 0x20);
    uVar15 = (uint)((uint64_t)in_XMM1_Qb >> 0x20);
    fVar3 = (float)param_2 + g_0239011c;
    auVar22._0_4_ = (uint)fVar3 & g_023945e0;
    auVar22._4_4_ = (uint)fVar2 & _UNK_023945e4;
    auVar22._8_4_ = (uint)in_XMM1_Qb & _UNK_023945e8;
    auVar22._12_4_ = uVar15 & _UNK_023945ec;
    auVar23._4_12_ = SUB1612(auVar22 | auVar10,4);
    auVar23._0_4_ = SUB164(auVar22 | auVar10,0) + fVar3;
    auVar18 = roundss(auVar23,auVar23,0xb);
    auVar24._0_4_ = g_023945e0 & (uint)(fVar2 + g_0239011c);
    auVar24._4_4_ = _UNK_023945e4 & (uint)fVar2;
    auVar24._8_4_ = _UNK_023945e8 & uVar15;
    auVar24._12_4_ = _UNK_023945ec & uVar15;
    auVar25._4_12_ = SUB1612(auVar24 | auVar10,4);
    auVar25._0_4_ = SUB164(auVar24 | auVar10,0) + fVar2 + g_0239011c;
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    auVar27 = roundss(auVar10,auVar25,0xb);
    auVar11._0_8_ = (**(code **)(*(int64_t *)this_ptr[8] + 0x390))();
    auVar11._8_8_ = extraout_XMM0_Qb_02;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = (float)auVar11._0_8_ + (float)auVar11._0_8_ + auVar27._0_4_;
    auVar27 = insertps(auVar18,auVar12,0x10);
  }
  blendps(ZEXT416(g_02390124),auVar27,0xe);
  return;
}

