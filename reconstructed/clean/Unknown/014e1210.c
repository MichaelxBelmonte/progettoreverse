// Function: FUN_014e1210
// Address: 014e1210
// Size: 3251 bytes
// Class: Unknown

void FUN_014e1210(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int64_t lVar11;
  void*puVar12;
  void*puVar13;
  void*puVar14;
  void* pVar15;
  void*in_RCX;
  int64_t lVar16;
  uint64_t uVar17;
  int iVar18;
  int64_t *plVar19;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar20;
  uint uVar21;
  uint32_t uVar22;
  float fVar23;
  float fVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint64_t local_120;
  void*local_118;
  uint64_t local_110;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_80;
  uint8_t local_88 [16];
  float fStack_7c;
  int64_t local_60;
  float local_54;
  float local_48;
  int local_44;
  void*local_40;
  char local_38;
  
  lVar11 = *arg1;
  if (*(int *)(lVar11 + 0xc) < 2) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar20 = 0;
    local_44 = 0x7fffffff;
    lVar16 = 0;
    iVar9 = 0;
    local_120 = param_1;
    local_118 = in_RCX;
    local_110 = param_2;
    do {
      pVar15 = (void*)lVar16;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar11 + 0x10) + lVar20 * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific(pVar15);
      plVar19 = plVar1;
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        plVar19 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      cVar7 = (**(code **)(*plVar19 + 1000))();
      iVar8 = -1;
      if ((cVar7 != '\0') && (lVar11 = **(int64_t **)(plVar19[0x21] + 0x10), lVar11 != 0)) {
        FUN_00d50b00();
        iVar8 = *(int *)(lVar11 + 0xc);
        FUN_00d50b20();
      }
      if (iVar8 < local_44) {
        pvVar10 = _pthread_getspecific(pVar15);
        plVar19 = plVar1;
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar19 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        cVar7 = (**(code **)(*plVar19 + 1000))();
        local_44 = -1;
        if ((cVar7 != '\0') && (lVar11 = **(int64_t **)(plVar19[0x21] + 0x10), lVar11 != 0)) {
          FUN_00d50b00();
          local_44 = *(int *)(lVar11 + 0xc);
          FUN_00d50b20();
        }
      }
      pvVar10 = _pthread_getspecific(pVar15);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar8 = FUN_014c2f80();
      if (iVar9 < iVar8) {
        pvVar10 = _pthread_getspecific(pVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar9 = FUN_014c2f80();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar11 = *arg1;
      lVar16 = (int64_t)*(int *)(lVar11 + 0xc);
    } while (lVar20 < lVar16);
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &g_02572358;
    pcVar4 = g_02572370;
    (*g_02572370)();
    if (local_44 <= iVar9) {
      iVar8 = (iVar9 - local_44) + 1;
      do {
        local_40 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &g_02572358;
        (*pcVar4)();
        local_38 = '\0';
        FUN_00d21140();
        FUN_00d50b20();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &g_02572358;
    (*pcVar4)();
    FUN_00d227d0();
    if (local_44 <= iVar9) {
      lVar11 = *arg1;
      uVar17 = (uint64_t)*(uint *)(lVar11 + 0xc);
      if (0 < (int)*(uint *)(lVar11 + 0xc)) {
        iVar8 = local_44;
        do {
          if (0 < (int)uVar17) {
            lVar16 = 0;
            do {
              pVar15 = (void*)uVar17;
              lVar11 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar16 * 8);
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific(pVar15);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014c34a0();
              if (local_38 == '\0') {
                if (local_40 != (void*)0x0) {
                  FUN_00d50b00();
                  goto LAB_014e163d;
                }
              }
              else if (local_40 != (void*)0x0) {
LAB_014e163d:
                if (((!NAN(*(float *)((int64_t)local_40 + 0x14))) &&
                    (!NAN(*(float *)(local_40 + 4)))) && (!NAN(*(float *)(local_40 + 2)))) {
                  local_38 = '\0';
                  FUN_00d21140();
                }
                FUN_00d50b20();
              }
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
              lVar16 = lVar16 + 1;
              lVar11 = *arg1;
              uVar17 = (uint64_t)*(int *)(lVar11 + 0xc);
            } while (lVar16 < (int64_t)uVar17);
          }
          iVar8 = iVar8 + 1;
        } while (iVar9 + 1 != iVar8);
      }
    }
    pcVar5 = g_025e74b8;
    if (local_44 <= iVar9) {
      lVar16 = (int64_t)local_44;
      lVar11 = lVar16;
      do {
        lVar20 = *(int64_t *)(puVar12[2] + (lVar11 - lVar16) * 8);
        local_128 = lVar11;
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        iVar8 = *(int *)(lVar20 + 0xc);
        if (iVar8 == 0) {
          FUN_00d21140();
        }
        else if (iVar8 == 1) {
          puVar14 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar14 = &g_025e74a0;
          *(void*)((int64_t)puVar14 + 0xc) = 0;
          *(void*)((int64_t)puVar14 + 0x14) = 0;
          *(void*)((int64_t)puVar14 + 0x1c) = 0;
          *(void*)((int64_t)puVar14 + 0x24) = 0;
          *(void*)((int64_t)puVar14 + 0x2c) = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
          puVar14[10] = 0;
          puVar14[0xb] = 0;
          *(void*)(puVar14 + 0xc) = 0;
          uVar22 = (*pcVar5)();
          lVar11 = **(int64_t **)(lVar20 + 0x10);
          if (lVar11 != 0) {
            uVar22 = FUN_00d50b00();
          }
          FUN_014ee5f0(uVar22,0);
          if (lVar11 != 0) {
            FUN_00d50b20();
          }
          FUN_00d21140();
          FUN_00d50b20();
        }
        else {
          if (iVar8 < 1) {
            fVar23 = 0.0;
            bVar3 = false;
            local_60 = 0;
            local_a8 = 0.0;
            local_48 = 0.0;
            local_54 = 0.0;
          }
          else {
            local_54 = 0.0;
            lVar11 = 0;
            local_48 = 0.0;
            local_a8 = 0.0;
            fVar23 = 0.0;
            local_60 = 0;
            bVar3 = false;
            do {
              lVar2 = *(int64_t *)(*(int64_t *)(lVar20 + 0x10) + lVar11 * 8);
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              local_88._0_4_ = g_023b4df0;
              if (g_023b4df0 <= *(float *)(lVar2 + 0x10)) {
                local_88._0_4_ = *(float *)(lVar2 + 0x10);
              }
              local_88._4_4_ = SQRT(local_88._0_4_ * *(float *)(lVar2 + 0x20));
              local_88._0_4_ = g_02411280;
              if (g_02411280 <= local_88._4_4_) {
                local_88._0_4_ = local_88._4_4_;
              }
              local_88._4_4_ = *(float *)(lVar2 + 0x14);
              if (fVar23 < local_88._0_4_) {
                fVar23 = local_88._0_4_;
                if (local_60 == lVar2) {
                  if ((!bVar3) && (local_60 != 0)) {
                    FUN_00d50b00();
                    lVar6 = local_60;
LAB_014e19d2:
                    local_60 = lVar6;
                    bVar3 = true;
                  }
                }
                else {
                  FUN_00d50b00();
                  lVar6 = lVar2;
                  if ((!bVar3) || (local_60 == 0)) goto LAB_014e19d2;
                  FUN_00d50b20();
                  local_60 = lVar2;
                  bVar3 = true;
                }
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              local_48 = local_48 + local_88._0_4_;
              local_a8 = local_a8 + local_88._0_4_ * local_88._0_4_;
              local_54 = local_54 + local_88._4_4_ * local_88._0_4_;
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(lVar20 + 0xc));
          }
          fVar23 = g_02390124 - ((local_a8 - fVar23 * fVar23) / (local_48 - fVar23)) / fVar23;
          uVar21 = -(uint)(fVar23 <= g_02394270);
          local_88._0_4_ =
               (float)(uVar21 & g_023b3e04 | ~uVar21 & (uint)SQRT(fVar23) & g_02390140);
          fVar23 = *(float *)(local_60 + 0x14);
          puVar14 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar14 = &g_025e74a0;
          *(void*)((int64_t)puVar14 + 0xc) = 0;
          *(void*)((int64_t)puVar14 + 0x14) = 0;
          *(void*)((int64_t)puVar14 + 0x1c) = 0;
          *(void*)((int64_t)puVar14 + 0x24) = 0;
          *(void*)((int64_t)puVar14 + 0x2c) = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
          puVar14[10] = 0;
          puVar14[0xb] = 0;
          *(void*)(puVar14 + 0xc) = 0;
          uVar22 = (*pcVar5)();
          FUN_014ee5f0(uVar22,0);
          fVar23 = (g_02390124 - local_88._0_4_) * (local_54 / local_48) + fVar23 * local_88._0_4_
          ;
          *(float *)((int64_t)puVar14 + 0x14) = fVar23;
          *(float *)(puVar14 + 3) = fVar23;
          FUN_00d21140();
          FUN_00d50b20();
          if (bVar3) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        lVar11 = local_128 + 1;
      } while (iVar9 + 1 != (int)lVar11);
      iVar8 = local_44;
      do {
        lVar11 = puVar13[2];
        iVar18 = iVar8;
        if (*(int64_t *)(lVar11 + (int64_t)(iVar8 - local_44) * 8) == 0) {
          iVar18 = -1;
          if (iVar8 <= iVar9) {
            lVar20 = 0;
            do {
              if (*(int64_t *)(lVar11 + lVar16 * -8 + (int64_t)iVar8 * 8 + lVar20 * 8) != 0) {
                iVar18 = (int)lVar20 + iVar8;
                if (iVar8 < iVar18) goto LAB_014e1c96;
                goto LAB_014e1c13;
              }
              lVar20 = lVar20 + 1;
            } while (((int64_t)iVar9 + 1) - (int64_t)iVar8 != lVar20);
          }
          if (iVar8 < -1) {
LAB_014e1c96:
            fVar23 = (float)(iVar18 - (iVar8 + -1));
            lVar20 = *(int64_t *)(lVar11 + (int64_t)(iVar18 - local_44) * 8);
            auVar25 = insertps(ZEXT416(*(uint *)(lVar20 + 0x24)),*(void*)(lVar20 + 0x14),0x10
                              );
            lVar11 = *(int64_t *)(lVar11 + (int64_t)((iVar8 + -1) - local_44) * 8);
            local_88 = insertps(ZEXT416(*(uint *)(lVar11 + 0x24)),*(void*)(lVar11 + 0x14),
                                0x10);
            auVar26._0_4_ = auVar25._0_4_ - local_88._0_4_;
            auVar26._4_4_ = auVar25._4_4_ - local_88._4_4_;
            auVar26._8_4_ = auVar25._8_4_ - local_88._8_4_;
            auVar26._12_4_ = auVar25._12_4_ - local_88._12_4_;
            auVar25._4_4_ = fVar23;
            auVar25._0_4_ = fVar23;
            auVar25._8_8_ = 0;
            auVar25 = divps(auVar26,auVar25);
            local_48 = *(float *)(lVar11 + 0x28);
            fVar24 = *(float *)(lVar20 + 0x28) - local_48;
            do {
              puVar14 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar14 = &g_025e74a0;
              *(void*)((int64_t)puVar14 + 0xc) = 0;
              *(void*)((int64_t)puVar14 + 0x14) = 0;
              *(void*)((int64_t)puVar14 + 0x1c) = 0;
              *(void*)((int64_t)puVar14 + 0x24) = 0;
              *(void*)((int64_t)puVar14 + 0x2c) = 0;
              puVar14[6] = 0;
              puVar14[7] = 0;
              puVar14[8] = 0;
              puVar14[9] = 0;
              puVar14[10] = 0;
              puVar14[0xb] = 0;
              *(void*)(puVar14 + 0xc) = 0;
              (*pcVar5)();
              local_a8 = auVar25._0_4_;
              fStack_a4 = auVar25._4_4_;
              fStack_a0 = auVar25._8_4_;
              fStack_9c = auVar25._12_4_;
              local_88._0_4_ = local_88._0_4_ + local_a8;
              local_88._4_4_ = local_88._4_4_ + fStack_a4;
              local_48 = local_48 + fVar24 / fVar23;
              *(int *)((int64_t)puVar14 + 0xc) = iVar8;
              *(float *)((int64_t)puVar14 + 0x14) = local_88._4_4_;
              *(float *)(puVar14 + 3) = local_88._4_4_;
              *(void*)((int64_t)puVar14 + 0x1c) = 0x7fc000003dcccccd;
              fStack_80 = fStack_80 + fStack_a0;
              fStack_7c = fStack_7c + fStack_9c;
              *(float *)((int64_t)puVar14 + 0x24) = local_88._0_4_;
              *(float *)(puVar14 + 5) = local_48;
              *(void*)(puVar14 + 2) = 0x7fc00000;
              FUN_00d233f0(local_88._4_4_,iVar8 - local_44);
              FUN_00d50b20();
              iVar8 = iVar8 + 1;
            } while (iVar18 != iVar8);
          }
        }
LAB_014e1c13:
        iVar8 = iVar18 + 1;
      } while (iVar18 < iVar9);
    }
    puVar14 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar14 = &g_02572358;
    (*pcVar4)();
    if (0 < *(int *)((int64_t)puVar13 + 0xc)) {
      lVar11 = 0;
      do {
        lVar16 = *(int64_t *)(puVar13[2] + lVar11 * 8);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar16 != 0) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)((int64_t)puVar13 + 0xc));
    }
    local_138 = *local_118;
    local_130 = 0;
    FUN_014e2330((int)local_120,&local_138);
    *this_ptr = puVar14;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    if (puVar12 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

