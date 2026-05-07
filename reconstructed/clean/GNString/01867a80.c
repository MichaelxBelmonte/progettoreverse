// Function: FUN_01867a80
// Address: 01867a80
// Size: 7234 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01867a80(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  bool bVar7;
  bool bVar8;
  int64_t *plVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  uint32_t uVar15;
  int iVar16;
  int iVar17;
  int64_t lVar18;
  int64_t *plVar19;
  void*puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int64_t lVar24;
  int64_t lVar25;
  uint32_t unaff_ESI;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int64_t this_ptr;
  int iVar30;
  int64_t lVar31;
  uint64_t uVar32;
  bool bVar33;
  bool bVar34;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int local_dc;
  uint32_t local_d8;
  int local_d4;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  uint64_t local_a8;
  char local_a0;
  int64_t local_68;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  lVar18 = *(int64_t *)(this_ptr + 200);
  iVar16 = *(int *)(*(int64_t *)(this_ptr + 0x88) + 0x18);
  local_d4 = iVar16 + 7;
  if (-1 < iVar16) {
    local_d4 = iVar16;
  }
  if (*(int *)(lVar18 + 0xc) < 1) {
    return;
  }
  local_d4 = local_d4 >> 3;
  lVar24 = 0;
  local_d8 = unaff_ESI;
