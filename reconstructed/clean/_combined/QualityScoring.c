// ===================================================================
// QualityScoring — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (19):
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


// ============================================================
// 01d4f920
// ============================================================
// Function: FUN_01d4f920
// Address: 01d4f920
// Size: 4534 bytes
// Class: QualityScoring
// String references:
//   "%@@2x.%@"
//   "Resource named %@ not found"
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01d4f920(void)

{
  byte bVar1;
  byte bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  void*puVar9;
  byte bVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t *arg1;
  int iVar13;
  int64_t this_ptr;
  uint8_t uVar14;
  ushort uVar15;
  int iVar16;
  uint64_t in_R11;
  int64_t *plVar17;
  int64_t *plVar18;
  int64_t lVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  uint64_t uVar23;
  float fVar24;
  float fVar25;
  int64_t *local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_170;
  char local_168;
  int64_t local_160;
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
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  int local_a4;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  uint local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  int64_t local_38;
  
  lVar19 = *arg1;
  lVar12 = *(int64_t *)(this_ptr + 0x38);
  if (lVar12 != lVar19) {
    if (lVar19 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x38) = lVar19;
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  plVar17 = local_50;
  local_1a0 = *arg1;
  local_198 = '\0';
  FUN_01ea01c0();
  local_108 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_108 = '\x01';
  local_110 = local_90;
  uVar23 = (**(code **)(*plVar17 + 0x5f8))(&local_110,&local_1a0);
  local_b0 = local_80;
  if ((char)local_78 == '\0') {
    if (local_80 != (int64_t *)0x0) {
      uVar23 = FUN_00d50b00();
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
    }
  }
  else {
    local_78 = local_78 & 0xffffff00;
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar23 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar23 = FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    uVar23 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar23 = FUN_00d50b20();
  }
  plVar17 = local_b0;
  if (local_b0 == (int64_t *)0x0) {
    if ((g_028b8198 == (void*)0x0) || (g_028b81a1 == '\0')) {
      FUN_00e8cb50();
      if (g_028b8198 == (void*)0x0) {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02572358;
        (*g_02572370)();
        if (g_028b8198 == puVar9) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
          bVar20 = g_028b8198 != (void*)0x0;
          g_028b8198 = puVar9;
          if (bVar20) {
            FUN_00d50b20();
          }
        }
        if (g_028b81a0 == '\0') {
          g_028b81a0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar21) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        plVar17 = local_50;
        FUN_00d30620();
        uVar23 = FUN_00d305f0();
        local_d8 = 0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            uVar23 = FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_d8 = '\x01';
        local_e0 = local_90;
        uVar23 = (**(code **)(*plVar17 + 0x618))(uVar23,&local_e0);
        plVar17 = local_80;
        if (local_80 == (int64_t *)0x0) {
          bVar21 = true;
          plVar17 = (int64_t *)0x0;
          local_40 = (int64_t *)0x0;
        }
        else {
          if ((char)local_78 == '\0') {
            uVar23 = FUN_00d50b00();
            bVar21 = false;
            local_40 = (int64_t *)CONCAT71((int7)((uint64_t)uVar23 >> 8),1);
            if (((char)local_78 == '\0') || (local_80 == (int64_t *)0x0)) goto LAB_01d5038e;
            uVar23 = FUN_00d50b20();
          }
          else {
            local_78 = local_78 & 0xffffff00;
          }
          local_40 = (int64_t *)CONCAT71((int7)((uint64_t)uVar23 >> 8),1);
          bVar21 = false;
        }
LAB_01d5038e:
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        puVar9 = g_028b8198;
        if (!bVar21) {
          uVar23 = (**(code **)(*plVar17 + 1000))();
          plVar18 = local_50;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_80 = plVar18;
          local_78 = local_78 & 0xffffff00;
          FUN_00d214d0(uVar23,*(void*)((int64_t)puVar9 + 0xc));
          if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar18 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01f27fe0();
        plVar18 = local_50;
        FUN_00d30660();
        uVar23 = FUN_00d305f0();
        local_c8 = 0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            uVar23 = FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_c8 = '\x01';
        local_d0 = local_90;
        (**(code **)(*plVar18 + 0x618))(uVar23,&local_d0);
        plVar18 = local_80;
        bVar7 = (byte)local_40;
        if (local_80 == plVar17) {
          plVar18 = plVar17;
          if ((bool)(bVar21 & local_80 != (int64_t *)0x0)) {
            if ((char)local_78 != '\0') goto LAB_01d50542;
            bVar7 = 1;
            FUN_00d50b00();
          }
LAB_01d50598:
          if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = bVar7 & plVar17 != (int64_t *)0x0;
            bVar7 = 1;
            if (bVar10 == 1) {
              FUN_00d50b20();
            }
            goto LAB_01d50598;
          }
          bVar21 = plVar17 != (int64_t *)0x0;
          plVar17 = plVar18;
          if ((bVar7 & bVar21) == 1) {
            FUN_00d50b20();
          }
LAB_01d50542:
          local_78 = local_78 & 0xffffff00;
          bVar7 = 1;
          plVar18 = plVar17;
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        puVar9 = g_028b8198;
        if (plVar18 != (int64_t *)0x0) {
          uVar23 = (**(code **)(*plVar18 + 1000))();
          plVar17 = local_50;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_80 = plVar17;
          local_78 = local_78 & 0xffffff00;
          FUN_00d214d0(uVar23,*(void*)((int64_t)puVar9 + 0xc));
          if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01f27fe0();
        (**(code **)(*local_50 + 0x610))();
        plVar17 = local_80;
        if (local_80 == plVar18) {
          plVar17 = plVar18;
          bVar10 = bVar7;
          if ((bVar7 == 0) && (local_80 != (int64_t *)0x0)) {
            if ((char)local_78 != '\0') goto LAB_01d506f0;
            FUN_00d50b00();
            bVar10 = 1;
          }
LAB_01d50738:
          if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = 1;
            if ((bVar7 != 0) && (plVar18 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d50738;
          }
          if ((bVar7 != 0) && (plVar18 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d506f0:
          local_78 = local_78 & 0xffffff00;
          bVar10 = 1;
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        puVar9 = g_028b8198;
        if (plVar17 != (int64_t *)0x0) {
          uVar23 = (**(code **)(*plVar17 + 1000))();
          plVar17 = local_50;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_80 = plVar17;
          local_78 = local_78 & 0xffffff00;
          FUN_00d214d0(uVar23,*(void*)((int64_t)puVar9 + 0xc));
          if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar10 != 0) {
            FUN_00d50b20();
          }
        }
        g_028b81a1 = '\x01';
        uVar23 = FUN_00e8cb70();
      }
      else {
        g_028b81a1 = '\x01';
        uVar23 = FUN_00e8cb70();
      }
    }
    if (g_028b8198 != (void*)0x0) {
      lVar19 = 0;
      do {
        if (*(int *)((int64_t)g_028b8198 + 0xc) <= lVar19) break;
        plVar17 = *(int64_t **)(g_028b8198[2] + lVar19 * 8);
        if (plVar17 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar17 + 0x388))();
        local_160 = *arg1;
        local_158 = '\0';
        cVar6 = (**(code **)(*local_80 + 0x50))();
        cVar8 = '\x01';
        if (cVar6 == '\0') {
          (**(code **)(*plVar17 + 0x390))();
          local_150 = *arg1;
          local_148 = '\0';
          cVar8 = (**(code **)(*local_50 + 0x50))();
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar8 != '\0') {
          FUN_01d523b0();
          FUN_00d50b20();
          goto LAB_01d50aa3;
        }
        (**(code **)(*plVar17 + 0x390))();
        local_140 = *arg1;
        local_138 = '\0';
        cVar6 = (**(code **)(*local_80 + 0x50))();
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          FUN_01d523b0();
          FUN_00d50b20();
          goto LAB_01d50aa3;
        }
        uVar23 = FUN_00d50b20();
        lVar19 = lVar19 + 1;
      } while (g_028b8198 != (void*)0x0);
    }
    lVar19 = g_027fe468;
    if (g_027fe468 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_130 = lVar19;
    local_128 = '\x01';
    lVar19 = *arg1;
    local_78 = 1;
    local_80 = &g_024c5048;
    if (lVar19 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_70 = lVar19;
    FUN_00cc7b40(uVar23,&local_80);
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01d50aa3;
  }
  FUN_01d523b0();
  (**(code **)(*plVar17 + 0x3f0))();
  plVar17 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_b0 + 0x390))();
  plVar18 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_b0 + 0x380))();
  plVar3 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = plVar18;
  local_1a8 = plVar3;
  uVar11 = 2;
  uVar23 = FUN_00083ea0(2,&local_1a8);
  uVar23 = FUN_00d8cb40(uVar23,&local_80);
  local_e8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      uVar23 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_e8 = '\x01';
  local_f0 = local_90;
  (**(code **)(*plVar17 + 0x400))(uVar23,&local_f0);
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (int64_t *)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar5 != (int64_t *)0x0) && (cVar6 = (**(code **)(*plVar5 + 0x398))(), cVar6 != '\0')) {
    FUN_01d4f320();
    plVar4 = local_80;
    if ((char)local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d4fdab;
      }
    }
    else if (local_80 != (int64_t *)0x0) {
LAB_01d4fdab:
      *(void*)(plVar4 + 9) = 0x40000000;
      fVar22 = g_0239011c;
      *(float *)((int64_t)plVar4 + 0x1c) = *(float *)((int64_t)plVar4 + 0x1c) * g_0239011c;
      *(float *)(plVar4 + 4) = fVar22 * *(float *)(plVar4 + 4);
      local_78 = local_78 & 0xffffff00;
      local_80 = plVar4;
      FUN_00d21140();
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  lVar19 = g_027f0538;
  if (g_027f0538 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar19;
  local_168 = '\x01';
  cVar6 = FUN_00d8f400();
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    if (*(int64_t *)(this_ptr + 0x58) == 0) {
      local_40 = plVar17;
      uVar23 = FUN_01d4ed90(*(void*)(this_ptr + 0x1c),g_02390124);
      plVar4 = local_80;
      if (((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
        uVar23 = FUN_00d50b00();
      }
      local_a4 = (int)CONCAT71((int7)((uint64_t)uVar23 >> 8),1);
      if (plVar4[6] == 0) {
LAB_01d4fefb:
        plVar17 = (int64_t *)0x0;
      }
      else {
        FUN_01d480c0();
        FUN_01d48370();
        (**(code **)(*(int64_t *)plVar4[6] + 0x530))();
        plVar17 = (int64_t *)plVar4[6];
        if (plVar17 == (int64_t *)0x0) goto LAB_01d4fefb;
        FUN_00d50b00();
        local_a4 = 0;
      }
      local_118 = 0;
      FUN_00d50b00();
      local_118 = '\x01';
      local_120 = this_ptr;
      (**(code **)(*plVar17 + 0x400))(0);
      plVar17 = local_40;
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar4[6] != 0) {
        FUN_01d48390();
        FUN_01d481c0();
      }
      fVar22 = *(float *)((int64_t)plVar4 + 0x1c) * *(float *)(plVar4 + 9);
      if (fVar22 <= 0.0) {
        *(void*)(this_ptr + 0x19) = 1;
      }
      else {
        fVar24 = *(float *)(plVar4 + 9) * *(float *)(plVar4 + 4);
        if (fVar24 <= 0.0) {
          iVar16 = 1;
          do {
            fVar24 = (float)iVar16;
            iVar16 = iVar16 + 1;
          } while (fVar24 < fVar22);
        }
        else {
          fVar25 = 0.0;
          lVar19 = 0;
          iVar16 = 0;
          do {
            local_a4 = iVar16;
            local_38 = lVar19;
            if (fVar22 <= fVar25) {
              iVar16 = 1;
              do {
                if ((char)in_R11 == -1) {
                  uVar14 = 0;
                  cVar6 = (char)uVar11;
                  uVar11 = 0;
                  if (cVar6 != '\0') goto LAB_01d50232;
                }
                fVar25 = (float)iVar16;
                iVar16 = iVar16 + 1;
              } while (fVar25 < fVar24);
            }
            else {
              fVar25 = 0.0;
              iVar13 = 1;
              iVar16 = local_a4;
              do {
                bVar7 = (byte)uVar11;
                uVar11 = uVar11 & 0xffffffff;
                bVar10 = bVar7;
                if (fVar24 <= fVar25) {
LAB_01d500e2:
                  if ((char)in_R11 == -1) {
                    if ((bVar7 != 0) || (bVar10 != 0)) {
                      *(void*)(this_ptr + 0x19) = 0;
                      goto joined_r0x01d50ad7;
                    }
                    in_R11 = 0xff;
                    bVar10 = 0;
                    bVar7 = 0;
                    uVar14 = 0;
                    cVar6 = (char)uVar11;
                    uVar11 = 0;
                    if (cVar6 != '\0') goto LAB_01d50232;
                  }
                }
                else {
                  lVar19 = *(int64_t *)(plVar4[10] + 8);
                  lVar12 = (int64_t)iVar16;
                  bVar7 = *(byte *)(lVar19 + lVar12);
                  bVar10 = *(byte *)(lVar19 + 1 + lVar12);
                  bVar1 = *(byte *)(lVar19 + 2 + lVar12);
                  uVar11 = (uint64_t)bVar1;
                  bVar2 = *(byte *)(lVar19 + 3 + lVar12);
                  in_R11 = (uint64_t)bVar2;
                  if (1 < (byte)(bVar2 + 1)) {
                    uVar15 = (ushort)bVar2;
                    uVar11 = (uint64_t)
                             (((uint)bVar1 * 0x100 - (uint)bVar1 & 0xffff) / (uint)uVar15);
                    bVar10 = (byte)(((uint)bVar10 * 0xff) / (uint)uVar15);
                    bVar7 = (byte)(((uint)(ushort)bVar7 * 0x100 - (uint)(ushort)bVar7 & 0xffff) /
                                  (uint)uVar15);
                    lVar19 = plVar4[5];
                    if (lVar19 != 0) goto LAB_01d50087;
                    goto LAB_01d500e2;
                  }
                  lVar19 = plVar4[5];
                  if (lVar19 == 0) goto LAB_01d500e2;
LAB_01d50087:
                  if ((((char)uVar11 !=
                        (char)(int)((double)(*(float *)(lVar19 + 0x18) * g_02394220) +
                                   g_023942d0)) ||
                      (bVar10 != (byte)(int)((double)(*(float *)(lVar19 + 0x14) * g_02394220) +
                                            g_023942d0))) ||
                     (bVar7 != (byte)(int)((double)(*(float *)(lVar19 + 0x10) * g_02394220) +
                                          g_023942d0))) goto LAB_01d500e2;
                  in_R11 = 0;
                }
                uVar14 = 0;
                if (((bVar7 != (byte)uVar11) || ((byte)uVar11 != bVar10)) || (bVar7 != bVar10))
                goto LAB_01d50232;
                fVar25 = (float)iVar13;
                iVar13 = iVar13 + 1;
                iVar16 = iVar16 + (int)fVar22 * 4;
              } while (fVar25 < fVar24);
            }
            fVar25 = (float)(int)(local_38 + 1);
            lVar19 = local_38 + 1;
            iVar16 = local_a4 + 4;
          } while (fVar25 < fVar22);
        }
        uVar14 = 1;
LAB_01d50232:
        *(void*)(this_ptr + 0x19) = uVar14;
joined_r0x01d50ad7:
        if (plVar4 == (int64_t *)0x0) goto LAB_01d5024a;
      }
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(this_ptr + 0x19) = 1;
  }
LAB_01d5024a:
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar17 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01d50aa3:
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01948fc0
// ============================================================
// Function: FUN_01948fc0
// Address: 01948fc0
// Size: 4884 bytes
// Class: QualityScoring
// String references:
//   "_decomposedAudioSignalsAreInvalid"
//   "_itemDetectionVisualQualityLimit"
//   "_attackItemDetectionVisualQualityLimit"
//   "_audioSourceAttackItems"
//   "_audioSourcePotentialAttackItems"
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01948fc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_260;
  char local_258;
  int64_t local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
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
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)(this_ptr + 0x538);
  if (*(int64_t *)(this_ptr + 0x538) != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_2e0 = g_027bf410;
    if (g_027bf410 != 0) {
      FUN_00d50b00();
    }
    local_2d8 = '\x01';
    local_258 = 0;
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_258 = '\x01';
    local_260 = lVar5;
    FUN_00d41040(&local_260,&local_2e0);
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d8 != '\0') && (local_2e0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_2d0 = g_027e0908;
    if (g_027e0908 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = '\x01';
    local_238 = 0;
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_238 = '\x01';
    plVar8 = &local_240;
    local_240 = lVar5;
    FUN_00d41040(plVar8,&local_2d0);
    pVar6 = (void*)plVar8;
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2c8 != '\0') && (local_2d0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    plVar8 = (int64_t *)(this_ptr + 0x140);
    local_228 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x140) + 0x10))();
    FUN_00d50b00();
    local_228 = '\x01';
    local_218 = 0;
    local_220 = *plVar1;
    local_230 = plVar8;
    if (local_220 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019492e3;
LAB_019492d2:
      local_c8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019492d2;
LAB_019492e3:
      lVar5 = 0;
    }
    local_c8 = '\x01';
    plVar7 = &local_d0;
    local_d0 = lVar5;
    FUN_00cbadd0(plVar7,&local_220);
    pVar6 = (void*)plVar7;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
      (**(code **)(*local_230 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_208 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_208 = '\x01';
    local_1f8 = 0;
    local_200 = *plVar1;
    local_210 = plVar8;
    if (local_200 != 0) {
      FUN_00d50b00();
    }
    local_1f8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949459;
LAB_01949448:
      local_b8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_01949448;
LAB_01949459:
      lVar5 = 0;
    }
    local_b8 = '\x01';
    plVar7 = &local_c0;
    local_c0 = lVar5;
    FUN_00cbadd0(plVar7,&local_200);
    pVar6 = (void*)plVar7;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
      (**(code **)(*local_210 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1e8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1e8 = '\x01';
    local_1d8 = 0;
    local_1e0 = *plVar1;
    local_1f0 = plVar8;
    if (local_1e0 != 0) {
      FUN_00d50b00();
    }
    local_1d8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019495cf;
LAB_019495be:
      local_a8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019495be;
LAB_019495cf:
      lVar5 = 0;
    }
    local_a8 = '\x01';
    plVar7 = &local_b0;
    local_b0 = lVar5;
    FUN_00cbadd0(plVar7,&local_1e0);
    pVar6 = (void*)plVar7;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
      (**(code **)(*local_1f0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1c8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1c8 = '\x01';
    local_1b8 = 0;
    local_1c0 = *plVar1;
    local_1d0 = plVar8;
    if (local_1c0 != 0) {
      FUN_00d50b00();
    }
    local_1b8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949745;
LAB_01949734:
      local_98 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_01949734;
LAB_01949745:
      lVar5 = 0;
    }
    local_98 = '\x01';
    plVar7 = &local_a0;
    local_a0 = lVar5;
    FUN_00cbadd0(plVar7,&local_1c0);
    pVar6 = (void*)plVar7;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
      (**(code **)(*local_1d0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1a8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1a8 = '\x01';
    local_198 = 0;
    local_1a0 = *plVar1;
    local_1b0 = plVar8;
    if (local_1a0 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019498c0;
LAB_019498b2:
      local_88 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019498b2;
LAB_019498c0:
      lVar5 = 0;
    }
    local_88 = '\x01';
    local_90 = lVar5;
    FUN_00cbadd0(&local_90,&local_1a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
      (**(code **)(*local_1b0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar5 = *arg1;
  lVar2 = *plVar1;
  lVar3 = lVar2;
  if (lVar2 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *plVar1 = lVar5;
    lVar3 = lVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = *plVar1;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00d403d0();
  local_188 = 0;
  FUN_00d50b00();
  local_2c0 = g_027bf410;
  local_188 = '\x01';
  local_190 = this_ptr;
  if (g_027bf410 != 0) {
    FUN_00d50b00();
  }
  local_2b8 = '\x01';
  local_178 = 0;
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  local_180 = lVar5;
  FUN_00d41430(&local_180,&local_2c0);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_168 = 0;
  FUN_00d50b00();
  local_2b0 = g_027e0908;
  local_168 = '\x01';
  local_170 = this_ptr;
  if (g_027e0908 != 0) {
    FUN_00d50b00();
  }
  local_2a8 = '\x01';
  local_158 = 0;
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  plVar8 = &local_160;
  local_160 = lVar5;
  FUN_00d41430(plVar8,&local_2b0);
  pVar6 = (void*)plVar8;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_148 = 0;
  plVar8 = (int64_t *)(this_ptr + 0x140);
  (**(code **)(*(int64_t *)(this_ptr + 0x140) + 0x10))();
  FUN_00d50b00();
  local_148 = '\x01';
  local_138 = 0;
  local_140 = *plVar1;
  local_150 = plVar8;
  if (local_140 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949ca2;
LAB_01949c94:
    local_78 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949c94;
LAB_01949ca2:
    lVar5 = 0;
  }
  local_78 = '\x01';
  plVar7 = &local_80;
  local_80 = lVar5;
  FUN_00cbad30(plVar7,&local_140,0x90);
  pVar6 = (void*)plVar7;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
    (**(code **)(*local_150 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_128 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_128 = '\x01';
  local_118 = 0;
  local_120 = *plVar1;
  local_130 = plVar8;
  if (local_120 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949e07;
LAB_01949df9:
    local_68 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949df9;
LAB_01949e07:
    lVar5 = 0;
  }
  local_68 = '\x01';
  plVar7 = &local_70;
  local_70 = lVar5;
  FUN_00cbad30(plVar7,&local_120,0x90);
  pVar6 = (void*)plVar7;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    (**(code **)(*local_130 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_108 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_108 = '\x01';
  local_f8 = 0;
  local_100 = *plVar1;
  local_110 = plVar8;
  if (local_100 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949f6c;
LAB_01949f5e:
    local_58 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949f5e;
LAB_01949f6c:
    lVar5 = 0;
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_100,0x90);
  pVar6 = (void*)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    (**(code **)(*local_110 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_e8 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_e8 = '\x01';
  local_d8 = 0;
  local_e0 = *plVar1;
  local_f0 = plVar8;
  if (local_e0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_0194a0d1;
LAB_0194a0c3:
    local_48 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_0194a0c3;
LAB_0194a0d1:
    lVar5 = 0;
  }
  local_48 = '\x01';
  plVar7 = &local_50;
  local_50 = lVar5;
  FUN_00cbad30(plVar7,&local_e0,0x90);
  pVar6 = (void*)plVar7;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    (**(code **)(*local_f0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_298 = '\x01';
  local_288 = 0;
  local_290 = *plVar1;
  local_2a0 = plVar8;
  if (local_290 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if (lVar5 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x28);
      goto joined_r0x0194a225;
    }
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
joined_r0x0194a225:
    if (lVar5 != 0) {
      local_278 = 0;
      FUN_00d50b00();
      goto LAB_0194a23a;
    }
  }
  lVar5 = 0;
LAB_0194a23a:
  local_278 = '\x01';
  local_280 = lVar5;
  FUN_00cbad30(&local_280,&local_290,0x90);
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
    (**(code **)(*local_2a0 + 0x10))();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bff300
// ============================================================
// Function: FUN_01bff300
// Address: 01bff300
// Size: 2096 bytes
// Class: QualityScoring
// String references:
//   "MUDetectionEditorView"
//   "_attackItemDetectionQualityLimit"
//   "_attackItemDefaultDetectionQualityLimit"
//   "_attackItemDetectionVisualQualityLimit"
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01bff300(void* param_1)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t **pplVar10;
  int64_t *plVar11;
  bool bVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar10 = &local_40;
  FUN_01a13070();
  plVar3 = local_40;
  if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (int64_t *)0x0) {
LAB_01bff35c:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01bff35c;
  }
  plVar3 = *pplVar10;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    local_b8 = 0;
    plVar11 = (int64_t *)0x0;
    plVar3 = *(int64_t **)(this_ptr + 0xe0);
    if (plVar3 == (int64_t *)0x0) goto LAB_01bff97c;
  }
  else {
    pplVar10 = &local_f8;
    FUN_01a13070();
    plVar3 = local_f8;
    if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02714a48 = FUN_000914a0();
      g_02714a30 = "MUDetectionEditorView";
      g_02714a38 = 0x600;
      param_1 = 0x34de90;
      g_02714a40 = FUN_0034de90;
      g_02714a50 = 0;
      ram_0000000002714a58 = 0;
      g_02714a60 = 0;
      g_02714ad8 = 0;
      ram_0000000002714ae0 = 0;
      g_02714ae8 = 0;
      g_02714aea = 1;
      g_02714a68 = 0;
      ram_0000000002714a70 = 0;
      g_02714a78 = 0;
      ram_0000000002714a80 = 0;
      g_02714a88 = 0;
      ram_0000000002714a90 = 0;
      g_02714a98 = 0;
      ram_0000000002714aa0 = 0;
      g_02714aa8 = 0;
      ram_0000000002714ab0 = 0;
      g_02714ab8 = 0;
      ram_0000000002714ac0 = 0;
      g_02714ac8 = 0;
      ram_0000000002714ad0 = 0;
      g_02714af3 = 0;
      g_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (plVar3 == (int64_t *)0x0) {
LAB_01bff3ca:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bff3ca;
    }
    (**(code **)(&UNK_00001668 + **pplVar10))();
    plVar11 = local_40;
    if (local_40 == (int64_t *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((uint64_t)plVar3 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(int64_t **)(this_ptr + 0xe0);
    local_b8 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bff97c;
  }
  if (plVar3 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
    if (plVar11 != (int64_t *)0x0) goto LAB_01bff4ea;
  }
  else {
    local_a8 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = (int64_t *)(this_ptr + 0xb8);
    FUN_00cbb340();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(int64_t **)(this_ptr + 0xe0);
    if (plVar3 != plVar11) {
LAB_01bff4ea:
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0xe0) = plVar11;
      bVar12 = plVar3 != (int64_t *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(int64_t **)(this_ptr + 0xe0);
      }
    }
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_01bff97c;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) goto LAB_01bff97c;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  plVar3 = (int64_t *)(this_ptr + 0xb8);
  local_98 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_a0 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff650;
LAB_01bff65e:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff65e;
LAB_01bff650:
    local_68 = 0;
    FUN_00d50b00();
  }
  local_68 = '\x01';
  plVar7 = &local_70;
  local_70 = lVar5;
  FUN_00cbad30(plVar7,&local_e8,0x90);
  pVar6 = (void*)plVar7;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_88 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  local_90 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff7a9;
LAB_01bff7b7:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff7b7;
LAB_01bff7a9:
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_d8,0x90);
  pVar6 = (void*)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_78 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  local_80 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_01,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff8fc;
LAB_01bff90a:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff90a;
LAB_01bff8fc:
    local_48 = 0;
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar5;
  FUN_00cbad30(&local_50,&local_c8,0x90);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
LAB_01bff97c:
  if (((char)local_b8 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bf95e0
// ============================================================
// Function: FUN_01bf95e0
// Address: 01bf95e0
// Size: 1720 bytes
// Class: QualityScoring
// String references:
//   "MUDetectionEditorView"
//   "_itemDetectionQualityLimit"
//   "_itemDetectionVisualQualityLimit"
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01bf95e0(void* param_1)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t **pplVar10;
  int64_t *plVar11;
  bool bVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar10 = &local_40;
  FUN_01a13070();
  plVar3 = local_40;
  if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (int64_t *)0x0) {
LAB_01bf963c:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01bf963c;
  }
  plVar3 = *pplVar10;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    local_98 = 0;
    plVar11 = (int64_t *)0x0;
    plVar3 = *(int64_t **)(this_ptr + 0xe8);
    if (plVar3 == (int64_t *)0x0) goto LAB_01bf9ae4;
  }
  else {
    pplVar10 = &local_c8;
    FUN_01a13070();
    plVar3 = local_c8;
    if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02714a48 = FUN_000914a0();
      g_02714a30 = "MUDetectionEditorView";
      g_02714a38 = 0x600;
      param_1 = 0x34de90;
      g_02714a40 = FUN_0034de90;
      g_02714a50 = 0;
      ram_0000000002714a58 = 0;
      g_02714a60 = 0;
      g_02714ad8 = 0;
      ram_0000000002714ae0 = 0;
      g_02714ae8 = 0;
      g_02714aea = 1;
      g_02714a68 = 0;
      ram_0000000002714a70 = 0;
      g_02714a78 = 0;
      ram_0000000002714a80 = 0;
      g_02714a88 = 0;
      ram_0000000002714a90 = 0;
      g_02714a98 = 0;
      ram_0000000002714aa0 = 0;
      g_02714aa8 = 0;
      ram_0000000002714ab0 = 0;
      g_02714ab8 = 0;
      ram_0000000002714ac0 = 0;
      g_02714ac8 = 0;
      ram_0000000002714ad0 = 0;
      g_02714af3 = 0;
      g_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (plVar3 == (int64_t *)0x0) {
LAB_01bf96aa:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bf96aa;
    }
    (**(code **)(&UNK_00001668 + **pplVar10))();
    plVar11 = local_40;
    if (local_40 == (int64_t *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((uint64_t)plVar3 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(int64_t **)(this_ptr + 0xe8);
    local_98 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bf9ae4;
  }
  if (plVar3 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
    if (plVar11 != (int64_t *)0x0) goto LAB_01bf97c1;
  }
  else {
    local_88 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_88 = '\x01';
    local_90 = (int64_t *)(this_ptr + 0xb8);
    FUN_00cbb340();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      (**(code **)(*local_90 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(int64_t **)(this_ptr + 0xe8);
    if (plVar3 != plVar11) {
LAB_01bf97c1:
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0xe8) = plVar11;
      bVar12 = plVar3 != (int64_t *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(int64_t **)(this_ptr + 0xe8);
      }
    }
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_01bf9ae4;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) goto LAB_01bf9ae4;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  plVar3 = (int64_t *)(this_ptr + 0xb8);
  local_78 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_80 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bf9917;
LAB_01bf9925:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bf9925;
LAB_01bf9917:
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_b8,0x90);
  pVar6 = (void*)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_68 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  local_70 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bf9a64;
LAB_01bf9a72:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bf9a72;
LAB_01bf9a64:
    local_48 = 0;
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar5;
  FUN_00cbad30(&local_50,&local_a8,0x90);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
LAB_01bf9ae4:
  if (((char)local_98 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01114900
// ============================================================
// Function: FUN_01114900
// Address: 01114900
// Size: 3471 bytes
// Class: QualityScoring
// String references:
//   "bool"
//   "GNUni"
//   "GNFraction"
//   "_detectsChurchModes"
//   "_detectsDetailedModeChanges"
//   "GNInt"
//   "MUDataPointFunction"
//   "_detectsBassNote"
//   "_detectsChordExtensions"
//   "_omitDoubtedThirds"
//   "_detectsSingleMode"
//   "_reflectsPitchSystem"
//   "_detectsPitchSystem"
//   "_assumesLowestPitchAsRoot"
//   "_assumesClosePosition"
//   "_suggestsMissingThird"
//   "_suggestsMissingFifth"
//   "_reflectsBeatStrength"
//   "_reflectsPitch"
//   "_reflectsDynamic"
//   ... +3 more
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01114900(void)

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
  char *pcVar10;
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
  *this_ptr = &g_02601ab0;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01115860();
  *(void*)(this_ptr + 9) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4e) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4f) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xb] = 0x100000000;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115940();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115a30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115b20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  this_ptr[0xf] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  return;
}



// ============================================================
// 01947890
// ============================================================
// Function: FUN_01947890
// Address: 01947890
// Size: 1667 bytes
// Class: QualityScoring
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01947890(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  void* pVar4;
  char *pcVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_ESI == 0) {
    pvVar1 = _pthread_getspecific((void*)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    pvVar1 = _pthread_getspecific((void*)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    lVar3 = local_48;
    pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    local_68 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_38[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_0194d210();
    lVar3 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      pVar4 = (void*)local_68;
    }
    FUN_01320d00();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df30();
    lVar2 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132b1c0(0);
    lVar2 = local_48;
    if (((local_40[0] == '\0') && (local_48 != 0)) &&
       ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    local_70 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_012e6c30();
    local_d0 = lVar3;
    local_c8 = 0;
    FUN_0194e260(uVar6,&local_d0,param_3,param_4,0);
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (void*)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (void*)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    lVar2 = local_60;
    lVar3 = local_78;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    uVar6 = FUN_012c6a20();
    if ((local_50 != '\0') && (local_58 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if (local_70 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (local_68 != 0) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_0194dfd0();
  }
  local_88 = *param_2;
  local_80 = '\0';
  (**(code **)(&g_000017b0 + *this_ptr))(uVar6,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01948420
// ============================================================
// Function: FUN_01948420
// Address: 01948420
// Size: 986 bytes
// Class: QualityScoring
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01948420(void)

{
  char cVar1;
  int64_t lVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int local_48;
  int iStack_44;
  int local_40;
  
  local_50 = *arg1;
  if (*(int *)(local_50 + 0xc) == *(int *)(this_ptr[0xbc] + 0xc)) {
    local_58 = 0;
    local_60 = 0;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    bVar6 = true;
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar2 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_50 + 0xc) <= local_48) break;
      local_70 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar2 * 8);
      local_68 = '\0';
      local_60 = local_70;
      cVar1 = FUN_00d23d70();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        bVar6 = false;
      }
    }
    FUN_00115190();
    if (!bVar6) {
      FUN_00d216c0();
      local_60 = *arg1;
      local_58 = '\0';
      FUN_00d214d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &g_02572358;
      (*g_02572370)();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0xbc] != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        local_40 = 0;
        local_50 = this_ptr[0xbc];
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar2 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_a0 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar2 * 8);
          local_98 = '\0';
          local_60 = local_a0;
          (**(code **)(&UNK_00001698 + *this_ptr))(0,&local_a0);
          lVar2 = local_80;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_70 = lVar2;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar2 = local_50;
        FUN_00115190();
        pVar5 = (void*)lVar2;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = puVar3;
      FUN_019a4000();
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01948a20
// ============================================================
// Function: FUN_01948a20
// Address: 01948a20
// Size: 807 bytes
// Class: QualityScoring
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


int64_t * FUN_01948a20(char *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  char *pcVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0) {
LAB_01948cfa:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar6 = 0;
    do {
      pVar5 = (void*)param_1;
      if (*(int *)(local_70 + 0xc) <= (int)lVar6) {
        FUN_000be170();
        FUN_00d50b20();
        goto LAB_01948cfa;
      }
      lVar1 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar6 * 8);
      FUN_01941c70();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      FUN_00d23310();
      local_38[0] = local_40[0];
      param_1 = local_38;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = param_1;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != local_d0);
    *(void*)(this_ptr + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    FUN_000be170();
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01d4e050
// ============================================================
// Function: FUN_01d4e050
// Address: 01d4e050
// Size: 547 bytes
// Class: QualityScoring
// String references:
//   "GNGraphicsContextState"
//   "GNFilterQuality"
//   "_filterQuality"
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void* FUN_01d4e050(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027f0448 = "_filterQuality";
      g_027f0450 = &g_027eff78;
      g_027f0458 = 0;
      g_027f0460 = 0x6500;
      g_027f0468 = "GNFilterQuality";
      g_027f0470 = &g_027f04e0;
      g_027f0478 = 0;
      ram_00000000027f0480 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027f0448;
}

