// Function: FUN_01f7b740
// Address: 01f7b740
// Size: 645 bytes
// Class: GNRadialColorGradient

void FUN_01f7b740(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  int64_t local_40;
  char local_38;
  
  FUN_01f7b490();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = *arg1;
  lVar2 = *param_2;
  fVar3 = (*(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10)) * param_1 + *(float *)(lVar1 + 0x10)
  ;
  if ((*(float *)(local_40 + 0x10) != fVar3) || (NAN(*(float *)(local_40 + 0x10)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x10) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x10) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x10) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar4._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar4,auVar4,0xb);
    *(uint *)(local_40 + 0xc) =
         (int)(int64_t)auVar4._0_4_ << 0x10 | *(uint *)(local_40 + 0xc) & 0xff00ffff;
  }
  fVar3 = (*(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14)) * param_1 + *(float *)(lVar1 + 0x14)
  ;
  if ((*(float *)(local_40 + 0x14) != fVar3) || (NAN(*(float *)(local_40 + 0x14)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x14) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x14) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x14) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar5,auVar5,0xb);
    *(uint *)(local_40 + 0xc) =
         (int)(int64_t)auVar4._0_4_ << 8 | *(uint *)(local_40 + 0xc) & 0xffff00ff;
  }
  fVar3 = (*(float *)(lVar2 + 0x18) - *(float *)(lVar1 + 0x18)) * param_1 + *(float *)(lVar1 + 0x18)
  ;
  if ((*(float *)(local_40 + 0x18) != fVar3) || (NAN(*(float *)(local_40 + 0x18)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x18) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x18) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x18) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar6._4_12_ = auVar4._4_12_;
    auVar6._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar6,auVar6,0xb);
    *(uint *)(local_40 + 0xc) =
         (uint)(int64_t)auVar4._0_4_ | *(uint *)(local_40 + 0xc) & 0xffffff00;
  }
  fVar3 = (*(float *)(lVar2 + 0x1c) - *(float *)(lVar1 + 0x1c)) * param_1 + *(float *)(lVar1 + 0x1c)
  ;
  if ((*(float *)(local_40 + 0x1c) != fVar3) || (NAN(*(float *)(local_40 + 0x1c)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x1c) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x1c) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x1c) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar7._4_12_ = auVar4._4_12_;
    auVar7._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar7,auVar7,0xb);
    *(char *)(local_40 + 0xf) = (char)(int64_t)auVar4._0_4_;
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}

