// Function: FUN_015b8b30
// Address: 015b8b30
// Size: 970 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_015b8b30(uint64_t param_1,char param_2)

{
  double dVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  void *pvVar5;
  void* in_ECX;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  uint32_t uVar10;
  uint32_t in_XMM0_Dc;
  uint32_t in_XMM0_Dd;
  float fVar12;
  uint64_t uVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float fVar17;
  uint8_t auVar18 [12];
  float fVar19;
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  float local_3c;
  float local_38;
  float local_34;
  uint64_t uVar11;
  
  fVar8 = (float)param_1;
  uStack_50 = in_XMM0_Dc;
  local_58 = param_1;
  uStack_4c = in_XMM0_Dd;
  lVar6 = (int64_t)unaff_ESI;
  fVar12 = *(float *)(this_ptr + 0x90);
  local_3c = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar6 * 4);
  uVar11 = FUN_015bcfa0(local_3c,&local_3c);
  uVar13 = uVar11 >> 0x20;
  fVar9 = (float)uVar11;
  auVar18 = local_58._4_12_;
  fVar19 = (float)(~-(uint)(fVar8 < g_02394274) & (uint)fVar8 |
                  -(uint)(fVar8 < g_02394274) & (uint)g_02390d34);
  if (fVar19 < g_02390124) {
    fVar19 = g_02390124 / fVar19;
  }
  fVar17 = g_02390d34;
  if (fVar19 <= g_02390d34) {
    fVar17 = fVar19;
  }
  local_38 = local_3c /
             *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar6 * 4);
  fVar17 = g_02390d34 - fVar17;
  uVar3 = uVar11;
  if (0.0 < fVar9) {
    if (fVar9 <= g_02390124) {
      fVar17 = 0.0;
      uVar3 = 0;
    }
    else {
      local_38 = g_02390124 / local_38;
      fVar19 = fVar9 + g_02390d00 + fVar9 + g_02390d00;
      uVar11 = (uint64_t)(uint)(g_02390d34 - fVar9);
      uVar3 = CONCAT44(_UNK_023945e4 ^ (uint)uVar13,(float)(g_023945e0 ^ (uint)fVar19) * fVar19);
    }
  }
  auVar14._0_4_ =
       fVar8 / *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x10) + lVar6 * 4);
  auVar14._4_12_ = auVar18;
  uVar13 = auVar14._0_8_;
  if (*(int *)(this_ptr + 0x40) == 3) {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_34 = (float)FUN_017f2da0();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_017f2d90();
    local_34 = local_34 * (float)iVar4;
    fVar19 = (float)_exp2f((float)(unaff_ESI + 0x23) * g_023908e0 * g_023941f4);
    fVar8 = (fVar19 * g_023941f8) / local_34;
    fVar19 = local_34;
  }
  else {
    fVar8 = (float)unaff_ESI;
    fVar19 = local_34;
  }
  local_34 = fVar8;
  if ((0 < unaff_ESI) && (0.0 < local_34)) {
    fVar12 = (float)_powf(local_34,CONCAT44(_UNK_023945e4,
                                            (uint)(g_02390d34 - (fVar12 + fVar12 + g_02390d00))
                                            ^ g_023945e0));
    fVar12 = auVar14._0_4_ / (fVar12 * local_34);
    if (g_0239424c < fVar17) {
      uVar10 = _powf(local_38);
      fVar19 = (float)_powf(uVar10,uVar3);
      fVar12 = fVar12 / fVar19;
    }
    auVar15._4_12_ = auVar18;
    auVar15._0_4_ = fVar12;
    uVar13 = auVar15._0_8_;
    fVar19 = local_34;
    if (0.0 < (float)uVar11) {
      fVar19 = (float)_powf(local_34,*(void*)(this_ptr + 0x98));
      fVar19 = (g_02390124 / fVar19) /
               *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar6 * 4);
      if ((*(int *)(this_ptr + 0x40) == 3) && (local_34 < g_02390124)) {
        fVar19 = (float)_powf(fVar19,local_34 * local_34);
      }
      fVar19 = (float)_powf(fVar19,uVar11);
      auVar16._0_4_ = fVar12 / fVar19;
      auVar16._4_12_ = auVar18;
      uVar13 = auVar16._0_8_;
      fVar19 = local_34;
    }
  }
  local_34 = fVar19;
  if (param_2 != '\0') {
    dVar1 = (double)(float)uVar13;
    if ((0 < unaff_ESI) && (g_023e16a0 <= dVar1)) {
      fVar12 = *(float *)(this_ptr + 0x94) + g_02390124;
      uVar2 = -(uint)(fVar12 < g_02390124) & (uint)(fVar12 + fVar12 + g_02390d00) |
              ~-(uint)(fVar12 < g_02390124) & (uint)fVar12;
      uVar7 = -(uint)((float)(uVar2 & g_02390140) < g_02394254);
      fVar12 = (float)(uVar7 & (uint)g_02394254 | ~uVar7 & uVar2);
      if (g_02394274 <= (float)(g_02390140 & (uint)fVar12)) {
        dVar1 = (double)_log();
        dVar1 = (double)_exp(SUB84(dVar1 / (double)fVar12,0));
      }
    }
    uVar13 = (uint64_t)(uint)(float)dVar1;
  }
  return CONCAT44((int)(uVar13 >> 0x20),
                  (float)uVar13 *
                  *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar6 * 4));
}

