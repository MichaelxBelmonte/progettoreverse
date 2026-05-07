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

