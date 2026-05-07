// Function: FUN_00240bc0
// Address: 00240bc0
// Size: 2058 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00240bc0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint7 uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t *this_ptr;
  int64_t *plVar11;
  char cVar12;
  uint64_t uVar13;
  uint7 uVar15;
  uint64_t uVar14;
  int64_t *plVar16;
  int64_t *plVar17;
  int local_90;
  uint local_6c;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint7 uStack_3f;
  char local_31;
  
  lVar1 = *this_ptr;
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0xc) == 0)) {
    return 0;
  }
  local_90 = -1;
  local_6c = 0;
  bVar4 = false;
  local_48 = (int64_t *)0x0;
  local_40 = '\0';
  uStack_3f = 0;
  plVar16 = (int64_t *)0x0;
  cVar12 = local_40;
  uVar15 = uStack_3f;
LAB_00240c4a:
  uStack_3f = uVar15;
  local_40 = cVar12;
  local_90 = local_90 + 1;
  uVar15 = 0;
  if (*(int *)(lVar1 + 0xc) <= local_90) {
    FUN_001159b0();
    uVar14 = 1;
    if (bVar4) goto LAB_0024139a;
    goto LAB_002413a4;
  }
  pVar9 = (void*)*(void*)(lVar1 + 0x10);
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  plVar17 = local_58;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar12 = local_40;
  uVar5 = uStack_3f;
  if (plVar17 != (int64_t *)0x0) {
    if (local_90 == 0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar17 = local_58;
      if (local_58 == plVar16) {
        plVar17 = plVar16;
        if ((local_40 == '\0') && (plVar16 != (int64_t *)0x0)) {
          cVar12 = '\x01';
          if (local_50 != '\0') goto LAB_00240ec0;
          FUN_00d50b00();
          cVar12 = '\x01';
        }
        else {
          uVar15 = uStack_3f & 0xffffff;
          cVar12 = local_40;
        }
LAB_00240eac:
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar12 = '\x01';
          if ((local_40 != '\0') && (plVar16 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00240eac;
        }
        cVar12 = '\x01';
        if ((local_40 != '\0') && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00240ec0:
      plVar16 = plVar17;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01326de0();
      uVar5 = uVar15;
      if (iVar7 == 0) goto LAB_00241381;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar6 = FUN_0134c600();
      if (cVar6 != '\0') goto LAB_00241381;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar17 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_58 = plVar17;
          local_50 = '\x01';
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00240f80;
        }
        local_58 = (int64_t *)0x0;
        local_50 = '\x01';
        bVar2 = true;
      }
      else {
        local_58 = local_68;
        local_50 = '\x01';
LAB_00240f80:
        bVar2 = true;
        if (plVar17 != (int64_t *)0x0) {
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_0124d450();
          if (cVar6 != '\0') {
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124e100();
            iVar7 = *(int *)((int64_t)local_68 + 0xc);
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar7 == 0) {
              if ((g_026fdd70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
                local_31 = cVar12;
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
                cVar12 = local_31;
              }
              (**(code **)(*plVar17 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar10 = &local_58;
              if (cVar6 == '\0') {
                pplVar10 = (int64_t **)&g_02802688;
              }
              local_40 = *(char *)(pplVar10 + 1);
              if ((local_40 == '\0') || (*pplVar10 == (int64_t *)0x0)) {
                if (*pplVar10 != (int64_t *)0x0) goto LAB_002410cc;
                bVar3 = true;
LAB_0024116c:
                local_31 = cVar12;
                pvVar8 = _pthread_getspecific((void*)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                plVar11 = local_48;
                plVar17 = local_68;
                if (local_48 == local_68) {
                  if ((bVar4) || (local_48 == (int64_t *)0x0)) {
                    uVar13 = (uint64_t)local_6c;
                    bVar2 = bVar4;
                  }
                  else {
                    uVar13 = CONCAT71(uVar15,1);
                    bVar2 = true;
                    if (local_60 != '\0') goto LAB_00241250;
                    uVar13 = CONCAT71(uVar15,1);
                    FUN_00d50b00();
                    bVar2 = true;
                  }
LAB_0024123c:
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar11 = plVar17;
                  if (local_60 == '\0') {
                    if (local_68 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar13 = CONCAT71(uVar15,1);
                    bVar2 = true;
                    if ((bVar4) && (local_48 != (int64_t *)0x0)) {
                      local_48 = plVar17;
                      FUN_00d50b20();
                    }
                    goto LAB_0024123c;
                  }
                  uVar13 = CONCAT71(uVar15,1);
                  bVar2 = true;
                  if ((bVar4) && (local_48 != (int64_t *)0x0)) {
                    local_48 = local_68;
                    FUN_00d50b20();
                  }
                }
LAB_00241250:
                bVar4 = bVar2;
                bVar2 = false;
                local_6c = (uint)uVar13;
                uVar15 = (uint7)(uVar13 >> 8);
                local_48 = plVar11;
                cVar12 = local_31;
              }
              else {
                FUN_00d50b00();
LAB_002410cc:
                pvVar8 = _pthread_getspecific((void*)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0123abe0();
                plVar17 = local_68;
                FUN_00276fd0();
                pplVar10 = (int64_t **)&g_02802688;
                if (plVar17 != (int64_t *)0x0) {
                  (**(code **)(*plVar17 + 0x360))();
                  cVar6 = FUN_00e85ea0();
                  pplVar10 = &local_68;
                  if (cVar6 == '\0') {
                    pplVar10 = (int64_t **)&g_02802688;
                  }
                }
                plVar17 = *pplVar10;
                if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                bVar3 = false;
                bVar2 = true;
                if (plVar17 == (int64_t *)0x0) goto LAB_0024116c;
              }
              if ((local_40 != '\0') && (!bVar3)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2) {
        FUN_001159b0();
        uVar14 = 0;
        local_40 = cVar12;
        uStack_3f = uVar15;
        if (bVar4) {
LAB_0024139a:
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
LAB_002413a4:
        if (local_40 == '\0') {
          return uVar14;
        }
        if (plVar16 == (int64_t *)0x0) {
          return uVar14;
        }
        FUN_00d50b20();
        return uVar14;
      }
      goto LAB_00240c4a;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    plVar17 = local_58;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar12 = local_40;
    uVar5 = uStack_3f;
    if (plVar17 != plVar16) goto LAB_00241381;
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    plVar17 = local_58;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar12 = local_40;
    uVar15 = uStack_3f;
    uVar5 = uStack_3f;
    if (local_48 == plVar17) goto LAB_00240c4a;
  }
LAB_00241381:
  uStack_3f = uVar5;
  local_40 = cVar12;
  FUN_001159b0();
  uVar14 = 0;
  if (!bVar4) goto LAB_002413a4;
  goto LAB_0024139a;
}

