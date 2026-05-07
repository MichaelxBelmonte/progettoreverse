// Function: FUN_0048d550
// Address: 0048d550
// Size: 6259 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAudioFileSource"
//   "MUCustomAudioSource"
//   "MUAraAudioSource"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_0048d550(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t **pplVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int iVar17;
  int64_t *plVar18;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar19;
  uint uVar20;
  int iVar21;
  uint64_t uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double extraout_XMM0_Qa;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  uint64_t local_90;
  int local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *plVar26;
  char local_60;
  int local_50;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  FUN_00d216c0();
  FUN_00d50b00();
  local_78 = (int64_t *)((uint64_t)local_78 & 0xffffffffffffff00);
  plVar16 = arg1;
  do {
    (**(code **)(*arg1 + 0x370))();
    plVar12 = local_a8;
    local_80 = arg1;
    if (local_a8 == arg1) {
      if ((((char)local_78 == '\0') && (local_a8 != (int64_t *)0x0)) && ((char)local_a0 != '\0')) {
        goto LAB_0048d64a;
      }
    }
    else {
      if ((char)local_a0 == '\0') {
        if ((char)local_78 == '\0') {
          local_80 = local_a8;
          pplVar14 = &local_78;
        }
        else {
          FUN_00d50b20();
          local_80 = plVar12;
          pplVar14 = &local_78;
        }
      }
      else {
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        local_80 = plVar12;
        plVar16 = plVar12;
LAB_0048d64a:
        local_78 = (int64_t *)CONCAT71(local_78._1_7_,1);
        pplVar14 = &local_a0;
        plVar12 = plVar16;
      }
      *(void*)pplVar14 = 0;
      plVar16 = plVar12;
    }
    if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar12 = &g_02802688;
    if (local_80 != (int64_t *)0x0) {
      (**(code **)(*local_80 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar12 = (int64_t *)&stack0xffffffffffffff98;
      if (cVar2 == '\0') {
        plVar12 = &g_02802688;
      }
    }
    plVar6 = local_80;
    if (*plVar12 != 0) {
      if (((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
    arg1 = local_80;
  } while (local_80 != (int64_t *)0x0);
  pVar10 = (void*)plVar12;
  FUN_00d50b20();
  if (plVar6 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar23 = true;
    goto LAB_0048ec56;
  }
  cVar2 = FUN_00751ba0();
  if (cVar2 == '\0') {
    FUN_00757c60();
    plVar12 = local_a8;
    if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) {
LAB_0048e265:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar23 = true;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar12 = local_a8;
      if ((char)local_a0 == '\0') {
        if (local_a8 == (int64_t *)0x0) goto LAB_0048e265;
        FUN_00d50b00();
        if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_a8 == (int64_t *)0x0) goto LAB_0048e265;
      FUN_00757c60();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_012cb480();
      plVar6 = local_a8;
      if ((char)local_a0 == '\0') {
        if (((local_a8 != (int64_t *)0x0) &&
            (dVar24 = (double)FUN_00d50b00(), (char)local_a0 != '\0')) &&
           (local_a8 != (int64_t *)0x0)) {
          dVar24 = (double)FUN_00d50b20();
        }
      }
      else {
        local_a0._0_1_ = '\0';
      }
      if ((local_60 != '\0') && (plVar16 != (int64_t *)0x0)) {
        dVar24 = (double)FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        local_a0._0_1_ = '\0';
        local_a8 = (int64_t *)0x0;
        local_98 = plVar6;
        local_90 = 0xffffffff;
        local_88 = 0;
        iVar3 = 0;
        iVar21 = 0;
        while( true ) {
          if (iVar21 == 0) {
            iVar21 = 0;
          }
          else {
            if (iVar21 < 1) {
              iVar3 = -iVar21;
            }
            else {
              local_90 = CONCAT44(local_90._4_4_,(int)local_90 - iVar21);
              FUN_00d23690(dVar24,iVar21);
              local_88 = local_88 + iVar3;
              iVar3 = 0;
            }
            local_90 = CONCAT44(iVar3,(int)local_90);
            iVar21 = iVar3;
          }
          lVar7 = (int64_t)(int)local_90;
          iVar17 = (int)local_90 + 1;
          local_90 = CONCAT44(local_90._4_4_,iVar17);
          if (*(int *)((int64_t)local_98 + 0xc) <= iVar17) break;
          plVar6 = (int64_t *)local_98[2];
          plVar15 = (int64_t *)plVar6[lVar7 + 1];
          local_a8 = plVar15;
          pvVar5 = _pthread_getspecific((void*)plVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar24 = (double)FUN_0124c6e0();
          iVar17 = *(int *)((int64_t)plVar16 + 0xc);
          if ((local_60 != '\0') && (plVar16 != (int64_t *)0x0)) {
            dVar24 = (double)FUN_00d50b20();
          }
          if ((1 < iVar17) && (plVar12 != plVar15)) {
            pvVar5 = _pthread_getspecific((void*)plVar6);
            plVar19 = plVar12;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar6 = plVar12;
              plVar19 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            dVar25 = (double)(**(code **)(*plVar19 + 0x370))();
            pvVar5 = _pthread_getspecific((void*)plVar6);
            plVar19 = plVar15;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar19 = (int64_t *)plVar15[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            dVar24 = (double)(**(code **)(*plVar19 + 0x370))();
            if ((dVar25 == dVar24) && (!NAN(dVar25) && !NAN(dVar24))) {
              pvVar5 = _pthread_getspecific((void*)plVar6);
              plVar19 = plVar12;
              if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar6 = plVar12;
                plVar19 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              pVar10 = (void*)plVar6;
              lVar7 = (**(code **)(*plVar19 + 0x378))();
              pvVar5 = _pthread_getspecific(pVar10);
              plVar6 = plVar15;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar6 = (int64_t *)plVar15[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              lVar8 = (**(code **)(*plVar6 + 0x378))();
              uVar22 = lVar7 - lVar8;
              uVar9 = -uVar22;
              if (0 < (int64_t)uVar22) {
                uVar9 = uVar22;
              }
              dVar24 = extraout_XMM0_Qa;
              if (uVar9 < 2) {
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar24 = (double)FUN_0124c6e0();
                plVar6 = *(int64_t **)(plVar16[2] + 8);
                if (plVar6 != (int64_t *)0x0) {
                  dVar24 = (double)FUN_00d50b00();
                }
                if ((local_60 != '\0') && (plVar16 != (int64_t *)0x0)) {
                  dVar24 = (double)FUN_00d50b20();
                }
                if (plVar6 != (int64_t *)0x0) {
                  if ((g_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
                  pplVar14 = (int64_t **)&g_02802688;
                  if (plVar15 != (int64_t *)0x0) {
                    (**(code **)(*plVar15 + 0x360))();
                    cVar2 = FUN_00e85ea0();
                    pplVar14 = &local_a8;
                    if (cVar2 == '\0') {
                      pplVar14 = (int64_t **)&g_02802688;
                    }
                  }
                  if (*(char *)(pplVar14 + 1) == '\0') {
                    if (*pplVar14 != (int64_t *)0x0) {
                      FUN_00d50b00();
LAB_0048e5c9:
                      pVar10 = (void*)pplVar14;
                      FUN_01f27fe0();
                      cVar2 = (**(code **)(*plVar16 + 0x450))();
                      if ((local_60 != '\0') && (plVar16 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (cVar2 == '\0') {
                        FUN_00757c60();
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012cb110();
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012e6160();
                        if ((local_60 == '\0') && (plVar16 != (int64_t *)0x0)) {
                          FUN_00d50b00();
                        }
                        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar16 == (int64_t *)0x0) goto LAB_0048e878;
                        local_50 = -1;
                        while( true ) {
                          lVar7 = (int64_t)local_50;
                          local_50 = local_50 + 1;
                          if (*(int *)((int64_t)plVar16 + 0xc) <= local_50) break;
                          plVar15 = (int64_t *)plVar16[2];
                          lVar7 = plVar15[lVar7 + 1];
                          FUN_004f9cf0();
                          local_70 = '\0';
                          local_78 = plVar6;
                          cVar2 = FUN_00d23d70();
                          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((cVar2 != '\0') && (*(int *)((int64_t)local_d8 + 0xc) == 1)) {
                            bVar23 = lVar7 == 0;
                            if (bVar23) {
                              lVar7 = 0;
                              plVar16 = plVar15;
                            }
                            else {
                              FUN_00d50b00();
                              plVar16 = plVar15;
                            }
                            bVar23 = !bVar23;
                            if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            goto LAB_0048e823;
                          }
                          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        lVar7 = 0;
                        bVar23 = false;
LAB_0048e823:
                        pVar10 = (void*)plVar16;
                        FUN_000be170();
                        FUN_00d50b20();
                        if (lVar7 == 0) goto LAB_0048e878;
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012e6000();
                        plVar16 = local_78;
                        if (local_70 == '\0') {
                          if (local_78 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        FUN_00d21140();
                        if (plVar16 != (int64_t *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        FUN_00d21140();
                        if (bVar23) {
                          FUN_00d50b20();
                        }
                      }
                      else {
LAB_0048e878:
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0123abe0();
                        (**(code **)(*local_d8 + 0x388))();
                        plVar16 = local_78;
                        if (local_70 == '\0') {
                          if (local_78 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        FUN_00d21140();
                        if (plVar16 != (int64_t *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        FUN_00d21140();
                      }
                      local_60 = '\0';
                      FUN_00d50b20();
                      plVar16 = plVar6;
                    }
                  }
                  else {
                    *(void*)(pplVar14 + 1) = 0;
                    if (*pplVar14 != (int64_t *)0x0) goto LAB_0048e5c9;
                  }
                  dVar24 = (double)FUN_00d50b20();
                }
                iVar3 = local_90._4_4_;
                iVar21 = local_90._4_4_;
              }
            }
          }
        }
        FUN_00115e00();
        FUN_00d50b20();
      }
      *this_ptr = puVar4;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      bVar23 = false;
    }
  }
  else {
    FUN_00792ed0();
    plVar12 = local_a8;
    if (((((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), (char)local_a0 != '\0')) && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    if ((g_0272a620 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_02799028 = FUN_00115af0();
      g_02799010 = "MUCustomAudioSource";
      g_02799018 = 0x78;
      pVar10 = 0x49c5f0;
      g_02799020 = FUN_0049c5f0;
      g_02799030 = 0;
      ram_0000000002799038 = 0;
      g_02799040 = 0;
      ram_0000000002799048 = 0;
      g_02799050 = 0;
      ram_0000000002799058 = 0;
      g_02799060 = 0;
      ram_0000000002799068 = 0;
      g_02799070 = 0;
      ram_0000000002799078 = 0;
      g_02799080 = 0;
      ram_0000000002799088 = 0;
      g_02799090 = 0;
      ram_0000000002799098 = 0;
      g_027990a0 = 0;
      ram_00000000027990a8 = 0;
      g_027990b0 = 0;
      ram_00000000027990b8 = 0;
      g_027990c0 = 0;
      ram_00000000027990c8 = 0;
      g_027990d0 = 0;
      ___cxa_guard_release();
    }
    if (plVar16 != (int64_t *)0x0) {
      (**(code **)(*plVar16 + 0x360))();
      FUN_00e85ea0();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_a8 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = (int64_t *)(**(code **)(*local_a8 + 0x10))();
    }
    if ((g_0272a630 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_02708978 = FUN_0049c750();
      g_02708960 = "MUAraAudioSource";
      g_02708968 = 0x138;
      pVar10 = 0x49c720;
      g_02708970 = FUN_0049c720;
      g_02708980 = 0;
      ram_0000000002708988 = 0;
      g_02708990 = 0;
      ram_0000000002708998 = 0;
      g_027089a0 = 0;
      ram_00000000027089a8 = 0;
      g_027089b0 = 0;
      ram_00000000027089b8 = 0;
      g_027089c0 = 0;
      ram_00000000027089c8 = 0;
      g_027089d0 = 0;
      ram_00000000027089d8 = 0;
      g_027089e0 = 0;
      ram_00000000027089e8 = 0;
      g_027089f0 = 0;
      ram_00000000027089f8 = 0;
      g_02708a00 = 0;
      ram_0000000002708a08 = 0;
      g_02708a10 = 0;
      ram_0000000002708a18 = 0;
      g_02708a20 = 0;
      ___cxa_guard_release();
    }
    bVar1 = true;
    bVar23 = true;
    if (plVar6 == (int64_t *)0x0) {
LAB_0048d98a:
      plVar6 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0048d98a;
      FUN_00d50b00();
      bVar1 = false;
      bVar23 = false;
    }
    if (((char)local_a0 != '\0') && (bVar23 = bVar1, local_a8 != (int64_t *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (plVar16 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar23) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar1 = true;
      bVar23 = true;
    }
    else {
      FUN_0167ab60();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537d40();
      plVar15 = local_a8;
      if ((char)local_a0 == '\0') {
        if (((local_a8 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_a0 != '\0')) &&
           (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a0._0_1_ = '\0';
      }
      if ((local_60 != '\0') && (plVar16 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 == (int64_t *)0x0) {
        *this_ptr = puVar4;
        *(void*)(this_ptr + 1) = 1;
LAB_0048ec37:
        FUN_00d50b20();
      }
      else {
        local_a0._0_1_ = '\0';
        local_a8 = (int64_t *)0x0;
        local_98 = plVar15;
        local_88 = 0;
        local_90 = 0;
        if (0 < *(int *)((int64_t)plVar15 + 0xc)) {
          uVar20 = 0;
          do {
            plVar19 = *(int64_t **)(plVar15[2] + (uint64_t)uVar20 * 8);
            uVar11 = uVar20;
            local_a8 = plVar19;
            pvVar5 = _pthread_getspecific(uVar20);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670b0();
            if (local_60 == '\0') {
              if (plVar16 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_0048dba0;
              }
            }
            else if (plVar16 != (int64_t *)0x0) {
LAB_0048dba0:
              pvVar5 = _pthread_getspecific(uVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016678c0();
              plVar26 = plVar16;
              if (local_60 == '\0') {
                if (plVar16 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  goto LAB_0048dc40;
                }
              }
              else if (plVar16 != (int64_t *)0x0) {
LAB_0048dc40:
                local_60 = '\0';
                plVar26 = (int64_t *)0x0;
                local_50 = -1;
                bVar1 = true;
                while( true ) {
                  lVar7 = (int64_t)local_50;
                  local_50 = local_50 + 1;
                  if (*(int *)((int64_t)plVar16 + 0xc) <= local_50) break;
                  plVar26 = *(int64_t **)(plVar16[2] + 8 + lVar7 * 8);
                  pvVar5 = _pthread_getspecific((void*)plVar16[2]);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01650890();
                  if (cVar2 == '\0') {
                    bVar1 = false;
                  }
                }
                plVar13 = plVar16;
                FUN_0049cc10();
                FUN_00d50b20();
                if (!bVar1) {
                  pvVar5 = _pthread_getspecific((void*)plVar13);
                  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    plVar13 = plVar16;
                  }
                  FUN_0124c6e0();
                  if (1 < *(int *)((int64_t)plVar26 + 0xc)) {
                    pvVar5 = _pthread_getspecific((void*)plVar13);
                    plVar18 = plVar16;
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar13 = plVar16;
                      plVar18 = (int64_t *)plVar16[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    lVar7 = (**(code **)(*plVar18 + 0x378))();
                    pvVar5 = _pthread_getspecific((void*)plVar13);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01320d00();
                    pvVar5 = _pthread_getspecific((void*)plVar13);
                    plVar18 = plVar26;
                    if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                      plVar18 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                    lVar8 = (**(code **)(*plVar18 + 0x378))();
                    uVar22 = lVar7 - lVar8;
                    uVar9 = -uVar22;
                    if (0 < (int64_t)uVar22) {
                      uVar9 = uVar22;
                    }
                    if (uVar9 < 2) {
                      pvVar5 = _pthread_getspecific((void*)plVar13);
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar13 = plVar16;
                        plVar16 = (int64_t *)plVar16[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      pVar10 = (void*)plVar13;
                      dVar24 = (double)(**(code **)(*plVar16 + 0x370))();
                      pvVar5 = _pthread_getspecific(pVar10);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01320d00();
                      pvVar5 = _pthread_getspecific(pVar10);
                      plVar16 = plVar26;
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar16 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      dVar25 = (double)(**(code **)(*plVar16 + 0x370))();
                      if (((dVar24 == dVar25) && (!NAN(dVar24) && !NAN(dVar25))) &&
                         (plVar19 != plVar6)) {
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_01667b90();
                        plVar16 = local_78;
                        if (local_70 == '\0') {
                          if (local_78 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        FUN_00d21140();
                        if (plVar16 != (int64_t *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0124c6e0();
                        plVar26 = *(int64_t **)(local_78[2] + 8);
                        if (plVar26 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        local_60 = '\0';
                        FUN_00d21140();
                        if (plVar26 != (int64_t *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                  }
                }
              }
              FUN_00d50b20();
              plVar16 = plVar26;
            }
            uVar20 = uVar20 + 1;
            local_90 = CONCAT44(local_90._4_4_,uVar20);
          } while ((int)uVar20 < *(int *)((int64_t)plVar15 + 0xc));
        }
        FUN_0049cb70();
        FUN_00d50b20();
        *this_ptr = puVar4;
        *(void*)(this_ptr + 1) = 1;
        if (!bVar23) goto LAB_0048ec37;
      }
      bVar1 = false;
      bVar23 = false;
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
      bVar23 = bVar1;
    }
  }
  FUN_00d50b20();
LAB_0048ec56:
  if ((bVar23) && (puVar4 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

