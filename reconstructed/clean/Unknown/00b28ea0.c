// Function: FUN_00b28ea0
// Address: 00b28ea0
// Size: 1945 bytes
// Class: Unknown

void FUN_00b28ea0(uint param_1,void*param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int iVar8;
  void*puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  void*puVar13;
  int iVar14;
  void*arg1;
  int64_t *this_ptr;
  int iVar15;
  uint64_t uVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Da;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  int64_t local_68;
  char local_60;
  
  dVar23 = (double)FUN_00b335d0();
  fVar19 = (float)_expf(g_023d59b0 / ((float)(dVar23 / (double)(int)param_1) * g_02394244));
  dVar23 = (double)FUN_00b335d0();
  fVar24 = (float)(dVar23 / (double)(int)param_1);
  fVar20 = (float)_expf(g_023d59b0 / (fVar24 + fVar24));
  uVar7 = FUN_00b33130();
  fVar24 = extraout_XMM0_Da;
  if (0 < (int)uVar7) {
    if ((int)param_1 < 1) {
      uVar16 = 0;
      fVar25 = SQRT(0.0 / (float)(int)param_1);
      fVar24 = fVar25;
      do {
        if (arg1[uVar16] != 0) {
          lVar12 = *(int64_t *)(this_ptr[0x12] + 0x10);
          fVar24 = *(float *)(lVar12 + uVar16 * 4);
          fVar22 = (float)(**(code **)(g_02786500 + 0x10))();
          fVar21 = g_023d59b4;
          uVar18 = -(uint)(fVar22 < fVar24);
          fVar24 = (float)((uint)((fVar24 - fVar22) * fVar19 + fVar22) & uVar18 |
                          ~uVar18 & (uint)fVar22);
          *(uint *)(lVar12 + uVar16 * 4) = ~-(uint)(fVar24 < g_023d59b4) & (uint)fVar24;
          if ((fVar22 != 0.0) || (fVar24 = 0.0, NAN(fVar22))) {
            fVar24 = fVar25;
          }
          fVar24 = (*(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + uVar16 * 4) - fVar24) *
                   fVar20 + fVar24;
          *(uint *)(*(int64_t *)(this_ptr[0x13] + 0x10) + uVar16 * 4) =
               ~-(uint)(fVar24 < fVar21) & (uint)fVar24;
        }
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
    }
    else {
      uVar16 = 0;
      do {
        lVar12 = arg1[uVar16];
        if (lVar12 != 0) {
          lVar5 = *(int64_t *)(this_ptr[0x12] + 0x10);
          fVar24 = *(float *)(lVar5 + uVar16 * 4);
          fVar21 = (float)(**(code **)(g_02786500 + 0x10))();
          fVar25 = g_023d59b4;
          uVar18 = -(uint)(fVar21 < fVar24);
          fVar24 = (float)((uint)((fVar24 - fVar21) * fVar19 + fVar21) & uVar18 |
                          ~uVar18 & (uint)fVar21);
          *(uint *)(lVar5 + uVar16 * 4) = ~-(uint)(fVar24 < g_023d59b4) & (uint)fVar24;
          fVar24 = 0.0;
          if ((fVar21 != 0.0) || (NAN(fVar21))) {
            if ((uint64_t)param_1 - 1 < 3) {
              fVar24 = 0.0;
              uVar11 = 0;
            }
            else {
              fVar24 = 0.0;
              uVar11 = 0;
              do {
                fVar21 = *(float *)(lVar12 + uVar11 * 4);
                fVar22 = *(float *)(lVar12 + 4 + uVar11 * 4);
                fVar2 = *(float *)(lVar12 + 8 + uVar11 * 4);
                fVar3 = *(float *)(lVar12 + 0xc + uVar11 * 4);
                fVar24 = fVar3 * fVar3 + fVar2 * fVar2 + fVar22 * fVar22 + fVar21 * fVar21 + fVar24;
                uVar11 = uVar11 + 4;
              } while ((param_1 & 0xfffffffc) != uVar11);
            }
            if ((uint64_t)(param_1 & 3) != 0) {
              uVar10 = 0;
              do {
                fVar21 = *(float *)(lVar12 + uVar11 * 4 + uVar10 * 4);
                fVar24 = fVar24 + fVar21 * fVar21;
                uVar10 = uVar10 + 1;
              } while ((param_1 & 3) != uVar10);
            }
            fVar24 = SQRT(fVar24 / (float)(int)param_1);
          }
          fVar24 = (*(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + uVar16 * 4) - fVar24) *
                   fVar20 + fVar24;
          *(uint *)(*(int64_t *)(this_ptr[0x13] + 0x10) + uVar16 * 4) =
               ~-(uint)(fVar24 < fVar25) & (uint)fVar24;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar7);
    }
  }
  if (((char)this_ptr[0x14] != '\0') && (this_ptr[0x16] != 0)) {
    puVar13 = *(void**)(this_ptr[0x15] + 0x10);
    if ((0 < (int)param_1) && (0 < (int)uVar7)) {
      uVar16 = 0;
      do {
        uVar11 = 0;
        if (2 < (uint64_t)uVar7 - 1) {
          do {
            *puVar13 = *(void*)(arg1[uVar11] + uVar16 * 4);
            puVar13[1] = *(void*)(arg1[uVar11 + 1] + uVar16 * 4);
            puVar13[2] = *(void*)(arg1[uVar11 + 2] + uVar16 * 4);
            fVar24 = *(float *)(arg1[uVar11 + 3] + uVar16 * 4);
            puVar13[3] = fVar24;
            puVar13 = puVar13 + 4;
            uVar11 = uVar11 + 4;
          } while ((uVar7 & 0xfffffffc) != uVar11);
        }
        if ((uint64_t)(uVar7 & 3) != 0) {
          lVar12 = 0;
          do {
            fVar24 = *(float *)(*(int64_t *)((int64_t)arg1 + lVar12 * 2 + uVar11 * 8) +
                               uVar16 * 4);
            *(float *)((int64_t)puVar13 + lVar12) = fVar24;
            lVar12 = lVar12 + 4;
          } while ((uint64_t)(uVar7 & 3) * 4 - lVar12 != 0);
          puVar13 = (void*)((int64_t)puVar13 + lVar12);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != param_1);
    }
    FUN_00b280b0(fVar24,(int64_t)(int)param_1);
  }
  if ((((this_ptr[0x17] != 0) && (this_ptr[0x19] != 0)) && (this_ptr[0x18] != 0)) &&
     (uVar7 = (**(code **)(*this_ptr + 0x3a8))(), uVar7 == param_1)) {
    iVar8 = (**(code **)(*this_ptr + 0x3a8))();
    FUN_00c8e690();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar6 = *arg1;
    lVar12 = *(int64_t *)(local_68 + 0x10);
    dVar23 = (double)FUN_00b335d0();
    FUN_00e83530(SUB84(dVar23,0),uVar6);
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    iVar15 = *(int *)(this_ptr[0x17] + 0x18);
    iVar14 = iVar15 + 3;
    if (-1 < iVar15) {
      iVar14 = iVar15;
    }
    if (1 < iVar8) {
      uVar16 = 0;
      iVar17 = 0;
      fVar24 = 0.0;
      iVar15 = 0;
      do {
        uVar6 = *(void*)(lVar12 + uVar16 * 8);
        fVar19 = (float)uVar6;
        fVar20 = (float)((uint64_t)uVar6 >> 0x20);
        fVar25 = (float)((uint)fVar20 & g_02390140);
        if ((fVar19 != g_0239424c) || (fVar21 = fVar25, NAN(fVar19) || NAN(g_0239424c))) {
          fVar21 = (float)((uint)fVar19 & g_02390140);
          if ((fVar20 == g_0239424c) && (!NAN(fVar20) && !NAN(g_0239424c))) goto LAB_00b29500;
          if (fVar25 < fVar21) {
            fVar21 = SQRT((fVar25 / fVar21) * (fVar25 / fVar21) + g_02390124) * fVar21;
            goto LAB_00b29500;
          }
          fVar21 = SQRT((fVar21 / fVar25) * (fVar21 / fVar25) + g_02390124) * fVar25;
          if (iVar15 < iVar14 >> 2) goto LAB_00b29509;
LAB_00b29470:
          if (iVar8 / 2 - 1 == uVar16) goto LAB_00b29531;
          if (uVar16 != 0) {
            fVar24 = fVar24 + fVar21;
            iVar17 = iVar17 + 1;
          }
        }
        else {
LAB_00b29500:
          if (iVar14 >> 2 <= iVar15) goto LAB_00b29470;
LAB_00b29509:
          fVar19 = (float)(int)uVar16 * (float)(dVar23 / (double)iVar8);
          pfVar1 = (float *)(*(int64_t *)(this_ptr[0x17] + 0x10) + (int64_t)iVar15 * 4);
          if (fVar19 < *pfVar1 || fVar19 == *pfVar1) goto LAB_00b29470;
LAB_00b29531:
          iVar4 = *(int *)(puVar9 + 3);
          if (iVar17 == 0) {
            FUN_00c8e340(fVar21,1);
            fVar24 = 0.0;
          }
          else {
            FUN_00c8e340(fVar21,1);
            fVar24 = fVar24 / (float)iVar17;
          }
          *(float *)(puVar9[2] + (int64_t)iVar4) = fVar24;
          iVar15 = iVar15 + 1;
          iVar17 = 0;
          fVar24 = 0.0;
        }
        uVar16 = uVar16 + 1;
      } while ((uint)(iVar8 / 2) != uVar16);
    }
    FUN_00d21140();
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  if (arg1 != param_2) {
    FUN_00b32d50(param_1,param_2);
  }
  return;
}

