// ===================================================================
// MDRecordingPrefCtrl — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 001177c0
// ============================================================
// Function: FUN_001177c0
// Address: 001177c0
// Size: 5535 bytes
// Class: MDRecordingPrefCtrl

void FUN_001177c0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  uint32_t uVar7;
  void *pvVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  void*puVar12;
  void* pVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t this_ptr;
  double dVar16;
  uint64_t uVar17;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  void*local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  lVar14 = local_40;
  FUN_01e57e80();
  FUN_00757c60();
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar9 = FUN_00e8b990();
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00763390();
  *(void*)(this_ptr + 0x160) = uVar7;
  FUN_00d216c0();
  local_78 = lVar9;
  FUN_004ef670(0,0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d21140();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*(double *)(this_ptr + 0x90) < *(double *)(this_ptr + 0x98)) {
    FUN_004ef670();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d21140();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar9 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar16 = (double)FUN_00e7d6f0();
  uVar10 = (uint64_t)(dVar16 * g_023907c0);
  dVar16 = dVar16 * g_023907c0 - g_023907c8;
  pVar13 = 0xaaaaaaab;
  FUN_0071a120();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar16 & (int64_t)uVar10 >> 0x3f | uVar10) / 3);
  local_40 = lVar9;
  FUN_000175c0();
  if (lVar14 != 0) {
    FUN_00d50b00();
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  local_68 = lVar14;
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((lVar14 != 0 & bVar5) == 0) {
    if ((*(int64_t *)(this_ptr + 0xf8) != 0) && (FUN_01e40eb0(), lVar14 != 0)) {
      (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x478))();
    }
    if ((*(int64_t *)(this_ptr + 0x120) != 0) && (FUN_01e40eb0(), lVar14 != 0)) {
      (**(code **)(**(int64_t **)(this_ptr + 0x120) + 0x478))();
    }
  }
  else {
    FUN_004ef670(0,0);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    FUN_004ef670(0,0);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((*(int64_t *)(this_ptr + 0xf8) != 0) && (FUN_01e40eb0(), lVar9 == 0)) {
      FUN_01e40eb0();
      local_100 = 0;
      local_108 = *(int64_t *)(this_ptr + 0xf8);
      if (local_108 != 0) {
        FUN_00d50b00();
      }
      local_100 = '\x01';
      (**(code **)(MACH_HEADER._0_8_ + 0x450))();
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((*(int64_t *)(this_ptr + 0x120) != 0) && (FUN_01e40eb0(), lVar9 == 0)) {
      FUN_01e40eb0();
      local_f0 = 0;
      local_f8 = *(int64_t *)(this_ptr + 0x120);
      if (local_f8 != 0) {
        FUN_00d50b00();
      }
      local_f0 = '\x01';
      (**(code **)(MACH_HEADER._0_8_ + 0x450))();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_004ef670(0,0);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar9;
    FUN_00d21140();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d6f8d0();
  lVar14 = *(int64_t *)(this_ptr + 0x158);
  if (lVar14 != 0) {
    local_68 = 0;
    local_50 = -1;
    while( true ) {
      lVar11 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar14 + 0xc) <= local_50) break;
      local_68 = *(int64_t *)(*(int64_t *)(lVar14 + 0x10) + 8 + lVar11 * 8);
      uVar17 = FUN_004ef720();
      local_b0 = local_88;
      local_a8 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          uVar17 = FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_a8 = '\x01';
      FUN_00e427c0(uVar17,&local_b0);
      local_b8 = 0;
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      local_c0 = lVar9;
      FUN_01d6f990();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136910();
    pVar13 = (void*)lVar14;
  }
  lVar14 = local_68;
  FUN_00cb1f10();
  FUN_00db32a0();
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  local_90 = puVar12;
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  (*pcVar4)();
  local_c8 = puVar12;
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    FUN_01d6f8d0();
    FUN_00757c60();
    pvVar8 = _pthread_getspecific(pVar13);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar13);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    if (local_68 != 0) {
      local_68 = 0;
      local_50 = -1;
      do {
        lVar11 = (int64_t)local_50;
        local_50 = local_50 + 1;
        bVar1 = local_50 < *(int *)(lVar14 + 0xc);
        lVar9 = lVar14;
        if (*(int *)(lVar14 + 0xc) <= local_50) break;
        lVar9 = *(int64_t *)(lVar14 + 0x10);
        local_68 = *(int64_t *)(lVar9 + 8 + lVar11 * 8);
        pvVar8 = _pthread_getspecific((void*)lVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_012f49f0();
      } while (cVar6 == '\0');
      pVar13 = (void*)lVar9;
      FUN_000be170();
      FUN_00d50b20();
    }
    lVar14 = local_68;
    FUN_00757c60();
    pvVar8 = _pthread_getspecific(pVar13);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar13);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      local_68 = 0;
      local_50 = -1;
      lVar9 = 0;
      bVar2 = false;
      while( true ) {
        lVar11 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(lVar14 + 0xc) <= local_50) break;
        lVar15 = *(int64_t *)(lVar14 + 0x10);
        local_68 = *(int64_t *)(lVar15 + 8 + lVar11 * 8);
        pvVar8 = _pthread_getspecific((void*)lVar15);
        pVar13 = (void*)lVar15;
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        if (*(int *)(local_40 + 0xc) != 0) {
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6000();
          local_98 = 0;
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          local_98 = '\x01';
          local_a0 = local_40;
          FUN_01d6f990();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        local_e0 = 0;
        FUN_00d50b00();
        local_e0 = '\x01';
        local_150 = '\0';
        pVar13 = 0;
        local_158 = local_68;
        local_e8 = this_ptr;
        FUN_003b2280(0,&local_158);
        if (local_40 == lVar9) {
          lVar11 = lVar9;
          bVar3 = bVar2;
          if ((!bVar2) && (local_40 != 0)) {
            FUN_00d50b00();
            goto LAB_00118580;
          }
        }
        else {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          lVar11 = local_40;
          if ((bVar2) && (lVar9 != 0)) {
            FUN_00d50b20();
            lVar9 = local_40;
LAB_00118580:
            lVar11 = lVar9;
            bVar3 = true;
          }
        }
        lVar9 = lVar11;
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (bVar1) {
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49f0();
          FUN_003b2220();
        }
        else {
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49e0();
          FUN_003b2220();
        }
        FUN_00d21140();
        local_d0 = 0;
        FUN_00d50b00();
        local_d0 = '\x01';
        local_140 = '\0';
        pVar13 = 1;
        local_148 = local_68;
        local_d8 = this_ptr;
        FUN_003b2280(1,&local_148);
        bVar2 = bVar3;
        if ((!bVar3) && (lVar9 != 0)) {
          FUN_00d50b00();
          bVar2 = true;
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (bVar1) {
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49f0();
          FUN_003b2220();
        }
        else {
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49e0();
          FUN_003b2220();
        }
        FUN_00d21140();
        local_40 = lVar9;
      }
      FUN_000be170();
      FUN_00d50b20();
      if ((bVar2) && (lVar9 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_138 = local_90;
  local_130 = '\0';
  FUN_01d2a8f0();
  puVar12 = local_c8;
  if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_128 = puVar12;
  local_120 = '\0';
  FUN_01d2a8f0();
  lVar14 = local_78;
  if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b160d0();
  if (local_68 != 0) {
    FUN_00b160d0();
    FUN_00b335d0();
    FUN_00d470c0();
    lVar9 = *(int64_t *)(this_ptr + 0xa0);
    if (lVar9 != local_68) {
      if (local_68 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_00d50b00();
        lVar9 = *(int64_t *)(this_ptr + 0xa0);
        lVar11 = local_68;
      }
      *(int64_t *)(this_ptr + 0xa0) = lVar11;
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_004bb220();
  FUN_00d46530();
  lVar9 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar9 != local_68) {
    if (local_68 == 0) {
      local_68 = 0;
    }
    else {
      FUN_00d50b00();
      lVar9 = *(int64_t *)(this_ptr + 0xa8);
    }
    *(int64_t *)(this_ptr + 0xa8) = local_68;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00119af0();
  FUN_0011a370();
  FUN_0011b4b0();
  cVar6 = (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x9a0))();
  if ((cVar6 != '\0') &&
     (cVar6 = (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x9a0))(), cVar6 != '\0')) {
    uVar17 = FUN_00d6f370();
    local_118 = g_026e1808;
    if (g_026e1808 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_110 = '\x01';
    FUN_00d708a0(uVar17,0);
    FUN_0011b6f0();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00116d00
// ============================================================
// Function: FUN_00116d00
// Address: 00116d00
// Size: 519 bytes
// Class: MDRecordingPrefCtrl
// String references:
//   "MDRecordingPrefCtrl"

void FUN_00116d00(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  
  if ((g_026e2260 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026e21b0 = FUN_00015ff0();
    g_026e2198 = "MDRecordingPrefCtrl";
    g_026e21a0 = 0x88;
    g_026e21a8 = FUN_0012f110;
    g_026e21b8 = 0;
    ram_00000000026e21c0 = 0;
    g_026e21c8 = 0;
    g_026e2240 = 0;
    ram_00000000026e2248 = 0;
    g_026e2250 = 0;
    g_026e2252 = 1;
    g_026e21d0 = 0;
    ram_00000000026e21d8 = 0;
    g_026e21e0 = 0;
    ram_00000000026e21e8 = 0;
    g_026e21f0 = 0;
    ram_00000000026e21f8 = 0;
    g_026e2200 = 0;
    ram_00000000026e2208 = 0;
    g_026e2210 = 0;
    ram_00000000026e2218 = 0;
    g_026e2220 = 0;
    ram_00000000026e2228 = 0;
    g_026e2230 = 0;
    ram_00000000026e2238 = 0;
    g_026e225b = 0;
    g_026e2253 = 0;
    ___cxa_guard_release();
  }
  if (g_026e2253 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0012f160();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_004b9aa0();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



// ============================================================
// 004b9aa0
// ============================================================
// Function: FUN_004b9aa0
// Address: 004b9aa0
// Size: 735 bytes
// Class: MDRecordingPrefCtrl
// String references:
//   "MDRecordingPrefCtrl"
//   "handleSoundFileFormatChanged"
//   "handleAudioSampleFormatChanged"

void FUN_004b9aa0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02809740 = "handleSoundFileFormatChanged";
      g_02809748 = &g_026e2198;
      g_02809750 = 0;
      g_02809758 = &g_027096d8;
      g_02809760 = FUN_004bba80;
      g_02809768 = 0x5c1;
      g_02809770 = 0;
      ram_0000000002809778 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809788 = "handleAudioSampleFormatChanged";
      g_02809790 = &g_026e2198;
      g_02809798 = 0;
      g_028097a0 = &g_027096d8;
      g_028097a8 = FUN_004bba80;
      g_028097b0 = 0x5c9;
      g_028097b8 = 0;
      ram_00000000028097c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

