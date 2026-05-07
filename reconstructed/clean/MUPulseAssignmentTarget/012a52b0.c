// Function: FUN_012a52b0
// Address: 012a52b0
// Size: 547 bytes
// Class: MUPulseAssignmentTarget

void FUN_012a52b0(void)

{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  int iVar5;
  float fVar9;
  float fVar11;
  uint8_t in_XMM0 [16];
  float fVar13;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  int iVar10;
  int iVar12;
  int iVar14;
  uint8_t auVar8 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t local_48 [16];
  int64_t local_38;
  char local_30;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  if ((g_028ac5a8 == 0) || (g_028ac5b1 == '\0')) {
    FUN_00e8cb50();
    if (g_028ac5a8 == 0) {
      FUN_00c8e690();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar2 = g_028ac5a8;
      if ((g_028ac5a8 != local_38) && (g_028ac5a8 = local_38, lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        if (g_028ac5b0 == '\0') {
          g_028ac5b0 = '\x01';
          FUN_00e8cb90();
        }
        if (local_38 != 0 && lVar2 == local_38) {
          FUN_00d50b20();
        }
      }
      lVar2 = *(int64_t *)(g_028ac5a8 + 0x10);
      lVar3 = 0;
      iVar5 = g_0238fcc0;
      iVar10 = _UNK_0238fcc4;
      iVar12 = _UNK_0238fcc8;
      iVar14 = _UNK_0238fccc;
      do {
        auVar15._0_4_ = (float)iVar5;
        auVar15._4_4_ = (float)iVar10;
        auVar15._8_4_ = (float)iVar12;
        auVar15._12_4_ = (float)iVar14;
        auVar16 = divps(auVar15,g_0240d0b0);
        fVar4 = (auVar16._0_4_ + g_023b2d50) * g_0240d0c0;
        fVar9 = (auVar16._4_4_ + _UNK_023b2d54) * _UNK_0240d0c4;
        fVar11 = (auVar16._8_4_ + _UNK_023b2d58) * _UNK_0240d0c8;
        fVar13 = (auVar16._12_4_ + _UNK_023b2d5c) * _UNK_0240d0cc;
        local_48._0_8_ = _powf();
        local_48._8_8_ = extraout_XMM0_Qb;
        auVar16._0_8_ = _powf();
        auVar16._8_8_ = extraout_XMM0_Qb_00;
        auVar16 = insertps(local_48,auVar16,0x10);
        auVar6._0_8_ = _powf();
        auVar6._8_8_ = extraout_XMM0_Qb_01;
        auVar16 = insertps(auVar16,auVar6,0x20);
        auVar7._0_8_ = _powf();
        auVar7._8_8_ = extraout_XMM0_Qb_02;
        auVar16 = insertps(auVar16,auVar7,0x30);
        pfVar1 = (float *)(lVar2 + lVar3 * 4);
        *pfVar1 = auVar16._0_4_ * fVar4;
        pfVar1[1] = auVar16._4_4_ * fVar9;
        pfVar1[2] = auVar16._8_4_ * fVar11;
        pfVar1[3] = auVar16._12_4_ * fVar13;
        lVar3 = lVar3 + 4;
        iVar5 = iVar5 + g_02394180;
        iVar10 = iVar10 + _UNK_02394184;
        iVar12 = iVar12 + _UNK_02394188;
        iVar14 = iVar14 + _UNK_0239418c;
      } while (lVar3 != 200);
      g_028ac5b1 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
    else {
      g_028ac5b1 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
  }
  auVar8._4_12_ = in_XMM0._4_12_;
  auVar8._0_4_ = in_XMM0._0_4_ * g_02390d38;
  FUN_00e7d780(auVar8._0_8_);
  return;
}

