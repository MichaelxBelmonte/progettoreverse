// Function: FUN_01d39830
// Address: 01d39830
// Size: 705 bytes
// Class: Unknown

void FUN_01d39830(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

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
  void*puVar10;
  void*this_ptr;
  float fVar11;
  float fVar12;
  float fVar18;
  uint64_t in_XMM0_Qb;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar19;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar20;
  float fVar21;
  float fVar22;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float local_78;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_48;
  float local_38;
  float local_1c;
  
  fVar20 = (float)((uint64_t)param_2 >> 0x20);
  fStack_64 = (float)((uint64_t)param_1 >> 0x20);
  fStack_60 = (float)in_XMM0_Qb;
  fStack_5c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_02680400;
  *(void*)((int64_t)puVar10 + 0xc) = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  *(void*)((int64_t)puVar10 + 0x39) = 0;
  *(void*)((int64_t)puVar10 + 0x41) = 0;
  FUN_00d500e0();
  fVar11 = g_023945d0 * (float)param_2 + g_023b5dd0;
  fVar18 = _UNK_023945d4 * fVar20 + _UNK_023b5dd4;
  if (fVar18 <= fVar11) {
    local_48 = fVar18;
    if (param_3 <= fVar18) {
      local_48 = param_3;
    }
    local_78 = fVar18;
    if (param_4 <= fVar18) {
      local_78 = param_4;
    }
    local_38 = fVar18;
    if (in_XMM4_Da <= fVar18) {
      local_38 = in_XMM4_Da;
    }
    local_1c = in_XMM5_Da;
    if (fVar18 < in_XMM5_Da) {
      local_1c = fVar18;
    }
  }
  else {
    local_48 = fVar11;
    if (param_3 <= fVar11) {
      local_48 = param_3;
    }
    local_78 = fVar11;
    if (param_4 <= fVar11) {
      local_78 = param_4;
    }
    local_38 = fVar11;
    if (in_XMM4_Da <= fVar11) {
      local_38 = in_XMM4_Da;
    }
    local_1c = in_XMM5_Da;
    if (fVar11 < in_XMM5_Da) {
      local_1c = fVar11;
    }
  }
  auVar5._8_4_ = fStack_60;
  auVar5._0_8_ = param_1;
  auVar5._12_4_ = fStack_5c;
  fVar11 = (float)param_1;
  auVar13._4_12_ = auVar5._4_12_;
  auVar13._0_4_ = fVar11 + local_48;
  FUN_01d39180(auVar13._0_8_);
  auVar6._8_4_ = fStack_60;
  auVar6._0_8_ = param_1;
  auVar6._12_4_ = fStack_5c;
  fVar20 = fStack_64 + fVar20;
  fVar21 = fStack_60 + in_XMM1_Dc;
  fVar22 = fStack_5c + in_XMM1_Dd;
  fVar18 = fVar11 + (float)param_2 + g_02390d00;
  auVar14._4_4_ = fVar20;
  auVar14._0_4_ = fVar18 - local_78;
  auVar14._8_4_ = fVar21;
  auVar14._12_4_ = fVar22;
  auVar14 = blendps(auVar6,auVar14,1);
  FUN_01d38830(auVar14._0_8_);
  if ((local_78 != 0.0) || (NAN(local_78))) {
    FUN_01d39310();
  }
  fVar12 = fVar20 + g_02390d00;
  fVar19 = fVar12 - local_38;
  auVar3._4_4_ = fVar20;
  auVar3._0_4_ = fVar18;
  auVar3._8_4_ = fVar21;
  auVar3._12_4_ = fVar22;
  auVar1._4_4_ = fVar20;
  auVar1._0_4_ = fVar19;
  auVar1._8_4_ = fVar22;
  auVar1._12_4_ = fVar22;
  auVar14 = insertps(auVar3,auVar1,0x10);
  FUN_01d38830(auVar14._0_8_);
  if ((local_38 != 0.0) || (NAN(local_38))) {
    auVar4._4_4_ = fVar20;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar21;
    auVar4._12_4_ = fVar22;
    auVar15._4_12_ = auVar4._4_12_;
    auVar15._0_4_ = fVar18 - local_38;
    FUN_01d39310(auVar15._0_8_,fVar19,local_38,0);
  }
  auVar7._8_4_ = fStack_60;
  auVar7._0_8_ = param_1;
  auVar7._12_4_ = fStack_5c;
  auVar16._4_12_ = auVar7._4_12_;
  auVar16._0_4_ = fVar11 + local_1c;
  auVar14 = insertps(auVar16,fVar12,0x10);
  FUN_01d38830(auVar14._0_8_);
  if ((local_1c != 0.0) || (NAN(local_1c))) {
    FUN_01d39310();
  }
  auVar8._8_4_ = fStack_60;
  auVar8._0_8_ = param_1;
  auVar8._12_4_ = fStack_5c;
  auVar2._4_4_ = fStack_64;
  auVar2._0_4_ = fStack_64 + local_48;
  auVar2._8_4_ = fStack_5c;
  auVar2._12_4_ = fStack_5c;
  auVar14 = insertps(auVar8,auVar2,0x10);
  FUN_01d38830(auVar14._0_8_);
  if ((local_48 != 0.0) || (NAN(local_48))) {
    auVar9._8_4_ = fStack_60;
    auVar9._0_8_ = param_1;
    auVar9._12_4_ = fStack_5c;
    auVar17._4_12_ = auVar9._4_12_;
    auVar17._0_4_ = fVar11 + local_48;
    FUN_01d39310(auVar17._0_8_,fStack_64 + local_48,local_48,g_02410f88);
  }
  puVar10[7] = param_1;
  puVar10[8] = param_2;
  *(void*)(puVar10 + 9) = 1;
  *this_ptr = puVar10;
  *(void*)(this_ptr + 1) = 1;
  return;
}

