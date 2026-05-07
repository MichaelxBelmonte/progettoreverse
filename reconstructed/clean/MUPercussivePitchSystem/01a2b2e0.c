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

