// Function: FUN_0137c3f0
// Address: 0137c3f0
// Size: 3527 bytes
// Class: Unknown

void* FUN_0137c3f0(void*param_1,int64_t *param_2)

{
  uint64_t uVar1;
  byte bVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  int iVar9;
  void* pVar10;
  uint64_t uVar11;
  double dVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t arg1;
  void*this_ptr;
  int iVar15;
  uint uVar16;
  uint64_t uVar17;
  bool bVar18;
  uint32_t uVar19;
  float fVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_180;
  uint8_t local_178;
  uint64_t local_170;
  uint8_t local_168;
  uint64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  uint8_t local_148;
  uint64_t local_140;
  uint8_t local_138;
  uint64_t local_130;
  uint8_t local_128;
  void*local_120;
  uint8_t local_118;
  uint8_t local_110 [8];
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  char local_f0;
  double local_e8;
  int64_t local_e0;
  uint64_t local_d0;
  uint8_t local_c8;
  void*local_c0;
  code *local_b8;
  void*local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  uint64_t local_88;
  void*local_80;
  uint64_t local_78;
  void*local_70;
  int64_t *local_68;
  double local_60;
  void*local_58;
  uint64_t local_48;
  char local_40;
  uint64_t local_38;
  
  local_c0 = param_1;
  local_68 = param_2;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  local_70 = puVar4;
  FUN_00c92160();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar10 = 0x2572358;
  local_b0 = &g_02572358;
  *puVar4 = &g_02572358;
  local_b8 = g_02572370;
  (*g_02572370)();
  plVar14 = *(int64_t **)(arg1 + 0x38);
  local_80 = puVar4;
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    plVar14 = *(int64_t **)(arg1 + 0x38);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  local_e8 = (double)(**(code **)(*plVar14 + 0x370))();
  *(void*)(arg1 + 0x1a9) = 1;
  local_180 = *local_68;
  uVar16 = *(uint *)(local_180 + 0xc);
  dVar12 = (double)(uint64_t)uVar16;
  if (0 < (int)uVar16) {
    do {
      uVar16 = uVar16 - 1;
      lVar6 = *(int64_t *)(*(int64_t *)(local_180 + 0x10) + (uint64_t)uVar16 * 8);
      uVar8 = uVar16;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(uVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      local_60 = dVar12;
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(uVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_014bc070();
      if (cVar3 == '\0') {
LAB_0137c639:
        if ((local_48 == *(uint64_t *)(arg1 + 0x118)) ||
           (local_48 == *(uint64_t *)(arg1 + 0x128))) {
          bVar18 = true;
          if (cVar3 != '\0') goto joined_r0x0137c67e;
          goto LAB_0137c6a2;
        }
        bVar18 = local_48 == *(uint64_t *)(arg1 + 0x120);
        if (cVar3 != '\0') goto joined_r0x0137c67e;
        if (local_48 == *(uint64_t *)(arg1 + 0x120)) goto LAB_0137c6a2;
      }
      else {
        pvVar5 = _pthread_getspecific(uVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc340();
        if (local_108 != 0) goto LAB_0137c639;
        bVar18 = true;
joined_r0x0137c67e:
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if (bVar18) {
LAB_0137c6a2:
          FUN_00d23620();
        }
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      dVar12 = local_60;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((int64_t)dVar12 < 2) goto LAB_0137c6e9;
      dVar12 = (double)((int64_t)dVar12 - 1);
      local_180 = *local_68;
    } while( true );
  }
LAB_0137c6f0:
  local_178 = 0;
  local_170 = *local_c0;
  local_168 = 0;
  FUN_0136e4c0(&local_170,&local_180,1);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_78 = local_48;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = local_b0;
  uVar21 = (*local_b8)();
  lVar6 = *(int64_t *)(arg1 + 0xd0);
  local_58 = puVar4;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar13 = 0;
    do {
      local_48 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar13 * 8);
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      uVar21 = FUN_00d21140();
      if (local_48 != 0) {
        uVar21 = FUN_00d50b20();
      }
      lVar13 = lVar13 + 1;
      lVar6 = *(int64_t *)(arg1 + 0xd0);
    } while (lVar13 < *(int *)(lVar6 + 0xc));
  }
  FUN_00d242c0(uVar21,0);
  uVar11 = (uint64_t)*(uint *)((int64_t)local_58 + 0xc);
  if (0 < (int)*(uint *)((int64_t)local_58 + 0xc)) {
    iVar15 = 0;
    do {
      iVar9 = (int)uVar11;
      lVar6 = *(int64_t *)(local_58[2] + (int64_t)iVar15 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
        iVar9 = *(int *)((int64_t)local_58 + 0xc);
      }
      pVar10 = iVar9 - 1;
      bVar2 = 1;
      if ((iVar15 < (int)pVar10) &&
         (lVar13 = *(int64_t *)(local_58[2] + 8 + (int64_t)iVar15 * 8), lVar13 != 0)) {
        FUN_00d50b00();
        bVar2 = 0;
      }
      else {
        lVar13 = 0;
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (double)FUN_014bacf0();
      if (lVar13 == 0) {
        plVar14 = *(int64_t **)(arg1 + 0x38);
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          plVar14 = *(int64_t **)(arg1 + 0x38);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
        dVar12 = (double)(**(code **)(*plVar14 + 0x398))();
        if (dVar12 - local_60 < g_0241b6a8) {
LAB_0137ca43:
          FUN_00d23620();
          goto LAB_0137ca5e;
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_014bacf0();
        if (dVar12 - local_60 < g_0241b6a8) {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_014bae60();
          local_60 = (double)CONCAT44(local_60._4_4_,uVar19);
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar20 = (float)FUN_014bae60();
          if (fVar20 < local_60._0_4_) goto LAB_0137ca43;
          FUN_00d23620();
LAB_0137ca5e:
          iVar15 = iVar15 + -1;
        }
        if (!(bool)(bVar2 | lVar13 == 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      iVar15 = iVar15 + 1;
      uVar11 = (uint64_t)*(uint *)((int64_t)local_58 + 0xc);
    } while (iVar15 < (int)*(uint *)((int64_t)local_58 + 0xc));
  }
  if (*(int *)(local_78 + 0xc) < 1) {
    uVar21 = 0;
    local_38 = 0;
  }
  else {
    lVar6 = 0;
    local_38 = 0;
    uVar21 = 0;
    do {
      uVar1 = *(uint64_t *)(*(int64_t *)(local_78 + 0x10) + lVar6 * 8);
      uVar11 = local_78;
      if (uVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific((void*)uVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfdd0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        local_158 = 0;
        uVar11 = 0;
        local_160 = uVar1;
        uVar22 = FUN_0135d2e0(0,&local_160);
        local_48 = local_f8;
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            uVar22 = FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        local_40 = '\0';
        local_c8 = 0;
        local_d0 = uVar1;
        FUN_01346520(uVar22,1);
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      uVar17 = (uint64_t)*(uint *)((int64_t)local_58 + 0xc);
      local_e0 = lVar6;
      do {
        pVar10 = (void*)uVar11;
        if ((int)uVar17 < 1) break;
        lVar6 = *(int64_t *)(local_58[2] + -8 + uVar17 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((void*)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (double)FUN_014bacf0();
        pvVar5 = _pthread_getspecific((void*)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013dea30();
        if (local_60 < dVar12 + g_0241b6b0) {
          pvVar5 = _pthread_getspecific((void*)uVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_013df0a0();
          if (dVar12 + g_0241b6a8 <= local_60) {
            local_68 = (int64_t *)(local_60 + g_0240d400);
            pvVar5 = _pthread_getspecific((void*)uVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_013dea30();
            local_148 = 0;
            local_150 = lVar6;
            cVar3 = FUN_013676b0(local_68,dVar12 - (double)local_68);
            if (cVar3 != '\0') {
              local_d0 = local_d0 & 0xffffffffffffff00;
              local_138 = 0;
              local_140 = uVar1;
              FUN_0135f200((int64_t)((double)local_68 * local_e8),&local_140,local_110,&local_d0);
              if (local_48 == local_38) {
                uVar11 = local_38;
                if (((char)uVar21 == '\0') && (local_48 != 0)) {
                  uVar21 = 1;
                  if (local_40 == '\0') {
                    FUN_00d50b00();
                  }
                }
                else if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_88 = uVar21;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                  uVar21 = 1;
                  uVar11 = local_48;
                  if ((char)local_88 != '\0') {
                    if (local_38 == 0) goto LAB_0137ce5e;
                    FUN_00d50b20();
                    uVar11 = local_48;
                  }
                }
                else if (((char)uVar21 == '\0') || (local_38 == 0)) {
LAB_0137ce5e:
                  uVar21 = 1;
                  uVar11 = local_48;
                }
                else {
                  FUN_00d50b20();
                  uVar21 = 1;
                  uVar11 = local_48;
                }
              }
              local_38 = uVar11;
              uVar11 = local_38;
              if (local_38 != 0) {
                local_128 = 0;
                local_130 = local_38;
                FUN_01326e80();
                local_a8 = local_70;
                local_a0 = '\0';
                FUN_015b4ee0();
                if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                local_40 = '\0';
                FUN_00d21140();
                local_48 = local_38;
              }
            }
          }
        }
        pvVar5 = _pthread_getspecific((void*)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013de8d0();
        local_68 = (int64_t *)(dVar12 + g_0241b6a8);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar10 = (void*)uVar11;
        uVar17 = uVar17 - 1;
      } while ((double)local_68 <= local_60);
      local_98 = local_70;
      local_90 = '\0';
      pvVar5 = _pthread_getspecific(pVar10);
      lVar6 = local_e0;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de650();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de790();
      FUN_00e7b4e0();
      FUN_015b4ee0();
      if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      FUN_00d235a0();
      if (uVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      uVar11 = local_78;
      local_48 = uVar1;
    } while (lVar6 < *(int *)(local_78 + 0xc));
  }
  *(void*)(arg1 + 0x1a9) = 0;
  if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
     (*(int64_t *)(arg1 + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific((void*)uVar11);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar15 = FUN_0141bab0();
    uVar22 = extraout_XMM0_Qa_00;
    if (iVar15 != 3) goto LAB_0137d109;
  }
  else {
LAB_0137d109:
    cVar3 = FUN_01334f30();
    uVar22 = extraout_XMM0_Qa;
    if (cVar3 == '\0') goto LAB_0137d147;
  }
  if (0xe < *(int *)(local_70 + 3) + 7U) {
    local_120 = local_70;
    local_118 = 0;
    FUN_01353f80(uVar22,&local_120);
  }
LAB_0137d147:
  FUN_00d216c0();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = local_b0;
  (*local_b8)();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if (local_58 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((char)uVar21 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_0137c6e9:
  local_180 = *local_68;
  goto LAB_0137c6f0;
}

