// Function: FUN_002a5e90
// Address: 002a5e90
// Size: 743 bytes
// Class: MDMetaWindowController

void FUN_002a5e90(void)

{
  uint8_t auVar1 [16];
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint64_t uVar10;
  uint64_t uVar15;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  float fVar20;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t in_XMM3 [16];
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint8_t local_c8 [16];
  float local_b8 [4];
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint8_t local_98 [16];
  float local_88 [4];
  uint64_t local_78;
  uint64_t uStack_70;
  uint8_t local_68 [16];
  uint64_t local_58;
  uint8_t local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint8_t local_28 [16];
  
  cVar2 = (**(code **)(*this_ptr + 0xaf0))();
  uVar10 = 0;
  uVar15 = 0;
  local_58._0_4_ = 0.0;
  fVar20 = g_02390124;
  if (cVar2 == '\0') {
    fVar20 = 0.0;
  }
  local_28._0_4_ = fVar20;
  local_78 = *(void*)((int64_t)this_ptr + 0x1dc);
  uStack_70 = 0;
  local_68._0_8_ = (**(code **)(*this_ptr + 0xb00))();
  local_68._8_8_ = extraout_XMM0_Qb;
  local_38 = (float)uVar10;
  fStack_34 = (float)((uint64_t)uVar10 >> 0x20);
  fStack_30 = (float)uVar15;
  fStack_2c = (float)((uint64_t)uVar15 >> 0x20);
  bVar3 = (**(code **)(*this_ptr + 0xae8))();
  local_88[0] = local_38 + local_68._0_4_;
  local_88[1] = fStack_34 + local_68._4_4_;
  local_88[2] = fStack_30 + local_68._8_4_;
  local_88[3] = fStack_2c + local_68._12_4_;
  uVar5 = (uint64_t)bVar3;
  local_98 = local_68;
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  auVar16._0_4_ =
       ((((local_88[uVar5] + g_02390d00) - *(float *)(local_98 + uVar5 * 4)) -
        *(float *)((int64_t)&local_a8 + uVar5 * 4)) + g_02390124) * (float)local_28._0_4_;
  auVar16._4_4_ = auVar16._0_4_;
  auVar16._8_4_ = auVar16._0_4_;
  auVar16._12_4_ = auVar16._0_4_;
  uVar4 = (uint)bVar3;
  auVar7._0_4_ = -(uint)(uVar4 == g_0238fcc0);
  auVar7._4_4_ = -(uint)(uVar4 == _UNK_0238fcc4);
  auVar7._8_4_ = -(uint)(uVar4 == _UNK_0238fcc8);
  auVar7._12_4_ = -(uint)(uVar4 == _UNK_0238fccc);
  local_68 = blendvps(local_68,auVar16,auVar7);
  cVar2 = (**(code **)(*this_ptr + 0xaf0))();
  if (cVar2 == '\0') {
    local_58._0_4_ = g_02390124;
  }
  local_38 = (float)*(void*)((int64_t)this_ptr + 0x1dc);
  fStack_34 = (float)((uint64_t)*(void*)((int64_t)this_ptr + 0x1dc) >> 0x20);
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  local_28._0_8_ = (**(code **)(*this_ptr + 0xb00))();
  local_28._8_8_ = extraout_XMM0_Qb_00;
  _local_48 = auVar16;
  bVar3 = (**(code **)(*this_ptr + 0xae8))();
  local_b8[0] = (float)local_48._0_4_ + local_28._0_4_;
  local_b8[1] = (float)local_48._4_4_ + local_28._4_4_;
  local_b8[2] = fStack_40 + local_28._8_4_;
  local_b8[3] = fStack_3c + local_28._12_4_;
  uVar5 = (uint64_t)bVar3;
  local_c8 = local_28;
  local_d8 = CONCAT44(fStack_34,local_38);
  uStack_d0 = CONCAT44(fStack_2c,fStack_30);
  auVar11._0_4_ =
       ((((g_02390d00 + local_b8[uVar5]) - *(float *)(local_c8 + uVar5 * 4)) -
        *(float *)((int64_t)&local_d8 + uVar5 * 4)) + g_02390124) * (float)local_58;
  auVar11._4_4_ = auVar11._0_4_;
  auVar11._8_4_ = auVar11._0_4_;
  auVar11._12_4_ = auVar11._0_4_;
  uVar4 = (uint)bVar3;
  auVar6._0_4_ = -(uint)(uVar4 == g_0238fcc0);
  auVar6._4_4_ = -(uint)(uVar4 == _UNK_0238fcc4);
  auVar6._8_4_ = -(uint)(uVar4 == _UNK_0238fcc8);
  auVar6._12_4_ = -(uint)(uVar4 == _UNK_0238fccc);
  local_28 = blendvps(local_28,auVar11,auVar6);
  if (this_ptr[0x3d] != 0) {
    local_58 = (**(code **)(*this_ptr + 0xb00))();
    _local_48 = auVar11;
    cVar2 = (**(code **)(*this_ptr + 0xae8))();
    if (cVar2 == '\0') {
      auVar14._0_4_ =
           (float)((uint)(((float)local_78 * g_0239011c + (float)local_68._0_4_) -
                         (local_38 * g_0239011c + (float)local_28._0_4_)) & g_02390140);
      auVar14._4_4_ = local_78._4_4_ & _UNK_02390144;
      auVar14._8_4_ = (uint)uStack_70 & _UNK_02390148;
      auVar14._12_4_ = uStack_70._4_4_ & _UNK_0239014c;
      fVar20 = ((float)local_48._0_4_ - auVar14._0_4_) * g_0239011c;
      auVar8._0_4_ = g_023945e0 & (uint)fVar20;
      auVar8._4_4_ = _UNK_023945e4 & local_48._4_4_;
      auVar8._8_4_ = _UNK_023945e8 & (uint)fStack_40;
      auVar8._12_4_ = _UNK_023945ec & (uint)fStack_3c;
      auVar9._4_12_ = SUB1612(auVar8 | g_023945f0,4);
      auVar9._0_4_ = SUB164(auVar8 | g_023945f0,0) + fVar20;
      auVar7 = roundss(in_XMM3,auVar9,0xb);
      blendps(auVar7,g_023b1620,0xe);
      auVar18._4_4_ = local_48._4_4_;
      auVar18._0_4_ = local_48._4_4_;
      auVar18._8_4_ = fStack_3c;
      auVar18._12_4_ = fStack_3c;
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = (float)local_48._4_4_ + g_023b1608;
      insertps(auVar14,auVar19,0x1c);
    }
    else {
      auVar1._4_4_ = fStack_34;
      auVar1._0_4_ = local_38;
      auVar1._8_4_ = fStack_30;
      auVar1._12_4_ = fStack_2c;
      auVar7 = insertps(auVar1,local_78._4_4_,0xc);
      auVar16 = insertps(local_28,local_68._4_4_,0xc);
      fVar20 = auVar16._4_4_ + auVar7._4_4_ * _UNK_023945d4;
      auVar17._0_4_ =
           (float)((uint)((auVar16._0_4_ + auVar7._0_4_ * g_023945d0) - fVar20) & g_02390140);
      auVar17._4_4_ = (uint)fVar20 & _UNK_02390144;
      auVar17._8_4_ = (uint)(auVar16._8_4_ + auVar7._8_4_ * _UNK_023945d8) & _UNK_02390148;
      auVar17._12_4_ = (uint)(auVar16._12_4_ + auVar7._12_4_ * _UNK_023945dc) & _UNK_0239014c;
      fVar20 = ((float)local_48._4_4_ - auVar17._0_4_) * g_0239011c;
      auVar12._0_4_ = g_023945e0 & (uint)fVar20;
      auVar12._4_4_ = _UNK_023945e4 & local_48._4_4_;
      auVar12._8_4_ = _UNK_023945e8 & (uint)fStack_3c;
      auVar12._12_4_ = _UNK_023945ec & (uint)fStack_3c;
      auVar13._4_12_ = SUB1612(auVar12 | g_023945f0,4);
      auVar13._0_4_ = SUB164(auVar12 | g_023945f0,0) + fVar20;
      auVar7 = roundss(auVar13,auVar13,0xb);
      insertps(g_023b1630,auVar7,0x10);
      insertps(ZEXT416((uint)(g_023b1608 + (float)local_48._0_4_)),auVar17,0x10);
    }
                                            (**(code **)(*(int64_t *)this_ptr[0x3d] + 0x4d0))();
    return;
  }
  return;
}

