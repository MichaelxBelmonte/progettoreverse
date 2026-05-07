// Function: FUN_0015fd00
// Address: 0015fd00
// Size: 4548 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_0015fd00(uint64_t param_1)

{
  void*puVar1;
  char cVar2;
  void* pVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void*puVar9;
  char *pcVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  int64_t this_ptr;
  int64_t *plVar14;
  int iVar15;
  uint32_t uVar16;
  uint uVar17;
  undefined7 uVar19;
  int64_t *plVar18;
  int64_t **pplVar20;
  bool bVar21;
  bool bVar22;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  void*local_88;
  char local_80 [8];
  void*local_78;
  uint64_t local_70;
  int local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  FUN_001616e0();
  puVar1 = local_88;
  if ((local_80[0] == '\0') && (local_88 != (void*)0x0)) {
    FUN_00d50b00();
  }
  plVar18 = *(int64_t **)(this_ptr + 0xd0);
  if (plVar18 != (int64_t *)0x0) {
    iVar15 = *(int *)((int64_t)puVar1 + 0xc);
    if (iVar15 == 0) {
      local_40 = (int64_t *)0x0;
      cVar2 = '\0';
      iVar15 = 0;
LAB_001600e0:
      (**(code **)(*plVar18 + 0x6a8))();
      (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
      lVar8 = g_026e3e60;
      lVar5 = g_026e3e58;
      plVar18 = *(int64_t **)(this_ptr + 0xd0);
      if (iVar15 == 0) {
        if (g_026e3e60 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x978))();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_026e3e58 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x978))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d23310();
      pVar3 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_80[0]);
      pcVar10 = &local_98;
      if (local_80[0] != '\0') {
        pcVar10 = local_80;
      }
      local_98 = local_80[0];
      *pcVar10 = '\0';
      if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar20 = &local_50;
      FUN_0126ef70();
      plVar18 = local_50;
      if ((g_026fdd70 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      if (plVar18 == (int64_t *)0x0) {
LAB_0015fe1d:
        pplVar20 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar18 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_0015fe1d;
      }
      local_40 = *pplVar20;
      if (*pplVar20 == (int64_t *)0x0) {
        lVar5 = 0;
        local_40 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar20 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar20 + 1) = 0;
        }
        lVar5 = CONCAT71((int7)((uint64_t)plVar18 >> 8),1);
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_58 = (int64_t *)CONCAT44(local_58._4_4_,iVar15);
      local_60 = lVar5;
      if ((local_98 != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_80[0] = '\0';
      local_88 = (void*)0x0;
      local_78 = puVar1;
      local_70 = 0xffffffff;
      local_68 = 0;
      iVar15 = 1;
      local_70._4_4_ = 0;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar13 = -local_70._4_4_;
          }
          else {
            iVar13 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar13);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar13 = 0;
          }
          local_70 = CONCAT44(iVar13,(int)local_70);
        }
        lVar5 = (int64_t)(int)local_70;
        iVar13 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar13);
        if (*(int *)((int64_t)local_78 + 0xc) <= iVar13) break;
        local_88 = *(void**)(local_78[2] + 8 + lVar5 * 8);
        pvVar4 = _pthread_getspecific((void*)local_78[2]);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        plVar18 = local_50;
        if ((g_026fdd70 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar20 = (int64_t **)&g_02802688;
        if (plVar18 != (int64_t *)0x0) {
          (**(code **)(*plVar18 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar20 = &local_50;
          if (cVar2 == '\0') {
            pplVar20 = (int64_t **)&g_02802688;
          }
        }
        plVar18 = *pplVar20;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar15 = iVar15 + (uint)(plVar18 != local_40);
      }
      puVar9 = local_78;
      FUN_001159b0();
      pVar3 = (void*)puVar9;
      plVar18 = *(int64_t **)(this_ptr + 0xd0);
      cVar2 = (char)local_60;
      if (iVar15 != 1) {
        iVar15 = (int)local_58;
        goto LAB_001600e0;
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar3 = (void*)local_40;
      }
      FUN_0123abe0();
      (**(code **)(*local_50 + 0x468))();
      puVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80[0] = '\0';
      }
      (**(code **)(*plVar18 + 0x978))();
      if (puVar9 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar18 = *(int64_t **)(this_ptr + 0xd0);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123abe0();
      (**(code **)(*local_50 + 0x470))();
      puVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80[0] = '\0';
      }
      (**(code **)(*plVar18 + 0x6a8))();
      if (puVar9 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
    }
    if ((cVar2 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = (void*)&g_02572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (puVar1 != (void*)0x0) {
    local_80[0] = '\0';
    local_88 = (void*)0x0;
    local_78 = puVar1;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar15 = -local_70._4_4_;
        }
        else {
          iVar15 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar15);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar15 = 0;
        }
        local_70 = CONCAT44(iVar15,(int)local_70);
      }
      lVar5 = (int64_t)(int)local_70;
      iVar15 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar15);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) break;
      local_88 = *(void**)(local_78[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)local_78[2]);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar18 = (int64_t *)CONCAT71(uStack_97,local_98);
      if (local_90 == '\0') {
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      local_48 = '\0';
      local_50 = plVar18;
      FUN_00d235a0();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
        FUN_00d50b20();
      }
    }
    puVar9 = local_78;
    FUN_001159b0();
  }
  lVar5 = g_026e3e60;
  plVar18 = *(int64_t **)(this_ptr + 0xd8);
  if (plVar18 != (int64_t *)0x0) {
    if (*(int *)((int64_t)puVar1 + 0xc) != 0) {
      if (puVar6 != (void*)0x0) {
        local_80[0] = '\0';
        local_88 = (void*)0x0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_60 = (uint64_t)local_60._4_4_ << 0x20;
        plVar12 = (int64_t *)0x0;
        bVar22 = false;
        local_40 = (int64_t *)0x0;
        local_78 = puVar6;
        local_70._4_4_ = 0;
        do {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar15 = -local_70._4_4_;
            }
            else {
              iVar15 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar15);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar15 = 0;
            }
            local_70 = CONCAT44(iVar15,(int)local_70);
          }
          lVar5 = (int64_t)(int)local_70;
          iVar15 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar15);
          if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) {
            puVar9 = local_78;
            uVar17 = (uint)local_60;
            goto LAB_001609f0;
          }
          puVar9 = (void*)local_78[2];
          local_88 = (void*)puVar9[lVar5 + 1];
          pvVar4 = _pthread_getspecific((void*)puVar9);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a500();
          plVar18 = local_50;
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar18 != (int64_t *)0x0) {
            pvVar4 = _pthread_getspecific((void*)puVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0134a500();
            pvVar4 = _pthread_getspecific((void*)puVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0141b7f0();
            plVar18 = local_50;
            if (local_48 == '\0') {
              if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
                 (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48 = '\0';
            }
            if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
              FUN_00d50b20();
            }
            uVar19 = (undefined7)((uint64_t)plVar12 >> 8);
            if (local_40 == (int64_t *)0x0) {
              if (plVar18 == (int64_t *)0x0) {
                local_40 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                bVar22 = true;
                local_40 = plVar18;
              }
              pVar3 = FUN_0141b8d0();
              FUN_0141b540();
              lVar8 = (int64_t)(int)pVar3;
              lVar5 = *(int64_t *)(local_50[2] + lVar8 * 8);
              if (lVar5 != 0) {
                FUN_00d50b00();
                pVar3 = (void*)lVar8;
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar5 != 0) {
                local_58 = plVar12;
                pvVar4 = _pthread_getspecific(pVar3);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b690();
                plVar11 = local_50;
                if (plVar12 == local_50) {
                  bVar21 = (char)local_60 == '\0';
                  plVar11 = plVar12;
                  uVar16 = (uint)local_60;
                  if ((bVar21) && (plVar11 = local_58, plVar12 != (int64_t *)0x0)) {
                    uVar16 = (uint32_t)CONCAT71(uVar19,1);
                    plVar12 = local_58;
                    if (local_48 != '\0') goto LAB_00160966;
                    local_60 = local_60 & 0xffffffff00000000;
                    FUN_00d50b00();
                    uVar16 = (int)CONCAT71(uVar19,1);
                  }
LAB_00160952:
                  plVar12 = plVar11;
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_48 == '\0') {
                    if (local_50 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar16 = (uint32_t)CONCAT71(uVar19,1);
                    if (((char)local_60 != '\0') && (local_58 != (int64_t *)0x0)) {
                      local_58 = plVar11;
                      FUN_00d50b20();
                    }
                    goto LAB_00160952;
                  }
                  uVar16 = (uint32_t)CONCAT71(uVar19,1);
                  plVar12 = plVar11;
                  if (((char)local_60 != '\0') && (local_58 != (int64_t *)0x0)) {
                    local_58 = local_50;
                    FUN_00d50b20();
                  }
                }
LAB_00160966:
                FUN_00d50b20();
                local_60 = CONCAT44(local_60._4_4_,uVar16);
              }
            }
            else {
              cVar2 = (**(code **)(*local_40 + 0x50))();
              plVar11 = g_02726ce0;
              if (cVar2 != '\0') goto LAB_00160b84;
            }
            if (plVar18 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        } while( true );
      }
      local_60 = (uint64_t)local_60._4_4_ << 0x20;
      plVar12 = (int64_t *)0x0;
      bVar22 = false;
      local_40 = (int64_t *)0x0;
      goto LAB_00160a26;
    }
    if (g_026e3e60 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar18 + 0x978))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  goto LAB_00160a8d;
