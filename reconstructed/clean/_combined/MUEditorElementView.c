// ===================================================================
// MUEditorElementView — Complete reconstructed pseudocode
// 43 functions
// ===================================================================


// ============================================================
// 019bb770
// ============================================================
// Function: FUN_019bb770
// Address: 019bb770
// Size: 3782 bytes
// Class: MUEditorElementView
// String references:
//   "MUEditorElementView"

void FUN_019bb770(void)

{
  int64_t *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar9;
  int64_t lVar10;
  undefined7 uVar13;
  int64_t *plVar11;
  int64_t lVar12;
  float fVar14;
  float fVar15;
  uint32_t uVar16;
  float fVar17;
  float fVar19;
  uint local_c8;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int local_88;
  uint32_t local_84;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  uint32_t local_60;
  uint64_t local_5c;
  uint64_t local_50;
  uint64_t local_48;
  int64_t *local_40;
  uint64_t local_38;
  uint64_t uVar18;
  
  FUN_01d3abf0();
  fVar14 = (float)FUN_01e466c0();
  pplVar9 = &local_78;
  (**(code **)(*this_ptr + 0x490))();
  plVar1 = local_78;
  if ((g_02733c90 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_02714138 = FUN_0034cf20();
    g_02714120 = "MUEditorElementView";
    g_02714128 = 0x1f8;
    g_02714130 = FUN_0034ceb0;
    g_02714140 = 0;
    ram_0000000002714148 = 0;
    g_02714150 = 0;
    g_027141c8 = 0;
    ram_00000000027141d0 = 0;
    g_027141d8 = 0;
    g_027141da = 1;
    g_02714158 = 0;
    ram_0000000002714160 = 0;
    g_02714168 = 0;
    ram_0000000002714170 = 0;
    g_02714178 = 0;
    ram_0000000002714180 = 0;
    g_02714188 = 0;
    ram_0000000002714190 = 0;
    g_02714198 = 0;
    ram_00000000027141a0 = 0;
    g_027141a8 = 0;
    ram_00000000027141b0 = 0;
    g_027141b8 = 0;
    ram_00000000027141c0 = 0;
    g_027141e3 = 0;
    g_027141db = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019bb7f2;
  }
  pplVar9 = (int64_t **)&g_02802688;
LAB_019bb7f2:
  plVar1 = *pplVar9;
  if (plVar1 == (int64_t *)0x0) {
    local_84 = 1;
  }
  else {
    if (*(char *)(pplVar9 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    local_84 = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = 0;
  local_80 = (int64_t *)0x0;
  local_50 = 0;
  local_40 = (int64_t *)0x0;
  local_88 = 0;
  fVar17 = fVar14;
  do {
    local_38 = CONCAT44(local_38._4_4_,(int)uVar7);
    do {
      (**(code **)(*this_ptr + 0x658))();
      plVar8 = local_78;
      plVar11 = (int64_t *)*arg1;
      if (plVar11 == local_78) {
        if (((char)arg1[1] == '\0') && (local_78 != (int64_t *)0x0)) {
          if (local_70 == '\0') {
            FUN_00d50b00();
            goto LAB_019bb92d;
          }
LAB_019bb8e3:
          *(void*)(arg1 + 1) = 1;
          local_70 = '\0';
        }
        lVar10 = *arg1;
      }
      else {
        lVar10 = arg1[1];
        if (local_70 != '\0') {
          *arg1 = (int64_t)local_78;
          if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019bb8e3;
        }
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar8;
        if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019bb92d:
        *(void*)(arg1 + 1) = 1;
        lVar10 = *arg1;
      }
      if (lVar10 == 0) {
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019bc4b7:
        lVar10 = this_ptr[0x99];
        if (lVar10 != 0) {
          local_70 = '\0';
          local_78 = (int64_t *)0x0;
          local_5c = 0;
          local_68 = lVar10;
          for (lVar12 = 0; local_60 = (uint32_t)lVar12, lVar12 < *(int *)(lVar10 + 0xc);
              lVar12 = lVar12 + 1) {
            plVar11 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar12 * 8);
            local_78 = plVar11;
            (**(code **)(*plVar11 + 0x9c0))();
            (**(code **)(*plVar11 + 0x620))();
          }
          FUN_01a02090();
        }
        FUN_00d216c0();
        *(void*)((int64_t)this_ptr + 0x28c) = g_023dccdc;
        if ((char)this_ptr[0x51] != '\0') {
          *(void*)(this_ptr + 0x51) = 0;
          (**(code **)(*this_ptr + 0x620))();
        }
        if (((char)local_38 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = local_40;
        if ((char)local_84 == '\0' && plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        return;
      }
      iVar5 = FUN_01d3a5a0();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar5 == 6) goto LAB_019bc4b7;
      iVar5 = FUN_01d3a5a0();
    } while (iVar5 != 5);
    if ((char)this_ptr[0x51] == '\0') {
      *(void*)(this_ptr + 0x51) = 1;
      (**(code **)(*this_ptr + 0x620))(local_38 & 0xffffffff);
    }
    FUN_01d3abf0();
    uVar18 = FUN_01e466c0();
    fVar15 = (float)uVar18;
    if (fVar14 < fVar15) {
      local_88 = 1;
    }
    *(void*)((int64_t)this_ptr + 0x28c) = uVar18;
    if (fVar15 < fVar14) {
      local_88 = -1;
    }
    fVar19 = fVar14;
    uVar18 = (**(code **)(*this_ptr + 0x490))();
    plVar11 = local_78;
    uVar18 = CONCAT71((int7)((uint64_t)uVar18 >> 8),g_02733c90);
    if ((g_02733c90 == '\0') && (uVar18 = ___cxa_guard_acquire(), (int)uVar18 != 0)) {
      g_02714138 = FUN_0034cf20();
      g_02714120 = "MUEditorElementView";
      g_02714128 = 0x1f8;
      g_02714130 = FUN_0034ceb0;
      g_02714140 = 0;
      ram_0000000002714148 = 0;
      g_02714150 = 0;
      g_027141c8 = 0;
      ram_00000000027141d0 = 0;
      g_027141d8 = 0;
      g_027141da = 1;
      g_02714158 = 0;
      ram_0000000002714160 = 0;
      g_02714168 = 0;
      ram_0000000002714170 = 0;
      g_02714178 = 0;
      ram_0000000002714180 = 0;
      g_02714188 = 0;
      ram_0000000002714190 = 0;
      g_02714198 = 0;
      ram_00000000027141a0 = 0;
      g_027141a8 = 0;
      ram_00000000027141b0 = 0;
      g_027141b8 = 0;
      ram_00000000027141c0 = 0;
      g_027141e3 = 0;
      g_027141db = 0;
      uVar18 = ___cxa_guard_release();
    }
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x360))();
      uVar18 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if ((char)uVar18 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar11 = *pplVar9;
    if (plVar11 == local_80) {
      plVar8 = local_80;
      if (((char)local_38 == '\0') && (plVar11 != (int64_t *)0x0)) {
        if (*(char *)(pplVar9 + 1) != '\0') goto LAB_019bba70;
        local_48 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
        FUN_00d50b00();
        plVar8 = local_80;
      }
      else {
        local_48 = local_38 & 0xffffffff;
      }
    }
    else {
      plVar8 = plVar11;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (plVar11 != (int64_t *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_48 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
        if (((char)local_38 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_38 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_019bba70:
        *(void*)(pplVar9 + 1) = 0;
        local_48 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
        plVar11 = plVar8;
      }
    }
    local_80 = plVar8;
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_88 == -1) {
      if (fVar15 <= fVar17) {
        if ((local_80 != (int64_t *)0x0) && (cVar4 = FUN_01968c50(), cVar4 == '\0')) {
          uVar16 = (**(code **)(*local_80 + 0x928))();
          plVar11 = local_78;
          if ((local_70 == '\0') &&
             (((local_78 != (int64_t *)0x0 && (uVar16 = FUN_00d50b00(), local_70 != '\0')) &&
              (local_78 != (int64_t *)0x0)))) {
            uVar16 = FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0xda8))(uVar16,1);
          FUN_0199e1b0();
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*this_ptr + 0xe20))();
        local_c8 = *(uint *)((int64_t)local_78 + 0xc);
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < (int)local_c8) {
          lVar10 = (uint64_t)local_c8 + 1;
          do {
            local_c8 = local_c8 - 1;
            uVar16 = (**(code **)(*this_ptr + 0xe20))();
            local_38 = (uint64_t)local_c8;
            lVar12 = *(int64_t *)(*(int64_t *)(local_98 + 0x10) + local_38 * 8);
            local_a0 = 0;
            if (lVar12 != 0) {
              uVar16 = FUN_00d50b00();
            }
            local_a0 = '\x01';
            local_a8 = lVar12;
            uVar18 = (**(code **)(*this_ptr + 0xab0))(uVar16,&local_a8);
            plVar8 = local_78;
            uVar13 = (undefined7)((uint64_t)plVar11 >> 8);
            if (local_78 == local_40) {
              plVar8 = local_40;
              if (((char)local_50 != '\0') || (local_78 == (int64_t *)0x0)) {
                plVar11 = (int64_t *)(local_50 & 0xffffffff);
                goto joined_r0x019bc01d;
              }
              if (local_70 == '\0') {
                FUN_00d50b00();
                goto LAB_019bc030;
              }
LAB_019bbfb5:
              local_70 = '\0';
              local_50 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
              local_40 = plVar8;
            }
            else {
              if (local_70 != '\0') {
                if (((char)local_50 != '\0') && (local_40 != (int64_t *)0x0)) {
                  uVar18 = FUN_00d50b20();
                }
                goto LAB_019bbfb5;
              }
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              plVar11 = (int64_t *)CONCAT71(uVar13,1);
              if (((char)local_50 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
                local_40 = plVar8;
LAB_019bc030:
                plVar11 = (int64_t *)CONCAT71(uVar13,1);
                plVar8 = local_40;
              }
joined_r0x019bc01d:
              local_40 = plVar8;
              if ((local_70 == '\0') || (local_78 == (int64_t *)0x0)) {
                local_50 = (uint64_t)plVar11 & 0xffffffff;
              }
              else {
                FUN_00d50b20();
                local_50 = (uint64_t)plVar11 & 0xffffffff;
              }
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 == (int64_t *)0x0) ||
               (fVar17 = (float)(**(code **)(*local_40 + 0x4d8))(), fVar17 = fVar17 + fVar19,
               fVar19 = fVar15, fVar15 <= fVar17 + g_02390d00)) {
              (**(code **)(*this_ptr + 0xe20))();
              pvVar6 = _pthread_getspecific((void*)local_38);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar2 = (double)FUN_01259520();
              dVar3 = (double)(**(code **)(*this_ptr + 0x930))(fVar15);
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (dVar2 < dVar3) goto LAB_019bc15d;
            }
            else {
LAB_019bc15d:
              uVar16 = (**(code **)(*this_ptr + 0xe20))();
              plVar11 = *(int64_t **)(local_78[2] + local_38 * 8);
              if (plVar11 != (int64_t *)0x0) {
                uVar16 = FUN_00d50b00();
              }
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                uVar16 = FUN_00d50b20();
              }
              (**(code **)(*this_ptr + 0xdb0))(uVar16,1);
              FUN_0199e1b0();
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            lVar10 = lVar10 + -1;
          } while (1 < lVar10);
        }
      }
    }
    else if (local_88 == 1) {
      if (fVar17 <= fVar15) {
        if ((local_80 != (int64_t *)0x0) && (cVar4 = FUN_01968c50(), cVar4 == '\0')) {
          uVar16 = (**(code **)(*local_80 + 0x928))();
          plVar11 = local_78;
          if ((local_70 == '\0') &&
             (((local_78 != (int64_t *)0x0 && (uVar16 = FUN_00d50b00(), local_70 != '\0')) &&
              (local_78 != (int64_t *)0x0)))) {
            uVar16 = FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0xda8))(uVar16,1);
          FUN_0199e1b0();
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*this_ptr + 0xe20))();
        local_c8 = *(uint *)((int64_t)local_78 + 0xc);
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < (int)local_c8) {
          lVar10 = (uint64_t)local_c8 + 1;
          do {
            local_c8 = local_c8 - 1;
            uVar16 = (**(code **)(*this_ptr + 0xe20))();
            local_38 = (uint64_t)local_c8;
            lVar12 = *(int64_t *)(*(int64_t *)(local_98 + 0x10) + local_38 * 8);
            local_b0 = 0;
            if (lVar12 != 0) {
              uVar16 = FUN_00d50b00();
            }
            local_b0 = '\x01';
            local_b8 = lVar12;
            uVar18 = (**(code **)(*this_ptr + 0xab0))(uVar16,&local_b8);
            plVar8 = local_78;
            uVar13 = (undefined7)((uint64_t)plVar11 >> 8);
            if (local_78 == local_40) {
              plVar8 = local_40;
              if (((char)local_50 != '\0') || (local_78 == (int64_t *)0x0)) {
                plVar11 = (int64_t *)(local_50 & 0xffffffff);
                goto joined_r0x019bbc7d;
              }
              if (local_70 == '\0') {
                FUN_00d50b00();
                goto LAB_019bbc90;
              }
LAB_019bbc15:
              local_70 = '\0';
              local_50 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
              local_40 = plVar8;
            }
            else {
              if (local_70 != '\0') {
                if (((char)local_50 != '\0') && (local_40 != (int64_t *)0x0)) {
                  uVar18 = FUN_00d50b20();
                }
                goto LAB_019bbc15;
              }
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              plVar11 = (int64_t *)CONCAT71(uVar13,1);
              if (((char)local_50 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
                local_40 = plVar8;
LAB_019bbc90:
                plVar11 = (int64_t *)CONCAT71(uVar13,1);
                plVar8 = local_40;
              }
joined_r0x019bbc7d:
              local_40 = plVar8;
              if ((local_70 == '\0') || (local_78 == (int64_t *)0x0)) {
                local_50 = (uint64_t)plVar11 & 0xffffffff;
              }
              else {
                FUN_00d50b20();
                local_50 = (uint64_t)plVar11 & 0xffffffff;
              }
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 == (int64_t *)0x0) ||
               (fVar17 = (float)(**(code **)(*local_40 + 0x4d8))(), fVar17 <= fVar15)) {
              (**(code **)(*this_ptr + 0xe20))();
              pvVar6 = _pthread_getspecific((void*)local_38);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar2 = (double)FUN_0125a280();
              dVar3 = (double)(**(code **)(*this_ptr + 0x930))(fVar15);
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (dVar3 < dVar2) goto LAB_019bbdae;
            }
            else {
LAB_019bbdae:
              uVar16 = (**(code **)(*this_ptr + 0xe20))();
              plVar11 = *(int64_t **)(local_78[2] + local_38 * 8);
              if (plVar11 != (int64_t *)0x0) {
                uVar16 = FUN_00d50b00();
              }
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                uVar16 = FUN_00d50b20();
              }
              (**(code **)(*this_ptr + 0xdb0))(uVar16,1);
              FUN_0199e1b0();
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            lVar10 = lVar10 + -1;
          } while (1 < lVar10);
        }
      }
    }
    uVar7 = local_48;
    (**(code **)(*this_ptr + 0x620))();
    fVar17 = fVar15;
  } while( true );
}



