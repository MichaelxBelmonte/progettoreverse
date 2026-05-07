// Function: FUN_01641140
// Address: 01641140
// Size: 2751 bytes
// Class: Unknown

int64_t * FUN_01641140(void* param_1,int64_t *param_2)

{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint32_t uVar12;
  int iVar13;
  int iVar14;
  void *pvVar15;
  int64_t lVar16;
  int64_t lVar17;
  void* pVar18;
  uint uVar19;
  uint uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t *plVar23;
  int64_t *plVar24;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar25;
  int64_t lVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  uint8_t auVar31 [16];
  uint64_t uVar30;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  float fVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  uint8_t local_88 [16];
  int local_68;
  int64_t local_60;
  int64_t local_40;
  char local_38;
  
  plVar23 = (int64_t *)*arg1;
  pVar18 = param_1;
  pvVar15 = _pthread_getspecific(param_1);
  if (pvVar15 != (void *)0x0) {
    plVar23 = (int64_t *)*arg1;
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
  }
  dVar28 = (double)(**(code **)(*plVar23 + 0x370))();
  plVar23 = (int64_t *)*arg1;
  pvVar15 = _pthread_getspecific(pVar18);
  if (pvVar15 != (void *)0x0) {
    plVar23 = (int64_t *)*arg1;
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar23 + 0x378))();
  lVar16 = (int64_t)(int)uVar6;
  iVar2 = *(int *)(*param_2 + 0x18);
  iVar9 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  uVar19 = iVar9 >> 2;
  fVar34 = g_0240e34c;
  if (iVar2 < 4) {
    fVar27 = 0.0;
  }
  else {
    lVar3 = *(int64_t *)(*param_2 + 0x10);
    if ((uint64_t)uVar19 - 1 < 3) {
      fVar27 = 0.0;
      uVar22 = 0;
    }
    else {
      fVar27 = 0.0;
      uVar22 = 0;
      do {
        fVar35 = *(float *)(lVar3 + uVar22 * 4);
        fVar1 = *(float *)(lVar3 + 4 + uVar22 * 4);
        fVar37 = fVar35;
        if (fVar34 <= fVar35) {
          fVar37 = fVar34;
        }
        fVar34 = fVar1;
        if (fVar37 <= fVar1) {
          fVar34 = fVar37;
        }
        fVar37 = *(float *)(lVar3 + 8 + uVar22 * 4);
        fVar38 = fVar37;
        if (fVar34 <= fVar37) {
          fVar38 = fVar34;
        }
        fVar34 = *(float *)(lVar3 + 0xc + uVar22 * 4);
        fVar27 = fVar27 + fVar35 + fVar1 + fVar37 + fVar34;
        if (fVar38 <= fVar34) {
          fVar34 = fVar38;
        }
        uVar22 = uVar22 + 4;
      } while ((uVar19 & 0xfffffffc) != uVar22);
    }
    if ((uint64_t)(uVar19 & 3) != 0) {
      uVar21 = 0;
      do {
        fVar35 = *(float *)(lVar3 + uVar22 * 4 + uVar21 * 4);
        fVar27 = fVar27 + fVar35;
        if (fVar34 <= fVar35) {
          fVar35 = fVar34;
        }
        uVar21 = uVar21 + 1;
        fVar34 = fVar35;
      } while ((uVar19 & 3) != uVar21);
    }
  }
  uVar7 = FUN_00e7d850(dVar28 / (double)(fVar27 / (float)(int)uVar19));
  FUN_00e7d850(dVar28 / (double)fVar34);
  if ((uint64_t)(int64_t)(int)(uVar6 | uVar7) >> 0x20 == 0) {
    uVar8 = uVar6 / uVar7;
    uVar22 = (uint64_t)uVar6 % (uint64_t)uVar7;
  }
  else {
    uVar8 = (int)uVar6 / (int)uVar7;
    uVar22 = lVar16 % (int64_t)(int)uVar7;
  }
  FUN_00c8e710((int64_t)(int)uVar7,uVar22);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  dVar36 = g_0238fee8 / (double)(int)param_1;
  iVar9 = uVar8 + 100;
  uVar8 = 8;
  do {
    uVar10 = uVar8;
    uVar8 = uVar10 * 2;
    if ((int)uVar7 <= (int)uVar10) break;
  } while (uVar10 < 0x2000);
  GNFastFourierTransformer_create();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(int64_t *)(local_40 + 0x10);
  FUN_00e83da0();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  pfVar4 = *(float **)(local_40 + 0x10);
  if (0 < (int64_t)((uint64_t)uVar6 << 0x20)) {
    uVar19 = uVar19 - 1;
    uVar22 = lVar3 + (uint64_t)uVar10 * 4;
    local_60 = -100000;
    local_88 = ZEXT416(0);
    local_68 = 0;
    iVar25 = 0;
    do {
      pVar18 = (void*)uVar22;
      if (iVar9 < local_68) {
        FUN_00c8e7d0();
        iVar9 = iVar9 + 100;
      }
      fVar34 = 0.0;
      if (3 < iVar2) {
        dVar29 = dVar36 * (double)local_88._0_8_;
        pfVar5 = *(float **)(*param_2 + 0x10);
        pVar18 = (void*)dVar29;
        if ((int)pVar18 < 0) {
          fVar34 = *pfVar5;
        }
        else if ((int)pVar18 < (int)uVar19) {
          fVar34 = (pfVar5[(uint64_t)pVar18 + 1] - pfVar5[pVar18]) *
                   ((float)dVar29 - (float)(int)pVar18) + pfVar5[pVar18];
        }
        else {
          fVar34 = pfVar5[uVar19];
        }
      }
      iVar11 = FUN_00e7d850();
      plVar23 = (int64_t *)*arg1;
      pvVar15 = _pthread_getspecific(pVar18);
      if (pvVar15 != (void *)0x0) {
        plVar23 = (int64_t *)*arg1;
        lVar17 = FUN_00e8b990();
        if (lVar17 != 0) {
          plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
        }
      }
      plVar24 = (int64_t *)*arg1;
      pvVar15 = _pthread_getspecific(pVar18);
      if (pvVar15 != (void *)0x0) {
        plVar24 = (int64_t *)*arg1;
        lVar17 = FUN_00e8b990();
        if (lVar17 != 0) {
          plVar24 = (int64_t *)plVar24[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
        }
      }
      uVar12 = (**(code **)(*plVar24 + 0x3a0))();
      auVar31._8_8_ = local_88._8_8_ & _UNK_023945b8 | _UNK_023945c8;
      auVar31._0_8_ =
           (double)(local_88._0_8_ & g_023945b0 | g_023945c0) + (double)local_88._0_8_;
      auVar31 = roundsd(auVar31,auVar31,0xb);
      (**(code **)(*plVar23 + 0x388))
                (0,g_0238fee8,uVar12,(int64_t)auVar31._0_8_ - (int64_t)iVar11);
      if (iVar11 < 1) {
        uVar22 = ___bzero();
      }
      else {
        fVar27 = (float)iVar11 / (float)(int)uVar10;
        uVar22 = (uint64_t)(uint)fVar27;
        uVar7 = iVar11 * 2 - 1;
        uVar21 = 0;
        do {
          fVar35 = (float)(int)uVar21 * fVar27;
          uVar20 = (uint)fVar35;
          if ((int)uVar20 < 0) {
            fVar35 = *pfVar4;
          }
          else if ((int)uVar20 < (int)uVar7) {
            fVar35 = (pfVar4[(uint64_t)uVar20 + 1] - pfVar4[uVar20]) *
                     (fVar35 - (float)(int)uVar20) + pfVar4[uVar20];
          }
          else {
            fVar35 = pfVar4[uVar7];
          }
          *(float *)(lVar3 + uVar21 * 4) = fVar35;
          uVar21 = uVar21 + 1;
        } while (uVar8 != uVar21);
      }
      uVar30 = (**(code **)(g_02786500 + 0x38))(uVar22,uVar8);
      uVar30 = (**(code **)(g_02786500 + 0x28))(uVar30,(uint64_t)uVar10);
      FUN_00e83530(uVar30,lVar3);
      fVar27 = (float)_atan2f();
      auVar32._0_8_ = (double)fVar27 / g_024113c0;
      auVar32._8_8_ = extraout_XMM0_Qb;
      auVar33._4_12_ = auVar32._4_12_;
      for (fVar27 = (float)auVar32._0_8_ + g_02390118; fVar27 < g_02390118;
          fVar27 = fVar27 + g_02390124) {
      }
      auVar33._0_4_ = fVar27 * (float)iVar11;
      iVar13 = FUN_00e7d780(auVar33._0_8_);
      iVar14 = iVar11 / 2;
      lVar17 = (int64_t)iVar13 + (int64_t)auVar31._0_8_;
      uVar20 = iVar13 - iVar25;
      uVar22 = (uint64_t)uVar20;
      uVar7 = -uVar20;
      if (0 < (int)uVar20) {
        uVar7 = uVar20;
      }
      if ((iVar14 < (int)uVar7) && (iVar25 * iVar13 < 0)) {
        if (0 < (int)uVar20) {
          lVar26 = lVar17 - iVar11;
          uVar22 = local_60 + iVar14;
          if (((int64_t)uVar22 < lVar26) && (lVar26 < lVar16)) {
            iVar25 = *(int *)(local_40 + 0x18);
            FUN_00c8e340((int64_t)iVar25,1);
            *(int64_t *)(*(int64_t *)(local_40 + 0x10) + (int64_t)iVar25) = lVar26;
            local_68 = local_68 + 1;
            uVar22 = iVar14 + lVar26;
            local_60 = lVar26;
          }
          if (((int64_t)uVar22 < lVar17) && (lVar17 < lVar16)) {
            iVar25 = *(int *)(local_40 + 0x18);
            FUN_00c8e340(uVar22,1);
            goto LAB_01641ad3;
          }
        }
      }
      else if ((iVar14 + local_60 < lVar17) && (lVar17 < lVar16)) {
        iVar25 = *(int *)(local_40 + 0x18);
        FUN_00c8e340(uVar22,1);
LAB_01641ad3:
        uVar22 = (uint64_t)iVar25;
        *(int64_t *)(*(int64_t *)(local_40 + 0x10) + uVar22) = lVar17;
        local_68 = local_68 + 1;
        local_60 = lVar17;
      }
      fVar27 = 0.0;
      if (3 < iVar2) {
        dVar29 = ((dVar28 / (double)fVar34) * g_023942d0 + (double)local_88._0_8_) * dVar36;
        pfVar5 = *(float **)(*param_2 + 0x10);
        uVar7 = (uint)dVar29;
        uVar22 = (uint64_t)uVar7;
        if ((int)uVar7 < 0) {
          fVar27 = *pfVar5;
        }
        else if ((int)uVar7 < (int)uVar19) {
          uVar22 = (uint64_t)uVar7;
          fVar27 = (pfVar5[uVar22 + 1] - pfVar5[uVar22]) * ((float)dVar29 - (float)(int)uVar7) +
                   pfVar5[uVar22];
        }
        else {
          fVar27 = pfVar5[uVar19];
        }
      }
      uVar12 = local_88._12_4_;
      dVar29 = (double)local_88._0_8_ + dVar28 / (double)fVar27;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ = dVar29;
      local_88._12_4_ = uVar12;
      iVar25 = iVar13;
    } while (dVar29 < (double)(int)uVar6);
  }
  FUN_00e83070();
  FUN_00c8e7d0();
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return this_ptr;
}

