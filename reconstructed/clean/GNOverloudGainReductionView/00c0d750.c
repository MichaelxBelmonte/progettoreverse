// Function: FUN_00c0d750
// Address: 00c0d750
// Size: 2435 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0d750(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  uint64_t uVar2;
  double dVar3;
  double dVar4;
  void*puVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  void*puVar10;
  int64_t lVar11;
  void *pvVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint uVar15;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t in_R8;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint32_t uVar19;
  float fVar20;
  uint32_t uVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double in_XMM4_Qa;
  double local_80;
  int local_64;
  void*local_50;
  void*local_48;
  
  if ((in_XMM4_Qa != 0.0) || (NAN(in_XMM4_Qa))) {
    local_48 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_48 = &g_025683c0;
    pcVar7 = g_025683d8;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_50 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_50 = &g_025683c0;
    (*pcVar7)();
    FUN_00c92170();
    FUN_00c92160();
    local_80 = (param_2 * in_XMM4_Qa) / param_4;
    lVar14 = *(int64_t *)(this_ptr + 200);
  }
  else {
    local_50 = (void*)0x0;
    local_48 = (void*)0x0;
    local_80 = 0.0;
    lVar14 = *(int64_t *)(this_ptr + 200);
  }
  if ((lVar14 != 0) && (7 < (int)*(uint *)(lVar14 + 0x18))) {
    dVar24 = param_3 + param_4 + in_XMM4_Qa;
    uVar15 = *(uint *)(lVar14 + 0x18) >> 3;
    uVar13 = (uint64_t)(uVar15 - 1);
    if ((in_XMM4_Qa != 0.0) || (NAN(in_XMM4_Qa))) {
      pvVar12 = (void *)(uint64_t)(uVar15 * 4 - 4);
      lVar14 = *(int64_t *)(lVar14 + 0x10);
      dVar3 = *(double *)(lVar14 + uVar13 * 8);
      uVar19 = SUB84(dVar3,0);
      uVar21 = (uint32_t)((uint64_t)dVar3 >> 0x20);
      while( true ) {
        if ((param_3 <= dVar3) &&
           ((double)CONCAT44(uVar21,uVar19) <= dVar24 && dVar24 != (double)CONCAT44(uVar21,uVar19)))
        {
          if ((double)CONCAT44(uVar21,uVar19) <= param_3 + in_XMM4_Qa &&
              param_3 + in_XMM4_Qa != (double)CONCAT44(uVar21,uVar19)) {
            iVar9 = *(int *)(local_48 + 3);
            FUN_00c8e340(uVar19,1);
            puVar10 = (void*)local_48[2];
            _memmove(pvVar12,(void *)(int64_t)iVar9,(size_t)in_R8);
            uVar2 = *(void*)(lVar14 + uVar13 * 8);
            *puVar10 = uVar2;
            lVar14 = *(int64_t *)(*(int64_t *)(this_ptr + 0xd0) + 0x10);
            iVar9 = *(int *)(local_50 + 3);
            FUN_00c8e340((int)uVar2,1);
            puVar5 = (void*)local_50[2];
            _memmove(pvVar12,(void *)(int64_t)iVar9,(size_t)in_R8);
            *puVar5 = *(void*)(lVar14 + uVar13 * 4);
          }
          FUN_00e7b4e0();
          FUN_00c921e0();
          FUN_00e7b4e0();
          FUN_00c921e0();
        }
        if ((int)uVar13 < 1) break;
        uVar13 = uVar13 - 1;
        lVar14 = *(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10);
        dVar3 = *(double *)(lVar14 + uVar13 * 8);
        uVar19 = SUB84(dVar3,0);
        uVar21 = (uint32_t)((uint64_t)dVar3 >> 0x20);
      }
    }
    else {
      dVar3 = *(double *)(*(int64_t *)(lVar14 + 0x10) + uVar13 * 8);
      uVar19 = SUB84(dVar3,0);
      uVar21 = (uint32_t)((uint64_t)dVar3 >> 0x20);
      while( true ) {
        if ((param_3 <= dVar3) &&
           ((double)CONCAT44(uVar21,uVar19) <= dVar24 && dVar24 != (double)CONCAT44(uVar21,uVar19)))
        {
          FUN_00e7b4e0();
          FUN_00c921e0();
          FUN_00e7b4e0();
          FUN_00c921e0();
        }
        if ((int)uVar13 < 1) break;
        uVar13 = uVar13 - 1;
        dVar3 = *(double *)(*(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10) + uVar13 * 8);
        uVar19 = SUB84(dVar3,0);
        uVar21 = (uint32_t)((uint64_t)dVar3 >> 0x20);
      }
    }
  }
  lVar14 = *(int64_t *)(*arg1 + 200);
  if (lVar14 != 0) {
    iVar9 = *(int *)(lVar14 + 0x18);
    iVar8 = iVar9 + 7;
    if (-1 < iVar9) {
      iVar8 = iVar9;
    }
    if (iVar9 < 8) goto LAB_00c0dd5d;
    iVar9 = -1;
    uVar13 = 0;
    uVar15 = 0xffffffff;
    do {
      if ((iVar9 == -1) &&
         (iVar9 = -1, param_1 <= *(double *)(*(int64_t *)(lVar14 + 0x10) + uVar13 * 8))) {
        iVar9 = (int)uVar13;
      }
      if ((uVar15 == 0xffffffff) &&
         (uVar15 = 0xffffffff,
         param_1 + param_2 + local_80 <= *(double *)(*(int64_t *)(lVar14 + 0x10) + uVar13 * 8))) {
        uVar15 = (int)uVar13 - 1;
      }
      uVar13 = uVar13 + 1;
    } while ((uint)(iVar8 >> 3) != uVar13);
    if (iVar9 == -1) goto LAB_00c0dd5d;
    uVar18 = (iVar8 >> 3) - 1;
    if (uVar15 != 0xffffffff) {
      uVar18 = uVar15;
    }
    uVar13 = (uint64_t)uVar18;
    lVar14 = *(int64_t *)(this_ptr + 200);
    if (lVar14 == 0) {
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025683c0;
      pcVar7 = g_025683d8;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      lVar14 = *(int64_t *)(this_ptr + 200);
      *(void**)(this_ptr + 200) = puVar10;
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025683c0;
      (*pcVar7)();
      FUN_00c92170();
      FUN_00c92160();
      lVar14 = *(int64_t *)(this_ptr + 0xd0);
      *(void**)(this_ptr + 0xd0) = puVar10;
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      iVar8 = 0;
    }
    else {
      FUN_00d50b00();
      iVar8 = FUN_00e96fd0(SUB84(param_3,0));
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      iVar8 = iVar8 + 1;
    }
    if (iVar9 <= (int)uVar18) {
      lVar14 = (int64_t)iVar9;
      iVar16 = iVar8 * 4;
      local_80._0_4_ = iVar8 * -4;
      iVar17 = iVar8 * 8;
      iVar8 = iVar8 * -8;
      local_64 = (uVar18 - iVar9) + 1;
      do {
        puVar10 = *(void**)(*(int64_t *)(*arg1 + 200) + 0x10);
        fVar25 = *(float *)(*(int64_t *)(*(int64_t *)(*arg1 + 0xd0) + 0x10) + lVar14 * 4);
        dVar24 = (((double)puVar10[lVar14] - param_1) / param_2) * param_4 + param_3;
        fVar20 = SUB84(dVar24,0);
        fVar26 = fVar25;
        if ((((in_XMM4_Qa == g_02390448) && (!NAN(in_XMM4_Qa) && !NAN(g_02390448))) ||
            (*(int *)(local_48 + 3) + 7U < 0xf)) ||
           (fVar26 = SUB84(param_3 + in_XMM4_Qa,0), param_3 + in_XMM4_Qa <= dVar24))
        goto LAB_00c0e013;
        iVar9 = FUN_00e96fd0(fVar20);
        if (iVar9 == -1) {
          iVar9 = 0;
          if (dVar24 < *(double *)local_48[2]) goto LAB_00c0def0;
          uVar15 = *(uint *)(local_48 + 3);
          pdVar1 = (double *)((int64_t)(int)uVar15 + -8 + (int64_t)local_48[2]);
          puVar10 = local_48;
          fVar26 = fVar20;
          if (*pdVar1 <= dVar24 && dVar24 != *pdVar1) {
            uVar18 = uVar15;
            if ((int)uVar15 < 0) {
              uVar18 = uVar15 + 7;
            }
            if (0xe < uVar15 + 7) {
              iVar9 = ((int)uVar18 >> 3) + -1;
              goto LAB_00c0def0;
            }
          }
        }
        else {
LAB_00c0def0:
          if ((int)*(uint *)(local_48 + 3) < 0x10) {
            fVar26 = *(float *)local_50[2];
          }
          else {
            lVar11 = (int64_t)
                     (int)(iVar9 - (uint)((int)((*(uint *)(local_48 + 3) >> 3) - 1) <= iVar9));
            dVar3 = *(double *)(local_48[2] + lVar11 * 8);
            dVar4 = *(double *)(local_48[2] + 8 + lVar11 * 8);
            puVar10 = (void*)local_50[2];
            fVar23 = *(float *)((int64_t)puVar10 + lVar11 * 4);
            fVar26 = *(float *)((int64_t)puVar10 + lVar11 * 4 + 4);
            fVar22 = fVar26 - fVar23;
            if (dVar24 <= (dVar3 + dVar4) * g_023942d0) {
              fVar26 = fVar23 + fVar22 * (float)((dVar24 - dVar3) / (dVar4 - dVar3));
            }
            else {
              fVar26 = fVar26 + fVar22 * (float)((dVar24 - dVar4) / (dVar4 - dVar3));
            }
          }
          fVar23 = (float)((dVar24 - param_3) / in_XMM4_Qa);
          fVar25 = fVar25 * fVar23 + (g_02390124 - fVar23) * fVar26;
        }
LAB_00c0e013:
        lVar11 = *(int64_t *)(this_ptr + 200);
        iVar9 = *(int *)(lVar11 + 0x18);
        FUN_00c8e340(fVar26,1);
        lVar11 = *(int64_t *)(lVar11 + 0x10);
        _memmove(puVar10,(void *)(int64_t)(iVar9 + iVar8),(size_t)uVar13);
        *(double *)(lVar11 + iVar17) = dVar24;
        lVar11 = *(int64_t *)(this_ptr + 0xd0);
        iVar9 = *(int *)(lVar11 + 0x18);
        FUN_00c8e340(fVar20,1);
        lVar11 = *(int64_t *)(lVar11 + 0x10);
        _memmove(puVar10,(void *)(int64_t)(iVar9 + local_80._0_4_),(size_t)uVar13);
        *(float *)(lVar11 + iVar16) = fVar25;
        lVar14 = lVar14 + 1;
        local_80._0_4_ = local_80._0_4_ + -4;
        iVar16 = iVar16 + 4;
        iVar8 = iVar8 + -8;
        iVar17 = iVar17 + 8;
        local_64 = local_64 + -1;
      } while (local_64 != 0);
    }
  }
  FUN_00b32040();
LAB_00c0dd5d:
  bVar6 = in_XMM4_Qa != g_02390448;
  if (local_50 != (void*)0x0 && bVar6) {
    FUN_00d50b20();
  }
  if (bVar6 && local_48 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

