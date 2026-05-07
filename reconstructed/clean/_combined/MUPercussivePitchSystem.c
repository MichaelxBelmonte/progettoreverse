// ===================================================================
// MUPercussivePitchSystem — Complete reconstructed pseudocode
// 46 functions
// ===================================================================


// ============================================================
// 01a2b2e0
// ============================================================
// Function: FUN_01a2b2e0
// Address: 01a2b2e0
// Size: 8137 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"

void FUN_01a2b2e0(uint32_t param_1,uint param_2,byte param_3)

{
  void* pVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  void *pvVar12;
  int64_t lVar13;
  uint64_t uVar14;
  void* pVar15;
  void* pVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  int64_t *arg1;
  code **ppcVar20;
  code *pcVar21;
  bool bVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  double dVar28;
  code *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  code *local_120;
  char local_118;
  code *local_110;
  char local_108;
  double local_c0;
  code *local_b8;
  code *local_b0;
  char local_a8;
  int64_t local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  code *local_88;
  char local_80;
  code *local_78;
  uint64_t local_70;
  code *local_68;
  uint local_5c;
  code *local_58;
  code *local_48;
  code *local_40;
  
  FUN_01a295a0();
  pcVar17 = *arg1;
  local_78 = CONCAT44(local_78._4_4_,param_1);
  if (pcVar17 == local_b0) {
    if (((char)arg1[1] == '\0') && (local_b0 != 0x0)) {
      if (local_a8 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01a2b3c2;
    }
    if ((local_a8 != '\0') && (local_b0 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar13 = arg1[1];
    if (local_a8 == '\0') {
      if (local_b0 != 0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_b0;
      if (((char)lVar13 != '\0') && (pcVar17 != 0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_b0;
      if (((char)lVar13 != '\0') && (pcVar17 != 0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01a2b3c2:
    *(void*)(arg1 + 1) = 1;
  }
  local_a0 = *arg1;
  if (local_a0 == 0) {
    return;
  }
  local_a8 = '\0';
  local_b0 = 0x0;
  local_98 = -1;
  iStack_94 = 0;
  local_90 = 0;
  local_68 = 0x0;
  do {
    do {
      if (iStack_94 != 0) {
        if (iStack_94 < 1) {
          iStack_94 = -iStack_94;
        }
        else {
          local_98 = local_98 - iStack_94;
          FUN_00d23690();
          local_90 = local_90 + iStack_94;
          iStack_94 = 0;
        }
      }
      lVar11 = (int64_t)local_98;
      local_98 = local_98 + 1;
      bVar2 = true;
      lVar13 = local_a0;
      if (*(int *)(local_a0 + 0xc) <= local_98) goto LAB_01a2b592;
      lVar13 = *(int64_t *)(local_a0 + 0x10);
      local_b0 = *(code **)(lVar13 + 8 + lVar11 * 8);
      pvVar12 = _pthread_getspecific((void*)lVar13);
      pVar15 = (void*)lVar13;
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar7 = FUN_0125a2d0();
    } while (cVar7 == '\0');
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar7 = FUN_01263cf0();
  } while (cVar7 != '\0');
  local_68 = local_b0;
  if (local_b0 == 0x0) {
    local_68 = 0x0;
    lVar13 = 0;
LAB_01a2b592:
    pVar15 = (void*)lVar13;
    uVar23 = FUN_001159b0();
  }
  else {
    pcVar17 = local_b0;
    if (local_a8 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_a8 = '\0';
    }
    pVar15 = (void*)pcVar17;
    bVar2 = false;
    uVar23 = FUN_001159b0();
  }
  if (local_68 == 0x0) {
    return;
  }
  FUN_01a296f0(uVar23,0);
  pvVar12 = _pthread_getspecific(pVar15);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  local_40 = local_b0;
  if (local_b0 == 0x0) {
    local_40 = 0x0;
    bVar5 = false;
    bVar22 = false;
    local_b8 = 0x0;
    bVar6 = false;
  }
  else {
    pcVar17 = local_b0;
    if (local_a8 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_a8 = '\0';
    }
    pvVar12 = _pthread_getspecific((void*)pcVar17);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    local_b8 = local_88;
    if (local_88 == 0x0) {
      bVar6 = false;
      local_b8 = 0x0;
LAB_01a2b71a:
      bVar22 = local_b8 != 0x0;
      if ((local_80 != '\0') && (local_88 != 0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_80 == '\0') {
        FUN_00d50b00();
        bVar6 = true;
        goto LAB_01a2b71a;
      }
      bVar22 = true;
      bVar6 = true;
    }
    bVar5 = true;
  }
  if ((local_a8 != '\0') && (local_b0 != 0x0)) {
    FUN_00d50b20();
  }
  if (bVar22) {
    ppcVar20 = &local_b0;
    FUN_019d4fe0();
    pcVar17 = local_b0;
    if ((g_027c0160 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      g_0270ab28 = FUN_0015ea50();
      g_0270ab10 = "MUScalePitchSystem";
      g_0270ab18 = 0x78;
      g_0270ab20 = FUN_0015ecf0;
      g_0270ab30 = 0;
      ram_000000000270ab38 = 0;
      g_0270ab40 = 0;
      ram_000000000270ab48 = 0;
      g_0270ab50 = 0;
      ram_000000000270ab58 = 0;
      g_0270ab60 = 0;
      ram_000000000270ab68 = 0;
      g_0270ab70 = 0;
      ram_000000000270ab78 = 0;
      g_0270ab80 = 0;
      ram_000000000270ab88 = 0;
      g_0270ab90 = 0;
      ram_000000000270ab98 = 0;
      g_0270aba0 = 0;
      ram_000000000270aba8 = 0;
      g_0270abb0 = 0;
      ram_000000000270abb8 = 0;
      g_0270abc0 = 0;
      ram_000000000270abc8 = 0;
      g_0270abd0 = 0;
      ___cxa_guard_release();
    }
    if (pcVar17 == 0x0) {
LAB_01a2b7d1:
      ppcVar20 = (code **)&g_02802688;
    }
    else {
      (**(code **)(*(int64_t *)pcVar17 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_01a2b7d1;
    }
    local_48 = *ppcVar20;
    pcVar17 = local_48;
    if (local_48 == 0x0) {
      local_70 = 0;
      local_48 = 0x0;
    }
    else {
      if (*(char *)(ppcVar20 + 1) == '\0') {
        pcVar21 = FUN_00d50b00();
      }
      else {
        *(void*)(ppcVar20 + 1) = 0;
        pcVar21 = local_48;
      }
      local_70 = CONCAT71((int7)((uint64_t)pcVar21 >> 8),1);
    }
    pVar15 = (void*)pcVar17;
    if ((local_a8 != '\0') && (local_b0 != 0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != 0x0) && ((param_2 & 0xfffffffe) == 2)) {
      pvVar12 = _pthread_getspecific(pVar15);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar15 = (void*)local_68;
      }
      local_58 = FUN_0125a280();
      pvVar12 = _pthread_getspecific(pVar15);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar15 = (void*)local_68;
      }
      local_c0 = (double)FUN_01259520();
      if (*arg1 != 0) {
        local_a8 = '\0';
        local_b0 = 0x0;
        local_98 = -1;
        iStack_94 = 0;
        local_90 = 0;
        local_a0 = *arg1;
        while( true ) {
          if (iStack_94 != 0) {
            if (iStack_94 < 1) {
              iStack_94 = -iStack_94;
            }
            else {
              local_98 = local_98 - iStack_94;
              FUN_00d23690();
              local_90 = local_90 + iStack_94;
              iStack_94 = 0;
            }
          }
          lVar13 = (int64_t)local_98;
          local_98 = local_98 + 1;
          if (*(int *)(local_a0 + 0xc) <= local_98) break;
          lVar11 = *(int64_t *)(local_a0 + 0x10);
          local_b0 = *(code **)(lVar11 + 8 + lVar13 * 8);
          pvVar12 = _pthread_getspecific((void*)lVar11);
          pVar15 = (void*)lVar11;
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar7 = FUN_0125a2d0();
          if (cVar7 != '\0') {
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_01263cf0();
            if (cVar7 == '\0') {
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar28 = (double)FUN_0125a280();
              if (dVar28 < (double)local_58) {
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_58 = FUN_0125a280();
              }
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar28 = (double)FUN_01259520();
              if (local_c0 < dVar28) {
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_c0 = (double)FUN_01259520();
              }
            }
          }
        }
        lVar13 = local_a0;
        FUN_001159b0();
        pVar15 = (void*)lVar13;
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar15 = (void*)local_68;
      }
      FUN_01266fe0();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar23 = FUN_012e9900(SUB84((double)local_58 + g_023b1e90,0),
                            (local_c0 - ((double)local_58 + g_023b1e90)) + g_023b2c70);
      pcVar17 = local_b0;
      if (local_a8 == '\0') {
        if (((local_b0 != 0x0) && (uVar23 = FUN_00d50b00(), local_a8 != '\0')) &&
           (local_b0 != 0x0)) {
          uVar23 = FUN_00d50b20();
        }
      }
      else {
        local_a8 = '\0';
      }
      if ((local_80 != '\0') && (local_88 != 0x0)) {
        uVar23 = FUN_00d50b20();
      }
      FUN_01759f40(uVar23,0);
      local_58 = local_b0;
      pcVar21 = local_b0;
      if (local_b0 == 0x0) {
        local_58 = 0x0;
        bVar22 = false;
      }
      else if (local_a8 == '\0') {
        FUN_00d50b00();
        bVar22 = true;
        if ((local_a8 != '\0') && (local_b0 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8 = '\0';
        bVar22 = true;
      }
      pVar15 = (void*)pcVar21;
      if (local_58 == 0x0) {
        bVar3 = false;
        pcVar21 = 0x0;
      }
      else {
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (void*)local_48;
        }
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (void*)local_68;
        }
        FUN_0125a2c0();
        iVar9 = FUN_0173fc90();
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (void*)local_58;
        }
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (void*)local_68;
        }
        FUN_0125a2c0();
        iVar10 = FUN_0173fc90();
        if (iVar10 - iVar9 != 0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = (void*)local_58;
          }
          FUN_0174dc60();
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = (void*)local_58;
          }
          FUN_0173ecc0((float)(iVar10 - iVar9) * g_023908e0);
        }
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017402f0();
        pcVar21 = local_b0;
        if (local_b0 == 0x0) {
          bVar3 = false;
        }
        else if (local_a8 == '\0') {
          FUN_00d50b00();
          bVar3 = true;
          if ((local_a8 != '\0') && (local_b0 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_a8 = '\0';
          bVar3 = true;
        }
      }
      if (pcVar17 != 0x0) {
        FUN_00d50b20();
      }
      goto LAB_01a2b8f9;
    }
  }
  else {
    local_48 = 0x0;
    local_70 = 0;
  }
  pcVar21 = 0x0;
  bVar3 = false;
  bVar22 = false;
  local_58 = 0x0;
LAB_01a2b8f9:
  lVar13 = *arg1;
  if (lVar13 == 0) {
joined_r0x01a2cac7:
    if (!bVar2) {
      FUN_00d50b20();
    }
    if ((bVar3) && (pcVar21 != 0x0)) {
      FUN_00d50b20();
    }
    if ((bVar22) && (local_58 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_48 != 0x0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_b8 != 0x0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_40 != 0x0)) {
      FUN_00d50b20();
    }
    return;
  }
  local_a8 = '\0';
  local_b0 = 0x0;
  local_98 = -1;
  iStack_94 = 0;
  local_90 = 0;
  uVar23 = g_023b1610;
  local_a0 = lVar13;
  uVar24 = g_023b1610;
  if ((char)local_78 == '\0') {
    uVar23 = *(void*)(&g_0241bdc8 + (uint64_t)(param_2 == 2) * 4);
    uVar24 = *(void*)(&g_0241bdc8 + (uint64_t)(param_2 == 2) * 4);
  }
  do {
    local_78 = local_40;
    iVar9 = iStack_94;
    iVar10 = iStack_94;
    bVar4 = bVar5;
    do {
      do {
        do {
          if (iVar10 == 0) {
            iVar10 = 0;
          }
          else if (iVar10 < 1) {
            iVar10 = -iVar10;
            iVar9 = iVar10;
            iStack_94 = iVar10;
          }
          else {
            local_98 = local_98 - iVar10;
            FUN_00d23690(uVar23,iVar10);
            local_90 = local_90 + iVar9;
            iVar10 = 0;
            iVar9 = iVar10;
            iStack_94 = iVar10;
          }
          lVar13 = (int64_t)local_98;
          local_98 = local_98 + 1;
          bVar5 = bVar4;
          if (*(int *)(local_a0 + 0xc) <= local_98) {
            FUN_001159b0();
            local_40 = local_78;
            goto joined_r0x01a2cac7;
          }
          lVar11 = *(int64_t *)(local_a0 + 0x10);
          pcVar17 = *(code **)(lVar11 + 8 + lVar13 * 8);
          local_b0 = pcVar17;
          pvVar12 = _pthread_getspecific((void*)lVar11);
          pVar15 = (void*)lVar11;
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar7 = FUN_0125a2d0();
          uVar23 = extraout_XMM0_Da;
        } while (cVar7 == '\0');
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_01263cf0();
        uVar23 = extraout_XMM0_Da_00;
      } while (cVar7 != '\0');
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar23 = FUN_0125e930();
      pcVar19 = local_78;
      local_40 = local_88;
      pcVar18 = local_88;
      if (local_88 == local_78) {
        if ((bVar4) || (local_88 == 0x0)) {
          local_40 = local_78;
        }
        else {
          bVar5 = true;
          if (local_80 != '\0') {
            local_40 = local_78;
            goto LAB_01a2bbbc;
          }
          uVar23 = FUN_00d50b00();
          local_40 = pcVar19;
          bVar5 = true;
        }
LAB_01a2bba8:
        if ((local_80 != '\0') && (local_88 != 0x0)) {
          uVar23 = FUN_00d50b20();
        }
      }
      else {
        if (local_80 == '\0') {
          if (local_88 != 0x0) {
            uVar23 = FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar4) && (local_78 != 0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_01a2bba8;
        }
        bVar5 = true;
        if ((bVar4) && (local_78 != 0x0)) {
          uVar23 = FUN_00d50b20();
        }
      }
LAB_01a2bbbc:
      local_78 = 0x0;
      iVar10 = iVar9;
      bVar4 = bVar5;
    } while (local_40 == 0x0);
    pvVar12 = _pthread_getspecific((void*)pcVar18);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      pcVar18 = local_40;
    }
    uVar23 = FUN_0152ebe0();
    pcVar19 = local_88;
    if (local_88 == local_b8) {
      if ((!bVar6) && (local_88 != 0x0)) {
        bVar6 = true;
        if (local_80 != '\0') goto LAB_01a2bcd8;
        bVar6 = true;
        uVar23 = FUN_00d50b00();
      }
LAB_01a2bcc4:
      if ((local_80 != '\0') && (local_88 != 0x0)) {
        uVar23 = FUN_00d50b20();
      }
    }
    else {
      if (local_80 == '\0') {
        if (local_88 != 0x0) {
          uVar23 = FUN_00d50b00();
        }
        if ((bVar6) && (local_b8 != 0x0)) {
          uVar23 = FUN_00d50b20();
          local_b8 = pcVar19;
          bVar6 = true;
        }
        else {
          local_b8 = pcVar19;
          bVar6 = true;
        }
        goto LAB_01a2bcc4;
      }
      if ((bVar6) && (local_b8 != 0x0)) {
        uVar23 = FUN_00d50b20();
        local_b8 = pcVar19;
        bVar6 = true;
      }
      else {
        local_b8 = local_88;
        bVar6 = true;
      }
    }
LAB_01a2bcd8:
    local_148 = '\0';
    local_150 = pcVar17;
    uVar14 = FUN_019d4fe0(uVar23,&local_150);
    pcVar17 = local_88;
    uVar14 = CONCAT71((int7)((uint64_t)uVar14 >> 8),g_027c0160);
    uVar23 = extraout_XMM0_Da_01;
    if ((g_027c0160 == '\0') &&
       (uVar14 = ___cxa_guard_acquire(), uVar23 = extraout_XMM0_Da_05, (int)uVar14 != 0)) {
      g_0270ab28 = FUN_0015ea50();
      g_0270ab10 = "MUScalePitchSystem";
      g_0270ab18 = 0x78;
      pcVar18 = FUN_0015ecf0;
      g_0270ab20 = FUN_0015ecf0;
      g_0270ab30 = 0;
      ram_000000000270ab38 = 0;
      g_0270ab40 = 0;
      ram_000000000270ab48 = 0;
      g_0270ab50 = 0;
      ram_000000000270ab58 = 0;
      g_0270ab60 = 0;
      ram_000000000270ab68 = 0;
      g_0270ab70 = 0;
      ram_000000000270ab78 = 0;
      g_0270ab80 = 0;
      ram_000000000270ab88 = 0;
      g_0270ab90 = 0;
      ram_000000000270ab98 = 0;
      g_0270aba0 = 0;
      ram_000000000270aba8 = 0;
      g_0270abb0 = 0;
      ram_000000000270abb8 = 0;
      g_0270abc0 = 0;
      ram_000000000270abc8 = 0;
      g_0270abd0 = 0;
      uVar14 = ___cxa_guard_release();
      uVar23 = extraout_XMM0_Da_06;
    }
    ppcVar20 = (code **)&g_02802688;
    if (pcVar17 != 0x0) {
      (**(code **)(*(int64_t *)pcVar17 + 0x360))();
      uVar14 = FUN_00e85ea0();
      ppcVar20 = &local_88;
      uVar23 = extraout_XMM0_Da_02;
      if ((char)uVar14 == '\0') {
        ppcVar20 = (code **)&g_02802688;
      }
    }
    pcVar17 = *ppcVar20;
    if (pcVar17 == local_48) {
      if (((char)local_70 == '\0') && (pcVar17 != 0x0)) {
        pcVar17 = local_48;
        if (*(char *)(ppcVar20 + 1) != '\0') goto LAB_01a2bd82;
        local_5c = (uint)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
        uVar23 = FUN_00d50b00();
      }
      else {
        local_5c = (uint)local_70;
        pcVar17 = local_48;
      }
    }
    else if (*(char *)(ppcVar20 + 1) == '\0') {
      if (pcVar17 != 0x0) {
        uVar14 = FUN_00d50b00();
        uVar23 = extraout_XMM0_Da_04;
      }
      local_5c = (uint)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
      if (((char)local_70 != '\0') && (local_48 != 0x0)) {
        uVar23 = FUN_00d50b20();
      }
    }
    else {
      if (((char)local_70 != '\0') && (local_48 != 0x0)) {
        uVar14 = FUN_00d50b20();
        uVar23 = extraout_XMM0_Da_03;
      }
LAB_01a2bd82:
      *(void*)(ppcVar20 + 1) = 0;
      local_5c = (uint)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
    }
    local_48 = pcVar17;
    if ((local_80 != '\0') && (local_88 != 0x0)) {
      uVar23 = FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0x0)) {
      uVar23 = FUN_00d50b20();
    }
    pVar15 = (void*)local_40;
    if (local_48 == 0x0) {
      local_110 = local_b0;
      local_108 = '\0';
      FUN_019d4fe0(uVar23,&local_110);
      pcVar17 = local_88;
      if ((g_027c0150 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        g_0270acc8 = FUN_0015ea50();
        g_0270acb0 = "MUPercussivePitchSystem";
        g_0270acb8 = 0x58;
        g_0270acc0 = FUN_0015eca0;
        g_0270acd0 = 0;
        ram_000000000270acd8 = 0;
        g_0270ace0 = 0;
        ram_000000000270ace8 = 0;
        g_0270acf0 = 0;
        ram_000000000270acf8 = 0;
        g_0270ad00 = 0;
        ram_000000000270ad08 = 0;
        g_0270ad10 = 0;
        ram_000000000270ad18 = 0;
        g_0270ad20 = 0;
        ram_000000000270ad28 = 0;
        g_0270ad30 = 0;
        ram_000000000270ad38 = 0;
        g_0270ad40 = 0;
        ram_000000000270ad48 = 0;
        g_0270ad50 = 0;
        ram_000000000270ad58 = 0;
        g_0270ad60 = 0;
        ram_000000000270ad68 = 0;
        g_0270ad70 = 0;
        ___cxa_guard_release();
      }
      ppcVar20 = (code **)&g_02802688;
      if (pcVar17 != 0x0) {
        (**(code **)(*(int64_t *)pcVar17 + 0x360))();
        cVar7 = FUN_00e85ea0();
        ppcVar20 = &local_88;
        if (cVar7 == '\0') {
          ppcVar20 = (code **)&g_02802688;
        }
      }
      pcVar17 = *ppcVar20;
      if (*(char *)(ppcVar20 + 1) == '\0') {
        if (pcVar17 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(ppcVar20 + 1) = 0;
      }
      pVar16 = (void*)ppcVar20;
      if ((local_80 != '\0') && (local_88 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar17 != 0x0) {
        if (param_2 < 2) {
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar12 = _pthread_getspecific(pVar16);
          pcVar19 = pcVar17;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar19 = *(code **)(pcVar17 + ((uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          local_78 = pcVar19;
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = *(code **)(pcVar17 + ((uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125dfa0();
          (**(code **)(*(int64_t *)pcVar17 + 0x3a8))();
          lVar13 = *(int64_t *)local_78;
          (**(code **)(lVar13 + 0x3a0))();
          pVar16 = (void*)lVar13;
          FUN_0125a580();
        }
        else if (param_2 == 2) {
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar12 = _pthread_getspecific(pVar16);
          pcVar19 = pcVar17;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar19 = *(code **)(pcVar17 + ((uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          local_78 = pcVar19;
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = *(code **)(pcVar17 + ((uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125dfa0();
          (**(code **)(*(int64_t *)pcVar17 + 0x3b0))();
          lVar13 = *(int64_t *)local_78;
          (**(code **)(lVar13 + 0x3a0))();
          pVar16 = (void*)lVar13;
          FUN_0125a580();
        }
        FUN_00d50b20();
      }
    }
    else {
      pvVar12 = _pthread_getspecific((void*)pcVar18);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar25 = (float)FUN_0125dfa0();
      pVar16 = (void*)pcVar18;
      if (param_2 < 2) {
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_138 = '\0';
        local_140 = 0;
        pVar16 = (void*)param_3;
        uVar23 = FUN_0173fdf0(fVar25,0,0,0xfff0bdc0);
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific(pVar16);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar16 = pVar15;
        }
        FUN_0152df60();
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a580(uVar23);
      }
      else {
        if (param_2 != 2) {
          if (param_2 != 3) goto LAB_01a2c875;
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar25 = (float)FUN_0125a2c0();
        }
        pvVar12 = _pthread_getspecific((void*)pcVar18);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pcVar18 = local_48;
        }
        iVar9 = FUN_0173fc90(fVar25);
        pvVar12 = _pthread_getspecific((void*)pcVar18);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pcVar18 = local_48;
        }
        uVar23 = FUN_0173fd40(fVar25);
        local_78 = CONCAT44(local_78._4_4_,uVar23);
        pvVar12 = _pthread_getspecific((void*)pcVar18);
        pcVar17 = local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pcVar18 = local_48;
          pcVar17 = *(code **)(local_48 + ((uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
        }
        pVar16 = (void*)pcVar18;
        pvVar12 = _pthread_getspecific(pVar16);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar16 = pVar15;
        }
        FUN_0152e000();
        (**(code **)(*(int64_t *)pcVar17 + 0x3a8))();
        pvVar12 = _pthread_getspecific(pVar16);
        pVar1 = (void*)local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar16 = pVar1;
        }
        FUN_01740240();
        if (local_88 == 0x0) {
          uVar23 = 0;
        }
        else {
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar16 = pVar1;
          }
          FUN_01740240();
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar23 = FUN_01739620();
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0x0)) {
          FUN_00d50b20();
        }
        local_70 = CONCAT44(local_70._4_4_,uVar23);
        if ((char)uVar23 == '\0') {
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar16 = pVar15;
          }
          iVar10 = FUN_0152e220();
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar16 = pVar15;
          }
          iVar8 = FUN_0152e220();
          iVar9 = iVar9 - iVar10;
          fVar25 = fVar25 - (float)(iVar8 * 100);
        }
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_118 = '\0';
        pcVar17 = (uint64_t)param_3;
        local_120 = pcVar21;
        fVar25 = (float)FUN_0173fdf0(fVar25,(uint64_t)local_78 & 0xffffffff,uVar24,iVar9);
        if ((local_118 != '\0') && (local_120 != 0x0)) {
          FUN_00d50b20();
        }
        pVar16 = (void*)pcVar17;
        if (param_2 == 2) {
          pvVar12 = _pthread_getspecific(pVar16);
          pcVar19 = local_48;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = local_48;
            pcVar19 = *(code **)(local_48 + ((uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          pvVar12 = _pthread_getspecific((void*)pcVar17);
          pcVar17 = local_48;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = *(code **)(local_48 + ((uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          (**(code **)(*(int64_t *)pcVar17 + 0x3b0))(fVar25);
          lVar13 = *(int64_t *)pcVar19;
          fVar25 = (float)(**(code **)(lVar13 + 0x3a0))();
          pVar16 = (void*)lVar13;
        }
        if ((char)local_70 == '\0') {
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar16 = pVar15;
          }
          FUN_0152df60();
        }
        if (param_2 == 2) {
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar16 = pVar15;
          }
          FUN_0152df60();
        }
        pvVar12 = _pthread_getspecific(pVar16);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar16 = pVar1;
        }
        fVar26 = (float)FUN_0173fd40(fVar25);
        if (local_78._0_4_ * fVar26 < 0.0) {
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar16 = pVar15;
          }
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar16 = pVar15;
          }
          uVar27 = FUN_0152de00();
          FUN_0152dce0(uVar27 ^ g_023945e0);
        }
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a580(fVar25 + g_02390124);
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a580(fVar25);
      }
    }
LAB_01a2c875:
    pvVar12 = _pthread_getspecific(pVar16);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      pVar16 = pVar15;
    }
    FUN_0152ec70();
    if (param_2 != 3) {
      pvVar12 = _pthread_getspecific(pVar16);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar16 = pVar15;
      }
      FUN_0152df00(g_02390124);
    }
    pvVar12 = _pthread_getspecific(pVar16);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar23 = FUN_0152dfb0();
    local_70 = (uint64_t)local_5c;
  } while( true );
}



// ============================================================
// 01324620
// ============================================================
// Function: FUN_01324620
// Address: 01324620
// Size: 7178 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"
//   "MU12TETPitchSystem"
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"
//   "MUAudioSourcePrincipalItem"
//   "%p::_microtonalPitchSystem"

void FUN_01324620(int64_t *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar14;
  int64_t **pplVar15;
  bool bVar16;
  uint32_t uVar17;
  float fVar18;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a0;
  char local_98;
  uint64_t local_90;
  int64_t *local_88;
  uint64_t local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint local_58;
  int local_48;
  int64_t *local_38;
  
  FUN_00d50f50();
  if (*(int64_t *)(this_ptr + 0x50) != 0) {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01525bc0();
    iVar3 = *(int *)((int64_t)local_60 + 0xc);
    if ((char)local_58 != '\0') {
      FUN_00d50b20();
    }
    if ((iVar3 == 0) && (*(int64_t *)(this_ptr + 0x50) != 0)) {
      *(void*)(this_ptr + 0x50) = 0;
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x58) == 0) {
LAB_01324709:
    plVar13 = *(int64_t **)(this_ptr + 0x50);
  }
  else {
    plVar13 = (int64_t *)0x0;
    if (*(int64_t *)(this_ptr + 0x50) != 0) {
      *(void*)(this_ptr + 0x50) = 0;
      FUN_00d50b20();
      goto LAB_01324709;
    }
  }
  if (plVar13 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      plVar13 = *(int64_t **)(this_ptr + 0x50);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar13 + 0x138))();
    local_b0 = 0;
    local_b8 = *(int64_t *)(this_ptr + 0x50);
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_016cbc90();
    plVar13 = *(int64_t **)(this_ptr + 0x58);
    plVar7 = plVar13;
    if (plVar13 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          goto LAB_013247db;
        }
        FUN_00d50b00();
        param_1 = *(int64_t **)(this_ptr + 0x58);
        *(int64_t **)(this_ptr + 0x58) = local_60;
        plVar7 = local_60;
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar7 = local_60;
LAB_013247db:
        *(int64_t **)(this_ptr + 0x58) = plVar7;
        param_1 = plVar13;
      }
      if (param_1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar7 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x50) != 0) {
      *(void*)(this_ptr + 0x50) = 0;
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x58) == 0) {
    FUN_016c0a70();
    plVar13 = *(int64_t **)(this_ptr + 0x58);
    plVar7 = plVar13;
    if (plVar13 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          goto LAB_01324884;
        }
        FUN_00d50b00();
        param_1 = *(int64_t **)(this_ptr + 0x58);
        *(int64_t **)(this_ptr + 0x58) = local_60;
        plVar7 = local_60;
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar7 = local_60;
LAB_01324884:
        *(int64_t **)(this_ptr + 0x58) = plVar7;
        param_1 = plVar13;
      }
      if (param_1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar7 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    plVar13 = (int64_t *)*arg1;
    FUN_0002c940();
    if (plVar13 == (int64_t *)0x0) {
LAB_01324973:
      param_1 = &g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      param_1 = arg1;
      if (cVar2 == '\0') goto LAB_01324973;
    }
    plVar13 = (int64_t *)*param_1;
    lVar5 = param_1[1];
    if (((char)lVar5 == '\0') || (plVar13 == (int64_t *)0x0)) {
      if (plVar13 == (int64_t *)0x0) goto LAB_01324e0a;
    }
    else {
      FUN_00d50b00();
    }
    lVar10 = g_027bf3e0;
    if (g_027bf3e0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar13 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_027bf3e0;
    if (cVar2 != '\0') {
      if (g_027bf3e0 != 0) {
        FUN_00d50b00();
      }
      iVar3 = (**(code **)(*plVar13 + 0x520))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (iVar3 != 0) {
        FUN_0141ae70();
        plVar7 = *(int64_t **)(this_ptr + 0x148);
        plVar8 = plVar7;
        if (plVar7 != local_60) {
          if ((char)local_58 == '\0') {
            if (local_60 == (int64_t *)0x0) {
              plVar8 = (int64_t *)0x0;
              goto LAB_01324c98;
            }
            FUN_00d50b00();
            param_1 = *(int64_t **)(this_ptr + 0x148);
            *(int64_t **)(this_ptr + 0x148) = local_60;
            plVar8 = local_60;
          }
          else {
            local_58 = local_58 & 0xffffff00;
            plVar8 = local_60;
LAB_01324c98:
            *(int64_t **)(this_ptr + 0x148) = plVar8;
            param_1 = plVar7;
          }
          if (param_1 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar8 = local_60;
          }
        }
        if (((char)local_58 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = g_027bf3e8;
        if (iVar3 == 3) {
          if (g_027bf3e8 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*plVar13 + 0x590))();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar10 = g_027bf3e8;
            if (g_027bf3e8 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar13 + 0x510))();
            FUN_0141abf0();
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    if ((char)lVar5 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b660();
    plVar13 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_013249c5;
      }
    }
    else if (local_60 != (int64_t *)0x0) {
LAB_013249c5:
      lVar5 = g_027bf3f0;
      if (g_027bf3f0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar13 + 0x50))();
      lVar10 = g_027bf3f8;
      cVar1 = '\x01';
      if (cVar2 == '\0') {
        if (g_027bf3f8 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar13 + 0x50))();
        lVar12 = g_027bf400;
        cVar1 = '\x01';
        if (cVar2 == '\0') {
          if (g_027bf400 != 0) {
            FUN_00d50b00();
          }
          cVar1 = (**(code **)(*plVar13 + 0x50))();
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01538fb0();
        if (*(int64_t *)(this_ptr + 0x158) == 0) {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          param_1 = (int64_t *)&g_025eec60;
          *puVar6 = &g_025eec60;
          puVar6[7] = 0;
          puVar6[8] = 0;
          *(void*)(puVar6 + 9) = 0;
          (*g_025eec78)();
          lVar5 = *(int64_t *)(this_ptr + 0x158);
          *(void**)(this_ptr + 0x158) = puVar6;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01538fb0();
      }
      FUN_00d50b20();
    }
  }
LAB_01324e0a:
  pVar11 = (void*)param_1;
  local_58 = 1;
  local_60 = &g_024c5048;
  uVar17 = FUN_00d50b00();
  pplVar14 = &local_a0;
  FUN_00d8cb40(uVar17,&local_60);
  plVar13 = local_a0;
  if (local_98 == '\0') {
    if (((local_a0 != (int64_t *)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
       (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = '\0';
  }
  local_60 = &g_024c5048;
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  local_d0 = plVar13;
  uVar17 = (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
  local_130 = plVar13;
  local_128 = '\0';
  pplVar15 = &local_60;
  FUN_000175c0(uVar17,&local_130);
  plVar13 = local_60;
  FUN_0015ea50();
  if (plVar13 == (int64_t *)0x0) {
LAB_01324eef:
    pplVar15 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01324eef;
  }
  plVar13 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_a0 = plVar13;
    local_98 = 1;
  }
  else {
    local_a0 = plVar13;
    local_98 = 1;
    *(void*)(pplVar15 + 1) = 0;
  }
  local_98 = '\x01';
  local_a0 = plVar13;
  if (((char)local_58 != '\0') && (local_98 = '\x01', local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((g_0278c570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027c3448 = FUN_0015ea50();
    g_027c3430 = "MU12TETPitchSystem";
    g_027c3438 = 0x68;
    pVar11 = 0x15ec50;
    g_027c3440 = FUN_0015ec50;
    g_027c3450 = 0;
    ram_00000000027c3458 = 0;
    g_027c3460 = 0;
    ram_00000000027c3468 = 0;
    g_027c3470 = 0;
    ram_00000000027c3478 = 0;
    g_027c3480 = 0;
    ram_00000000027c3488 = 0;
    g_027c3490 = 0;
    ram_00000000027c3498 = 0;
    g_027c34a0 = 0;
    ram_00000000027c34a8 = 0;
    g_027c34b0 = 0;
    ram_00000000027c34b8 = 0;
    g_027c34c0 = 0;
    ram_00000000027c34c8 = 0;
    g_027c34d0 = 0;
    ram_00000000027c34d8 = 0;
    g_027c34e0 = 0;
    ram_00000000027c34e8 = 0;
    g_027c34f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (int64_t *)0x0) {
LAB_01324fe3:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01324fe3;
  }
  plVar13 = local_a0;
  cVar2 = *(char *)(pplVar14 + 1);
  if ((cVar2 == '\0') || (*pplVar14 == (int64_t *)0x0)) {
    if (*pplVar14 != (int64_t *)0x0) goto LAB_01325010;
    if ((g_027c0150 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_0270acc8 = FUN_0015ea50();
      g_0270acb0 = "MUPercussivePitchSystem";
      g_0270acb8 = 0x58;
      pVar11 = 0x15eca0;
      g_0270acc0 = FUN_0015eca0;
      g_0270acd0 = 0;
      ram_000000000270acd8 = 0;
      g_0270ace0 = 0;
      ram_000000000270ace8 = 0;
      g_0270acf0 = 0;
      ram_000000000270acf8 = 0;
      g_0270ad00 = 0;
      ram_000000000270ad08 = 0;
      g_0270ad10 = 0;
      ram_000000000270ad18 = 0;
      g_0270ad20 = 0;
      ram_000000000270ad28 = 0;
      g_0270ad30 = 0;
      ram_000000000270ad38 = 0;
      g_0270ad40 = 0;
      ram_000000000270ad48 = 0;
      g_0270ad50 = 0;
      ram_000000000270ad58 = 0;
      g_0270ad60 = 0;
      ram_000000000270ad68 = 0;
      g_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar13 == (int64_t *)0x0) {
LAB_01325133:
      pplVar14 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01325133;
      pplVar14 = &local_a0;
    }
    plVar7 = local_a0;
    plVar13 = *pplVar14;
    local_88 = (int64_t *)CONCAT71(local_88._1_7_,*(char *)(pplVar14 + 1));
    if ((*(char *)(pplVar14 + 1) != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b00();
LAB_013252ea:
      FUN_0173c6e0();
      local_38 = local_60;
      plVar7 = local_60;
      if (local_60 == (int64_t *)0x0) {
        local_38 = (int64_t *)0x0;
        local_90 = 0;
      }
      else {
        plVar8 = local_60;
        if ((char)local_58 == '\0') {
          plVar8 = (int64_t *)FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            local_90 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
            FUN_00d50b20();
            goto LAB_0132534b;
          }
        }
        local_90 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
      }
LAB_0132534b:
      pvVar4 = _pthread_getspecific((void*)plVar7);
      plVar8 = local_38;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar7 = local_38;
        plVar8 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pvVar4 = _pthread_getspecific((void*)plVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar13 + 0x3f0))();
      lVar5 = *plVar8;
      (**(code **)(lVar5 + 0x3f8))();
      pVar11 = (void*)lVar5;
      if ((char)local_88 == '\0') {
        local_80 = local_90;
      }
      else {
        FUN_00d50b20();
        local_80 = local_90;
      }
      goto LAB_01325232;
    }
    if (plVar13 != (int64_t *)0x0) goto LAB_013252ea;
    if ((g_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_0270ab28 = FUN_0015ea50();
      g_0270ab10 = "MUScalePitchSystem";
      g_0270ab18 = 0x78;
      pVar11 = 0x15ecf0;
      g_0270ab20 = FUN_0015ecf0;
      g_0270ab30 = 0;
      ram_000000000270ab38 = 0;
      g_0270ab40 = 0;
      ram_000000000270ab48 = 0;
      g_0270ab50 = 0;
      ram_000000000270ab58 = 0;
      g_0270ab60 = 0;
      ram_000000000270ab68 = 0;
      g_0270ab70 = 0;
      ram_000000000270ab78 = 0;
      g_0270ab80 = 0;
      ram_000000000270ab88 = 0;
      g_0270ab90 = 0;
      ram_000000000270ab98 = 0;
      g_0270aba0 = 0;
      ram_000000000270aba8 = 0;
      g_0270abb0 = 0;
      ram_000000000270abb8 = 0;
      g_0270abc0 = 0;
      ram_000000000270abc8 = 0;
      g_0270abd0 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (int64_t *)0x0) {
LAB_01325465:
      pplVar14 = (int64_t **)&g_02802688;
      if (g_02802688 == 0) goto LAB_013254be;
LAB_01325481:
      local_38 = local_a0;
      if (local_a0 == (int64_t *)0x0) goto LAB_013254be;
      local_80 = CONCAT71((int7)((uint64_t)pplVar14 >> 8),local_98);
      if (local_98 != '\0') {
        local_90 = 0;
        FUN_00d50b00();
      }
      goto LAB_01325232;
    }
    local_90 = 0;
    (**(code **)(*plVar7 + 0x360))();
    local_90 = 0;
    pVar11 = 0;
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01325465;
    pplVar14 = &local_a0;
    if (local_a0 != (int64_t *)0x0) goto LAB_01325481;
LAB_013254be:
    local_80 = 0;
LAB_013254c4:
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_01510030();
    if (local_60 == (int64_t *)0x0) {
      bVar16 = true;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_0150eb60();
      bVar16 = local_70 == (int64_t *)0x0;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_90 = CONCAT44(local_90._4_4_,(int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1));
    if (bVar16) {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150cac0();
    }
  }
  else {
    FUN_00d50b00();
LAB_01325010:
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014fdd70();
    plVar13 = local_60;
    local_38 = local_60;
    plVar7 = local_60;
    if (local_60 == (int64_t *)0x0) {
      pvVar4 = _pthread_getspecific(0);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd00();
      if ((char)local_58 == '\0') {
        if (local_60 == (int64_t *)0x0) goto LAB_013251c1;
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_60 == (int64_t *)0x0) {
LAB_013251c1:
        local_80 = 0;
        local_38 = (int64_t *)0x0;
        goto LAB_013251e3;
      }
      FUN_0173c6e0();
      local_38 = local_60;
      plVar7 = local_60;
      if (local_60 == (int64_t *)0x0) {
        local_38 = (int64_t *)0x0;
        local_80 = 0;
      }
      else {
        local_80 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
    else {
      plVar8 = local_60;
      if ((char)local_58 == '\0') {
        plVar8 = (int64_t *)FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          plVar8 = (int64_t *)FUN_00d50b20();
        }
      }
      local_80 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
      pvVar4 = _pthread_getspecific((void*)plVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar7 = plVar13;
      }
      local_80 = 1;
      FUN_0174bd90();
    }
LAB_013251e3:
    pvVar4 = _pthread_getspecific((void*)plVar7);
    plVar13 = local_38;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar7 = local_38;
      plVar13 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar11 = (void*)plVar7;
    (**(code **)(*plVar13 + 0x3f8))();
    if (cVar2 != '\0') {
      FUN_00d50b20();
    }
LAB_01325232:
    if (local_38 == (int64_t *)0x0) goto LAB_013254c4;
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_120 = local_38;
    local_118 = '\0';
    FUN_0150bf50();
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = local_90 & 0xffffffff00000000;
  }
  local_58 = 1;
  local_60 = &g_024c5048;
  uVar17 = FUN_00d50b00();
  FUN_00d8cb40(uVar17,&local_60);
  plVar13 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  local_60 = &g_024c5048;
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
  local_110 = plVar13;
  local_108 = '\0';
  pplVar14 = &local_60;
  FUN_000175c0();
  plVar7 = local_60;
  if ((g_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    local_78 = plVar13;
    g_0270ab28 = FUN_0015ea50();
    g_0270ab10 = "MUScalePitchSystem";
    g_0270ab18 = 0x78;
    pVar11 = 0x15ecf0;
    g_0270ab20 = FUN_0015ecf0;
    g_0270ab30 = 0;
    ram_000000000270ab38 = 0;
    g_0270ab40 = 0;
    ram_000000000270ab48 = 0;
    g_0270ab50 = 0;
    ram_000000000270ab58 = 0;
    g_0270ab60 = 0;
    ram_000000000270ab68 = 0;
    g_0270ab70 = 0;
    ram_000000000270ab78 = 0;
    g_0270ab80 = 0;
    ram_000000000270ab88 = 0;
    g_0270ab90 = 0;
    ram_000000000270ab98 = 0;
    g_0270aba0 = 0;
    ram_000000000270aba8 = 0;
    g_0270abb0 = 0;
    ram_000000000270abb8 = 0;
    g_0270abc0 = 0;
    ram_000000000270abc8 = 0;
    g_0270abd0 = 0;
    ___cxa_guard_release();
    plVar13 = local_78;
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_013256c4;
  }
  pplVar14 = (int64_t **)&g_02802688;
LAB_013256c4:
  plVar7 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = '\0';
    local_100 = plVar7;
    FUN_0150bf50();
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_026f6de8;
  plVar8 = (int64_t *)*arg1;
  if (g_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar5;
  local_c0 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if (iVar3 < 1) {
    iVar3 = 5;
    if ((*(int64_t *)(this_ptr + 0x1f8) == 0) &&
       (iVar3 = 6, *(int64_t *)(this_ptr + 0x200) == 0)) {
      if (*(int64_t *)(this_ptr + 0x148) == 0) {
        iVar3 = 0;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar11);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_0141bab0();
      }
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == 3) {
      lVar5 = *(int64_t *)(this_ptr + 200);
      if (lVar5 != 0) {
        local_58 = local_58 & 0xffffff00;
        local_60 = (int64_t *)0x0;
        local_48 = -1;
        local_88 = plVar7;
        local_78 = plVar13;
        while( true ) {
          lVar10 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_48) break;
          lVar12 = *(int64_t *)(lVar5 + 0x10);
          local_60 = *(int64_t **)(lVar12 + 8 + lVar10 * 8);
          pvVar4 = _pthread_getspecific((void*)lVar12);
          pVar11 = (void*)lVar12;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc000();
          plVar13 = local_70;
          if (local_68 == '\0') {
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_013259a0;
            }
LAB_01325a00:
            bVar16 = true;
          }
          else {
            if (local_70 == (int64_t *)0x0) goto LAB_01325a00;
LAB_013259a0:
            pvVar4 = _pthread_getspecific(pVar11);
            if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            bVar16 = false;
            (**(code **)(*plVar13 + 0x470))();
          }
          pvVar4 = _pthread_getspecific(pVar11);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bbde0();
          if (!bVar16) {
            FUN_00d50b20();
          }
        }
        FUN_0131c8b0();
        plVar13 = local_78;
        plVar7 = local_88;
      }
      *(void*)(this_ptr + 0x1a8) = 1;
    }
  }
  else if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = g_026f6de8;
  plVar8 = (int64_t *)*arg1;
  if (g_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar5;
  local_e8 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((iVar3 < 2) && (lVar5 = *(int64_t *)(this_ptr + 200), lVar5 != 0)) {
    local_88 = plVar7;
    local_78 = plVar13;
    local_58 = local_58 & 0xffffff00;
    local_60 = (int64_t *)0x0;
    local_48 = -1;
LAB_01325b2b:
    while( true ) {
      lVar10 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) break;
      plVar13 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar10 * 8);
      local_60 = plVar13;
      if ((g_027c0170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_02790158 = FUN_007ef2d0();
        g_02790140 = "MUAudioSourcePrincipalItem";
        g_02790148 = 0x138;
        g_02790150 = FUN_010fe5c0;
        g_02790160 = 0;
        ram_0000000002790168 = 0;
        g_02790170 = 0;
        ram_0000000002790178 = 0;
        g_02790180 = 0;
        ram_0000000002790188 = 0;
        g_02790190 = 0;
        ram_0000000002790198 = 0;
        g_027901a0 = 0;
        ram_00000000027901a8 = 0;
        g_027901b0 = 0;
        ram_00000000027901b8 = 0;
        g_027901c0 = 0;
        ram_00000000027901c8 = 0;
        g_027901d0 = 0;
        ram_00000000027901d8 = 0;
        g_027901e0 = 0;
        ram_00000000027901e8 = 0;
        g_027901f0 = 0;
        ram_00000000027901f8 = 0;
        g_02790200 = 0;
        ___cxa_guard_release();
      }
      pplVar14 = (int64_t **)&g_02802688;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar14 = &local_60;
        if (cVar2 == '\0') {
          pplVar14 = (int64_t **)&g_02802688;
        }
      }
      plVar13 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') goto LAB_01325bd0;
      *(void*)(pplVar14 + 1) = 0;
      if (plVar13 != (int64_t *)0x0) goto LAB_01325be1;
    }
    FUN_0131c8b0();
    plVar13 = local_78;
    plVar7 = local_88;
  }
  lVar5 = g_026f6de8;
  plVar8 = (int64_t *)*arg1;
  if (g_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar5;
  local_d8 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (iVar3 < 3) {
    FUN_01327070();
    *(void*)(this_ptr + 0x1a8) = 1;
  }
  plVar8 = local_d0;
  if (*(float *)(this_ptr + 0x78) < *(float *)(this_ptr + 0x8c)) {
    *(float *)(this_ptr + 0x8c) = *(float *)(this_ptr + 0x78);
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_80 != '\0' && (char)local_90 == '\0') {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_01325bd0:
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b00();
LAB_01325be1:
    pVar11 = (void*)pplVar14;
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d1d00();
    if (local_70 == (int64_t *)0x0) {
      bVar16 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      bVar16 = true;
      if (((cVar2 == '\0') && (plVar13 != *(int64_t **)(this_ptr + 0x118))) &&
         (plVar13 != *(int64_t **)(this_ptr + 0x128))) {
        bVar16 = plVar13 == *(int64_t **)(this_ptr + 0x120);
      }
      bVar16 = (bool)(bVar16 ^ 1);
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014bc1c0();
      if (fVar18 < *(float *)(this_ptr + 0x78)) {
        pvVar4 = _pthread_getspecific(pVar11);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        plVar13 = local_70;
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_01326e80();
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  goto LAB_01325b2b;
}



// ============================================================
// 01bab160
// ============================================================
// Function: FUN_01bab160
// Address: 01bab160
// Size: 5703 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "MUPercussivePitchSystem"

void FUN_01bab160(uint64_t param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t **pplVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  undefined7 uVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t *plVar11;
  int iVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t *plVar14;
  uint uVar15;
  uint64_t uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int64_t *local_res8;
  uint32_t local_res10;
  int64_t *local_res18;
  int64_t *local_res20;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  uint8_t local_230;
  int64_t *local_228;
  uint8_t local_220;
  int64_t local_218;
  uint8_t local_210;
  int64_t *local_208;
  uint8_t local_200;
  int64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  float local_1c4;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  int local_dc;
  int64_t *local_d8;
  char local_d0;
  float local_c8;
  float local_c4;
  uint64_t local_c0;
  int64_t *local_b8;
  char local_b0 [8];
  int64_t *local_a8;
  uint64_t local_a0;
  int local_98;
  int local_8c;
  int64_t *local_88;
  uint64_t local_80;
  float local_78;
  float local_74;
  int64_t *local_70;
  uint local_64;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  local_248 = *this_ptr;
  local_240 = 0;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_01ba9e60(param_1,&local_248);
  plVar11 = local_60;
  if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_70 = plVar11;
  if ((*(int *)(*this_ptr + 0xc) == 0) || (plVar11 == (int64_t *)0x0)) {
    if ((int64_t *)*local_f0 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*local_f0 + 0x998))();
      plVar1 = (int64_t *)*local_f0;
      FUN_00e9aaa0();
      local_1a8 = local_60;
      local_1a0 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_1a0 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((int64_t *)*local_e8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*local_e8 + 0x998))();
      plVar1 = (int64_t *)*local_e8;
      FUN_00e9aaa0();
      local_198 = local_60;
      local_190 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_190 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((int64_t *)*local_res8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*local_res8 + 0x998))();
      plVar1 = (int64_t *)*local_res8;
      FUN_00e9aaa0();
      local_1c0 = local_60;
      local_1b8 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_1b8 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01bac7ab;
  }
  local_230 = 0;
  local_238 = *this_ptr;
  FUN_01baad70();
  if ((int64_t *)*local_f0 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*local_f0 + 0x998))();
  }
  if ((int64_t *)*local_e8 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*local_e8 + 0x998))();
  }
  if (((int64_t *)*local_res8 != (int64_t *)0x0) && (*local_res18 != 0)) {
    (**(code **)(*(int64_t *)*local_res8 + 0x998))();
    plVar11 = (int64_t *)*local_res18;
    FUN_00c9fe20();
    plVar1 = local_60;
    local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_58[0]);
    pplVar10 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar10 = &local_d8;
    }
    *(char *)pplVar10 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_38 = plVar11;
    FUN_00d23310();
    plVar11 = local_60;
    local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_58[0]);
    pplVar10 = &local_b8;
    pplVar4 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = pplVar10;
    }
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)pplVar10);
    plVar13 = plVar11;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar13 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar13 + 0x390))();
    fVar18 = (float)_exp2f(fVar18 * g_023941f4);
    (**(code **)(*local_38 + 0x3c8))(fVar18 * g_023941f8);
    if (((char)local_b8 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = (int64_t *)*local_res18;
    FUN_00c9fe20();
    plVar1 = local_60;
    pplVar10 = &local_d8;
    if (local_58[0] != '\0') {
      pplVar10 = (int64_t **)local_58;
    }
    local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_58[0]);
    *(char *)pplVar10 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    plVar13 = local_60;
    pplVar10 = &local_b8;
    pplVar4 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = pplVar10;
    }
    local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_58[0]);
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)pplVar10);
    plVar14 = plVar13;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar14 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar14 + 0x398))();
    fVar18 = (float)_exp2f(fVar18 * g_023941f4);
    (**(code **)(*plVar11 + 0x3d8))(fVar18 * g_023941f8);
    if (((char)local_b8 != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar11 = local_70;
  if (*this_ptr == 0) {
    local_c0 = 0;
    local_c8 = g_02391074;
    local_c4 = g_02391074;
    local_78 = g_02391078;
    local_74 = g_02391078;
    local_38 = (int64_t *)0x0;
    local_80 = 0;
    local_88 = (int64_t *)0x0;
    cVar3 = '\0';
LAB_01bac0e2:
    plVar1 = (int64_t *)*local_f0;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00e99dd0();
      local_168 = local_60;
      local_160 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_160 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_dc = -0x80000000;
    local_8c = 0x7fffffff;
    local_74 = g_02391078;
    local_78 = g_02391078;
    local_c4 = g_02391074;
    local_c8 = g_02391074;
    local_48._4_4_ = 0;
    uVar15 = 0;
    local_88 = (int64_t *)0x0;
    local_80 = 0;
    local_38 = (int64_t *)0x0;
    local_c0 = 0;
    local_50 = *this_ptr;
    while( true ) {
      cVar3 = (char)uVar15;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar12 = -local_48._4_4_;
        }
        else {
          iVar12 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar12);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar12 = 0;
        }
        local_48 = CONCAT44(iVar12,(int)local_48);
      }
      lVar6 = (int64_t)(int)local_48;
      iVar12 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      if (*(int *)(local_50 + 0xc) <= iVar12) break;
      plVar1 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar6 * 8);
      local_b8 = plVar1;
      local_60 = plVar1;
      FUN_0006e1c0();
      pplVar10 = &g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar10 = &local_b8;
        if (cVar3 == '\0') {
          pplVar10 = &g_02802688;
        }
      }
      if (*pplVar10 != (int64_t *)0x0) {
        local_1b0 = (int64_t *)0x0;
        FUN_00c9fe20();
        plVar1 = local_b8;
        local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_b0[0]);
        pplVar10 = (int64_t **)local_b0;
        if (local_b0[0] == '\0') {
          pplVar10 = &local_d8;
        }
        *(void*)pplVar10 = 0;
        if ((local_b0[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_d8 == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01bab8b1;
          }
        }
        else if (plVar1 != (int64_t *)0x0) {
LAB_01bab8b1:
          local_b0[0] = '\0';
          local_b8 = (int64_t *)0x0;
          local_a8 = plVar1;
          local_a0 = 0xffffffff;
          local_98 = 0;
          while( true ) {
            lVar6 = (int64_t)(int)local_a0;
            iVar12 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar12);
            bVar2 = true;
            if (*(int *)((int64_t)local_a8 + 0xc) <= iVar12) break;
            local_1d8 = *(int64_t **)(local_a8[2] + 8 + lVar6 * 8);
            local_1d0 = '\0';
            local_b8 = local_1d8;
            FUN_01baacc0(local_a8[2],&local_1d8);
            local_d8 = local_60;
            local_d0 = '\0';
            uVar7 = FUN_00d23d70();
            cVar3 = (char)uVar7;
            if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            plVar13 = local_b8;
            if (cVar3 != '\0') {
              if (local_b8 != (int64_t *)0x0) {
                if (local_b0[0] == '\0') {
                  uVar7 = FUN_00d50b00();
                }
                else {
                  local_b0[0] = '\0';
                }
                local_1b0 = plVar13;
                local_f8 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                bVar2 = false;
                FUN_01bb3e20();
                if (plVar1 == (int64_t *)0x0) goto LAB_01baba93;
                goto LAB_01baba8b;
              }
              break;
            }
            if (local_a0._4_4_ != 0) {
              if (local_a0._4_4_ < 1) {
                iVar12 = -local_a0._4_4_;
              }
              else {
                local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - local_a0._4_4_);
                FUN_00d23690();
                local_98 = local_98 + local_a0._4_4_;
                iVar12 = 0;
              }
              local_a0 = CONCAT44(iVar12,(int)local_a0);
            }
          }
          plVar13 = (int64_t *)0x0;
          local_f8 = 0;
          FUN_01bb3e20();
          if (plVar1 != (int64_t *)0x0) {
LAB_01baba8b:
            FUN_00d50b20();
          }
LAB_01baba93:
          plVar11 = local_70;
          if (plVar13 != (int64_t *)0x0) {
            bVar17 = local_88 != (int64_t *)0x0;
            if (!bVar17) {
              local_88 = plVar13;
            }
            local_64 = uVar15 & 0xff;
            pVar9 = 0;
            if (!bVar17) {
              local_64 = 0;
            }
            if (!(bool)(bVar17 | bVar2)) {
              local_64 = (uint)CONCAT71((int7)((uint64_t)local_88 >> 8),1);
              pVar9 = 0;
              FUN_00d50b00();
              local_88 = plVar13;
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar7 = FUN_0125e930();
            plVar11 = local_38;
            uVar8 = (undefined7)((uint64_t)plVar1 >> 8);
            if (local_b8 == local_38) {
              if (((char)local_80 == '\0') && (local_b8 != (int64_t *)0x0)) {
                if (local_b0[0] != '\0') {
                  uVar8 = (undefined7)((uint64_t)uVar7 >> 8);
                  goto joined_r0x01babb82;
                }
                uVar16 = CONCAT71(uVar8,1);
                FUN_00d50b00();
              }
              else {
                uVar16 = local_80 & 0xffffffff;
              }
LAB_01babbcb:
              if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_80 = uVar16 & 0xffffffff;
              if (plVar11 == (int64_t *)0x0) goto LAB_01babce5;
LAB_01babbf5:
              local_38 = plVar11;
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152ebe0();
              plVar11 = local_b8;
              if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 == (int64_t *)0x0) goto LAB_01babceb;
              if ((g_027c0150 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
                g_0270acc8 = FUN_0015ea50();
                g_0270acb0 = "MUPercussivePitchSystem";
                g_0270acb8 = 0x58;
                g_0270acc0 = FUN_0015eca0;
                g_0270acd0 = 0;
                ram_000000000270acd8 = 0;
                g_0270ace0 = 0;
                ram_000000000270ace8 = 0;
                g_0270acf0 = 0;
                ram_000000000270acf8 = 0;
                g_0270ad00 = 0;
                ram_000000000270ad08 = 0;
                g_0270ad10 = 0;
                ram_000000000270ad18 = 0;
                g_0270ad20 = 0;
                ram_000000000270ad28 = 0;
                g_0270ad30 = 0;
                ram_000000000270ad38 = 0;
                g_0270ad40 = 0;
                ram_000000000270ad48 = 0;
                g_0270ad50 = 0;
                ram_000000000270ad58 = 0;
                g_0270ad60 = 0;
                ram_000000000270ad68 = 0;
                g_0270ad70 = 0;
                ___cxa_guard_release();
              }
              (**(code **)(*plVar13 + 0x360))();
              cVar3 = FUN_00e85ea0();
              plVar1 = local_1b0;
              plVar11 = local_1b0;
              if (cVar3 == '\0') {
                plVar11 = g_02802688;
              }
              if (plVar11 == (int64_t *)0x0) {
                pvVar5 = _pthread_getspecific(0);
                pVar9 = (void*)plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  pVar9 = (void*)local_38;
                }
                FUN_0152ebe0();
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar12 = FUN_01507f00();
                if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar5 = _pthread_getspecific((void*)plVar11);
                pVar9 = (void*)plVar11;
                plVar11 = plVar1;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125dfa0();
                iVar12 = (**(code **)(*plVar11 + 0x3a8))();
              }
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1c4 = (float)FUN_0125a2c0();
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar18 = (float)FUN_0152e000();
              local_c0 = (uint64_t)((int)local_c0 + 1);
              if (iVar12 < local_8c) {
                local_8c = iVar12;
              }
              fVar18 = local_1c4 - fVar18;
              if (local_dc < iVar12) {
                local_dc = iVar12;
              }
              fVar19 = local_1c4;
              if (local_74 <= local_1c4) {
                fVar19 = local_74;
              }
              fVar21 = local_1c4;
              if (local_1c4 <= local_c4) {
                fVar21 = local_c4;
              }
              fVar20 = fVar18;
              if (local_78 <= fVar18) {
                fVar20 = local_78;
              }
              if (fVar18 <= local_c8) {
                fVar18 = local_c8;
              }
              plVar11 = local_70;
              local_c8 = fVar18;
              local_c4 = fVar21;
              local_78 = fVar20;
              local_74 = fVar19;
              uVar15 = local_64;
              if (bVar2 || plVar1 == (int64_t *)0x0) goto LAB_01bab796;
            }
            else {
              plVar11 = local_b8;
              if (local_b0[0] == '\0') {
                if (local_b8 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                uVar16 = CONCAT71(uVar8,1);
                if (((char)local_80 != '\0') && (local_38 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01babbcb;
              }
              if (((char)local_80 != '\0') && (local_38 != (int64_t *)0x0)) {
                uVar7 = FUN_00d50b20();
              }
              uVar8 = (undefined7)((uint64_t)uVar7 >> 8);
joined_r0x01babb82:
              local_80 = CONCAT71(uVar8,1);
              if (plVar11 != (int64_t *)0x0) goto LAB_01babbf5;
LAB_01babce5:
              local_38 = (int64_t *)0x0;
LAB_01babceb:
              plVar11 = local_70;
              uVar15 = local_64;
              if ((bool)(bVar2 | plVar13 == (int64_t *)0x0)) goto LAB_01bab796;
            }
            FUN_00d50b20();
            plVar11 = local_70;
            uVar15 = local_64;
          }
        }
      }
LAB_01bab796:
    }
    FUN_002d7220();
    lVar6 = g_027e1380;
    if (local_8c != local_dc) goto LAB_01bac0e2;
    plVar1 = (int64_t *)*local_f0;
    if ((int)local_c0 == 1) {
      if (plVar1 != (int64_t *)0x0) {
        local_228 = local_88;
        local_220 = 0;
        if (g_027e1380 != 0) {
          FUN_00d50b00();
        }
        local_218 = lVar6;
        local_210 = 1;
        FUN_01ba9920(&local_218,local_8c,1,local_res10);
        local_188 = local_60;
        local_180 = 0;
        if (local_58[0] == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58[0] = '\0';
        }
        plVar11 = local_70;
        local_180 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      local_c0 = 1;
    }
    else if (plVar1 != (int64_t *)0x0) {
      local_208 = local_88;
      local_200 = 0;
      if (g_027e1380 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar6;
      local_1f0 = 1;
      FUN_01ba9920(&local_1f8,local_8c,1,local_res10);
      local_178 = local_60;
      local_170 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      plVar11 = local_70;
      local_170 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_78 != local_c8) || (NAN(local_78) || NAN(local_c8))) {
    plVar1 = (int64_t *)*local_e8;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00e99dd0();
      local_138 = local_60;
      local_130 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_130 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    plVar1 = (int64_t *)*local_e8;
    if ((int)local_c0 == 1) {
      local_c0 = 1;
      if ((plVar1 != (int64_t *)0x0) && ((int64_t *)*local_res20 != (int64_t *)0x0)) {
        (**(code **)(*(int64_t *)*local_res20 + 0x378))(local_78);
        local_158 = local_60;
        local_150 = 0;
        if (local_58[0] == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58[0] = '\0';
        }
        local_150 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((plVar1 != (int64_t *)0x0) && ((int64_t *)*local_res20 != (int64_t *)0x0)) {
      (**(code **)(*(int64_t *)*local_res20 + 0x378))(local_78);
      local_148 = local_60;
      local_140 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_140 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (int64_t *)*local_res8;
  if ((plVar1 != (int64_t *)0x0) &&
     (plVar13 = (int64_t *)*local_res18, plVar13 != (int64_t *)0x0)) {
    if ((local_74 != local_c4) || (NAN(local_74) || NAN(local_c4))) {
      FUN_00e99dd0();
      local_108 = local_60;
      local_100 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_100 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((int)local_c0 == 1) {
      fVar18 = (float)_exp2f(local_74 * g_023941f4);
      (**(code **)(*plVar13 + 0x378))(fVar18 * g_023941f8);
      local_128 = local_60;
      local_120 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_120 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      fVar18 = (float)_exp2f(local_74 * g_023941f4);
      (**(code **)(*plVar13 + 0x378))(fVar18 * g_023941f8);
      local_118 = local_60;
      local_110 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_110 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((cVar3 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01bac7ab:
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01515040
// ============================================================
// Function: FUN_01515040
// Address: 01515040
// Size: 4434 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01515040(uint64_t param_1,void*param_2,uint64_t param_3,int64_t *param_4)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  byte bVar12;
  void* pVar13;
  int64_t *in_RCX;
  int64_t *plVar14;
  void*puVar15;
  int64_t *plVar16;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar17;
  undefined7 uVar18;
  uint64_t uVar19;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  void*local_res8;
  uint8_t local_res10;
  char local_res18;
  char local_res20;
  uint64_t local_218;
  uint8_t local_210;
  uint64_t local_208;
  uint8_t local_200;
  uint64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  uint8_t local_1e0;
  uint64_t local_1d8;
  uint8_t local_1d0;
  uint64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  uint64_t local_1a8;
  uint8_t local_1a0;
  uint64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  uint64_t local_178;
  uint8_t local_170;
  uint64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  uint64_t local_148;
  uint8_t local_140;
  int64_t *local_138;
  uint8_t local_130;
  uint64_t local_128;
  int64_t *local_120;
  uint64_t local_118;
  uint64_t local_110;
  int64_t *local_108;
  uint64_t local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint32_t local_d4;
  int64_t local_d0;
  char local_c8;
  uint64_t local_c0;
  int64_t *local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  uint32_t local_7c;
  uint64_t local_78;
  int64_t *local_70;
  int64_t local_68;
  void*local_60;
  int64_t *local_50;
  char local_38;
  
  lVar10 = *arg1;
  local_120 = in_RCX;
  local_a8 = param_4;
  local_78 = param_1;
  local_60 = param_2;
  pvVar6 = _pthread_getspecific((void*)in_RCX);
  if (pvVar6 != (void *)0x0) {
    lVar10 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar10 + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar10 + 0x50);
      if (lVar7 == 0) {
        lVar10 = 0;
        goto LAB_01515137;
      }
      pvVar6 = _pthread_getspecific((void*)in_RCX);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar10 + 0x50);
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      lVar10 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    lVar10 = *(int64_t *)(lVar7 + 0x80);
  }
  else {
    lVar10 = *(int64_t *)(lVar10 + 0x80);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
LAB_01515137:
  local_68 = lVar10;
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0124b580();
  (**(code **)(*plVar8 + 0x18))();
  if (lVar10 == 0) {
    uVar19 = 0;
  }
  else {
    local_90 = '\0';
    local_98 = 0;
    local_d4 = 0xffffffff;
    local_108 = (int64_t *)(this_ptr + 0x78);
    bVar1 = true;
    local_118 = param_3 >> 0x20;
    local_110 = (uint64_t)local_a8 >> 0x20;
    puVar15 = local_60;
    local_128 = param_3;
    while( true ) {
      pvVar6 = _pthread_getspecific((void*)in_RCX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      in_RCX = local_a8;
      cVar2 = FUN_01252960(local_a8,param_3,&local_98,&local_88);
      if (cVar2 == '\0') break;
      if (local_98 != 0) {
        uVar11 = extraout_XMM0_Qa;
        if (((uint64_t)local_88 >> 0x20 == 0) && (local_118 != 0)) {
          local_218 = *puVar15;
          local_210 = 0;
          local_88 = (int64_t *)FUN_01514010(0,&local_218);
          uVar11 = extraout_XMM0_Qa_00;
        }
        if ((local_b0._4_4_ == 0) && (local_110 != 0)) {
          local_208 = *puVar15;
          local_200 = 0;
          local_b0 = (int64_t *)FUN_01514010(uVar11,&local_208);
        }
        plVar17 = local_120;
        local_1f8 = *puVar15;
        local_1f0 = 0;
        local_1e8 = *local_120;
        local_1e0 = 0;
        local_1d8 = *local_res8;
        local_1d0 = 0;
        local_88 = (int64_t *)FUN_01514120(local_78,&local_1f8,&local_1d8,local_res10);
        local_1c8 = *puVar15;
        local_1c0 = 0;
        local_1b8 = *plVar17;
        local_1b0 = 0;
        local_1a8 = *local_res8;
        local_1a0 = 0;
        local_b8 = (int64_t *)FUN_01514120(local_78,&local_1c8,&local_1a8,local_res10);
        plVar17 = local_88;
        param_3 = local_128;
        in_RCX = (int64_t *)((uint64_t)local_88 >> 0x20);
        local_b0 = local_b8;
        if (((in_RCX == (int64_t *)0x0) || ((uint64_t)local_b8 >> 0x20 == 0)) ||
           (cVar2 = FUN_00e7c020(), puVar15 = local_60, cVar2 != '\0')) {
          puVar15 = local_60;
          lVar10 = local_98;
          pvVar6 = _pthread_getspecific((void*)in_RCX);
          lVar7 = local_98;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar10 = lVar7, lVar9 != 0)) {
            lVar10 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_00d51d20();
          if ((local_38 == '\0') && (plVar17 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          pVar13 = (void*)in_RCX;
          plVar14 = plVar17;
          if (local_res20 != '\0') {
            local_70 = plVar17;
            lVar7 = *arg1;
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *arg1;
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            if (*(int64_t *)(lVar7 + 0x78) == 0) {
              do {
                lVar9 = *(int64_t *)(lVar7 + 0x50);
                if (lVar9 == 0) goto LAB_01515608;
                pvVar6 = _pthread_getspecific((void*)in_RCX);
                if (pvVar6 != (void *)0x0) {
                  lVar9 = *(int64_t *)(lVar7 + 0x50);
                  lVar7 = FUN_00e8b990();
                  if (lVar7 != 0) {
                    lVar9 = *(int64_t *)
                             (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                  }
                }
                lVar7 = lVar9;
              } while (*(int64_t *)(lVar9 + 0x78) == 0);
              if (*(int64_t *)(lVar9 + 0x78) != 0) goto LAB_0151554f;
LAB_01515608:
              uVar11 = 0;
              local_50 = (int64_t *)0x0;
            }
            else {
              if (*(int64_t *)(lVar7 + 0x78) == 0) goto LAB_01515608;
LAB_0151554f:
              FUN_00d50b00();
              FUN_00d50b20();
              lVar7 = *arg1;
              pvVar6 = _pthread_getspecific((void*)in_RCX);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *arg1;
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (void*)in_RCX;
              if (*(int64_t *)(lVar7 + 0x78) == 0) {
                do {
                  pVar13 = (void*)in_RCX;
                  lVar9 = *(int64_t *)(lVar7 + 0x50);
                  if (lVar9 == 0) {
                    bVar1 = true;
                    lVar7 = 0;
                    goto LAB_01515637;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar9 = *(int64_t *)(lVar7 + 0x50);
                    lVar7 = FUN_00e8b990();
                    if (lVar7 != 0) {
                      lVar9 = *(int64_t *)
                               (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                    }
                  }
                  pVar13 = (void*)in_RCX;
                  lVar7 = lVar9;
                } while (*(int64_t *)(lVar9 + 0x78) == 0);
                lVar7 = *(int64_t *)(lVar9 + 0x78);
              }
              else {
                lVar7 = *(int64_t *)(lVar7 + 0x78);
              }
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              bVar1 = false;
LAB_01515637:
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01822e80();
              local_50 = plVar17;
              in_RCX = plVar17;
              if (plVar17 == (int64_t *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar18 = (undefined7)((uint64_t)lVar10 >> 8);
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  uVar11 = CONCAT71(uVar18,1);
                }
                else {
                  local_38 = '\0';
                  uVar11 = CONCAT71(uVar18,1);
                }
              }
              if (!bVar1 && lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            plVar14 = local_108;
            lVar10 = this_ptr;
            local_100 = uVar11;
            if (*local_108 == 0) {
              do {
                pVar13 = (void*)in_RCX;
                lVar7 = *(int64_t *)(lVar10 + 0x50);
                if (lVar7 == 0) {
                  local_c0 = 0;
                  plVar17 = (int64_t *)0x0;
                  goto LAB_0151589a;
                }
                pvVar6 = _pthread_getspecific(pVar13);
                if (pvVar6 != (void *)0x0) {
                  lVar7 = *(int64_t *)(lVar10 + 0x50);
                  lVar10 = FUN_00e8b990();
                  if (lVar10 != 0) {
                    lVar7 = *(int64_t *)
                             (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                  }
                }
                lVar10 = lVar7;
              } while (*(int64_t *)(lVar7 + 0x78) == 0);
              plVar14 = (int64_t *)(lVar7 + 0x78);
            }
            pVar13 = (void*)in_RCX;
            if (*plVar14 == 0) {
              local_c0 = 0;
              plVar17 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              uVar11 = FUN_00d50b20();
              pVar13 = (void*)in_RCX;
              lVar10 = this_ptr;
              if (*local_108 == 0) {
                do {
                  pVar13 = (void*)in_RCX;
                  lVar7 = *(int64_t *)(lVar10 + 0x50);
                  if (lVar7 == 0) {
                    local_7c = (uint32_t)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
                    lVar10 = 0;
                    plVar14 = (int64_t *)0x0;
                    goto LAB_01515799;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar7 = *(int64_t *)(lVar10 + 0x50);
                    lVar10 = FUN_00e8b990();
                    if (lVar10 != 0) {
                      lVar7 = *(int64_t *)
                               (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                    }
                  }
                  uVar11 = 0;
                  pVar13 = (void*)in_RCX;
                  lVar10 = lVar7;
                } while (*(int64_t *)(lVar7 + 0x78) == 0);
                lVar10 = *(int64_t *)(lVar7 + 0x78);
                plVar14 = (int64_t *)(lVar7 + 0x78);
              }
              else {
                lVar10 = *local_108;
                plVar14 = local_108;
              }
              if (lVar10 != 0) {
                FUN_00d50b00();
              }
              local_7c = 0;
LAB_01515799:
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01822e80();
              if (plVar17 == (int64_t *)0x0) {
                local_c0 = 0;
              }
              else {
                uVar18 = (undefined7)((uint64_t)plVar14 >> 8);
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  local_c0 = CONCAT71(uVar18,1);
                }
                else {
                  local_c0 = CONCAT71(uVar18,1);
                }
              }
              bVar12 = (byte)local_7c | lVar10 == 0;
              pVar13 = CONCAT31((int3)((uint)local_7c >> 8),bVar12);
              if (bVar12 == 0) {
                FUN_00d50b20();
              }
            }
LAB_0151589a:
            puVar15 = local_60;
            plVar14 = local_70;
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f8 = local_50;
            local_f0 = '\0';
            local_e0 = '\0';
            local_e8 = plVar17;
            FUN_017380d0();
            if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_c0 != '\0') && (plVar17 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_100 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = '\0';
          in_RCX = local_b0;
          FUN_012502a0(local_b0,local_88,1);
          bVar1 = false;
          if (plVar14 != (int64_t *)0x0) {
            bVar1 = false;
            FUN_00d50b20();
          }
        }
      }
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
LAB_01515e1c:
      uVar19 = 0;
    }
    else {
      local_98 = FUN_00e7bdb0();
      lVar10 = local_68;
      local_b8 = (int64_t *)FUN_00e7bdb0();
      plVar17 = local_120;
      if (local_118 != 0) {
        local_198 = *local_60;
        local_190 = 0;
        local_188 = *local_120;
        local_180 = 0;
        local_178 = *local_res8;
        local_170 = 0;
        in_RCX = &local_188;
        local_98 = FUN_01514120(local_78,&local_198,&local_178,local_res10);
      }
      if (local_110 != 0) {
        local_168 = *local_60;
        local_160 = 0;
        local_158 = *plVar17;
        local_150 = 0;
        local_148 = *local_res8;
        local_140 = 0;
        in_RCX = &local_158;
        local_b8 = (int64_t *)FUN_01514120(local_78,&local_168,&local_148,local_res10);
      }
      uVar3 = 2;
      if (local_res18 == '\0') {
        pvVar6 = _pthread_getspecific((void*)in_RCX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0124ae30();
      }
      local_78 = CONCAT44(local_78._4_4_,uVar3);
      param_3 = param_3 | (uint64_t)local_a8;
      plVar17 = (int64_t *)(this_ptr + 0x80);
      lVar7 = this_ptr;
      if (*(int64_t *)(this_ptr + 0x80) == 0) {
        do {
          lVar9 = *(int64_t *)(lVar7 + 0x50);
          if (lVar9 == 0) goto LAB_01515cdb;
          pvVar6 = _pthread_getspecific((void*)in_RCX);
          if (pvVar6 != (void *)0x0) {
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(int64_t *)(lVar9 + 0x80) == 0);
        if (*(int64_t *)(lVar9 + 0x80) != 0) goto LAB_01515be5;
LAB_01515cdb:
        pvVar6 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          in_RCX = plVar8;
        }
        FUN_0124ae40();
        pvVar6 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          if (*plVar17 == 0) goto LAB_01515d81;
LAB_01515dce:
          local_d0 = *plVar17;
        }
        else {
          in_RCX = plVar8;
          if (*plVar17 != 0) goto LAB_01515dce;
LAB_01515d81:
          do {
            lVar7 = *(int64_t *)(this_ptr + 0x50);
            if (lVar7 == 0) {
              local_d0 = 0;
              goto LAB_01515de6;
            }
            pvVar6 = _pthread_getspecific((void*)in_RCX);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *(int64_t *)(this_ptr + 0x50);
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            this_ptr = lVar7;
          } while (*(int64_t *)(this_ptr + 0x80) == 0);
          local_d0 = *(int64_t *)(this_ptr + 0x80);
        }
        if (local_d0 != 0) {
          FUN_00d50b00();
        }
LAB_01515de6:
        local_c8 = '\x01';
        cVar2 = FUN_00d51e10();
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') goto LAB_01515e1c;
        local_130 = 0;
        uVar19 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
        local_138 = plVar8;
        FUN_0150ceb0();
      }
      else {
        if (*plVar17 == 0) goto LAB_01515cdb;
LAB_01515be5:
        FUN_00d50b00();
        FUN_00d50b20();
        pVar13 = (void*)in_RCX;
        if (param_3 >> 0x20 == 0) goto LAB_01515cdb;
        plVar14 = plVar17;
        if (*plVar17 == 0) {
          lVar10 = 0;
          lVar7 = this_ptr;
          do {
            pVar13 = (void*)in_RCX;
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01515e8a;
            }
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(int64_t *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            pVar13 = (void*)in_RCX;
            lVar7 = lVar9;
          } while (*(int64_t *)(lVar9 + 0x80) == 0);
          plVar14 = (int64_t *)(lVar9 + 0x80);
        }
        lVar10 = *plVar14;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar1 = false;
LAB_01515e8a:
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar14 = local_b8;
        uVar4 = FUN_01254260(local_b8,local_98);
        if (!bVar1 && lVar10 != 0) {
          FUN_00d50b20();
        }
        pVar13 = (void*)plVar14;
        if ((char)uVar4 == '\0') {
          plVar16 = plVar17;
          if (*plVar17 == 0) {
            lVar10 = 0;
            lVar7 = this_ptr;
            do {
              pVar13 = (void*)plVar14;
              lVar9 = *(int64_t *)(lVar7 + 0x50);
              if (lVar9 == 0) {
                bVar1 = true;
                goto LAB_01515f95;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar9 = *(int64_t *)(lVar7 + 0x50);
                lVar7 = FUN_00e8b990();
                if (lVar7 != 0) {
                  lVar9 = *(int64_t *)
                           (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (void*)plVar14;
              lVar7 = lVar9;
            } while (*(int64_t *)(lVar9 + 0x80) == 0);
            plVar16 = (int64_t *)(lVar9 + 0x80);
          }
          lVar10 = *plVar16;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar1 = false;
LAB_01515f95:
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar14 = local_b8;
          FUN_012549c0(local_b8,local_98,1);
          if (!bVar1 && lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        plVar16 = plVar17;
        if (*plVar17 == 0) {
          lVar10 = 0;
          lVar7 = this_ptr;
          do {
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01516097;
            }
            pvVar6 = _pthread_getspecific((void*)plVar14);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(int64_t *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            lVar7 = lVar9;
          } while (*(int64_t *)(lVar9 + 0x80) == 0);
          plVar16 = (int64_t *)(lVar9 + 0x80);
        }
        lVar10 = *plVar16;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar1 = false;
LAB_01516097:
        pvVar6 = _pthread_getspecific((void*)plVar14);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0124ae30();
        if (!bVar1 && lVar10 != 0) {
          FUN_00d50b20();
        }
        pVar13 = (void*)plVar14;
        if (iVar5 < (int)local_78) {
          if (*plVar17 == 0) {
            lVar10 = 0;
            do {
              pVar13 = (void*)plVar14;
              lVar7 = *(int64_t *)(this_ptr + 0x50);
              if (lVar7 == 0) {
                bVar1 = true;
                goto LAB_0151616f;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *(int64_t *)(this_ptr + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              this_ptr = lVar7;
              pVar13 = (void*)plVar14;
            } while (*(int64_t *)(this_ptr + 0x80) == 0);
            plVar17 = (int64_t *)(this_ptr + 0x80);
          }
          lVar10 = *plVar17;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar1 = false;
LAB_0151616f:
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124ae40();
          uVar19 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
          if (!bVar1 && lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          uVar19 = (uint64_t)uVar4 ^ 1;
        }
      }
    }
    if (plVar8 == (int64_t *)0x0) goto LAB_015161ce;
  }
  FUN_00d50b20();
LAB_015161ce:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return uVar19 & 0xffffffff;
}



// ============================================================
// 01516720
// ============================================================
// Function: FUN_01516720
// Address: 01516720
// Size: 3844 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01516720(uint64_t param_1,void*param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t **pplVar11;
  uint64_t uVar12;
  int64_t lVar13;
  void* pVar14;
  int64_t *in_RCX;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t *puVar18;
  void*local_res8;
  uint8_t local_res10;
  char local_res18;
  uint64_t local_1b0;
  uint8_t local_1a8;
  int64_t local_1a0;
  uint8_t local_198;
  uint64_t local_190;
  uint8_t local_188;
  uint64_t local_180;
  uint8_t local_178;
  int64_t local_170;
  uint8_t local_168;
  uint64_t local_160;
  uint8_t local_158;
  uint64_t local_150;
  uint8_t local_148;
  int64_t local_140;
  uint8_t local_138;
  uint64_t local_130;
  uint8_t local_128;
  uint64_t local_120;
  uint8_t local_118;
  int64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  int64_t *local_f0;
  uint8_t local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  uint64_t local_90;
  int64_t *local_88;
  uint64_t local_80;
  int64_t *local_78;
  uint64_t local_70;
  int64_t *local_60;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  int64_t *local_38;
  
  local_b8 = '\0';
  local_c0 = (int64_t *)0x0;
  plVar15 = in_RCX;
  local_70 = param_4;
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0111d0d0();
  (**(code **)(*plVar7 + 0x18))();
  bVar2 = true;
  local_38 = plVar7;
LAB_015167b0:
  lVar10 = *arg1;
  pvVar8 = _pthread_getspecific((void*)plVar15);
  if (pvVar8 != (void *)0x0) {
    lVar10 = *arg1;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  pVar14 = (void*)plVar15;
  if (*(int64_t *)(lVar10 + 0x88) == 0) {
    do {
      pVar14 = (void*)plVar15;
      lVar9 = *(int64_t *)(lVar10 + 0x50);
      if (lVar9 == 0) {
        bVar1 = true;
        lVar10 = 0;
        goto LAB_01516880;
      }
      pvVar8 = _pthread_getspecific(pVar14);
      if (pvVar8 != (void *)0x0) {
        lVar9 = *(int64_t *)(lVar10 + 0x50);
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      pVar14 = (void*)plVar15;
      lVar10 = lVar9;
    } while (*(int64_t *)(lVar9 + 0x88) == 0);
    lVar10 = *(int64_t *)(lVar9 + 0x88);
  }
  else {
    lVar10 = *(int64_t *)(lVar10 + 0x88);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_01516880:
  pvVar8 = _pthread_getspecific(pVar14);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01252960(local_70,param_3,&local_c0,&local_78);
  if (!bVar1 && lVar10 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    if (((uint64_t)local_78 >> 0x20 == 0) && (param_3 >> 0x20 != 0)) {
      pvVar8 = _pthread_getspecific((void*)(param_3 >> 0x20));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (int64_t *)FUN_016caf30(0,4);
    }
    if ((local_90._4_4_ == 0) && (local_70 >> 0x20 != 0)) {
      pvVar8 = _pthread_getspecific((void*)(local_70 >> 0x20));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caf30(0,4);
    }
    local_1b0 = *param_2;
    local_1a8 = 0;
    local_1a0 = *in_RCX;
    local_198 = 0;
    local_190 = *local_res8;
    local_188 = 0;
    local_78 = (int64_t *)FUN_01514120(param_1,&local_1b0,&local_190,local_res10);
    local_180 = *param_2;
    local_178 = 0;
    local_170 = *in_RCX;
    local_168 = 0;
    local_160 = *local_res8;
    local_158 = 0;
    local_90 = (int64_t *)FUN_01514120(param_1,&local_180,&local_160,local_res10);
    local_48 = local_78;
    plVar15 = (int64_t *)((uint64_t)local_78 >> 0x20);
    pVar14 = (void*)((uint64_t)local_78 >> 0x20);
    local_50 = local_90;
    if ((plVar15 != (int64_t *)0x0) && ((uint64_t)local_90 >> 0x20 != 0)) goto code_r0x01516ac3;
    goto LAB_01516ad8;
  }
  if (!bVar2) {
    local_88 = (int64_t *)FUN_00e7bdb0();
    local_80 = FUN_00e7bdb0();
    plVar15 = (int64_t *)0x0;
    if (param_3 >> 0x20 != 0) {
      local_150 = *param_2;
      local_148 = 0;
      local_140 = *in_RCX;
      local_138 = 0;
      local_130 = *local_res8;
      local_128 = 0;
      plVar15 = &local_140;
      local_88 = (int64_t *)FUN_01514120(param_1,&local_150,&local_130,local_res10);
    }
    if (local_70 >> 0x20 != 0) {
      local_120 = *param_2;
      local_118 = 0;
      local_110 = *in_RCX;
      local_108 = 0;
      local_100 = *local_res8;
      local_f8 = 0;
      plVar15 = &local_110;
      local_80 = FUN_01514120(param_1,&local_120,&local_100,local_res10);
    }
    iVar4 = 2;
    if (local_res18 == '\0') {
      lVar10 = *arg1;
      pvVar8 = _pthread_getspecific((void*)plVar15);
      if (pvVar8 != (void *)0x0) {
        lVar10 = *arg1;
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar10 + 0x88) == 0) {
        lVar9 = 0;
        do {
          lVar13 = *(int64_t *)(lVar10 + 0x50);
          if (lVar13 == 0) {
            bVar2 = true;
            goto LAB_01516d50;
          }
          pvVar8 = _pthread_getspecific((void*)plVar15);
          if (pvVar8 != (void *)0x0) {
            lVar13 = *(int64_t *)(lVar10 + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8)
              ;
            }
          }
          lVar10 = lVar13;
        } while (*(int64_t *)(lVar13 + 0x88) == 0);
        lVar9 = *(int64_t *)(lVar13 + 0x88);
      }
      else {
        lVar9 = *(int64_t *)(lVar10 + 0x88);
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01516d50:
      pvVar8 = _pthread_getspecific((void*)plVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_018847d0();
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    param_3 = param_3 | local_70;
    plVar7 = (int64_t *)(this_ptr + 0x88);
    lVar10 = this_ptr;
    if (*(int64_t *)(this_ptr + 0x88) == 0) {
      do {
        lVar9 = *(int64_t *)(lVar10 + 0x50);
        if (lVar9 == 0) goto LAB_01516e9e;
        pvVar8 = _pthread_getspecific((void*)plVar15);
        if (pvVar8 != (void *)0x0) {
          lVar9 = *(int64_t *)(lVar10 + 0x50);
          lVar10 = FUN_00e8b990();
          if (lVar10 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
        }
        lVar10 = lVar9;
      } while (*(int64_t *)(lVar9 + 0x88) == 0);
      lVar10 = *(int64_t *)(lVar9 + 0x88);
    }
    else {
      lVar10 = *plVar7;
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      if (param_3 >> 0x20 != 0) {
        pvVar8 = _pthread_getspecific((void*)plVar15);
        plVar15 = local_38;
        if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar15 = local_38, lVar10 != 0)) {
          plVar15 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        FUN_00d23310();
        plVar16 = local_48;
        local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_40[0]);
        pplVar11 = (int64_t **)local_40;
        if (local_40[0] == '\0') {
          pplVar11 = &local_50;
        }
        *(char *)pplVar11 = '\0';
        if ((local_40[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar16 == (int64_t *)0x0) && (0xe < *(int *)(plVar15[9] + 0x18) + 7U)) {
          local_60 = (int64_t *)**(void**)(plVar15[9] + 0x10);
        }
        else {
          local_60 = (int64_t *)FUN_00e7bdb0();
          if (((char)local_50 != '\0') && (plVar16 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d23340();
        plVar16 = local_48;
        local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_40[0]);
        pplVar11 = (int64_t **)local_40;
        if (local_40[0] == '\0') {
          pplVar11 = &local_50;
        }
        *(char *)pplVar11 = '\0';
        if ((local_40[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 == (int64_t *)0x0) {
          iVar6 = *(int *)(plVar15[9] + 0x18);
          if (iVar6 + 7U < 0xf) goto LAB_01517141;
          uVar12 = *(uint64_t *)((int64_t)iVar6 + -8 + *(int64_t *)(plVar15[9] + 0x10));
        }
        else {
LAB_01517141:
          uVar12 = FUN_00e7bdb0();
          if (((char)local_50 != '\0') && (plVar16 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(int *)(plVar15[9] + 0x18) + 7U < 0xf) {
          FUN_00d23310();
          plVar15 = local_48;
          pplVar11 = (int64_t **)local_40;
          if (local_40[0] == '\0') {
            pplVar11 = &local_50;
          }
          local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_40[0]);
          *(char *)pplVar11 = '\0';
          if ((local_40[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_50 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar15 == (int64_t *)0x0) goto LAB_01516fe0;
        }
        local_e0 = local_88;
        local_d0 = local_80;
        local_d8 = local_60;
        local_c8 = uVar12;
        if ((uint64_t)local_88 >> 0x20 == 0) {
          local_88 = local_60;
          if (local_80 >> 0x20 != 0) goto LAB_0151722d;
LAB_0151725d:
          puVar18 = &local_c8;
        }
        else {
          local_60 = (int64_t *)((uint64_t)local_60 >> 0x20);
          if (local_60 != (int64_t *)0x0) {
            cVar3 = FUN_00e7c020();
            pplVar11 = &local_e0;
            if (cVar3 != '\0') {
              pplVar11 = &local_d8;
            }
            local_88 = *pplVar11;
          }
          if (local_80 >> 0x20 == 0) goto LAB_0151725d;
LAB_0151722d:
          if (uVar12 >> 0x20 == 0) {
            puVar18 = &local_d0;
          }
          else {
            cVar3 = FUN_00e7c020();
            puVar18 = &local_d0;
            if (cVar3 != '\0') {
              puVar18 = &local_c8;
            }
          }
        }
        plVar15 = (int64_t *)*puVar18;
        local_50 = plVar15;
        local_48 = local_88;
        if ((((uint64_t)local_88 >> 0x20 == 0) || ((uint64_t)plVar15 >> 0x20 == 0)) ||
           (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          pVar14 = (void*)local_60;
          plVar16 = plVar7;
          if (*plVar7 == 0) {
            lVar10 = 0;
            lVar9 = this_ptr;
            do {
              pVar14 = (void*)local_60;
              lVar13 = *(int64_t *)(lVar9 + 0x50);
              if (lVar13 == 0) {
                bVar2 = true;
                goto LAB_01517328;
              }
              pvVar8 = _pthread_getspecific(pVar14);
              if (pvVar8 != (void *)0x0) {
                lVar13 = *(int64_t *)(lVar9 + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar13 = *(int64_t *)
                            (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              pVar14 = (void*)local_60;
              lVar9 = lVar13;
            } while (*(int64_t *)(lVar13 + 0x88) == 0);
            plVar16 = (int64_t *)(lVar13 + 0x88);
          }
          lVar10 = *plVar16;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar2 = false;
LAB_01517328:
          pvVar8 = _pthread_getspecific(pVar14);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = local_38;
          local_40[0] = '\0';
          plVar16 = plVar15;
          uVar5 = FUN_01254260(plVar15,local_88);
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar2 && lVar10 != 0) {
            FUN_00d50b20();
          }
          pVar14 = (void*)plVar16;
          if ((char)uVar5 == '\0') {
            plVar17 = plVar7;
            if (*plVar7 == 0) {
              lVar10 = 0;
              lVar9 = this_ptr;
              do {
                pVar14 = (void*)plVar16;
                lVar13 = *(int64_t *)(lVar9 + 0x50);
                if (lVar13 == 0) {
                  bVar2 = true;
                  goto LAB_0151742a;
                }
                pvVar8 = _pthread_getspecific(pVar14);
                if (pvVar8 != (void *)0x0) {
                  lVar13 = *(int64_t *)(lVar9 + 0x50);
                  lVar9 = FUN_00e8b990();
                  if (lVar9 != 0) {
                    lVar13 = *(int64_t *)
                              (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                  }
                }
                pVar14 = (void*)plVar16;
                lVar9 = lVar13;
              } while (*(int64_t *)(lVar13 + 0x88) == 0);
              plVar17 = (int64_t *)(lVar13 + 0x88);
            }
            lVar10 = *plVar17;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            bVar2 = false;
LAB_0151742a:
            pvVar8 = _pthread_getspecific(pVar14);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_48 = local_38;
            local_40[0] = '\0';
            FUN_012549c0(plVar15,local_88,1);
            plVar16 = plVar15;
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar16 = plVar15;
            }
            if (!bVar2 && lVar10 != 0) {
              FUN_00d50b20();
            }
          }
          plVar15 = plVar7;
          if (*plVar7 == 0) {
            lVar10 = 0;
            lVar9 = this_ptr;
            do {
              lVar13 = *(int64_t *)(lVar9 + 0x50);
              if (lVar13 == 0) {
                bVar2 = true;
                goto LAB_0151752c;
              }
              pvVar8 = _pthread_getspecific((void*)plVar16);
              if (pvVar8 != (void *)0x0) {
                lVar13 = *(int64_t *)(lVar9 + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar13 = *(int64_t *)
                            (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              lVar9 = lVar13;
            } while (*(int64_t *)(lVar13 + 0x88) == 0);
            plVar15 = (int64_t *)(lVar13 + 0x88);
          }
          lVar10 = *plVar15;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar2 = false;
LAB_0151752c:
          pvVar8 = _pthread_getspecific((void*)plVar16);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_018847d0();
          if (!bVar2 && lVar10 != 0) {
            FUN_00d50b20();
          }
          pVar14 = (void*)plVar16;
          if (iVar6 < iVar4) {
            if (*plVar7 == 0) {
              lVar10 = 0;
              do {
                pVar14 = (void*)plVar16;
                lVar9 = *(int64_t *)(this_ptr + 0x50);
                if (lVar9 == 0) {
                  bVar2 = true;
                  goto LAB_01517605;
                }
                pvVar8 = _pthread_getspecific(pVar14);
                if (pvVar8 != (void *)0x0) {
                  lVar9 = *(int64_t *)(this_ptr + 0x50);
                  lVar13 = FUN_00e8b990();
                  if (lVar13 != 0) {
                    lVar9 = *(int64_t *)
                             (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
                  }
                }
                this_ptr = lVar9;
                pVar14 = (void*)plVar16;
              } while (*(int64_t *)(this_ptr + 0x88) == 0);
              plVar7 = (int64_t *)(this_ptr + 0x88);
            }
            lVar10 = *plVar7;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            bVar2 = false;
LAB_01517605:
            pvVar8 = _pthread_getspecific(pVar14);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018847e0();
            uVar12 = CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
            if (!bVar2 && lVar10 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            uVar12 = (uint64_t)uVar5 ^ 1;
          }
          goto LAB_01517009;
        }
        goto LAB_01516fe0;
      }
    }
LAB_01516e9e:
    pvVar8 = _pthread_getspecific((void*)plVar15);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = local_38;
    }
    FUN_018847e0();
    pvVar8 = _pthread_getspecific((void*)plVar15);
    if ((pvVar8 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      plVar16 = local_38;
      if (*plVar7 != 0) goto LAB_01516f8e;
LAB_01516f41:
      do {
        lVar10 = *(int64_t *)(this_ptr + 0x50);
        if (lVar10 == 0) {
          local_b0 = 0;
          goto LAB_01516fa6;
        }
        pvVar8 = _pthread_getspecific((void*)plVar15);
        if (pvVar8 != (void *)0x0) {
          lVar10 = *(int64_t *)(this_ptr + 0x50);
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
        }
        this_ptr = lVar10;
      } while (*(int64_t *)(this_ptr + 0x88) == 0);
      local_b0 = *(int64_t *)(this_ptr + 0x88);
    }
    else {
      plVar15 = local_38;
      plVar16 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      if (*plVar7 == 0) goto LAB_01516f41;
LAB_01516f8e:
      local_b0 = *plVar7;
    }
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
LAB_01516fa6:
    local_a8 = '\x01';
    cVar3 = FUN_00d51e10();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      local_f0 = local_38;
      local_e8 = 0;
      uVar12 = CONCAT71((int7)((uint64_t)plVar16 >> 8),1);
      FUN_0150c7f0();
      goto LAB_01517009;
    }
  }
LAB_01516fe0:
  uVar12 = 0;
LAB_01517009:
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
code_r0x01516ac3:
  cVar3 = FUN_00e7c020();
  pVar14 = (void*)plVar15;
  if (cVar3 != '\0') {
LAB_01516ad8:
    pvVar8 = _pthread_getspecific(pVar14);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_c0;
    local_40[0] = '\0';
    plVar15 = local_90;
    FUN_012502a0(local_90,local_78,1);
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  goto LAB_015167b0;
}



// ============================================================
// 00153530
// ============================================================
// Function: FUN_00153530
// Address: 00153530
// Size: 3837 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"
//   "MU12TETPitchSystem"
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"

void FUN_00153530(code *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void* pVar7;
  void*arg1;
  int64_t this_ptr;
  code *pcVar8;
  code *pcVar9;
  code **ppcVar10;
  code **ppcVar11;
  uint32_t uVar12;
  int64_t local_148;
  char local_140;
  code *local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  code *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  code *local_c8;
  char local_c0;
  code *local_b8;
  char local_b0;
  code *local_a8;
  char local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  byte local_78;
  void*local_70;
  code *local_68;
  uint64_t local_60;
  code *local_58;
  uint local_50;
  
  lVar5 = *(int64_t *)(this_ptr + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_004f9670();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004fae50();
  pcVar8 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_78 != '\0') && (local_80 != 0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_98 = pcVar8;
  FUN_01f27fe0();
  cVar1 = FUN_000c7760();
  if (((char)local_50 != '\0') && (local_58 != 0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d9bb60();
    pcVar9 = local_58;
    if (((char)local_50 == '\0') && (local_58 != 0x0)) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0x0)) {
        FUN_00d50b20();
      }
    }
    uVar12 = FUN_004405c0();
    local_108 = pcVar9;
    local_100 = '\0';
    FUN_004b8670(uVar12,&local_108);
    if ((local_100 != '\0') && (local_108 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != 0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_004405f0();
    local_f8 = pcVar8;
    local_f0 = '\0';
    local_e8 = pcVar9;
    local_e0 = '\0';
    FUN_004b8670(uVar12,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != 0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != 0x0)) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x88);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar5;
    FUN_004f9670();
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = pcVar9;
    local_c0 = '\0';
    FUN_004fae00();
    if ((local_c0 != '\0') && (local_c8 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != 0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (pcVar9 != 0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = 1;
  local_58 = &g_024c5048;
  uVar12 = FUN_00d50b00();
  ppcVar11 = &local_80;
  FUN_00d8cb40(uVar12,&local_58);
  local_88 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != 0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  local_58 = &g_024c5048;
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  uVar12 = (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
  local_b8 = local_88;
  local_b0 = '\0';
  ppcVar10 = &local_58;
  FUN_000175c0(uVar12,&local_b8);
  pcVar8 = local_58;
  FUN_0015ea50();
  if (pcVar8 == 0x0) {
LAB_0015395b:
    ppcVar10 = (code **)&g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pcVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0015395b;
  }
  pcVar8 = *ppcVar10;
  if (*(char *)(ppcVar10 + 1) == '\0') {
    if (pcVar8 != 0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(ppcVar10 + 1) = 0;
  }
  local_78 = 1;
  local_80 = pcVar8;
  if (((char)local_50 != '\0') && (local_78 = 1, local_58 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((pcVar8 != 0x0) && (*(int64_t *)(this_ptr + 0x90) != 0)) {
    if ((g_0278c570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_027c3448 = FUN_0015ea50();
      g_027c3430 = "MU12TETPitchSystem";
      g_027c3438 = 0x68;
      param_1 = FUN_0015ec50;
      g_027c3440 = FUN_0015ec50;
      g_027c3450 = 0;
      ram_00000000027c3458 = 0;
      g_027c3460 = 0;
      ram_00000000027c3468 = 0;
      g_027c3470 = 0;
      ram_00000000027c3478 = 0;
      g_027c3480 = 0;
      ram_00000000027c3488 = 0;
      g_027c3490 = 0;
      ram_00000000027c3498 = 0;
      g_027c34a0 = 0;
      ram_00000000027c34a8 = 0;
      g_027c34b0 = 0;
      ram_00000000027c34b8 = 0;
      g_027c34c0 = 0;
      ram_00000000027c34c8 = 0;
      g_027c34d0 = 0;
      ram_00000000027c34d8 = 0;
      g_027c34e0 = 0;
      ram_00000000027c34e8 = 0;
      g_027c34f0 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*(int64_t *)pcVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    pcVar8 = local_80;
    pVar7 = (void*)param_1;
    if (cVar1 == '\0') {
      ppcVar11 = (code **)&g_02802688;
    }
    cVar1 = *(char *)(ppcVar11 + 1);
    if ((cVar1 == '\0') || (*ppcVar11 == 0x0)) {
      if (*ppcVar11 != 0x0) goto LAB_00153abe;
      if ((g_027c0150 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_0270acc8 = FUN_0015ea50();
        g_0270acb0 = "MUPercussivePitchSystem";
        g_0270acb8 = 0x58;
        pVar7 = 0x15eca0;
        g_0270acc0 = FUN_0015eca0;
        g_0270acd0 = 0;
        ram_000000000270acd8 = 0;
        g_0270ace0 = 0;
        ram_000000000270ace8 = 0;
        g_0270acf0 = 0;
        ram_000000000270acf8 = 0;
        g_0270ad00 = 0;
        ram_000000000270ad08 = 0;
        g_0270ad10 = 0;
        ram_000000000270ad18 = 0;
        g_0270ad20 = 0;
        ram_000000000270ad28 = 0;
        g_0270ad30 = 0;
        ram_000000000270ad38 = 0;
        g_0270ad40 = 0;
        ram_000000000270ad48 = 0;
        g_0270ad50 = 0;
        ram_000000000270ad58 = 0;
        g_0270ad60 = 0;
        ram_000000000270ad68 = 0;
        g_0270ad70 = 0;
        ___cxa_guard_release();
      }
      if (pcVar8 == 0x0) {
LAB_00153be1:
        ppcVar11 = (code **)&g_02802688;
      }
      else {
        (**(code **)(*(int64_t *)pcVar8 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') goto LAB_00153be1;
        ppcVar11 = &local_80;
      }
      pcVar9 = local_80;
      pcVar8 = *ppcVar11;
      local_90 = CONCAT71(local_90._1_7_,*(char *)(ppcVar11 + 1));
      if ((*(char *)(ppcVar11 + 1) == '\0') || (pcVar8 == 0x0)) {
        if (pcVar8 != 0x0) goto LAB_00154001;
        if ((g_027c0160 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          g_0270ab28 = FUN_0015ea50();
          g_0270ab10 = "MUScalePitchSystem";
          g_0270ab18 = 0x78;
          g_0270ab20 = FUN_0015ecf0;
          g_0270ab30 = 0;
          ram_000000000270ab38 = 0;
          g_0270ab40 = 0;
          ram_000000000270ab48 = 0;
          g_0270ab50 = 0;
          ram_000000000270ab58 = 0;
          g_0270ab60 = 0;
          ram_000000000270ab68 = 0;
          g_0270ab70 = 0;
          ram_000000000270ab78 = 0;
          g_0270ab80 = 0;
          ram_000000000270ab88 = 0;
          g_0270ab90 = 0;
          ram_000000000270ab98 = 0;
          g_0270aba0 = 0;
          ram_000000000270aba8 = 0;
          g_0270abb0 = 0;
          ram_000000000270abb8 = 0;
          g_0270abc0 = 0;
          ram_000000000270abc8 = 0;
          g_0270abd0 = 0;
          ___cxa_guard_release();
        }
        if (pcVar9 == 0x0) {
LAB_001541e1:
          ppcVar11 = (code **)&g_02802688;
        }
        else {
          local_60 = 0;
          (**(code **)(*(int64_t *)pcVar9 + 0x360))();
          local_60 = 0;
          cVar1 = FUN_00e85ea0();
          if (cVar1 == '\0') goto LAB_001541e1;
          ppcVar11 = &local_80;
        }
        param_1 = local_80;
        if (*ppcVar11 == 0x0) goto LAB_00153f89;
        uVar6 = CONCAT71((int7)((uint64_t)ppcVar11 >> 8),local_78);
        if (local_80 == 0x0) goto LAB_00153f8c;
        local_70 = (void*)uVar6;
        if (local_78 != 0) {
          local_60 = 0;
          FUN_00d50b00();
        }
        iVar2 = 0;
        pcVar9 = param_1;
      }
      else {
        FUN_00d50b00();
LAB_00154001:
        uVar4 = FUN_0173c6e0();
        pcVar9 = local_58;
        if (local_58 == 0x0) {
          local_60 = 0;
          pcVar9 = 0x0;
        }
        else {
          if ((char)local_50 == '\0') {
            uVar4 = FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != 0x0)) {
              local_60 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
              FUN_00d50b20();
              goto LAB_0015404e;
            }
          }
          local_60 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
        }
LAB_0015404e:
        pvVar3 = _pthread_getspecific(pVar7);
        param_1 = pcVar9;
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = *(code **)(pcVar9 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pcVar8 = *(code **)(pcVar8 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
        }
        (**(code **)(*(int64_t *)pcVar8 + 0x3f0))();
        param_1 = *(code **)param_1;
        (**(code **)(param_1 + 0x3f8))();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_017702f0();
        if (((char)local_50 != '\0') && (local_58 != 0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_90 == '\0') {
          local_70 = (void*)local_60;
        }
        else {
          FUN_00d50b20();
          local_70 = (void*)local_60;
        }
      }
    }
    else {
      FUN_00d50b00();
LAB_00153abe:
      local_60 = CONCAT71(local_60._1_7_,cVar1);
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd70();
      pcVar9 = local_58;
      if (local_58 == 0x0) {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014fdd00();
        pcVar8 = local_58;
        if ((char)local_50 == '\0') {
          if (local_58 == 0x0) goto LAB_00153c6e;
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_58 == 0x0) {
LAB_00153c6e:
          pcVar9 = 0x0;
          local_70 = (void*)0x0;
          iVar2 = 0;
          goto LAB_00153d27;
        }
        local_90 = pcVar8;
        uVar4 = FUN_0173c6e0();
        pcVar9 = local_58;
        if (local_58 == 0x0) {
          local_70 = (void*)0x0;
          pcVar9 = 0x0;
        }
        else {
          local_70 = (void*)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != 0x0)) {
              FUN_00d50b20();
            }
          }
        }
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_017702f0();
        if (((char)local_50 != '\0') && (local_58 != 0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
        }
        local_70 = &g_02802501;
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = 0;
        local_70 = (void*)0x1;
        FUN_0174bd90();
      }
LAB_00153d27:
      pvVar3 = _pthread_getspecific((void*)param_1);
      pcVar8 = pcVar9;
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pcVar8 = *(code **)(pcVar9 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(int64_t *)pcVar8 + 0x3f8))();
      if ((char)local_60 != '\0') {
        FUN_00d50b20();
      }
    }
    if (pcVar9 == 0x0) {
      uVar4 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
      local_60 = CONCAT44(local_60._4_4_,(int)uVar4);
    }
    else {
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = '\0';
      local_a8 = pcVar9;
      FUN_0150bf50();
      if ((local_a0 != '\0') && (local_a8 != 0x0)) {
        FUN_00d50b20();
      }
      uVar4 = 0;
      local_60 = local_60 & 0xffffffff00000000;
    }
    if (iVar2 != 0) {
      pvVar3 = _pthread_getspecific((void*)uVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150c530();
      pcVar8 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != 0x0) {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00153e95;
        }
      }
      else if (local_58 != 0x0) {
LAB_00153e95:
        local_50 = local_50 & 0xffffff00;
        local_58 = 0x0;
        local_68 = pcVar9;
        for (lVar5 = 0; (int)lVar5 < *(int *)(pcVar8 + 0xc); lVar5 = lVar5 + 1) {
          local_58 = *(code **)(*(int64_t *)(pcVar8 + 0x10) + lVar5 * 8);
          pvVar3 = _pthread_getspecific((void*)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific((void*)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          FUN_01508220();
        }
        FUN_0015ed50();
        FUN_00d50b20();
      }
    }
    if ((char)local_70 != '\0' && (char)local_60 == '\0') {
      FUN_00d50b20();
    }
  }
LAB_00153f89:
  uVar6 = (uint64_t)local_78;
LAB_00153f8c:
  pcVar9 = local_88;
  pcVar8 = local_98;
  if (((char)uVar6 != '\0') && (local_80 != 0x0)) {
    FUN_00d50b20();
  }
  if (pcVar9 != 0x0) {
    FUN_00d50b20();
  }
  if (pcVar8 != 0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0150aa70
// ============================================================
// Function: FUN_0150aa70
// Address: 0150aa70
// Size: 3731 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"
//   "MU12TETPitchSystem"
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"
//   "%p::_chordSequence"

void FUN_0150aa70(code *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  code *pcVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t lVar9;
  code *pcVar10;
  void*arg1;
  int64_t this_ptr;
  code **ppcVar11;
  code **ppcVar12;
  byte bVar13;
  uint32_t uVar14;
  code *local_e8;
  code *local_b8;
  char local_b0;
  uint32_t local_a4;
  int64_t local_a0;
  char local_98;
  code *local_90;
  code *local_88;
  code *local_78;
  uint local_70;
  int local_60;
  code *local_50;
  byte local_48;
  code *local_40;
  code *local_38;
  
  FUN_00d50f50();
  if (*(int64_t *)(this_ptr + 0x58) == 0) {
    return;
  }
  local_70 = 1;
  local_78 = &g_024c5048;
  uVar14 = FUN_00d50b00();
  ppcVar12 = &local_50;
  FUN_00d8cb40(uVar14,&local_78);
  pcVar10 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != 0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = &g_024c5048;
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  local_90 = pcVar10;
  (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
  ppcVar11 = &local_78;
  FUN_000175c0();
  pcVar10 = local_78;
  FUN_0015ea50();
  if (pcVar10 == 0x0) {
LAB_0150abaa:
    ppcVar11 = &g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150abaa;
  }
  pcVar10 = *ppcVar11;
  if (*(char *)(ppcVar11 + 1) == '\0') {
    if (pcVar10 != 0x0) {
      FUN_00d50b00();
    }
    local_50 = pcVar10;
    local_48 = 1;
  }
  else {
    local_50 = pcVar10;
    local_48 = 1;
    *(void*)(ppcVar11 + 1) = 0;
  }
  if (((char)local_70 != '\0') && (local_78 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((g_0278c570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027c3448 = FUN_0015ea50();
    g_027c3430 = "MU12TETPitchSystem";
    g_027c3438 = 0x68;
    param_1 = FUN_0015ec50;
    g_027c3440 = FUN_0015ec50;
    g_027c3450 = 0;
    ram_00000000027c3458 = 0;
    g_027c3460 = 0;
    ram_00000000027c3468 = 0;
    g_027c3470 = 0;
    ram_00000000027c3478 = 0;
    g_027c3480 = 0;
    ram_00000000027c3488 = 0;
    g_027c3490 = 0;
    ram_00000000027c3498 = 0;
    g_027c34a0 = 0;
    ram_00000000027c34a8 = 0;
    g_027c34b0 = 0;
    ram_00000000027c34b8 = 0;
    g_027c34c0 = 0;
    ram_00000000027c34c8 = 0;
    g_027c34d0 = 0;
    ram_00000000027c34d8 = 0;
    g_027c34e0 = 0;
    ram_00000000027c34e8 = 0;
    g_027c34f0 = 0;
    ___cxa_guard_release();
  }
  if (pcVar10 == 0x0) {
LAB_0150ac93:
    ppcVar12 = &g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150ac93;
  }
  pcVar10 = local_50;
  pVar8 = (void*)param_1;
  cVar1 = *(char *)(ppcVar12 + 1);
  if ((cVar1 == '\0') || (*ppcVar12 == 0x0)) {
    if (*ppcVar12 != 0x0) goto LAB_0150acbd;
    if ((g_027c0150 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_0270acc8 = FUN_0015ea50();
      g_0270acb0 = "MUPercussivePitchSystem";
      g_0270acb8 = 0x58;
      param_1 = FUN_0015eca0;
      g_0270acc0 = FUN_0015eca0;
      g_0270acd0 = 0;
      ram_000000000270acd8 = 0;
      g_0270ace0 = 0;
      ram_000000000270ace8 = 0;
      g_0270acf0 = 0;
      ram_000000000270acf8 = 0;
      g_0270ad00 = 0;
      ram_000000000270ad08 = 0;
      g_0270ad10 = 0;
      ram_000000000270ad18 = 0;
      g_0270ad20 = 0;
      ram_000000000270ad28 = 0;
      g_0270ad30 = 0;
      ram_000000000270ad38 = 0;
      g_0270ad40 = 0;
      ram_000000000270ad48 = 0;
      g_0270ad50 = 0;
      ram_000000000270ad58 = 0;
      g_0270ad60 = 0;
      ram_000000000270ad68 = 0;
      g_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (pcVar10 == 0x0) {
LAB_0150addd:
      pcVar10 = g_02802688;
      bVar13 = g_02802690;
      if (g_02802690 == 0) goto LAB_0150b4e8;
LAB_0150b4d9:
      if (pcVar10 == 0x0) goto LAB_0150b4e8;
      FUN_00d50b00();
LAB_0150b4f1:
      uVar7 = FUN_0173c6e0();
      if (local_78 == 0x0) {
        local_38 = 0x0;
        local_40 = 0x0;
      }
      else {
        local_38 = local_78;
        if ((char)local_70 == '\0') {
          uVar7 = FUN_00d50b00();
          if (((char)local_70 != '\0') && (local_78 != 0x0)) {
            local_40 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            FUN_00d50b20();
            goto LAB_0150b545;
          }
        }
        local_40 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
LAB_0150b545:
      pvVar3 = _pthread_getspecific((void*)param_1);
      pcVar5 = local_38;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), pcVar5 = local_38, lVar4 != 0)) {
        param_1 = local_38;
        pcVar5 = *(code **)(local_38 + ((uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pcVar10 = *(code **)(pcVar10 + ((uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(int64_t *)pcVar10 + 0x3f0))();
      param_1 = *(code **)pcVar5;
      (**(code **)(param_1 + 0x3f8))();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_017702f0();
      if (((char)local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      if (bVar13 == 0) {
        cVar1 = (char)local_40;
      }
      else {
        FUN_00d50b20();
        cVar1 = (char)local_40;
      }
      goto LAB_0150af82;
    }
    (**(code **)(*(int64_t *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150addd;
    pcVar10 = local_50;
    bVar13 = local_48;
    if (local_48 != 0) goto LAB_0150b4d9;
LAB_0150b4e8:
    pcVar5 = local_50;
    if (pcVar10 != 0x0) goto LAB_0150b4f1;
    if ((g_027c0160 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_0270ab28 = FUN_0015ea50();
      g_0270ab10 = "MUScalePitchSystem";
      g_0270ab18 = 0x78;
      param_1 = FUN_0015ecf0;
      g_0270ab20 = FUN_0015ecf0;
      g_0270ab30 = 0;
      ram_000000000270ab38 = 0;
      g_0270ab40 = 0;
      ram_000000000270ab48 = 0;
      g_0270ab50 = 0;
      ram_000000000270ab58 = 0;
      g_0270ab60 = 0;
      ram_000000000270ab68 = 0;
      g_0270ab70 = 0;
      ram_000000000270ab78 = 0;
      g_0270ab80 = 0;
      ram_000000000270ab88 = 0;
      g_0270ab90 = 0;
      ram_000000000270ab98 = 0;
      g_0270aba0 = 0;
      ram_000000000270aba8 = 0;
      g_0270abb0 = 0;
      ram_000000000270abb8 = 0;
      g_0270abc0 = 0;
      ram_000000000270abc8 = 0;
      g_0270abd0 = 0;
      ___cxa_guard_release();
    }
    if (pcVar5 == 0x0) {
LAB_0150b6ca:
      ppcVar12 = &g_02802688;
    }
    else {
      local_40 = 0x0;
      local_38 = 0x0;
      (**(code **)(*(int64_t *)pcVar5 + 0x360))();
      local_40 = 0x0;
      param_1 = 0x0;
      local_38 = 0x0;
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_0150b6ca;
      ppcVar12 = &local_50;
    }
    if (*ppcVar12 != 0x0) {
      pcVar10 = local_50;
      pcVar5 = CONCAT71((int7)((uint64_t)ppcVar12 >> 8),local_48);
      if (local_50 == 0x0) goto LAB_0150b126;
      local_88 = pcVar5;
      if (local_48 != 0) {
        local_40 = 0x0;
        local_38 = 0x0;
        FUN_00d50b00();
      }
      iVar2 = 0;
      cVar1 = (char)local_88;
      local_38 = pcVar10;
      goto LAB_0150af82;
    }
  }
  else {
    FUN_00d50b00();
LAB_0150acbd:
    local_88 = CONCAT71(local_88._1_7_,cVar1);
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014fdd70();
    local_38 = local_78;
    param_1 = local_78;
    if (local_78 == 0x0) {
      pvVar3 = _pthread_getspecific(0);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd00();
      pcVar10 = local_78;
      if ((char)local_70 == '\0') {
        if (local_78 == 0x0) goto LAB_0150ae7f;
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_78 == 0x0) {
LAB_0150ae7f:
        cVar1 = '\0';
        local_38 = 0x0;
        iVar2 = 0;
        goto LAB_0150af32;
      }
      local_40 = pcVar10;
      FUN_0173c6e0();
      local_38 = local_78;
      param_1 = local_78;
      if (local_78 == 0x0) {
        local_38 = 0x0;
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
        if ((char)local_70 == '\0') {
          FUN_00d50b00();
          if (((char)local_70 != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_017702f0();
      if (((char)local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      if ((char)local_70 == '\0') {
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      iVar2 = 0;
      cVar1 = '\x01';
      FUN_0174bd90();
    }
LAB_0150af32:
    pvVar3 = _pthread_getspecific((void*)param_1);
    pcVar10 = local_38;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), pcVar10 = local_38, lVar4 != 0)) {
      param_1 = local_38;
      pcVar10 = *(code **)(local_38 + ((uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
    }
    (**(code **)(*(int64_t *)pcVar10 + 0x3f8))();
    if ((char)local_88 != '\0') {
      FUN_00d50b20();
    }
LAB_0150af82:
    if (local_38 != 0x0) {
      FUN_0150bf50();
    }
    if (iVar2 != 0) {
      FUN_0150c530();
      pcVar10 = local_78;
      if ((char)local_70 == '\0') {
        if (local_78 != 0x0) {
          FUN_00d50b00();
          goto LAB_0150afe4;
        }
      }
      else if (local_78 != 0x0) {
LAB_0150afe4:
        local_70 = local_70 & 0xffffff00;
        local_78 = 0x0;
        local_88 = pcVar10;
        local_60 = -1;
        while( true ) {
          lVar4 = (int64_t)local_60;
          local_60 = local_60 + 1;
          if (*(int *)(pcVar10 + 0xc) <= local_60) break;
          lVar9 = *(int64_t *)(pcVar10 + 0x10);
          local_78 = *(code **)(lVar9 + 8 + lVar4 * 8);
          pvVar3 = _pthread_getspecific((void*)lVar9);
          pVar8 = (void*)lVar9;
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar8);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          FUN_01508220();
        }
        FUN_0015ed50();
        FUN_00d50b20();
        param_1 = pcVar10;
      }
    }
    if ((cVar1 != '\0') && (local_38 != 0x0)) {
      FUN_00d50b20();
    }
  }
  pcVar5 = (uint64_t)local_48;
LAB_0150b126:
  pcVar10 = local_90;
  if (((char)pcVar5 != '\0') && (local_50 != 0x0)) {
    FUN_00d50b20();
  }
  if (pcVar10 != 0x0) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(this_ptr + 0x58);
  if (lVar4 != 0) {
    local_70 = 1;
    local_78 = &g_024c5048;
    uVar14 = FUN_00d50b00();
    FUN_00d8cb40(uVar14,&local_78);
    pcVar10 = local_50;
    if (local_48 == 0) {
      if (((local_50 != 0x0) && (FUN_00d50b00(), local_48 != 0)) &&
         (local_50 != 0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = 0;
    }
    local_78 = &g_024c5048;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    uVar14 = (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
    local_b8 = pcVar10;
    local_b0 = '\0';
    FUN_000175c0(uVar14,&local_b8);
    pcVar5 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != 0x0) {
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_70 = local_70 & 0xffffff00;
    }
    if ((local_b0 != '\0') && (local_b8 != 0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != 0) && (local_50 != 0x0)) {
      FUN_00d50b20();
    }
    if (pcVar5 != 0x0) {
      local_38 = pcVar10;
      FUN_00d50b00();
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_0111d0d0();
      (**(code **)(*plVar6 + 0x18))();
      FUN_0150c7f0();
      FUN_00d50b20();
      local_48 = 0;
      local_50 = 0x0;
      local_a4 = 0xffffffff;
      while( true ) {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_00e7bdb0();
        param_1 = FUN_00e7bdb0();
        cVar1 = FUN_01252960(param_1,uVar7,&local_50,&local_a0);
        pcVar10 = local_38;
        if (cVar1 == '\0') break;
        if (local_50 != 0x0) {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_78 = local_50;
          local_70 = local_70 & 0xffffff00;
          param_1 = local_e8;
          FUN_012502a0(local_e8,local_a0,0);
          if (((char)local_70 != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018847e0();
      if ((local_48 != 0) && (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (pcVar10 != 0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01511080
// ============================================================
// Function: FUN_01511080
// Address: 01511080
// Size: 3077 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01511080(int64_t *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  byte bVar10;
  void* pVar11;
  uint64_t uVar13;
  char *pcVar14;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b0;
  char local_a8 [8];
  int64_t local_a0;
  uint64_t local_98;
  uint32_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  uint32_t local_60;
  uint local_5c;
  int64_t *local_58;
  int64_t *local_50;
  int local_44;
  char local_38 [8];
  uint64_t uVar12;
  
  lVar8 = *arg1;
  if (lVar8 == 0) {
    return 0;
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar8 + 0x78) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        return 0;
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x78) == 0);
    lVar8 = *(int64_t *)(lVar7 + 0x78);
  }
  else {
    lVar8 = *(int64_t *)(lVar8 + 0x78);
  }
  if (lVar8 == 0) {
    return 0;
  }
  FUN_00d50b00();
  lVar8 = *arg1;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01511220;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    if (*(int64_t *)(lVar7 + 0x80) != 0) goto LAB_0151120c;
LAB_01511220:
    bVar1 = true;
  }
  else {
    if (*(int64_t *)(lVar8 + 0x80) == 0) goto LAB_01511220;
LAB_0151120c:
    FUN_00d50b00();
    FUN_00d50b20();
    bVar1 = false;
  }
  FUN_00d50b20();
  if (bVar1) {
    return 0;
  }
  plVar16 = (int64_t *)(this_ptr + 0x78);
  lVar8 = this_ptr;
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        return 1;
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x78) == 0);
    lVar8 = *(int64_t *)(lVar7 + 0x78);
  }
  else {
    lVar8 = *plVar16;
  }
  if (lVar8 == 0) {
    return 1;
  }
  FUN_00d50b00();
  plVar17 = (int64_t *)(this_ptr + 0x80);
  lVar8 = this_ptr;
  plVar15 = plVar17;
  local_50 = plVar16;
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01511378;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    plVar15 = (int64_t *)(lVar7 + 0x80);
  }
  if (*plVar15 == 0) {
LAB_01511378:
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    bVar1 = false;
  }
  FUN_00d50b20();
  if (bVar1) {
    return 1;
  }
  lVar8 = *arg1;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar8 + 0x78) == 0) {
    lVar7 = 0;
    do {
      lVar9 = *(int64_t *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        local_60 = 1;
        goto LAB_015113e4;
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(int64_t *)(lVar9 + 0x78) == 0);
    lVar7 = *(int64_t *)(lVar9 + 0x78);
  }
  else {
    lVar7 = *(int64_t *)(lVar8 + 0x78);
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_60 = 0;
LAB_015113e4:
  local_78 = lVar7;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_44 = FUN_018232b0();
  lVar8 = *arg1;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar8 + 0x80) == 0) {
    local_58 = (int64_t *)0x0;
    do {
      lVar9 = *(int64_t *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        uVar12 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
        goto LAB_0151156e;
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(int64_t *)(lVar9 + 0x80) == 0);
    plVar16 = *(int64_t **)(lVar9 + 0x80);
  }
  else {
    plVar16 = *(int64_t **)(lVar8 + 0x80);
  }
  if (plVar16 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar12 = 0;
  local_58 = plVar16;
LAB_0151156e:
  pvVar6 = _pthread_getspecific((void*)param_1);
  plVar16 = local_50;
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = local_58;
  }
  iVar3 = FUN_0124ae30();
  if (local_44 == iVar3) {
    local_5c = (uint)uVar12;
    if (*plVar16 == 0) {
      local_50 = (int64_t *)0x0;
      lVar8 = this_ptr;
      do {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        if (lVar7 == 0) {
          local_44 = 1;
          goto LAB_01511635;
        }
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar7 = *(int64_t *)(lVar8 + 0x50);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar8 = lVar7;
      } while (*(int64_t *)(lVar8 + 0x78) == 0);
      plVar16 = (int64_t *)(lVar8 + 0x78);
    }
    plVar16 = (int64_t *)*plVar16;
    if (plVar16 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_44 = 0;
    local_50 = plVar16;
LAB_01511635:
    pvVar6 = _pthread_getspecific((void*)param_1);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = local_50;
    }
    FUN_018232b0();
    pVar11 = (void*)param_1;
    plVar16 = plVar17;
    if (*plVar17 == 0) {
      lVar8 = 0;
      lVar7 = this_ptr;
      do {
        pVar11 = (void*)param_1;
        lVar9 = *(int64_t *)(lVar7 + 0x50);
        if (lVar9 == 0) {
          bVar1 = true;
          goto LAB_015116e3;
        }
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          lVar9 = *(int64_t *)(lVar7 + 0x50);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar11 = (void*)param_1;
        lVar7 = lVar9;
      } while (*(int64_t *)(lVar9 + 0x80) == 0);
      plVar16 = (int64_t *)(lVar9 + 0x80);
    }
    lVar8 = *plVar16;
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
LAB_015116e3:
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124ae30();
    if (!bVar1 && lVar8 != 0) {
      FUN_00d50b20();
    }
    uVar12 = (uint64_t)local_5c;
    if ((char)local_44 == '\0' && local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar12 == '\0' && local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  bVar10 = (byte)local_60 | local_78 == 0;
  uVar12 = (uint64_t)CONCAT31((int3)((uint)local_60 >> 8),bVar10);
  if (bVar10 == 0) {
    FUN_00d50b20();
  }
  lVar8 = *arg1;
  pvVar6 = _pthread_getspecific((void*)uVar12);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar8 + 0x80) == 0) {
    lVar7 = 0;
    do {
      lVar9 = *(int64_t *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        bVar1 = true;
        goto LAB_015117c1;
      }
      pvVar6 = _pthread_getspecific((void*)uVar12);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(int64_t *)(lVar9 + 0x80) == 0);
    lVar7 = *(int64_t *)(lVar9 + 0x80);
  }
  else {
    lVar7 = *(int64_t *)(lVar8 + 0x80);
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_015117c1:
  pvVar6 = _pthread_getspecific((void*)uVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_0124ae30();
  if (!bVar1 && lVar7 != 0) {
    FUN_00d50b20();
  }
  if (*plVar17 == 0) {
    lVar8 = 0;
    do {
      lVar7 = *(int64_t *)(this_ptr + 0x50);
      if (lVar7 == 0) {
        bVar1 = true;
        goto LAB_01511903;
      }
      pvVar6 = _pthread_getspecific((void*)uVar12);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(this_ptr + 0x50);
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      this_ptr = lVar7;
    } while (*(int64_t *)(this_ptr + 0x80) == 0);
    plVar17 = (int64_t *)(this_ptr + 0x80);
  }
  lVar8 = *plVar17;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_01511903:
  pvVar6 = _pthread_getspecific((void*)uVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_0124ae30();
  if (!bVar1 && lVar8 != 0) {
    FUN_00d50b20();
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (uVar5 == 0) {
    return 1;
  }
  if ((uVar5 & 0xfffffffe) == 2) {
    return 0;
  }
  if ((uVar4 & 0xfffffffe) == 2) {
    return 1;
  }
  FUN_0150d890();
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 == 0) {
    return 1;
  }
  FUN_0150d890();
  pvVar6 = _pthread_getspecific((void*)uVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  uVar13 = CONCAT71((int7)(uVar12 >> 8),local_a8[0]);
  pcVar14 = local_38;
  if (local_a8[0] != '\0') {
    pcVar14 = local_a8;
  }
  local_38[0] = local_a8[0];
  *pcVar14 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)uVar13);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific((void*)uVar13);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  lVar8 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    lVar7 = 0;
    bVar1 = false;
  }
  else {
    local_a8[0] = '\0';
    local_a0 = lVar8;
    local_90 = 0;
    local_98 = 0;
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar2 = false;
      lVar7 = 0;
      bVar1 = false;
    }
    else {
      iVar3 = 0;
      bVar1 = false;
      lVar7 = 0;
      do {
        pvVar6 = _pthread_getspecific((void*)uVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        lVar9 = local_70;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01511c05;
          }
        }
        else if (local_70 != 0) {
LAB_01511c05:
          if (lVar7 == 0) {
            FUN_00d50b00();
            bVar1 = true;
            lVar7 = lVar9;
          }
          FUN_00d50b20();
          if (lVar9 != lVar7) {
            bVar2 = true;
            goto LAB_01511c7e;
          }
        }
        iVar3 = iVar3 + 1;
        local_98 = CONCAT44(local_98._4_4_,iVar3);
      } while (iVar3 < *(int *)(lVar8 + 0xc));
      bVar2 = false;
    }
LAB_01511c7e:
    FUN_001159b0();
    if (bVar2) {
      bVar2 = false;
      goto LAB_01511c94;
    }
  }
  bVar2 = true;
LAB_01511c94:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    return 0;
  }
  return 1;
}



// ============================================================
// 01513590
// ============================================================
// Function: FUN_01513590
// Address: 01513590
// Size: 2000 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01513590(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  byte bVar11;
  void* pVar12;
  uint64_t uVar13;
  undefined7 uVar14;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar15;
  int64_t local_78;
  uint64_t local_50;
  uint32_t local_48;
  uint64_t local_40;
  char local_38;
  
  lVar8 = *arg1;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01513689;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    uVar13 = *(uint64_t *)(lVar7 + 0x80);
  }
  else {
    uVar13 = *(uint64_t *)(lVar8 + 0x80);
  }
  if (uVar13 == 0) {
LAB_01513689:
    uVar13 = 0;
    goto LAB_01513cec;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = (int64_t *)(this_ptr + 0x80);
  lVar8 = this_ptr;
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        local_78 = 0;
        goto LAB_015136c3;
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    local_78 = *(int64_t *)(lVar7 + 0x80);
  }
  else {
    local_78 = *plVar1;
  }
  if (local_78 != 0) {
    FUN_00d50b00();
  }
LAB_015136c3:
  cVar5 = FUN_00d51e10();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = uVar13;
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150ceb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\0') {
      uVar13 = CONCAT71((int7)(local_40 >> 8),1);
    }
    else {
      lVar8 = *arg1;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar8 = *arg1;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar8 + 0x78) == 0) {
        do {
          lVar7 = *(int64_t *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_0151394e;
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(int64_t *)(lVar7 + 0x78) == 0);
        if (*(int64_t *)(lVar7 + 0x78) == 0) goto LAB_0151394e;
LAB_015138f5:
        FUN_00d50b00();
        FUN_00d50b20();
        lVar8 = *arg1;
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar8 = *arg1;
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar12 = (void*)param_1;
        if (*(int64_t *)(lVar8 + 0x78) == 0) {
          lVar7 = 0;
          do {
            pVar12 = (void*)param_1;
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              bVar2 = true;
              goto LAB_015139d1;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(int64_t *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(int64_t *)
                          (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            pVar12 = (void*)param_1;
            lVar8 = lVar10;
          } while (*(int64_t *)(lVar10 + 0x78) == 0);
          lVar7 = *(int64_t *)(lVar10 + 0x78);
        }
        else {
          lVar7 = *(int64_t *)(lVar8 + 0x78);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar2 = false;
LAB_015139d1:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        local_50 = local_40;
        param_1 = local_40;
        if (local_40 == 0) {
          bVar4 = false;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar4 = true;
        }
        else {
          local_38 = '\0';
          bVar4 = true;
        }
        if (!bVar2 && lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(int64_t *)(lVar8 + 0x78) != 0) goto LAB_015138f5;
LAB_0151394e:
        bVar4 = false;
        local_50 = 0;
      }
      plVar15 = (int64_t *)(this_ptr + 0x78);
      lVar8 = this_ptr;
      if (*(int64_t *)(this_ptr + 0x78) == 0) {
        do {
          lVar7 = *(int64_t *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_01513b52;
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(int64_t *)(lVar7 + 0x78) == 0);
        lVar8 = *(int64_t *)(lVar7 + 0x78);
        if (lVar8 != 0) goto LAB_01513a8a;
LAB_01513b52:
        local_40 = 0;
        uVar9 = 0;
        bVar2 = false;
      }
      else {
        lVar8 = *plVar15;
        if (lVar8 == 0) goto LAB_01513b52;
LAB_01513a8a:
        FUN_00d50b00();
        uVar9 = FUN_00d50b20();
        pVar12 = (void*)param_1;
        if (*plVar15 == 0) {
          lVar7 = 0;
          lVar8 = this_ptr;
          do {
            pVar12 = (void*)param_1;
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              local_48 = (uint32_t)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
              goto LAB_01513b7e;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(int64_t *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(int64_t *)
                          (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            lVar8 = lVar10;
            uVar9 = 0;
            pVar12 = (void*)param_1;
          } while (*(int64_t *)(lVar8 + 0x78) == 0);
          plVar15 = (int64_t *)(lVar8 + 0x78);
        }
        lVar7 = *plVar15;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_48 = 0;
LAB_01513b7e:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_40 == 0) {
          uVar9 = 0;
          bVar2 = false;
        }
        else {
          uVar14 = (undefined7)((uint64_t)lVar8 >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
          else {
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
        }
        bVar11 = (byte)local_48 | lVar7 == 0;
        param_1 = (uint64_t)CONCAT31((int3)((uint)local_48 >> 8),bVar11);
        if (bVar11 == 0) {
          FUN_00d50b20();
        }
      }
      pVar12 = (void*)param_1;
      if (*plVar1 == 0) {
        lVar8 = 0;
        do {
          pVar12 = (void*)param_1;
          lVar7 = *(int64_t *)(this_ptr + 0x50);
          if (lVar7 == 0) {
            bVar3 = true;
            goto LAB_01513c20;
          }
          pvVar6 = _pthread_getspecific(pVar12);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(int64_t *)(this_ptr + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          this_ptr = lVar7;
          pVar12 = (void*)param_1;
        } while (*(int64_t *)(this_ptr + 0x80) == 0);
        lVar8 = *(int64_t *)(this_ptr + 0x80);
      }
      else {
        lVar8 = *plVar1;
      }
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      bVar3 = false;
LAB_01513c20:
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      uVar13 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      if ((bVar2) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar4) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar13 = 0;
  }
  FUN_00d50b20();
LAB_01513cec:
  return uVar13 & 0xffffffff;
}



// ============================================================
// 005039a0
// ============================================================
// Function: FUN_005039a0
// Address: 005039a0
// Size: 2394 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"

void FUN_005039a0(uint64_t param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar9 [16];
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  local_50 = (int64_t *)CONCAT44(local_50._4_4_,unaff_ESI);
  FUN_0197b900();
  (**(code **)(*local_60 + 0xa28))();
  plVar5 = local_40;
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((g_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0270ab28 = FUN_0015ea50();
    g_0270ab10 = "MUScalePitchSystem";
    g_0270ab18 = 0x78;
    g_0270ab20 = FUN_0015ecf0;
    g_0270ab30 = 0;
    ram_000000000270ab38 = 0;
    g_0270ab40 = 0;
    ram_000000000270ab48 = 0;
    g_0270ab50 = 0;
    ram_000000000270ab58 = 0;
    g_0270ab60 = 0;
    ram_000000000270ab68 = 0;
    g_0270ab70 = 0;
    ram_000000000270ab78 = 0;
    g_0270ab80 = 0;
    ram_000000000270ab88 = 0;
    g_0270ab90 = 0;
    ram_000000000270ab98 = 0;
    g_0270aba0 = 0;
    ram_000000000270aba8 = 0;
    g_0270abb0 = 0;
    ram_000000000270abb8 = 0;
    g_0270abc0 = 0;
    ram_000000000270abc8 = 0;
    g_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_00503a43:
    if (g_02802688 != 0) goto LAB_00503a54;
LAB_00503b0a:
    plVar5 = local_48;
    if ((g_027c0150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_0270acc8 = FUN_0015ea50();
      g_0270acb0 = "MUPercussivePitchSystem";
      g_0270acb8 = 0x58;
      g_0270acc0 = FUN_0015eca0;
      g_0270acd0 = 0;
      ram_000000000270acd8 = 0;
      g_0270ace0 = 0;
      ram_000000000270ace8 = 0;
      g_0270acf0 = 0;
      ram_000000000270acf8 = 0;
      g_0270ad00 = 0;
      ram_000000000270ad08 = 0;
      g_0270ad10 = 0;
      ram_000000000270ad18 = 0;
      g_0270ad20 = 0;
      ram_000000000270ad28 = 0;
      g_0270ad30 = 0;
      ram_000000000270ad38 = 0;
      g_0270ad40 = 0;
      ram_000000000270ad48 = 0;
      g_0270ad50 = 0;
      ram_000000000270ad58 = 0;
      g_0270ad60 = 0;
      ram_000000000270ad68 = 0;
      g_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503b50;
      if (local_48 != (int64_t *)0x0) goto LAB_00503ea8;
      goto LAB_00503f0c;
    }
LAB_00503b50:
    if (g_02802688 == 0) goto LAB_00503f0c;
LAB_00503ea8:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_0050ef30();
    if (plVar5 == (int64_t *)0x0) {
LAB_00503ee4:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503ee4;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) goto LAB_00503f0c;
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(void*)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(void*)(plVar5 + 0x2c) = 0;
    *plVar5 = (int64_t)&g_02656f08;
    plVar5[2] = (int64_t)&g_02657878;
    plVar5[0x27] = (int64_t)&g_026578b8;
    (*g_02656f20)();
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00503a43;
    if (local_48 == (int64_t *)0x0) goto LAB_00503b0a;
LAB_00503a54:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_00275460();
    if (plVar5 == (int64_t *)0x0) {
LAB_00503a90:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503a90;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar5 != (int64_t *)0x0 & (param_2 ^ 1)) != 0) {
LAB_00503f0c:
      bVar2 = true;
      bVar1 = true;
      plVar5 = (int64_t *)0x0;
      goto joined_r0x00504168;
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(void*)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(void*)(plVar5 + 0x2c) = 0;
    *plVar5 = (int64_t)&g_026449b8;
    plVar5[2] = (int64_t)&g_02645458;
    plVar5[0x27] = (int64_t)&g_02645498;
    plVar5[0x2d] = (int64_t)&g_026454e8;
    plVar5[0x2e] = (int64_t)&g_02645518;
    plVar5[0x2f] = (int64_t)&g_02645550;
    *(void*)((int64_t)plVar5 + 0x1dc) = 0;
    *(void*)(plVar5 + 0x3c) = 0;
    plVar5[99] = 0;
    plVar5[0x30] = 0;
    *(void*)(plVar5 + 0x31) = 0;
    *(void*)((int64_t)plVar5 + 0x18c) = 0;
    *(void*)((int64_t)plVar5 + 0x194) = 0;
    *(void*)((int64_t)plVar5 + 0x19c) = 0;
    plVar5[0x34] = 0;
    plVar5[0x35] = 0;
    *(void*)((int64_t)plVar5 + 0x1a9) = 0;
    *(void*)((int64_t)plVar5 + 0x1b1) = 0;
    *(void*)((int64_t)plVar5 + 0x1cb) = 0;
    *(void*)((int64_t)plVar5 + 0x1d3) = 0;
    *(void*)((int64_t)plVar5 + 0x1bc) = 0;
    *(void*)((int64_t)plVar5 + 0x1c4) = 0;
    *(void*)((int64_t)plVar5 + 500) = 0;
    *(void*)((int64_t)plVar5 + 0x1fc) = 0;
    *(void*)((int64_t)plVar5 + 0x1e4) = 0;
    *(void*)((int64_t)plVar5 + 0x1ec) = 0;
    *(void*)((int64_t)plVar5 + 0x203) = 0;
    *(void*)((int64_t)plVar5 + 0x279) = 0;
    *(void*)((int64_t)plVar5 + 0x281) = 0;
    *(void*)((int64_t)plVar5 + 0x26c) = 0;
    *(void*)((int64_t)plVar5 + 0x274) = 0;
    *(void*)((int64_t)plVar5 + 0x25c) = 0;
    *(void*)((int64_t)plVar5 + 0x264) = 0;
    *(void*)((int64_t)plVar5 + 0x24c) = 0;
    *(void*)((int64_t)plVar5 + 0x254) = 0;
    *(void*)((int64_t)plVar5 + 0x23c) = 0;
    *(void*)((int64_t)plVar5 + 0x244) = 0;
    *(void*)((int64_t)plVar5 + 0x22c) = 0;
    *(void*)((int64_t)plVar5 + 0x234) = 0;
    *(void*)((int64_t)plVar5 + 0x21c) = 0;
    *(void*)((int64_t)plVar5 + 0x224) = 0;
    *(void*)((int64_t)plVar5 + 0x20c) = 0;
    *(void*)((int64_t)plVar5 + 0x214) = 0;
    plVar5[0x54] = 0;
    plVar5[0x55] = 0;
    plVar5[0x52] = 0;
    plVar5[0x53] = 0;
    *(void*)(plVar5 + 0x56) = 0;
    plVar5[0x57] = 0;
    plVar5[0x58] = 0;
    *(void*)((int64_t)plVar5 + 0x2c1) = 0;
    *(void*)((int64_t)plVar5 + 0x2c9) = 0;
    plVar5[0x5f] = 0;
    plVar5[0x60] = 0;
    plVar5[0x5d] = 0;
    plVar5[0x5e] = 0;
    plVar5[0x5b] = 0;
    plVar5[0x5c] = 0;
    *(void*)((int64_t)plVar5 + 0x305) = 0;
    *(void*)((int64_t)plVar5 + 0x313) = 0;
    *(void*)(plVar5 + 0x62) = 0;
    (*g_026449d0)();
    FUN_01b150d0();
    FUN_01b15090();
    FUN_01b28220();
    FUN_01b182c0();
    plVar6 = g_02709e30;
    if (g_02709e30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar6;
    FUN_00e7d6f0();
    uVar8 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_60 = local_50;
    local_58 = '\0';
    FUN_000175c0(uVar8,&local_60);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_01b28af0();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (this_ptr[0x3f] != 0) {
      FUN_00249410();
      FUN_01b15090();
      FUN_00248dc0();
      FUN_01b150d0();
    }
  }
  FUN_01d98320();
  plVar6 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_01d98320();
    FUN_00d50130();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar6 + 0x18))();
  FUN_00504610();
  FUN_00d50b20();
  if ((this_ptr[0x45] != 0) && (FUN_00d50130(), this_ptr[0x45] != 0)) {
    this_ptr[0x45] = 0;
    FUN_00d50b20();
  }
  uVar8 = (**(code **)(*plVar5 + 0x938))();
  auVar9._8_8_ = extraout_XMM0_Qb;
  auVar9._0_8_ = uVar8;
  auVar9 = blendps(auVar9,g_023b4a30,0xe);
  (**(code **)(*plVar5 + 0x4d0))(0,auVar9._0_8_);
  FUN_01d980f0();
  (**(code **)(*this_ptr + 0x9f8))();
  (**(code **)(*this_ptr + 0x928))();
  FUN_00504770();
  bVar2 = false;
  bVar1 = false;
joined_r0x00504168:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1 && plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01514480
// ============================================================
// Function: FUN_01514480
// Address: 01514480
// Size: 2211 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01514480(int64_t param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar13;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  cVar3 = (char)param_1;
  lVar9 = *arg1;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *arg1;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar9 + 0x78) == 0) {
    do {
      lVar8 = *(int64_t *)(lVar9 + 0x50);
      if (lVar8 == 0) {
        return 0;
      }
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *(int64_t *)(lVar9 + 0x50);
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      lVar9 = lVar8;
    } while (*(int64_t *)(lVar8 + 0x78) == 0);
    lVar9 = *(int64_t *)(lVar8 + 0x78);
  }
  else {
    lVar9 = *(int64_t *)(lVar9 + 0x78);
  }
  if (lVar9 == 0) {
    return 0;
  }
  FUN_00d50b00();
  plVar1 = (int64_t *)(this_ptr + 0x78);
  lVar8 = this_ptr;
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    do {
      lVar10 = *(int64_t *)(lVar8 + 0x50);
      if (lVar10 == 0) goto LAB_01514701;
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar10 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar10;
    } while (*(int64_t *)(lVar10 + 0x78) == 0);
    lVar8 = *(int64_t *)(lVar10 + 0x78);
  }
  else {
    lVar8 = *plVar1;
  }
  if (lVar8 == 0) {
LAB_01514701:
    bVar4 = false;
    local_48 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    pVar11 = (void*)param_1;
    if (*plVar1 == 0) {
      lVar8 = 0;
      lVar10 = this_ptr;
      do {
        pVar11 = (void*)param_1;
        lVar12 = *(int64_t *)(lVar10 + 0x50);
        if (lVar12 == 0) {
          bVar2 = true;
          goto LAB_01514556;
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar10 + 0x50);
          lVar10 = FUN_00e8b990();
          if (lVar10 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
        }
        pVar11 = (void*)param_1;
        lVar10 = lVar12;
      } while (*(int64_t *)(lVar12 + 0x78) == 0);
      lVar8 = *(int64_t *)(lVar12 + 0x78);
    }
    else {
      lVar8 = *plVar1;
    }
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_01514556:
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_48 = local_40;
    param_1 = local_40;
    if (local_40 == 0) {
      bVar4 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      local_38 = '\0';
      bVar4 = true;
    }
    if (!bVar2 && lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific((void*)param_1);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = lVar9;
  }
  FUN_01822e80();
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_00d51e10();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    pvVar7 = _pthread_getspecific((void*)param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = lVar9;
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150d0b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      if (*plVar1 == 0) {
        lVar9 = 0;
        lVar8 = this_ptr;
        do {
          lVar10 = *(int64_t *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_015148de;
          }
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(int64_t *)(lVar10 + 0x78) == 0);
        lVar9 = *(int64_t *)(lVar10 + 0x78);
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015148de:
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x80) == 0) {
        lVar9 = 0;
        lVar8 = this_ptr;
        do {
          lVar10 = *(int64_t *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_01514aab;
          }
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(int64_t *)(lVar10 + 0x80) == 0);
        lVar9 = *(int64_t *)(lVar10 + 0x80);
      }
      else {
        lVar9 = *(int64_t *)(this_ptr + 0x80);
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01514aab:
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  uVar13 = (uint64_t)uVar5 ^ 1;
  if (param_2 != '\0') {
    if (*plVar1 == 0) {
      lVar9 = 0;
      lVar8 = this_ptr;
      do {
        lVar10 = *(int64_t *)(lVar8 + 0x50);
        if (lVar10 == 0) {
          bVar2 = true;
          goto LAB_01514b87;
        }
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar10 = *(int64_t *)(lVar8 + 0x50);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar8 = lVar10;
      } while (*(int64_t *)(lVar10 + 0x78) == 0);
      lVar9 = *(int64_t *)(lVar10 + 0x78);
    }
    else {
      lVar9 = *plVar1;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_01514b87:
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_018232b0();
    if (!bVar2 && lVar9 != 0) {
      FUN_00d50b20();
    }
    pVar11 = (void*)param_1;
    if (iVar6 != 2) {
      if (*plVar1 == 0) {
        lVar9 = 0;
        do {
          pVar11 = (void*)param_1;
          lVar8 = *(int64_t *)(this_ptr + 0x50);
          if (lVar8 == 0) {
            bVar2 = true;
            goto LAB_01514bf9;
          }
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            lVar8 = *(int64_t *)(this_ptr + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          this_ptr = lVar8;
          pVar11 = (void*)param_1;
        } while (*(int64_t *)(this_ptr + 0x78) == 0);
        lVar9 = *(int64_t *)(this_ptr + 0x78);
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01514bf9:
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018232c0();
      uVar13 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar13;
}



// ============================================================
// 0150ddd0
// ============================================================
// Function: FUN_0150ddd0
// Address: 0150ddd0
// Size: 2375 bytes
// Class: MUPercussivePitchSystem

void FUN_0150ddd0(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  int64_t *plVar9;
  char cVar10;
  void *pvVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t lVar15;
  void* pVar16;
  int64_t lVar17;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar18;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_50;
  
  plVar9 = local_78;
  pVar16 = (void*)param_1;
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    do {
      lVar15 = *(int64_t *)(this_ptr + 0x50);
      if (lVar15 == 0) goto LAB_0150dea5;
      pvVar11 = _pthread_getspecific((void*)param_1);
      if (pvVar11 != (void *)0x0) {
        lVar15 = *(int64_t *)(this_ptr + 0x50);
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar15 = *(int64_t *)(lVar15 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      pVar16 = (void*)param_1;
      this_ptr = lVar15;
    } while (*(int64_t *)(lVar15 + 0x78) == 0);
    lVar15 = *(int64_t *)(lVar15 + 0x78);
  }
  else {
    lVar15 = *(int64_t *)(this_ptr + 0x78);
  }
  if (lVar15 == 0) {
LAB_0150dea5:
    FUN_0176fff0();
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
    pvVar11 = _pthread_getspecific(pVar16);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    bVar1 = false;
  }
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  pcVar8 = g_025ecda8;
  lVar15 = *arg1;
  if (*(int *)(lVar15 + 0xc) < 1) {
    bVar4 = false;
    local_68 = (int64_t *)0x0;
    bVar6 = false;
    local_50 = (int64_t *)0x0;
    bVar3 = false;
    local_80 = (int64_t *)0x0;
    bVar2 = false;
    lVar12 = 0;
  }
  else {
    lVar18 = 0;
    lVar12 = 0;
    bVar2 = false;
    local_80 = (int64_t *)0x0;
    bVar3 = false;
    local_50 = (int64_t *)0x0;
    bVar6 = false;
    local_68 = (int64_t *)0x0;
    lVar17 = 0;
    bVar4 = false;
    do {
      pVar16 = (void*)lVar17;
      lVar15 = *(int64_t *)(*(int64_t *)(lVar15 + 0x10) + lVar18 * 8);
      if (lVar12 == lVar15) {
        if ((!bVar2) && (lVar12 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar12 = lVar15;
        }
        else {
          bVar2 = true;
          lVar12 = lVar15;
        }
      }
      pvVar11 = _pthread_getspecific(pVar16);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_78 == local_80) {
        if ((!bVar3) && (local_78 != (int64_t *)0x0)) {
          bVar3 = true;
          if (local_70 != '\0') goto LAB_0150e15e;
          FUN_00d50b00();
LAB_0150e117:
          bVar3 = true;
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (bVar3) {
          if (local_80 != (int64_t *)0x0) {
            FUN_00d50b20();
            local_80 = local_78;
            goto LAB_0150e117;
          }
          local_80 = local_78;
          bVar3 = true;
        }
        else {
          local_80 = local_78;
          bVar3 = true;
        }
      }
      else if ((bVar3) && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_80 = local_78;
        bVar3 = true;
      }
      else {
        local_80 = local_78;
        bVar3 = true;
      }
LAB_0150e15e:
      pvVar11 = _pthread_getspecific(pVar16);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar10 = FUN_0125a2d0();
      if (cVar10 != '\0') {
        pvVar11 = _pthread_getspecific(pVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_78 == local_68) {
          plVar13 = local_68;
          bVar5 = bVar4;
          if ((!bVar4) && (local_78 != (int64_t *)0x0)) {
            if (local_70 != '\0') {
              bVar5 = true;
              goto LAB_0150e294;
            }
            FUN_00d50b00();
            bVar5 = true;
          }
LAB_0150e280:
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar13 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar4) && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e280;
          }
          if ((bVar4) && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar5 = true;
        }
LAB_0150e294:
        if (plVar13 == (int64_t *)0x0) {
          plVar13 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar13 = (int64_t)&g_025ecd90;
          *(void*)((int64_t)plVar13 + 0x54) = 0;
          *(void*)(plVar13 + 0xb) = 0;
          plVar13[7] = 0;
          plVar13[8] = 0;
          *(void*)((int64_t)plVar13 + 0x42) = 0;
          *(void*)((int64_t)plVar13 + 0x4a) = 0;
          *(void*)((int64_t)plVar13 + 0x5c) = 0;
          *(void*)((int64_t)plVar13 + 100) = 0;
          *(void*)((int64_t)plVar13 + 0x6c) = 0;
          (*pcVar8)();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c470();
          bVar5 = true;
        }
        pvVar11 = _pthread_getspecific(pVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_78 == local_50) {
          plVar14 = local_50;
          bVar7 = bVar6;
          if ((!bVar6) && (local_78 != (int64_t *)0x0)) {
            if (local_70 != '\0') {
              bVar7 = true;
              goto LAB_0150e454;
            }
            FUN_00d50b00();
            bVar7 = true;
          }
LAB_0150e440:
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar14 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar7 = true;
            if ((bVar6) && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e440;
          }
          if ((bVar6) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar7 = true;
        }
LAB_0150e454:
        if (plVar14 == (int64_t *)0x0) {
          plVar14 = (int64_t *)FUN_0117a3f0();
          (**(code **)(*plVar14 + 0x18))();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508860();
          FUN_0150d3a0();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar16 = (void*)plVar9;
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar16 = (void*)lVar12;
          }
          FUN_0125dfa0();
          FUN_01773f20();
          FUN_01508220();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152dc80();
          bVar7 = true;
          FUN_0150d720();
        }
        local_70 = '\0';
        cVar10 = FUN_00d23d70();
        local_78 = plVar14;
        local_68 = plVar13;
        local_50 = plVar14;
        bVar4 = bVar5;
        bVar6 = bVar7;
        if (cVar10 == '\0') {
          FUN_0150d3a0();
          FUN_0150d720();
        }
      }
      lVar18 = lVar18 + 1;
      lVar15 = *arg1;
      lVar17 = (int64_t)*(int *)(lVar15 + 0xc);
    } while (lVar18 < lVar17);
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01512be0
// ============================================================
// Function: FUN_01512be0
// Address: 01512be0
// Size: 1756 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01512be0(uint64_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  byte bVar8;
  void* pVar9;
  bool bVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar14;
  int64_t local_78;
  uint32_t local_50;
  int64_t local_48;
  char local_40;
  
  lVar11 = *arg1;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar11 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar11 + 0x78) == 0) {
    do {
      lVar4 = *(int64_t *)(lVar11 + 0x50);
      if (lVar4 == 0) goto LAB_01512cc6;
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(int64_t *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(int64_t *)(lVar4 + 0x78) == 0);
    lVar11 = *(int64_t *)(lVar4 + 0x78);
  }
  else {
    lVar11 = *(int64_t *)(lVar11 + 0x78);
  }
  if (lVar11 == 0) {
LAB_01512cc6:
    uVar12 = 0;
    goto LAB_015130fa;
  }
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar14 = (int64_t *)(this_ptr + 0x78);
  lVar11 = this_ptr;
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    do {
      lVar4 = *(int64_t *)(lVar11 + 0x50);
      if (lVar4 == 0) {
        local_78 = 0;
        goto LAB_01512cfd;
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(int64_t *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(int64_t *)(lVar4 + 0x78) == 0);
    local_78 = *(int64_t *)(lVar4 + 0x78);
  }
  else {
    local_78 = *plVar14;
  }
  if (local_78 != 0) {
    FUN_00d50b00();
  }
LAB_01512cfd:
  cVar2 = FUN_00d51e10();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
LAB_01512ed4:
      lVar11 = 0;
      bVar1 = false;
    }
    else {
      lVar11 = this_ptr;
      if (*plVar14 == 0) {
        do {
          lVar4 = *(int64_t *)(lVar11 + 0x50);
          if (lVar4 == 0) {
            lVar11 = 0;
            bVar1 = false;
            goto LAB_01512edc;
          }
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(int64_t *)(lVar11 + 0x50);
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
            }
          }
          lVar11 = lVar4;
        } while (*(int64_t *)(lVar4 + 0x78) == 0);
        lVar11 = *(int64_t *)(lVar4 + 0x78);
      }
      else {
        lVar11 = *plVar14;
      }
      if (lVar11 == 0) goto LAB_01512ed4;
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
      pVar9 = (void*)param_1;
      plVar13 = plVar14;
      if (*plVar14 == 0) {
        lVar11 = 0;
        lVar4 = this_ptr;
        do {
          pVar9 = (void*)param_1;
          lVar6 = *(int64_t *)(lVar4 + 0x50);
          if (lVar6 == 0) {
            local_50 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            goto LAB_0151324b;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar6 = *(int64_t *)(lVar4 + 0x50);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          uVar5 = 0;
          pVar9 = (void*)param_1;
          lVar4 = lVar6;
        } while (*(int64_t *)(lVar6 + 0x78) == 0);
        plVar13 = (int64_t *)(lVar6 + 0x78);
      }
      lVar11 = *plVar13;
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      local_50 = 0;
LAB_0151324b:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if (local_48 == 0) {
        bVar1 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_40 = '\0';
        bVar1 = true;
      }
      bVar8 = (byte)local_50 | lVar11 == 0;
      param_1 = (uint64_t)CONCAT31((int3)((uint)local_50 >> 8),bVar8);
      lVar11 = local_48;
      if (bVar8 == 0) {
        FUN_00d50b20();
      }
    }
LAB_01512edc:
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_0150d0b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = local_48;
    if (param_2 != '\0') {
      if (*plVar14 == 0) {
        lVar4 = 0;
        lVar6 = this_ptr;
        do {
          lVar7 = *(int64_t *)(lVar6 + 0x50);
          if (lVar7 == 0) {
            bVar10 = true;
            goto LAB_01512faa;
          }
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar7 = *(int64_t *)(lVar6 + 0x50);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
          }
          lVar6 = lVar7;
        } while (*(int64_t *)(lVar6 + 0x78) == 0);
        lVar4 = *(int64_t *)(lVar6 + 0x78);
      }
      else {
        lVar4 = *plVar14;
      }
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      bVar10 = false;
LAB_01512faa:
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (!bVar10 && lVar4 != 0) {
        FUN_00d50b20();
      }
      pVar9 = (void*)param_1;
      if (*(int64_t *)(this_ptr + 0x80) == 0) {
        lVar6 = 0;
        do {
          pVar9 = (void*)param_1;
          lVar4 = *(int64_t *)(this_ptr + 0x50);
          if (lVar4 == 0) {
            bVar10 = true;
            goto LAB_01513032;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(int64_t *)(this_ptr + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          this_ptr = lVar4;
          pVar9 = (void*)param_1;
        } while (*(int64_t *)(this_ptr + 0x80) == 0);
      }
      lVar6 = *(int64_t *)(this_ptr + 0x80);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar10 = false;
LAB_01513032:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      lVar4 = 0;
      if (!bVar10 && lVar6 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    uVar12 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
    if ((bVar1) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = 0;
  }
  FUN_00d50b20();
LAB_015130fa:
  return uVar12 & 0xffffffff;
}



// ============================================================
// 00505840
// ============================================================
// Function: FUN_00505840
// Address: 00505840
// Size: 2219 bytes
// Class: MUPercussivePitchSystem

void FUN_00505840(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  uint64_t uVar6;
  void*puVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  double dVar9;
  uint64_t uVar10;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (arg1[0x40] == 0) {
    (**(code **)(*arg1 + 0x640))();
    uVar8 = (**(code **)(*local_40 + 0x580))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(void*)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(void*)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(void*)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(void*)((int64_t)puVar7 + 0x165) = 0;
    *(void*)((int64_t)puVar7 + 0x18c) = 0;
    *(void*)((int64_t)puVar7 + 0x194) = 0;
    *(void*)((int64_t)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &g_02677e10;
    puVar7[2] = &g_026788e8;
    puVar7[0x39] = &g_02678928;
    *(void*)((int64_t)puVar7 + 500) = 0;
    *(void*)(puVar7 + 0x3f) = 0;
    puVar7[0x43] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3d] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x3b] = 0;
    *(void*)(puVar7 + 0x3e) = 0;
    *(void*)((int64_t)puVar7 + 0x1fc) = 0;
    *(void*)((int64_t)puVar7 + 0x204) = 0;
    *(void*)((int64_t)puVar7 + 0x20c) = 0;
    (*g_02677e28)();
    puVar1 = (void*)arg1[0x40];
    if (puVar1 == puVar7) {
      FUN_00d50b20();
    }
    else {
      arg1[0x40] = (int64_t)puVar7;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)arg1[0x40] + 0x4d0))(0,uVar8);
    lVar3 = g_02709e50;
    plVar2 = (int64_t *)arg1[0x40];
    if (g_02709e50 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa10))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_026e1800;
    if (g_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar9 = (double)FUN_00e7d6f0();
    uVar6 = (uint64_t)(dVar9 * g_023907c0);
    dVar9 = dVar9 * g_023907c0 - g_023907c8;
    uVar10 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
    local_50 = lVar3;
    local_48 = '\0';
    FUN_000175c0(uVar10,&local_50);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_02709e60;
    if ((plVar2 != (int64_t *)0x0 & bVar5) != 0) {
      if (g_02709e60 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01cef3b0();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01cef450();
    FUN_01cef4c0();
    FUN_01d0fe80();
    lVar3 = g_026f6f70;
    plVar2 = (int64_t *)arg1[0x40];
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_026deab8;
    if (g_026deab8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d31230(&local_b0,&local_c0);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar2 + 0x6a8))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar3;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((plVar2 != (int64_t *)0x0 & bVar5) == 0) {
    FUN_01cef410();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      local_88 = '\0';
      local_90 = 0;
      FUN_01cef3b0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01cef410();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = g_02709e60;
    if (plVar2 == (int64_t *)0x0) {
      if (g_02709e60 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      FUN_01d51a40();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_01cef3b0();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar3 = arg1[0x40];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00504b00
// ============================================================
// Function: FUN_00504b00
// Address: 00504b00
// Size: 1891 bytes
// Class: MUPercussivePitchSystem

void FUN_00504b00(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  char cVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t **pplVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar11 [16];
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_00504b52:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00504b52;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (this_ptr[0x42] != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        local_78 = 0;
        lVar2 = this_ptr[0x42];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\x01';
        local_80 = lVar2;
        (**(code **)(*this_ptr + 0x470))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(void*)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(void*)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(void*)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(void*)((int64_t)puVar7 + 0x165) = 0;
    *(void*)((int64_t)puVar7 + 0x18c) = 0;
    *(void*)((int64_t)puVar7 + 0x194) = 0;
    *(void*)((int64_t)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &g_02645fa8;
    puVar7[2] = &g_02646a70;
    puVar7[0x39] = 0;
    puVar7[0x3a] = 0;
    *(void*)((int64_t)puVar7 + 0x1d7) = 0;
    puVar7[0x3f] = 0;
    puVar7[0x40] = 0;
    *(void*)((int64_t)puVar7 + 0x1ec) = 0;
    *(void*)((int64_t)puVar7 + 500) = 0;
    *(void*)((int64_t)puVar7 + 0x1dc) = 0;
    *(void*)((int64_t)puVar7 + 0x1e4) = 0;
    (*g_02645fc0)();
    puVar3 = (void*)this_ptr[0x42];
    if (puVar3 == puVar7) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x42] = (int64_t)puVar7;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (int64_t *)this_ptr[0x42];
    uVar5 = FUN_01b2b5d0();
    auVar11._8_4_ = extraout_XMM0_Dc;
    auVar11._0_8_ = uVar5;
    auVar11._12_4_ = extraout_XMM0_Dd;
    auVar11 = insertps(g_023b4a40,auVar11,0x10);
    (**(code **)(*plVar4 + 0x4d0))(0,auVar11._0_8_);
    (**(code **)(*(int64_t *)this_ptr[0x42] + 0x558))();
    local_68 = 0;
    local_70 = this_ptr[0x42];
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_01b0ac50();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02709e38;
    plVar4 = (int64_t *)this_ptr[0x42];
    if (g_02709e38 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x42] + 0xa20))();
    FUN_01b2ff20(g_023b4a10);
    FUN_01b2ff30(g_023b4a14);
    FUN_01b2fe80();
    if (this_ptr[0x45] != 0) {
      FUN_00d50130();
    }
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_000161a0();
    (**(code **)(*plVar8 + 0x18))();
    plVar4 = (int64_t *)this_ptr[0x45];
    if (plVar4 == plVar8) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x45] = (int64_t)plVar8;
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    uVar10 = (**(code **)(*plVar8 + 0x18))();
    plVar4 = g_02709e40;
    if (g_02709e40 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    local_40 = plVar4;
    local_38 = '\0';
    uVar10 = FUN_00ca0840(uVar10,&local_40);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = g_027e3c80;
    plVar4 = (int64_t *)this_ptr[0x45];
    if (g_027e3c80 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_98 = '\0';
    local_a0 = plVar8;
    (**(code **)(*plVar4 + 0x508))(uVar10,&local_a0);
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x990))();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01b214b0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ad48c0();
    FUN_004fe810();
    FUN_01e53c20();
    plVar4 = local_40;
    (**(code **)(*plVar1 + 0x640))();
    local_50 = local_90;
    local_48 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar4 + 0x638))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00504610();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_0050ef30();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 != '\0') goto LAB_005051cd;
  }
  pplVar9 = (int64_t **)&g_02802688;
LAB_005051cd:
  plVar1 = *pplVar9;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x990))();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00504610();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 014fdd70
// ============================================================
// Function: FUN_014fdd70
// Address: 014fdd70
// Size: 2679 bytes
// Class: MUPercussivePitchSystem

void* FUN_014fdd70(void)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  code *pcVar3;
  char cVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void*puVar8;
  void *pvVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  int64_t local_78;
  char local_70;
  int local_60;
  
  lVar13 = local_78;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(void*)(puVar5 + 9) = 0;
  *puVar5 = &g_025fee18;
  *(void*)((int64_t)puVar5 + 0x6c) = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(void*)(puVar5 + 0xd) = 0;
  (*g_025fee30)();
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*plVar6 + 0x18))();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*plVar7 + 0x18))();
  pcVar3 = g_025ffd78;
  lVar1 = *(int64_t *)(arg1 + 0x60);
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    uVar14 = 0;
    iVar15 = 0;
    do {
      pVar11 = 0xaaaaaaab;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14;
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_025ffd60;
      puVar8[7] = 0;
      puVar8[8] = 0;
      (*pcVar3)();
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar17 = (float)(int)uVar14 * g_023908e0;
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152c0c0();
      pVar11 = iVar15 + (SUB164(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffff8) * -0xc;
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014f9e30();
      FUN_01779ed0(fVar17 + fVar18);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar9 = _pthread_getspecific(pVar11);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = (void*)plVar6;
      }
      FUN_0176fde0();
      FUN_00d50b20();
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + 8;
    } while ((int)uVar14 != 0xd);
    pvVar9 = _pthread_getspecific(pVar11);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar11 = (void*)plVar7;
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152b9f0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01735c40();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152c0c0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
        goto LAB_014fe24b;
      }
LAB_014fe512:
      bVar16 = true;
    }
    else {
      if (local_78 == 0) goto LAB_014fe512;
LAB_014fe24b:
      pcVar3 = g_025fe688;
      local_70 = '\0';
      local_78 = 0;
      local_60 = -1;
      while( true ) {
        lVar10 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar13 + 0xc) <= local_60) break;
        lVar12 = *(int64_t *)(lVar13 + 0x10);
        local_78 = *(int64_t *)(lVar12 + 8 + lVar10 * 8);
        puVar8 = (void*)FUN_00e8fc40();
        pVar11 = (void*)lVar12;
        FUN_00d4ff40();
        *puVar8 = &g_025fe670;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        (*pcVar3)();
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_014f9e20();
        pVar11 = 0x2802558;
        if (cVar4 == '\0') {
          pvVar9 = _pthread_getspecific(0x2802558);
          lVar10 = g_027cd580;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
            lVar10 = g_027cd580;
          }
          g_027cd580 = lVar10;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          FUN_017395b0();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar9 = _pthread_getspecific(0x2802558);
          lVar10 = g_027cd560;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
            lVar10 = g_027cd560;
          }
          g_027cd560 = lVar10;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          FUN_017395b0();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01735cb0();
        FUN_00d50b20();
      }
      FUN_014ff010();
      pVar11 = (void*)lVar13;
      bVar16 = false;
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b720();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b680();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c60();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar17 = (float)_logf(*(float *)(arg1 + 0x5c) / g_02411fd0);
    FUN_01770230(fVar17 * g_02394208);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_01769110();
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar16) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      bVar16 = true;
      goto joined_r0x014fe7ed;
    }
  }
  bVar16 = lVar1 != 0;
  FUN_00d50b20();
joined_r0x014fe7ed:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!(bool)(bVar16 | puVar5 == (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 015189a0
// ============================================================
// Function: FUN_015189a0
// Address: 015189a0
// Size: 2392 bytes
// Class: MUPercussivePitchSystem

void FUN_015189a0(uint64_t param_1,uint64_t param_2,uint32_t param_3,void*param_4)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void* in_ECX;
  void* pVar7;
  uint32_t in_EDX;
  char unaff_SIL;
  void*local_res8;
  int64_t local_118;
  uint8_t local_110;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  void*local_c0;
  uint32_t local_b8;
  void* local_b4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  uint32_t local_8c;
  uint64_t local_88;
  int64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = in_EDX;
  local_b4 = in_ECX;
  local_88 = param_1;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  local_68 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (void*)local_68;
  }
  FUN_012e8920();
  local_58 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (void*)local_58;
  }
  FUN_012caf10();
  local_80 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (void*)local_58;
  }
  FUN_012cade0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01657380();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df10();
  local_60 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) goto LAB_01519296;
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (void*)local_60;
  }
  FUN_0132d610();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (void*)local_60;
  }
  FUN_0132d900();
  lVar4 = local_40;
  local_8c = param_3;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  if (unaff_SIL == '\0') {
    local_88 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
  }
  else {
    pvVar3 = _pthread_getspecific(in_ECX);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_ECX = (void*)local_48;
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016553c0(local_88);
    pVar7 = 0;
    local_88 = FUN_016cb5f0(0,0);
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (void*)local_48;
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016553c0(local_c8);
    in_ECX = 0;
    uVar6 = FUN_016cb5f0(0,0);
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = local_50;
  local_110 = 0;
  pVar7 = 1;
  FUN_01519670(1,&local_118);
  if (lVar4 == local_40) {
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
LAB_0151906e:
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_0151906e;
    }
    lVar4 = local_40;
  }
  else {
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_0151906e;
    }
    lVar4 = local_40;
  }
  if ((char)local_b8 != '\0') {
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = '\0';
    bVar1 = FUN_01514480(0,(uint8_t)local_8c);
    local_70 = '\0';
    local_b0 = local_48;
    local_a8 = '\0';
    local_a0 = local_80;
    local_98 = '\0';
    pVar7 = (void*)&local_a0;
    bVar2 = FUN_01515040(0,&local_b0,local_88,uVar6);
    if (((bVar2 | bVar1) == 1) && (local_c0 != (void*)0x0)) {
      *local_c0 = 1;
    }
  }
  if ((char)local_b4 != '\0') {
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_100 = 0;
    local_f8 = local_48;
    local_f0 = 0;
    local_e8 = local_80;
    local_e0 = 0;
    local_d8 = local_68;
    local_d0 = 0;
    bVar1 = FUN_01516720(0,&local_f8,local_88,uVar6);
    if ((bVar1 & local_res8 != (void*)0x0) == 1) {
      *local_res8 = 1;
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01519296:
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  lVar4 = local_58;
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01512000
// ============================================================
// Function: FUN_01512000
// Address: 01512000
// Size: 1446 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01512000(void* param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void* pVar9;
  char *pcVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar11;
  char cVar12;
  uint64_t uVar13;
  undefined7 uVar14;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88 [8];
  int64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  char local_38 [8];
  
  lVar6 = *arg1;
  if (lVar6 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar6 + 0x88) == 0) {
      lVar5 = 0;
      do {
        lVar7 = *(int64_t *)(lVar6 + 0x50);
        if (lVar7 == 0) {
          bVar1 = true;
          goto LAB_01512080;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar7 = *(int64_t *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar7;
      } while (*(int64_t *)(lVar7 + 0x88) == 0);
      lVar5 = *(int64_t *)(lVar7 + 0x88);
    }
    else {
      lVar5 = *(int64_t *)(lVar6 + 0x88);
    }
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
LAB_01512080:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_018847d0();
    if (!bVar1 && lVar5 != 0) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x88) == 0) {
      lVar6 = 0;
      do {
        lVar5 = *(int64_t *)(this_ptr + 0x50);
        if (lVar5 == 0) {
          uVar14 = (undefined7)((uint64_t)this_ptr >> 8);
          bVar1 = true;
          goto LAB_015120f3;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar5 = *(int64_t *)(this_ptr + 0x50);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        this_ptr = lVar5;
      } while (*(int64_t *)(lVar5 + 0x88) == 0);
      lVar6 = *(int64_t *)(lVar5 + 0x88);
    }
    else {
      lVar6 = *(int64_t *)(this_ptr + 0x88);
    }
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
    uVar14 = 0;
LAB_015120f3:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_018847d0();
    if (!bVar1 && lVar6 != 0) {
      FUN_00d50b20();
    }
    if (uVar2 != 0) {
      uVar13 = CONCAT71(uVar14,1);
      if (uVar3 == 0) goto LAB_01512155;
      if ((uVar3 & 0xfffffffe) == 2) goto LAB_01512152;
      if ((uVar2 & 0xfffffffe) == 2) goto LAB_01512155;
      FUN_0150d890();
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 == 0) goto LAB_01512155;
      FUN_0150d890();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      pVar9 = CONCAT31((int3)(param_1 >> 8),local_88[0]);
      pcVar10 = local_38;
      if (local_88[0] != '\0') {
        pcVar10 = local_88;
      }
      local_38[0] = local_88[0];
      *pcVar10 = '\0';
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      lVar6 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 == 0) {
        cVar12 = '\0';
        lVar5 = 0;
LAB_01512585:
        bVar1 = true;
      }
      else {
        local_88[0] = '\0';
        local_80 = lVar6;
        local_70 = 0;
        local_78 = 0;
        if (*(int *)(lVar6 + 0xc) < 1) {
          bVar1 = false;
          cVar12 = '\0';
          lVar5 = 0;
        }
        else {
          iVar11 = 0;
          lVar5 = 0;
          local_58 = 0;
          do {
            pvVar4 = _pthread_getspecific(pVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            lVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_015124e7;
              }
            }
            else if (local_50 != 0) {
LAB_015124e7:
              if (lVar5 == 0) {
                uVar8 = FUN_00d50b00();
                local_58 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                lVar5 = lVar7;
              }
              FUN_00d50b20();
              if (lVar7 != lVar5) {
                bVar1 = true;
                cVar12 = (char)local_58;
                goto LAB_01512571;
              }
            }
            iVar11 = iVar11 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar11);
          } while (iVar11 < *(int *)(lVar6 + 0xc));
          bVar1 = false;
          cVar12 = (char)local_58;
        }
LAB_01512571:
        FUN_001159b0();
        if (!bVar1) goto LAB_01512585;
        bVar1 = false;
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((cVar12 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (bVar1) goto LAB_01512155;
    }
  }
LAB_01512152:
  uVar13 = 0;
LAB_01512155:
  return uVar13 & 0xffffffff;
}



// ============================================================
// 00506830
// ============================================================
// Function: FUN_00506830
// Address: 00506830
// Size: 1651 bytes
// Class: MUPercussivePitchSystem

void FUN_00506830(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  float fVar5;
  uint32_t extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar7;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  uint64_t uVar6;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  uint32_t extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float fVar11;
  float fVar12;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar8 = (float)param_2;
  FUN_01d96f70();
  uVar4 = (**(code **)(*this_ptr + 0x640))();
  plVar2 = local_50;
  local_98 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar2 + 0x3b0))(uVar4,&local_98);
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  lVar1 = this_ptr[0x49];
  if (lVar1 == 0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02680400;
    *(void*)((int64_t)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(void*)((int64_t)puVar3 + 0x39) = 0;
    *(void*)((int64_t)puVar3 + 0x41) = 0;
    (*g_02680418)();
    lVar1 = this_ptr[0x49];
    this_ptr[0x49] = (int64_t)puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d9aea0();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      FUN_01d97e80();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d9aea0();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d97e80();
    (**(code **)(*local_40 + 0x4d8))();
    FUN_01d39400((float)local_68,extraout_XMM0_Db);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    FUN_01d97e80();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_00;
    in_XMM1_Dc = extraout_XMM0_Dd;
    FUN_01d38ba0((float)local_68,extraout_XMM0_Db_00);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this_ptr + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_01 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_00 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + g_02390d00);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this_ptr + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_02 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_01 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + g_02390d00);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this_ptr + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_03 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_02 + in_XMM1_Dc;
    fVar8 = fVar7 + g_02390d00 + g_023b2664;
    FUN_01d38ba0((float)local_68);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x49];
    plVar2 = (int64_t *)*arg1;
  }
  else {
    plVar2 = (int64_t *)*arg1;
  }
  if (lVar1 != 0) {
    local_80 = 0;
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  (**(code **)(*plVar2 + 0x3a8))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x950))();
  uVar6 = (**(code **)(*local_40 + 0x4d8))();
  fVar9 = fVar8;
  local_68 = uVar6;
  (**(code **)(*this_ptr + 0x950))();
  (**(code **)(*local_50 + 0x4d8))();
  fVar10 = fVar7;
  fVar11 = fVar9;
  fVar12 = in_XMM1_Dc;
  (**(code **)(*this_ptr + 0x950))();
  fVar5 = (float)(**(code **)(*local_c8 + 0x4d8))();
  uVar4 = extraout_XMM0_Dc;
  (**(code **)(*this_ptr + 0x950))();
  (**(code **)(*local_b8 + 0x4d8))();
  (**(code **)(*plVar2 + 0x3e0))
            ((float)local_68 + fVar8 + g_02390d00,extraout_XMM0_Db_04 + fVar7 + g_02390d00,
             fVar5 + fVar9 + g_02390d00,extraout_XMM0_Db_05 + fVar10 + g_02390d00 + g_023b2664
             ,fVar11,fVar12,fVar5,uVar4,fVar9,in_XMM1_Dc);
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01519670
// ============================================================
// Function: FUN_01519670
// Address: 01519670
// Size: 1590 bytes
// Class: MUPercussivePitchSystem

int64_t * FUN_01519670(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t arg1;
  int64_t *this_ptr;
  float fVar11;
  float fVar12;
  uint32_t uVar13;
  uint8_t local_78 [8];
  uint8_t local_70;
  int64_t local_40;
  char local_38;
  
  if (*param_2 == arg1) {
    *(void*)(this_ptr + 1) = 0;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = arg1;
  }
  else {
    if (*(int64_t *)(arg1 + 0x78) == 0) {
      lVar7 = 0;
      lVar5 = arg1;
      do {
        lVar9 = *(int64_t *)(lVar5 + 0x50);
        if (lVar9 == 0) {
          bVar2 = true;
          goto LAB_015196c0;
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          lVar9 = *(int64_t *)(lVar5 + 0x50);
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        lVar5 = lVar9;
      } while (*(int64_t *)(lVar9 + 0x78) == 0);
      lVar7 = *(int64_t *)(lVar9 + 0x78);
    }
    else {
      lVar7 = *(int64_t *)(arg1 + 0x78);
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_015196c0:
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_01773e80();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2 && lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *param_2;
    if (lVar7 == 0) {
      fVar12 = (float)FUN_01773e50();
    }
    else {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        lVar7 = *param_2;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar7 + 0x78) == 0) {
        lVar5 = 0;
        do {
          lVar9 = *(int64_t *)(lVar7 + 0x50);
          if (lVar9 == 0) {
            bVar2 = true;
            goto LAB_015197ce;
          }
          pvVar4 = _pthread_getspecific((void*)param_1);
          if (pvVar4 != (void *)0x0) {
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(int64_t *)(lVar9 + 0x78) == 0);
        lVar5 = *(int64_t *)(lVar9 + 0x78);
      }
      else {
        lVar5 = *(int64_t *)(lVar7 + 0x78);
      }
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015197ce:
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = (float)FUN_01773e80();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar2 && lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    if (g_0239425c <= (float)((uint)(fVar12 - fVar11) & g_02390140)) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_0013dd30();
      (**(code **)(*plVar6 + 0x18))();
      pvVar4 = _pthread_getspecific((void*)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
      }
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0;
      uVar13 = FUN_01512be0();
      local_70 = 0;
      FUN_01513590(uVar13,0);
      local_38 = 0;
      FUN_01512890();
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = 0;
      pvVar4 = _pthread_getspecific((void*)param_1);
      plVar1 = plVar6;
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
        plVar1 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      while( true ) {
        plVar10 = plVar1;
        if ((*(char *)((int64_t)plVar10 + 0xa1) == '\0') &&
           (pvVar4 = _pthread_getspecific((void*)param_1), pvVar4 == (void *)0x0)) {
          FUN_015104e0();
        }
        lVar7 = plVar10[0x12];
        if (lVar7 != 0) break;
        plVar1 = (int64_t *)plVar10[10];
        if (plVar1 == (int64_t *)0x0) {
          lVar7 = 0;
LAB_01519b79:
          while( true ) {
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_00e7bdb0();
            param_1 = (int64_t *)FUN_00e7bdb0();
            cVar3 = FUN_01252960(param_1,uVar8,&local_40,local_78);
            if (cVar3 == '\0') break;
            if (local_40 != 0) {
              pvVar4 = _pthread_getspecific((void*)param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01767a10(fVar12);
            }
          }
          *this_ptr = (int64_t)plVar6;
          *(void*)(this_ptr + 1) = 1;
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (local_38 == '\0') {
            return this_ptr;
          }
          if (local_40 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          plVar1 = (int64_t *)plVar10[10];
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
      }
      FUN_00d50b00();
      goto LAB_01519b79;
    }
    *(void*)(this_ptr + 1) = 0;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = arg1;
  }
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 001563c0
// ============================================================
// Function: FUN_001563c0
// Address: 001563c0
// Size: 2192 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "Melodyne #%d"
//   "%@.%d"

void FUN_001563c0(int64_t *param_1)

{
  int iVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  char cVar8;
  bool bVar9;
  int64_t local_f8;
  char local_f0;
  char local_b4;
  int64_t *local_a0;
  char local_98;
  int local_74;
  int64_t *local_70;
  char local_68;
  int local_58;
  int64_t *local_48;
  char local_40;
  
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_70 == (int64_t *)0x0) {
    bVar9 = false;
  }
  else {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    iVar1 = FUN_00d8c7a0();
    bVar9 = 10 < iVar1;
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b4 = '\0';
  if (bVar9) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    FUN_00d97ce0();
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = g_026e3cb8;
    if (g_026e3cb8 != 0) {
      FUN_00d50b00();
    }
    local_b4 = (**(code **)(*local_70 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_74 = 0;
  plVar7 = local_70;
  do {
    plVar6 = local_70;
    pVar4 = (void*)param_1;
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == (int64_t *)0x0) break;
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_58 = -1;
    do {
      lVar3 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((int64_t)plVar6 + 0xc) <= local_58) {
        bVar9 = false;
        goto LAB_00156b52;
      }
      plVar5 = (int64_t *)plVar6[2];
      local_70 = (int64_t *)plVar5[lVar3 + 1];
      pvVar2 = _pthread_getspecific((void*)plVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      cVar8 = local_a0 == plVar7;
      if ((!(bool)cVar8) && (plVar7 != (int64_t *)0x0)) {
        pvVar2 = _pthread_getspecific((void*)plVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6000();
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar8 = (**(code **)(*plVar7 + 0x50))();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    } while (cVar8 == '\0');
    local_74 = local_74 + 1;
    if (local_b4 == '\0') {
      pvVar2 = _pthread_getspecific((void*)plVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      local_98 = '\x02';
      if (local_f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_48 == plVar7) {
LAB_00156af2:
        plVar6 = plVar7;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar6 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
            goto LAB_00156af2;
          }
        }
        else {
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
        }
      }
      local_a0 = &g_024c5048;
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      plVar7 = plVar6;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\x01';
      plVar5 = &g_024cc6f0;
      local_48 = &g_024cc6f0;
      FUN_00d8cb40();
      if (local_a0 == plVar7) {
LAB_00156aaa:
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = plVar7 != (int64_t *)0x0;
        plVar7 = local_a0;
        if (bVar9) {
          FUN_00d50b20();
          goto LAB_00156aaa;
        }
      }
      else {
        bVar9 = plVar7 != (int64_t *)0x0;
        plVar7 = local_a0;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
    }
    bVar9 = true;
    plVar6 = plVar5;
LAB_00156b52:
    FUN_000be170();
    FUN_00d50b20();
    pVar4 = (void*)plVar6;
    param_1 = plVar6;
  } while (bVar9);
  if (0 < local_74) {
    lVar3 = *(int64_t *)(this_ptr + 0x88);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 001552e0
// ============================================================
// Function: FUN_001552e0
// Address: 001552e0
// Size: 2627 bytes
// Class: MUPercussivePitchSystem

int64_t * FUN_001552e0(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar8;
  bool bVar9;
  int64_t local_f8;
  char local_f0;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  
  FUN_00154c40();
  lVar5 = *(int64_t *)(arg1 + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar1 = *(int64_t *)(arg1 + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d237a0();
  *(void*)(arg1 + 0xb0) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(int64_t *)(arg1 + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (lVar1 == 0) {
    if (*(int64_t *)(arg1 + 0xa0) == 0) goto LAB_0015558b;
    *(void*)(arg1 + 0xa0) = 0;
LAB_00155554:
    FUN_00d50b20();
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(arg1 + 0xa0);
    if (lVar4 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(arg1 + 0xa0) = lVar1;
      if (lVar4 != 0) goto LAB_00155554;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0015558b:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(int64_t *)(arg1 + 0x90);
  if ((lVar5 == 0) || (FUN_00d50b00(), *(int64_t *)(arg1 + 0x90) == 0)) {
    bVar8 = true;
  }
  else {
    FUN_00d50b00();
    bVar8 = false;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (!bVar8) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 == lVar1) {
    bVar8 = false;
    bVar9 = false;
    local_50 = 0;
  }
  else {
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3260();
      }
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    bVar8 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar8) {
      FUN_00d50b00();
    }
    pVar6 = (void*)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    bVar9 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar9) {
      FUN_00d50b00();
    }
    param_1 = (void*)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015127c0();
    local_50 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_002dc990();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00155070();
  if (*(int64_t *)(arg1 + 0xa0) != 0) {
    *(int64_t *)(arg1 + 0xa0) = 0;
    FUN_00d50b20();
  }
  if (lVar5 != lVar1) {
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ceb0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d0b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3270();
      }
    }
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar8) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01518160
// ============================================================
// Function: FUN_01518160
// Address: 01518160
// Size: 1812 bytes
// Class: MUPercussivePitchSystem

void FUN_01518160(double param_1,double param_2,char param_3)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int64_t *plVar5;
  void *pvVar6;
  uint in_ECX;
  void* pVar7;
  void*in_RDX;
  char *pcVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint64_t extraout_XMM0_Qa;
  double dVar17;
  void*local_res8;
  void*local_res10;
  uint64_t local_128;
  uint8_t local_120;
  int64_t *local_118;
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  uint64_t local_f8;
  uint8_t local_f0;
  int64_t *local_e8;
  uint8_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  double local_c8;
  int64_t *in_stack_ffffffffffffff60;
  char local_98 [8];
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  int64_t *local_78;
  
  pVar7 = in_ECX;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = this_ptr;
  if (1 < *(int *)(*arg1 + 0xc)) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar5 + 0x18))();
    if (plVar5 == this_ptr) {
      FUN_00d50b20();
      plVar5 = this_ptr;
    }
    else if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((char)in_ECX != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_98[0] = '\0';
      uVar11 = FUN_01512be0();
      FUN_01513590(uVar11,0);
      in_stack_ffffffffffffff60 = this_ptr;
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (param_3 != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_01512890();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23340();
  cVar2 = local_98[0];
  pcVar8 = &stack0xffffffffffffff90;
  if (local_98[0] != '\0') {
    pcVar8 = local_98;
  }
  *pcVar8 = '\0';
  if ((local_98[0] != '\0') && (in_stack_ffffffffffffff60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (in_stack_ffffffffffffff60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = in_stack_ffffffffffffff60;
  FUN_00d23740();
  uVar9 = in_ECX & 0xff;
  uVar11 = 0;
  FUN_01517980(param_1,param_2,uVar9,param_3);
  pvVar6 = _pthread_getspecific((void*)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_01655040();
  pvVar6 = _pthread_getspecific((void*)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_01655100();
  uVar12 = FUN_00e7b500(uVar12);
  lVar1 = *arg1;
  local_d8 = uVar12;
  local_d0 = uVar13;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar10 = 0;
      do {
        uVar12 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar10 * 8);
        pvVar6 = _pthread_getspecific((void*)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01655040();
        pvVar6 = _pthread_getspecific((void*)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_016551c0();
        dVar17 = param_1;
        if (param_1 <= dVar14) {
          dVar17 = dVar14;
        }
        dVar14 = param_2;
        if (dVar15 <= param_2) {
          dVar14 = dVar15;
        }
        if (dVar17 < dVar14) {
          dVar15 = dVar14 - dVar17;
          FUN_00e7b500(dVar17);
          dVar16 = (double)FUN_00e7b600();
          if (NAN(dVar16)) {
            local_110 = 0;
            local_100 = 0;
            local_f8 = *in_RDX;
            local_f0 = 0;
            uVar11 = 1;
            local_118 = plVar5;
            local_108 = uVar12;
            FUN_01517980(dVar17,dVar14,uVar9,param_3);
          }
          else {
            if (dVar17 < dVar16) {
              uVar11 = 1;
              local_c8 = dVar15;
              FUN_01517980(dVar17,dVar16,uVar9,param_3);
              dVar15 = local_c8;
            }
            if (dVar16 + dVar15 < dVar14) {
              local_128 = *in_RDX;
              local_120 = 0;
              uVar11 = 1;
              FUN_01517980(dVar16 + dVar15,&local_128,uVar9,param_3);
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    uVar12 = FUN_00277f20();
    in_stack_ffffffffffffff60 = local_78;
  }
  if (plVar5 != this_ptr) {
    if ((char)in_ECX != '\0') {
      local_98[0] = '\0';
      bVar3 = FUN_01512be0(uVar12,0);
      bVar4 = FUN_01513590(extraout_XMM0_Qa,0);
      if (((bVar3 | bVar4) == 1) && (local_res8 != (void*)0x0)) {
        *local_res8 = 1;
      }
    }
    in_stack_ffffffffffffff60 = local_78;
    if (param_3 != '\0') {
      local_e0 = 0;
      local_e8 = plVar5;
      bVar3 = FUN_01512890();
      if ((bVar3 & local_res10 != (void*)0x0) == 1) {
        *local_res10 = 1;
      }
    }
  }
  if (in_stack_ffffffffffffff60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0151a240
// ============================================================
// Function: FUN_0151a240
// Address: 0151a240
// Size: 1242 bytes
// Class: MUPercussivePitchSystem

void FUN_0151a240(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void *pvVar7;
  uint64_t arg1;
  int64_t this_ptr;
  int64_t *plVar8;
  bool bVar9;
  uint8_t local_d0 [16];
  uint64_t local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  uint32_t local_80;
  uint32_t local_7c;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0x68) != 0) {
    local_40 = '\0';
    local_48 = 0;
    local_80 = 0xffffffff;
    plVar5 = (int64_t *)FUN_010eca10();
    (**(code **)(*plVar5 + 0x18))();
    local_a8 = plVar5;
    if (*(int64_t *)(this_ptr + 0x88) == 0) {
      local_38 = 0;
      lVar6 = this_ptr;
      do {
        lVar2 = *(int64_t *)(lVar6 + 0x50);
        lVar1 = local_38;
        if (lVar2 == 0) goto LAB_0151a340;
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar2 = *(int64_t *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar2 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar2;
      } while (*(int64_t *)(lVar6 + 0x88) == 0);
      lVar1 = *(int64_t *)(lVar6 + 0x88);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x88);
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
LAB_0151a340:
    while( true ) {
      local_38 = lVar1;
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = param_2;
      cVar3 = FUN_01252960(param_2,arg1,&local_48,&local_b8);
      if (cVar3 == '\0') break;
      lVar1 = local_38;
      if (local_48 != 0) {
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531ce0();
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531d40();
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01531da0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
          local_7c = 0xffffffff;
          cVar3 = '\0';
          plVar5 = (int64_t *)0x0;
LAB_0151a4e4:
          do {
            plVar8 = plVar5;
LAB_0151a500:
            do {
              pvVar7 = _pthread_getspecific((void*)param_1);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              param_1 = local_b0;
              cVar4 = FUN_01252960(local_b0,local_b8,&local_58,local_d0);
              if (cVar4 == '\0') {
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0151a666;
              }
            } while (local_58 == (int64_t *)0x0);
            if ((plVar8 != (int64_t *)0x0) && (local_58 != plVar8)) {
              local_a0 = local_58;
              local_98 = '\0';
              cVar4 = (**(code **)(*plVar8 + 0x50))();
              if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_0151a500;
            }
            cVar4 = local_50;
            plVar5 = local_58;
            if (local_58 != plVar8) {
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              bVar9 = cVar3 != '\0';
              cVar3 = cVar4;
              if ((bVar9) && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0151a4e4;
            }
            if ((local_50 == '\0') || (cVar3 != '\0' || plVar8 == (int64_t *)0x0))
            goto LAB_0151a500;
            FUN_00d50b00();
            cVar3 = '\x01';
            plVar5 = plVar8;
          } while( true );
        }
        plVar8 = (int64_t *)0x0;
        cVar3 = '\0';
LAB_0151a666:
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = '\0';
        local_90 = plVar8;
        FUN_01531df0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = local_38;
        if ((cVar3 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
          lVar1 = local_38;
        }
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01323a40
// ============================================================
// Function: FUN_01323a40
// Address: 01323a40
// Size: 1738 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"
//   "_audioSourceSibilantItems"
//   "%p::_microtonalPitchSystem"

void FUN_01323a40(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  FUN_00d61ea0();
  lVar2 = g_027e3c40;
  plVar1 = (int64_t *)*arg1;
  if (g_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027e3c40;
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027e3c40 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
      local_50 = local_60;
      local_48 = '\0';
      FUN_00ca0840();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = g_027bf3c8;
  plVar1 = (int64_t *)*arg1;
  if (g_027bf3c8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027bf3c8;
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027bf3c8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
      local_50 = local_60;
      local_48 = '\0';
      FUN_00ca0840();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = g_027bf3d0;
  plVar1 = (int64_t *)*arg1;
  if (g_027bf3d0 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027bf3d0;
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027bf3d0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(void*)(lVar5 + 0x28);
      }
    }
    else {
      uVar6 = *(void*)(lVar5 + 0x30);
    }
    (**(code **)(*this_ptr + 0x200))(0,uVar6,0);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027bf3d8;
  plVar1 = (int64_t *)*arg1;
  if (g_027bf3d8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027bf3d8;
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027bf3d8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x510))();
    *(void*)((int64_t)this_ptr + 0x1aa) = uVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 015104e0
// ============================================================
// Function: FUN_015104e0
// Address: 015104e0
// Size: 1151 bytes
// Class: MUPercussivePitchSystem

void FUN_015104e0(void)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  uint64_t uVar4;
  code *pcVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  uint64_t local_b0;
  code *local_a8;
  void*local_a0;
  code *local_98;
  int64_t local_90;
  char local_88;
  uint32_t local_7c;
  int64_t local_78;
  char local_70;
  int64_t *local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x80) != 0) && (*(int64_t *)(this_ptr + 0x78) != 0)) {
    if (*(int64_t *)(this_ptr + 0x90) == 0) {
      FUN_00d64850();
      plVar2 = (int64_t *)FUN_0151fdc0();
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = *(int64_t *)(this_ptr + 0x90);
      *(int64_t **)(this_ptr + 0x90) = plVar2;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    local_70 = '\0';
    local_78 = 0;
    local_7c = 0xffffffff;
    local_98 = g_025fee30;
    local_a0 = &g_025fee18;
    pcVar5 = g_025fee30;
    while( true ) {
      pvVar3 = _pthread_getspecific((void*)pcVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      pcVar5 = FUN_00e7bdb0();
      cVar1 = FUN_01252960(pcVar5,uVar4,&local_78,&local_b0);
      pVar7 = (void*)pcVar5;
      if (cVar1 == '\0') break;
      if (local_78 != 0) {
        plVar2 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar2[10] = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        *(void*)(plVar2 + 9) = 0;
        *plVar2 = (int64_t)local_a0;
        *(void*)((int64_t)plVar2 + 0x6c) = 0;
        plVar2[0xb] = 0;
        plVar2[0xc] = 0;
        *(void*)(plVar2 + 0xd) = 0;
        (*local_98)();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b670();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = local_78;
        local_88 = '\0';
        FUN_0173b680();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0173b720();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_015220b0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        plVar8 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar8 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar8 + 0x1a0))();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = '\0';
        pcVar5 = local_a8;
        FUN_012502a0(local_a8,local_b0,0);
        FUN_00d50b20();
        local_40 = plVar2;
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0xa1) = 1;
  return;
}



// ============================================================
// 00151f70
// ============================================================
// Function: FUN_00151f70
// Address: 00151f70
// Size: 715 bytes
// Class: MUPercussivePitchSystem

void FUN_00151f70(float param_1,uint64_t param_2)

{
  double dVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  void *pvVar4;
  void* in_ECX;
  int64_t *this_ptr;
  bool bVar5;
  float fVar6;
  float fVar7;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint32_t uVar18;
  uint8_t auVar15 [16];
  float fVar19;
  uint32_t uVar20;
  int64_t local_48;
  char local_40;
  int64_t local_30;
  char local_28;
  
  fVar16 = (float)((uint64_t)param_2 >> 0x20);
  fVar12 = (float)param_2;
  fVar13 = fVar12;
  (**(code **)(*this_ptr + 0x4d8))();
  (**(code **)(*this_ptr + 0x958))();
  bVar5 = true;
  if (local_30 == 0) {
    (**(code **)(*this_ptr + 0x938))();
    bVar5 = local_48 != 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    (**(code **)(*this_ptr + 0x948))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)(local_30 + 0x38);
    fVar14 = *(float *)((int64_t)this_ptr + 0x15c) * (float)dVar1;
    fVar17 = 0.0;
    uVar18 = 0;
    FUN_01e3f820();
    if (param_1 <= g_02390124) {
      if (param_1 < g_02390124) {
        fVar14 = fVar14 / g_023942ac;
      }
    }
    else {
      fVar14 = fVar14 * g_023942ac;
    }
    fVar6 = fVar17 / g_023941e0;
    fVar19 = fVar17;
    uVar20 = uVar18;
    if (fVar12 <= g_02390124) {
      fVar7 = fVar6;
      if (fVar12 < g_02390124) {
        if (g_02390d34 <= fVar6) {
          fVar7 = fVar6 + g_02390d00;
        }
        else {
          fVar7 = g_0239011c;
          fVar19 = 0.0;
          uVar20 = 0;
        }
      }
    }
    else {
      fVar7 = g_02390124;
      fVar19 = 0.0;
      uVar20 = 0;
      if (g_02390124 <= fVar6) {
        fVar7 = fVar6 + g_02390124;
        fVar19 = fVar17;
        uVar20 = uVar18;
      }
    }
    *(float *)((int64_t)this_ptr + 0x15c) = fVar14 / (float)dVar1;
    FUN_00d50b20();
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = uVar20;
    auVar3._12_4_ = uVar20;
    auVar10._4_12_ = auVar3._4_12_;
    auVar10._0_4_ = fVar7 * g_023941e0;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dd;
    auVar15 = insertps(auVar2,auVar10,0x10);
    param_1 = *(float *)((int64_t)this_ptr + 0x15c);
  }
  else {
    param_1 = param_1 * *(float *)((int64_t)this_ptr + 0x15c);
    *(float *)((int64_t)this_ptr + 0x15c) = param_1;
    auVar15._4_4_ = fVar16;
    auVar15._0_4_ = fVar13;
    auVar15._8_4_ = in_XMM1_Dc;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar8._4_4_ = fVar16;
    auVar8._0_4_ = fVar16;
    auVar8._8_4_ = in_XMM1_Dd;
    auVar8._12_4_ = in_XMM1_Dd;
    auVar9._4_12_ = auVar8._4_12_;
    auVar9._0_4_ = fVar16 * fVar12;
    auVar15 = insertps(auVar15,auVar9,0x10);
  }
  auVar11._0_4_ = (float)(double)this_ptr[0x2d] * param_1 + g_02390110;
  auVar11._4_4_ = (int)((uint64_t)this_ptr[0x2d] >> 0x20);
  auVar11._8_8_ = 0;
  auVar15 = blendps(auVar11,auVar15,0xe);
  (**(code **)(*this_ptr + 0x4e8))(auVar15._0_8_);
  (**(code **)(*this_ptr + 0x988))();
  if (this_ptr[0x2a] != 0) {
    this_ptr[0x2a] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x620))();
  return;
}



// ============================================================
// 0150f7e0
// ============================================================
// Function: FUN_0150f7e0
// Address: 0150f7e0
// Size: 1229 bytes
// Class: MUPercussivePitchSystem

void FUN_0150f7e0(int64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  int iVar8;
  int64_t local_80;
  char local_78;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar3 = local_58;
  if (*(char *)((int64_t)this_ptr + 0xa2) != '\0') {
    *(void*)((int64_t)this_ptr + 0xa2) = 0;
    (**(code **)(*this_ptr + 0x380))();
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0150f849;
    }
  }
  else if (local_58 != 0) {
LAB_0150f849:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      lVar6 = *(int64_t *)(lVar3 + 0x10);
      local_58 = *(int64_t *)(lVar6 + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar6);
      pVar5 = (void*)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      if (local_68 == (int64_t *)0x0) {
        cVar1 = '\0';
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb770();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_012f9ac0();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_012f9ac0();
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012ed0d0();
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012ed0d0();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    param_1 = lVar3;
  }
  FUN_0151a240();
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0150fc58;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0150fc58;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar8 = 0;
    do {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_0150fbf0;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_0150fbf0:
        pvVar4 = _pthread_getspecific((void*)param_1);
        plVar7 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar7 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar7 + 0x370))();
        FUN_00d50b20();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0150fc58:
  lVar3 = this_ptr[9];
  if (lVar3 != 0) {
    for (iVar8 = 0; iVar8 < *(int *)(lVar3 + 0xc); iVar8 = iVar8 + 1) {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f7e0();
    }
    FUN_0131c770();
  }
  return;
}



// ============================================================
// 001570d0
// ============================================================
// Function: FUN_001570d0
// Address: 001570d0
// Size: 1117 bytes
// Class: MUPercussivePitchSystem

int FUN_001570d0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t lVar9;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_90;
  char local_88;
  int local_68;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  lVar9 = *this_ptr;
  if (*(int *)(lVar9 + 0xc) != 0) {
    if (unaff_ESI == -1) {
      return *(int *)(lVar9 + 0xc) + -1;
    }
    local_68 = -1;
    local_38 = 0;
    iVar3 = -1;
    bVar1 = false;
    while( true ) {
      lVar4 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar9 + 0xc) <= local_68) break;
      lVar8 = *(int64_t *)(lVar9 + 0x10);
      lVar4 = *(int64_t *)(lVar8 + 8 + lVar4 * 8);
      FUN_00517fa0();
      pVar7 = (void*)lVar8;
      FUN_00b68420();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        FUN_0051b590();
        pvVar6 = _pthread_getspecific(pVar7);
        lVar8 = 0;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar8 = *(int64_t *)((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
        }
        iVar2 = *(int *)(lVar8 + 0xb0);
      }
      else {
        iVar2 = FUN_00d45870();
        FUN_00d50b20();
      }
      if ((iVar3 < iVar2) && (iVar2 < unaff_ESI)) {
        FUN_0051b4f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          iVar3 = iVar2;
          if (lVar4 == local_38) {
            if ((!bVar1) && (lVar4 != 0)) {
              bVar1 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
              local_38 = lVar4;
              bVar1 = true;
            }
            else {
              local_38 = lVar4;
              bVar1 = true;
            }
          }
        }
      }
    }
    FUN_0015ee90();
    pVar7 = (void*)lVar9;
    if (local_38 != 0) {
      FUN_0051b4f0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6a50();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_0051b4f0();
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      iVar3 = FUN_00d237a0();
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        return iVar3 + 1;
      }
      FUN_00d50b20();
      return iVar3 + 1;
    }
  }
  return 0;
}



// ============================================================
// 01517980
// ============================================================
// Function: FUN_01517980
// Address: 01517980
// Size: 1528 bytes
// Class: MUPercussivePitchSystem

void FUN_01517980(uint64_t param_1,uint64_t param_2,char param_3,uint32_t param_4)

{
  uint64_t uVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void* in_ECX;
  void* pVar7;
  void*in_RDX;
  uint8_t local_res8;
  void*local_res10;
  void*local_res18;
  uint8_t local_118 [8];
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  uint8_t local_f0;
  uint8_t local_e0;
  uint8_t local_d8 [8];
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint8_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  void*local_98;
  uint32_t local_8c;
  int64_t local_88;
  char local_80;
  uint64_t local_68;
  int64_t local_50;
  char local_48;
  
  pVar7 = in_ECX;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = in_RDX;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_8c = param_4;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_68._0_1_ = (char)in_ECX;
  if ((char)local_68 == '\0') {
    local_68 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (void*)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a8);
    pVar7 = 0;
    local_68 = FUN_016cb5f0(0,0);
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (void*)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a0);
    pVar7 = 0;
    uVar6 = FUN_016cb5f0(0,0);
  }
  if (param_3 != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar1 = *local_98;
    bVar2 = FUN_01514480(0,local_res8);
    local_80 = '\0';
    local_110 = 0;
    local_100 = 0;
    local_f0 = 0;
    pVar7 = (void*)&local_108;
    local_108 = uVar1;
    bVar3 = FUN_01515040(0,local_118,local_68,uVar6);
    if (((bVar3 | bVar2) == 1) && (local_res10 != (void*)0x0)) {
      *local_res10 = 1;
    }
  }
  if ((char)local_8c != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = *local_98;
    local_c0 = 0;
    local_b0 = 0;
    bVar2 = FUN_01516720(0,local_d8,local_68,uVar6);
    if ((bVar2 & local_res18 != (void*)0x0) == 1) {
      *local_res18 = 1;
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0151a950
// ============================================================
// Function: FUN_0151a950
// Address: 0151a950
// Size: 1105 bytes
// Class: MUPercussivePitchSystem

void* FUN_0151a950(void)

{
  int iVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t arg1;
  void*this_ptr;
  int iVar8;
  int64_t local_90;
  char local_88;
  int64_t in_stack_ffffffffffffff98;
  char local_60;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar7 = *(int64_t *)(arg1 + 0x50);
  if (lVar7 == 0) {
    if (*(int64_t *)(arg1 + 0x58) != 0) {
      pvVar3 = _pthread_getspecific((void*)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      if (local_60 == '\0') {
        if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
        FUN_00d50b00();
      }
      else if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
      if (0 < *(int *)(in_stack_ffffffffffffff98 + 0xc)) {
        iVar1 = 0;
        do {
          pvVar3 = _pthread_getspecific((void*)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          FUN_00d21140();
          if (local_90 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(in_stack_ffffffffffffff98 + 0xc));
      }
      FUN_01507540();
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      lVar7 = *(int64_t *)(arg1 + 0x50);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(int64_t *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0151a950();
    if (arg1 != 0) {
      FUN_00d50b00();
      puVar5 = (void*)(int64_t)iVar1;
      for (iVar8 = 0; iVar8 < *(int *)(arg1 + 0xc); iVar8 = iVar8 + 1) {
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if (iVar1 < *(int *)(local_40 + 0xc)) {
          local_40 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + (int64_t)puVar5 * 8);
          puVar6 = puVar5;
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
LAB_0151ad9b:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01519e20
// ============================================================
// Function: FUN_01519e20
// Address: 01519e20
// Size: 954 bytes
// Class: MUPercussivePitchSystem

void FUN_01519e20(double param_1,double param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  void *pvVar3;
  uint8_t in_CL;
  uint64_t in_RDX;
  char *pcVar4;
  uint unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int64_t local_a0;
  char local_98 [8];
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  double local_78;
  double local_70;
  double local_68;
  int64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint local_48;
  uint local_44;
  double local_40;
  char local_38 [8];
  
  local_78 = param_2;
  local_70 = param_1;
  local_58 = param_4;
  local_50 = param_3;
  FUN_00d23340();
  pcVar4 = local_38;
  if (local_98[0] != '\0') {
    pcVar4 = local_98;
  }
  local_38[0] = local_98[0];
  *pcVar4 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  local_60 = local_a0;
  FUN_00d23740();
  local_48 = unaff_ESI & 0xff;
  in_RDX = in_RDX & 0xff;
  local_44 = (uint)in_RDX;
  FUN_015189a0(local_70,local_78,in_CL,local_50);
  pvVar3 = _pthread_getspecific((void*)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_01653910();
  pvVar3 = _pthread_getspecific((void*)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01653920();
  FUN_00e7b500(local_40);
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        uVar2 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific((void*)in_RDX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_01653910();
        pvVar3 = _pthread_getspecific((void*)in_RDX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_01655350();
        dVar7 = local_70;
        if (local_70 <= local_40) {
          dVar7 = local_40;
        }
        dVar8 = local_78;
        if (dVar6 <= local_78) {
          dVar8 = dVar6;
        }
        if (dVar7 < dVar8) {
          dVar6 = dVar8 - dVar7;
          local_68 = dVar8;
          local_40 = dVar7;
          FUN_00e7b500(dVar7);
          dVar7 = (double)FUN_00e7b600();
          if (NAN(dVar7)) {
            in_RDX = (uint64_t)local_44;
            FUN_015189a0(local_40,local_68,in_CL,local_50);
          }
          else {
            if (local_40 < dVar7) {
              in_RDX = (uint64_t)local_44;
              local_40 = dVar7;
              FUN_015189a0(in_RDX,dVar7,in_CL,local_50,uVar2,0);
              dVar7 = local_40;
            }
            if (dVar7 + dVar6 < local_68) {
              in_RDX = (uint64_t)local_44;
              FUN_015189a0(dVar7 + dVar6,local_48,in_CL,local_50);
            }
          }
        }
        lVar5 = lVar5 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00277f20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0150bf50
// ============================================================
// Function: FUN_0150bf50
// Address: 0150bf50
// Size: 1109 bytes
// Class: MUPercussivePitchSystem

void FUN_0150bf50(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    if (*(int64_t *)(this_ptr + 0x80) == 0) {
      plVar1 = (int64_t *)FUN_00e8fc40();
      FUN_0124b580();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150ceb0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    FUN_012502a0(uVar4,uVar3,1);
    pVar6 = (void*)uVar4;
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)*arg1;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (int64_t *)*arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_0124ae40();
    if (*(int64_t *)(this_ptr + 0x78) == 0) {
      plVar1 = (int64_t *)FUN_00e8fc40();
      FUN_0151f500();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150d0b0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01822eb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)*arg1;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (int64_t *)*arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_018232c0();
  }
  return;
}



// ============================================================
// 013231f0
// ============================================================
// Function: FUN_013231f0
// Address: 013231f0
// Size: 647 bytes
// Class: MUPercussivePitchSystem

void FUN_013231f0(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void*puVar5;
  int64_t *plVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_00e8b7a0();
  uVar4 = _UNK_0240d41c;
  uVar3 = _UNK_0240d418;
  uVar2 = _UNK_0240d414;
  *(void*)(this_ptr + 0x78) = g_0240d410;
  *(void*)(this_ptr + 0x7c) = uVar2;
  *(void*)(this_ptr + 0x80) = uVar3;
  *(void*)(this_ptr + 0x84) = uVar4;
  *(void*)(this_ptr + 0x94) = 4;
  *(void*)(this_ptr + 0x1a9) = 0;
  *(void*)(this_ptr + 0x171) = 0x100;
  *(void*)(this_ptr + 0x130) = 1;
  *(void*)(this_ptr + 0x180) = 0xffffffff;
  *(void*)(this_ptr + 0x70) = 0x4628c00044960000;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = (void*)&g_025f0698;
  *puVar5 = &g_025f0698;
  *(void*)(puVar5 + 7) = 0;
  *(void*)((int64_t)puVar5 + 0x3c) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  *(void*)(puVar5 + 10) = 0;
  (*g_025f06b0)();
  lVar1 = *(int64_t *)(this_ptr + 0x138);
  *(void**)(this_ptr + 0x138) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x21c) = 0;
  *(void*)(this_ptr + 0x8c) = 0x3ccccccd3f000000;
  FUN_016c0a70();
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  lVar8 = lVar1;
  if (lVar1 == local_30) goto LAB_01323327;
  lVar8 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar8 = 0;
      goto LAB_013232e5;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    *(int64_t *)(this_ptr + 0x58) = local_30;
  }
  else {
    local_28 = '\0';
LAB_013232e5:
    *(int64_t *)(this_ptr + 0x58) = lVar8;
  }
  pVar9 = (void*)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_30;
  }
LAB_01323327:
  if ((local_28 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  *(int64_t **)(this_ptr + 0x68) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  *(int64_t **)(this_ptr + 0x60) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cac0();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cb90();
  *(void*)(this_ptr + 0x1aa) = 0;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025eec60;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(void*)(puVar5 + 9) = 0;
  (*g_025eec78)();
  lVar1 = *(int64_t *)(this_ptr + 0x150);
  *(void**)(this_ptr + 0x150) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0151b0b0
// ============================================================
// Function: FUN_0151b0b0
// Address: 0151b0b0
// Size: 900 bytes
// Class: MUPercussivePitchSystem

void FUN_0151b0b0(int64_t param_1)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int iVar6;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar3 = local_58;
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0151b0f5;
    }
  }
  else if (local_58 != 0) {
LAB_0151b0f5:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((void*)*(int64_t *)(lVar3 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5b20();
    }
    FUN_000be170();
    FUN_00d50b20();
    param_1 = lVar3;
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    if (local_58 == 0) {
      bVar1 = 1;
    }
    else {
      FUN_00e8b990();
      FUN_00cb1f10();
      bVar1 = FUN_00db6490();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar1 = bVar1 ^ 1;
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1 == 0) goto LAB_0151b3d5;
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0151b3d5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0151b3d5;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar6 = 0;
    do {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_0151b370;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_0151b370:
        pvVar4 = _pthread_getspecific((void*)param_1);
        plVar5 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x370))();
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0151b3d5:
  lVar3 = *(int64_t *)(this_ptr + 0x48);
  if (lVar3 != 0) {
    for (iVar6 = 0; iVar6 < *(int *)(lVar3 + 0xc); iVar6 = iVar6 + 1) {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0151b0b0();
    }
    FUN_0131c770();
  }
  return;
}



// ============================================================
// 013234b0
// ============================================================
// Function: FUN_013234b0
// Address: 013234b0
// Size: 1078 bytes
// Class: MUPercussivePitchSystem

void FUN_013234b0(int64_t param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[8] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df660();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[8] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x19] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x19] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x1a] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x1a] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x1d] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x1d] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x20] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x20] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x1c] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x1c] + 0xc);
    } while (lVar3 < param_1);
  }
  *(void*)(this_ptr + 0x30) = 0xffffffff;
  if (this_ptr[0x32] != 0) {
    FUN_00e83070();
    this_ptr[0x32] = 0;
  }
  FUN_00e8b7e0();
  return;
}



// ============================================================
// 00507310
// ============================================================
// Function: FUN_00507310
// Address: 00507310
// Size: 654 bytes
// Class: MUPercussivePitchSystem

void FUN_00507310(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  double dVar5;
  uint64_t uVar6;
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
  
  lVar1 = g_026f6fd0;
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    if (g_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    dVar5 = (double)FUN_00e7d6f0();
    uVar4 = (uint64_t)(dVar5 * g_023907c0);
    dVar5 = dVar5 * g_023907c0 - g_023907c8;
    uVar6 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar5 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
    local_80 = lVar1;
    local_78 = '\0';
    FUN_000175c0(uVar6,&local_80);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_38 = '\0';
      local_40 = lVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar2 != 0 & bVar3) == 0) {
      local_58 = '\0';
      local_60 = 0;
      FUN_01cef3b0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cef410();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_02709e60;
      if (lVar1 == 0) {
        if (g_02709e60 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar2;
        local_68 = '\x01';
        FUN_01d51a40();
        local_50 = local_40;
        local_48 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        FUN_01cef3b0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}



// ============================================================
// 01512890
// ============================================================
// Function: FUN_01512890
// Address: 01512890
// Size: 666 bytes
// Class: MUPercussivePitchSystem

uint FUN_01512890(void* param_1)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar4 + 0x88) == 0) {
    do {
      lVar3 = *(int64_t *)(lVar4 + 0x50);
      if (lVar3 == 0) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(int64_t *)(lVar4 + 0x50);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
      }
      lVar4 = lVar3;
    } while (*(int64_t *)(lVar3 + 0x88) == 0);
    lVar4 = *(int64_t *)(lVar3 + 0x88);
  }
  else {
    lVar4 = *(int64_t *)(lVar4 + 0x88);
  }
  if (lVar4 == 0) {
    return 0;
  }
  FUN_00d50b00();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  else {
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  if (lVar4 == 0) {
    do {
      lVar4 = *(int64_t *)(this_ptr + 0x50);
      if (lVar4 == 0) {
        local_50 = 0;
        goto LAB_01512a5a;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar4 = *(int64_t *)(this_ptr + 0x50);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      this_ptr = lVar4;
    } while (*(int64_t *)(lVar4 + 0x88) == 0);
    local_50 = *(int64_t *)(lVar4 + 0x88);
  }
  else {
    local_50 = *(int64_t *)(this_ptr + 0x88);
  }
  if (local_50 != 0) {
    FUN_00d50b00();
  }
LAB_01512a5a:
  uVar1 = FUN_00d51e10();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150c7f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return uVar1 ^ 1;
}



// ============================================================
// 00504770
// ============================================================
// Function: FUN_00504770
// Address: 00504770
// Size: 580 bytes
// Class: MUPercussivePitchSystem

void FUN_00504770(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t **pplVar5;
  int64_t **pplVar6;
  int unaff_ESI;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  *(int *)(this_ptr + 0x220) = unaff_ESI;
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_005047c9:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_005047c9;
  }
  plVar1 = *pplVar6;
  local_38[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (int64_t **)local_38;
  if (local_38[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(void*)pplVar5 = 0;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  iVar3 = FUN_01b18580();
  if ((iVar3 == 0) || (-1 < unaff_ESI)) {
    if (unaff_ESI == 0) {
      FUN_01d9aea0();
      plVar1 = local_48;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_01d9aea0();
        plVar1 = local_48;
        if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d9ade0();
        FUN_00d50130();
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_005048ee;
    }
  }
  else {
    FUN_00502230(extraout_XMM0_Da,0);
  }
  FUN_01d9aea0();
  plVar1 = local_48;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar4 = &g_024dc470;
    puVar4[2] = &g_024dcdc0;
    puVar4[0x27] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    (*g_024dc488)();
    FUN_01d9ade0();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01d9aea0();
  FUN_002ba3c0();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_005048ee:
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01510b20
// ============================================================
// Function: FUN_01510b20
// Address: 01510b20
// Size: 529 bytes
// Class: MUPercussivePitchSystem

void FUN_01510b20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *pvVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char *pcVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = param_1;
  do {
    lVar2 = arg1;
    if ((*(int64_t *)(lVar2 + 0x80) != 0) && (*(int64_t *)(lVar2 + 0x78) != 0)) {
      if ((*(char *)(lVar2 + 0xa1) == '\0') &&
         (pvVar1 = _pthread_getspecific((void*)uVar3), pvVar1 == (void *)0x0)) {
        FUN_015104e0();
      }
      if (*(int64_t *)(lVar2 + 0x90) != 0) {
        if (param_2 >> 0x20 == 0) {
          pvVar1 = _pthread_getspecific((void*)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(param_1,0,param_3,param_4);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar1 = _pthread_getspecific((void*)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(param_2,0,param_1,param_3);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        *(void*)(this_ptr + 1) = 0;
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        *this_ptr = local_48;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
    }
    arg1 = *(int64_t *)(lVar2 + 0x50);
    if (arg1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    pvVar1 = _pthread_getspecific((void*)uVar3);
    if (pvVar1 != (void *)0x0) {
      arg1 = *(int64_t *)(lVar2 + 0x50);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        arg1 = *(int64_t *)(arg1 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
  } while( true );
}



// ============================================================
// 00154c40
// ============================================================
// Function: FUN_00154c40
// Address: 00154c40
// Size: 760 bytes
// Class: MUPercussivePitchSystem

void FUN_00154c40(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t this_ptr;
  void* pVar5;
  int64_t local_98;
  char local_90;
  int64_t local_70;
  char local_68;
  int64_t local_58;
  char local_50;
  int local_40;
  
  FUN_00155070();
  if (*(int64_t *)(this_ptr + 0x88) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_90 == '\0') {
      if (local_98 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_98 == 0) {
      return;
    }
    if (0 < *(int *)(local_98 + 0xc)) {
      pVar5 = 0;
      do {
        lVar2 = local_58;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_00154df4;
          }
        }
        else if (local_58 != 0) {
LAB_00154df4:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar4 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar1 = *(int64_t *)(lVar2 + 0x10);
            local_58 = *(int64_t *)(lVar1 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((void*)lVar1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef640();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_00155200();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar5 = pVar5 + 1;
      } while ((int)pVar5 < *(int *)(local_98 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00153100
// ============================================================
// Function: FUN_00153100
// Address: 00153100
// Size: 602 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"

void FUN_00153100(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint local_50;
  void*local_38;
  char local_30;
  
  FUN_00d61ea0();
  lVar2 = g_027e3c40;
  plVar1 = (int64_t *)*arg1;
  if (g_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027e3c40;
  if (cVar4 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027e3c40 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_78);
    puVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      local_50 = 1;
      local_58 = &g_024c5048;
      if (this_ptr != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40(param_1,&local_58);
      if (local_30 == '\0') {
        if (local_38 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_58 = &g_024c5048;
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
      local_68 = puVar3;
      local_60 = '\0';
      local_58 = local_38;
      local_50 = local_50 & 0xffffff00;
      FUN_00ca0840(param_1,&local_58);
      if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01514120
// ============================================================
// Function: FUN_01514120
// Address: 01514120
// Size: 852 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01514120(double param_1,uint64_t param_2,int64_t *param_3,char param_4)

{
  void *pvVar1;
  uint64_t uVar2;
  void* in_ECX;
  uint64_t arg1;
  int unaff_EDI;
  uint64_t uVar3;
  double dVar4;
  
  if (arg1 >> 0x20 == 0) {
    return arg1;
  }
  if (*param_3 == 0) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_016c98e0();
    dVar4 = dVar4 + param_1;
    if (unaff_EDI == 2) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7bcc0();
      uVar2 = FUN_016cb9d0(dVar4,4);
      return uVar2;
    }
    if (unaff_EDI == 1) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb5f0(dVar4,0);
      return uVar2;
    }
    if (unaff_EDI == 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb690(dVar4,0);
      return uVar2;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (param_4 == '\0') {
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      uVar3 = FUN_012f91f0();
    }
    else {
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      uVar3 = FUN_012f9260();
    }
    if (unaff_EDI == 2) {
      FUN_012f92d0();
      uVar2 = FUN_00e7cd00(uVar3);
      return uVar2;
    }
    if (unaff_EDI == 1) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb070(uVar3,0);
      return uVar2;
    }
    if (unaff_EDI == 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb1a0(uVar3,0);
      return uVar2;
    }
  }
  uVar2 = FUN_00e7bdb0();
  return uVar2;
}



// ============================================================
// 0150f500
// ============================================================
// Function: FUN_0150f500
// Address: 0150f500
// Size: 566 bytes
// Class: MUPercussivePitchSystem

void FUN_0150f500(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int64_t *plVar3;
  int iVar4;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  if (*(char *)((int64_t)this_ptr + 0xa1) != '\0') {
    *(void*)((int64_t)this_ptr + 0xa1) = 0;
    (**(code **)(*this_ptr + 0x380))();
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0150f6b5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0150f6b5;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar4 = 0;
    do {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_0150f640;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_0150f640:
        pvVar2 = _pthread_getspecific(param_1);
        plVar3 = local_68;
        if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
          plVar3 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar1 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar3 + 0x370))();
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0150f6b5:
  lVar1 = this_ptr[9];
  if (lVar1 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(lVar1 + 0xc); iVar4 = iVar4 + 1) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f500();
    }
    FUN_0131c770();
  }
  return;
}



// ============================================================
// 0150c530
// ============================================================
// Function: FUN_0150c530
// Address: 0150c530
// Size: 504 bytes
// Class: MUPercussivePitchSystem

int64_t * FUN_0150c530(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  int iVar4;
  bool bVar5;
  int64_t local_90;
  char local_88;
  int64_t local_78;
  char local_70;
  
  lVar3 = *(int64_t *)(arg1 + 0x40);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(*(int64_t *)(arg1 + 0x48) + 0xc) == 0) goto LAB_0150c6fb;
  FUN_0150d2b0();
  if (lVar3 == local_78) {
LAB_0150c5c4:
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
      goto LAB_0150c5c4;
    }
  }
  else {
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x48);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150c530();
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        FUN_00d214d0();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c770();
  }
LAB_0150c6fb:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0150ec20
// ============================================================
// Function: FUN_0150ec20
// Address: 0150ec20
// Size: 649 bytes
// Class: MUPercussivePitchSystem

void FUN_0150ec20(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *arg1;
  int iVar3;
  int64_t local_40;
  char local_38;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_0150ed30;
          }
        }
        else if (local_40 != 0) {
LAB_0150ed30:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_0150da40();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508a20();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c470();
          FUN_0150d560();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}

