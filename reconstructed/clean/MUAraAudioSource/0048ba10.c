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

