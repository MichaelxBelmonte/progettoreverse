// ===================================================================
// GNOverloudGainReductionView — Complete reconstructed pseudocode
// 21 functions
// ===================================================================


// ============================================================
// 00c02550
// ============================================================
// Function: FUN_00c02550
// Address: 00c02550
// Size: 3294 bytes
// Class: GNOverloudGainReductionView

void FUN_00c02550(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*this_ptr;
  bool bVar6;
  
  puVar4 = g_028a5bb8;
  puVar3 = g_028a5ba8;
  puVar5 = g_028a5b98;
  if (param_2 == 10) {
    if ((g_028a5bb8 == (void*)0x0) || (g_028a5bc1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5bb8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5bb8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5bb8 != (void*)0x0;
          g_028a5bb8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5bc0 == '\0') {
          g_028a5bc0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_027bed58;
        if (g_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c090;
        if (g_0276c090 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c098;
        if (g_0276c098 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5bc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5bc1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5bb8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c03214;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c03216;
  }
  if (param_2 == 5) {
    if ((g_028a5ba8 == (void*)0x0) || (g_028a5bb1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5ba8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5ba8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5ba8 != (void*)0x0;
          g_028a5ba8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5bb0 == '\0') {
          g_028a5bb0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d48;
        if (g_026d7d48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c008;
        if (g_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c010;
        if (g_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c018;
        if (g_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c020;
        if (g_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d40;
        if (g_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c030;
        if (g_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c038;
        if (g_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c040;
        if (g_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c048;
        if (g_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c050;
        if (g_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d38;
        if (g_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5bb1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5bb1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5ba8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c03214;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5b98 == (void*)0x0) || (g_028a5ba1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5b98 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5b98 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5b98 != (void*)0x0;
          g_028a5b98 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5ba0 == '\0') {
          g_028a5ba0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c008;
        if (g_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c010;
        if (g_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c018;
        if (g_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c020;
        if (g_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d40;
        if (g_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c030;
        if (g_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c038;
        if (g_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c040;
        if (g_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c048;
        if (g_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c050;
        if (g_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d38;
        if (g_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c060;
        if (g_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c068;
        if (g_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c070;
        if (g_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c078;
        if (g_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c080;
        if (g_0276c080 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5ba1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5ba1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5b98;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) {
LAB_00c03214:
        puVar5 = (void*)0x0;
        goto LAB_00c03216;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c03216:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c0d750
// ============================================================
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



// ============================================================
// 00c018b0
// ============================================================
// Function: FUN_00c018b0
// Address: 00c018b0
// Size: 2008 bytes
// Class: GNOverloudGainReductionView

void FUN_00c018b0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 5;
  lVar1 = g_0276bf50;
  if (g_0276bf50 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c01919;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c01919;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c01919:
  *(void*)(this_ptr + 0xa8) = 3;
  if ((g_028a5b88 == (void*)0x0) || (g_028a5b91 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5b88 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5b88 == (void*)0x0;
      g_028a5b88 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_02765370, g_028a5b88 != (void*)0x0)) &&
         (lVar1 = g_02765370, g_028a5b90 == '\0')) {
        g_028a5b90 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_02765370;
      }
      g_02765370 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_026fb990;
      local_1c0 = 1;
      local_1c8 = lVar1;
      if (g_026fb990 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf58;
      if (g_0276bf58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf60;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (g_0276bf60 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf68;
      if (g_0276bf68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf70;
      local_188 = lVar1;
      local_180 = 1;
      if (g_0276bf70 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf78;
      if (g_0276bf78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf80;
      local_168 = lVar1;
      local_160 = 1;
      if (g_0276bf80 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf88;
      if (g_0276bf88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf90;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276bf90 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf98;
      if (g_0276bf98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfa0;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276bfa0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bfa8;
      if (g_0276bfa8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfb0;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276bfb0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bfb8;
      if (g_0276bfb8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfc0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276bfc0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bfc8;
      if (g_0276bfc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfd0;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276bfd0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027bed58;
      if (g_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bfe8;
      if (g_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bff0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bff8;
      if (g_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c000 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5b91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5b91 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5b88) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5b88) {
      return;
    }
  }
  puVar2 = g_028a5b88;
  if (g_028a5b88 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c0bcd0
// ============================================================
// Function: FUN_00c0bcd0
// Address: 00c0bcd0
// Size: 2739 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0bcd0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*this_ptr;
  bool bVar6;
  
  puVar4 = g_028a5cc8;
  puVar3 = g_028a5cb8;
  puVar5 = g_028a5ca8;
  if (param_2 == 8) {
    if ((g_028a5cc8 == (void*)0x0) || (g_028a5cd1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5cc8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5cc8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5cc8 != (void*)0x0;
          g_028a5cc8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5cd0 == '\0') {
          g_028a5cd0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c268;
        if (g_0276c268 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c270;
        if (g_0276c270 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5cc8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c0c767;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c0c769;
  }
  if (param_2 == 7) {
    if ((g_028a5cb8 == (void*)0x0) || (g_028a5cc1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5cb8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5cb8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5cb8 != (void*)0x0;
          g_028a5cb8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5cc0 == '\0') {
          g_028a5cc0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c250;
        if (g_0276c250 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c258;
        if (g_0276c258 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c260;
        if (g_0276c260 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5cb8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c0c767;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 2) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5ca8 == (void*)0x0) || (g_028a5cb1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5ca8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5ca8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5ca8 != (void*)0x0;
          g_028a5ca8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5cb0 == '\0') {
          g_028a5cb0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c118;
        if (g_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c120;
        if (g_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c128;
        if (g_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c130;
        if (g_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c078;
        if (g_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c070;
        if (g_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c068;
        if (g_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c060;
        if (g_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d38;
        if (g_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c050;
        if (g_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c048;
        if (g_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c040;
        if (g_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c038;
        if (g_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c030;
        if (g_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d40;
        if (g_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c020;
        if (g_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c018;
        if (g_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c010;
        if (g_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c008;
        if (g_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5ca8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) {
LAB_00c0c767:
        puVar5 = (void*)0x0;
        goto LAB_00c0c769;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c0c769:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c03e40
// ============================================================
// Function: FUN_00c03e40
// Address: 00c03e40
// Size: 1758 bytes
// Class: GNOverloudGainReductionView

void FUN_00c03e40(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 6;
  lVar1 = g_0276c0a0;
  if (g_0276c0a0 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c03ea9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c03ea9;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c03ea9:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5be8 == (void*)0x0) || (g_028a5bf1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5be8 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5be8 == (void*)0x0;
      g_028a5be8 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c0a8, g_028a5be8 != (void*)0x0)) &&
         (lVar1 = g_0276c0a8, g_028a5bf0 == '\0')) {
        g_028a5bf0 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c0a8;
      }
      g_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0b0;
      local_180 = 1;
      local_188 = lVar1;
      if (g_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0b8;
      if (g_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0c0;
      local_168 = lVar1;
      local_160 = 1;
      if (g_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0c8;
      if (g_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0d0;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0d8;
      if (g_0276c0d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0e0;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276c0e0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0e8;
      if (g_0276c0e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0f0;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276c0f0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0f8;
      if (g_0276c0f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c100;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276c100 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c108;
      if (g_0276c108 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c110;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276c110 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027bed58;
      if (g_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bfe8;
      if (g_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bff0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bff8;
      if (g_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c000 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5bf1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5bf1 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5be8) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5be8) {
      return;
    }
  }
  puVar2 = g_028a5be8;
  if (g_028a5be8 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c0b2a0
// ============================================================
// Function: FUN_00c0b2a0
// Address: 00c0b2a0
// Size: 1627 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0b2a0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 0xb;
  lVar1 = g_0276c1e0;
  if (g_0276c1e0 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c0b309;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c0b309;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c0b309:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5c98 == (void*)0x0) || (g_028a5ca1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5c98 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5c98 == (void*)0x0;
      g_028a5c98 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c098, g_028a5c98 != (void*)0x0)) &&
         (lVar1 = g_0276c098, g_028a5ca0 == '\0')) {
        g_028a5ca0 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c098;
      }
      g_0276c098 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027e8d68;
      local_160 = 1;
      local_168 = lVar1;
      if (g_027e8d68 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c1a8;
      if (g_0276c1a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c1b0;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276c1b0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c1f0;
      if (g_0276c1f0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c1f8;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276c1f8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c200;
      if (g_0276c200 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c208;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276c208 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c1b8;
      if (g_0276c1b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c1c0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276c1c0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c210;
      if (g_0276c210 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c218;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276c218 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c220;
      if (g_0276c220 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c228;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276c228 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c230;
      if (g_0276c230 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027ebef0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_027ebef0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c240;
      if (g_0276c240 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c248;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c248 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5ca1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5ca1 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c98) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c98) {
      return;
    }
  }
  puVar2 = g_028a5c98;
  if (g_028a5c98 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c084a0
// ============================================================
// Function: FUN_00c084a0
// Address: 00c084a0
// Size: 1630 bytes
// Class: GNOverloudGainReductionView

void FUN_00c084a0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 9;
  lVar1 = g_0276c1a0;
  if (g_0276c1a0 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c08509;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c08509;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c08509:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5c48 == (void*)0x0) || (g_028a5c51 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5c48 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5c48 == (void*)0x0;
      g_028a5c48 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c1a8, g_028a5c48 != (void*)0x0)) &&
         (lVar1 = g_0276c1a8, g_028a5c50 == '\0')) {
        g_028a5c50 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c1a8;
      }
      g_0276c1a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c1b0;
      local_160 = 1;
      local_168 = lVar1;
      if (g_0276c1b0 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0b8;
      if (g_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0c0;
      local_148 = lVar1;
      local_140 = 1;
      if (g_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0c8;
      if (g_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0d0;
      local_128 = lVar1;
      local_120 = 1;
      if (g_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c1b8;
      if (g_0276c1b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c1c0;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276c1c0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c1c8;
      if (g_0276c1c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c1d0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_0276c1d0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c140;
      if (g_0276c140 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c148;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276c148 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027bed58;
      if (g_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfe0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bfe8;
      if (g_0276bfe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bff0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bff0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bff8;
      if (g_0276bff8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c000;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c000 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5c51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5c51 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c48) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c48) {
      return;
    }
  }
  puVar2 = g_028a5c48;
  if (g_028a5c48 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c08ed0
// ============================================================
// Function: FUN_00c08ed0
// Address: 00c08ed0
// Size: 2303 bytes
// Class: GNOverloudGainReductionView

void FUN_00c08ed0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar3 = g_028a5c68;
  puVar4 = g_028a5c58;
  if (param_2 == 7) {
    if ((g_028a5c68 == (void*)0x0) || (g_028a5c71 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5c68 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5c68 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5c68 != (void*)0x0;
          g_028a5c68 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5c70 == '\0') {
          g_028a5c70 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c0d8;
        if (g_0276c0d8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c0a8;
        if (g_0276c0a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_027bed58;
        if (g_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5c71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5c71 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5c68;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) goto LAB_00c097b5;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5c58 == (void*)0x0) || (g_028a5c61 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5c58 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5c58 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5c58 != (void*)0x0;
          g_028a5c58 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5c60 == '\0') {
          g_028a5c60 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c118;
        if (g_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c120;
        if (g_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c128;
        if (g_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c130;
        if (g_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c078;
        if (g_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c070;
        if (g_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c068;
        if (g_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c060;
        if (g_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d38;
        if (g_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c050;
        if (g_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c048;
        if (g_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c040;
        if (g_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c038;
        if (g_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c030;
        if (g_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d40;
        if (g_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c020;
        if (g_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c018;
        if (g_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c010;
        if (g_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c008;
        if (g_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5c61 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5c61 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5c58;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) {
LAB_00c097b5:
        puVar4 = (void*)0x0;
        goto LAB_00c097b7;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c097b7:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c04940
// ============================================================
// Function: FUN_00c04940
// Address: 00c04940
// Size: 2303 bytes
// Class: GNOverloudGainReductionView

void FUN_00c04940(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar3 = g_028a5bd8;
  puVar4 = g_028a5bc8;
  if (param_2 == 8) {
    if ((g_028a5bd8 == (void*)0x0) || (g_028a5be1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5bd8 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5bd8 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5bd8 != (void*)0x0;
          g_028a5bd8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5be0 == '\0') {
          g_028a5be0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c0d8;
        if (g_0276c0d8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c0a8;
        if (g_0276c0a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_027bed58;
        if (g_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5be1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5be1 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5bd8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) goto LAB_00c05225;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5bc8 == (void*)0x0) || (g_028a5bd1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5bc8 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5bc8 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5bc8 != (void*)0x0;
          g_028a5bc8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5bd0 == '\0') {
          g_028a5bd0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c118;
        if (g_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c120;
        if (g_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c128;
        if (g_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c130;
        if (g_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c078;
        if (g_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c070;
        if (g_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c068;
        if (g_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c060;
        if (g_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d38;
        if (g_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c050;
        if (g_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c048;
        if (g_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c040;
        if (g_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c038;
        if (g_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c030;
        if (g_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d40;
        if (g_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c020;
        if (g_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c018;
        if (g_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c010;
        if (g_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c008;
        if (g_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5bd1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5bd1 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5bc8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) {
LAB_00c05225:
        puVar4 = (void*)0x0;
        goto LAB_00c05227;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c05227:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c07540
// ============================================================
// Function: FUN_00c07540
// Address: 00c07540
// Size: 2062 bytes
// Class: GNOverloudGainReductionView

void FUN_00c07540(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar3 = g_028a5c38;
  puVar4 = g_028a5c28;
  if (param_2 == 2) {
    if ((g_028a5c38 == (void*)0x0) || (g_028a5c41 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5c38 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5c38 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5c38 != (void*)0x0;
          g_028a5c38 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5c40 == '\0') {
          g_028a5c40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c130;
        if (g_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c078;
        if (g_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c070;
        if (g_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c068;
        if (g_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c060;
        if (g_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d38;
        if (g_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c050;
        if (g_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c048;
        if (g_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c040;
        if (g_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c038;
        if (g_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c030;
        if (g_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d40;
        if (g_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c020;
        if (g_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c018;
        if (g_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c010;
        if (g_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c008;
        if (g_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5c38;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) goto LAB_00c07d34;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5c28 == (void*)0x0) || (g_028a5c31 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5c28 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5c28 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5c28 != (void*)0x0;
          g_028a5c28 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5c30 == '\0') {
          g_028a5c30 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c188;
        if (g_0276c188 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c190;
        if (g_0276c190 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c198;
        if (g_0276c198 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5c28;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) {
LAB_00c07d34:
        puVar4 = (void*)0x0;
        goto LAB_00c07d36;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c07d36:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c00f60
// ============================================================
// Function: FUN_00c00f60
// Address: 00c00f60
// Size: 1383 bytes
// Class: GNOverloudGainReductionView

void FUN_00c00f60(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 4;
  lVar1 = g_0276bf28;
  if (g_0276bf28 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c00fc9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c00fc9;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c00fc9:
  *(void*)(this_ptr + 0xa8) = 6;
  if ((g_028a5b78 == (void*)0x0) || (g_028a5b81 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5b78 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5b78 == (void*)0x0;
      g_028a5b78 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276bcc0, g_028a5b78 != (void*)0x0)) &&
         (lVar1 = g_0276bcc0, g_028a5b80 == '\0')) {
        g_028a5b80 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276bcc0;
      }
      g_0276bcc0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcc8;
      local_120 = 1;
      local_128 = lVar1;
      if (g_0276bcc8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bcd0;
      if (g_0276bcd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcd8;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276bcd8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_02765370;
      if (g_02765370 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_026fb990;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_026fb990 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bce0;
      if (g_0276bce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bce8;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276bce8 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bcf0;
      if (g_0276bcf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcf8;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276bcf8 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf30;
      if (g_0276bf30 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf38;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bf38 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf40;
      if (g_0276bf40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf48;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276bf48 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bd20;
      if (g_0276bd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd28;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276bd28 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5b81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5b81 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5b78) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5b78) {
      return;
    }
  }
  puVar2 = g_028a5b78;
  if (g_028a5b78 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c00640
// ============================================================
// Function: FUN_00c00640
// Address: 00c00640
// Size: 1383 bytes
// Class: GNOverloudGainReductionView

void FUN_00c00640(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 3;
  lVar1 = g_0276bf20;
  if (g_0276bf20 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c006a9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c006a9;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c006a9:
  *(void*)(this_ptr + 0xa8) = 6;
  if ((g_028a5b68 == (void*)0x0) || (g_028a5b71 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5b68 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5b68 == (void*)0x0;
      g_028a5b68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276bcc0, g_028a5b68 != (void*)0x0)) &&
         (lVar1 = g_0276bcc0, g_028a5b70 == '\0')) {
        g_028a5b70 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276bcc0;
      }
      g_0276bcc0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcc8;
      local_120 = 1;
      local_128 = lVar1;
      if (g_0276bcc8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bcd0;
      if (g_0276bcd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcd8;
      local_108 = lVar1;
      local_100 = 1;
      if (g_0276bcd8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_02765370;
      if (g_02765370 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_026fb990;
      local_e8 = lVar1;
      local_e0 = 1;
      if (g_026fb990 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bce0;
      if (g_0276bce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bce8;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_0276bce8 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bcf0;
      if (g_0276bcf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcf8;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276bcf8 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bd00;
      if (g_0276bd00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd08;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bd08 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bd10;
      if (g_0276bd10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fecf0;
      local_68 = lVar1;
      local_60 = 1;
      if (g_027fecf0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bd20;
      if (g_0276bd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bd28;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276bd28 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5b71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5b71 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5b68) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5b68) {
      return;
    }
  }
  puVar2 = g_028a5b68;
  if (g_028a5b68 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bffe20
// ============================================================
// Function: FUN_00bffe20
// Address: 00bffe20
// Size: 1255 bytes
// Class: GNOverloudGainReductionView
// String references:
//   "%0.0f dB"

void FUN_00bffe20(void)

{
  int iVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  int iVar10;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar11;
  float fVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  float fVar17;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  float fVar22;
  uint64_t local_b8;
  uint64_t uStack_b0;
  int64_t *local_50;
  uint32_t local_48;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  uVar13 = FUN_01e3f820();
  fVar12 = in_XMM1._4_4_;
  auVar18._4_4_ = fVar12;
  auVar18._0_4_ = fVar12;
  auVar18._8_4_ = in_XMM1._12_4_;
  auVar18._12_4_ = in_XMM1._12_4_;
  auVar15._4_12_ = auVar18._4_12_;
  auVar15._0_4_ = fVar12 + g_023941fc;
  auVar18 = insertps(in_XMM1,auVar15,0x10);
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_40 + 0x3f0))(2,0x27,0,1,auVar15);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x28] != (int64_t *)0x0) {
    uVar11 = (**(code **)(*(int64_t *)this_ptr[0x28] + 0x628))();
    (**(code **)(*this_ptr + 0x640))();
    local_b8 = auVar18._0_8_;
    uStack_b0 = auVar18._8_8_;
    (**(code **)(*local_40 + 0x548))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar12 = (float)FUN_00aea6b0();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_50 + 0x3a0))();
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar4._8_8_ = uStack_b0;
    auVar4._0_8_ = local_b8;
    uVar3 = (uint32_t)((uint64_t)uStack_b0 >> 0x20);
    fVar17 = (float)((uint64_t)local_b8 >> 0x20);
    auVar16._4_4_ = fVar17;
    auVar16._0_4_ = fVar17;
    auVar16._8_4_ = uVar3;
    auVar16._12_4_ = uVar3;
    fVar22 = fVar17 - fVar12 * fVar17;
    fVar12 = 0.0;
    if (0.0 <= fVar22) {
      fVar12 = fVar22;
    }
    if (fVar12 <= fVar17) {
      auVar16._0_4_ = fVar12;
    }
    insertps(auVar4,auVar16,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    lVar6 = this_ptr[0x2a];
    iVar9 = (int)lVar6 + 1;
    *(int *)(this_ptr + 0x2a) = iVar9;
    lVar2 = this_ptr[0x29];
    *(void*)(*(int64_t *)(lVar2 + 0x10) + (int64_t)(int)lVar6 * 4) = uVar11;
    iVar1 = *(int *)(lVar2 + 0x18);
    iVar10 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar10 = iVar1;
    }
    if (iVar10 >> 2 <= iVar9) {
      *(void*)(this_ptr + 0x2a) = 0;
    }
    fVar12 = (float)(**(code **)(g_02786500 + 8))();
    if (fVar12 < g_02390124) {
      uVar14 = FUN_00aea610();
      local_48 = 1;
      local_50 = &g_024d0b28;
      local_44 = (uint32_t)uVar14;
      FUN_00d8cb40(uVar14,&local_50);
      plVar7 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_50 + 0x390))();
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_50 + 0x378))();
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d48a10();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      fVar12 = auVar15._0_4_;
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
        fVar12 = auVar15._0_4_;
      }
      auVar5._8_8_ = extraout_XMM0_Qb;
      auVar5._0_8_ = uVar13;
      uVar11 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      fVar17 = (float)((uint64_t)uVar13 >> 0x20);
      auVar19._4_4_ = fVar17;
      auVar19._0_4_ = fVar17;
      auVar19._8_4_ = uVar11;
      auVar19._12_4_ = uVar11;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar17 + fVar12 + g_02390d00;
      insertps(auVar5,auVar20,0x10);
      auVar21._4_12_ = in_XMM1._4_12_;
      auVar21._0_4_ = in_XMM1._0_4_ + g_024112b0;
      blendps(auVar21,g_02421240,0xe);
      (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00c06150
// ============================================================
// Function: FUN_00c06150
// Address: 00c06150
// Size: 1820 bytes
// Class: GNOverloudGainReductionView

void FUN_00c06150(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5c08;
  if (param_2 != 3) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5c08 == (void*)0x0) || (g_028a5c11 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5c08 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5c08 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5c08 != (void*)0x0;
        g_028a5c08 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5c10 == '\0') {
        g_028a5c10 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c118;
      if (g_0276c118 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c120;
      if (g_0276c120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c128;
      if (g_0276c128 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c130;
      if (g_0276c130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c078;
      if (g_0276c078 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c070;
      if (g_0276c070 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c068;
      if (g_0276c068 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c060;
      if (g_0276c060 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_026d7d38;
      if (g_026d7d38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c050;
      if (g_0276c050 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c048;
      if (g_0276c048 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c040;
      if (g_0276c040 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c038;
      if (g_0276c038 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c030;
      if (g_0276c030 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_026d7d40;
      if (g_026d7d40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c020;
      if (g_0276c020 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c018;
      if (g_0276c018 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c010;
      if (g_0276c010 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c008;
      if (g_0276c008 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5c11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5c11 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5c08;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00c06850;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c06850:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c0a070
// ============================================================
// Function: FUN_00c0a070
// Address: 00c0a070
// Size: 993 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0a070(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 10;
  lVar1 = g_0276c1d8;
  if (g_0276c1d8 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c0a0d9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c0a0d9;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c0a0d9:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5c78 == (void*)0x0) || (g_028a5c81 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5c78 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5c78 == (void*)0x0;
      g_028a5c78 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c0a8, g_028a5c78 != (void*)0x0)) &&
         (lVar1 = g_0276c0a8, g_028a5c80 == '\0')) {
        g_028a5c80 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c0a8;
      }
      g_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0b0;
      local_c0 = 1;
      local_c8 = lVar1;
      if (g_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0b8;
      if (g_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0c0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0c8;
      if (g_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0d0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0d8;
      if (g_0276c0d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0e0;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c0e0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276be48;
      if (g_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5c81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5c81 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c78) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c78) {
      return;
    }
  }
  puVar2 = g_028a5c78;
  if (g_028a5c78 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c06f30
// ============================================================
// Function: FUN_00c06f30
// Address: 00c06f30
// Size: 990 bytes
// Class: GNOverloudGainReductionView

void FUN_00c06f30(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 8;
  lVar1 = g_0276c150;
  if (g_0276c150 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c06f99;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c06f99;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c06f99:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5c18 == (void*)0x0) || (g_028a5c21 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5c18 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5c18 == (void*)0x0;
      g_028a5c18 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c158, g_028a5c18 != (void*)0x0)) &&
         (lVar1 = g_0276c158, g_028a5c20 == '\0')) {
        g_028a5c20 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c158;
      }
      g_0276c158 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c160;
      local_c0 = 1;
      local_c8 = lVar1;
      if (g_0276c160 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0a8;
      if (g_0276c0a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0b0;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c168;
      if (g_0276c168 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c170;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276c170 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0c8;
      if (g_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0d0;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c178;
      if (g_0276c178 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c180;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276c180 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5c21 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5c21 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c18) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5c18) {
      return;
    }
  }
  puVar2 = g_028a5c18;
  if (g_028a5c18 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c05b10
// ============================================================
// Function: FUN_00c05b10
// Address: 00c05b10
// Size: 993 bytes
// Class: GNOverloudGainReductionView

void FUN_00c05b10(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 7;
  lVar1 = g_0276c138;
  if (g_0276c138 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c05b79;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c05b79;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c05b79:
  *(void*)(this_ptr + 0xa8) = 4;
  if ((g_028a5bf8 == (void*)0x0) || (g_028a5c01 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5bf8 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5bf8 == (void*)0x0;
      g_028a5bf8 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c0a8, g_028a5bf8 != (void*)0x0)) &&
         (lVar1 = g_0276c0a8, g_028a5c00 == '\0')) {
        g_028a5c00 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c0a8;
      }
      g_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0b0;
      local_c0 = 1;
      local_c8 = lVar1;
      if (g_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c140;
      if (g_0276c140 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c148;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_0276c148 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027bed58;
      if (g_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bfe0;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0b8;
      if (g_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0c0;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c0c8;
      if (g_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c0d0;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5bf8) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5bf8) {
      return;
    }
  }
  puVar2 = g_028a5bf8;
  if (g_028a5bf8 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c0a680
// ============================================================
// Function: FUN_00c0a680
// Address: 00c0a680
// Size: 1580 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0a680(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5c88;
  if (param_2 != 1) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5c88 == (void*)0x0) || (g_028a5c91 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5c88 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5c88 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5c88 != (void*)0x0;
        g_028a5c88 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5c90 == '\0') {
        g_028a5c90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c130;
      if (g_0276c130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c078;
      if (g_0276c078 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c070;
      if (g_0276c070 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c068;
      if (g_0276c068 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c060;
      if (g_0276c060 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_026d7d38;
      if (g_026d7d38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c050;
      if (g_0276c050 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c048;
      if (g_0276c048 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c040;
      if (g_0276c040 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c038;
      if (g_0276c038 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c030;
      if (g_0276c030 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_026d7d40;
      if (g_026d7d40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c020;
      if (g_0276c020 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c018;
      if (g_0276c018 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c010;
      if (g_0276c010 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c008;
      if (g_0276c008 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5c91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5c91 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5c88;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00c0ac90;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c0ac90:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c0ea10
// ============================================================
// Function: FUN_00c0ea10
// Address: 00c0ea10
// Size: 932 bytes
// Class: GNOverloudGainReductionView

uint64_t FUN_00c0ea10(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *in_RDX;
  int unaff_ESI;
  int64_t this_ptr;
  float fVar7;
  uint64_t in_XMM1_Qb;
  uint8_t auVar8 [16];
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  local_88 = *in_RDX;
  local_80 = '\0';
  uVar2 = FUN_00b3c720(param_1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_ESI != 0) {
    return uVar2;
  }
  FUN_00d23340();
  plVar6 = local_38;
  local_70 = local_30 != '\0';
  local_78 = local_38;
  if ((bool)local_70) {
    local_30 = '\0';
  }
  FUN_00c4d260();
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar5 = &local_78;
      plVar3 = local_78;
      cVar4 = local_70;
      goto joined_r0x00c0eaea;
    }
  }
  pplVar5 = &g_02802688;
  plVar3 = g_02802688;
  cVar4 = g_02802690;
joined_r0x00c0eaea:
  if (cVar4 == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_70 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    fVar7 = (float)(**(code **)(*(int64_t *)plVar3[0x12] + 0x4d8))();
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar6 + 0x27) = 0;
    plVar6[0x2e] = 0;
    *(void*)(plVar6 + 0x2f) = 0;
    plVar6[0x30] = 0;
    *(void*)(plVar6 + 0x31) = 0;
    plVar6[0x28] = 0;
    plVar6[0x29] = 0;
    *(void*)(plVar6 + 0x2a) = 0;
    plVar6[0x2b] = 0;
    plVar6[0x2c] = 0;
    *(void*)((int64_t)plVar6 + 0x165) = 0;
    *(void*)((int64_t)plVar6 + 0x18c) = 0;
    *(void*)((int64_t)plVar6 + 0x194) = 0;
    *(void*)((int64_t)plVar6 + 0x199) = 0;
    plVar6[0x35] = 0;
    plVar6[0x36] = 0;
    plVar6[0x37] = 0;
    plVar6[0x38] = 0;
    *plVar6 = (int64_t)&g_02677e10;
    plVar6[2] = (int64_t)&g_026788e8;
    plVar6[0x39] = (int64_t)&g_02678928;
    *(void*)((int64_t)plVar6 + 500) = 0;
    *(void*)(plVar6 + 0x3f) = 0;
    plVar6[0x43] = 0;
    plVar6[0x3c] = 0;
    plVar6[0x3d] = 0;
    plVar6[0x3a] = 0;
    plVar6[0x3b] = 0;
    *(void*)(plVar6 + 0x3e) = 0;
    *(void*)((int64_t)plVar6 + 0x1fc) = 0;
    *(void*)((int64_t)plVar6 + 0x204) = 0;
    *(void*)((int64_t)plVar6 + 0x20c) = 0;
    (*g_02677e28)();
    lVar1 = *(int64_t *)(this_ptr + 0xb8);
    *(int64_t **)(this_ptr + 0xb8) = plVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar6 = *(int64_t **)(this_ptr + 0xb8);
    }
    auVar8._8_8_ = in_XMM1_Qb;
    auVar8._0_8_ = param_2;
    auVar8 = blendps(auVar8,g_023b5da0,0xd);
    (**(code **)(*plVar6 + 0x4d0))(fVar7 + g_02390d30 + (float)param_2,auVar8._0_8_);
    local_68 = g_0276c280;
    plVar6 = *(int64_t **)(this_ptr + 0xb8);
    if (g_0276c280 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    (**(code **)(*plVar6 + 0x958))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_0276c288;
    plVar6 = *(int64_t **)(this_ptr + 0xb8);
    if (g_0276c288 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar1;
    local_50 = '\x01';
    (**(code **)(*plVar6 + 0xa10))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar6 = local_38;
    local_40 = 0;
    local_48 = *(int64_t *)(this_ptr + 0xb8);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar6 + 0x450))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar2;
}



// ============================================================
// 00c0ef00
// ============================================================
// Function: FUN_00c0ef00
// Address: 00c0ef00
// Size: 547 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0ef00(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t **pplVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  pplVar5 = &local_48;
  (**(code **)(*this_ptr + 0x5d0))();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b3c6f0(param_1);
  plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)unaff_ESI * 8);
  local_40 = '\0';
  local_48 = plVar1;
  FUN_00c4d260();
  if (plVar1 == (int64_t *)0x0) {
LAB_00c0efb3:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c0efb3;
  }
  plVar2 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
    if ((local_40 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = local_38;
  if (((unaff_ESI == 0) && (this_ptr[0x17] != 0)) && (plVar2 != (int64_t *)0x0)) {
    if (local_38[0x19] == 0) {
      (**(code **)(*(int64_t *)plVar2[0x11] + 0x998))();
      (**(code **)(*(int64_t *)plVar2[0x12] + 0x998))();
      lVar3 = g_0276c280;
      plVar2 = (int64_t *)this_ptr[0x17];
      if (g_0276c280 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x958))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)plVar2[0x11] + 0x998))();
      (**(code **)(*(int64_t *)plVar2[0x12] + 0x998))();
      lVar3 = g_0276c290;
      plVar2 = (int64_t *)this_ptr[0x17];
      if (g_0276c290 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x958))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (plVar2 == (int64_t *)0x0) goto LAB_00c0efff;
  FUN_00d50b20();
LAB_00c0efff:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00bff5f0
// ============================================================
// Function: FUN_00bff5f0
// Address: 00bff5f0
// Size: 513 bytes
// Class: GNOverloudGainReductionView
// String references:
//   "GNOverloudGainReductionView"

void FUN_00bff5f0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_198;
  int64_t local_190;
  
  if ((g_0276f710 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0276f660 = FUN_0006d940();
    g_0276f648 = "GNOverloudGainReductionView";
    g_0276f650 = 0x158;
    g_0276f658 = FUN_00c43db0;
    g_0276f668 = 0;
    ram_000000000276f670 = 0;
    g_0276f678 = 0;
    ram_000000000276f680 = 0;
    g_0276f688 = 0;
    ram_000000000276f690 = 0;
    g_0276f698 = 0;
    ram_000000000276f6a0 = 0;
    g_0276f6a8 = 0;
    ram_000000000276f6b0 = 0;
    g_0276f6b8 = 0;
    ram_000000000276f6c0 = 0;
    g_0276f6c8 = 0;
    ram_000000000276f6d0 = 0;
    g_0276f6d8 = 0;
    ram_000000000276f6e0 = 0;
    g_0276f6e8 = 0;
    ram_000000000276f6f0 = 0;
    g_0276f6f8 = 0;
    _ram_000000000276f700 = 0;
    g_0276f708 = 0;
    ___cxa_guard_release();
  }
  if (g_0276f703 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00c4c550();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00bff8e0();
    FUN_00e87920(uVar2,0);
    if (local_190 != 0) {
      FUN_00d50b20();
    }
    if (local_198 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}

