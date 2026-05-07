// Function: FUN_01825ca0
// Address: 01825ca0
// Size: 3824 bytes
// Class: Unknown

void FUN_01825ca0(int64_t *param_1,int64_t *param_2)

{
  float fVar1;
  uint32_t uVar2;
  float *pfVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plVar15;
  void* pVar16;
  uint uVar17;
  int64_t *plVar18;
  char *pcVar19;
  int64_t lVar20;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint uVar24;
  char *pcVar25;
  bool bVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double local_c0;
  int local_a4;
  double local_a0;
  int64_t *local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  double local_60;
  int64_t *local_58;
  char local_50 [8];
  char local_48 [8];
  int64_t *local_40;
  
  if (*this_ptr == 0) {
    return;
  }
  if (*(int *)(*this_ptr + 0xc) == 0) {
    return;
  }
  plVar18 = param_1;
  pvVar11 = _pthread_getspecific((void*)param_1);
  pVar16 = (void*)plVar18;
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df6b0();
  plVar18 = local_58;
  pvVar11 = _pthread_getspecific(pVar16);
  plVar15 = local_58;
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), plVar18 = plVar15, lVar12 != 0)) {
    plVar18 = (int64_t *)plVar15[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
  }
  dVar28 = (double)(**(code **)(*plVar18 + 0x370))();
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  plVar18 = local_58;
  local_70 = local_50[0];
  pcVar19 = &local_70;
  if (local_50[0] != '\0') {
    pcVar19 = local_50;
  }
  *pcVar19 = '\0';
  if ((local_50[0] != '\0') && (plVar18 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar11 = _pthread_getspecific(pVar16);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_60 = (double)FUN_013dea30();
  FUN_00d23310();
  plVar15 = local_58;
  pcVar19 = local_48;
  pcVar25 = local_50;
  if (local_50[0] == '\0') {
    pcVar25 = pcVar19;
  }
  local_48[0] = local_50[0];
  *pcVar25 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_013de8d0();
  if ((local_48[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (plVar18 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = local_60 - dVar29;
  lVar12 = FUN_00e7dae0(dVar28 * local_60);
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar13 = FUN_013de650();
  lVar20 = **(int64_t **)(*this_ptr + 0x10);
  if (lVar20 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = (double)FUN_013de8d0();
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = (double)FUN_013dea30();
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc090();
  plVar18 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc0d0();
  local_78 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  pvVar11 = _pthread_getspecific((void*)pcVar19);
  plVar15 = plVar18;
  if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
    plVar15 = (int64_t *)plVar18[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
  }
  dVar29 = (double)plVar15[10];
  uVar7 = FUN_00e7d850(local_60 * dVar29);
  FUN_00c8e690();
  plVar15 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  plVar6 = local_58;
  if (((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_50[0] != '\0' && (local_58 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  dVar35 = g_0238fee8 / dVar28;
  dVar29 = g_0238fee8 / dVar29;
  if ((int)uVar7 < 1) {
    local_40 = plVar18;
  }
  else {
    local_40 = (int64_t *)((double)lVar13 / dVar28);
    uVar22 = 0;
    local_a4 = 0;
    do {
      local_60 = (double)(int)uVar22 * dVar29 + (double)local_40;
      if (local_a0 <= local_60) {
        uVar17 = *(int *)(*this_ptr + 0xc) - 1;
        pcVar19 = (char *)(uint64_t)uVar17;
        if (local_a4 < (int)uVar17) {
          pcVar19 = (char *)(int64_t)local_a4;
          lVar14 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8 + (int64_t)pcVar19 * 8);
          if (lVar20 != lVar14) {
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            bVar26 = lVar20 != 0;
            lVar20 = lVar14;
            if (bVar26) {
              FUN_00d50b20();
            }
          }
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c0 = (double)FUN_013de8d0();
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a0 = (double)FUN_013dea30();
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc090();
          plVar21 = local_58;
          if (local_58 == plVar18) {
LAB_01826450:
            plVar21 = plVar18;
            if (local_50[0] != '\0') {
LAB_01826456:
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_50[0] == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (plVar18 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar18 = plVar21;
                goto LAB_01826450;
              }
              if (local_50[0] == '\0') goto LAB_01826464;
              goto LAB_01826456;
            }
            if (plVar18 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_50[0] = '\0';
          }
LAB_01826464:
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc0d0();
          plVar18 = local_58;
          if (local_58 == local_78) {
LAB_01826550:
            if (local_50[0] != '\0') {
LAB_01826556:
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_50[0] == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b20();
                local_78 = plVar18;
                goto LAB_01826550;
              }
              local_78 = plVar18;
              if (local_50[0] == '\0') goto LAB_01826564;
              goto LAB_01826556;
            }
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_50[0] = '\0';
            local_78 = plVar18;
          }
LAB_01826564:
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          local_a4 = local_a4 + 1;
          plVar18 = plVar21;
        }
      }
      pvVar11 = _pthread_getspecific((void*)pcVar19);
      plVar21 = plVar18;
      if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        plVar21 = (int64_t *)plVar18[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
      }
      local_60 = local_60 - local_c0;
      dVar30 = (double)(**(code **)(*plVar21 + 0x380))();
      pvVar11 = _pthread_getspecific((void*)pcVar19);
      plVar21 = local_78;
      if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        plVar21 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
      }
      dVar31 = (double)(**(code **)(*plVar21 + 0x380))(local_60);
      bVar26 = (float)dVar31 < g_023b4df0;
      *(float *)(plVar15[2] + uVar22 * 4) = (float)dVar30;
      *(uint *)(plVar6[2] + uVar22 * 4) = ~-(uint)bVar26 & (uint)(float)dVar31;
      uVar22 = uVar22 + 1;
    } while (uVar7 != uVar22);
    uVar22 = 0xffffffff;
    uVar23 = 0;
    local_40 = plVar18;
    bVar26 = false;
    do {
      bVar5 = *(float *)(plVar6[2] + uVar23 * 4) < g_023b4df0;
      if (!bVar5) {
        iVar9 = (int)uVar22;
        if (((bool)(bVar26 & iVar9 != -1)) &&
           (uVar22 = (uint64_t)(iVar9 + 1), (int64_t)uVar22 < (int64_t)uVar23)) {
          fVar34 = *(float *)(plVar15[2] + (int64_t)iVar9 * 4);
          fVar1 = *(float *)(plVar15[2] + uVar23 * 4);
          fVar33 = g_02390124 / (float)((int)uVar23 - iVar9);
          fVar27 = 0.0;
          do {
            uVar22 = uVar22 + 1;
            local_60 = (double)CONCAT44(local_60._4_4_,fVar27 + fVar33);
            fVar27 = (float)FUN_00e84a50();
            *(float *)(plVar15[2] + -4 + uVar22 * 4) =
                 fVar27 * fVar1 + (g_02390124 - fVar27) * fVar34;
            fVar27 = local_60._0_4_;
          } while ((uVar22 & 0xffffffff) != uVar23);
        }
        uVar22 = uVar23 & 0xffffffff;
      }
      uVar23 = uVar23 + 1;
      bVar26 = bVar5;
    } while (uVar23 != uVar7);
    uVar17 = uVar7 - 1;
    if (0 < (int)uVar7) {
      local_60 = 0.0;
      do {
        dVar30 = local_60 / dVar29;
        uVar8 = FUN_00e7d780();
        if ((int)uVar8 < 0) {
          uVar8 = 0;
        }
        if ((int)uVar7 <= (int)uVar8) {
          uVar8 = uVar17;
        }
        pfVar3 = (float *)plVar15[2];
        uVar24 = (uint)dVar30;
        if ((int)uVar24 < 0) {
          fVar34 = *pfVar3;
        }
        else if ((int)uVar24 < (int)uVar17) {
          iVar9 = FUN_00e7d780(((float)dVar30 - (float)(int)uVar24) * g_023d5f44);
          lVar14 = FUN_00e84280();
          fVar34 = (pfVar3[(uint64_t)uVar24 + 1] - pfVar3[uVar24]) *
                   *(float *)(lVar14 + (int64_t)iVar9 * 4) + pfVar3[uVar24];
        }
        else {
          fVar34 = pfVar3[uVar17];
        }
        uVar2 = *(void*)(plVar6[2] + (int64_t)(int)uVar8 * 4);
        iVar10 = FUN_00e7d850(dVar28 * local_60);
        lVar14 = *param_2;
        iVar9 = *(int *)(lVar14 + 0x18);
        FUN_00c8e340(extraout_XMM0_Qa,1);
        *(float *)(*(int64_t *)(lVar14 + 0x10) + (int64_t)iVar9) = fVar34;
        lVar14 = *arg1;
        iVar9 = *(int *)(lVar14 + 0x18);
        FUN_00c8e340(fVar34,1);
        lVar14 = *(int64_t *)(lVar14 + 0x10);
        *(int64_t *)(lVar14 + iVar9) = iVar10 + lVar13;
        lVar4 = *param_1;
        iVar9 = *(int *)(lVar4 + 0x18);
        FUN_00c8e340(lVar14,1);
        *(void*)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar9) = uVar2;
        local_60 = local_60 + (double)fVar34 * dVar35;
        iVar9 = FUN_00e7d850(dVar28 * local_60);
      } while (iVar9 < lVar12);
      goto LAB_01826b65;
    }
  }
  local_60 = 0.0;
  do {
    iVar9 = FUN_00e7d780(CONCAT44((int)((uint64_t)(local_60 / dVar29) >> 0x20),
                                  (float)(local_60 / dVar29)));
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    if ((int)uVar7 <= iVar9) {
      iVar9 = uVar7 - 1;
    }
    uVar2 = *(void*)(plVar6[2] + (int64_t)iVar9 * 4);
    iVar10 = FUN_00e7d850(dVar28 * local_60);
    lVar14 = *param_2;
    iVar9 = *(int *)(lVar14 + 0x18);
    uVar32 = FUN_00c8e340(extraout_XMM0_Qa_00,1);
    *(void*)(*(int64_t *)(lVar14 + 0x10) + (int64_t)iVar9) = 0;
    lVar14 = *arg1;
    iVar9 = *(int *)(lVar14 + 0x18);
    FUN_00c8e340(uVar32,1);
    lVar14 = *(int64_t *)(lVar14 + 0x10);
    *(int64_t *)(lVar14 + iVar9) = iVar10 + lVar13;
    lVar4 = *param_1;
    iVar9 = *(int *)(lVar4 + 0x18);
    FUN_00c8e340(lVar14,1);
    *(void*)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar9) = uVar2;
    local_60 = local_60 + dVar35 * 0.0;
    iVar9 = FUN_00e7d850(dVar28 * local_60);
  } while (iVar9 < lVar12);
LAB_01826b65:
  FUN_00d50b20();
  plVar18 = local_40;
  if (plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar20 != 0) {
    FUN_00d50b20();
  }
  return;
}