LAB_00160b84:
  if (g_02726ce0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  cVar2 = (char)local_60;
  if (plVar12 == plVar11) {
    puVar9 = (void*)(local_60 & 0xffffffff);
    uVar17 = 1;
    if (plVar11 == (int64_t *)0x0) {
      uVar17 = (uint)local_60 & 0xff;
    }
    plVar14 = plVar12;
    if ((cVar2 != '\0') && (uVar17 = (uint)local_60 & 0xff, plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar17 = (uint)local_60;
    }
  }
  else {
    uVar17 = (uint)CONCAT71(uVar19,1);
    plVar14 = plVar11;
    if (((char)local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar12 = plVar14;
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_001609f0:
  FUN_00115190();
  plVar18 = *(int64_t **)(this_ptr + 0xd8);
  local_60 = CONCAT44(local_60._4_4_,uVar17);
LAB_00160a26:
  (**(code **)(*plVar18 + 0x978))();
  if (((char)local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar22) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00160a8d:
  pVar3 = (void*)puVar9;
  if (((*(int64_t *)(this_ptr + 0xe8) == 0) || (*(int64_t *)(this_ptr + 0xf0) == 0)) ||
     (*(int64_t *)(this_ptr + 0xf8) == 0)) {
    if (puVar6 == (void*)0x0) goto LAB_00160de7;
  }
  else {
    iVar15 = *(int *)((int64_t)puVar6 + 0xc);
    if (iVar15 == 1) {
      FUN_00d23310();
      puVar6 = local_88;
      pVar3 = (void*)CONCAT71((int7)((uint64_t)puVar9 >> 8),local_80[0]);
      pcVar10 = &local_98;
      if (local_80[0] != '\0') {
        pcVar10 = local_80;
      }
      local_98 = local_80[0];
      *pcVar10 = '\0';
      if ((local_80[0] != '\0') && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_01264240();
      plVar18 = local_50;
      if (local_50 == (int64_t *)0x0) {
        local_40 = (int64_t *)0x0;
        plVar18 = (int64_t *)0x0;
      }
      else if (local_48 == '\0') {
        uVar7 = FUN_00d50b00();
        local_40 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        local_40 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      if ((local_98 != '\0') && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_01326de0();
      bVar22 = true;
      if (iVar13 != 2) {
        pvVar4 = _pthread_getspecific(pVar3);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar13 = FUN_01326de0();
        bVar22 = iVar13 == 4;
      }
    }
    else {
      plVar18 = (int64_t *)0x0;
      local_40 = (int64_t *)0x0;
      bVar22 = false;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x998))();
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x998))();
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x998))();
    if (bVar22) {
      plVar12 = *(int64_t **)(this_ptr + 0xe8);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7bd0();
      (**(code **)(*plVar12 + 0x928))();
    }
    if (iVar15 == 1) {
      plVar12 = *(int64_t **)(this_ptr + 0xf0);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7ca0();
      (**(code **)(*plVar12 + 0x928))();
      plVar12 = *(int64_t **)(this_ptr + 0xf8);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7d70();
      (**(code **)(*plVar12 + 0x928))();
    }
    if (((char)local_40 != '\0') && (plVar18 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00160de7:
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

