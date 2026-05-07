// ===================================================================
// MUAraAudioSource — Complete reconstructed pseudocode
// 54 functions
// ===================================================================

// Registered properties (11):
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


// ============================================================
// 0048d550
// ============================================================
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



// ============================================================
// 0048ba10
// ============================================================
// Function: FUN_0048ba10
// Address: 0048ba10
// Size: 4413 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAudioFileSource"
//   "%@: %@"
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


void FUN_0048ba10(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int iVar9;
  int64_t *this_ptr;
  int64_t **pplVar10;
  bool bVar11;
  uint32_t uVar12;
  int64_t local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  uint32_t uStack_4c;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (this_ptr[0x35] == 0) {
    return;
  }
  if (this_ptr[0x23] == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_70;
  FUN_01320d00();
  plVar4 = local_70;
  if ((g_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    param_1 = 0x136df0;
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
  if (plVar4 == (int64_t *)0x0) {
LAB_0048bacb:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0048bacb;
  }
  plVar4 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar10 = &local_70;
    FUN_01320d00();
    plVar4 = local_70;
    if ((g_0272a620 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      g_02799028 = FUN_00115af0();
      g_02799010 = "MUCustomAudioSource";
      g_02799018 = 0x78;
      param_1 = 0x49c5f0;
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
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') goto LAB_0048bcfd;
    }
    pplVar10 = (int64_t **)&g_02802688;
LAB_0048bcfd:
    plVar4 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      return;
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_70 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
    }
    else {
      plVar4 = (int64_t *)(**(code **)(*local_70 + 0x10))();
    }
    if ((g_0272a630 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      g_02708978 = FUN_0049c750();
      g_02708960 = "MUAraAudioSource";
      g_02708968 = 0x138;
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
    bVar11 = true;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') {
        FUN_00d50b00();
        bVar11 = false;
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    lVar5 = g_026f6f70;
    if (!bVar11) {
      plVar4 = (int64_t *)this_ptr[0x35];
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_026fbaa0;
      local_118 = lVar5;
      local_110 = '\x01';
      if (g_026fbaa0 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar8;
      local_100 = '\x01';
      local_f8 = 0;
      local_f0 = '\0';
      plVar7 = &local_f8;
      FUN_00d31230(plVar7,&local_108);
      pvVar2 = _pthread_getspecific((void*)plVar7);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01667b90();
      local_150 = local_148;
      uVar12 = FUN_00083ea0(2,&local_150);
      FUN_00d8cb40(uVar12,&local_70);
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar4 + 0x968))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = (int64_t *)&g_0253d630;
      if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
        FUN_00d50b20();
      }
      local_70 = &g_024c5048;
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_70 + 0x450))();
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    local_78 = plVar4;
    FUN_00d50b00();
    local_88 = '\0';
    plVar4 = this_ptr;
    local_40 = this_ptr;
    do {
      (**(code **)(*plVar4 + 0x370))();
      plVar7 = local_70;
      if (local_70 == plVar4) {
        if (((local_88 == '\0') && (local_70 != (int64_t *)0x0)) &&
           (plVar7 = plVar4, local_68[0] != '\0')) goto LAB_0048bbc7;
      }
      else {
        local_40 = local_70;
        if (local_68[0] == '\0') {
          if (local_88 == '\0') {
            pcVar3 = &local_88;
          }
          else {
            FUN_00d50b20();
            pcVar3 = &local_88;
          }
        }
        else {
          if (local_88 != '\0') {
            FUN_00d50b20();
          }
LAB_0048bbc7:
          local_88 = '\x01';
          pcVar3 = local_68;
        }
        *pcVar3 = '\0';
        plVar4 = plVar7;
      }
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      pplVar10 = (int64_t **)&g_02802688;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar10 = &local_40;
        if (cVar1 == '\0') {
          pplVar10 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar10 != (int64_t *)0x0) {
        if ((local_88 == '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar4 != (int64_t *)0x0);
    param_1 = (void*)pplVar10;
    FUN_00d50b20();
    if (plVar4 != (int64_t *)0x0) {
      FUN_00757c60();
      if (local_70 == (int64_t *)0x0) {
        bVar11 = false;
      }
      else {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        bVar11 = local_40 != (int64_t *)0x0;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        plVar4 = local_70;
        if (local_68[0] == '\0') {
          if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = '\0';
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          local_68[0] = '\0';
          local_70 = (int64_t *)0x0;
          local_60 = plVar4;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          local_e8 = plVar4;
          do {
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                iVar9 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar9);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
            lVar5 = (int64_t)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)((int64_t)local_60 + 0xc) <= iVar9) {
              plVar4 = local_60;
              FUN_000be170();
              param_1 = (void*)plVar4;
              FUN_00d50b20();
              break;
            }
            lVar8 = local_60[2];
            local_138 = *(int64_t **)(lVar8 + 8 + lVar5 * 8);
            local_130 = '\0';
            local_70 = local_138;
            FUN_004f9cf0();
            plVar4 = local_40;
            pVar6 = (void*)lVar8;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = (int64_t *)this_ptr[0x23];
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_40 = plVar7;
            cVar1 = FUN_00d23d70();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar1 == '\0') {
              if (plVar7 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (plVar4 != (int64_t *)0x0) goto LAB_0048c0d0;
            }
            else {
              iVar9 = *(int *)((int64_t)plVar4 + 0xc);
              if (plVar7 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (iVar9 == 1) goto LAB_0048c73b;
LAB_0048c0d0:
              FUN_00d50b20();
            }
          } while( true );
        }
      }
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  plVar4 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(char *)((int64_t)this_ptr + 0x27a) == '\0') &&
     (*(char *)((int64_t)this_ptr + 0x27b) != '\0')) {
    local_128 = plVar4;
    local_120 = '\0';
    FUN_014fff90();
    plVar7 = local_70;
    if (plVar4 == local_70) {
LAB_0048c7b4:
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68[0] == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = plVar4 != (int64_t *)0x0;
        plVar4 = plVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
        goto LAB_0048c7b4;
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_68[0] = '\0';
      plVar4 = plVar7;
    }
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    plVar4 = (int64_t *)this_ptr[0x35];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x468))();
    local_c0 = local_70;
    local_b8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_b8 = '\x01';
    (**(code **)(*plVar4 + 0x968))();
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = (int64_t *)this_ptr[0x35];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x470))();
    local_b0 = local_70;
    local_a8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_a8 = '\x01';
    (**(code **)(*plVar4 + 0x6a8))();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_0048c6cc:
  FUN_00d50b20();
  return;
LAB_0048c73b:
  plVar4 = (int64_t *)this_ptr[0x35];
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  local_e0 = local_40;
  local_d8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_d8 = '\x01';
  (**(code **)(*plVar4 + 0x968))();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)this_ptr[0x35];
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*(int64_t *)CONCAT71(uStack_87,local_88) + 0x468))();
  local_d0 = local_40;
  local_c8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c8 = '\x01';
  (**(code **)(*plVar4 + 0x6a8))();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_000be170();
  FUN_00d50b20();
  FUN_00d50b20();
  goto LAB_0048c6cc;
}



// ============================================================
// 01673fe0
// ============================================================
// Function: FUN_01673fe0
// Address: 01673fe0
// Size: 2996 bytes
// Class: MUAraAudioSource
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