// ============================================================
// 019c3840
// ============================================================
// Function: FUN_019c3840
// Address: 019c3840
// Size: 3717 bytes
// Class: MUEditorElementView

uint64_t FUN_019c3840(uint64_t param_1,byte param_2)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint8_t uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint32_t uVar10;
  void*puVar11;
  void *pvVar12;
  int64_t *plVar13;
  char *pcVar14;
  int64_t lVar15;
  void* pVar16;
  uint64_t unaff_RBX;
  uint64_t uVar17;
  int64_t *plVar18;
  int64_t *this_ptr;
  int64_t **pplVar19;
  undefined7 uVar20;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar21;
  uint64_t uVar22;
  void*local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  void*local_198;
  char local_190;
  void*local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  void*local_168;
  char local_160;
  void*local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  void*local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  void*local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  void*local_48;
  int64_t *local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0xe10))();
  if (*(int *)((int64_t)local_40 + 0xc) == 0) {
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    uVar8 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *this_ptr))();
    unaff_RBX = (uint64_t)uVar8;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar8 == '\0') {
      uVar17 = 0;
      goto LAB_019c46b1;
    }
  }
  (**(code **)(*this_ptr + 0xe28))();
  local_68 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_019c3910;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = local_68;
    if (*(int *)((int64_t)local_68 + 0xc) == 0) goto LAB_019c390b;
