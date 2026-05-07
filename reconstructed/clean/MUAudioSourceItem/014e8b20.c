// Function: FUN_014e8b20
// Address: 014e8b20
// Size: 4006 bytes
// Class: MUAudioSourceItem
// === MUAudioSourceItem properties ===
//   bool            _suggestsSeparateComponentRenderers
//                   _feedbackActivationQualityLimit
//                   _feebackUpperPitchLimit
//                   _feebackLowerPitchLimit
//                   _timeOffset


void* FUN_014e8b20(uint64_t param_1,int64_t *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  void*puVar8;
  code *pcVar9;
  void*puVar10;
  void *pvVar11;
  void* pVar12;
  code *pcVar13;
  code *pcVar14;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar15;
  void*puVar16;
  int64_t lVar17;
  int64_t lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint32_t uVar22;
  float fVar23;
  int local_c0;
  float local_bc;
  float local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  void*local_90;
  float local_74;
  float local_64;
  int64_t local_58;
  char local_50;
  
  (**(code **)(*arg1 + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014e8c44;
  (**(code **)(*arg1 + 0x378))();
  lVar15 = *param_2;
  if (lVar15 == local_58) {
    if (((char)param_2[1] != '\0') || (local_58 == 0)) goto LAB_014e8c30;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_014e8c21;
    }
  }
  else {
    lVar17 = param_2[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_58;
      if (((char)lVar17 != '\0') && (lVar15 != 0)) {
        FUN_00d50b20();
      }
LAB_014e8c21:
      *(void*)(param_2 + 1) = 1;
LAB_014e8c30:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014e8c44;
    }
    *param_2 = local_58;
    if (((char)lVar17 != '\0') && (lVar15 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(param_2 + 1) = 1;
LAB_014e8c44:
  cVar5 = FUN_014bc070();
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*arg1 + 1000))(), cVar5 != '\0')) {
    local_98 = FUN_00e83020();
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025f0d98;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    local_90 = puVar8;
    (*g_025f0db0)();
    lVar15 = arg1[0x21];
    if (*(int *)(lVar15 + 0xc) < 1) {
      bVar4 = false;
      lVar17 = 0;
      bVar3 = false;
      puVar8 = (void*)0x0;
    }
    else {
      lVar18 = 0;
      puVar8 = (void*)0x0;
      bVar3 = false;
      lVar17 = 0;
      bVar4 = false;
      do {
        puVar10 = *(void**)(*(int64_t *)(lVar15 + 0x10) + lVar18 * 8);
        if (puVar8 == puVar10) {
          if ((!bVar3) && (puVar8 != (void*)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar10 != (void*)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (puVar8 != (void*)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            puVar8 = puVar10;
          }
          else {
            bVar3 = true;
            puVar8 = puVar10;
          }
        }
        FUN_014eec80();
        if (local_58 == lVar17) {
          lVar15 = lVar17;
          bVar2 = bVar4;
          if ((!bVar4) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_014e8de0;
            FUN_00d50b00();
            bVar2 = true;
          }
joined_r0x014e9060:
          if (lVar15 == 0) goto LAB_014e8dec;
LAB_014e8e45:
          fVar23 = *(float *)(lVar15 + 0xc);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((((!NAN(fVar23)) &&
               (fVar23 = *(float *)(lVar15 + 0xc) - *(float *)((int64_t)puVar8 + 0x14),
               g_02390d38 < (float)((uint)fVar23 & g_02390140))) &&
              (uVar6 = (uint)(fVar23 * g_02391090 + g_0241e850 + g_0239011c), uVar6 < 0x438))
             && (!NAN(*(float *)(puVar8 + 2)))) {
            *(float *)(local_98 + (uint64_t)uVar6 * 4) =
                 *(float *)(puVar8 + 2) * *(float *)(lVar15 + 0x14) +
                 *(float *)(local_98 + (uint64_t)uVar6 * 4);
          }
        }
        else {
          lVar15 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar4) && (lVar17 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x014e9060;
          }
          if ((bVar4) && (lVar17 != 0)) {
            FUN_00d50b20();
          }
LAB_014e8de0:
          local_50 = '\0';
          bVar2 = true;
          if (lVar15 != 0) goto LAB_014e8e45;
LAB_014e8dec:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_014eec80();
        if (local_58 == lVar15) {
          lVar17 = lVar15;
          bVar4 = bVar2;
          if ((!bVar2) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_014e8f2f;
            FUN_00d50b00();
            bVar4 = true;
          }
joined_r0x014e907f:
          if (lVar17 == 0) goto LAB_014e8f3e;
LAB_014e8f95:
          fVar23 = *(float *)(lVar17 + 0x10);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((((!NAN(fVar23)) &&
               (fVar23 = *(float *)(lVar17 + 0x10) - *(float *)((int64_t)puVar8 + 0x14),
               g_02390d38 < (float)((uint)fVar23 & g_02390140))) &&
              (uVar6 = (uint)((double)fVar23 * g_023934c8 + g_0240e4d0 + g_023942d0),
              uVar6 < 0x438)) && (!NAN(*(float *)(puVar8 + 2)))) {
            *(float *)(local_98 + (uint64_t)uVar6 * 4) =
                 *(float *)(puVar8 + 2) * *(float *)(lVar17 + 0x18) +
                 *(float *)(local_98 + (uint64_t)uVar6 * 4);
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            lVar17 = local_58;
            if ((bVar2) && (lVar15 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x014e907f;
          }
          lVar17 = local_58;
          if ((bVar2) && (lVar15 != 0)) {
            FUN_00d50b20();
          }
LAB_014e8f2f:
          local_50 = '\0';
          bVar4 = true;
          if (lVar17 != 0) goto LAB_014e8f95;
LAB_014e8f3e:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar18 = lVar18 + 1;
        lVar15 = arg1[0x21];
      } while (lVar18 < *(int *)(lVar15 + 0xc));
    }
    FUN_015c1480(g_023908e0,0x438);
    FUN_015b32a0(g_02391074,&local_c0);
    lVar15 = arg1[0x21];
    if (*(int *)(lVar15 + 0xc) < 1) {
      bVar2 = false;
      pcVar9 = 0x0;
    }
    else {
      fVar19 = (float)(local_c0 + -0x168) * g_023908ec;
      lVar18 = 0;
      fVar21 = 0.0;
      fVar23 = 0.0;
      local_64 = 0.0;
      local_74 = 0.0;
      do {
        puVar10 = *(void**)(*(int64_t *)(lVar15 + 0x10) + lVar18 * 8);
        if (puVar8 == puVar10) {
          if ((!bVar3) && (puVar8 != (void*)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar10 != (void*)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (puVar8 != (void*)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            puVar8 = puVar10;
          }
          else {
            bVar3 = true;
            puVar8 = puVar10;
          }
        }
        fVar20 = *(float *)(puVar8 + 2) + g_02390118;
        if ((!NAN(*(float *)(puVar8 + 2))) && (g_0239424c < fVar20)) {
          fVar1 = *(float *)((int64_t)puVar8 + 0x14);
          local_b8 = fVar20;
          FUN_014eec80();
          if (local_58 == lVar17) {
            lVar15 = lVar17;
            bVar2 = bVar4;
            if ((!bVar4) && (local_58 != 0)) {
              if (local_50 != '\0') goto LAB_014e9294;
              FUN_00d50b00();
              bVar2 = true;
            }
          }
          else {
            lVar15 = local_58;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar4) && (lVar17 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((bVar4) && (lVar17 != 0)) {
                FUN_00d50b20();
              }
LAB_014e9294:
              local_50 = '\0';
              bVar2 = true;
            }
          }
          if (lVar15 == 0) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            fVar20 = *(float *)(lVar15 + 0xc);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (!NAN(fVar20)) {
              fVar20 = (float)((uint)(*(float *)(lVar15 + 0xc) - fVar1) & g_02390140);
              if (fVar20 < g_023908e0) {
                local_74 = local_74 +
                           (g_023908e0 - fVar20) * g_02394254 * *(float *)(lVar15 + 0x14) *
                           local_b8;
                fVar23 = fVar23 + local_b8;
              }
              fVar20 = (float)((uint)(*(float *)(lVar15 + 0xc) - (fVar19 + fVar1)) & g_02390140);
              if (fVar20 < g_023908e0) {
                local_64 = local_64 +
                           (g_023908e0 - fVar20) * g_02394254 * *(float *)(lVar15 + 0x14) *
                           local_b8;
                fVar21 = fVar21 + local_b8;
              }
            }
          }
          FUN_014eec80();
          if (local_58 == lVar15) {
            lVar17 = lVar15;
            bVar4 = bVar2;
            if ((!bVar2) && (local_58 != 0)) {
              if (local_50 != '\0') goto LAB_014e943c;
              FUN_00d50b00();
              bVar4 = true;
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
LAB_014e943c:
              local_50 = '\0';
            }
            bVar4 = true;
          }
          if (lVar17 == 0) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            lVar17 = 0;
          }
          else {
            local_bc = *(float *)(lVar17 + 0x10);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (!NAN(local_bc)) {
              fVar20 = (float)((uint)(*(float *)(lVar17 + 0x10) - fVar1) & g_02390140);
              if (fVar20 < g_023908e0) {
                local_74 = local_74 +
                           (g_023908e0 - fVar20) * g_02394254 * *(float *)(lVar17 + 0x18) *
                           local_b8;
                fVar23 = fVar23 + local_b8;
              }
              fVar20 = (float)((uint)(*(float *)(lVar17 + 0x10) - (fVar19 + fVar1)) & g_02390140)
              ;
              if (fVar20 < g_023908e0) {
                local_64 = local_64 +
                           (g_023908e0 - fVar20) * g_02394254 * *(float *)(lVar17 + 0x18) *
                           local_b8;
                fVar21 = fVar21 + local_b8;
              }
            }
          }
        }
        lVar18 = lVar18 + 1;
        lVar15 = arg1[0x21];
      } while (lVar18 < *(int *)(lVar15 + 0xc));
      pcVar9 = 0x0;
      bVar2 = false;
      if ((0.0 < fVar23) && (0.0 < fVar21)) {
        uVar22 = _powf((local_64 / fVar21) / (local_74 / fVar23),g_023908d8);
        pcVar9 = FUN_00e8fc40();
        FUN_010fe5f0();
        (**(code **)(*(int64_t *)pcVar9 + 0x18))();
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_02572358;
        (*g_02572370)();
        pcVar14 = g_025e74b8;
        iVar7 = (int)((float)(g_02390140 & (uint)fVar19) + g_02394240);
        pcVar13 = ((uint64_t)(int64_t)iVar7 >> 0x3f);
        fVar23 = (float)((iVar7 / 100) * 100);
        local_b8 = (float)(~-(uint)(0.0 <= fVar19) & (g_023945e0 ^ (uint)fVar23) |
                          (uint)fVar23 & -(uint)(0.0 <= fVar19));
        uStack_b4 = _UNK_023945e4;
        uStack_b0 = _UNK_023945e8;
        uStack_ac = _UNK_023945ec;
        if (0 < *(int *)(arg1[0x21] + 0xc)) {
          lVar15 = 0;
          pcVar13 = g_025e74b8;
          puVar16 = puVar8;
          do {
            puVar8 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &g_025e74a0;
            *(void*)((int64_t)puVar8 + 0xc) = 0;
            *(void*)((int64_t)puVar8 + 0x14) = 0;
            *(void*)((int64_t)puVar8 + 0x1c) = 0;
            *(void*)((int64_t)puVar8 + 0x24) = 0;
            *(void*)((int64_t)puVar8 + 0x2c) = 0;
            puVar8[6] = 0;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            *(void*)(puVar8 + 0xc) = 0;
            (*pcVar14)();
            if (puVar8 == puVar16) {
              puVar8 = puVar16;
              if (bVar3) {
                FUN_00d50b20();
                bVar2 = bVar3;
              }
              else {
                bVar2 = true;
              }
            }
            else {
              bVar2 = true;
              if (bVar3) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar2;
            lVar18 = *(int64_t *)(*(int64_t *)(arg1[0x21] + 0x10) + lVar15 * 8);
            local_a0 = 0;
            if (lVar18 != 0) {
              FUN_00d50b00();
            }
            local_a0 = '\x01';
            local_a8 = lVar18;
            FUN_014ee580();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            *(float *)((int64_t)puVar8 + 0x14) = *(float *)((int64_t)puVar8 + 0x14) + local_b8;
            *(float *)(puVar8 + 3) = *(float *)(puVar8 + 3) + local_b8;
            FUN_00d21140();
            lVar15 = lVar15 + 1;
            puVar16 = puVar8;
          } while (lVar15 < *(int *)(arg1[0x21] + 0xc));
        }
        pvVar11 = _pthread_getspecific((void*)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        FUN_014c2990();
        pvVar11 = _pthread_getspecific((void*)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        (**(code **)(*arg1 + 0x380))();
        FUN_014bb250();
        pvVar11 = _pthread_getspecific((void*)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        (**(code **)(*arg1 + 0x388))();
        FUN_014bb2b0();
        pvVar11 = _pthread_getspecific((void*)pcVar13);
        pcVar14 = pcVar9;
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
          pcVar14 = *(code **)(pcVar9 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8 + 0x20);
        }
        pVar12 = (void*)pcVar13;
        fVar23 = (float)(**(code **)(*arg1 + 0x3e0))();
        FUN_00d64850();
        *(float *)(pcVar14 + 0x80) = local_b8 + fVar23;
        FUN_00d64910();
        pvVar11 = _pthread_getspecific(pVar12);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar12 = (void*)pcVar9;
        }
        FUN_014bc170(uVar22);
        pvVar11 = _pthread_getspecific(pVar12);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014cfcc0();
        if (puVar10 != (void*)0x0) {
          FUN_00d50b20();
        }
        bVar2 = true;
      }
    }
    FUN_00e83070();
    *(void*)(this_ptr + 1) = 0;
    if (!bVar2 && pcVar9 != 0x0) {
      FUN_00d50b00();
    }
    *this_ptr = pcVar9;
    *(void*)(this_ptr + 1) = 1;
    if (local_90 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((bVar4) && (lVar17 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (puVar8 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return this_ptr;
}