LAB_01867aff:
  plVar9 = local_40;
  lVar18 = *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + lVar24 * 8);
  if (lVar18 != 0) {
    FUN_00d50b00();
  }
  if ((*(int *)(*(int64_t *)(lVar18 + 0x20) + 0xc) != 0) &&
     (lVar25 = *(int64_t *)(**(int64_t **)(*(int64_t *)(lVar18 + 0x20) + 0x10) + 0x10),
     lVar25 != 0)) {
    FUN_00d50b00();
    local_228 = '\0';
    local_230 = lVar25;
    local_c0 = lVar25;
    FUN_018da170();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    local_48 = g_027df900;
    uVar29 = *(uint *)(local_40 + 3);
    local_238 = lVar24;
    if ((uVar29 & 0xfffffffc) == 4) {
      if (g_027df900 != (int64_t *)0x0) {
        FUN_00d50b00();
        uVar29 = *(uint *)(local_40 + 3);
      }
      bVar33 = local_48 != (int64_t *)0x0;
    }
    else {
      bVar33 = false;
      local_48 = (int64_t *)0x0;
    }
    plVar6 = g_027d6a38;
    uVar23 = uVar29 + 3;
    if (-1 < (int)uVar29) {
      uVar23 = uVar29;
    }
    bVar34 = bVar33;
    if ((uVar29 & 0xfffffffc) == 8) {
      lVar24 = 0;
      do {
        if (*(int *)(local_40[2] + lVar24 * 4) == 0) {
          lVar24 = 0;
          goto LAB_01867c50;
        }
        lVar24 = lVar24 + 1;
      } while ((int)uVar23 >> 2 != (int)lVar24);
    }
    goto LAB_01867cd0;
  }
  goto LAB_0186958c;
  while (lVar24 = lVar24 + 1, (int)uVar23 >> 2 != (int)lVar24) {
LAB_01867c50:
    if (*(int *)(local_40[2] + lVar24 * 4) == 2) {
      if (g_027d6a38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (local_48 == plVar6) {
        if (plVar6 != (int64_t *)0x0) {
          bVar34 = true;
        }
        if ((bVar33) && (bVar34 = bVar33, plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar34 = true;
        if ((bVar33) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_48 = plVar6;
        }
        else {
          local_48 = plVar6;
        }
      }
      break;
    }
  }
LAB_01867cd0:
  plVar6 = g_027d6a40;
  uVar29 = *(uint *)(local_40 + 3);
  uVar23 = uVar29 + 3;
  if (-1 < (int)uVar29) {
    uVar23 = uVar29;
  }
  bVar33 = bVar34;
  if ((uVar29 & 0xfffffffc) == 8) {
    lVar24 = 0;
    do {
      if (*(int *)(local_40[2] + lVar24 * 4) == 0) {
        lVar24 = 0;
        goto LAB_01867d20;
      }
      lVar24 = lVar24 + 1;
    } while ((int)uVar23 >> 2 != (int)lVar24);
  }
LAB_01867da0:
  local_218 = '\0';
  local_220 = lVar25;
  FUN_018d88f0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 == (int64_t *)0x0) && (local_48 == (int64_t *)0x0)) {
    local_48 = (int64_t *)0x0;
    goto LAB_0186955d;
  }
  if (local_48 == (int64_t *)0x0) {
    FUN_018d8750();
    if (local_40 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
    }
    else {
      bVar33 = true;
      local_48 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  local_208 = '\0';
  local_1f8 = '\0';
  local_210 = lVar25;
  local_200 = lVar25;
  FUN_018da170();
  local_c8 = 0;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_c8 = '\x01';
  local_d0 = local_a8;
  FUN_018ded80();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = g_02781708;
  if (g_02781708 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_1f0 = plVar6;
  local_1e8 = '\x01';
  cVar11 = (**(code **)(*local_48 + 0x50))();
  lVar24 = g_02781898;
  bVar34 = true;
  if (cVar11 == '\0') {
    if (g_02781898 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar24;
    local_1d8 = '\x01';
    cVar11 = (**(code **)(*local_48 + 0x50))();
    lVar24 = g_02781890;
    bVar34 = true;
    if (cVar11 == '\0') {
      if (g_02781890 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar24;
      local_1c8 = '\x01';
      cVar11 = (**(code **)(*local_48 + 0x50))();
      plVar6 = g_027d6a38;
      bVar34 = true;
      if (cVar11 == '\0') {
        if (g_027d6a38 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_1c0 = plVar6;
        local_1b8 = '\x01';
        cVar11 = (**(code **)(*local_48 + 0x50))();
        plVar6 = g_027d6a40;
        bVar34 = true;
        if (cVar11 == '\0') {
          if (g_027d6a40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_1b0 = plVar6;
          local_1a8 = '\x01';
          cVar11 = (**(code **)(*local_48 + 0x50))();
          plVar6 = g_027df900;
          bVar34 = true;
          if (cVar11 == '\0') {
            if (g_027df900 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_1a0 = plVar6;
            local_198 = '\x01';
            cVar11 = (**(code **)(*local_48 + 0x50))();
            bVar34 = true;
            if (cVar11 == '\0') {
              bVar34 = *(int *)((int64_t)local_40 + 0xc) != 0;
            }
            if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar34) {
    lVar24 = *(int64_t *)(lVar18 + 0xc);
    FUN_00e7cea0();
    uVar15 = FUN_00e7cea0();
    lVar25 = *(int64_t *)(this_ptr + 0x68);
    if (lVar25 != 0) {
      FUN_00d50b00();
    }
    local_240 = 1;
    local_248 = lVar25;
    FUN_0185df90(1,uVar15,&local_248);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar25 != 0) {
      FUN_00d50b20();
    }
    pfVar3 = (float *)local_40[2];
    if (g_02394274 < *pfVar3 || g_02394274 == *pfVar3) {
      if (g_02394274 < pfVar3[1] || g_02394274 == pfVar3[1]) goto LAB_01868281;
LAB_0186837f:
      pfVar3[1] = 1.1754944e-38;
      if (pfVar3[2] <= g_02394274 && g_02394274 != pfVar3[2]) goto LAB_01868293;
LAB_01868398:
      if (g_02394274 < pfVar3[3] || g_02394274 == pfVar3[3]) goto LAB_018682ac;
LAB_018683aa:
      pfVar3[3] = 1.1754944e-38;
      if (pfVar3[4] <= g_02394274 && g_02394274 != pfVar3[4]) goto LAB_018682be;
LAB_018683c3:
      if (g_02394274 < pfVar3[5] || g_02394274 == pfVar3[5]) goto LAB_018682d7;
LAB_018683d5:
      pfVar3[5] = 1.1754944e-38;
      if (pfVar3[6] <= g_02394274 && g_02394274 != pfVar3[6]) goto LAB_018682e9;
LAB_018683ee:
      if (g_02394274 < pfVar3[7] || g_02394274 == pfVar3[7]) goto LAB_01868302;
LAB_01868400:
      pfVar3[7] = 1.1754944e-38;
      if (pfVar3[8] <= g_02394274 && g_02394274 != pfVar3[8]) goto LAB_01868314;
LAB_01868419:
      if (g_02394274 < pfVar3[9] || g_02394274 == pfVar3[9]) goto LAB_0186832d;
LAB_0186842b:
      pfVar3[9] = 1.1754944e-38;
      if (pfVar3[10] <= g_02394274 && g_02394274 != pfVar3[10]) goto LAB_0186833f;
LAB_01868444:
      plVar6 = g_02781708;
      if (pfVar3[0xb] <= g_02394274 && g_02394274 != pfVar3[0xb]) goto LAB_01868456;
    }
    else {
      *pfVar3 = 1.1754944e-38;
      if (pfVar3[1] <= g_02394274 && g_02394274 != pfVar3[1]) goto LAB_0186837f;
LAB_01868281:
      if (g_02394274 < pfVar3[2] || g_02394274 == pfVar3[2]) goto LAB_01868398;
LAB_01868293:
      pfVar3[2] = 1.1754944e-38;
      if (pfVar3[3] <= g_02394274 && g_02394274 != pfVar3[3]) goto LAB_018683aa;
LAB_018682ac:
      if (g_02394274 < pfVar3[4] || g_02394274 == pfVar3[4]) goto LAB_018683c3;
LAB_018682be:
      pfVar3[4] = 1.1754944e-38;
      if (pfVar3[5] <= g_02394274 && g_02394274 != pfVar3[5]) goto LAB_018683d5;
LAB_018682d7:
      if (g_02394274 < pfVar3[6] || g_02394274 == pfVar3[6]) goto LAB_018683ee;
LAB_018682e9:
      pfVar3[6] = 1.1754944e-38;
      if (pfVar3[7] <= g_02394274 && g_02394274 != pfVar3[7]) goto LAB_01868400;
LAB_01868302:
      if (g_02394274 < pfVar3[8] || g_02394274 == pfVar3[8]) goto LAB_01868419;
LAB_01868314:
      pfVar3[8] = 1.1754944e-38;
      if (pfVar3[9] <= g_02394274 && g_02394274 != pfVar3[9]) goto LAB_0186842b;
LAB_0186832d:
      if (g_02394274 < pfVar3[10] || g_02394274 == pfVar3[10]) goto LAB_01868444;
LAB_0186833f:
      pfVar3[10] = 1.1754944e-38;
      plVar6 = g_02781708;
      if (pfVar3[0xb] <= g_02394274 && g_02394274 != pfVar3[0xb]) {
LAB_01868456:
        pfVar3[0xb] = 1.1754944e-38;
        plVar6 = g_02781708;
      }
    }
    g_02781708 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar12 = FUN_00d23d70();
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar19 = g_027d6a38;
    if (g_027d6a38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_190 = plVar19;
    local_188 = '\x01';
    cVar11 = (**(code **)(*local_48 + 0x50))();
    plVar19 = g_027d6a40;
    bVar13 = 1;
    if (cVar11 == '\0') {
      if (g_027d6a40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_180 = plVar19;
      local_178 = '\x01';
      bVar13 = (**(code **)(*local_48 + 0x50))();
      if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar19 = g_02781708;
    bVar13 = bVar13 | bVar12;
    iVar16 = (int)local_40[3];
    iVar21 = iVar16 + 3;
    if (-1 < iVar16) {
      iVar21 = iVar16;
    }
    if (3 < iVar16) {
      lVar25 = 0;
      do {
        if (*(int *)(local_40[2] + lVar25 * 4) == 6) {
          bVar13 = 0;
          break;
        }
        lVar25 = lVar25 + 1;
      } while (iVar21 >> 2 != (int)lVar25);
    }
    if (g_02781708 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_170 = plVar19;
    local_168 = '\x01';
    cVar11 = (**(code **)(*local_48 + 0x50))();
    lVar25 = g_02781898;
    cVar14 = '\x01';
    local_40 = plVar6;
    if (cVar11 == '\0') {
      if (g_02781898 != 0) {
        FUN_00d50b00();
      }
      local_160 = lVar25;
      local_158 = '\x01';
      cVar11 = (**(code **)(*local_48 + 0x50))();
      lVar25 = g_02781890;
      cVar14 = '\x01';
      if (cVar11 == '\0') {
        if (g_02781890 != 0) {
          FUN_00d50b00();
        }
        local_150 = lVar25;
        local_148 = '\x01';
        cVar11 = (**(code **)(*local_48 + 0x50))();
        plVar6 = g_027816f8;
        cVar14 = '\x01';
        if (cVar11 == '\0') {
          if (g_027816f8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_40 = plVar6;
          cVar11 = FUN_00d23d70();
          plVar19 = g_027df950;
          cVar14 = '\x01';
          if (cVar11 == '\0') {
            if (g_027df950 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_40 = plVar19;
            cVar14 = FUN_00d23d70();
            if (plVar19 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar6 = g_027df900;
    if (cVar14 == '\0') {
LAB_018687cc:
      bVar34 = false;
    }
    else {
      iVar16 = (int)plVar9[3];
      iVar21 = iVar16 + 3;
      if (-1 < iVar16) {
        iVar21 = iVar16;
      }
      bVar34 = true;
      if (3 < iVar16) {
        lVar25 = 0;
        do {
          if (*(int *)(plVar9[2] + lVar25 * 4) == 8) goto LAB_018687cc;
          lVar25 = lVar25 + 1;
        } while (iVar21 >> 2 != (int)lVar25);
      }
    }
    if (g_027df900 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_140 = plVar6;
    local_138 = '\x01';
    cVar11 = (**(code **)(*local_48 + 0x50))();
    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar11 != '\0') {
      bVar34 = true;
    }
    lVar25 = *(int64_t *)(this_ptr + 0x98);
    local_68 = 0;
    bVar7 = false;
    if ((lVar25 != 0) && (bVar34 || (bVar13 != 0 || cVar11 != '\0'))) {
      if (*(int *)(lVar25 + 0xc) < 1) {
        local_68 = 0;
        bVar7 = false;
      }
      else {
        uVar32 = 0;
        bVar8 = false;
        do {
          lVar25 = *(int64_t *)(*(int64_t *)(lVar25 + 0x10) + uVar32 * 8);
          if (lVar25 != 0) {
            FUN_00d50b00();
          }
          lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x10);
          local_40 = (int64_t *)
                     CONCAT44(local_40._4_4_,
                              *(void*)(lVar4 + (int64_t)*(int *)(lVar25 + 0xc) * 8));
          local_a8._4_4_ = (int)((uint64_t)lVar24 >> 0x20);
          if (*(int *)(lVar25 + 0x10) < local_d4) {
            local_dc = *(int *)(lVar4 + (int64_t)*(int *)(lVar25 + 0x10) * 8);
            if (uVar32 != 0) goto LAB_0186890e;
LAB_018688ed:
            if ((local_a8._4_4_ == 0) || (cVar14 = FUN_00e7c6b0(), cVar14 != '\0'))
            goto LAB_0186890e;
            FUN_00d50b00();
LAB_018689a8:
            bVar8 = true;
            lVar4 = lVar25;
            bVar10 = false;
LAB_018689b4:
            bVar7 = bVar10;
            lVar31 = lVar4;
            FUN_00d50b20();
LAB_018689bf:
            if (!bVar7) {
              if (lVar31 == 0) {
                local_68 = 0;
                bVar7 = false;
              }
              else if ((*(int *)(*(int64_t *)(lVar31 + 0x18) + 0xc) == 0) ||
                      (local_68 = **(int64_t **)(*(int64_t *)(lVar31 + 0x18) + 0x10),
                      local_68 == 0)) {
                local_68 = 0;
                bVar7 = false;
              }
              else {
                bVar7 = true;
                FUN_00d50b00();
              }
              if ((bVar8) && (lVar31 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01868a9b;
            }
          }
          else {
            uVar5 = *(void*)
                     ((int64_t)*(int *)(*(int64_t *)(this_ptr + 0x88) + 0x18) + -8 + lVar4);
            local_dc = (int)((uint64_t)uVar5 >> 0x20) + (int)uVar5;
            if (uVar32 == 0) goto LAB_018688ed;
LAB_0186890e:
            if ((uVar32 == *(int *)(*(int64_t *)(this_ptr + 0x98) + 0xc) - 1) && (lVar25 != 0)) {
              FUN_00d50b00();
              goto LAB_018689a8;
            }
            if ((((local_a8._4_4_ == 0) || (cVar14 = FUN_00e7c6b0(), cVar14 == '\0')) ||
                (local_a8._4_4_ == 0)) || (cVar14 = FUN_00e7c6b0(), cVar14 != '\0')) {
              bVar7 = true;
              lVar31 = 0;
              lVar4 = 0;
              bVar10 = true;
              if (lVar25 != 0) goto LAB_018689b4;
              goto LAB_018689bf;
            }
            if (lVar25 != 0) {
              FUN_00d50b00();
              goto LAB_018689a8;
            }
          }
          uVar32 = uVar32 + 1;
          lVar25 = *(int64_t *)(this_ptr + 0x98);
        } while ((int64_t)uVar32 < (int64_t)*(int *)(lVar25 + 0xc));
        local_68 = 0;
        bVar7 = false;
      }
    }
LAB_01868a9b:
    iVar16 = FUN_01715480();
    lVar25 = **(int64_t **)(*(int64_t *)(lVar18 + 0x20) + 0x10);
    if (lVar25 != 0) {
      FUN_00d50b00();
    }
    iVar21 = -1;
    bVar12 = 1;
    if (bVar13 != 0 || cVar11 != '\0') {
      iVar22 = iVar16 + 7 >> 0x1f;
      iVar17 = (((uint)((iVar16 + 7) / 6 + iVar22) >> 1) - iVar22) * -0xc + iVar16 + 7;
      iVar17 = (iVar17 >> 0x1f & 0xcU) + iVar17;
      iVar22 = iVar16 + 6 >> 0x1f;
      iVar22 = iVar16 + (((uint)((iVar16 + 6) / 6 + iVar22) >> 1) - iVar22) * -0xc + 6;
      iVar22 = (iVar22 >> 0x1f & 0xcU) + iVar22;
      fVar1 = *(float *)(plVar9[2] + (int64_t)iVar17 * 4);
      fVar2 = *(float *)(plVar9[2] + (int64_t)iVar22 * 4);
      iVar30 = 7;
      if (fVar1 / fVar2 <= g_023908d8) {
        if (fVar2 / fVar1 <= g_023908d8) {
          if (local_68 == 0) goto LAB_01868c93;
          cVar11 = (char)iVar17;
          cVar11 = cVar11 + ((char)((uint)(int)(short)(cVar11 * 0x2b) >> 9) - (cVar11 >> 7)) * -0xc;
          iVar17 = *(int *)(local_68 + 0xc);
          iVar27 = *(int *)(local_68 + 0x10);
          if (iVar27 == 0x24) {
            iVar28 = iVar17 + -2;
            iVar28 = iVar28 + (((uint)(iVar28 / 6 + (iVar28 >> 0x1f)) >> 1) - (iVar28 >> 0x1f)) *
                              -0xc;
            iVar28 = (iVar28 >> 0x1f & 0xcU) + iVar28;
          }
          else {
            iVar28 = iVar17;
            if (iVar27 == 0x18) {
              iVar28 = iVar17 + -7;
              iVar28 = iVar28 + (((uint)(iVar28 / 6 + (iVar28 >> 0x1f)) >> 1) - (iVar28 >> 0x1f)) *
                                -0xc;
              iVar28 = (iVar28 >> 0x1f & 0xcU) + iVar28;
            }
          }
          iVar21 = -1;
          iVar26 = cVar11 + 0xc;
          if (-1 < cVar11) {
            iVar26 = (int)cVar11;
          }
          iVar26 = iVar26 - iVar28;
          iVar26 = iVar26 + (((uint)(iVar26 / 6 + (iVar26 >> 0x1f)) >> 1) - (iVar26 >> 0x1f)) * -0xc
          ;
          uVar29 = (iVar26 >> 0x1f & 0xcU) + iVar26;
          if ((10 < uVar29) || ((0x54aU >> (uVar29 & 0x1f) & 1) == 0)) goto LAB_01868b84;
          cVar11 = (char)iVar22;
          cVar11 = cVar11 + ((char)((uint)(int)(short)(cVar11 * 0x2b) >> 9) - (cVar11 >> 7)) * -0xc;
          if (iVar27 == 0x24) {
            iVar17 = iVar17 + -2;
LAB_018690db:
            iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) *
                              -0xc;
            iVar17 = (iVar17 >> 0x1f & 0xcU) + iVar17;
          }
          else if (iVar27 == 0x18) {
            iVar17 = iVar17 + -7;
            goto LAB_018690db;
          }
          iVar22 = cVar11 + 0xc;
          if (-1 < cVar11) {
            iVar22 = (int)cVar11;
          }
          iVar22 = iVar22 - iVar17;
          iVar22 = iVar22 + (((uint)(iVar22 / 6 + (iVar22 >> 0x1f)) >> 1) - (iVar22 >> 0x1f)) * -0xc
          ;
          uVar29 = (iVar22 >> 0x1f & 0xcU) + iVar22;
          if (uVar29 < 0xb) {
            iVar30 = 6;
            if ((0x54aU >> (uVar29 & 0x1f) & 1) != 0) goto LAB_01868c93;
            goto LAB_01868b84;
          }
        }
        iVar30 = 6;
      }
LAB_01868b84:
      local_130 = local_c0;
      local_128 = '\0';
      FUN_01716260();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      FUN_0171a310();
      plVar19 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar19 = (int64_t)&g_0260d588;
      *(void*)((int64_t)plVar19 + 0xc) = 0;
      plVar19[2] = 0;
      FUN_00d500e0();
      plVar6 = (int64_t *)plVar19[2];
      if (plVar6 != local_40) {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar19[2] = (int64_t)local_40;
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      *(void*)((int64_t)plVar19 + 0xc) = *(void*)(lVar25 + 0xc);
      FUN_00d23370();
      FUN_00d50b20();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      bVar12 = 0;
      iVar21 = iVar30;
      local_40 = plVar19;
    }
LAB_01868c93:
    plVar6 = g_027df900;
    if (g_027df900 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_120 = plVar6;
    local_118 = '\x01';
    bVar13 = (**(code **)(*local_48 + 0x50))();
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar31 = local_c0;
    lVar4 = g_02781890;
    if (bVar34 && (bVar12 & bVar13) == 0) {
      iVar22 = iVar16 + 4 >> 0x1f;
      iVar17 = (((uint)((iVar16 + 4) / 6 + iVar22) >> 1) - iVar22) * -0xc + iVar16 + 4;
      iVar17 = (iVar17 >> 0x1f & 0xcU) + iVar17;
      iVar22 = iVar16 + 3 >> 0x1f;
      iVar22 = iVar16 + (((uint)((iVar16 + 3) / 6 + iVar22) >> 1) - iVar22) * -0xc + 3;
      iVar22 = (iVar22 >> 0x1f & 0xcU) + iVar22;
      fVar1 = *(float *)(plVar9[2] + (int64_t)iVar17 * 4);
      fVar2 = *(float *)(plVar9[2] + (int64_t)iVar22 * 4);
      iVar16 = 4;
      if ((fVar1 / fVar2 <= g_023908d8) && (iVar16 = 3, fVar2 / fVar1 <= g_023908d8)) {
        if (local_68 != 0) {
          cVar11 = (char)iVar17;
          cVar11 = cVar11 + ((char)((uint)(int)(short)(cVar11 * 0x2b) >> 9) - (cVar11 >> 7)) * -0xc;
          iVar17 = *(int *)(local_68 + 0xc);
          iVar30 = *(int *)(local_68 + 0x10);
          if (iVar30 == 0x24) {
            iVar16 = iVar17 + -2;
            iVar16 = iVar16 + (((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) - (iVar16 >> 0x1f)) *
                              -0xc;
            iVar16 = (iVar16 >> 0x1f & 0xcU) + iVar16;
          }
          else {
            iVar16 = iVar17;
            if (iVar30 == 0x18) {
              iVar16 = iVar17 + -7;
              iVar16 = iVar16 + (((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) - (iVar16 >> 0x1f)) *
                                -0xc;
              iVar16 = (iVar16 >> 0x1f & 0xcU) + iVar16;
            }
          }
          iVar27 = cVar11 + 0xc;
          if (-1 < cVar11) {
            iVar27 = (int)cVar11;
          }
          iVar16 = iVar27 - iVar16;
          iVar16 = iVar16 + (((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) - (iVar16 >> 0x1f)) * -0xc
          ;
          uVar29 = (iVar16 >> 0x1f & 0xcU) + iVar16;
          cVar11 = (char)iVar22;
          if ((10 < uVar29) || ((0x54aU >> (uVar29 & 0x1f) & 1) == 0)) {
            cVar14 = cVar11 + ((char)((uint)(int)(short)(cVar11 * 0x2b) >> 9) - (cVar11 >> 7)) *
                              -0xc;
            if (iVar30 == 0x24) {
              iVar16 = iVar17 + -2;
LAB_0186964c:
              iVar16 = iVar16 + (((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) - (iVar16 >> 0x1f)) *
                                -0xc;
              iVar16 = (iVar16 >> 0x1f & 0xcU) + iVar16;
            }
            else {
              iVar16 = iVar17;
              if (iVar30 == 0x18) {
                iVar16 = iVar17 + -7;
                goto LAB_0186964c;
              }
            }
            iVar22 = cVar14 + 0xc;
            if (-1 < cVar14) {
              iVar22 = (int)cVar14;
            }
            iVar22 = iVar22 - iVar16;
            iVar22 = iVar22 + (((uint)(iVar22 / 6 + (iVar22 >> 0x1f)) >> 1) - (iVar22 >> 0x1f)) *
                              -0xc;
            uVar29 = ((iVar22 >> 0x1f & 0xcU) + iVar22) - 1;
            if ((uVar29 < 10) && (iVar16 = 4, (0x2a5U >> (uVar29 & 0x1f) & 1) != 0))
            goto LAB_018691e6;
          }
          if (iVar30 == 0x24) {
            iVar16 = iVar17 + -2;
LAB_01869023:
            iVar16 = iVar16 + (((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) - (iVar16 >> 0x1f)) *
                              -0xc;
            iVar16 = (iVar16 >> 0x1f & 0xcU) + iVar16;
          }
          else {
            iVar16 = iVar17;
            if (iVar30 == 0x18) {
              iVar16 = iVar17 + -7;
              goto LAB_01869023;
            }
          }
          iVar27 = iVar27 - iVar16;
          iVar27 = iVar27 + (((uint)(iVar27 / 6 + (iVar27 >> 0x1f)) >> 1) - (iVar27 >> 0x1f)) * -0xc
          ;
          uVar29 = (iVar27 >> 0x1f & 0xcU) + iVar27;
          if (uVar29 < 0xb) {
            iVar16 = -1;
            if ((0x54aU >> (uVar29 & 0x1f) & 1) == 0) goto LAB_018691e6;
            cVar11 = cVar11 + ((char)((uint)(int)(short)(cVar11 * 0x2b) >> 9) - (cVar11 >> 7)) *
                              -0xc;
            if (iVar30 == 0x24) {
              iVar17 = iVar17 + -2;
LAB_0186915f:
              iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) *
                                -0xc;
              iVar17 = (iVar17 >> 0x1f & 0xcU) + iVar17;
            }
            else if (iVar30 == 0x18) {
              iVar17 = iVar17 + -7;
              goto LAB_0186915f;
            }
            iVar16 = cVar11 + 0xc;
            if (-1 < cVar11) {
              iVar16 = (int)cVar11;
            }
            iVar16 = iVar16 - iVar17;
            iVar16 = iVar16 + (((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) - (iVar16 >> 0x1f)) *
                              -0xc;
            uVar23 = (iVar16 >> 0x1f & 0xcU) + iVar16;
            uVar29 = uVar23 & 0xfffffffd;
            iVar16 = (uint)(uVar29 != 1) * 4 + -1;
            if (uVar23 == 6) {
              iVar16 = -1;
            }
            if (uVar29 == 8) {
              iVar16 = -1;
            }
            goto LAB_018691e6;
          }
        }
        iVar16 = -1;
      }
LAB_018691e6:
      if (g_02781890 != 0) {
        FUN_00d50b00();
      }
      local_110 = lVar4;
      local_108 = '\x01';
      cVar11 = (**(code **)(*local_48 + 0x50))();
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (cVar11 != '\0') {
        iVar16 = 4;
      }
      if (iVar16 != -1) {
        local_100 = lVar31;
        local_f8 = '\0';
        FUN_01716260();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (iVar21 != -1) {
          FUN_0171a310();
        }
        FUN_0171a310();
        plVar19 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar19 = (int64_t)&g_0260d588;
        *(void*)((int64_t)plVar19 + 0xc) = 0;
        plVar19[2] = 0;
        FUN_00d500e0();
        plVar6 = (int64_t *)plVar19[2];
        if (plVar6 != local_40) {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar19[2] = (int64_t)local_40;
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        *(void*)((int64_t)plVar19 + 0xc) = *(void*)(lVar25 + 0xc);
        local_f0 = lVar31;
        local_e8 = '\0';
        FUN_01716260();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if (iVar21 != -1) {
          FUN_0171a310();
        }
        if (iVar16 == 3) {
          FUN_0171a310();
        }
        else {
          FUN_0171a310();
        }
        puVar20 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar20 = &g_0260d588;
        *(void*)((int64_t)puVar20 + 0xc) = 0;
        puVar20[2] = 0;
        uVar15 = FUN_00d500e0();
        plVar6 = (int64_t *)puVar20[2];
        if (plVar6 != local_40) {
          if (local_40 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b00();
          }
          puVar20[2] = local_40;
          if (plVar6 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b20();
          }
        }
        *(void*)((int64_t)puVar20 + 0xc) = *(void*)(lVar25 + 0xc);
        if ((char)local_d8 == '\0') {
          FUN_00d23370();
          FUN_00d23370();
        }
        else {
          FUN_00d23370(uVar15,1);
          FUN_00d23370();
        }
        FUN_00d50b20();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar34 = local_40 != (int64_t *)0x0;
        local_40 = plVar19;
        if (bVar34) {
          FUN_00d50b20();
        }
      }
    }
    local_38 = '\0';
    if (lVar25 != 0) {
      FUN_00d50b20();
    }
    if ((bVar7) && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_a8 = lVar24;
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((plVar9 != (int64_t *)0x0) && (FUN_00d50b20(), plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0186955d:
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar33) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar24 = local_238;
LAB_0186958c:
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  lVar24 = lVar24 + 1;
  lVar18 = *(int64_t *)(this_ptr + 200);
  if (*(int *)(lVar18 + 0xc) <= lVar24) {
    return;
  }
  goto LAB_01867aff;
  while (lVar24 = lVar24 + 1, (int)uVar23 >> 2 != (int)lVar24) {
LAB_01867d20:
    if (*(int *)(local_40[2] + lVar24 * 4) == 10) {
      if (g_027d6a40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (local_48 == plVar6) {
        if (plVar6 != (int64_t *)0x0) {
          bVar33 = true;
        }
        if ((bVar34) && (bVar33 = bVar34, plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar33 = true;
        if ((bVar34) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_48 = plVar6;
        }
        else {
          local_48 = plVar6;
        }
      }
      break;
    }
  }
  goto LAB_01867da0;
}

