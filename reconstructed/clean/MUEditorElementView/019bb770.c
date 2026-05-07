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