LAB_019c39b7:
    local_68 = plVar3;
    (**(code **)(*this_ptr + 0xe10))();
    plVar3 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pplVar19 = &local_40;
    (**(code **)(*this_ptr + 0xd40))();
    plVar18 = local_40;
    FUN_00083c20();
    if (plVar18 == (int64_t *)0x0) {
LAB_019c3a37:
      pplVar19 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar18 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_019c3a37;
    }
    plVar18 = *pplVar19;
    if (*(char *)(pplVar19 + 1) == '\0') {
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar19 + 1) = 0;
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_50 = plVar18;
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar16 = 0x2572358;
    *puVar11 = &g_02572358;
    (*g_02572370)();
    if ((plVar3 == (int64_t *)0x0) || (*(int *)((int64_t)plVar3 + 0xc) == 0)) {
      local_58 = (int64_t *)(**(code **)(*this_ptr + 0xf08))();
      if (!NAN((double)local_58)) {
        if (plVar18 == (int64_t *)0x0) {
          local_178 = local_68;
          local_170 = '\0';
          local_160 = '\0';
          local_168 = puVar11;
          bVar6 = FUN_01c9db50(local_58,&local_168);
          if ((local_160 != '\0') && (local_168 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((param_2 & bVar6) == 1) {
            cVar4 = FUN_019c3480();
            bVar7 = 1;
            bVar6 = 1;
            if (cVar4 != '\0') {
              local_150 = '\0';
              local_158 = puVar11;
              (**(code **)(*this_ptr + 0xdc8))(extraout_XMM0_Qa_00,1);
              local_58 = (int64_t *)0x0;
              local_60 = 0;
              if ((local_150 == '\0') || (local_158 == (void*)0x0)) goto LAB_019c3f8c;
              FUN_00d50b20();
            }
          }
        }
        else {
          uVar22 = FUN_01a8c310();
          plVar18 = local_40;
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar22 = FUN_00d50b20();
          }
          plVar13 = local_50;
          if (plVar18 == (int64_t *)0x0) goto LAB_019c3dd0;
          local_1c8 = local_50;
          local_1c0 = '\0';
          FUN_019c29e0(uVar22,&local_1c8);
          plVar18 = local_40;
          if (plVar13 == local_40) {
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_38[0] == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar18;
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            local_50 = plVar18;
          }
          if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_1b8 = local_50;
          local_1b0 = '\0';
          uVar22 = FUN_01ca2ec0(local_58);
          if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = (int64_t *)this_ptr[0x77];
          local_1a8 = local_68;
          local_1a0 = '\0';
          uVar5 = (**(code **)(&g_000015e8 + *this_ptr))();
          local_190 = '\0';
          local_198 = puVar11;
          bVar6 = FUN_01ca1b40(uVar5,uVar22,&local_198,param_2);
          if ((local_190 != '\0') && (local_198 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((param_2 & bVar6) == 1) {
            cVar4 = FUN_019c3480();
            bVar7 = 1;
            bVar6 = 1;
            if (cVar4 != '\0') {
              local_180 = '\0';
              local_188 = puVar11;
              (**(code **)(*this_ptr + 0xdc8))(extraout_XMM0_Qa_01,1);
              local_58 = (int64_t *)0x0;
              local_60 = 0;
              if ((local_180 == '\0') || (local_188 == (void*)0x0)) goto LAB_019c3f8c;
              FUN_00d50b20();
            }
          }
        }
        bVar7 = bVar6;
        local_60 = 0;
        local_58 = (int64_t *)0x0;
        goto LAB_019c3f8c;
      }
LAB_019c3dd0:
      uVar17 = 0;
    }
    else {
      uVar10 = FUN_01ca1fa0();
      if ((char)uVar10 == '\0') {
        FUN_00243390();
        plVar18 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar18 = (int64_t *)0x0;
          uVar22 = 0;
        }
        else {
          uVar20 = (undefined7)((uint64_t)plVar3 >> 8);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
            uVar22 = CONCAT71(uVar20,1);
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            uVar22 = CONCAT71(uVar20,1);
          }
        }
        if (param_2 != 0) {
          (**(code **)(*this_ptr + 0xda0))();
        }
        local_1d0 = '\0';
        local_1d8 = puVar11;
        local_60 = uVar22;
        local_58 = plVar18;
        bVar7 = FUN_01c97b90(param_2,&local_1d8);
        if ((local_1d0 != '\0') && (local_1d8 != (void*)0x0)) {
          FUN_00d50b20();
        }
LAB_019c3f8c:
        if ((param_2 != 0) && (bVar7 != 0)) {
          local_48 = puVar11;
          plVar13 = (int64_t *)FUN_00e8fc40();
          FUN_00022d50();
          uVar22 = (**(code **)(*plVar13 + 0x18))();
          plVar18 = g_026de560;
          if ((local_58 != (int64_t *)0x0) && (*(int *)((int64_t)local_58 + 0xc) != 0)) {
            local_148 = local_58;
            local_140 = '\0';
            if (g_026de560 != (int64_t *)0x0) {
              uVar22 = FUN_00d50b00();
            }
            local_40 = plVar18;
            local_38[0] = '\0';
            FUN_00ca0840(uVar22,&local_40);
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (*(int *)((int64_t)puVar11 + 0xc) != 0) {
            local_130 = '\0';
            local_138 = puVar11;
            uVar22 = FUN_00243390();
            lVar15 = CONCAT71(uStack_77,local_78);
            plVar18 = g_0270b8f0;
            if (local_70 == '\0') {
              if (lVar15 != 0) {
                uVar22 = FUN_00d50b00();
                plVar18 = g_0270b8f0;
              }
            }
            else {
              local_70 = '\0';
            }
            g_0270b8f0 = plVar18;
            if (plVar18 != (int64_t *)0x0) {
              uVar22 = FUN_00d50b00();
            }
            local_38[0] = '\0';
            local_40 = plVar18;
            FUN_00ca0840(uVar22,&local_40);
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (lVar15 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d403d0();
          local_128 = g_026de568;
          if (g_026de568 != 0) {
            FUN_00d50b00();
          }
          local_120 = '\x01';
          FUN_00d50b00();
          local_110 = '\0';
          pplVar19 = &local_118;
          local_118 = plVar13;
          FUN_00d40470(pplVar19,&stack0xffffffffffffff48,1,0);
          pVar16 = (void*)pplVar19;
          if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d23310();
          plVar13 = local_40;
          local_78 = local_38[0];
          pcVar14 = local_38;
          if (local_38[0] == '\0') {
            pcVar14 = &local_78;
          }
          *pcVar14 = '\0';
          if ((local_38[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = local_50;
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d23310();
            plVar13 = local_40;
            pcVar14 = local_38;
            if (local_38[0] == '\0') {
              pcVar14 = &local_78;
            }
            local_78 = local_38[0];
            *pcVar14 = '\0';
            if ((local_38[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar12 = _pthread_getspecific(pVar16);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            local_100 = '\0';
            local_108 = (int64_t *)0x0;
            FUN_00cb1fa0();
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              (**(code **)(*local_108 + 0x10))();
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          puVar11 = local_48;
          if (*(int *)((int64_t)local_48 + 0xc) != 0) goto LAB_019c437c;
LAB_019c4658:
          bVar7 = 1;
          local_50 = plVar18;
        }
      }
      else {
        if (param_2 == 0) {
          uVar17 = CONCAT71((uint7)(uint3)((uint)uVar10 >> 8),1);
          goto LAB_019c4680;
        }
        local_38[0] = '\0';
        local_40 = plVar3;
        FUN_00d214d0(extraout_XMM0_Qa,*(void*)((int64_t)puVar11 + 0xc));
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0xda0))();
        (**(code **)(*this_ptr + 0xa00))();
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00d3af20();
        lVar15 = local_c8;
        if (local_c0 == '\0') {
          if (local_c8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
        plVar18 = local_50;
        FUN_00db2790();
        if (lVar15 != 0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        local_58 = (int64_t *)0x0;
        if (*(int *)((int64_t)puVar11 + 0xc) == 0) goto LAB_019c4658;
LAB_019c437c:
        bVar7 = 1;
        local_f0 = '\0';
        local_f8 = puVar11;
        uVar21 = FUN_012664b0();
        uVar22 = uVar21;
        if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
          uVar22 = FUN_00d50b20();
        }
        if (plVar18 == (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[0x69] + 0x60))(uVar21);
          local_50 = (int64_t *)0x0;
          plVar18 = (int64_t *)0x0;
        }
        else {
          local_e0 = '\0';
          local_d0 = '\0';
          local_e8 = puVar11;
          local_d8 = plVar18;
          local_50 = plVar18;
          FUN_01ca29a0(uVar22,&local_d8);
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
            FUN_00d50b20();
          }
          plVar13 = (int64_t *)this_ptr[0x69];
          (**(code **)(*this_ptr + 0xa18))();
          plVar18 = local_40;
          pvVar12 = _pthread_getspecific(pVar16);
          plVar2 = local_40;
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), plVar18 = plVar2, lVar15 != 0))
          {
            plVar18 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          FUN_016c98e0();
          (**(code **)(*plVar13 + 0x60))();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar17 = CONCAT71((int7)((uint64_t)plVar18 >> 8),bVar7 != 0);
      if (((char)local_60 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_019c4680:
    FUN_00d50b20();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == (int64_t *)0x0) {
LAB_019c3910:
      bVar1 = true;
    }
    else {
      plVar3 = local_68;
      if (*(int *)((int64_t)local_40 + 0xc) != 0) goto LAB_019c39b7;
LAB_019c390b:
      bVar1 = false;
    }
    iVar9 = FUN_01ca3250();
    uVar17 = CONCAT71((int7)(unaff_RBX >> 8),iVar9 != 0);
    if ((iVar9 != 0) && (param_2 != 0)) {
      uVar10 = FUN_01ca3250();
      (**(code **)(&UNK_000015e0 + *this_ptr))(*this_ptr,uVar10);
      plVar3 = local_40;
      plVar18 = local_68;
      if (local_68 != local_40) {
        if (local_38[0] != '\0') {
          if (!bVar1) {
            local_68 = local_40;
            FUN_00d50b20();
          }
          goto LAB_019c39b7;
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar18 = plVar3;
        if (!bVar1) {
          local_68 = plVar3;
          FUN_00d50b20();
        }
      }
      plVar3 = plVar18;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019c39b7;
    }
  }
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_019c46b1:
  return uVar17 & 0xffffffff;
}



// ============================================================
// 019cb6b0
// ============================================================
// Function: FUN_019cb6b0
// Address: 019cb6b0
// Size: 2629 bytes
// Class: MUEditorElementView

uint64_t FUN_019cb6b0(uint64_t param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  void*puVar11;
  uint64_t uVar12;
  void* pVar13;
  int iVar14;
  int64_t *this_ptr;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  int local_68;
  int64_t local_58;
  char local_50;
  bool local_40;
  
  lVar5 = local_80;
  (**(code **)(*this_ptr + 0xe20))();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  local_40 = *(int *)(local_80 + 0xc) == 0;
  if ((!local_40) && (param_2 != '\0')) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_80 = 0;
    local_68 = -1;
    bVar4 = false;
    bVar2 = false;
    lVar15 = 0;
    lVar16 = 0;
LAB_019cb7d9:
    lVar9 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (local_68 < *(int *)(lVar5 + 0xc)) {
      lVar17 = *(int64_t *)(lVar5 + 0x10);
      local_80 = *(int64_t *)(lVar17 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((void*)lVar17);
      pVar13 = (void*)lVar17;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_58 == lVar15) {
          lVar9 = lVar15;
          bVar3 = bVar2;
          if ((!bVar2) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_019cb954;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_019cb999:
          lVar15 = lVar9;
          bVar2 = bVar3;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar9 = local_58;
            if ((bVar2) && (lVar15 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_019cb999;
          }
          lVar9 = local_58;
          if ((bVar2) && (lVar15 != 0)) {
            FUN_00d50b20();
          }
LAB_019cb954:
          local_50 = '\0';
          lVar15 = lVar9;
          bVar2 = true;
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507e40();
        if (local_58 == lVar16) {
          lVar9 = lVar16;
          bVar3 = bVar4;
          if ((!bVar4) && (local_58 != 0)) {
            bVar3 = true;
            if (local_50 != '\0') goto LAB_019cbac4;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_019cbab0:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar9 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar4) && (lVar16 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_019cbab0;
          }
          bVar3 = true;
          if ((bVar4) && (lVar16 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_019cbac4:
        bVar4 = bVar3;
        if (lVar9 == 0) {
          lVar16 = 0;
        }
        else {
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_01507f00();
          iVar1 = *(int *)(puVar8 + 3);
          lVar17 = (int64_t)iVar1;
          iVar14 = iVar1 + 3;
          if (-1 < lVar17) {
            iVar14 = iVar1;
          }
          lVar16 = lVar9;
          if (3 < lVar17) {
            iVar14 = iVar14 >> 2;
            lVar9 = 0;
            do {
              if (*(int *)(puVar8[2] + lVar9 * 4) == iVar7) goto LAB_019cb7d9;
              lVar9 = lVar9 + 1;
            } while (iVar14 != (int)lVar9);
          }
          FUN_00c8e340(iVar14,1);
          *(int *)(puVar8[2] + lVar17) = iVar7;
        }
      }
      goto LAB_019cb7d9;
    }
    FUN_001159b0();
    uVar12 = (uint64_t)(*(int *)(puVar8 + 3) + 3U);
    local_40 = *(int *)(puVar8 + 3) + 3U < 7;
    if (!local_40) {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_02572358;
      (*g_02572370)();
      (**(code **)(*this_ptr + 0x9b0))();
      if (local_80 != 0) {
        FUN_00d50b00();
        local_68 = -1;
LAB_019cbca0:
        lVar9 = (int64_t)local_68;
        local_68 = local_68 + 1;
        if (local_68 < *(int *)(local_80 + 0xc)) {
          uVar12 = *(uint64_t *)(local_80 + 0x10);
          lVar9 = *(int64_t *)(uVar12 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)uVar12);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            pvVar10 = _pthread_getspecific((void*)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar10 = _pthread_getspecific((void*)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            if (local_58 == lVar15) {
              lVar17 = lVar15;
              bVar3 = bVar2;
              if ((!bVar2) && (local_58 != 0)) {
                if (local_50 != '\0') goto LAB_019cbe24;
                FUN_00d50b00();
                bVar3 = true;
              }
LAB_019cbe65:
              lVar15 = lVar17;
              bVar2 = bVar3;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                lVar17 = local_58;
                if ((bVar2) && (lVar15 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_019cbe65;
              }
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
LAB_019cbe24:
              local_50 = '\0';
              lVar15 = lVar17;
              bVar2 = true;
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((void*)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507e40();
            if (local_58 == lVar16) {
              lVar17 = lVar16;
              bVar3 = bVar4;
              if ((!bVar4) && (local_58 != 0)) {
                bVar3 = true;
                if (local_50 != '\0') goto LAB_019cbf79;
                FUN_00d50b00();
                bVar3 = true;
              }
LAB_019cbf65:
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar17 = local_58;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                if ((bVar4) && (lVar16 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_019cbf65;
              }
              bVar3 = true;
              if ((bVar4) && (lVar16 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_019cbf79:
            bVar4 = bVar3;
            lVar16 = lVar17;
            if (lVar16 == 0) {
              lVar16 = 0;
            }
            else {
              pvVar10 = _pthread_getspecific((void*)uVar12);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507f00();
              if (3 < *(int *)(puVar8 + 3)) {
                lVar17 = 0;
                do {
                  pvVar10 = _pthread_getspecific((void*)uVar12);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar6 = FUN_01751560();
                  if (cVar6 != '\0') {
                    local_50 = '\0';
                    FUN_00d21140();
                    local_58 = lVar9;
                    break;
                  }
                  lVar17 = lVar17 + 1;
                  iVar1 = *(int *)(puVar8 + 3);
                  iVar14 = iVar1 + 3;
                  if (-1 < iVar1) {
                    iVar14 = iVar1;
                  }
                  uVar12 = (uint64_t)(uint)(iVar14 >> 2);
                } while (lVar17 < iVar14 >> 2);
              }
            }
          }
          goto LAB_019cbca0;
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar12 = (**(code **)(*this_ptr + 0xdc8))();
      if (puVar11 != (void*)0x0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((bVar4) && (lVar16 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((bVar2) && (lVar15 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if (lVar5 == 0) goto LAB_019cc15a;
  }
  uVar12 = FUN_00d50b20();
LAB_019cc15a:
  return CONCAT71((int7)(uVar12 >> 8),local_40) ^ 1;
}



// ============================================================
// 019cc590
// ============================================================
// Function: FUN_019cc590
// Address: 019cc590
// Size: 2139 bytes
// Class: MUEditorElementView

uint64_t FUN_019cc590(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void*puVar6;
  int64_t lVar7;
  void *pvVar8;
  void*puVar9;
  void* pVar10;
  int iVar11;
  int64_t lVar12;
  int64_t *this_ptr;
  int64_t lVar13;
  uint64_t unaff_R13;
  bool bVar14;
  int64_t local_90;
  char local_88;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t local_50;
  char local_48;
  uint8_t local_39;
  uint64_t local_38;
  
  lVar2 = local_78;
  uVar4 = (**(code **)(*this_ptr + 0xe20))();
  if ((local_70 == '\0') && (local_78 != 0)) {
    uVar4 = FUN_00d50b00();
  }
  bVar14 = *(int *)(local_78 + 0xc) == 0;
  uVar5 = CONCAT71((int7)((uint64_t)uVar4 >> 8),bVar14);
  if (bVar14) {
    uVar5 = uVar5 & 0xffffffff;
  }
  else {
    uVar5 = uVar5 & 0xffffffff;
    if (param_2 != '\0') {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      local_78 = 0;
      local_60 = -1;
      local_38 = 0;
      lVar13 = 0;
LAB_019cc6a3:
      lVar7 = (int64_t)local_60;
      local_60 = local_60 + 1;
      if (local_60 < *(int *)(lVar2 + 0xc)) {
        lVar12 = *(int64_t *)(lVar2 + 0x10);
        local_78 = *(int64_t *)(lVar12 + 8 + lVar7 * 8);
        pvVar8 = _pthread_getspecific((void*)lVar12);
        pVar10 = (void*)lVar12;
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        lVar7 = local_50;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_0152ebe0();
          lVar7 = local_50;
          if (local_50 == lVar13) {
            lVar7 = lVar13;
            if (((char)local_38 != '\0') || (local_50 == 0)) {
              uVar5 = local_38 & 0xffffffff;
              goto joined_r0x019cc86b;
            }
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto joined_r0x019cc96b;
            }
LAB_019cc814:
            local_48 = '\0';
            local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
            lVar13 = lVar7;
          }
          else {
            if (local_48 != '\0') {
              if (((char)local_38 != '\0') && (lVar13 != 0)) {
                uVar4 = FUN_00d50b20();
              }
              goto LAB_019cc814;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            if (((char)local_38 != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
joined_r0x019cc96b:
            uVar5 = CONCAT71((int7)(unaff_R13 >> 8),1);
joined_r0x019cc86b:
            lVar13 = lVar7;
            if ((local_48 == '\0') || (local_50 == 0)) {
              local_38 = uVar5 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_38 = uVar5 & 0xffffffff;
            }
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar3 = FUN_01507f00();
          iVar1 = *(int *)(puVar6 + 3);
          unaff_R13 = (uint64_t)iVar1;
          iVar11 = iVar1 + 3;
          if (-1 < (int64_t)unaff_R13) {
            iVar11 = iVar1;
          }
          if (3 < (int64_t)unaff_R13) {
            iVar11 = iVar11 >> 2;
            lVar7 = 0;
            do {
              if (*(int *)(puVar6[2] + lVar7 * 4) == iVar3) goto LAB_019cc6a3;
              lVar7 = lVar7 + 1;
            } while (iVar11 != (int)lVar7);
          }
          FUN_00c8e340(iVar11,1);
          *(int *)(puVar6[2] + unaff_R13) = iVar3;
        }
        goto LAB_019cc6a3;
      }
      FUN_001159b0();
      bVar14 = *(int *)(puVar6 + 3) + 3U < 7;
      uVar5 = CONCAT71((int7)((uint64_t)&local_50 >> 8),bVar14);
      if (!bVar14) {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02572358;
        (*g_02572370)();
        (**(code **)(*this_ptr + 0x9b0))();
        if (local_78 != 0) {
          FUN_00d50b00();
          local_60 = -1;
          local_39 = bVar14;
LAB_019cca83:
          lVar7 = (int64_t)local_60;
          local_60 = local_60 + 1;
          if (local_60 < *(int *)(local_78 + 0xc)) {
            lVar12 = *(int64_t *)(local_78 + 0x10);
            lVar7 = *(int64_t *)(lVar12 + 8 + lVar7 * 8);
            pvVar8 = _pthread_getspecific((void*)lVar12);
            pVar10 = (void*)lVar12;
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            lVar12 = local_50;
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (lVar12 != 0) {
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar4 = FUN_0152ebe0();
              lVar12 = local_50;
              if (local_50 == lVar13) {
                lVar12 = lVar13;
                if (((char)local_38 != '\0') || (local_50 == 0)) {
                  unaff_R13 = local_38 & 0xffffffff;
                  goto joined_r0x019ccc4b;
                }
                if (local_48 == '\0') {
                  FUN_00d50b00();
                  goto joined_r0x019ccd55;
                }
LAB_019ccbf4:
                local_48 = '\0';
                local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
                lVar13 = lVar12;
              }
              else {
                if (local_48 != '\0') {
                  if (((char)local_38 != '\0') && (lVar13 != 0)) {
                    uVar4 = FUN_00d50b20();
                  }
                  goto LAB_019ccbf4;
                }
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
                if (((char)local_38 != '\0') && (lVar13 != 0)) {
                  FUN_00d50b20();
                }
joined_r0x019ccd55:
                unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
joined_r0x019ccc4b:
                lVar13 = lVar12;
                if ((local_48 == '\0') || (local_50 == 0)) {
                  local_38 = unaff_R13 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_38 = unaff_R13 & 0xffffffff;
                }
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_01507f00();
              iVar1 = *(int *)(puVar6 + 3);
              iVar11 = iVar1 + 3;
              if (-1 < iVar1) {
                iVar11 = iVar1;
              }
              if (3 < iVar1) {
                lVar12 = 0;
                do {
                  if (*(int *)(puVar6[2] + lVar12 * 4) == iVar3) {
                    local_48 = '\0';
                    local_50 = lVar7;
                    FUN_00d21140();
                    if ((local_48 != '\0') && (local_50 != 0)) {
                      FUN_00d50b20();
                    }
                    break;
                  }
                  lVar12 = lVar12 + 1;
                } while (iVar11 >> 2 != (int)lVar12);
              }
            }
            goto LAB_019cca83;
          }
          FUN_001159b0();
          FUN_00d50b20();
          uVar5 = CONCAT71((int7)((uint64_t)&local_50 >> 8),local_39);
        }
        (**(code **)(*this_ptr + 0xdc8))();
        if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if (((char)local_38 != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) goto LAB_019cce2c;
    }
  }
  FUN_00d50b20();
LAB_019cce2c:
  return (uVar5 ^ 1) & 0xffffffff;
}



// ============================================================
// 019cd110
// ============================================================
// Function: FUN_019cd110
// Address: 019cd110
// Size: 2069 bytes
// Class: MUEditorElementView

uint64_t FUN_019cd110(void* param_1,char param_2)

{
  void*puVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  void*puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *this_ptr;
  int iVar11;
  uint8_t local_c0 [4];
  int local_bc;
  uint32_t local_84;
  void*local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  uint64_t local_48;
  char local_40;
  uint8_t local_31;
  
  (**(code **)(*this_ptr + 0xe20))();
  lVar2 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_31 = *(int *)(lVar2 + 0xc) == 0;
  if ((!(bool)local_31) && (param_2 != '\0')) {
    (**(code **)(*this_ptr + 0xa00))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar6 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_50 = lVar6;
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_84 = 0xffffffff;
    local_70 = '\0';
    local_78 = 0;
    local_68 = lVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_80 = puVar5;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar10 = -local_60._4_4_;
        }
        else {
          iVar10 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar10 = 0;
        }
        local_60 = CONCAT44(iVar10,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (*(int *)(local_68 + 0xc) <= iVar10) break;
      lVar9 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar9);
      pVar8 = (void*)lVar9;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019cd360;
        }
      }
      else if (local_48 != 0) {
LAB_019cd360:
        pvVar4 = _pthread_getspecific(pVar8);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar8 = (void*)local_50;
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507970();
        FUN_016caaa0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016cae50(&local_84,&local_48);
        iVar10 = *(int *)(local_80 + 3);
        iVar11 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        if (7 < iVar10) {
          iVar11 = iVar11 >> 3;
          lVar6 = local_80[2];
          do {
            if (((*(int *)(lVar6 + 4) != 0) && (local_48._4_4_ != 0)) &&
               (cVar3 = FUN_00e7c000(), cVar3 != '\0')) goto LAB_019cd280;
            lVar6 = lVar6 + 8;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar10 = *(int *)(local_80 + 3);
        }
        FUN_00c8e340();
        *(int64_t *)(local_80[2] + (int64_t)iVar10) = local_48;
LAB_019cd280:
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    lVar6 = local_50;
    local_31 = *(int *)(local_80 + 3) + 7U < 0xf;
    if (*(int *)(local_80 + 3) + 7U < 0xf) {
LAB_019cd931:
      uVar7 = FUN_00d50b20();
    }
    else {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*g_02572370)();
      (**(code **)(*this_ptr + 0x9b0))();
      lVar9 = local_78;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019cd5ee;
        }
      }
      else if (local_78 != 0) {
LAB_019cd5ee:
        local_70 = '\0';
        local_78 = 0;
        local_68 = lVar9;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar10 = -local_60._4_4_;
            }
            else {
              iVar10 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar10);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar10 = 0;
            }
            local_60 = CONCAT44(iVar10,(int)local_60);
          }
          lVar6 = (int64_t)(int)local_60;
          iVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (*(int *)(local_68 + 0xc) <= iVar10) break;
          lVar9 = *(int64_t *)(local_68 + 0x10);
          local_78 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((void*)lVar9);
          pVar8 = (void*)lVar9;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_019cd700;
            }
          }
          else if (local_48 != 0) {
LAB_019cd700:
            pvVar4 = _pthread_getspecific(pVar8);
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar8 = (void*)local_50;
            }
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507970();
            FUN_016caaa0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016cae50(&local_84,local_c0);
            iVar10 = *(int *)(local_80 + 3);
            iVar11 = iVar10 + 7;
            if (-1 < iVar10) {
              iVar11 = iVar10;
            }
            if (7 < iVar10) {
              iVar11 = iVar11 >> 3;
              lVar6 = local_80[2];
              do {
                if (((*(int *)(lVar6 + 4) != 0) && (local_bc != 0)) &&
                   (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
                  local_48 = local_78;
                  local_40 = '\0';
                  FUN_00d21140();
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  break;
                }
                lVar6 = lVar6 + 8;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        lVar6 = local_50;
      }
      uVar7 = (**(code **)(*this_ptr + 0xdc8))();
      puVar1 = local_80;
      if (puVar5 != (void*)0x0) {
        uVar7 = FUN_00d50b20();
      }
      if (puVar1 != (void*)0x0) goto LAB_019cd931;
    }
    if (lVar6 != 0) {
      uVar7 = FUN_00d50b20();
    }
    if (lVar2 == 0) goto LAB_019cd953;
  }
  uVar7 = FUN_00d50b20();
LAB_019cd953:
  return CONCAT71((int7)((uint64_t)uVar7 >> 8),local_31) ^ 1;
}



// ============================================================
// 019c0170
// ============================================================
// Function: FUN_019c0170
// Address: 019c0170
// Size: 1423 bytes
// Class: MUEditorElementView

void FUN_019c0170(int64_t *param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  void* pVar9;
  int iVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  uint64_t local_b8;
  uint32_t local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  int64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  local_38 = param_1;
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
    }
  }
  else if (*(int *)(*param_2 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d23310();
    pVar9 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),(char)local_c8);
    plVar8 = &local_60;
    if ((char)local_c8 != '\0') {
      plVar8 = &local_c8;
    }
    local_60 = CONCAT71(local_60._1_7_,(char)local_c8);
    *(void*)plVar8 = 0;
    if (((char)local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar9);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_60 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_a0 = '\0';
      local_a8 = (int64_t *)0x0;
      FUN_00cb1fa0();
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    lVar3 = *param_2;
    local_88 = puVar4;
    if (lVar3 != 0) {
      local_c8._0_1_ = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = lVar3;
      if (0 < *(int *)(lVar3 + 0xc)) {
        pVar9 = 0;
        do {
          pVar7 = pVar9;
          pvVar2 = _pthread_getspecific(pVar9);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          local_80 = local_60;
          if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (*local_38 == 0) {
            uVar5 = (**(code **)(*arg1 + 0x988))();
            lVar11 = local_60;
            if (local_60 == 0) {
              local_78 = 0;
              lVar11 = 0;
            }
            else {
              local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar11 = *(int64_t *)(*local_38 + 0x10);
            if (lVar11 == 0) {
              lVar11 = 0;
              local_78 = 0;
            }
            else {
              uVar5 = FUN_00d50b00();
              local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            }
          }
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01299fe0();
          lVar6 = local_60;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_019c0500;
            }
          }
          else if (local_60 != 0) {
LAB_019c0500:
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar6;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar10 = -local_48._4_4_;
                }
                else {
                  iVar10 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar10);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar10 = 0;
                }
                local_48 = CONCAT44(iVar10,(int)local_48);
              }
              lVar6 = (int64_t)(int)local_48;
              iVar10 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              if (*(int *)(local_50 + 0xc) <= iVar10) break;
              local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar6 * 8);
              pvVar2 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar6 = local_98;
              if (local_90 == '\0') {
                if (local_98 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_90 = '\0';
              }
              local_70 = lVar6;
              local_68 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_70 = local_60;
                local_68 = '\0';
                FUN_00d21140();
                if ((local_68 != '\0') && (local_70 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (lVar11 != 0)) {
            FUN_00d50b20();
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          pVar9 = pVar9 + 1;
          local_b8 = CONCAT44(local_b8._4_4_,pVar9);
        } while ((int)pVar9 < *(int *)(lVar3 + 0xc));
      }
      FUN_001159b0();
    }
    *this_ptr = (int64_t)local_88;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}



// ============================================================
// 019a8300
// ============================================================
// Function: FUN_019a8300
// Address: 019a8300
// Size: 1072 bytes
// Class: MUEditorElementView
// String references:
//   "MUEditorElementView"

void* FUN_019a8300(uint32_t param_1,uint32_t param_2)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t **pplVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  undefined7 uVar11;
  uint64_t uVar12;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar3 = *(int64_t *)(arg1 + 0x38);
  uVar5 = *(uint *)(lVar3 + 0xc);
  uVar12 = (uint64_t)uVar5;
  if (0 < (int)uVar5) {
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    uVar8 = 0;
    plVar7 = (int64_t *)0x0;
    do {
      uVar5 = uVar5 - 1;
      plVar10 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar5 * 8);
      local_58 = plVar10;
      local_50 = '\0';
      uVar4 = 0;
      if ((g_02733c90 == '\0') && (uVar4 = ___cxa_guard_acquire(), (int)uVar4 != 0)) {
        g_02714138 = FUN_0034cf20();
        g_02714120 = "MUEditorElementView";
        g_02714128 = 0x1f8;
        g_02714130 = FUN_0034ceb0;
        g_02714140 = 0;
        ram_0000000002714148 = 0;
        g_02714150 = 0;
        g_027141c8 = 0;
        ram_00000000027141d0 = 0;
        g_027141d8 = 0;
        g_027141da = 1;
        g_02714158 = 0;
        ram_0000000002714160 = 0;
        g_02714168 = 0;
        ram_0000000002714170 = 0;
        g_02714178 = 0;
        ram_0000000002714180 = 0;
        g_02714188 = 0;
        ram_0000000002714190 = 0;
        g_02714198 = 0;
        ram_00000000027141a0 = 0;
        g_027141a8 = 0;
        ram_00000000027141b0 = 0;
        g_027141b8 = 0;
        ram_00000000027141c0 = 0;
        g_027141e3 = 0;
        g_027141db = 0;
        uVar4 = ___cxa_guard_release();
      }
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        uVar4 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if ((char)uVar4 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      plVar10 = *pplVar6;
      cVar1 = (char)uVar8;
      if (plVar10 == plVar7) {
        plVar9 = plVar7;
        if ((cVar1 == '\0') && (plVar10 != (int64_t *)0x0)) {
          if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019a8413;
          local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          FUN_00d50b00();
        }
        else {
          local_40 = uVar8;
        }
      }
      else {
        plVar9 = plVar10;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar10 != (int64_t *)0x0) {
            uVar4 = FUN_00d50b00();
          }
          local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          if ((cVar1 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar1 != '\0') && (plVar7 != (int64_t *)0x0)) {
            uVar4 = FUN_00d50b20();
          }
LAB_019a8413:
          *(void*)(pplVar6 + 1) = 0;
          local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          plVar10 = plVar9;
        }
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = local_48;
      if ((plVar9 != (int64_t *)0x0) &&
         (cVar1 = (**(code **)(*plVar9 + 0x958))(param_1,param_2), uVar8 = local_48, cVar1 != '\0'))
      {
        (**(code **)(*plVar9 + 0x928))();
        plVar7 = local_58;
        uVar11 = (undefined7)((uint64_t)plVar10 >> 8);
        plVar10 = local_58;
        if (local_58 == local_38) {
          uVar8 = local_48;
          plVar7 = local_38;
          if (((char)local_48 == '\0') && (local_58 != (int64_t *)0x0)) {
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
            if (local_50 != '\0') goto joined_r0x019a8601;
            FUN_00d50b00();
LAB_019a857b:
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
          }
joined_r0x019a861d:
          local_38 = plVar7;
          plVar10 = local_58;
          if (local_50 != '\0') {
LAB_019a8581:
            plVar10 = local_58;
            plVar7 = local_38;
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar10 = local_58;
              plVar7 = local_38;
            }
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            uVar8 = CONCAT71(uVar11,1);
            if ((char)local_48 == '\0') goto joined_r0x019a861d;
            if (local_38 != (int64_t *)0x0) {
              FUN_00d50b20();
              local_38 = plVar7;
              goto LAB_019a857b;
            }
            local_38 = plVar7;
            plVar10 = local_58;
            if (local_50 == '\0') goto joined_r0x019a8601;
            goto LAB_019a8581;
          }
          uVar8 = CONCAT71(uVar11,1);
          if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar10 = local_58;
          }
        }
joined_r0x019a8601:
        local_58 = plVar7;
        if (local_58 == (int64_t *)0x0) {
          local_38 = (int64_t *)0x0;
          local_58 = plVar10;
        }
        else {
          local_50 = '\0';
          local_38 = local_58;
          FUN_00d235a0();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((int64_t)uVar12 < 2) goto LAB_019a86eb;
      uVar12 = uVar12 - 1;
      lVar3 = *(int64_t *)(arg1 + 0x38);
      local_48 = uVar8;
      uVar8 = local_40;
      plVar7 = plVar9;
    } while( true );
  }
  uVar8 = 0;
  plVar7 = (int64_t *)0x0;
  cVar1 = '\0';
  plVar9 = (int64_t *)0x0;
LAB_019a8700:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar1 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_019a86eb:
  cVar1 = (char)local_40;
  plVar7 = local_38;
  goto LAB_019a8700;
}



// ============================================================
// 019c29e0
// ============================================================
// Function: FUN_019c29e0
// Address: 019c29e0
// Size: 1405 bytes
// Class: MUEditorElementView

void FUN_019c29e0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar7;
  double dVar8;
  double dVar9;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*arg1 + 0xa18))();
  if (local_40 == (int64_t *)0x0) {
    bVar7 = true;
  }
  else {
    FUN_01a8c310();
    (**(code **)(*arg1 + 0xa18))();
    bVar7 = local_50 == local_80;
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar7) {
    *(void*)(this_ptr + 1) = 0;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar6;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return;
    }
    goto LAB_019c2f2f;
  }
  if ((int64_t *)arg1[0x9d] == (int64_t *)0x0) {
LAB_019c2cf5:
    lVar6 = arg1[0x9d];
    if (lVar6 == 0) goto LAB_019c2d16;
  }
  else {
    (**(code **)(*(int64_t *)arg1[0x9d] + 0x3a0))();
    (**(code **)(*arg1 + 0x958))();
    plVar5 = local_40;
    plVar1 = local_50;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == plVar1) {
      FUN_01a8c310();
      (**(code **)(*arg1 + 0xa18))();
      plVar5 = local_40;
      plVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == plVar1) {
        iVar2 = FUN_01a904a0();
        iVar3 = FUN_01a904a0();
        if (iVar2 == iVar3) {
          iVar2 = FUN_01a90480();
          iVar3 = FUN_01a90480();
          if (iVar2 == iVar3) {
            (**(code **)(*(int64_t *)arg1[0x9d] + 0x388))();
            (**(code **)(*(int64_t *)*param_2 + 0x388))();
            plVar5 = local_40;
            plVar1 = local_50;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar5 == plVar1) {
              dVar8 = (double)FUN_01a905a0();
              dVar9 = (double)FUN_01a905a0();
              if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) goto LAB_019c2cf5;
            }
          }
        }
      }
    }
    (**(code **)(*(int64_t *)arg1[0x9d] + 0x3a0))();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)arg1[0x9d] + 0x3a0))();
      plVar1 = local_40;
      lVar6 = arg1[0x9d];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3e0))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (arg1[0x9d] != 0) {
      arg1[0x9d] = 0;
      FUN_00d50b20();
      goto LAB_019c2cf5;
    }
LAB_019c2d16:
    FUN_01a904a0();
    uVar4 = FUN_01a90480();
    (**(code **)(*(int64_t *)*param_2 + 0x388))();
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*arg1 + 0xa18))();
    local_58 = 0;
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    local_60 = local_80;
    FUN_01a905a0();
    FUN_01a8bce0(1,uVar4,&local_70,&local_60);
    plVar1 = (int64_t *)arg1[0x9d];
    plVar5 = plVar1;
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          goto LAB_019c2df4;
        }
        FUN_00d50b00();
        plVar1 = (int64_t *)arg1[0x9d];
        arg1[0x9d] = (int64_t)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_019c2df4:
        arg1[0x9d] = (int64_t)plVar5;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0x958))();
    plVar1 = local_40;
    lVar6 = arg1[0x9d];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3d8))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar6 = arg1[0x9d];
  }
  *(void*)(this_ptr + 1) = 0;
LAB_019c2f2f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 019aa080
// ============================================================
// Function: FUN_019aa080
// Address: 019aa080
// Size: 1235 bytes
// Class: MUEditorElementView

void FUN_019aa080(uint64_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar10;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar8 = (int64_t *)&g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  plVar5 = (int64_t *)arg1[0x3d];
  iVar3 = *(int *)((int64_t)plVar5 + 0xc);
  if (iVar3 == 1) {
    FUN_00d23310();
    lVar7 = local_68;
    local_40 = CONCAT71(local_40._1_7_,local_60[0]);
    plVar5 = &local_40;
    if (local_60[0] != '\0') {
      plVar5 = (int64_t *)local_60;
    }
    *(char *)plVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*arg1 + 0x9a0))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_00d23310();
      lVar7 = local_68;
      plVar8 = &local_78;
      plVar5 = (int64_t *)local_60;
      if (local_60[0] == '\0') {
        plVar5 = plVar8;
      }
      local_78._0_1_ = local_60[0];
      *(char *)plVar5 = '\0';
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((void*)plVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      lVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = lVar9;
      local_60[0] = '\0';
      FUN_00d214d0();
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_78 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aa40b;
    }
    plVar5 = (int64_t *)arg1[0x3d];
    iVar3 = *(int *)((int64_t)plVar5 + 0xc);
  }
  if (1 < iVar3) {
    local_60[0] = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = plVar5;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar3 = -local_50._4_4_;
        }
        else {
          iVar3 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar3);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar3 = 0;
        }
        local_50 = CONCAT44(iVar3,(int)local_50);
      }
      lVar7 = (int64_t)(int)local_50;
      iVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar3) break;
      lVar9 = local_58[2];
      local_68 = *(int64_t *)(lVar9 + 8 + lVar7 * 8);
      cVar2 = (**(code **)(*arg1 + 0x9a0))();
      if (cVar2 != '\0') {
        pvVar6 = _pthread_getspecific((void*)lVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        lVar7 = CONCAT71(local_78._1_7_,(char)local_78);
        if (local_70 == '\0') {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_38 = '\0';
        local_40 = lVar7;
        FUN_00d214d0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          FUN_00d50b20();
        }
      }
    }
    plVar8 = local_58;
    FUN_000be170();
  }
