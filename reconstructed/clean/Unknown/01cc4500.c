// Function: FUN_01cc4500
// Address: 01cc4500
// Size: 773 bytes
// Class: Unknown

void FUN_01cc4500(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  int64_t lVar2;
  void*arg1;
  int64_t *this_ptr;
  uint uVar3;
  uint64_t uVar4;
  float fVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint32_t uVar9;
  uint32_t uVar10;
  uint8_t auVar8 [16];
  uint32_t uVar11;
  float fVar12;
  uint32_t in_XMM3_Dc;
  uint32_t in_XMM3_Dd;
  uint8_t auVar13 [16];
  int64_t local_40;
  char local_38;
  
  auVar13._8_4_ = in_XMM3_Dc;
  auVar13._0_8_ = param_4;
  auVar13._12_4_ = in_XMM3_Dd;
  fVar5 = (float)(**(code **)(*this_ptr + 0x648))();
  if ((g_028b7390 == 0) || (g_028b7399 == '\0')) {
    FUN_00e8cb50();
    if (g_028b7390 == 0) {
      FUN_01cfbee0();
      lVar2 = g_028b7390;
      if (g_028b7390 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar2 = local_40;
        }
        bVar1 = g_028b7390 != 0;
        g_028b7390 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_40;
        }
      }
      if ((lVar2 != 0) && (g_028b7398 == '\0')) {
        g_028b7398 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_40;
      }
      if ((local_38 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      g_028b7399 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7399 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01d48b40();
  if (0.0 < fVar5) {
    fVar12 = auVar13._4_4_;
    auVar6._4_4_ = fVar12;
    auVar6._0_4_ = fVar12;
    auVar6._8_4_ = auVar13._12_4_;
    auVar6._12_4_ = auVar13._12_4_;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = fVar12 + g_023908ec;
    auVar8 = insertps(auVar13,auVar7,0x10);
    uVar3 = 0;
    do {
      uVar4 = -(uint64_t)((double)(int)uVar3 / (double)fVar5 <= g_0241f388);
      fVar12 = (float)(double)(uVar4 & g_023e1698 |
                              ~uVar4 & (uint64_t)SQRT((double)(int)uVar3 / (double)fVar5) &
                                       g_023908f0);
      lVar2 = *param_2;
      FUN_01cfbee0((*(float *)(lVar2 + 0x10) - *(float *)(g_028b7390 + 0x10)) * fVar12 +
                   *(float *)(g_028b7390 + 0x10),
                   (*(float *)(lVar2 + 0x14) - *(float *)(g_028b7390 + 0x14)) * fVar12 +
                   *(float *)(g_028b7390 + 0x14),
                   (*(float *)(lVar2 + 0x18) - *(float *)(g_028b7390 + 0x18)) * fVar12 +
                   *(float *)(g_028b7390 + 0x18),fVar12,auVar8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
      fVar12 = auVar8._0_4_;
      uVar9 = auVar8._4_4_;
      uVar10 = auVar8._8_4_;
      uVar11 = auVar8._12_4_;
      FUN_00d05530();
      if ((uVar3 & 3) == 0) {
        fVar12 = fVar12 + g_02390d34;
      }
      auVar8._4_4_ = uVar9;
      auVar8._0_4_ = fVar12;
      auVar8._8_4_ = uVar10;
      auVar8._12_4_ = uVar11;
      uVar3 = uVar3 + 1;
    } while ((float)(int)uVar3 < fVar5);
  }
  return;
}