uint64_t FUN_01673fe0(void*param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*puVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void* pVar11;
  char *pcVar12;
  void*puVar13;
  void**ppuVar14;
  uint64_t uVar15;
  void*puVar16;
  int iVar17;
  int64_t *arg1;
  byte bVar18;
  bool bVar19;
  char cVar20;
  void*unaff_R13;
  undefined7 uVar21;
  void*puVar22;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  void*local_78;
  void*local_70;
  void*local_68;
  uint64_t local_60;
  int local_58;
  void*local_50;
  void*local_48;
  void*local_40;
  char local_38 [8];
  
  puVar13 = (void*)0x0;
  local_48 = param_1;
  FUN_01674fe0();
  local_50 = local_78;
  puVar16 = local_78;
  if (((((char)local_70 == '\0') && (local_78 != (void*)0x0)) &&
      (FUN_00d50b00(), puVar16 = local_50, (char)local_70 != '\0')) &&
     (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(puVar16 + 0xc) == 0) {
    uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),1);
  }
  else {
    lVar6 = *arg1;
    pvVar4 = _pthread_getspecific((void*)puVar13);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    puVar16 = (void*)*arg1;
    if (*(int64_t *)(lVar6 + 0x48) == 0) {
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (void*)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(void**)(puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      puVar7 = *(void**)(puVar16 + 0x40);
      if (puVar7 != (void*)0x0) {
        FUN_00d50b00();
      }
      FUN_00d242c0();
      uVar3 = *(uint *)((int64_t)puVar7 + 0xc);
      uVar1 = *(uint *)(local_50 + 0xc);
      pcVar12 = (char *)(uint64_t)uVar1;
      if (uVar3 == uVar1) {
        local_70._0_1_ = '\0';
        local_78 = (void*)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (*(int *)(local_50 + 0xc) < 1) {
          bVar18 = 1;
        }
        else {
          bVar18 = 1;
          puVar16 = (void*)0x0;
          local_48 = puVar7;
          do {
            local_78 = *(void**)(*(int64_t *)(local_50 + 0x10) + (int64_t)puVar16 * 8);
            pvVar4 = _pthread_getspecific((void*)pcVar12);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017120c0();
            bVar2 = FUN_01673220();
            bVar18 = bVar18 & bVar2;
            puVar16 = puVar16 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)puVar16);
            puVar7 = local_48;
          } while ((int)puVar16 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),bVar18 != 0);
      }
      else {
        bVar19 = (int)uVar1 <= (int)uVar3;
        if (uVar3 != 0) {
          local_70._0_1_ = '\0';
          local_78 = (void*)0x0;
          local_68 = local_50;
          local_58 = 0;
          local_60 = 0;
          local_48 = puVar7;
          if (0 < *(int *)(local_50 + 0xc)) {
            lVar6 = 0;
            do {
              local_78 = *(void**)(*(int64_t *)(local_50 + 0x10) + lVar6 * 8);
              FUN_01671da0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 == (void*)0x0) goto LAB_01674630;
                FUN_00d50b00();
              }
              else if (local_40 == (void*)0x0) {
LAB_01674630:
                FUN_00d23310();
                puVar16 = local_40;
                local_88 = local_38[0];
                pcVar12 = &local_88;
                pcVar8 = local_38;
                if (local_38[0] == '\0') {
                  pcVar8 = pcVar12;
                }
                *pcVar8 = '\0';
                if ((local_38[0] != '\0') && (puVar16 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if ((puVar16 != (void*)0x0) && (puVar13 = puVar16, local_88 == '\0')) {
                  FUN_00d50b00();
                }
                bVar19 = false;
              }
              pvVar4 = _pthread_getspecific((void*)pcVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017120c0();
              uVar3 = FUN_01673220();
              puVar16 = (void*)(uint64_t)uVar3;
              if (puVar13 != (void*)0x0) {
                FUN_00d50b20();
              }
              bVar19 = (bool)(bVar19 & (byte)uVar3);
              lVar6 = lVar6 + 1;
              local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
            } while ((int)lVar6 < *(int *)(local_50 + 0xc));
          }
          FUN_0166fd40();
          puVar7 = local_48;
        }
        uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),bVar19 != false);
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (void*)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(void**)(puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      if (puVar16[0x51] == '\0') {
        uVar15 = 0;
LAB_0167475c:
        puVar22 = (void*)0x0;
        if ((void*)*local_48 != (void*)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (void*)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_68 = (void*)*local_48;
          while( true ) {
            lVar6 = (int64_t)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            puVar13 = local_68;
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            puVar13 = *(void**)(local_68 + 0x10);
            local_78 = *(void**)(puVar13 + lVar6 * 8 + 8);
            pvVar4 = _pthread_getspecific((void*)puVar13);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016501d0();
            puVar16 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (puVar16 != (void*)0x0) {
              pvVar4 = _pthread_getspecific((void*)puVar13);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016501d0();
              puVar16 = (void*)CONCAT71(uStack_87,local_88);
              pvVar4 = _pthread_getspecific((void*)puVar13);
              if (pvVar4 != (void *)0x0) {
                puVar16 = (void*)CONCAT71(uStack_87,local_88);
                lVar6 = FUN_00e8b990();
                if (lVar6 != 0) {
                  puVar16 = *(void**)
                             (puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
                }
              }
              FUN_015058d0();
              puVar22 = local_40;
              if (local_40 == (void*)0x0) {
                puVar22 = (void*)0x0;
              }
              else {
                uVar21 = (undefined7)(uVar15 >> 8);
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                  uVar15 = CONCAT71(uVar21,1);
                  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38[0] = '\0';
                  uVar15 = CONCAT71(uVar21,1);
                }
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              break;
            }
            puVar16 = (void*)0x0;
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
          }
          FUN_0049cc10();
        }
      }
      else {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar13 = &g_02572358;
        *puVar7 = &g_02572358;
        (*g_02572370)();
        if ((void*)*local_48 != (void*)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (void*)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_60._4_4_ = 0;
          local_68 = (void*)*local_48;
          while( true ) {
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                iVar17 = (int)local_60 - local_60._4_4_;
                local_60 = CONCAT44(local_60._4_4_,iVar17);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
            lVar6 = (int64_t)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            lVar5 = *(int64_t *)(local_68 + 0x10);
            puVar16 = *(void**)(lVar5 + 8 + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((void*)lVar5);
            puVar13 = local_78;
            pVar11 = (void*)lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), puVar16 = puVar13, lVar6 != 0))
            {
              puVar16 = *(void**)
                         (puVar13 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_016501d0();
            unaff_R13 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (void*)0x0) {
                FUN_00d50b00();
                if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01674220;
              }
            }
            else if (local_40 != (void*)0x0) {
LAB_01674220:
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015058d0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 != (void*)0x0) {
                  FUN_00d50b00();
                  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_016742b0;
                }
              }
              else if (local_40 != (void*)0x0) {
LAB_016742b0:
                pvVar4 = _pthread_getspecific(pVar11);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01510360(0,0,0);
                puVar16 = local_40;
                if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if (puVar16 != (void*)0x0) {
                  local_38[0] = '\0';
                  local_40 = puVar13;
                  FUN_00d21140();
                  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          puVar13 = local_68;
          FUN_0049cc10();
        }
        FUN_00d242c0();
        FUN_00d23340();
        puVar22 = local_78;
        puVar13 = (void*)CONCAT71((int7)((uint64_t)puVar13 >> 8),(char)local_70);
        ppuVar14 = &local_40;
        if ((char)local_70 != '\0') {
          ppuVar14 = &local_70;
        }
        local_40 = (void*)CONCAT71(local_40._1_7_,(char)local_70);
        *(void*)ppuVar14 = 0;
        if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar22 == (void*)0x0) {
          puVar22 = (void*)0x0;
          uVar15 = 0;
        }
        else {
          uVar15 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
          if ((char)local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar22 == (void*)0x0) goto LAB_0167475c;
      }
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_01676840();
      (**(code **)(*plVar9 + 0x18))();
      if (puVar22 != (void*)0x0) {
        pvVar4 = _pthread_getspecific((void*)puVar13);
        plVar10 = plVar9;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        puVar16 = (void*)plVar10[7];
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if (pvVar4 != (void *)0x0) {
          puVar16 = (void*)plVar10[7];
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            puVar16 = *(void**)
                       (puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
          }
        }
        FUN_015127c0();
      }
      pvVar4 = _pthread_getspecific((void*)puVar13);
      plVar10 = plVar9;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar10 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      *(void*)(plVar10 + 0xb) = 0;
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        *(void*)((int64_t)plVar9 + 0x59) = 0;
        if (local_50 != (void*)0x0) goto LAB_01674ad7;
LAB_01674bbc:
        cVar20 = (char)uVar15;
        FUN_00d50b20();
      }
      else {
        *(void*)(plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x59) = 0;
        if (local_50 == (void*)0x0) goto LAB_01674bbc;
LAB_01674ad7:
        local_48 = (void*)CONCAT44(local_48._4_4_,(int)uVar15);
        local_70._0_1_ = '\0';
        local_78 = (void*)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (0 < *(int *)(local_50 + 0xc)) {
          lVar6 = 0;
          do {
            puVar16 = *(void**)(*(int64_t *)(local_50 + 0x10) + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((void*)puVar13);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              puVar16 = *(void**)
                         (puVar16 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_017120c0();
            lVar6 = lVar6 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = (uint64_t)local_48 & 0xffffffff;
        cVar20 = (char)local_48;
        if (plVar9 != (int64_t *)0x0) goto LAB_01674bbc;
      }
      if ((cVar20 != '\0') && (puVar22 != (void*)0x0)) {
        FUN_00d50b20();
      }
      uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),1);
      if (local_50 == (void*)0x0) goto LAB_01674be6;
    }
  }
  FUN_00d50b20();
LAB_01674be6:
  return uVar15 & 0xffffffff;
}



// ============================================================
// 007860e0
// ============================================================
// Function: FUN_007860e0
// Address: 007860e0
// Size: 3801 bytes
// Class: MUAraAudioSource
// String references:
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


void FUN_007860e0(void* param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t *plVar7;
  void*puVar8;
  int64_t **pplVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar12;
  uint32_t uVar13;
  int64_t local_1a0;
  char local_198;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  uint64_t local_80;
  int local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  
  local_a8 = param_2;
  cVar4 = FUN_00751ba0();
  if (cVar4 == '\0') {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124c710();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    plVar7 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    local_a0 = plVar7;
    if (plVar7 != (int64_t *)0x0) {
      local_58[0] = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = plVar7;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        lVar11 = (int64_t)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar5) break;
        local_60 = *(int64_t **)(local_50[2] + 8 + lVar11 * 8);
        pvVar6 = _pthread_getspecific((void*)local_50[2]);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        plVar7 = local_98;
        if (local_90 == '\0') {
          if (local_98 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00786600;
          }
        }
        else if (local_98 != (int64_t *)0x0) {
LAB_00786600:
          local_90 = '\0';
          local_98 = (int64_t *)0x0;
          local_88 = plVar7;
          local_80 = 0xffffffff;
          local_78 = 0;
          while( true ) {
            lVar11 = (int64_t)(int)local_80;
            iVar5 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar5);
            if (*(int *)((int64_t)local_88 + 0xc) <= iVar5) break;
            local_98 = *(int64_t **)(local_88[2] + 8 + lVar11 * 8);
            pvVar6 = _pthread_getspecific((void*)local_88[2]);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            plVar3 = local_70;
            plVar7 = (int64_t *)*arg1;
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 == plVar7) {
              local_70 = local_60;
              local_68 = '\0';
              FUN_00d21140();
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              break;
            }
            if (local_80._4_4_ != 0) {
              if (local_80._4_4_ < 1) {
                iVar5 = -local_80._4_4_;
              }
              else {
                local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
                FUN_00d23690();
                local_78 = local_78 + local_80._4_4_;
                iVar5 = 0;
              }
              local_80 = CONCAT44(iVar5,(int)local_80);
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00d23310();
    plVar7 = local_60;
    pplVar9 = &local_98;
    if (local_58[0] != '\0') {
      pplVar9 = (int64_t **)local_58;
    }
    local_98 = (int64_t *)CONCAT71(local_98._1_7_,local_58[0]);
    *(char *)pplVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_98 == '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    uVar13 = FUN_00d23310();
    plVar3 = local_60;
    local_70 = (int64_t *)CONCAT71(local_70._1_7_,local_58[0]);
    pplVar9 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar9 = &local_70;
    }
    *(char *)pplVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    local_d0 = 0;
    if ((char)local_70 == '\0') {
      if (plVar3 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_70 = (int64_t *)((uint64_t)local_70 & 0xffffffffffffff00);
    }
    local_d0 = '\x01';
    local_d8 = plVar3;
    local_148 = *arg1;
    local_140 = '\0';
    FUN_004f9d80(uVar13,&local_148);
    plVar3 = local_98;
    if (local_90 == '\0') {
      if (((local_98 != (int64_t *)0x0) && (FUN_00d50b00(), local_90 != '\0')) &&
         (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_90 = '\0';
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_e8 = plVar3;
    uVar13 = FUN_00d23310();
    plVar3 = local_60;
    pplVar9 = &local_70;
    pplVar12 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar12 = pplVar9;
    }
    local_70 = (int64_t *)CONCAT71(local_70._1_7_,local_58[0]);
    *(char *)pplVar12 = '\0';
    if ((local_58[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    pVar10 = (void*)pplVar9;
    local_c0 = 0;
    if ((char)local_70 == '\0') {
      if (plVar3 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_70 = (int64_t *)((uint64_t)local_70 & 0xffffffffffffff00);
    }
    plVar2 = local_e8;
    local_c0 = '\x01';
    local_c8 = plVar3;
    local_138 = *local_a8;
    local_130 = '\0';
    FUN_004f9d80(uVar13,&local_138);
    local_e0 = local_98;
    if (local_90 == '\0') {
      if (((local_98 != (int64_t *)0x0) && (FUN_00d50b00(), local_90 != '\0')) &&
         (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_90 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_128 = plVar2;
    local_120 = '\0';
    local_118 = *local_a8;
    local_110 = '\0';
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    local_b8 = local_60;
    local_b0 = 0;
    if (local_58[0] == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    plVar3 = local_a0;
    local_b0 = '\x01';
    FUN_012f0b60(&local_118,&local_128,0,0,&local_b8);
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_e0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_e8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    plVar7 = local_98;
    if ((g_0272a620 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02799028 = FUN_00115af0();
      g_02799010 = "MUCustomAudioSource";
      g_02799018 = 0x78;
      param_1 = 0x49c5f0;
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
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      FUN_00e85ea0();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_60 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
    }
    else {
      plVar7 = (int64_t *)(**(code **)(*local_60 + 0x10))();
    }
    if ((g_0272a630 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02708978 = FUN_0049c750();
      g_02708960 = "MUAraAudioSource";
      g_02708968 = 0x138;
      param_1 = 0x49c720;
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
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0166dcf0(1,1,1);
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  uVar13 = (**(code **)(*(int64_t *)this_ptr[0x10] + 0x4a0))();
  plVar7 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (int64_t *)0x0) {
      return;
    }
    uVar13 = FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else if (local_60 == (int64_t *)0x0) {
    return;
  }
  local_58[0] = 0;
  local_60 = (int64_t *)0x0;
  local_50 = plVar7;
  local_40 = 0;
  local_48 = 0;
  if (0 < *(int *)((int64_t)plVar7 + 0xc)) {
    lVar11 = 0;
    do {
      local_60 = *(int64_t **)(plVar7[2] + lVar11 * 8);
      local_108 = *arg1;
      local_100 = '\0';
      local_f8 = *local_a8;
      local_f0 = '\0';
      uVar13 = FUN_00652840(uVar13,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      local_48 = CONCAT44(local_48._4_4_,(int)lVar11);
    } while ((int)lVar11 < *(int *)((int64_t)plVar7 + 0xc));
  }
  FUN_000ad7a0();
  FUN_00d50b20();
  return;
}



// ============================================================
// 016756d0
// ============================================================
// Function: FUN_016756d0
// Address: 016756d0
// Size: 2550 bytes
// Class: MUAraAudioSource
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


void FUN_016756d0(void)

{
  int64_t lVar1;
  void*puVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void*puVar9;
  void*puVar10;
  void*puVar11;
  int64_t *plVar12;
  uint uVar13;
  void* pVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t lVar17;
  int64_t *arg1;
  int64_t *plVar18;
  void*puVar19;
  int64_t *local_70;
  char local_68;
  int local_58;
  void*local_48;
  char local_40;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      plVar15 = (int64_t *)0x0;
      do {
        plVar16 = plVar15;
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_01676840();
        (**(code **)(*plVar5 + 0x18))();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar16 = plVar5;
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017105a0();
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_015127c0();
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_0170f680();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(void*)(plVar8 + 8) = uVar4;
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          plVar18 = (int64_t *)plVar5[9];
          plVar8 = plVar5;
        }
        else {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar18 = (int64_t *)plVar8[9];
          plVar16 = plVar5;
        }
        if (plVar18 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (int64_t *)0x0) {
              plVar12 = (int64_t *)0x0;
              goto LAB_016759db;
            }
            FUN_00d50b00();
            plVar16 = (int64_t *)plVar8[9];
            plVar8[9] = (int64_t)local_70;
            plVar18 = local_70;
          }
          else {
            local_68 = '\0';
            plVar12 = local_70;
LAB_016759db:
            plVar8[9] = (int64_t)plVar12;
            plVar16 = plVar18;
            plVar18 = plVar12;
          }
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar18 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          plVar18 = (int64_t *)plVar5[10];
          plVar8 = plVar5;
        }
        else {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar18 = (int64_t *)plVar8[10];
          plVar16 = plVar5;
        }
        if (plVar18 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (int64_t *)0x0) {
              plVar12 = (int64_t *)0x0;
              goto LAB_01675acb;
            }
            FUN_00d50b00();
            plVar16 = (int64_t *)plVar8[10];
            plVar8[10] = (int64_t)local_70;
            plVar18 = local_70;
          }
          else {
            local_68 = '\0';
            plVar12 = local_70;
LAB_01675acb:
            plVar8[10] = (int64_t)plVar12;
            plVar16 = plVar18;
            plVar18 = plVar12;
          }
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar18 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0170f810();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(void*)(plVar8 + 0xb) = uVar3;
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0170fee0();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(void*)((int64_t)plVar8 + 0x59) = uVar3;
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713cc0();
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01675c88;
          }
        }
        else if (local_70 != (int64_t *)0x0) {
LAB_01675c88:
          local_58 = -1;
LAB_01675cb3:
          while( true ) {
            lVar7 = (int64_t)local_58;
            local_58 = local_58 + 1;
            if (*(int *)((int64_t)local_70 + 0xc) <= local_58) break;
            lVar17 = local_70[2];
            plVar16 = *(int64_t **)(lVar17 + (lVar7 + 1) * 8);
            pvVar6 = _pthread_getspecific((void*)lVar17);
            pVar14 = (void*)lVar17;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar16 = (int64_t *)plVar16[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar16 + 0x368))();
            if (local_40 == '\0') goto LAB_01675d60;
            if (local_48 != (void*)0x0) goto LAB_01675d90;
          }
          FUN_01714b60();
          FUN_00d50b20();
        }
        local_68 = '\0';
        FUN_00d21140();
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = (int)plVar15 + 1;
        plVar15 = (int64_t *)(uint64_t)uVar13;
        local_70 = plVar5;
      } while ((int)uVar13 < *(int *)(lVar1 + 0xc));
    }
    FUN_0166fd40();
  }
  return;
LAB_01675d60:
  if (local_48 == (void*)0x0) goto LAB_01675cb3;
  FUN_00d50b00();
LAB_01675d90:
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025f82c0;
  *(void*)(puVar9 + 7) = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  FUN_00d500e0();
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012c8fb0();
  pvVar6 = _pthread_getspecific(pVar14);
  puVar10 = puVar9;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  *(void*)(puVar10 + 7) = uVar4;
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f50();
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (void*)puVar9[8];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (void*)puVar10[8];
  }
  if (puVar19 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (void*)0x0) {
        puVar11 = (void*)0x0;
        goto LAB_01675eda;
      }
      FUN_00d50b00();
      puVar2 = (void*)puVar10[8];
      puVar10[8] = local_48;
      puVar19 = local_48;
    }
    else {
      local_40 = '\0';
      puVar11 = local_48;
LAB_01675eda:
      puVar10[8] = puVar11;
      puVar2 = puVar19;
      puVar19 = puVar11;
    }
    pVar14 = (void*)puVar2;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
      puVar19 = local_48;
    }
  }
  if ((local_40 != '\0') && (puVar19 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8fc0();
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (void*)puVar9[9];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (void*)puVar10[9];
  }
  if (puVar19 == local_48) goto LAB_01675ffc;
  if (local_40 == '\0') {
    if (local_48 == (void*)0x0) {
      puVar11 = (void*)0x0;
      goto LAB_01675fba;
    }
    FUN_00d50b00();
    puVar2 = (void*)puVar10[9];
    puVar10[9] = local_48;
    puVar19 = local_48;
  }
  else {
    local_40 = '\0';
    puVar11 = local_48;
LAB_01675fba:
    puVar10[9] = puVar11;
    puVar2 = puVar19;
    puVar19 = puVar11;
  }
  pVar14 = (void*)puVar2;
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
    puVar19 = local_48;
  }
LAB_01675ffc:
  if ((local_40 != '\0') && (puVar19 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (void*)puVar9[10];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (void*)puVar10[10];
  }
  if (puVar19 != local_48) {
    FUN_00d50b00();
    puVar10[10] = local_48;
    if (puVar19 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = '\0';
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00d50b20();
  local_48 = puVar9;
  goto LAB_01675cb3;
}



// ============================================================
// 002312f0
// ============================================================
// Function: FUN_002312f0
// Address: 002312f0
// Size: 2638 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioPlaybackRegion"
//   "_startInModificationTime"
//   "_durationInModificationTime"
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


void FUN_002312f0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_00d216c0();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x980))();
  FUN_00d50b20();
  if (*arg1 != 0) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *arg1;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          iVar6 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
      lVar3 = (int64_t)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)(local_48 + 0xc) <= iVar6) break;
      local_58 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      FUN_00d50b00();
      lVar3 = g_026f6f58;
      if (g_026f6f58 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar3;
      local_188 = '\x01';
      local_178 = '\0';
      local_180 = lVar5;
      FUN_000823a0();
      uVar7 = FUN_00e86210();
      lVar3 = g_026f6f60;
      if (g_026f6f60 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_170 = lVar3;
      local_168 = '\x01';
      FUN_00c841b0(uVar7,&local_170);
      local_88 = local_f0;
      local_80 = 0;
      if (local_e8 == '\0') {
        if (local_f0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e8 = '\0';
      }
      local_80 = '\x01';
      local_160 = local_58;
      local_158 = '\0';
      FUN_000bfbc0(&local_180,&local_190,0xa0,&local_88);
      lVar3 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = lVar3;
      local_70 = '\0';
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = local_48;
    FUN_000be170();
    param_1 = (void*)lVar3;
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0x178) + 0xc) == 0) goto LAB_00231adb;
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_58 + 0x450))();
  if (cVar2 == '\0') {
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_70 = '\0';
      local_78 = 0;
LAB_00231721:
      cVar2 = '\0';
    }
    else {
      FUN_006f3f00();
      if (local_78 == 0) goto LAB_00231721;
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_60 = '\0';
        local_68 = 0;
      }
      else {
        FUN_006f3f00();
      }
      cVar2 = FUN_00751ba0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar2 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_00231adb;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) goto LAB_00231adb;
  uVar7 = FUN_00d50b00();
  local_150 = g_026f6f68;
  if (g_026f6f68 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_148 = '\x01';
  local_138 = '\0';
  local_140 = lVar3;
  if ((g_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_02, iVar6 != 0)) {
    g_026f99d8 = FUN_00274820();
    g_026f99c0 = "MUAraAudioPlaybackRegion";
    g_026f99c8 = 0xb0;
    g_026f99d0 = FUN_00275d40;
    g_026f99e0 = 0;
    ram_00000000026f99e8 = 0;
    g_026f99f0 = 0;
    g_026f9a68 = 0;
    ram_00000000026f9a70 = 0;
    g_026f9a78 = 0;
    g_026f9a7a = 1;
    g_026f99f8 = 0;
    ram_00000000026f9a00 = 0;
    g_026f9a08 = 0;
    ram_00000000026f9a10 = 0;
    g_026f9a18 = 0;
    ram_00000000026f9a20 = 0;
    g_026f9a28 = 0;
    ram_00000000026f9a30 = 0;
    g_026f9a38 = 0;
    ram_00000000026f9a40 = 0;
    g_026f9a48 = 0;
    ram_00000000026f9a50 = 0;
    g_026f9a58 = 0;
    ram_00000000026f9a60 = 0;
    g_026f9a83 = 0;
    g_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar3 == 0) || (lVar3 = *(int64_t *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_0023189d;
LAB_0023188c:
    local_a0 = 0;
    FUN_00d50b00();
  }
  else {
    lVar3 = *(int64_t *)(lVar3 + 0x30);
    if (lVar3 != 0) goto LAB_0023188c;
LAB_0023189d:
    lVar3 = 0;
  }
  local_a0 = '\x01';
  local_130 = 0;
  local_128 = '\0';
  local_a8 = lVar3;
  uVar7 = FUN_000bfbc0(&local_140,&local_150,0xa0,&local_a8);
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (this_ptr != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((g_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_03, iVar6 != 0)) {
    g_026f99d8 = FUN_00274820();
    g_026f99c0 = "MUAraAudioPlaybackRegion";
    g_026f99c8 = 0xb0;
    g_026f99d0 = FUN_00275d40;
    g_026f99e0 = 0;
    ram_00000000026f99e8 = 0;
    g_026f99f0 = 0;
    g_026f9a68 = 0;
    ram_00000000026f9a70 = 0;
    g_026f9a78 = 0;
    g_026f9a7a = 1;
    g_026f99f8 = 0;
    ram_00000000026f9a00 = 0;
    g_026f9a08 = 0;
    ram_00000000026f9a10 = 0;
    g_026f9a18 = 0;
    ram_00000000026f9a20 = 0;
    g_026f9a28 = 0;
    ram_00000000026f9a30 = 0;
    g_026f9a38 = 0;
    ram_00000000026f9a40 = 0;
    g_026f9a48 = 0;
    ram_00000000026f9a50 = 0;
    g_026f9a58 = 0;
    ram_00000000026f9a60 = 0;
    g_026f9a83 = 0;
    g_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    uVar7 = extraout_XMM0_Da_01;
    if ((lVar3 == 0) || (lVar3 = *(int64_t *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_00231a36;
LAB_00231a25:
    local_90 = 0;
    uVar7 = FUN_00d50b00();
  }
  else {
    lVar3 = *(int64_t *)(lVar3 + 0x30);
    uVar7 = extraout_XMM0_Da_00;
    if (lVar3 != 0) goto LAB_00231a25;
LAB_00231a36:
    lVar3 = 0;
  }
  local_90 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  local_98 = lVar3;
  FUN_000bfd00(uVar7,&local_120);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = plVar1;
  FUN_00d21140();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00231adb:
  FUN_00d403d0();
  local_110 = g_026e0f08;
  if (g_026e0f08 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_00d50b00();
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d40470(&local_100,&stack0xffffffffffffff48,1,1);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 016b6bb0
// ============================================================
// Function: FUN_016b6bb0
// Address: 016b6bb0
// Size: 2193 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "properties != NULL"
//   "properties->structSize >= ARA::kARAPlaybackRegionPropertiesMinSize"
//   "properties->durationInModificationTime >= 0.0"
//   "properties->durationInPlaybackTime >= 0.0"
//   "properties->durationInModificationTime == properties->durationInPlaybackTime"
//   "false && \"ARA 2 requires properties->regionSequenceRef\""
//   "musicalContext"
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


void FUN_016b6bb0(uint64_t param_1)

{
  double dVar1;
  double dVar2;
  uint64_t uVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  code *UNRECOVERED_JUMPTABLE;
  void* pVar7;
  char *pcVar8;
  int64_t lVar9;
  uint64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (arg1 == (uint64_t *)0x0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar8 = "properties != NULL";
  }
  else {
    if (0x33 < *arg1) {
      if ((*arg1 < 0x3d) || (*(int64_t *)((int64_t)arg1 + 0x3c) == 0)) {
        pvVar6 = _pthread_getspecific((void*)param_1);
        pVar7 = (void*)param_1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654a70();
      }
      else {
        pvVar6 = _pthread_getspecific((void*)param_1);
        pVar7 = (void*)param_1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d93290();
        local_78 = local_48;
        local_70 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_70 = '\x01';
        FUN_01654a70();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((*arg1 < 0x45) || (*(int64_t *)((int64_t)arg1 + 0x44) == 0)) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654d80();
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01cfbee0(**(void**)((int64_t)arg1 + 0x44),
                     (*(void**)((int64_t)arg1 + 0x44))[1]);
        local_68 = local_48;
        local_60 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_60 = '\x01';
        FUN_01654d80();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      dVar1 = *(double *)((int64_t)arg1 + 0x14);
      if (dVar1 < 0.0) {
        if (g_02802f60 == (int64_t *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *g_02802f60;
        if (UNRECOVERED_JUMPTABLE == 0x0) {
          return;
        }
        pcVar8 = "properties->durationInModificationTime >= 0.0";
      }
      else {
        dVar2 = *(double *)((int64_t)arg1 + 0x24);
        if (0.0 <= dVar2) {
          if ((arg1[1] & 1) == 0) {
            if ((((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) &&
                (g_02802f60 != (int64_t *)0x0)) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)
                        (dVar1,
                         "properties->durationInModificationTime == properties->durationInPlaybackTime"
                        );
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655050(*(void*)((int64_t)arg1 + 0xc));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655110(*(void*)((int64_t)arg1 + 0x14));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016551d0(*(void*)((int64_t)arg1 + 0x1c));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655290(*(void*)((int64_t)arg1 + 0x24));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655370();
          iVar4 = g_027cb0f0;
          pvVar6 = _pthread_getspecific(pVar7);
          if (iVar4 < 3) {
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016572d0();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01657330();
            uVar3 = *arg1;
          }
          else {
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016572d0();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01657330();
            uVar3 = *arg1;
          }
          if (uVar3 < 0x35) {
            local_38[0] = '\0';
            if (2 < g_027cb0f0) {
              if (g_02802f60 == (int64_t *)0x0) {
                return;
              }
              if (*g_02802f60 != 0x0) {
                (**g_02802f60)
                          (uVar10,"false && \"ARA 2 requires properties->regionSequenceRef\"");
                return;
              }
              return;
            }
            lVar9 = *(int64_t *)((int64_t)arg1 + 0x2c);
            if (lVar9 == 0) {
              if (g_02802f60 == (int64_t *)0x0) {
                return;
              }
              if (*g_02802f60 != 0x0) {
                (**g_02802f60)(uVar10,"musicalContext");
                return;
              }
              return;
            }
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01658380();
            local_58 = local_88;
            local_50 = 0;
            if (local_80 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_50 = '\x01';
            local_b0 = '\0';
            local_b8 = lVar9;
            uVar10 = FUN_0168a170(&local_b8,&local_58);
            if (local_48 == 0) {
              lVar9 = 0;
            }
            else {
              if (local_40[0] == '\0') {
                pcVar8 = local_38;
              }
              else {
                pcVar8 = local_40;
                local_38[0] = '\x01';
              }
              *pcVar8 = '\0';
              lVar9 = local_48;
              if (local_40[0] != '\0') {
                uVar10 = FUN_00d50b20();
              }
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            if ((*(int64_t *)((int64_t)arg1 + 0x34) == 0) ||
               (cVar5 = FUN_012c91b0(), uVar10 = extraout_XMM0_Qa, cVar5 == '\0')) {
              if (g_02802f60 == (int64_t *)0x0) {
                return;
              }
              if (*g_02802f60 != 0x0) {
                (**g_02802f60)(uVar10,"provided object ref is invalid");
                return;
              }
              return;
            }
            lVar9 = *(int64_t *)((int64_t)arg1 + 0x34);
          }
          local_a0 = '\0';
          local_98 = *this_ptr;
          local_90 = '\0';
          local_a8 = lVar9;
          FUN_0168a900(uVar10,&local_98);
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            if (lVar9 != 0) {
              FUN_00d50b20();
              return;
            }
            return;
          }
          return;
        }
        if (g_02802f60 == (int64_t *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *g_02802f60;
        if (UNRECOVERED_JUMPTABLE == 0x0) {
          return;
        }
        pcVar8 = "properties->durationInPlaybackTime >= 0.0";
      }
      (*UNRECOVERED_JUMPTABLE)(dVar1,pcVar8);
      return;
    }
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar8 = "properties->structSize >= ARA::kARAPlaybackRegionPropertiesMinSize";
  }
                                          (*UNRECOVERED_JUMPTABLE)(param_1,pcVar8);
  return;
}



// ============================================================
// 0078a130
// ============================================================
// Function: FUN_0078a130
// Address: 0078a130
// Size: 2429 bytes
// Class: MUAraAudioSource
// String references:
//   "%@.%I"
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


void* FUN_0078a130(void* param_1,int64_t *param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  undefined7 uVar7;
  undefined7 extraout_var;
  void* pVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*this_ptr;
  void*puVar10;
  char cVar11;
  void*puVar12;
  void*puVar13;
  uint7 uVar15;
  uint64_t uVar14;
  bool bVar16;
  int64_t local_150;
  char local_148;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int local_8c;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  uint local_60;
  void*local_58;
  char local_50;
  int local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  if (*param_2 == 0) {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    puVar10 = local_68;
    if (local_68 == (void*)0x0) {
      puVar10 = (void*)0x0;
      cVar11 = '\0';
    }
    else if ((char)local_60 == '\0') {
      FUN_00d50b00();
      cVar11 = '\x01';
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      cVar11 = '\x01';
    }
    if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6f70;
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02729650;
    local_110 = lVar2;
    local_108 = '\x01';
    if (g_02729650 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar3;
    local_f8 = '\x01';
    local_f0 = 0;
    local_e8 = '\0';
    plVar9 = &local_f0;
    uVar6 = FUN_00d31230(plVar9,&local_100);
    puVar13 = local_68;
    pVar8 = (void*)plVar9;
    if (local_68 == (void*)0x0) {
      puVar13 = (void*)0x0;
      local_40 = 0;
    }
    else if ((char)local_60 == '\0') {
      uVar6 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_8c = *(int *)((int64_t)local_68 + 0xc);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    goto LAB_0078a854;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012e6a50();
  puVar10 = local_68;
  if (local_68 == (void*)0x0) {
    puVar10 = (void*)0x0;
    local_38 = 0;
  }
  else {
    local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_68 = (void*)*param_2;
  local_60 = local_60 & 0xffffff00;
  iVar4 = FUN_00d237a0();
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  puVar13 = local_68;
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  local_8c = iVar4 + 1;
  if (puVar13 == (void*)0x0) {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02729650;
    cVar11 = (char)local_38;
    if (g_02729650 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar3;
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    uVar6 = FUN_00d31230(&local_120,&local_130);
    puVar13 = local_68;
    if (local_68 == (void*)0x0) {
      puVar13 = (void*)0x0;
      local_40 = 0;
    }
    else if ((char)local_60 == '\0') {
      uVar6 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0078a854;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012e6000();
  puVar12 = local_68;
  if (local_68 == (void*)0x0) {
    bVar1 = 1;
    puVar12 = (void*)0x0;
    local_40 = 0;
  }
  else if ((char)local_60 == '\0') {
    uVar6 = FUN_00d50b00();
    bVar1 = 0;
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      uVar6 = FUN_00d50b20();
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      bVar1 = 0;
    }
  }
  else {
    bVar1 = 0;
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
  }
  local_60 = 2;
  local_68 = &g_024c5048;
  local_50 = 0;
  if (puVar12 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_68 = (void*)&g_025df2a0;
  local_58 = puVar12;
  local_48 = iVar4 + 2;
  uVar6 = FUN_00d8cb40();
  puVar13 = local_78;
  uVar15 = (uint7)(uint3)((uint)(iVar4 + 2) >> 8);
  uVar7 = (undefined7)((uint64_t)uVar6 >> 8);
  cVar11 = (char)local_38;
  if (local_78 == puVar12) {
    puVar13 = puVar12;
    if ((bool)(bVar1 & local_78 != (void*)0x0)) {
      if (local_70 != '\0') goto LAB_0078a585;
      uVar14 = CONCAT71(uVar15,1);
      FUN_00d50b00();
    }
    else {
      uVar14 = local_40 & 0xffffffff;
    }
LAB_0078a812:
    if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (void*)0x0) {
        FUN_00d50b00();
      }
      uVar14 = CONCAT71(uVar15,1);
      if (((byte)local_40 & puVar12 != (void*)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_0078a812;
    }
    bVar16 = puVar12 != (void*)0x0;
    puVar12 = puVar13;
    if (((byte)local_40 & bVar16) == 1) {
      FUN_00d50b20();
      uVar7 = extraout_var;
    }
LAB_0078a585:
    local_70 = '\0';
    puVar13 = puVar12;
    uVar14 = CONCAT71(uVar7,1);
  }
  local_40 = uVar14;
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_68 = &g_024c5048, local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_0078a854:
  local_d8 = '\0';
  local_c8 = '\0';
  pVar8 = 0;
  local_e0 = puVar13;
  local_d0 = puVar10;
  FUN_004f83c0(0,&local_d0);
  puVar12 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x628))();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = puVar12;
  local_b8 = '\0';
  local_b0 = puVar12;
  local_a8 = '\0';
  FUN_004a11d0();
  local_88 = local_78;
  local_80 = 0;
  if (local_70 == '\0') {
    if (local_78 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_80 = '\x01';
  local_98 = '\0';
  local_a0 = puVar10;
  FUN_004a17d0(local_8c,&local_a0);
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar12;
  *(void*)(this_ptr + 1) = 1;
  if (((char)local_40 != '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (puVar10 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01670220
// ============================================================
// Function: FUN_01670220
// Address: 01670220
// Size: 1484 bytes
// Class: MUAraAudioSource
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


uint64_t FUN_01670220(void* param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  uint uVar9;
  char *pcVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  bool bVar14;
  bool bVar15;
  int64_t *local_a8;
  char local_a0;
  int64_t *in_stack_ffffffffffffff68;
  uint64_t uVar16;
  char local_90 [8];
  int64_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint local_6c;
  int local_68;
  int local_64;
  int64_t *local_60;
  int64_t *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  byte local_42;
  byte local_41;
  char local_40 [8];
  char local_38 [8];
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar8 = 0;
  FUN_01510360(0,0,0);
  local_40[0] = local_90[0];
  pcVar5 = local_40;
  if (local_90[0] != '\0') {
    pcVar5 = local_90;
  }
  *pcVar5 = '\0';
  plVar12 = in_stack_ffffffffffffff68;
  if ((local_90[0] != '\0') && (in_stack_ffffffffffffff68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = in_stack_ffffffffffffff68;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510360(0,0,0);
  pcVar5 = local_38;
  pcVar10 = local_90;
  if (local_90[0] == '\0') {
    pcVar10 = pcVar5;
  }
  local_38[0] = local_90[0];
  *pcVar10 = '\0';
  if ((local_90[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar8 = (void*)pcVar5;
  if (in_stack_ffffffffffffff68 == (int64_t *)0x0) {
    uVar13 = 0xffffffff;
    if (plVar12 == (int64_t *)0x0) goto LAB_01670357;
  }
  else {
    if (plVar12 == (int64_t *)0x0) {
      uVar13 = 1;
      goto LAB_016707e3;
    }
LAB_01670357:
    local_58 = plVar12;
    pvVar4 = _pthread_getspecific(pVar8);
    plVar11 = in_stack_ffffffffffffff68;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)in_stack_ffffffffffffff68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4]
      ;
    }
    iVar2 = (**(code **)(*plVar11 + 0x3f0))();
    pvVar4 = _pthread_getspecific(pVar8);
    plVar11 = plVar12;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar3 = (**(code **)(*plVar11 + 0x3f0))();
    uVar13 = 0xffffffff;
    if (iVar3 <= iVar2) {
      pvVar4 = _pthread_getspecific(pVar8);
      plVar11 = in_stack_ffffffffffffff68;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar11 = (int64_t *)
                  in_stack_ffffffffffffff68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar2 = (**(code **)(*plVar11 + 0x3f0))();
      pvVar4 = _pthread_getspecific(pVar8);
      plVar11 = plVar12;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar11 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar3 = (**(code **)(*plVar11 + 0x3f0))();
      uVar13 = 1;
      if (iVar2 <= iVar3) {
        if (param_2 == 0) {
          uVar13 = 0;
        }
        else {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = in_stack_ffffffffffffff68;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (int64_t *)
                      in_stack_ffffffffffffff68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_68 = (**(code **)(*plVar11 + 0x408))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = plVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_64 = (**(code **)(*plVar11 + 0x408))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = in_stack_ffffffffffffff68;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (int64_t *)
                      in_stack_ffffffffffffff68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_42 = (**(code **)(*plVar11 + 0x400))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = plVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_41 = (**(code **)(*plVar11 + 0x400))();
          local_90[0] = '\0';
          local_78 = 0;
          local_80 = 0;
          local_88 = param_2;
          if (*(int *)(param_2 + 0xc) < 1) {
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            uVar9 = 0;
          }
          else {
            lVar6 = 0;
            uVar9 = 0;
            local_48 = 0;
            local_4c = 0;
            local_50 = 0;
            do {
              uVar16 = *(void*)(*(int64_t *)(param_2 + 0x10) + lVar6 * 8);
              local_6c = uVar9;
              pvVar4 = _pthread_getspecific((void*)lVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar8 = 0;
              FUN_01510360(0,0,0,param_4,uVar16);
              if ((local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar8);
              plVar12 = local_a8;
              if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar12 = (int64_t *)local_a8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              iVar2 = (**(code **)(*plVar12 + 0x408))();
              pvVar4 = _pthread_getspecific(pVar8);
              plVar12 = local_a8;
              if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar12 = (int64_t *)local_a8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              bVar1 = (**(code **)(*plVar12 + 0x400))();
              bVar14 = iVar2 == local_68;
              bVar15 = iVar2 == local_64;
              if (local_a8 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              local_50 = local_50 + bVar14;
              local_4c = local_4c + bVar15;
              local_48 = local_48 + (byte)(local_42 ^ bVar1 ^ 1);
              uVar9 = local_6c + (byte)(bVar1 ^ local_41 ^ 1);
              lVar6 = lVar6 + 1;
              local_80 = CONCAT44(local_80._4_4_,(int)lVar6);
              plVar12 = local_58;
              in_stack_ffffffffffffff68 = local_60;
            } while ((int)lVar6 < *(int *)(param_2 + 0xc));
          }
          FUN_0131c770();
          uVar13 = 0xffffffff;
          if ((local_4c <= local_50) && (uVar13 = 1, local_50 == local_4c)) {
            uVar13 = 0xffffffff;
            if (uVar9 <= local_48) {
              uVar13 = (uint64_t)(local_48 != uVar9);
            }
          }
          FUN_00d50b20();
        }
      }
    }
  }
  if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_016707e3:
  if ((local_40[0] != '\0') && (in_stack_ffffffffffffff68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar13;
}



// ============================================================
// 016b76f0
// ============================================================
// Function: FUN_016b76f0
// Address: 016b76f0
// Size: 1241 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioPlaybackRegion"
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"
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


int64_t * FUN_016b76f0(uint64_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  char *pcVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar9 = FUN_00da7190();
  if ((this_ptr == (int64_t *)0x0) ||
     (cVar1 = FUN_0168a120(), uVar9 = extraout_XMM0_Da, cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar9,"provided object ref is invalid");
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        local_50 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)(extraout_XMM0_Da_00,"call required from document main thread");
        }
        goto LAB_016b7873;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if (g_02802f60 != (void*)0x0) {
          local_50 = (int64_t *)0x0;
          if (*g_02802f60 != 0x0) {
            (**g_02802f60)
                      (extraout_XMM0_Da_01,"documentController->isHostEditingDocument()");
            local_50 = (int64_t *)0x0;
          }
          goto LAB_016b7873;
        }
      }
      else {
        FUN_01689520();
        pVar6 = (void*)param_1;
        if (*(int *)(local_88 + 0xc) != 0) {
          FUN_01689520();
          uVar9 = FUN_00d23310();
          pVar6 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_48[0]);
          pcVar7 = local_38;
          if (local_48[0] != '\0') {
            pcVar7 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar7 = '\0';
          if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)
                      (uVar9,"documentController->getContentReaders()->getCount() == 0");
          }
          if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_0164e2c0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (local_50 == this_ptr) {
          if ((g_028ad860 == 0) || (g_028ad869 == '\0')) {
            FUN_00e8cb50();
            if (g_028ad860 == 0) {
              if ((g_026f9a88 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
                g_026f99d8 = FUN_00274820();
                g_026f99c0 = "MUAraAudioPlaybackRegion";
                g_026f99c8 = 0xb0;
                pVar6 = 0x275d40;
                g_026f99d0 = FUN_00275d40;
                g_026f99e0 = 0;
                ram_00000000026f99e8 = 0;
                g_026f99f0 = 0;
                g_026f9a68 = 0;
                ram_00000000026f9a70 = 0;
                g_026f9a78 = 0;
                g_026f9a7a = 1;
                g_026f99f8 = 0;
                ram_00000000026f9a00 = 0;
                g_026f9a08 = 0;
                ram_00000000026f9a10 = 0;
                g_026f9a18 = 0;
                ram_00000000026f9a20 = 0;
                g_026f9a28 = 0;
                ram_00000000026f9a30 = 0;
                g_026f9a38 = 0;
                ram_00000000026f9a40 = 0;
                g_026f9a48 = 0;
                ram_00000000026f9a50 = 0;
                g_026f9a58 = 0;
                ram_00000000026f9a60 = 0;
                g_026f9a83 = 0;
                g_026f9a7b = 0;
                ___cxa_guard_release();
              }
              lVar4 = FUN_00e86210();
              lVar5 = g_028ad860;
              if (g_028ad860 != lVar4) {
                if (lVar4 != 0) {
                  FUN_00d50b00();
                }
                g_028ad860 = lVar4;
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
              }
              if ((lVar4 != 0) && (g_028ad868 == '\0')) {
                g_028ad868 = '\x01';
                FUN_00e8cb90();
              }
              g_028ad869 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ad869 = '\x01';
              FUN_00e8cb70();
            }
          }
          FUN_00c811e0();
          if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(pVar6);
          plVar8 = local_50;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x18))();
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_01653e10();
          FUN_016b6bb0(uVar9,&stack0xffffffffffffff68);
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_016b7873;
        }
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
                    (uVar9,"audioModification->getDocumentController() == documentController");
        }
      }
    }
  }
  local_50 = (int64_t *)0x0;
LAB_016b7873:
  FUN_00da71b0();
  return local_50;
}



// ============================================================
// 01661d30
// ============================================================
// Function: FUN_01661d30
// Address: 01661d30
// Size: 1146 bytes
// Class: MUAraAudioSource
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


uint64_t FUN_01661d30(int64_t param_1,uint32_t param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  bool bVar10;
  int64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint32_t local_3c;
  int64_t local_38;
  
  local_3c = param_2;
  cVar2 = FUN_01733c10();
  if (cVar2 == '\0') {
    bVar10 = *(int64_t *)(this_ptr + 0xf0) != 0;
  }
  else {
    bVar10 = false;
  }
  *(bool *)(this_ptr + 0xe9) = bVar10;
  FUN_0184a0c0();
  lVar8 = *arg1;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar8 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(int64_t *)(lVar8 + 0xf0);
  if (lVar8 != 0) {
    FUN_00d50b00();
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 200) = *(void*)(lVar4 + 200);
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 0xd8) = *(void*)(lVar4 + 0xd8);
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar1 = *(int *)(lVar4 + 0xe4);
    *(int *)(this_ptr + 0xe4) = iVar1;
    if (((*(double *)(this_ptr + 0xc0) != *(double *)(this_ptr + 200)) ||
        (NAN(*(double *)(this_ptr + 0xc0)) || NAN(*(double *)(this_ptr + 200)))) ||
       (param_1 = *(int64_t *)(this_ptr + 0xd0), param_1 != *(int64_t *)(this_ptr + 0xd8))) {
      *(void*)(this_ptr + 0xe8) = 1;
    }
    else {
      bVar10 = *(int *)(this_ptr + 0xe0) != iVar1;
      *(bool *)(this_ptr + 0xe8) = bVar10;
      if (!bVar10) {
        local_58 = '\0';
        local_60 = lVar8;
        cVar2 = FUN_01316d80();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (void*)param_1;
        if (cVar2 != '\0') {
          lVar4 = *arg1;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          if (*(int64_t *)(lVar4 + 0xf0) != 0) {
            *(void*)(lVar4 + 0xf0) = 0;
            FUN_00d50b20();
          }
          FUN_01660e50();
          lVar4 = *arg1;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          *(void*)(this_ptr + 0x106) = *(void*)(lVar4 + 0x106);
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar4 = *arg1;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(int64_t *)(lVar4 + 0x120);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          lVar5 = *arg1;
          local_50 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *arg1;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(int64_t *)(lVar5 + 0x108);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_78 = 1;
          lVar5 = *arg1;
          local_80 = lVar4;
          local_38 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *arg1;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(int64_t *)(lVar5 + 0x110);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_68 = 1;
          plVar7 = &local_80;
          local_70 = lVar4;
          FUN_01662280(plVar7,&local_50,&local_70);
          lVar5 = local_38;
          pVar6 = (void*)plVar7;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          uVar9 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0166213b;
        }
      }
    }
  }
  pVar6 = (void*)param_1;
  uVar9 = 0;
LAB_0166213b:
  if ((char)local_3c != '\0') {
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 0x104) = *(void*)(lVar4 + 0x104);
  }
  FUN_01733c40();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return uVar9 & 0xffffffff;
}



// ============================================================
// 0078bc40
// ============================================================
// Function: FUN_0078bc40
// Address: 0078bc40
// Size: 1572 bytes
// Class: MUAraAudioSource
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


int64_t * FUN_0078bc40(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  void *pvVar7;
  int64_t lVar8;
  char *pcVar9;
  void* pVar10;
  char *pcVar11;
  int iVar12;
  int64_t *this_ptr;
  int iVar13;
  int iVar14;
  int64_t *local_d8;
  char local_d0;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  char local_41;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  local_41 = (**(code **)(*local_d8 + 0x450))();
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_003b7950();
  if ((local_d0 == '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_0078b9c0();
  if (local_d0 == '\0') {
    if (local_d8 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0078bd37;
    }
  }
  else if (local_d8 != (int64_t *)0x0) {
LAB_0078bd37:
    iVar13 = -1;
    do {
      iVar13 = iVar13 + 1;
      iVar1 = *(int *)((int64_t)local_d8 + 0xc);
      if (iVar1 <= iVar13) {
        FUN_000be170();
        goto LAB_0078c259;
      }
      lVar8 = *(int64_t *)(local_d8[2] + (int64_t)iVar13 * 8);
      FUN_004f9670();
      lVar4 = local_70;
      local_40[0] = local_68[0];
      pcVar11 = local_40;
      pcVar9 = local_68;
      if (local_68[0] == '\0') {
        pcVar9 = pcVar11;
      }
      *pcVar9 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pVar10 = (void*)pcVar11;
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fae50();
      lVar5 = local_70;
      if (local_68[0] == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      cVar6 = (**(code **)(*local_d8 + 0x50))();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        if (local_41 != '\0') {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          lVar8 = local_70;
          if (local_68[0] == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              if ((local_68[0] != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0078bf9e;
            }
          }
          else if (local_70 != 0) {
LAB_0078bf9e:
            local_68[0] = '\0';
            local_70 = 0;
            local_60 = lVar8;
            local_58 = 0xffffffff;
            local_50 = 0;
            local_58._4_4_ = 0;
            while( true ) {
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar12 = -local_58._4_4_;
                }
                else {
                  iVar12 = (int)local_58 - local_58._4_4_;
                  local_58 = CONCAT44(local_58._4_4_,iVar12);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar12 = 0;
                }
                local_58 = CONCAT44(iVar12,(int)local_58);
              }
              lVar8 = (int64_t)(int)local_58;
              iVar14 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar14);
              iVar12 = *(int *)(local_60 + 0xc);
              if (iVar12 <= iVar14) goto LAB_0078c1e3;
              local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar8 * 8);
              FUN_004f9670();
              local_38[0] = local_78[0];
              pcVar11 = local_38;
              pcVar9 = local_78;
              if (local_78[0] == '\0') {
                pcVar9 = pcVar11;
              }
              *pcVar9 = '\0';
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((void*)pcVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004fae50();
              if (local_78[0] == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78[0] = '\0';
              }
              cVar6 = (**(code **)(*local_d8 + 0x50))();
              if (local_80 != 0) {
                FUN_00d50b20();
              }
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              lVar8 = local_70;
              if (cVar6 != '\0') break;
              if ((local_38[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
            }
            *(void*)(this_ptr + 1) = 0;
            if (local_68[0] == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
              *this_ptr = lVar8;
              *(void*)(this_ptr + 1) = 1;
            }
            else {
              *this_ptr = local_70;
              *(void*)(this_ptr + 1) = 1;
              local_68[0] = '\0';
            }
            if ((local_38[0] != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
LAB_0078c1e3:
            FUN_000be170();
            FUN_00d50b20();
            if (iVar14 < iVar12) goto LAB_0078bf03;
          }
        }
        bVar3 = true;
        bVar2 = true;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar8;
        *(void*)(this_ptr + 1) = 1;
LAB_0078bf03:
        bVar3 = false;
        bVar2 = false;
      }
      if ((local_40[0] != '\0') && (bVar2 = bVar3, lVar4 != 0)) {
        FUN_00d50b20();
      }
    } while (bVar2);
    FUN_000be170();
LAB_0078c259:
    FUN_00d50b20();
    if (iVar13 < iVar1) goto LAB_0078c27d;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0078c27d:
  if (local_d8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01671370
// ============================================================
// Function: FUN_01671370
// Address: 01671370
// Size: 1437 bytes
// Class: MUAraAudioSource
// String references:
//   "GNList"
//   "MUAraAudioSource"
//   "_musicalContextData"
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


void FUN_01671370(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d61ea0();
  uVar8 = FUN_016be450();
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x590))();
  if (cVar4 != '\0') {
    local_b0 = plVar3;
    local_a8 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_b0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_a0 = plVar3;
    local_98 = '\0';
    (**(code **)(*this_ptr + 0x1f0))(0,&local_a0,0);
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = g_027c8380;
  plVar1 = (int64_t *)*arg1;
  if (g_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar6;
  local_88 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = g_026fce90;
  if (iVar5 < 3) {
    plVar1 = (int64_t *)*arg1;
    if (g_026fce90 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar6;
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    uVar8 = extraout_XMM0_Da_01;
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar6 = g_026fce90;
    if (cVar4 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_026fce90 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar6;
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x578))(uVar8,&local_70);
      plVar1 = local_40;
      if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        g_026cd470 = FUN_00018210;
        g_026cd480 = 0;
        ram_00000000026cd488 = 0;
        g_026cd490 = 0;
        g_026cd508 = 0;
        ram_00000000026cd510 = 0;
        g_026cd518 = 0;
        g_026cd51a = 6;
        g_026cd498 = 0;
        ram_00000000026cd4a0 = 0;
        g_026cd4a8 = 0;
        ram_00000000026cd4b0 = 0;
        g_026cd4b8 = 0;
        ram_00000000026cd4c0 = 0;
        g_026cd4c8 = 0;
        ram_00000000026cd4d0 = 0;
        g_026cd4d8 = 0;
        ram_00000000026cd4e0 = 0;
        g_026cd4e8 = 0;
        ram_00000000026cd4f0 = 0;
        g_026cd4f8 = 0;
        ram_00000000026cd500 = 0;
        g_026cd523 = 0;
        g_026cd51b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 != '\0') {
          if ((g_0272a630 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            g_02708978 = FUN_0049c750();
            g_02708960 = "MUAraAudioSource";
            g_02708968 = 0x138;
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
          cVar4 = FUN_00e8da30();
          pplVar7 = &local_40;
          if (cVar4 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar2 = (int64_t *)this_ptr[9];
      plVar1 = *pplVar7;
      if (plVar2 != plVar1) {
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar1 == (int64_t *)0x0) {
            this_ptr[9] = 0;
          }
          else {
            FUN_00d50b00();
            plVar2 = (int64_t *)this_ptr[9];
            this_ptr[9] = (int64_t)*pplVar7;
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
          this_ptr[9] = (int64_t)plVar1;
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = g_027c8380;
  plVar1 = (int64_t *)*arg1;
  if (g_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar6;
  local_58 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 < 2) {
    *(void*)((int64_t)this_ptr + 0x51) = 1;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00787770
// ============================================================
// Function: FUN_00787770
// Address: 00787770
// Size: 1965 bytes
// Class: MUAraAudioSource
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


uint64_t FUN_00787770(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *pvVar6;
  uint64_t uVar7;
  void* pVar8;
  char *pcVar9;
  int64_t *this_ptr;
  uint64_t uVar10;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint32_t local_44;
  int64_t local_40;
  char local_38 [8];
  
  FUN_00757c60();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar4 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    uVar10 = 0;
    goto LAB_00787f08;
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_40 + 0xc);
  uVar10 = CONCAT71(0x28025,iVar1 == 1);
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if ((iVar1 == 1) && (param_2 != '\0')) {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    lVar4 = local_40;
    pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
    pcVar9 = &local_98;
    if (local_38[0] != '\0') {
      pcVar9 = local_38;
    }
    local_98 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 == '\0') && (lVar4 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6050();
    pvVar6 = _pthread_getspecific(pVar8);
    lVar2 = g_02729620;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar2 = g_02729620;
    }
    g_02729620 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012e60e0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_012e5ae0();
    lVar2 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00787a7c;
      }
LAB_00787a90:
      local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
LAB_00787a95:
      pvVar6 = _pthread_getspecific(pVar8);
      lVar3 = g_02729628;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
        lVar3 = g_02729628;
      }
      g_02729628 = lVar3;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_012e5f80();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == 0) goto LAB_00787a90;
LAB_00787a7c:
      local_44 = 0;
      if (*(int *)(lVar2 + 0xc) == 0) goto LAB_00787a95;
    }
    lVar3 = g_02729630;
    if (g_02729630 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_88 = local_58;
    local_80 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_80 = '\x01';
    pVar8 = 0;
    FUN_004f83c0(0,&local_88);
    lVar5 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11d0();
    local_78 = local_58;
    local_70 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_70 = '\x01';
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_60 = 0;
    local_68 = CONCAT71(uStack_97,local_98);
    if (local_90 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_60 = '\x01';
    pVar8 = 0xffffffff;
    FUN_004a17d0(0xffffffff,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6050();
    pvVar6 = _pthread_getspecific(pVar8);
    lVar3 = g_02729638;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar3 = g_02729638;
    }
    g_02729638 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_012e60e0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
    uVar10 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00787f08:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 01672e10
// ============================================================
// Function: FUN_01672e10
// Address: 01672e10
// Size: 909 bytes
// Class: MUAraAudioSource
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


uint FUN_01672e10(void* param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int64_t *plVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  uint uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  
  lVar12 = *this_ptr;
  lVar11 = *arg1;
  pvVar6 = _pthread_getspecific(param_1);
  lVar8 = lVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  iVar2 = *(int *)(lVar8 + 0x38);
  pvVar6 = _pthread_getspecific((void*)lVar8);
  pVar9 = (void*)lVar8;
  if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    iVar1 = *(int *)(lVar11 + 0x38);
  }
  else {
    iVar1 = *(int *)(*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                    0x38);
  }
  uVar5 = 0xffffffff;
  if (iVar1 <= iVar2) {
    pvVar6 = _pthread_getspecific(pVar9);
    lVar8 = lVar12;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x38);
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      iVar1 = *(int *)(lVar11 + 0x38);
    }
    else {
      iVar1 = *(int *)(*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                      + 0x38);
    }
    uVar5 = 1;
    if (iVar2 <= iVar1) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(int64_t *)(lVar12 + 0x40);
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x40);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(int64_t *)(lVar11 + 0x40);
        }
        else {
          lVar8 = *(int64_t *)
                   (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          lVar8 = lVar12;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          plVar4 = *(int64_t **)(lVar8 + 0x40);
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar8 = *(int64_t *)(lVar11 + 0x40);
          }
          else {
            lVar8 = *(int64_t *)
                     (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                     0x40);
          }
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          uVar5 = (**(code **)(*plVar4 + 0x58))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (uVar5 != 0) {
            return uVar5;
          }
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(int64_t *)(lVar12 + 0x48);
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x48);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(int64_t *)(lVar11 + 0x48);
        }
        else {
          lVar8 = *(int64_t *)
                   (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x48);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar12 = *(int64_t *)(lVar12 + 0x48);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar11 = *(int64_t *)(lVar11 + 0x48);
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          uVar3 = *(uint *)(lVar12 + 0xc);
          uVar5 = *(uint *)(lVar11 + 0xc);
          uVar10 = 0xffffffff;
          if (uVar5 <= uVar3) {
            uVar10 = (uint)(uVar5 < uVar3);
          }
          FUN_00d50b20();
          FUN_00d50b20();
          if (uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



// ============================================================
// 016723c0
// ============================================================
// Function: FUN_016723c0
// Address: 016723c0
// Size: 909 bytes
// Class: MUAraAudioSource
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


uint FUN_016723c0(void* param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int64_t *plVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  uint uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  
  lVar12 = *this_ptr;
  lVar11 = *arg1;
  pvVar6 = _pthread_getspecific(param_1);
  lVar8 = lVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  iVar2 = *(int *)(lVar8 + 0x40);
  pvVar6 = _pthread_getspecific((void*)lVar8);
  pVar9 = (void*)lVar8;
  if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    iVar1 = *(int *)(lVar11 + 0x40);
  }
  else {
    iVar1 = *(int *)(*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                    0x40);
  }
  uVar5 = 0xffffffff;
  if (iVar1 <= iVar2) {
    pvVar6 = _pthread_getspecific(pVar9);
    lVar8 = lVar12;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x40);
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      iVar1 = *(int *)(lVar11 + 0x40);
    }
    else {
      iVar1 = *(int *)(*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                      + 0x40);
    }
    uVar5 = 1;
    if (iVar2 <= iVar1) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(int64_t *)(lVar12 + 0x48);
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x48);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(int64_t *)(lVar11 + 0x48);
        }
        else {
          lVar8 = *(int64_t *)
                   (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x48);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          lVar8 = lVar12;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          plVar4 = *(int64_t **)(lVar8 + 0x48);
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar8 = *(int64_t *)(lVar11 + 0x48);
          }
          else {
            lVar8 = *(int64_t *)
                     (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                     0x48);
          }
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          uVar5 = (**(code **)(*plVar4 + 0x58))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (uVar5 != 0) {
            return uVar5;
          }
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(int64_t *)(lVar12 + 0x50);
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x50);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(int64_t *)(lVar11 + 0x50);
        }
        else {
          lVar8 = *(int64_t *)
                   (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x50);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar12 = *(int64_t *)(lVar12 + 0x50);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar11 = *(int64_t *)(lVar11 + 0x50);
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          uVar3 = *(uint *)(lVar12 + 0xc);
          uVar5 = *(uint *)(lVar11 + 0xc);
          uVar10 = 0xffffffff;
          if (uVar5 <= uVar3) {
            uVar10 = (uint)(uVar5 < uVar3);
          }
          FUN_00d50b20();
          FUN_00d50b20();
          if (uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



// ============================================================
// 01661390
// ============================================================
// Function: FUN_01661390
// Address: 01661390
// Size: 1102 bytes
// Class: MUAraAudioSource
// String references:
//   "GNList"
//   "MUAraAudioSource"
//   "_audioModifications"
//   "MUAraAudioModification"
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


void FUN_01661390(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = FUN_00d61ea0();
  if ((g_0272a630 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar5 != 0)) {
    g_02708978 = FUN_0049c750();
    g_02708960 = "MUAraAudioSource";
    g_02708968 = 0x138;
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
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x590))();
  if (cVar4 != '\0') {
    local_50 = plVar3;
    local_48 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_50);
    plVar2 = local_40;
    if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026cd478 = FUN_00d4fe50();
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      g_026cd470 = FUN_00018210;
      g_026cd480 = 0;
      ram_00000000026cd488 = 0;
      g_026cd490 = 0;
      g_026cd508 = 0;
      ram_00000000026cd510 = 0;
      g_026cd518 = 0;
      g_026cd51a = 6;
      g_026cd498 = 0;
      ram_00000000026cd4a0 = 0;
      g_026cd4a8 = 0;
      ram_00000000026cd4b0 = 0;
      g_026cd4b8 = 0;
      ram_00000000026cd4c0 = 0;
      g_026cd4c8 = 0;
      ram_00000000026cd4d0 = 0;
      g_026cd4d8 = 0;
      ram_00000000026cd4e0 = 0;
      g_026cd4e8 = 0;
      ram_00000000026cd4f0 = 0;
      g_026cd4f8 = 0;
      ram_00000000026cd500 = 0;
      g_026cd523 = 0;
      g_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if ((g_027c8358 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_027c82a8 = FUN_0049c750();
          g_027c8290 = "MUAraAudioModification";
          g_027c8298 = 0xb8;
          g_027c82a0 = FUN_0166fbe0;
          g_027c82b0 = 0;
          ram_00000000027c82b8 = 0;
          g_027c82c0 = 0;
          ram_00000000027c82c8 = 0;
          g_027c82d0 = 0;
          ram_00000000027c82d8 = 0;
          g_027c82e0 = 0;
          ram_00000000027c82e8 = 0;
          g_027c82f0 = 0;
          ram_00000000027c82f8 = 0;
          g_027c8300 = 0;
          ram_00000000027c8308 = 0;
          g_027c8310 = 0;
          ram_00000000027c8318 = 0;
          g_027c8320 = 0;
          ram_00000000027c8328 = 0;
          g_027c8330 = 0;
          ram_00000000027c8338 = 0;
          g_027c8340 = 0;
          ram_00000000027c8348 = 0;
          g_027c8350 = 0;
          ___cxa_guard_release();
        }
        cVar4 = FUN_00e8da30();
        pplVar7 = &local_40;
        if (cVar4 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
    }
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    plVar2 = *pplVar7;
    if (plVar1 != plVar2) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar2 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0xb0) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(int64_t **)(this_ptr + 0xb0);
          *(int64_t **)(this_ptr + 0xb0) = *pplVar7;
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
        *(int64_t **)(this_ptr + 0xb0) = plVar2;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0078c610
// ============================================================
// Function: FUN_0078c610
// Address: 0078c610
// Size: 1467 bytes
// Class: MUAraAudioSource
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


int64_t * FUN_0078c610(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  void* pVar7;
  int64_t lVar8;
  code *pcVar9;
  int64_t arg1;
  int64_t *this_ptr;
  code *pcVar10;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int local_80;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  
  cVar2 = FUN_00751ba0();
  if (cVar2 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    local_98 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = local_98;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return this_ptr;
    }
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      local_90 = '\0';
      local_98 = 0;
      local_80 = -1;
      while( true ) {
        lVar3 = (int64_t)local_80;
        local_80 = local_80 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_80) break;
        local_98 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4c40();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00323290();
    if ((local_90 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    if (*(char *)(arg1 + 0x170) == '\0') {
      pcVar10 = FUN_0165a0b0;
      lVar1 = *param_2;
    }
    else {
      pcVar10 = FUN_0165a070;
      lVar1 = *param_2;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        pVar6 = 0;
        do {
          lVar3 = local_70;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4c40();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              goto LAB_0078c904;
            }
          }
          else if (local_70 != 0) {
LAB_0078c904:
            local_68 = '\0';
            local_70 = 0;
            local_58 = -1;
            while( true ) {
              lVar5 = (int64_t)local_58;
              local_58 = local_58 + 1;
              if (*(int *)(lVar3 + 0xc) <= local_58) break;
              lVar8 = *(int64_t *)(lVar3 + 0x10);
              local_70 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
              pvVar4 = _pthread_getspecific((void*)lVar8);
              pVar7 = (void*)lVar8;
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f51f0();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                pvVar4 = _pthread_getspecific(pVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f51f0();
                pcVar9 = pcVar10;
                (*pcVar10)();
                pVar7 = (void*)pcVar9;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (local_70 != local_48) {
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f51f0();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01657380();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01650890();
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 == '\0') {
                    local_40 = '\0';
                    FUN_00d21140();
                    local_48 = local_70;
                  }
                }
              }
            }
            FUN_000be170();
            FUN_00d50b20();
          }
          pVar6 = pVar6 + 1;
        } while ((int)pVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
  *this_ptr = local_98;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01673220
// ============================================================
// Function: FUN_01673220
// Address: 01673220
// Size: 1228 bytes
// Class: MUAraAudioSource
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


uint64_t FUN_01673220(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t local_d0;
  char local_c8;
  int64_t local_78;
  char local_70;
  uint local_3c;
  
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713cc0();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  lVar9 = *arg1;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar9 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  uVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
  if ((*(int *)(*(int64_t *)(lVar9 + 0x60) + 0xc) != 0) && (*(int *)(local_78 + 0xc) != 0)) {
    uVar7 = 0;
    FUN_016738f0(0,FUN_01673990);
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    lVar9 = *arg1;
    pvVar3 = _pthread_getspecific((void*)uVar7);
    if (pvVar3 != (void *)0x0) {
      lVar9 = *arg1;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar9 = *(int64_t *)(lVar9 + 0x60);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    iVar1 = *(int *)(lVar9 + 0xc);
    iVar2 = *(int *)(local_78 + 0xc);
    if (iVar1 == iVar2) {
      if (0 < *(int *)(local_78 + 0xc)) {
        lVar4 = 0;
        do {
          plVar10 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + lVar4 * 8);
          lVar6 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + lVar4 * 8);
          pvVar3 = _pthread_getspecific((void*)uVar7);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          pvVar3 = _pthread_getspecific((void*)uVar7);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          lVar6 = *(int64_t *)(lVar6 + 0x50);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar10 + 0x370))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(local_78 + 0xc));
      }
      uVar7 = FUN_01714b60();
      local_3c = (uint)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    }
    else {
      local_3c = (uint)CONCAT71((int7)((uint64_t)local_78 >> 8),iVar2 <= iVar1);
      if (iVar1 != 0) {
        if (0 < *(int *)(local_78 + 0xc)) {
          lVar4 = 0;
          do {
            plVar10 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + lVar4 * 8);
            FUN_016727d0();
            if (local_c8 == '\0') {
              if (local_d0 != 0) {
                FUN_00d50b00();
                goto LAB_016735c1;
              }
LAB_01673530:
              local_3c = 0;
            }
            else {
              if (local_d0 == 0) goto LAB_01673530;
LAB_016735c1:
              pvVar3 = _pthread_getspecific((void*)uVar7);
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              pvVar3 = _pthread_getspecific((void*)uVar7);
              if ((pvVar3 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                lVar6 = *(int64_t *)(local_d0 + 0x50);
              }
              else {
                lVar6 = *(int64_t *)
                         (*(int64_t *)
                           (local_d0 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x50)
                ;
              }
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar10 + 0x370))();
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            lVar4 = lVar4 + 1;
          } while ((int)lVar4 < *(int *)(local_78 + 0xc));
        }
        FUN_01714b60();
      }
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
    uVar8 = (uint64_t)local_3c;
    if (iVar1 == iVar2) goto LAB_016736d9;
  }
  uVar11 = uVar8 & 0xffffff01;
LAB_016736d9:
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  return uVar11 & 0xffffffff;
}



// ============================================================
// 01675080
// ============================================================
// Function: FUN_01675080
// Address: 01675080
// Size: 1188 bytes
// Class: MUAraAudioSource
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


uint FUN_01675080(void* param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_0170f680();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    iVar2 = FUN_0170f680();
  }
  else {
    iVar2 = FUN_0170f680();
  }
  uVar3 = 0xffffffff;
  if (iVar2 <= iVar1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0170f680();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      iVar2 = FUN_0170f680();
    }
    else {
      iVar2 = FUN_0170f680();
    }
    uVar3 = 1;
    if (iVar1 <= iVar2) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f570();
      if (local_40 == (int64_t *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = (**(code **)(*local_40 + 0x58))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f6e0();
      if (local_40 == (int64_t *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = 0xffffffff;
        if (*(uint *)(local_50 + 0xc) <= *(uint *)((int64_t)local_40 + 0xc)) {
          uVar3 = (uint)(*(uint *)(local_50 + 0xc) < *(uint *)((int64_t)local_40 + 0xc));
        }
        FUN_00d50b20();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ============================================================
// 01673990
// ============================================================
// Function: FUN_01673990
// Address: 01673990
// Size: 1188 bytes
// Class: MUAraAudioSource
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


uint FUN_01673990(void* param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_012c8fb0();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    iVar2 = FUN_012c8fb0();
  }
  else {
    iVar2 = FUN_012c8fb0();
  }
  uVar3 = 0xffffffff;
  if (iVar2 <= iVar1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_012c8fb0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      iVar2 = FUN_012c8fb0();
    }
    else {
      iVar2 = FUN_012c8fb0();
    }
    uVar3 = 1;
    if (iVar1 <= iVar2) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f50();
      if (local_40 == (int64_t *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = (**(code **)(*local_40 + 0x58))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8fc0();
      if (local_40 == (int64_t *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = 0xffffffff;
        if (*(uint *)(local_50 + 0xc) <= *(uint *)((int64_t)local_40 + 0xc)) {
          uVar3 = (uint)(*(uint *)(local_50 + 0xc) < *(uint *)((int64_t)local_40 + 0xc));
        }
        FUN_00d50b20();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ============================================================
// 016727d0
// ============================================================
// Function: FUN_016727d0
// Address: 016727d0
// Size: 1209 bytes
// Class: MUAraAudioSource
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


int64_t * FUN_016727d0(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint32_t extraout_XMM0_Da;
  int64_t local_60;
  char local_58;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025f82c0;
  *(void*)(puVar4 + 7) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_012c8fb0();
  pvVar5 = _pthread_getspecific(param_1);
  puVar7 = puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar7 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  *(void*)(puVar7 + 7) = uVar2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f50();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[8];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[8];
  }
  if (lVar6 != local_60) {
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672932;
      }
      FUN_00d50b00();
      lVar1 = puVar7[8];
      puVar7[8] = local_60;
      lVar6 = local_60;
    }
    else {
      local_58 = '\0';
      lVar8 = local_60;
LAB_01672932:
      puVar7[8] = lVar8;
      lVar1 = lVar6;
      lVar6 = lVar8;
    }
    param_1 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8fc0();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[9];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[9];
  }
  if (lVar6 != local_60) {
    lVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672a11;
      }
      FUN_00d50b00();
      lVar1 = puVar7[9];
      puVar7[9] = local_60;
    }
    else {
      local_58 = '\0';
LAB_01672a11:
      puVar7[9] = lVar8;
      lVar1 = lVar6;
    }
    lVar6 = lVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *arg1;
  if (lVar6 == 0) {
LAB_01672b74:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) <= (int)lVar8) {
        FUN_01677860();
        goto LAB_01672b74;
      }
      lVar1 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      iVar3 = FUN_01672e10();
      lVar8 = lVar8 + 1;
    } while (iVar3 == -1);
    if (iVar3 == 1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      FUN_01677860();
    }
    else {
      if (*(int *)(lVar6 + 0xc) != (int)lVar8) {
        lVar6 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)(int)lVar8 * 8);
        uVar2 = extraout_XMM0_Da;
        if (lVar6 != 0) {
          uVar2 = FUN_00d50b00();
        }
        iVar3 = FUN_01672e10(uVar2,0);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar3 == 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          FUN_01677860();
          goto joined_r0x01672c87;
        }
      }
      *(void*)(this_ptr + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      FUN_01677860();
    }
  }
joined_r0x01672c87:
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01671da0
// ============================================================
// Function: FUN_01671da0
// Address: 01671da0
// Size: 1176 bytes
// Class: MUAraAudioSource
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


int64_t * FUN_01671da0(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  int iVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t local_60;
  char local_58;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_01676840();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_0170f680();
  pvVar5 = _pthread_getspecific(param_1);
  plVar7 = plVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  *(void*)(plVar7 + 8) = uVar2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f570();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = plVar4[9];
    plVar7 = plVar4;
  }
  else {
    plVar7 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = plVar7[9];
  }
  if (lVar6 != local_60) {
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01671ee1;
      }
      FUN_00d50b00();
      lVar1 = plVar7[9];
      plVar7[9] = local_60;
      lVar6 = local_60;
    }
    else {
      local_58 = '\0';
      lVar8 = local_60;
LAB_01671ee1:
      plVar7[9] = lVar8;
      lVar1 = lVar6;
      lVar6 = lVar8;
    }
    param_1 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f6e0();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = plVar4[10];
    plVar7 = plVar4;
  }
  else {
    plVar7 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = plVar7[10];
  }
  if (lVar6 != local_60) {
    lVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01671fc0;
      }
      FUN_00d50b00();
      lVar1 = plVar7[10];
      plVar7[10] = local_60;
    }
    else {
      local_58 = '\0';
LAB_01671fc0:
      plVar7[10] = lVar8;
      lVar1 = lVar6;
    }
    lVar6 = lVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *arg1;
  if (lVar6 == 0) {
LAB_01672124:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) <= (int)lVar8) {
        FUN_016777f0();
        goto LAB_01672124;
      }
      lVar1 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      iVar3 = FUN_016723c0();
      lVar8 = lVar8 + 1;
    } while (iVar3 == -1);
    if (iVar3 == 1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      FUN_016777f0();
    }
    else {
      if (*(int *)(lVar6 + 0xc) != (int)lVar8) {
        lVar6 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)(int)lVar8 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        iVar3 = FUN_016723c0();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar3 == 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          FUN_016777f0();
          goto joined_r0x01672237;
        }
      }
      *(void*)(this_ptr + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      FUN_016777f0();
    }
  }
joined_r0x01672237:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 016b5830
// ============================================================
// Function: FUN_016b5830
// Address: 016b5830
// Size: 876 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"
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


int64_t FUN_016b5830(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  char local_48;
  char local_38 [8];
  
  uVar5 = param_1;
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        local_60 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b59cc;
      }
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        if (g_02802f60 != (void*)0x0) {
          local_60 = 0;
          if (*g_02802f60 != 0x0) {
            (**g_02802f60)();
            local_60 = 0;
          }
          goto LAB_016b59cc;
        }
      }
      else {
        FUN_01689520();
        pVar4 = (void*)uVar5;
        if (*(int *)(local_50 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar4 = (void*)CONCAT71((int7)((uint64_t)uVar5 >> 8),local_58[0]);
          pcVar6 = local_38;
          if (local_58[0] != '\0') {
            pcVar6 = local_58;
          }
          local_38[0] = local_58[0];
          *pcVar6 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar2 = FUN_01653650(), cVar2 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164e2c0();
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 == this_ptr) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650620();
            lVar1 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_016b4e90(param_1,param_2,&stack0xffffffffffffff70);
            if ((local_58[0] == '\0') && (local_60 != 0)) {
              FUN_00d50b00();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            goto LAB_016b59cc;
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  local_60 = 0;
LAB_016b59cc:
  FUN_00da71b0();
  return local_60;
}



// ============================================================
// 016b9550
// ============================================================
// Function: FUN_016b9550
// Address: 016b9550
// Size: 996 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "regionSequence->getDocumentController() == documentController"
//   "regionSequence->getPlaybackRegions()->getCount() == 0"
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


void FUN_016b9550(void* param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_012c91b0(), cVar2 == '\0')) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c89b0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c81e0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8a40();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8a40();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_88 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
                (**g_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b66d0
// ============================================================
// Function: FUN_016b66d0
// Address: 016b66d0
// Size: 943 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"
//   "audioModification->getAudioPlaybackRegions()->getCount() == 0"
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


void FUN_016b66d0(void* param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_01653650(), cVar2 == '\0')) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164fea0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01538130();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
                (**g_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b5480
// ============================================================
// Function: FUN_016b5480
// Address: 016b5480
// Size: 754 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
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


int64_t FUN_016b5480(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = param_1;
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        lVar6 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b561c;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if (g_02802f60 != (void*)0x0) {
          lVar6 = 0;
          if (*g_02802f60 != 0x0) {
            (**g_02802f60)();
          }
          goto LAB_016b561c;
        }
      }
      else {
        FUN_01689520();
        pVar3 = (void*)uVar4;
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          lVar6 = local_50;
          pVar3 = (void*)CONCAT71((int7)((uint64_t)uVar4 >> 8),local_48[0]);
          pcVar5 = local_38;
          if (local_48[0] != '\0') {
            pcVar5 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar5 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          lVar6 = local_50;
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == this_ptr) {
            local_80 = 0;
            local_78 = 0;
            FUN_016b4e90(param_1,param_2,&local_80);
            lVar6 = local_50;
            if (local_48[0] == '\0') {
              if (local_50 == 0) goto LAB_016b561c;
              FUN_00d50b00();
            }
            else if (local_50 == 0) goto LAB_016b561c;
            FUN_00d50b20();
            goto LAB_016b561c;
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  lVar6 = 0;
LAB_016b561c:
  FUN_00da71b0();
  return lVar6;
}



// ============================================================
// 01662650
// ============================================================
// Function: FUN_01662650
// Address: 01662650
// Size: 1004 bytes
// Class: MUAraAudioSource
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


int64_t * FUN_01662650(uint64_t param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar3 = local_68;
  lVar5 = *(int64_t *)(arg1 + 0x120);
  if (lVar5 != 0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    goto LAB_01662962;
  }
  if (*(int64_t *)(arg1 + 0xf0) != 0) {
    cVar1 = FUN_01667df0();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124e000();
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a500();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        pvVar2 = _pthread_getspecific((void*)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b7f0();
        FUN_00d50b20();
        return this_ptr;
      }
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124e100();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
        goto LAB_0166281f;
      }
    }
    else if (local_68 != 0) {
LAB_0166281f:
      local_60 = '\0';
      local_68 = 0;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          local_68 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8);
          cVar1 = FUN_00e34240();
          if ((cVar1 == '\0') && (cVar1 = FUN_00e34a50(), cVar1 == '\0')) {
            FUN_013fb3a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            pVar4 = (void*)param_1;
            if (local_40 != 0) {
              FUN_013fb3a0();
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0141b7f0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              FUN_00540b60();
              FUN_00d50b20();
              return this_ptr;
            }
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar3 + 0xc));
      }
      FUN_00540b60();
      FUN_00d50b20();
    }
  }
  FUN_0141b1a0();
  lVar5 = *(int64_t *)(arg1 + 0x120);
  lVar3 = lVar5;
  if (lVar5 != local_68) {
    lVar3 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar3 = 0;
        goto LAB_016628e8;
      }
      FUN_00d50b00();
      lVar5 = *(int64_t *)(arg1 + 0x120);
      *(int64_t *)(arg1 + 0x120) = local_68;
    }
    else {
      local_60 = '\0';
LAB_016628e8:
      *(int64_t *)(arg1 + 0x120) = lVar3;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar3 = local_68;
    }
  }
  if ((local_60 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar5 = *(int64_t *)(arg1 + 0x120);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
LAB_01662962:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 016b4e90
// ============================================================
// Function: FUN_016b4e90
// Address: 016b4e90
// Size: 1067 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioModification"
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


void FUN_016b4e90(void* param_1,uint64_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void*this_ptr;
  int64_t *plVar5;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  if ((g_028ad850 == 0) || (g_028ad859 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad850 == 0) {
      if ((g_027c8358 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
        g_027c82a8 = FUN_0049c750();
        g_027c8290 = "MUAraAudioModification";
        g_027c8298 = 0xb8;
        param_1 = 0x166fbe0;
        g_027c82a0 = FUN_0166fbe0;
        g_027c82b0 = 0;
        ram_00000000027c82b8 = 0;
        g_027c82c0 = 0;
        ram_00000000027c82c8 = 0;
        g_027c82d0 = 0;
        ram_00000000027c82d8 = 0;
        g_027c82e0 = 0;
        ram_00000000027c82e8 = 0;
        g_027c82f0 = 0;
        ram_00000000027c82f8 = 0;
        g_027c8300 = 0;
        ram_00000000027c8308 = 0;
        g_027c8310 = 0;
        ram_00000000027c8318 = 0;
        g_027c8320 = 0;
        ram_00000000027c8328 = 0;
        g_027c8330 = 0;
        ram_00000000027c8338 = 0;
        g_027c8340 = 0;
        ram_00000000027c8348 = 0;
        g_027c8350 = 0;
        ___cxa_guard_release();
      }
      lVar2 = FUN_00e86210();
      lVar4 = g_028ad850;
      if (g_028ad850 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        g_028ad850 = lVar2;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if ((lVar2 != 0) && (g_028ad858 == '\0')) {
        g_028ad858 = '\x01';
        FUN_00e8cb90();
      }
      g_028ad859 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad859 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00c811e0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = local_40;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0164df60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01660830();
  FUN_0167ab60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01538000();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_016b4a70();
  if (*param_3 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016501d0();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_016b51f7;
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) goto LAB_016b51f7;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650af0();
    FUN_00d50b20();
  }
LAB_016b51f7:
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0169d230
// ============================================================
// Function: FUN_0169d230
// Address: 0169d230
// Size: 4345 bytes
// Class: MUAraAudioSource
// String references:
//   "GNHeartbeatHandler"
//   "MUAraAudioSource"
//   "MUCustomAudioSourceDataSource"
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


void FUN_0169d230(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01696b40();
  this_ptr[0x12] = &g_025f98c0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x13] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025f73d0;
  this_ptr[10] = &g_025f7788;
  this_ptr[0x12] = &g_025f77b8;
  this_ptr[0x13] = &g_025f7808;
  FUN_0169e4e0();
  FUN_0169e7c0();
  FUN_0169ead0();
  FUN_0169ed50();
  this_ptr[0x18] = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169efd0();
    FUN_00e87980();
  }
  this_ptr[0x19] = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169f140();
    FUN_00e87980();
  }
  this_ptr[0x1a] = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169f2b0();
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169f420();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169f590();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169f700();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1d) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169f870();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe9) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169f9e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xec) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169fb50();
    FUN_00e87980();
  }
  FUN_0169fcc0();
  this_ptr[0x1f] = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_0169ffb0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x20) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_016a0120();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x104) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_016a0290();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x105) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_016a0400();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x106) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_016a0570();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x107) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_016a06e0();
    FUN_00e87980();
  }
  FUN_016a0850();
  FUN_016a0ad0();
  *(void*)(this_ptr + 0x23) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_016a0d50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x11c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708a1b == '\0') {
    FUN_016a0ec0();
    FUN_00e87980();
  }
  FUN_016a1030();
  FUN_016a12b0();
  FUN_016a15a0();
  return;
}



// ============================================================
// 016b7d40
// ============================================================
// Function: FUN_016b7d40
// Address: 016b7d40
// Size: 806 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "playbackRegion->getDocumentController() == documentController"
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


void FUN_016b7d40(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01654a00();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == this_ptr) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01657380();
            if (local_48[0] == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = '\0';
            }
            FUN_016b6bb0();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48[0] != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b8e20
// ============================================================
// Function: FUN_016b8e20
// Address: 016b8e20
// Size: 705 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
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


int64_t * FUN_016b8e20(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        local_48 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b8fdd;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_58 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar4 = local_30;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_016ae690();
        FUN_00c811e0();
        if (local_40[0] == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(param_1);
        plVar5 = local_48;
        if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x18))();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c7820();
        FUN_016b8970();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_016b8fdd;
      }
      if (g_02802f60 != (void*)0x0) {
        local_48 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b8fdd;
      }
    }
  }
  local_48 = (int64_t *)0x0;
LAB_016b8fdd:
  FUN_00da71b0();
  return local_48;
}



// ============================================================
// 01699090
// ============================================================
// Function: FUN_01699090
// Address: 01699090
// Size: 4823 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioPlaybackRegion"
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


void FUN_01699090(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_016961d0();
  *this_ptr = &g_025f61c8;
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169a410();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169a5a0();
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169a730();
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169a8c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169aa50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x61) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169abe0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x62) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169ad70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 99) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169af00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169b090();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x65) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169b220();
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169b3b0();
    FUN_00e87980();
  }
  this_ptr[0xe] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169b540();
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169b6d0();
    FUN_00e87980();
  }
  FUN_0169b860();
  FUN_0169bb80();
  FUN_0169beb0();
  FUN_0169c1e0();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169c510();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169c6a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169c830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169c9c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169cb50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f9a7b == '\0') {
    FUN_0169cce0();
    FUN_00e87980();
  }
  FUN_0169ce70();
  return;
}