LAB_019aa40b:
  iVar3 = (**(code **)(*arg1 + 0x9f0))();
  if (((puVar4 != (void*)0x0) && (iVar3 != 0)) && (0 < *(int *)((int64_t)puVar4 + 0xc))) {
    uVar10 = (uint64_t)(*(int *)((int64_t)puVar4 + 0xc) - 1);
    if (iVar3 == 1) {
      do {
        pvVar6 = _pthread_getspecific((void*)plVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 != '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (int64_t)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    else {
      do {
        pvVar6 = _pthread_getspecific((void*)plVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 == '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (int64_t)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  if ((puVar4 != (void*)0x0) && (param_2 != '\0')) {
    (**(code **)(&UNK_00001630 + *arg1))();
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 019c8d20
// ============================================================
// Function: FUN_019c8d20
// Address: 019c8d20
// Size: 1894 bytes
// Class: MUEditorElementView

uint64_t FUN_019c8d20(char param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  char *pcVar11;
  void*puVar12;
  uint64_t uVar13;
  void*puVar14;
  undefined7 uVar15;
  int64_t *this_ptr;
  void*local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar13 = 0;
  cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar5 == '\0') goto LAB_019c9497;
  (**(code **)(*this_ptr + 0xe30))();
  iVar6 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  uVar3 = (uint3)((uint)iVar6 >> 8);
  uVar13 = (uint64_t)CONCAT31(uVar3,iVar6 != 0);
  if ((iVar6 == 0) || (param_2 == '\0')) goto LAB_019c9497;
  (**(code **)(*this_ptr + 0xf40))();
  (**(code **)(*this_ptr + 0xf68))();
  (**(code **)(*this_ptr + 0xf70))();
  (**(code **)(*this_ptr + 0xf78))();
  (**(code **)(*this_ptr + 0xf80))();
  (**(code **)(*this_ptr + 0xf88))();
  (**(code **)(*this_ptr + 0xf90))();
  (**(code **)(*this_ptr + 0xf98))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *this_ptr))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *this_ptr + 8))();
  if (param_1 == '\0') {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *this_ptr + 0x10))();
    cVar5 = FUN_019c98c0();
    uVar13 = CONCAT71((uint7)uVar3,1);
    if (cVar5 == '\0') goto LAB_019c9497;
  }
  else {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *this_ptr + 0x18))();
  }
  (**(code **)(*this_ptr + 0xe30))();
  if ((local_68 == '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b00();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &g_025683c0;
  *puVar8 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (local_70 == (void*)0x0) {
LAB_019c934d:
    if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
      lVar9 = 0;
      do {
        pvVar10 = _pthread_getspecific((void*)puVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        iVar6 = *(int *)(local_48 + 0xc);
        iVar2 = *(int *)(puVar8[2] + lVar9 * 4);
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == iVar2) {
          pvVar10 = _pthread_getspecific((void*)puVar12);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49a0();
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)((int64_t)puVar7 + 0xc));
    }
    FUN_000be170();
    bVar4 = false;
    uVar15 = 0;
  }
  else {
    local_58 = -1;
    puVar14 = puVar8;
    while( true ) {
      lVar9 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) break;
      puVar14 = *(void**)(*(int64_t *)(local_70 + 0x10) + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((void*)*(int64_t *)(local_70 + 0x10));
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        puVar14 = (void*)puVar14[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      FUN_01266fe0();
      local_38[0] = local_40[0];
      pcVar11 = local_40;
      if (local_40[0] == '\0') {
        pcVar11 = local_38;
      }
      *pcVar11 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40[0] = '\0';
        iVar6 = FUN_00d23d20();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == -1) {
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          iVar6 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          *(void*)(puVar8[2] + (int64_t)iVar6) = 1;
          puVar14 = puVar8;
        }
        else {
          piVar1 = (int *)(puVar8[2] + (int64_t)iVar6 * 4);
          *piVar1 = *piVar1 + 1;
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
    }
    puVar12 = local_70;
    FUN_001159b0();
    if (puVar7 != (void*)0x0) goto LAB_019c934d;
    uVar15 = (undefined7)((uint64_t)puVar14 >> 8);
    bVar4 = true;
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  uVar13 = CONCAT71(uVar15,1);
  if (local_70 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_019c9497:
  return uVar13 & 0xffffffff;
}



// ============================================================
// 019ab7b0
// ============================================================
// Function: FUN_019ab7b0
// Address: 019ab7b0
// Size: 1196 bytes
// Class: MUEditorElementView

void* FUN_019ab7b0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  char cVar4;
  int64_t *plVar5;
  void*puVar6;
  uint64_t uVar7;
  void *pvVar8;
  void* in_ECX;
  code *pcVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(arg1[0x3e] + 0xc) == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_90);
    plVar5 = &local_90;
    if ((char)local_90 == '\0') {
      plVar5 = &local_40;
    }
    *(void*)plVar5 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    if (((char)local_40 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    local_68 = local_98;
    local_60 = '\x01';
    cVar4 = (**(code **)(*arg1 + 0x9a0))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      local_58._0_1_ = (char)local_90;
      plVar5 = &local_90;
      if ((char)local_90 == '\0') {
        plVar5 = &local_58;
      }
      *(void*)plVar5 = 0;
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_58 != '\0');
      plVar5 = &local_58;
      if ((char)local_58 == '\0') {
        plVar5 = &local_40;
      }
      *(void*)plVar5 = 0;
      if (((char)local_58 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_90._0_1_ = '\0';
      cVar4 = FUN_00d23d70();
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(in_ECX);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*arg1 + 0x9f0))();
        FUN_012e9900(param_1,param_2);
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      if ((char)local_40 == '\0') {
        return this_ptr;
      }
      if (local_98 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  else if (*(int *)(arg1[0x3e] + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  (**(code **)(*arg1 + 0x9f0))();
  pcVar3 = g_02572370;
  lVar1 = arg1[0x3e];
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    local_90._0_1_ = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_70 = 0;
      puVar6 = (void*)0x0;
    }
    else {
      lVar10 = 0;
      puVar6 = (void*)0x0;
      local_70 = 0;
      pcVar9 = g_02572370;
      do {
        local_40 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar10 * 8);
        local_38 = '\0';
        cVar4 = FUN_00d23d70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          if (puVar6 == (void*)0x0) {
            puVar6 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &g_02572358;
            uVar7 = (*pcVar3)();
            local_70 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          }
          cVar4 = (**(code **)(*arg1 + 0x9a0))();
          if (cVar4 != '\0') {
            pvVar8 = _pthread_getspecific((void*)pcVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar7 = FUN_012e9900(param_1,param_2);
            lVar2 = CONCAT71(local_58._1_7_,(char)local_58);
            if (local_50 == '\0') {
              if (lVar2 != 0) {
                uVar7 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_38 = '\0';
            local_40 = lVar2;
            FUN_00d214d0(uVar7,*(void*)((int64_t)puVar6 + 0xc));
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(local_58._1_7_,(char)local_58) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_70 != '\0') goto LAB_019abbcd;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_019abbcd;
    }
  }
  puVar6 = (void*)0x0;
LAB_019abbcd:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 019bf590
// ============================================================
// Function: FUN_019bf590
// Address: 019bf590
// Size: 1166 bytes
// Class: MUEditorElementView

int64_t * FUN_019bf590(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int iVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t local_b0;
  char local_a8;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar4;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return this_ptr;
    }
    if (lVar4 != 0) {
LAB_019bf618:
      FUN_00d50b00();
    }
LAB_019bf620:
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar4 = *param_2;
    if (lVar4 == 0) {
      *(void*)(this_ptr + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf620;
    }
    else {
      if (1 < *(int *)(lVar4 + 0xc)) {
        FUN_0025e9a0();
        if ((local_a8 == '\0') && (local_b0 != 0)) {
          FUN_00d50b00();
        }
        lVar4 = *param_2;
        if (lVar4 == 0) {
          *(void*)(this_ptr + 1) = 0;
          lVar4 = 0;
          bVar5 = false;
          if ((char)param_2[1] == '\0') {
LAB_019bfa09:
            *this_ptr = lVar4;
            *(void*)(this_ptr + 1) = 1;
            local_48 = 0;
            goto joined_r0x019bfa18;
          }
        }
        else {
          if (*(int *)(lVar4 + 0xc) < 1) {
            bVar5 = false;
            local_48 = 0;
          }
          else {
            iVar3 = 0;
            local_48 = 0;
            bVar5 = false;
            do {
              pvVar2 = _pthread_getspecific((void*)param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01274b60();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              cVar1 = FUN_00d23d70();
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 == '\0') {
                pvVar2 = _pthread_getspecific((void*)param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274b60();
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                FUN_00d21140();
                if (local_60 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_48 == 0) {
                  FUN_00243390();
                  local_48 = local_60;
                  param_1 = local_60;
                  if (local_60 == 0) {
                    local_48 = 0;
                  }
                  else {
                    FUN_00d50b00();
                    bVar5 = true;
                  }
                }
                FUN_00d23f50();
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(lVar4 + 0xc));
          }
          FUN_001159b0();
          if (local_48 != 0) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar5) {
              FUN_00d50b00();
            }
            *this_ptr = local_48;
            *(void*)(this_ptr + 1) = 1;
            bVar5 = false;
            goto joined_r0x019bfa18;
          }
          lVar4 = *param_2;
          *(void*)(this_ptr + 1) = 0;
          if ((char)param_2[1] == '\0') {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
            }
            goto LAB_019bfa09;
          }
        }
        *this_ptr = lVar4;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(param_2 + 1) = 0;
        local_48 = 0;
joined_r0x019bfa18:
        if (local_b0 != 0) {
          FUN_00d50b20();
        }
        if (!bVar5) {
          return this_ptr;
        }
        if (local_48 == 0) {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
      *(void*)(this_ptr + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf618;
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_2 + 1) = 0;
  }
  return this_ptr;
}



// ============================================================
// 019ac7b0
// ============================================================
// Function: FUN_019ac7b0
// Address: 019ac7b0
// Size: 1111 bytes
// Class: MUEditorElementView

int64_t * FUN_019ac7b0(double param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  uint64_t uVar5;
  void* in_ECX;
  void* pVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  uint8_t local_90 [4];
  int iStack_8c;
  uint8_t local_88 [4];
  int iStack_84;
  int64_t local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  lVar9 = *(int64_t *)(arg1 + 0x50);
  if (lVar9 != 0) {
    if ((*(double *)(arg1 + 0x58) <= param_1) && (param_1 < *(double *)(arg1 + 0x60))) {
      *(void*)(this_ptr + 1) = 0;
      FUN_00d50b00();
      *this_ptr = lVar9;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
    *(void*)(arg1 + 0x50) = 0;
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019ac865;
    }
  }
  else if (local_50 != 0) {
LAB_019ac865:
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa18))();
    if (local_50 == 0) {
      lVar9 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar9 = local_50;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    local_40 = local_50;
    if (local_50 == 0) {
      bVar10 = lVar9 == 0;
      bVar2 = true;
      local_40 = 0;
    }
    else {
      lVar7 = local_50;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 == 0) {
        bVar2 = false;
        bVar10 = true;
      }
      else {
        pvVar4 = _pthread_getspecific((void*)lVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7bcc0();
        pVar6 = 0;
        uVar5 = FUN_016cb9d0(param_1,4);
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012521f0(uVar5,1,local_90,local_88);
        pVar6 = (void*)CONCAT71((int7)((uint64_t)uVar5 >> 8),local_48[0]);
        pcVar8 = local_38;
        if (local_48[0] != '\0') {
          pcVar8 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(int64_t *)(arg1 + 0x50);
        if (lVar9 == local_50) {
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
              lVar9 = *(int64_t *)(arg1 + 0x50);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(int64_t *)(arg1 + 0x50) = local_50;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if (*(int64_t *)(arg1 + 0x50) != 0) {
          if (iStack_8c == 0) {
            uVar5 = (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x940))();
          }
          else {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar5 = FUN_016c98e0();
          }
          *(void*)(arg1 + 0x58) = uVar5;
          if (iStack_84 == 0) {
            dVar12 = (double)(**(code **)(**(int64_t **)(arg1 + 0x40) + 0x940))();
            dVar11 = (double)(**(code **)(**(int64_t **)(arg1 + 0x40) + 0x918))();
            dVar12 = dVar12 + dVar11;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_016c98e0();
          }
          *(double *)(arg1 + 0x60) = dVar12;
        }
        bVar2 = false;
        bVar10 = false;
      }
    }
    bVar1 = false;
    goto LAB_019acb9b;
  }
  bVar2 = true;
  bVar10 = true;
  bVar3 = false;
  local_40 = 0;
  bVar1 = true;
LAB_019acb9b:
  *(void*)(this_ptr + 1) = 0;
  lVar9 = *(int64_t *)(arg1 + 0x50);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar9;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (bVar3 && !bVar10) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 019be690
// ============================================================
// Function: FUN_019be690
// Address: 019be690
// Size: 1594 bytes
// Class: MUEditorElementView

void FUN_019be690(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint32_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int local_40;
  
  if (this_ptr[0x58] == *arg1) {
    return;
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  FUN_00d46300();
  lVar2 = local_c8;
  lVar3 = g_026f6f98;
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
      lVar3 = g_026f6f98;
    }
  }
  else {
    local_c0 = '\0';
  }
  g_026f6f98 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)0x0;
  if (*arg1 != 0) {
    FUN_00d403d0();
    lVar2 = g_027e13e0;
    if (g_027e13e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_100 = '\0';
    local_108 = plVar7;
    FUN_00d40470(&local_108,&stack0xffffffffffffff48,1,3);
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar8 = (int64_t *)*arg1;
  }
  FUN_00827d60();
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = arg1;
    if (cVar5 != '\0') goto LAB_019be8d2;
  }
  plVar8 = &g_02802688;
LAB_019be8d2:
  if ((bool)*(char *)((int64_t)this_ptr + 0x512) != (*plVar8 != 0)) {
    *(bool *)((int64_t)this_ptr + 0x512) = *plVar8 != 0;
    (**(code **)(*this_ptr + 0x620))();
  }
  plVar8 = (int64_t *)0x0;
  if ((int64_t *)this_ptr[0x58] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x58] + 0x450))();
    plVar8 = (int64_t *)this_ptr[0x58];
  }
  plVar1 = (int64_t *)*arg1;
  plVar4 = plVar8;
  if (plVar8 != plVar1) {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    this_ptr[0x58] = (int64_t)plVar1;
    plVar4 = plVar1;
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = (int64_t *)this_ptr[0x58];
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x448))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar2 = this_ptr[0x58];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0xed8))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)this_ptr[0x81];
  if ((plVar8 != (int64_t *)0x0) && ((int64_t *)this_ptr[0x58] != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)this_ptr[0x58] + 0x420))();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar8 + 0x918))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)this_ptr[0x4b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x4b] + 0x620))();
  }
  lVar3 = this_ptr[0x4a];
  if (lVar3 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar3 + 0xc)) {
      FUN_01981860();
      local_f8 = *arg1;
      local_f0 = '\0';
      FUN_01983f50();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a01cb0();
  }
  if ((int64_t *)this_ptr[0x80] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x80] + 0x620))();
  }
  if (this_ptr[0x7f] != 0) {
    this_ptr[0x5a] = this_ptr[0x5b];
    uVar6 = FUN_01e1f170();
    *(void*)(this_ptr + 0x5b) = uVar6;
    uVar6 = FUN_01e1f180();
    *(void*)((int64_t)this_ptr + 0x2dc) = uVar6;
  }
  FUN_00d403d0();
  local_e8 = g_026f6ed8;
  if (g_026f6ed8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  FUN_00d50b00();
  local_d0 = '\0';
  local_d8 = plVar7;
  FUN_00d40470(&local_d8,&stack0xffffffffffffff78,1,3);
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa48))();
  (**(code **)(*this_ptr + 0x620))();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019c5bf0
