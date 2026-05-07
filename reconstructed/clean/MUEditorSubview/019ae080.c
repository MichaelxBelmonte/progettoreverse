// Function: FUN_019ae080
// Address: 019ae080
// Size: 562 bytes
// Class: MUEditorSubview

void FUN_019ae080(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  char in_DL;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  float fVar6;
  double dVar7;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint32_t in_XMM1_Dd;
  uint8_t local_48 [24];
  uint64_t uVar8;
  
  fVar6 = (float)((uint64_t)param_2 >> 0x20);
  lVar4 = *arg1;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0xc) < 1) {
      local_48._0_8_ = 0;
    }
    else {
      lVar5 = 0;
      local_48._0_16_ = ZEXT816(0);
      auVar9._0_4_ = 0.0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        fVar6 = (float)(**(code **)(*this_ptr + 0xc38))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        fVar1 = fVar6;
        if (lVar5 == 0) {
          local_48._0_16_ = ZEXT416((uint)fVar6);
        }
        else {
          if (auVar9._0_4_ <= fVar6) {
            fVar1 = auVar9._0_4_;
          }
          if ((float)local_48._0_4_ < fVar6) {
            local_48._0_16_ = ZEXT416((uint)fVar6);
          }
        }
        in_XMM1_Dd = 0;
        fVar6 = 0.0;
        lVar5 = lVar5 + 1;
        lVar4 = *arg1;
        auVar9._0_4_ = fVar1;
      } while (lVar5 < *(int *)(lVar4 + 0xc));
      auVar9 = insertps(local_48._0_16_,fVar1,0x10);
      local_48._0_8_ = auVar9._0_8_;
    }
    FUN_01e436c0();
    if (g_023908ec <= fVar6) {
      dVar7 = (double)(**(code **)(*this_ptr + 0x928))();
      if (in_DL == '\0') {
        auVar3._4_4_ = fVar6;
        auVar3._0_4_ = fVar6;
        auVar3._8_4_ = in_XMM1_Dd;
        auVar3._12_4_ = in_XMM1_Dd;
        auVar11._4_12_ = auVar3._4_12_;
        auVar11._0_4_ =
             fVar6 / (((float)local_48._0_4_ + g_0241b5b0) -
                     ((float)local_48._4_4_ + _UNK_0241b5b4));
        uVar8 = auVar11._0_8_;
      }
      else {
        auVar2._4_4_ = fVar6;
        auVar2._0_4_ = fVar6;
        auVar2._8_4_ = in_XMM1_Dd;
        auVar2._12_4_ = in_XMM1_Dd;
        do {
          local_48._0_4_ = (float)local_48._0_4_ + g_0241b5b0;
          local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5b4;
          auVar10._4_12_ = auVar2._4_12_;
          auVar10._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
          uVar8 = auVar10._0_8_;
        } while ((float)dVar7 < auVar10._0_4_ * g_0241b644);
        auVar9._0_4_ = auVar10._0_4_;
        if (in_DL != '\0') {
          while (g_023908e0 * auVar9._0_4_ < g_02390d28) {
            local_48._0_4_ = (float)local_48._0_4_ + g_0241b5c0;
            local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5c4;
            auVar9._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
            auVar9._4_12_ = auVar10._4_12_;
            uVar8 = auVar9._0_8_;
          }
        }
      }
      (**(code **)(*this_ptr + 0xc08))(uVar8);
      (**(code **)(*this_ptr + 0x540))();
      (**(code **)(*this_ptr + 0xa48))();
      FUN_00e7b4f0();
      (**(code **)(*this_ptr + 0xaa0))();
    }
  }
  return;
}