// ============================================================
// 005dab40
// ============================================================
// Function: FUN_005dab40
// Address: 005dab40
// Size: 1742 bytes
// Class: MUAraAudioSource
// String references:
//   "bool"
//   "GNUni"
//   "MUAraAudioPlaybackRegion"
//   "GNHeartbeatHandler"
//   "_cursorTime"
//   "MDPluginProcessor"
//   "_lastHostCursorTime"
//   "_lastHostCursorTimeValid"
//   "_hostPlaybackPendingStopTime"
//   "MURenderer"
//   "_controlsLocalPlayback"
//   "_distributedLocalPlayback"
//   "_lastPendingHostCycleUpdateRequestTime"
//   "double"
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


void FUN_005dab40(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_005da070();
  this_ptr[5] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024f67b8;
  this_ptr[2] = &g_024f6cb8;
  this_ptr[5] = &g_024f6df8;
  this_ptr[6] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db760();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x75) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 016b6000
// ============================================================
// Function: FUN_016b6000
// Address: 016b6000
// Size: 778 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioModification->getDocumentController() == documentController"
//   "!audioModification->isDeactivatedForUndoHistory()"
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


uint8_t FUN_016b6000(void* param_1)

{
  char cVar1;
  uint8_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t local_40;
  char local_38;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((g_02802f60 != (void*)0x0) && (uVar2 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((arg1 == (int64_t *)0x0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01650890();
        if (cVar1 == '\0') {
          cVar1 = FUN_0167b260();
          if (cVar1 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650620();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0166b8c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(param_1);
            plVar5 = arg1;
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar5 = (int64_t *)arg1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar5 + 0x3a0))();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            arg1 = (int64_t *)arg1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          uVar2 = (**(code **)(*arg1 + 0x398))();
        }
        else {
          uVar2 = 1;
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}



// ============================================================
// 016b84b0
// ============================================================
// Function: FUN_016b84b0
// Address: 016b84b0
// Size: 873 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "playbackRegion->getDocumentController() == documentController"
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


void FUN_016b84b0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this_ptr) {
        FUN_0168a900();
        FUN_01689980();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654660();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50130();
        cVar1 = FUN_0167b260();
        if (cVar1 == '\0') {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          FUN_01689520();
          if (*(int *)(local_98 + 0xc) != 0) {
            FUN_01689520();
            FUN_00d23310();
            pcVar3 = local_30;
            if (local_40[0] != '\0') {
              pcVar3 = local_40;
            }
            local_30[0] = local_40[0];
            *pcVar3 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
            if ((local_30[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b6360
// ============================================================
// Function: FUN_016b6360
// Address: 016b6360
// Size: 703 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"
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


void FUN_016b6360(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164e2c0();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == this_ptr) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650840();
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b8970
// ============================================================
// Function: FUN_016b8970
// Address: 016b8970
// Size: 873 bytes
// Class: MUAraAudioSource
// String references:
//   "properties != NULL"
//   "musicalContext"
//   "properties->structSize >= ARA::kARARegionSequencePropertiesMinSize"
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


void FUN_016b8970(void* param_1)

{
  uint64_t uVar1;
  void*puVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  uint64_t *arg1;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  if (arg1 == (uint64_t *)0x0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "properties != NULL";
LAB_016b8af6:
                                            (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*arg1 < 0x1c) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARARegionSequencePropertiesMinSize";
    goto LAB_016b8af6;
  }
  if (*(int64_t *)((int64_t)arg1 + 0x14) == 0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "musicalContext";
    goto LAB_016b8af6;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
  uVar1 = arg1[1];
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar1 == 0) {
    local_38 = '\0';
    local_40 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 != '\0') {
      local_50 = local_40;
      local_38 = '\0';
      goto LAB_016b8b2f;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b8b2f;
    }
  }
  local_50 = 0;
LAB_016b8b2f:
  FUN_012c7b60();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7e50();
  if ((*arg1 < 0x1d) || (*(int64_t *)((int64_t)arg1 + 0x1c) == 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c7f30();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar2 = *(void**)((int64_t)arg1 + 0x1c);
    FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012c7f30();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01661910
// ============================================================
// Function: FUN_01661910
// Address: 01661910
// Size: 723 bytes
// Class: MUAraAudioSource
// String references:
//   "_composition"
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


void FUN_01661910(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  void*arg1;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = FUN_00d50f50();
  if ((g_0272a630 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar4 != 0)) {
    g_02708978 = FUN_0049c750();
    g_02708960 = "MUAraAudioSource";
    g_02708968 = 0x138;
    param_1 = 0x49c720;
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
    uVar8 = ___cxa_guard_release();
  }
  lVar5 = FUN_00e85ef0(uVar8,1);
  if (lVar5 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x590))();
  if (cVar3 == '\0') goto LAB_01661b1d;
  local_50 = plVar2;
  local_48 = '\0';
  pplVar7 = &local_40;
  (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_50);
  plVar1 = local_40;
  FUN_000be210();
  if (plVar1 == (int64_t *)0x0) {
LAB_01661a57:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01661a57;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505de0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
  }
LAB_01661b1d:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 016b5cb0
// ============================================================
// Function: FUN_016b5cb0
// Address: 016b5cb0
// Size: 660 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"
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


void FUN_016b5cb0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164e2c0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == this_ptr) {
            FUN_016b4a70();
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b9200
// ============================================================
// Function: FUN_016b9200
// Address: 016b9200
// Size: 660 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "regionSequence->getDocumentController() == documentController"
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


void FUN_016b9200(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_012c91b0(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c89b0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == this_ptr) {
            FUN_016b8970();
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 007886a0
// ============================================================
// Function: FUN_007886a0
// Address: 007886a0
// Size: 750 bytes
// Class: MUAraAudioSource
// String references:
//   "%@.txt"
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


uint32_t FUN_007886a0(void)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  
  if (((int64_t *)*this_ptr == (int64_t *)0x0) ||
     ((cVar3 = (**(code **)(*(int64_t *)*this_ptr + 0x3a0))(), cVar3 == '\0' &&
      (cVar3 = (**(code **)(*(int64_t *)*this_ptr + 0x428))(), cVar3 == '\0')))) {
    uVar4 = 0;
  }
  else {
    bVar1 = false;
    local_40 = (int64_t *)0x0;
    do {
      plVar5 = (int64_t *)*this_ptr;
      FUN_00d9bb60();
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      (**(code **)(*plVar5 + 0x400))();
      if (local_60 == local_40) {
        if ((!bVar1) && (local_60 != (int64_t *)0x0)) {
          plVar5 = local_40;
          if (local_58 != '\0') goto LAB_00788813;
          FUN_00d50b00();
LAB_00788870:
          bVar1 = true;
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (bVar1) {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
            local_40 = local_60;
            goto LAB_00788870;
          }
          local_40 = local_60;
          bVar1 = true;
        }
        else {
          local_40 = local_60;
          bVar1 = true;
        }
      }
      else {
        plVar5 = local_60;
        if ((bVar1) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00788813:
        local_58 = '\0';
        local_40 = plVar5;
        bVar1 = true;
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      cVar3 = (**(code **)(*local_40 + 0x398))();
      lVar2 = g_02729640;
    } while (cVar3 != '\0');
    if (g_02729640 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d90550();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((char)uVar4 != '\0') {
      (**(code **)(*local_40 + 0x408))();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}



// ============================================================
// 016b8170
// ============================================================
// Function: FUN_016b8170
// Address: 016b8170
// Size: 701 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "playbackRegion->getDocumentController() == documentController"
//   "headTime != NULL"
//   "tailTime != NULL"
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


void FUN_016b8170(void*param_1,void*param_2)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_48;
  char local_40;
  
  pVar3 = (void*)param_1;
  uVar4 = FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else if ((arg1 == 0) || (cVar1 = FUN_01658870(), uVar4 = extraout_XMM0_Qa_00, cVar1 == '\0'))
  {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_01654a00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (local_48 == this_ptr) {
      if (param_2 == (void*)0x0) {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar4,"headTime != NULL");
        }
      }
      else if (param_1 == (void*)0x0) {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar4,"tailTime != NULL");
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f94c0();
        *param_2 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f9500();
        *param_1 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)
                (uVar4,"playbackRegion->getDocumentController() == documentController");
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 008cad5c
// ============================================================
// Function: FUN_008cad5c
// Address: 008cad5c
// Size: 1396 bytes
// Class: MUAraAudioSource
// String references:
//   ", "
//   "<null>"
//   "computerId="
//   "channelId="
//   "auxChannelId="
//   "SendEncryptedCommandInput("
//   "encryptedCommand="
//   "commandSize="
//   "randomInitializationVector="
//   "checksum="
//   "channelEstablishedTime="
//   "minimizeLogging="
//   "randomData="
//   "callingLicenseDVersion="
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


void FUN_008cad5c(void *param_1)

{
  int64_t this_ptr;
  byte local_40;
  
  FUN_009ad920(param_1,0x1a);
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0091dc38();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0091dc38();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0xa1) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_00925da0();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0xa2) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_00925da0();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0xa3) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_0088d900();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0xa4) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008d3120();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0xa5) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_0091dc38();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  return;
}



// ============================================================
// 00789100
// ============================================================
// Function: FUN_00789100
// Address: 00789100
// Size: 708 bytes
// Class: MUAraAudioSource
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


void FUN_00789100(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  char cVar1;
  int64_t lVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  cVar1 = (char)param_1;
  local_98 = *param_3;
  local_90 = 0;
  FUN_00788fc0(param_1,&local_98);
  lVar2 = local_40;
  pVar6 = (void*)param_1;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0) {
    return;
  }
  if (cVar1 == '\0') {
    if (*param_3 != 0) {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_016c2e90();
      if (1 < iVar3) {
        pvVar4 = _pthread_getspecific(pVar6);
        if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          local_48 = lVar2;
        }
        else {
          local_48 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2e90();
        FUN_016c1150();
      }
    }
  }
  else {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = lVar2;
  local_80 = '\0';
  FUN_0132d960();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_78 = g_027ebe30;
  if (g_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = lVar2;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&local_68,3,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01670fa0
// ============================================================
// Function: FUN_01670fa0
// Address: 01670fa0
// Size: 638 bytes
// Class: MUAraAudioSource
// String references:
//   "_musicalContextData"
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


void FUN_01670fa0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_028ad820;
  if ((g_028ad820 == 0) || (g_028ad829 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad820 == 0) {
      FUN_00d630a0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01e33cd0();
      lVar2 = g_028ad820;
      if (g_028ad820 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar2 = local_40;
        }
        bVar1 = g_028ad820 != 0;
        g_028ad820 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_40;
        }
      }
      if ((lVar2 != 0) && (g_028ad828 == '\0')) {
        g_028ad828 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_40;
      }
      if ((local_38 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_016be450();
      lVar2 = FUN_00e85ef0();
      if (lVar2 == 0) {
        lVar2 = FUN_00e858c0();
        if ((lVar2 == 0) || (*(int64_t *)(lVar2 + 0x28) == 0)) goto LAB_0167119a;
LAB_0167115a:
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        if (*(int64_t *)(lVar2 + 0x30) != 0) goto LAB_0167115a;
LAB_0167119a:
        bVar1 = true;
      }
      FUN_00d23f50();
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = g_028ad820;
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_016711f7;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_016711f7:
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0078b1d0
// ============================================================
// Function: FUN_0078b1d0
// Address: 0078b1d0
// Size: 937 bytes
// Class: MUAraAudioSource
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


void* FUN_0078b1d0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int iVar4;
  uint64_t local_d8;
  int64_t local_c8;
  char local_c0;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_50;
  uint32_t uStack_4c;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_70 + 0x450))();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    FUN_01f27fe0();
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_000c4290();
    if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != (int64_t *)0x0) {
      if (0 < *(int *)((int64_t)local_70 + 0xc)) {
        iVar4 = 0;
        do {
          FUN_0051e6f0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int64_t)local_70 + 0xc));
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else if (*(int64_t *)(arg1 + 0x90) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    local_d8 = *(void*)(arg1 + 0x90);
    FUN_00083ea0(2,&local_d8);
    FUN_0078b920();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0078b830();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 0078d680
// ============================================================
// Function: FUN_0078d680
// Address: 0078d680
// Size: 700 bytes
// Class: MUAraAudioSource
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


uint64_t FUN_0078d680(void* param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *local_40;
  char local_38;
  
  FUN_00b160d0();
  iVar2 = (**(code **)(*local_40 + 0x690))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 == 0) {
    return (uint64_t)(0 < iVar2);
  }
  if (iVar2 < 1) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return 0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0078d7ce;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_0078d7ce:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_0078d92e;
      FUN_00d50b00();
LAB_0078d844:
      iVar1 = 0;
      do {
        iVar3 = iVar1;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0124a860();
        if (iVar4 <= iVar3) break;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01240ab0();
        iVar1 = iVar3 + 1;
      } while (iVar5 <= iVar2);
      uVar7 = CONCAT71(0x28025,iVar4 <= iVar3);
      FUN_00d50b20();
    }
    else {
      if (local_40 != (int64_t *)0x0) goto LAB_0078d844;
LAB_0078d92e:
      uVar7 = 0;
    }
    FUN_00d50b20();
    goto LAB_0078d938;
  }
  uVar7 = 0;
LAB_0078d938:
  FUN_00d50b20();
  return uVar7;
}



// ============================================================
// 007894f0
// ============================================================
// Function: FUN_007894f0
// Address: 007894f0
// Size: 730 bytes
// Class: MUAraAudioSource
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


void FUN_007894f0(void* param_1)

{
  void *pvVar1;
  int64_t *this_ptr;
  int iVar2;
  bool bVar3;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x628))();
  if (local_78 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_40 == 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar2 = 0;
        do {
          FUN_004f9670();
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7990();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_78 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00789930
// ============================================================
// Function: FUN_00789930
// Address: 00789930
// Size: 730 bytes
// Class: MUAraAudioSource
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


void FUN_00789930(void* param_1)

{
  void *pvVar1;
  int64_t *this_ptr;
  int iVar2;
  bool bVar3;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x628))();
  if (local_78 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_40 == 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar2 = 0;
        do {
          FUN_004f9670();
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7900();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_78 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 005db8e0
// ============================================================
// Function: FUN_005db8e0
// Address: 005db8e0
// Size: 762 bytes
// Class: MUAraAudioSource
// String references:
//   "_transferStartTime"
//   "_transferEndTime"
//   "_userStartTime"
//   "_userEndTime"
//   "double"
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


void FUN_005db8e0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_024e3cd0;
  this_ptr[7] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 016b9a60
// ============================================================
// Function: FUN_016b9a60
// Address: 016b9a60
// Size: 516 bytes
// Class: MUAraAudioSource
// String references:
//   "!audioSource->isDeactivatedForUndoHistory()"
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


uint32_t FUN_016b9a60(void* param_1,char param_2)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_016670a0();
  if (cVar1 == '\0') {
    if (g_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      cVar1 = (**(code **)(*local_40 + 0x390))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0166b8c0();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016676f0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return uVar2;
        }
        if (local_40 == (int64_t *)0x0) {
          return uVar2;
        }
        FUN_00d50b20();
        return uVar2;
      }
    }
  }
  else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
    (**g_02802f60)();
    return 0;
  }
  return 0;
}



// ============================================================
// 00789d70
// ============================================================
// Function: FUN_00789d70
// Address: 00789d70
// Size: 599 bytes
// Class: MUAraAudioSource
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


void FUN_00789d70(void* param_1)

{
  void *pvVar1;
  int iVar2;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x628))();
  if (local_70 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_48 == 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(local_70 + 0xc); iVar2 = iVar2 + 1) {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e44d0();
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01697750
// ============================================================
// Function: FUN_01697750
// Address: 01697750
// Size: 1258 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioModification"
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


void FUN_01697750(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01696b40();
  *this_ptr = &g_025f5dd8;
  this_ptr[10] = &g_025f6198;
  FUN_01697d10();
  FUN_01698010();
  FUN_01698320();
  FUN_016985a0();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698890();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698a00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698b70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698ce0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698e50();
    FUN_00e87980();
  }
  return;
}