// ============================================================
// Function: FUN_019c5bf0
// Address: 019c5bf0
// Size: 1625 bytes
// Class: MUEditorElementView

void FUN_019c5bf0(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  void*puVar9;
  bool bVar10;
  int local_68;
  void*local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar2 = g_02572370;
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) break;
      lVar8 = *(int64_t *)(lVar1 + 0x10);
      lVar5 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pVar7 = (void*)lVar8;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (lVar5 != local_40) {
          if (local_38 != '\0') {
            bVar10 = lVar5 != 0;
            lVar5 = local_40;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_019c5e00;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar10 = lVar5 != 0;
          lVar5 = local_40;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_019c5e00:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_50 == '\0') {
        if (local_58 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      cVar3 = FUN_00c9ff50();
      if (local_58 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02572358;
        (*pcVar2)();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_58 != (void*)0x0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (local_58 != (void*)0x0) {
          FUN_00d50b20();
        }
        bVar10 = true;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00805b20();
        if (local_58 == (void*)0x0) {
          puVar9 = (void*)0x0;
        }
        else {
          FUN_00d50b00();
          puVar9 = local_58;
        }
        bVar10 = local_58 != (void*)0x0;
        if (local_58 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      FUN_00d235a0();
      if ((bVar10) && (puVar9 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_40 = lVar5;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if (plVar4 == (int64_t *)0x0) {
      return;
    }
  }
  lVar1 = plVar4[2];
  if (0 < *(int *)(lVar1 + 0xc)) {
    pVar7 = 0;
    do {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019c6680();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_012edae0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = pVar7 + 1;
    } while ((int)pVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 019ca970
// ============================================================
// Function: FUN_019ca970
// Address: 019ca970
// Size: 1064 bytes
// Class: MUEditorElementView

uint64_t FUN_019ca970(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  void *pvVar4;
  void*puVar5;
  int64_t lVar6;
  char *pcVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  double dVar11;
  uint64_t uVar12;
  int64_t local_88;
  char local_80;
  double local_68;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  uVar8 = (uint64_t)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  if ((iVar1 != 0) && (param_2 != '\0')) {
    (**(code **)(*this_ptr + 0xe20))();
    FUN_00d23310();
    uVar12 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
    pcVar7 = local_38;
    if (local_40[0] != '\0') {
      pcVar7 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar7 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)uVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_0125a280();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = 1;
    while( true ) {
      (**(code **)(*this_ptr + 0xe20))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= lVar9) break;
      (**(code **)(*this_ptr + 0xe20))();
      pvVar4 = _pthread_getspecific((void*)uVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (dVar11 < local_68) {
        (**(code **)(*this_ptr + 0xe20))();
        pvVar4 = _pthread_getspecific((void*)uVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_0125a280();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
    }
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    uVar12 = (*g_02572370)();
    dVar11 = (double)(**(code **)(*this_ptr + 0x9b0))(uVar12,1);
    if ((((local_40[0] == '\0') && (local_48 != 0)) &&
        (dVar11 = (double)FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      dVar11 = (double)FUN_00d50b20();
    }
    if (*(int *)(local_48 + 0xc) < 1) {
      bVar3 = false;
      lVar9 = 0;
    }
    else {
      lVar10 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar10 * 8);
        lVar6 = local_48;
        if (lVar9 == lVar2) {
          if ((!bVar3) && (lVar9 != 0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (lVar9 != 0)) {
            FUN_00d50b20();
            bVar3 = true;
            lVar9 = lVar2;
          }
          else {
            bVar3 = true;
            lVar9 = lVar2;
          }
        }
        pvVar4 = _pthread_getspecific((void*)lVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        if (local_68 <= dVar11) {
          local_40[0] = '\0';
          dVar11 = (double)FUN_00d21140();
          if ((local_40[0] != '\0') && (lVar9 != 0)) {
            dVar11 = (double)FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(local_48 + 0xc));
    }
    (**(code **)(*this_ptr + 0xdc8))(dVar11,1);
    FUN_00d50b20();
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)puVar5 >> 8),1);
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}



// ============================================================
// 019c6750
// ============================================================
// Function: FUN_019c6750
// Address: 019c6750
// Size: 881 bytes
// Class: MUEditorElementView

uint64_t FUN_019c6750(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  void*puVar5;
  int64_t local_d0 [2];
  uint8_t local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  char local_70;
  uint64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  uVar4 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0xe20))();
    if (local_a8 == (void*)0x0) {
      uVar4 = 1;
    }
    else {
      (**(code **)(*this_ptr + 0xe20))();
      uVar4 = (uint64_t)(*(int *)(local_48 + 0xc) == 0);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      (**(code **)(*this_ptr + 0xe20))();
      lVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c0 = 1;
      uVar3 = FUN_019c5150();
      puVar5 = local_a8;
      if (local_a8 == (void*)0x0) {
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        puVar5 = (void*)0x0;
      }
      else {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        local_34 = 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (((param_2 != '\0') && (puVar5 != (void*)0x0)) &&
         (*(int *)((int64_t)puVar5 + 0xc) != 0)) {
        FUN_019c5bf0();
        FUN_00d403d0();
        local_b8 = g_026de568;
        if (g_026de568 != 0) {
          FUN_00d50b00();
        }
        local_b0 = '\x01';
        FUN_00d50b00();
        lVar1 = g_026de560;
        if (g_026de560 != 0) {
          FUN_00d50b00();
        }
        local_d0[0] = lVar1;
        FUN_00083ea0(2,local_d0);
        FUN_000b4da0();
        uVar4 = local_78;
        local_50 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_50 = '\x01';
        local_58 = uVar4;
        FUN_00d40470(&local_58,&stack0xffffffffffffff98,1,0);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = (void*)&g_0253d630;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = &g_024c5048;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0xda0))();
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if ((char)local_34 == '\0' && puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 019c5150
// ============================================================
// Function: FUN_019c5150
// Address: 019c5150
// Size: 1690 bytes
// Class: MUEditorElementView

int64_t * FUN_019c5150(void)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00243390();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01271180();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      uVar3 = 0;
      do {
        uVar4 = (uint64_t)uVar3;
        FUN_01266770();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        FUN_01266b80();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(local_78 + 0xc));
    }
    FUN_01a02020();
    FUN_00d50b20();
  }
  *this_ptr = local_78;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 019c2380
// ============================================================
// Function: FUN_019c2380
// Address: 019c2380
// Size: 990 bytes
// Class: MUEditorElementView

uint32_t FUN_019c2380(void* param_1,char param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint32_t uVar5;
  void *pvVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  int64_t *plVar8;
  uint64_t local_78;
  int64_t *local_40;
  char local_38;
  
  cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar4 == '\0') {
    return 0;
  }
  (**(code **)(*this_ptr + 0xe10))();
  iVar1 = *(int *)((int64_t)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    return 0;
  }
  local_78 = FUN_00e7bdb0();
  pplVar7 = &local_40;
  (**(code **)(*this_ptr + 0xd40))();
  plVar8 = local_40;
  FUN_00083c20();
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019c2427;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_019c2427:
  plVar8 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    if ((param_2 != '\0') && (plVar2 = (int64_t *)this_ptr[0x69], plVar2 != (int64_t *)0x0)) {
      (**(code **)(*this_ptr + 0xe10))();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01266200();
      (**(code **)(*plVar2 + 0x60))();
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_019c29e0();
    if (plVar8 == local_40) {
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0xe10))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = FUN_01ca2090();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((param_2 != '\0') && (plVar2 = (int64_t *)this_ptr[0x69], plVar2 != (int64_t *)0x0)) {
      (**(code **)(*this_ptr + 0xa18))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c98e0();
      (**(code **)(*plVar2 + 0x60))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0xe10))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar5 = FUN_01c936e0(param_2,local_78);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar5;
}



// ============================================================
// 019be470
// ============================================================
// Function: FUN_019be470
// Address: 019be470
// Size: 506 bytes
// Class: MUEditorElementView

void FUN_019be470(double param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  double dVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t local_38;
  uint64_t uStack_30;
  uint64_t local_28;
  
  if ((int64_t *)this_ptr[0x69] == (int64_t *)0x0) {
    dVar8 = (double)this_ptr[0x53];
    cVar2 = '\0';
    if ((dVar8 == param_1) && (cVar2 = '\0', !NAN(dVar8) && !NAN(param_1))) goto LAB_019be59f;
  }
  else {
    cVar2 = (**(code **)(*(int64_t *)this_ptr[0x69] + 0x50))();
    dVar8 = (double)this_ptr[0x53];
    if ((dVar8 == param_1) && (!NAN(dVar8) && !NAN(param_1))) {
LAB_019be59f:
      if (*(char *)((int64_t)this_ptr + 0x454) != cVar2) {
        (**(code **)(&UNK_00001560 + *this_ptr))(param_1);
      }
      goto LAB_019be64c;
    }
  }
  uVar4 = (**(code **)(*this_ptr + 0x938))
                    (~-(uint64_t)(!NAN(dVar8) && !NAN(dVar8)) & (uint64_t)param_1 |
                     (uint64_t)dVar8 & -(uint64_t)(!NAN(dVar8) && !NAN(dVar8)));
  this_ptr[0x53] = (int64_t)param_1;
  local_38 = (**(code **)(*this_ptr + 0x938))();
  uStack_30 = extraout_XMM0_Qb_00;
  auVar10 = _local_38;
  (**(code **)(&UNK_00001560 + *this_ptr))(param_1);
  cVar3 = (**(code **)(*this_ptr + 0xef8))();
  if (cVar3 != '\0') {
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = uVar4;
    fVar1 = (float)uVar4;
    local_38._4_4_ = (uint)((uint64_t)local_38 >> 0x20);
    uStack_30._0_4_ = (uint)extraout_XMM0_Qb_00;
    uStack_30._4_4_ = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    if (g_023908ec <= (float)(g_02390140 & (uint)(fVar1 - (float)local_38))) {
      auVar12._0_4_ = fVar1 + g_023b8b2c;
      auVar12._4_12_ = auVar6._4_12_;
      insertps(g_0241b5f0,(int)this_ptr[0x23],0x10);
      blendps(auVar12,ZEXT416(0),0xe);
      (**(code **)(*this_ptr + 0x618))();
      auVar7._4_12_ = auVar10._4_12_;
      auVar7._0_4_ = (float)local_38 + g_023b8b2c;
      auVar10 = blendps(auVar7,g_0238ff00,0xe);
      uVar4 = auVar10._0_8_;
      auVar10 = g_0241b5f0;
    }
    else {
      if ((float)local_38 <= fVar1) {
        auVar6._0_4_ = (float)local_38;
      }
      auVar11._4_12_ = auVar6._4_12_;
      auVar11._0_4_ = auVar6._0_4_ + g_023b8b2c;
      auVar9._4_4_ = local_38._4_4_ & (uint)((uint64_t)uVar4 >> 0x20);
      auVar9._0_4_ = (uint)((float)local_38 - fVar1) & -(uint)(fVar1 < (float)local_38);
      auVar9._8_4_ = (uint)uStack_30 & (uint)extraout_XMM0_Qb;
      auVar9._12_4_ = uStack_30._4_4_ & (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar9 = ZEXT416(~-(uint)(fVar1 < (float)local_38) & (uint)(fVar1 - (float)local_38)) | auVar9
      ;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = auVar9._0_4_ + g_02390d28;
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar6 = blendps(auVar5,auVar11,1);
      uVar4 = auVar6._0_8_;
    }
    auVar10 = insertps(auVar10,(int)this_ptr[0x23],0x10);
    (**(code **)(*this_ptr + 0x618))();
    if (cVar2 != '\0') {
      local_28 = auVar10._0_8_;
      (**(code **)(*this_ptr + 0x910))(uVar4,local_28);
    }
  }
LAB_019be64c:
  (**(code **)(&g_000015b0 + *this_ptr))();
  *(char *)((int64_t)this_ptr + 0x454) = cVar2;
  return;
}



// ============================================================
// 019cafa0
// ============================================================
// Function: FUN_019cafa0
// Address: 019cafa0
// Size: 1110 bytes
// Class: MUEditorElementView

uint64_t FUN_019cafa0(void*param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void*puVar5;
  void *pvVar6;
  void*puVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  void*local_70;
  char local_68;
  int local_58;
  void*local_40;
  char local_38;
  
  puVar7 = local_70;
  (**(code **)(*this_ptr + 0xe20))();
  iVar1 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    uVar9 = 0;
    goto LAB_019cb402;
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  (**(code **)(*this_ptr + 0xe20))();
  if (local_68 == '\0') {
    puVar8 = &g_02572358;
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_019cb08d;
    }
  }
  else {
    puVar8 = &g_02572358;
    if (local_70 != (void*)0x0) {
LAB_019cb08d:
      local_68 = '\0';
      local_70 = (void*)0x0;
      local_58 = -1;
      puVar8 = &g_02572358;
LAB_019cb0cb:
      while( true ) {
        lVar10 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(puVar7 + 0xc) <= local_58) break;
        local_70 = *(void**)(*(int64_t *)(puVar7 + 0x10) + 8 + lVar10 * 8);
        pvVar6 = _pthread_getspecific((void*)*(int64_t *)(puVar7 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012972e0();
        puVar8 = local_40;
        if (local_38 == '\0') goto LAB_019cb170;
        if (local_40 != (void*)0x0) goto LAB_019cb1a0;
      }
      FUN_001159b0();
      FUN_00d50b20();
      param_1 = puVar7;
    }
  }
  iVar1 = *(int *)((int64_t)puVar4 + 0xc);
  if ((iVar1 != 0) && (param_2 != '\0')) {
    (**(code **)(*this_ptr + 0x9b0))();
    if (local_68 == '\0') {
      if (local_70 != (void*)0x0) {
        FUN_00d50b00();
        goto LAB_019cb256;
      }
    }
    else if (local_70 != (void*)0x0) {
LAB_019cb256:
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar10 = 0;
        do {
          puVar8 = local_40;
          puVar7 = *(void**)(*(int64_t *)(local_70 + 0x10) + lVar10 * 8);
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012972e0();
          if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d23d70();
          if (cVar3 != '\0') {
            FUN_00d21140();
            local_40 = puVar7;
          }
          local_38 = '\0';
          if (puVar8 != (void*)0x0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xdc8))();
    puVar8 = local_70;
  }
  uVar9 = CONCAT71((int7)((uint64_t)puVar8 >> 8),iVar1 != 0);
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_019cb402:
  return uVar9 & 0xffffffff;
LAB_019cb170:
  if (local_40 != (void*)0x0) {
    FUN_00d50b00();
LAB_019cb1a0:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_019cb0cb;
}



// ============================================================
// 019c6d40
// ============================================================
// Function: FUN_019c6d40
// Address: 019c6d40
// Size: 944 bytes
// Class: MUEditorElementView

uint64_t FUN_019c6d40(void* param_1,char param_2)

{
  uint64_t uVar1;
  bool bVar2;
  char cVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t local_40;
  char local_38;
  
  uVar6 = 0;
  cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0xe30))();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    uVar4 = (uint64_t)*(uint *)(local_40 + 0xc);
    if (((uVar4 != 0) && (param_2 != '\0')) && (0 < (int)*(uint *)(local_40 + 0xc))) {
      uVar7 = 0;
      uVar6 = 0;
      bVar2 = false;
      do {
        uVar1 = *(uint64_t *)(*(int64_t *)(local_40 + 0x10) + uVar7 * 8);
        if (uVar6 == uVar1) {
          if ((!bVar2) && (uVar6 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (uVar1 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (uVar6 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            uVar6 = uVar1;
          }
          else {
            bVar2 = true;
            uVar6 = uVar1;
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2f0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e9d0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125ea90();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012df8d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012df8d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      if ((bVar2) && (uVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar4 != 0);
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}



// ============================================================
// 019aae50
// ============================================================
// Function: FUN_019aae50
// Address: 019aae50
// Size: 827 bytes
// Class: MUEditorElementView

void* FUN_019aae50(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  void*puVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  void*puVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  uint64_t uVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  iVar2 = *(int *)(arg1[0x3d] + 0xc);
  if (iVar2 == 1) {
    FUN_00d23310();
    lVar6 = local_40;
    local_50 = local_38[0];
    pcVar8 = &local_50;
    pcVar3 = local_38;
    if (local_38[0] == '\0') {
      pcVar3 = pcVar8;
    }
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(*arg1 + 0x9a0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = pcVar8;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)pcVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*arg1 + 0x9f0))();
      FUN_012e9900(param_1,param_2);
      if (local_50 == '\0') {
        return this_ptr;
      }
      if (local_40 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    iVar2 = *(int *)(arg1[0x3d] + 0xc);
  }
  if (iVar2 < 2) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    (**(code **)(*arg1 + 0x9f0))();
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &g_02572358;
    *puVar5 = &g_02572358;
    (*g_02572370)();
    lVar6 = arg1[0x3d];
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar10 = 0;
      do {
        pVar7 = (void*)puVar9;
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar10 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar1 = (**(code **)(*arg1 + 0x9a0))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar11 = FUN_012e9900(param_1,param_2);
          lVar6 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar6 != 0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38[0] = '\0';
          local_40 = lVar6;
          FUN_00d214d0(uVar11,*(void*)((int64_t)puVar5 + 0xc));
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
        lVar6 = arg1[0x3d];
        puVar9 = (void*)(int64_t)*(int *)(lVar6 + 0xc);
      } while (lVar10 < (int64_t)puVar9);
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}



// ============================================================
// 019a9050
// ============================================================
// Function: FUN_019a9050
// Address: 019a9050
// Size: 813 bytes
// Class: MUEditorElementView

void* FUN_019a9050(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  void*puVar7;
  void*puVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  void*local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar4 = *(int *)(arg1[0x3d] + 0xc);
  if (iVar4 == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_88);
    plVar5 = &local_88;
    if ((char)local_88 == '\0') {
      plVar5 = &local_40;
    }
    *(void*)plVar5 = 0;
    if (((char)local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
    if (((char)local_40 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    local_50 = local_90;
    local_48 = '\x01';
    cVar3 = (**(code **)(*arg1 + 0x9a0))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d23310();
      plVar5 = &local_88;
      if ((char)local_88 == '\0') {
        plVar5 = &local_40;
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_88);
      *(void*)plVar5 = 0;
      if (((char)local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if ((char)local_40 == '\0') {
        return this_ptr;
      }
      if (local_90 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    iVar4 = *(int *)(arg1[0x3d] + 0xc);
  }
  if (iVar4 < 2) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &g_02572358;
    *puVar7 = &g_02572358;
    local_58 = puVar7;
    (*g_02572370)();
    lVar1 = arg1[0x3d];
    if (lVar1 != 0) {
      local_88._0_1_ = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          cVar3 = (**(code **)(*arg1 + 0x9a0))();
          if (cVar3 != '\0') {
            pvVar6 = _pthread_getspecific((void*)puVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            lVar2 = local_68;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_40 = lVar2;
            local_38 = '\0';
            FUN_00d214d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar4 = iVar4 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar4);
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}



// ============================================================
// 019a6410
// ============================================================
// Function: FUN_019a6410
// Address: 019a6410
// Size: 654 bytes
// Class: MUEditorElementView
// String references:
//   "MUEditorElementView"

void FUN_019a6410(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar7;
  uint64_t uVar8;
  bool bVar9;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  local_38[0] = '\0';
  lVar4 = *(int64_t *)(arg1 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc);
  uVar8 = (uint64_t)uVar5;
  if ((int)uVar5 < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  plVar6 = (int64_t *)0x0;
  do {
    uVar5 = uVar5 - 1;
    plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)uVar5 * 8);
    local_48 = plVar1;
    local_40 = '\0';
    if ((g_02733c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_02714138 = FUN_0034cf20();
      g_02714120 = "MUEditorElementView";
      g_02714128 = 0x1f8;
      g_02714130 = FUN_0034ceb0;
      g_02714140 = 0;
      ram_0000000002714148 = 0;
      g_02714150 = 0;
      g_027141c8 = 0;
      ram_00000000027141d0 = 0;
      g_027141d8 = 0;
      g_027141da = 1;
      g_02714158 = 0;
      ram_0000000002714160 = 0;
      g_02714168 = 0;
      ram_0000000002714170 = 0;
      g_02714178 = 0;
      ram_0000000002714180 = 0;
      g_02714188 = 0;
      ram_0000000002714190 = 0;
      g_02714198 = 0;
      ram_00000000027141a0 = 0;
      g_027141a8 = 0;
      ram_00000000027141b0 = 0;
      g_027141b8 = 0;
      ram_00000000027141c0 = 0;
      g_027141e3 = 0;
      g_027141db = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar7 = &local_48;
      if (cVar2 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
    }
    plVar1 = *pplVar7;
    pplVar7 = pplVar7 + 1;
    if (plVar1 == plVar6) {
      if (((local_38[0] == '\0') && (plVar1 != (int64_t *)0x0)) && (*(char *)pplVar7 != '\0')) {
        local_38[0] = '\x01';
        goto LAB_019a6520;
      }
    }
    else {
      bVar9 = plVar6 != (int64_t *)0x0;
      plVar6 = plVar1;
      if (*(char *)pplVar7 == '\0') {
        pplVar7 = (int64_t **)local_38;
        if (bVar9 && local_38[0] != '\0') {
          FUN_00d50b20();
          pplVar7 = (int64_t **)local_38;
        }
      }
      else {
        if (bVar9 && local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
      }
LAB_019a6520:
      *(char *)pplVar7 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar6 != (int64_t *)0x0) &&
       (cVar2 = (**(code **)(*plVar6 + 0x960))(param_1), cVar2 != '\0')) {
      *(void*)(this_ptr + 1) = 0;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      *this_ptr = plVar6;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    if ((int64_t)uVar8 < 2) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (local_38[0] == '\0') {
        return;
      }
      if (plVar6 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    uVar8 = uVar8 - 1;
    lVar4 = *(int64_t *)(arg1 + 0x38);
  } while( true );
}



// ============================================================
// 019ab310
// ============================================================
// Function: FUN_019ab310
// Address: 019ab310
// Size: 779 bytes
// Class: MUEditorElementView

void* FUN_019ab310(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  void*puVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  void*puVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  uint64_t uVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  iVar2 = *(int *)(arg1[0x3d] + 0xc);
  if (iVar2 == 1) {
    FUN_00d23310();
    lVar6 = local_40;
    local_50 = local_38[0];
    pcVar8 = &local_50;
    pcVar3 = local_38;
    if (local_38[0] == '\0') {
      pcVar3 = pcVar8;
    }
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(*arg1 + 0x9a0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = pcVar8;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)pcVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ea6f0(param_1,param_2);
      if (local_50 == '\0') {
        return this_ptr;
      }
      if (local_40 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    iVar2 = *(int *)(arg1[0x3d] + 0xc);
  }
  if (iVar2 < 2) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &g_02572358;
    *puVar5 = &g_02572358;
    (*g_02572370)();
    lVar6 = arg1[0x3d];
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar10 = 0;
      do {
        pVar7 = (void*)puVar9;
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar10 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar1 = (**(code **)(*arg1 + 0x9a0))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar11 = FUN_012ea6f0(param_1,param_2);
          lVar6 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar6 != 0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38[0] = '\0';
          local_40 = lVar6;
          FUN_00d214d0(uVar11,*(void*)((int64_t)puVar5 + 0xc));
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
        lVar6 = arg1[0x3d];
        puVar9 = (void*)(int64_t)*(int *)(lVar6 + 0xc);
      } while (lVar10 < (int64_t)puVar9);
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}



// ============================================================
// 019bccc0
// ============================================================
// Function: FUN_019bccc0
// Address: 019bccc0
// Size: 1093 bytes
// Class: MUEditorElementView

uint32_t FUN_019bccc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  code *pcVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t local_64;
  int64_t *local_58;
  char local_50;
  
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar3)();
  (**(code **)(*this_ptr + 0xe20))();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x59] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x59] + 0x490))();
  }
  local_64 = 0;
  do {
    (**(code **)(*this_ptr + 0x658))();
    plVar1 = (int64_t *)*arg1;
    if (plVar1 == local_58) {
      if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
        goto LAB_019bce7c;
      }
      lVar2 = *arg1;
    }
    else {
      lVar2 = arg1[1];
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_58;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019bce7c:
      *(void*)(arg1 + 1) = 1;
      lVar2 = *arg1;
    }
    if ((lVar2 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      if ((int64_t *)this_ptr[0x59] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)this_ptr[0x59] + 0x4a0))();
      }
      (**(code **)(*this_ptr + 0xdf0))((int)g_023dccec,(int)g_023dccf4);
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      return local_64;
    }
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 5) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      uVar10 = FUN_00d05580(uVar8);
      (**(code **)(*this_ptr + 0xdf0))();
      FUN_00d216c0();
      FUN_00d23480();
      (**(code **)(*this_ptr + 0xb38))(uVar10,uVar9);
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0xe20))();
      uVar7 = (**(code **)(*local_58 + 0x50))();
      if ((char)uVar7 == '\0') {
        uVar7 = (**(code **)(*this_ptr + 0xdc8))(extraout_XMM0_Da,1);
      }
      plVar1 = (int64_t *)this_ptr[0x59];
      local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      if (plVar1 != (int64_t *)0x0) {
        FUN_01d3b590();
        (**(code **)(*plVar1 + 0x498))(uVar10,uVar9);
      }
    }
  } while( true );
}



// ============================================================
// 019a9c40
// ============================================================
// Function: FUN_019a9c40
// Address: 019a9c40
// Size: 838 bytes
// Class: MUEditorElementView

int64_t * FUN_019a9c40(uint64_t param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar6;
  bool bVar7;
  int64_t local_d8;
  char local_d0;
  uint64_t local_78;
  int64_t local_58;
  char local_50;
  uint64_t local_40;
  int64_t local_38;
  
  local_78 = 0;
  if (((param_2 == 0) || ((int64_t *)arg1[0x69] == (int64_t *)0x0)) ||
     (cVar2 = (**(code **)(*(int64_t *)arg1[0x69] + 0xb0))(), cVar2 == '\0')) {
    local_40 = 0;
    lVar4 = arg1[0x3d];
    if (lVar4 != 0) goto LAB_019a9cdd;
LAB_019a9cb7:
    *(void*)(this_ptr + 1) = 0;
LAB_019a9cbf:
    local_38 = 0;
  }
  else {
    local_78 = (**(code **)(*(int64_t *)arg1[0x69] + 0xc0))();
    local_40 = (**(code **)(*(int64_t *)arg1[0x69] + 0xd0))();
    lVar4 = arg1[0x3d];
    if (lVar4 == 0) goto LAB_019a9cb7;
LAB_019a9cdd:
    if (*(int *)(lVar4 + 0xc) < 1) {
      bVar1 = false;
      local_38 = 0;
    }
    else {
      iVar6 = 0;
      local_38 = 0;
      bVar1 = false;
      do {
        lVar5 = lVar4;
        cVar2 = (**(code **)(*arg1 + 0x9a0))();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific((void*)lVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*arg1 + 0x9f0))();
          FUN_019a9940(local_78,local_40);
          if (local_d8 == local_38) {
            if (local_d0 != '\0') {
              if ((!bVar1) && (local_d8 != 0)) {
                bVar1 = true;
                FUN_00d50b00();
              }
              bVar7 = local_38 == 0;
              goto joined_r0x019a9ec9;
            }
            bVar7 = local_38 == 0;
          }
          else {
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
            }
            bVar7 = local_d8 == 0;
            local_38 = local_d8;
            if (local_d0 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
joined_r0x019a9ec9:
              if (local_d8 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (!bVar7) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170();
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) {
      *this_ptr = local_38;
      goto LAB_019a9f75;
    }
    if (local_38 == 0) goto LAB_019a9cbf;
    FUN_00d50b00();
  }
  *this_ptr = local_38;
LAB_019a9f75:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 019a9940
// ============================================================
// Function: FUN_019a9940
// Address: 019a9940
// Size: 708 bytes
// Class: MUEditorElementView

int64_t * FUN_019a9940(double param_1,double param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  void* in_ECX;
  int in_EDX;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    param_2 = param_2 - param_1;
    cVar3 = (char)in_ECX;
    if (in_EDX == 0) {
      if (cVar3 != '\0') {
        lVar5 = 0;
        do {
          if (*(int *)(lVar1 + 0xc) <= (int)lVar5) goto LAB_019a9bfb;
          lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_012755a0(param_1,param_2);
          lVar5 = lVar5 + 1;
        } while (cVar3 == '\0');
LAB_019a9baa:
        *(void*)(this_ptr + 1) = 0;
joined_r0x019a9bdf:
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar6;
        *(void*)(this_ptr + 1) = 1;
        FUN_001159b0();
        return this_ptr;
      }
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar6 = **(int64_t **)(lVar1 + 0x10);
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x019a9bdf;
      }
    }
    else if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      if (in_EDX == 1) {
        do {
          lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 == '\0') {
            if (cVar3 == '\0') goto LAB_019a9baa;
            pvVar4 = _pthread_getspecific(in_ECX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012755a0(param_1,param_2);
            if (cVar2 != '\0') goto LAB_019a9baa;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      else {
        do {
          lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 != '\0') {
            if (cVar3 == '\0') goto LAB_019a9baa;
            pvVar4 = _pthread_getspecific(in_ECX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012755a0(param_1,param_2);
            if (cVar2 != '\0') goto LAB_019a9baa;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
    }
LAB_019a9bfb:
    FUN_001159b0();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 019aa7b0
// ============================================================
// Function: FUN_019aa7b0
// Address: 019aa7b0
// Size: 949 bytes
// Class: MUEditorElementView

void* FUN_019aa7b0(int64_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  void *pvVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar10;
  int64_t local_80;
  char local_78;
  int local_58;
  
  pcVar3 = g_02572370;
  lVar9 = arg1[0x3e];
  if (*(int *)(lVar9 + 0xc) == 0) {
    bVar2 = false;
    puVar6 = (void*)0x0;
  }
  else {
    local_58 = -1;
    bVar2 = false;
    puVar6 = (void*)0x0;
    while (local_58 = local_58 + 1, local_58 < *(int *)(lVar9 + 0xc)) {
      pVar8 = (void*)*(void*)(lVar9 + 0x10);
      cVar4 = FUN_00d23d70();
      if (cVar4 == '\0') {
        if (puVar6 == (void*)0x0) {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_02572358;
          (*pcVar3)();
          bVar2 = true;
        }
        cVar4 = (**(code **)(*arg1 + 0x9a0))();
        if (cVar4 != '\0') {
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d214d0();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_000be170();
    param_1 = lVar9;
  }
  iVar5 = (**(code **)(*arg1 + 0x9f0))();
  if (((puVar6 != (void*)0x0) && (iVar5 != 0)) && (0 < *(int *)((int64_t)puVar6 + 0xc))) {
    uVar10 = (uint64_t)(*(int *)((int64_t)puVar6 + 0xc) - 1);
    if (iVar5 == 1) {
      do {
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 != '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (int64_t)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    else {
      do {
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 == '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (int64_t)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  if ((puVar6 != (void*)0x0) && (param_2 != '\0')) {
    (**(code **)(&UNK_00001630 + *arg1))();
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar2) && (puVar6 != (void*)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 019bd990
// ============================================================
// Function: FUN_019bd990
// Address: 019bd990
// Size: 677 bytes
// Class: MUEditorElementView

void FUN_019bd990(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  void*this_ptr;
  bool bVar4;
  void*local_118 [14];
  int64_t local_a8;
  char local_a0;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  
  plVar3 = g_028b28c8;
  if ((g_028b28c8 == (int64_t *)0x0) || (g_028b28d1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b28c8 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028b28c8 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028b28c8 != (int64_t *)0x0;
        g_028b28c8 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028b28d0 == '\0') {
        g_028b28d0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc9f0(g_0239109c,0);
      local_3c = 0;
      FUN_01cfc9f0(g_0239109c,0);
      local_38 = 0x3e800000;
      FUN_01cfc9f0(g_023b294c,g_02390124);
      local_34 = 0x3f000000;
      FUN_01cfc9f0(g_02390124,g_02390124);
      local_30 = 0x3f000000;
      FUN_01cfc9f0(g_02390124,0);
      local_2c = 0x3f800000;
      FUN_019bddb0(&local_60,&local_3c,&local_38,&local_50,&local_2c);
      FUN_01f7ba60(g_023b5d7c,local_118);
      local_118[0] = &g_02628ac8;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      FUN_019fe220();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      g_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = g_028b28c8;
    *(void*)(this_ptr + 1) = 0;
    if (plVar3 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_019bdc14;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_019bdc14:
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 019c7c20
// ============================================================
// Function: FUN_019c7c20
// Address: 019c7c20
// Size: 699 bytes
// Class: MUEditorElementView

uint64_t FUN_019c7c20(void* param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(uint64_t *)(*(int64_t *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270ab0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfc10();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(uint64_t *)(uVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_012708c0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfc10();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 019c86b0
// ============================================================
// Function: FUN_019c86b0
// Address: 019c86b0
// Size: 699 bytes
// Class: MUEditorElementView

uint64_t FUN_019c86b0(void* param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(uint64_t *)(*(int64_t *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270ab0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfbc0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(uint64_t *)(uVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_012708c0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfbc0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 019c76d0
// ============================================================
// Function: FUN_019c76d0
// Address: 019c76d0
// Size: 699 bytes
// Class: MUEditorElementView

uint64_t FUN_019c76d0(void* param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(uint64_t *)(*(int64_t *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270ab0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012df8d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(uint64_t *)(uVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_012708c0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012df8d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 0193e5c0
// ============================================================
// Function: FUN_0193e5c0
// Address: 0193e5c0
// Size: 980 bytes
// Class: MUEditorElementView

uint32_t FUN_0193e5c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t local_98;
  int64_t local_58;
  char local_50;
  
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar3)();
  (**(code **)(*this_ptr + 0x3f8))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  do {
    (**(code **)(*this_ptr + 0x658))();
    lVar1 = *arg1;
    if (lVar1 == local_58) {
      if (((char)arg1[1] == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
        goto LAB_0193e76c;
      }
      lVar1 = *arg1;
    }
    else {
      lVar2 = arg1[1];
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_58;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0193e76c:
      *(void*)(arg1 + 1) = 1;
      lVar1 = *arg1;
    }
    if ((lVar1 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      (**(code **)(*this_ptr + 0xdf0))((int)g_023dccec,(int)g_023dccf4);
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      return local_98;
    }
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 5) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      uVar10 = FUN_00d05580(uVar8);
      (**(code **)(*this_ptr + 0xdf0))();
      FUN_00d216c0();
      FUN_00d23480();
      (**(code **)(*this_ptr + 0xb38))(uVar10,uVar9);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = (**(code **)(*(int64_t *)this_ptr[0x41] + 0x50))();
      local_98 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      if ((char)uVar7 == '\0') {
        (**(code **)(&g_00001710 + *this_ptr))();
      }
    }
  } while( true );
}



// ============================================================
// 019c1c00
// ============================================================
// Function: FUN_019c1c00
// Address: 019c1c00
// Size: 531 bytes
// Class: MUEditorElementView

int64_t FUN_019c1c00(void)

{
  uint uVar1;
  int64_t lVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  int64_t lVar7;
  bool bVar8;
  int64_t local_50;
  char local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  lVar5 = *arg1;
  if (lVar5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((uint64_t)uVar1 == 0) {
    return 0;
  }
  if (0 < (int)uVar1) {
    lVar7 = 0;
    local_3c = 0;
    local_34 = 0;
    local_40 = 0;
    local_38 = 0;
    lVar2 = **(int64_t **)(lVar5 + 0x10);
    do {
      pVar6 = (void*)lVar5;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
          goto LAB_019c1d10;
        }
      }
      else if (local_50 != 0) {
LAB_019c1d10:
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_01326de0();
        switch(uVar3) {
        case 1:
          local_38 = local_38 + 1;
          break;
        case 2:
          local_34 = local_34 + 1;
          break;
        case 3:
          local_40 = local_40 + 1;
          break;
        case 4:
          local_3c = local_3c + 1;
        }
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((uint64_t)uVar1 - 1 == lVar7) goto code_r0x019c1dae;
      lVar5 = *arg1;
      lVar7 = lVar7 + 1;
      lVar2 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8);
    } while( true );
  }
  local_38 = 0;
  local_40 = 0;
  local_34 = 0;
  local_3c = 0;
LAB_019c1ddd:
  if ((((local_34 != 0) || (local_38 == 0)) || ((local_40 != 0 || (lVar5 = 1, local_3c != 0)))) &&
     (((bVar8 = local_34 != 0 || local_38 != 0, bVar8 || (local_40 == 0)) ||
      (lVar5 = 3, local_3c != 0)))) {
    lVar5 = (uint64_t)(byte)((local_40 == 0 && local_3c != 0) & ~bVar8) << 2;
  }
  return lVar5;
code_r0x019c1dae:
  if ((((local_34 != 0) && (local_38 == 0)) && (local_40 == 0)) && (local_3c == 0)) {
    return 2;
  }
  goto LAB_019c1ddd;
}



// ============================================================
// 019be1d0
// ============================================================
// Function: FUN_019be1d0
// Address: 019be1d0
// Size: 531 bytes
// Class: MUEditorElementView

void FUN_019be1d0(uint32_t param_1)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  char *pcVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  double dVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  int64_t local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0xe20))();
  if (local_50 != 0) {
    if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((*(int *)(local_50 + 0xc) != 0) && (this_ptr[0x69] != 0)) {
      FUN_00d23310();
      pVar3 = CONCAT31((int3)((uint)param_1 >> 8),local_48[0]);
      pcVar4 = local_38;
      if (local_48[0] != '\0') {
        pcVar4 = local_48;
      }
      local_38[0] = local_48[0];
      *pcVar4 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (double)FUN_0125a280();
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (1 < *(int *)(local_50 + 0xc)) {
        lVar5 = 1;
        do {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_0125a280();
          if (dVar6 < local_40) {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_0125a280();
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(local_50 + 0xc));
      }
      auVar7._0_8_ = (**(code **)(*this_ptr + 0x938))(local_40);
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar7 = roundss(auVar7,auVar7,9);
      dVar6 = (double)(**(code **)(*this_ptr + 0x930))(auVar7._0_8_);
      if (((int64_t *)this_ptr[0x69] != (int64_t *)0x0) &&
         (local_40 = dVar6, cVar1 = (**(code **)(*(int64_t *)this_ptr[0x69] + 0x50))(),
         cVar1 == '\0')) {
        (**(code **)(*(int64_t *)this_ptr[0x69] + 0x60))();
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019c10c0
// ============================================================
// Function: FUN_019c10c0
// Address: 019c10c0
// Size: 581 bytes
// Class: MUEditorElementView

uint64_t FUN_019c10c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  uint64_t uVar4;
  char *pcVar5;
  void* pVar6;
  char *pcVar7;
  int64_t *arg1;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  char local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  pVar6 = (void*)param_1;
  cVar2 = FUN_019a9840();
  if (cVar2 == '\0') {
    return param_2;
  }
  if ((int)((uint64_t)param_1 >> 0x20) == 0) {
    if (*arg1 == 0) {
      return param_2;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    pcVar5 = local_58;
    pVar6 = CONCAT31((int3)(pVar6 >> 8),local_58[0]);
    pcVar7 = local_38;
    if (local_58[0] != '\0') {
      pcVar7 = pcVar5;
    }
    local_38[0] = local_58[0];
    *pcVar7 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
    if (local_60 == 0) {
      local_3c = (uint32_t)CONCAT71((int7)((uint64_t)pcVar5 >> 8),1);
      lVar1 = 0;
    }
    else {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      local_3c = 0;
      lVar1 = local_60;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      return param_2;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507970();
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_3c == '\0') {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012f9410();
  return uVar4;
}



// ============================================================
// 019c3480
// ============================================================
// Function: FUN_019c3480
// Address: 019c3480
// Size: 713 bytes
// Class: MUEditorElementView

uint64_t FUN_019c3480(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  void* pVar9;
  uint64_t uVar10;
  double dVar11;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int local_48;
  int local_34;
  
  lVar2 = *this_ptr;
  iVar1 = *(int *)(lVar2 + 0xc);
  if (0 < *(int *)(lVar2 + 0xc)) {
    uVar10 = 0;
    local_34 = 0;
    do {
      lVar4 = local_60;
      pVar9 = (void*)uVar10;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + uVar10 * 8);
      pVar7 = pVar9;
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      FUN_012e9900(dVar11 + g_0241b698,g_0241b6a0);
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        do {
          lVar8 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar4 + 0xc) <= local_48) goto LAB_019c3724;
          local_60 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + 8 + lVar8 * 8);
        } while ((lVar3 == local_60) || (cVar5 = FUN_019c32a0(), cVar5 == '\0'));
        local_34 = local_34 + 1;
LAB_019c3724:
        FUN_001159b0();
        FUN_00d50b20();
      }
      if (local_34 == iVar1) {
        FUN_001159b0();
        return 1;
      }
      uVar10 = (uint64_t)(pVar9 + 1);
    } while ((int)(pVar9 + 1) < *(int *)(lVar2 + 0xc));
  }
  FUN_001159b0();
  return 0;
}



// ============================================================
// 019c83e0
// ============================================================
// Function: FUN_019c83e0
// Address: 019c83e0
// Size: 549 bytes
// Class: MUEditorElementView

uint64_t FUN_019c83e0(void* param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(uint64_t *)(*(int64_t *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01265b00(g_02390124);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(uint64_t *)(uVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152e890(g_023b26e8);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 019bf190
// ============================================================
// Function: FUN_019bf190
// Address: 019bf190
// Size: 588 bytes
// Class: MUEditorElementView

void FUN_019bf190(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar5;
  int iVar6;
  int64_t local_98;
  char local_90;
  
  plVar4 = *(int64_t **)(this_ptr + 0x2c8);
  plVar1 = (int64_t *)*arg1;
  if (plVar4 == plVar1) {
    return;
  }
  if (plVar4 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
    plVar4 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) goto LAB_019bf1e8;
LAB_019bf214:
    if (plVar4 != (int64_t *)0x0) goto LAB_019bf21d;
LAB_019bf2b8:
    bVar3 = false;
    local_98 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x418))();
    plVar4 = *(int64_t **)(this_ptr + 0x2c8);
    plVar5 = plVar4;
    plVar1 = (int64_t *)*arg1;
    if (plVar4 == (int64_t *)*arg1) goto LAB_019bf214;
LAB_019bf1e8:
    plVar4 = plVar1;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0x2c8) = plVar4;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x2c8);
      goto LAB_019bf214;
    }
    if (plVar4 == (int64_t *)0x0) goto LAB_019bf2b8;
LAB_019bf21d:
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x410))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x2c8) + 0x388))();
    if (local_98 == 0) {
      bVar3 = false;
      lVar2 = *(int64_t *)(this_ptr + 0x250);
      goto joined_r0x019bf2c7;
    }
    bVar3 = true;
    if (local_90 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar2 = *(int64_t *)(this_ptr + 0x250);
joined_r0x019bf2c7:
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar6 = 0;
      do {
        FUN_01981860();
        FUN_01983f50();
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_01a01cb0();
  }
  FUN_01e4ac90();
  if ((bVar3) && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012df8d0
// ============================================================
// Function: FUN_012df8d0
// Address: 012df8d0
// Size: 602 bytes
// Class: MUEditorElementView

void FUN_012df8d0(void* param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_48;
  char local_40;
  float local_38;
  
  local_38 = g_02394288;
  if ((*(int64_t *)(this_ptr + 0x60) == 0) || (*(int64_t *)(this_ptr + 0x58) == 0))
  goto LAB_012df9a8;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012df98a;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      lVar5 = 0;
      bVar1 = false;
      bVar6 = false;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar5 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar6 = true;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar6 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_38 = g_02394288;
    if (bVar6) goto LAB_012df98f;
  }
  else {
LAB_012df98a:
    bVar1 = false;
    lVar5 = 0;
LAB_012df98f:
    local_38 = 0.0;
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
LAB_012df9a8:
  FUN_00d64850();
  *(double *)(this_ptr + 0x40) = (double)local_38;
  FUN_00d64910();
  return;
}



// ============================================================
// 019c13c0
// ============================================================
// Function: FUN_019c13c0
// Address: 019c13c0
// Size: 558 bytes
// Class: MUEditorElementView

void FUN_019c13c0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0xe20))();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e7b500(g_023908c8,0);
  if (*(int *)(local_38 + 0xc) != 0) {
    FUN_01266770();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a280();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)((int64_t)&dylib_command_00001288.cmd + *this_ptr))();
    if (cVar1 == '\0') {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012646c0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01259520();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(&g_000015f8 + *this_ptr))();
  FUN_00d50b20();
  return;
}

