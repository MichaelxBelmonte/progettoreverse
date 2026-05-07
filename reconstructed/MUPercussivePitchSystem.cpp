// Reconstructed implementation of MUPercussivePitchSystem
// From MikeCore binary — reverse-engineered pseudocode

#include "MUPercussivePitchSystem.h"

// ============================================================
// @01a2b2e0 — 8137 bytes
// str: ""MUPercussivePitchSystem""
// str: ""MUScalePitchSystem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a2cfbc) */
/* WARNING: Removing unreachable block (ram,0x01a2cfc8) */
/* WARNING: Removing unreachable block (ram,0x01a2b3d4) */
/* WARNING: Removing unreachable block (ram,0x01a2b3e0) */
/* WARNING: Removing unreachable block (ram,0x01a2b87e) */
/* WARNING: Removing unreachable block (ram,0x01a2b88a) */
/* WARNING: Removing unreachable block (ram,0x01a2d209) */
/* WARNING: Removing unreachable block (ram,0x01a2d215) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a2b2e0(undefined4 param_1,uint param_2,byte param_3)

{
  pthread_key_t pVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 uVar14;
  pthread_key_t pVar15;
  pthread_key_t pVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  longlong *unaff_RSI;
  code **ppcVar20;
  code *pcVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  float fVar25;
  float fVar26;
  uint uVar27;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  double dVar28;
  code *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  code *local_120;
  char local_118;
  code *local_110;
  char local_108;
  double local_c0;
  code *local_b8;
  code *local_b0;
  char local_a8;
  longlong local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  code *local_88;
  char local_80;
  code *local_78;
  ulonglong local_70;
  code *local_68;
  uint local_5c;
  code *local_58;
  code *local_48;
  code *local_40;
  
  FUN_01a295a0();
  pcVar17 = (code *)*unaff_RSI;
  local_78 = (code *)CONCAT44(local_78._4_4_,param_1);
  if (pcVar17 == local_b0) {
    if (((char)unaff_RSI[1] == '\0') && (local_b0 != (code *)0x0)) {
      if (local_a8 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01a2b3c2;
    }
    if ((local_a8 != '\0') && (local_b0 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar13 = unaff_RSI[1];
    if (local_a8 == '\0') {
      if (local_b0 != (code *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_b0;
      if (((char)lVar13 != '\0') && (pcVar17 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_b0;
      if (((char)lVar13 != '\0') && (pcVar17 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01a2b3c2:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  local_a0 = *unaff_RSI;
  if (local_a0 == 0) {
    return;
  }
  local_a8 = '\0';
  local_b0 = (code *)0x0;
  local_98 = -1;
  iStack_94 = 0;
  local_90 = 0;
  local_68 = (code *)0x0;
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
      lVar11 = (longlong)local_98;
      local_98 = local_98 + 1;
      bVar2 = true;
      lVar13 = local_a0;
      if (*(int *)(local_a0 + 0xc) <= local_98) goto LAB_01a2b592;
      lVar13 = *(longlong *)(local_a0 + 0x10);
      local_b0 = *(code **)(lVar13 + 8 + lVar11 * 8);
      pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
      pVar15 = (pthread_key_t)lVar13;
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
  if (local_b0 == (code *)0x0) {
    local_68 = (code *)0x0;
    lVar13 = 0;
LAB_01a2b592:
    pVar15 = (pthread_key_t)lVar13;
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
    pVar15 = (pthread_key_t)pcVar17;
    bVar2 = false;
    uVar23 = FUN_001159b0();
  }
  if (local_68 == (code *)0x0) {
    return;
  }
  FUN_01a296f0(uVar23,0);
  pvVar12 = _pthread_getspecific(pVar15);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  local_40 = local_b0;
  if (local_b0 == (code *)0x0) {
    local_40 = (code *)0x0;
    bVar5 = false;
    bVar22 = false;
    local_b8 = (code *)0x0;
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
    pvVar12 = _pthread_getspecific((pthread_key_t)pcVar17);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    local_b8 = local_88;
    if (local_88 == (code *)0x0) {
      bVar6 = false;
      local_b8 = (code *)0x0;
LAB_01a2b71a:
      bVar22 = local_b8 != (code *)0x0;
      if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
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
  if ((local_a8 != '\0') && (local_b0 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar22) {
    ppcVar20 = &local_b0;
    FUN_019d4fe0();
    pcVar17 = local_b0;
    if ((DAT_027c0160 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      ___cxa_guard_release();
    }
    if (pcVar17 == (code *)0x0) {
LAB_01a2b7d1:
      ppcVar20 = (code **)&DAT_02802688;
    }
    else {
      (**(code **)(*(longlong *)pcVar17 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_01a2b7d1;
    }
    local_48 = *ppcVar20;
    pcVar17 = local_48;
    if (local_48 == (code *)0x0) {
      local_70 = 0;
      local_48 = (code *)0x0;
    }
    else {
      if (*(char *)(ppcVar20 + 1) == '\0') {
        pcVar21 = (code *)FUN_00d50b00();
      }
      else {
        *(undefined1 *)(ppcVar20 + 1) = 0;
        pcVar21 = local_48;
      }
      local_70 = CONCAT71((int7)((ulonglong)pcVar21 >> 8),1);
    }
    pVar15 = (pthread_key_t)pcVar17;
    if ((local_a8 != '\0') && (local_b0 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != (code *)0x0) && ((param_2 & 0xfffffffe) == 2)) {
      pvVar12 = _pthread_getspecific(pVar15);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar15 = (pthread_key_t)local_68;
      }
      local_58 = (code *)FUN_0125a280();
      pvVar12 = _pthread_getspecific(pVar15);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar15 = (pthread_key_t)local_68;
      }
      local_c0 = (double)FUN_01259520();
      if (*unaff_RSI != 0) {
        local_a8 = '\0';
        local_b0 = (code *)0x0;
        local_98 = -1;
        iStack_94 = 0;
        local_90 = 0;
        local_a0 = *unaff_RSI;
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
          lVar13 = (longlong)local_98;
          local_98 = local_98 + 1;
          if (*(int *)(local_a0 + 0xc) <= local_98) break;
          lVar11 = *(longlong *)(local_a0 + 0x10);
          local_b0 = *(code **)(lVar11 + 8 + lVar13 * 8);
          pvVar12 = _pthread_getspecific((pthread_key_t)lVar11);
          pVar15 = (pthread_key_t)lVar11;
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
                local_58 = (code *)FUN_0125a280();
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
        pVar15 = (pthread_key_t)lVar13;
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar15 = (pthread_key_t)local_68;
      }
      FUN_01266fe0();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar23 = FUN_012e9900(SUB84((double)local_58 + DAT_023b1e90,0),
                            (local_c0 - ((double)local_58 + DAT_023b1e90)) + DAT_023b2c70);
      pcVar17 = local_b0;
      if (local_a8 == '\0') {
        if (((local_b0 != (code *)0x0) && (uVar23 = FUN_00d50b00(), local_a8 != '\0')) &&
           (local_b0 != (code *)0x0)) {
          uVar23 = FUN_00d50b20();
        }
      }
      else {
        local_a8 = '\0';
      }
      if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
      FUN_01759f40(uVar23,0);
      local_58 = local_b0;
      pcVar21 = local_b0;
      if (local_b0 == (code *)0x0) {
        local_58 = (code *)0x0;
        bVar22 = false;
      }
      else if (local_a8 == '\0') {
        FUN_00d50b00();
        bVar22 = true;
        if ((local_a8 != '\0') && (local_b0 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8 = '\0';
        bVar22 = true;
      }
      pVar15 = (pthread_key_t)pcVar21;
      if (local_58 == (code *)0x0) {
        bVar3 = false;
        pcVar21 = (code *)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (pthread_key_t)local_48;
        }
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (pthread_key_t)local_68;
        }
        FUN_0125a2c0();
        iVar9 = FUN_0173fc90();
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (pthread_key_t)local_58;
        }
        pvVar12 = _pthread_getspecific(pVar15);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = (pthread_key_t)local_68;
        }
        FUN_0125a2c0();
        iVar10 = FUN_0173fc90();
        if (iVar10 - iVar9 != 0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = (pthread_key_t)local_58;
          }
          FUN_0174dc60();
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = (pthread_key_t)local_58;
          }
          FUN_0173ecc0((float)(iVar10 - iVar9) * DAT_023908e0);
        }
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017402f0();
        pcVar21 = local_b0;
        if (local_b0 == (code *)0x0) {
          bVar3 = false;
        }
        else if (local_a8 == '\0') {
          FUN_00d50b00();
          bVar3 = true;
          if ((local_a8 != '\0') && (local_b0 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_a8 = '\0';
          bVar3 = true;
        }
      }
      if (pcVar17 != (code *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01a2b8f9;
    }
  }
  else {
    local_48 = (code *)0x0;
    local_70 = 0;
  }
  pcVar21 = (code *)0x0;
  bVar3 = false;
  bVar22 = false;
  local_58 = (code *)0x0;
LAB_01a2b8f9:
  lVar13 = *unaff_RSI;
  if (lVar13 == 0) {
joined_r0x01a2cac7:
    if (!bVar2) {
      FUN_00d50b20();
    }
    if ((bVar3) && (pcVar21 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar22) && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_48 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_b8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_40 != (code *)0x0)) {
      FUN_00d50b20();
    }
    return;
  }
  local_a8 = '\0';
  local_b0 = (code *)0x0;
  local_98 = -1;
  iStack_94 = 0;
  local_90 = 0;
  uVar23 = DAT_023b1610;
  local_a0 = lVar13;
  uVar24 = DAT_023b1610;
  if ((char)local_78 == '\0') {
    uVar23 = *(undefined4 *)(&DAT_0241bdc8 + (ulonglong)(param_2 == 2) * 4);
    uVar24 = *(undefined4 *)(&DAT_0241bdc8 + (ulonglong)(param_2 == 2) * 4);
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
          lVar13 = (longlong)local_98;
          local_98 = local_98 + 1;
          bVar5 = bVar4;
          if (*(int *)(local_a0 + 0xc) <= local_98) {
            FUN_001159b0();
            local_40 = local_78;
            goto joined_r0x01a2cac7;
          }
          lVar11 = *(longlong *)(local_a0 + 0x10);
          pcVar17 = *(code **)(lVar11 + 8 + lVar13 * 8);
          local_b0 = pcVar17;
          pvVar12 = _pthread_getspecific((pthread_key_t)lVar11);
          pVar15 = (pthread_key_t)lVar11;
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
        if ((bVar4) || (local_88 == (code *)0x0)) {
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
        if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
          uVar23 = FUN_00d50b20();
        }
      }
      else {
        if (local_80 == '\0') {
          if (local_88 != (code *)0x0) {
            uVar23 = FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar4) && (local_78 != (code *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_01a2bba8;
        }
        bVar5 = true;
        if ((bVar4) && (local_78 != (code *)0x0)) {
          uVar23 = FUN_00d50b20();
        }
      }
LAB_01a2bbbc:
      local_78 = (code *)0x0;
      iVar10 = iVar9;
      bVar4 = bVar5;
    } while (local_40 == (code *)0x0);
    pvVar12 = _pthread_getspecific((pthread_key_t)pcVar18);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      pcVar18 = local_40;
    }
    uVar23 = FUN_0152ebe0();
    pcVar19 = local_88;
    if (local_88 == local_b8) {
      if ((!bVar6) && (local_88 != (code *)0x0)) {
        bVar6 = true;
        if (local_80 != '\0') goto LAB_01a2bcd8;
        bVar6 = true;
        uVar23 = FUN_00d50b00();
      }
LAB_01a2bcc4:
      if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
    }
    else {
      if (local_80 == '\0') {
        if (local_88 != (code *)0x0) {
          uVar23 = FUN_00d50b00();
        }
        if ((bVar6) && (local_b8 != (code *)0x0)) {
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
      if ((bVar6) && (local_b8 != (code *)0x0)) {
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
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),DAT_027c0160);
    uVar23 = extraout_XMM0_Da_01;
    if ((DAT_027c0160 == '\0') &&
       (uVar14 = ___cxa_guard_acquire(), uVar23 = extraout_XMM0_Da_05, (int)uVar14 != 0)) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      pcVar18 = FUN_0015ecf0;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      uVar14 = ___cxa_guard_release();
      uVar23 = extraout_XMM0_Da_06;
    }
    ppcVar20 = (code **)&DAT_02802688;
    if (pcVar17 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar17 + 0x360))();
      uVar14 = FUN_00e85ea0();
      ppcVar20 = &local_88;
      uVar23 = extraout_XMM0_Da_02;
      if ((char)uVar14 == '\0') {
        ppcVar20 = (code **)&DAT_02802688;
      }
    }
    pcVar17 = *ppcVar20;
    if (pcVar17 == local_48) {
      if (((char)local_70 == '\0') && (pcVar17 != (code *)0x0)) {
        pcVar17 = local_48;
        if (*(char *)(ppcVar20 + 1) != '\0') goto LAB_01a2bd82;
        local_5c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
        uVar23 = FUN_00d50b00();
      }
      else {
        local_5c = (uint)local_70;
        pcVar17 = local_48;
      }
    }
    else if (*(char *)(ppcVar20 + 1) == '\0') {
      if (pcVar17 != (code *)0x0) {
        uVar14 = FUN_00d50b00();
        uVar23 = extraout_XMM0_Da_04;
      }
      local_5c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
      if (((char)local_70 != '\0') && (local_48 != (code *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
    }
    else {
      if (((char)local_70 != '\0') && (local_48 != (code *)0x0)) {
        uVar14 = FUN_00d50b20();
        uVar23 = extraout_XMM0_Da_03;
      }
LAB_01a2bd82:
      *(undefined1 *)(ppcVar20 + 1) = 0;
      local_5c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    }
    local_48 = pcVar17;
    if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
      uVar23 = FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (code *)0x0)) {
      uVar23 = FUN_00d50b20();
    }
    pVar15 = (pthread_key_t)local_40;
    if (local_48 == (code *)0x0) {
      local_110 = local_b0;
      local_108 = '\0';
      FUN_019d4fe0(uVar23,&local_110);
      pcVar17 = local_88;
      if ((DAT_027c0150 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_0270acc8 = FUN_0015ea50();
        _DAT_0270acb0 = "MUPercussivePitchSystem";
        _DAT_0270acb8 = 0x58;
        _DAT_0270acc0 = FUN_0015eca0;
        _DAT_0270acd0 = 0;
        uRam000000000270acd8 = 0;
        _DAT_0270ace0 = 0;
        uRam000000000270ace8 = 0;
        _DAT_0270acf0 = 0;
        uRam000000000270acf8 = 0;
        _DAT_0270ad00 = 0;
        uRam000000000270ad08 = 0;
        _DAT_0270ad10 = 0;
        uRam000000000270ad18 = 0;
        _DAT_0270ad20 = 0;
        uRam000000000270ad28 = 0;
        _DAT_0270ad30 = 0;
        uRam000000000270ad38 = 0;
        _DAT_0270ad40 = 0;
        uRam000000000270ad48 = 0;
        _DAT_0270ad50 = 0;
        uRam000000000270ad58 = 0;
        _DAT_0270ad60 = 0;
        uRam000000000270ad68 = 0;
        _DAT_0270ad70 = 0;
        ___cxa_guard_release();
      }
      ppcVar20 = (code **)&DAT_02802688;
      if (pcVar17 != (code *)0x0) {
        (**(code **)(*(longlong *)pcVar17 + 0x360))();
        cVar7 = FUN_00e85ea0();
        ppcVar20 = &local_88;
        if (cVar7 == '\0') {
          ppcVar20 = (code **)&DAT_02802688;
        }
      }
      pcVar17 = *ppcVar20;
      if (*(char *)(ppcVar20 + 1) == '\0') {
        if (pcVar17 != (code *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(ppcVar20 + 1) = 0;
      }
      pVar16 = (pthread_key_t)ppcVar20;
      if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (pcVar17 != (code *)0x0) {
        if (param_2 < 2) {
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar12 = _pthread_getspecific(pVar16);
          pcVar19 = pcVar17;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar19 = *(code **)(pcVar17 + ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          local_78 = pcVar19;
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = *(code **)(pcVar17 + ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125dfa0();
          (**(code **)(*(longlong *)pcVar17 + 0x3a8))();
          lVar13 = *(longlong *)local_78;
          (**(code **)(lVar13 + 0x3a0))();
          pVar16 = (pthread_key_t)lVar13;
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
            pcVar19 = *(code **)(pcVar17 + ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          local_78 = pcVar19;
          pvVar12 = _pthread_getspecific(pVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = *(code **)(pcVar17 + ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125dfa0();
          (**(code **)(*(longlong *)pcVar17 + 0x3b0))();
          lVar13 = *(longlong *)local_78;
          (**(code **)(lVar13 + 0x3a0))();
          pVar16 = (pthread_key_t)lVar13;
          FUN_0125a580();
        }
        FUN_00d50b20();
      }
    }
    else {
      pvVar12 = _pthread_getspecific((pthread_key_t)pcVar18);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar25 = (float)FUN_0125dfa0();
      pVar16 = (pthread_key_t)pcVar18;
      if (param_2 < 2) {
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_138 = '\0';
        local_140 = 0;
        pVar16 = (pthread_key_t)param_3;
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
        pvVar12 = _pthread_getspecific((pthread_key_t)pcVar18);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pcVar18 = local_48;
        }
        iVar9 = FUN_0173fc90(fVar25);
        pvVar12 = _pthread_getspecific((pthread_key_t)pcVar18);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pcVar18 = local_48;
        }
        uVar23 = FUN_0173fd40(fVar25);
        local_78 = (code *)CONCAT44(local_78._4_4_,uVar23);
        pvVar12 = _pthread_getspecific((pthread_key_t)pcVar18);
        pcVar17 = local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pcVar18 = local_48;
          pcVar17 = *(code **)(local_48 + ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
        }
        pVar16 = (pthread_key_t)pcVar18;
        pvVar12 = _pthread_getspecific(pVar16);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar16 = pVar15;
        }
        FUN_0152e000();
        (**(code **)(*(longlong *)pcVar17 + 0x3a8))();
        pvVar12 = _pthread_getspecific(pVar16);
        pVar1 = (pthread_key_t)local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar16 = pVar1;
        }
        FUN_01740240();
        if (local_88 == (code *)0x0) {
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
        if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
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
        pcVar17 = (code *)(ulonglong)param_3;
        local_120 = pcVar21;
        fVar25 = (float)FUN_0173fdf0(fVar25,(ulonglong)local_78 & 0xffffffff,uVar24,iVar9);
        if ((local_118 != '\0') && (local_120 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pVar16 = (pthread_key_t)pcVar17;
        if (param_2 == 2) {
          pvVar12 = _pthread_getspecific(pVar16);
          pcVar19 = local_48;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = local_48;
            pcVar19 = *(code **)(local_48 + ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)pcVar17);
          pcVar17 = local_48;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar17 = *(code **)(local_48 + ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
          }
          (**(code **)(*(longlong *)pcVar17 + 0x3b0))(fVar25);
          lVar13 = *(longlong *)pcVar19;
          fVar25 = (float)(**(code **)(lVar13 + 0x3a0))();
          pVar16 = (pthread_key_t)lVar13;
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
          FUN_0152dce0(uVar27 ^ _DAT_023945e0);
        }
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a580(fVar25 + DAT_02390124);
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
      FUN_0152df00(DAT_02390124);
    }
    pvVar12 = _pthread_getspecific(pVar16);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar23 = FUN_0152dfb0();
    local_70 = (ulonglong)local_5c;
  } while( true );
}




// ============================================================
// @01324620 — 7178 bytes
// str: ""%p::_pitchSystem""
// str: ""MU12TETPitchSystem""
// str: ""MUPercussivePitchSystem""
// str: ""MUScalePitchSystem""
// str: ""MUAudioSourcePrincipalItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01324664) */
/* WARNING: Removing unreachable block (ram,0x01324670) */
/* WARNING: Removing unreachable block (ram,0x0132477d) */
/* WARNING: Removing unreachable block (ram,0x01324789) */
/* WARNING: Removing unreachable block (ram,0x01325b2f) */
/* WARNING: Removing unreachable block (ram,0x01325b50) */
/* WARNING: Removing unreachable block (ram,0x013258c7) */
/* WARNING: Removing unreachable block (ram,0x013258f0) */
/* WARNING: Removing unreachable block (ram,0x013258c9) */
/* WARNING: Removing unreachable block (ram,0x013258f2) */
/* WARNING: Removing unreachable block (ram,0x01325b31) */
/* WARNING: Removing unreachable block (ram,0x01325b52) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01324620(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar14;
  longlong **pplVar15;
  bool bVar16;
  undefined4 uVar17;
  float fVar18;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a0;
  char local_98;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  uint local_58;
  int local_48;
  longlong *local_38;
  
  FUN_00d50f50();
  if (*(longlong *)(unaff_RDI + 0x50) != 0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01525bc0();
    iVar3 = *(int *)((longlong)local_60 + 0xc);
    if ((char)local_58 != '\0') {
      FUN_00d50b20();
    }
    if ((iVar3 == 0) && (*(longlong *)(unaff_RDI + 0x50) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x50) = 0;
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x58) == 0) {
LAB_01324709:
    plVar13 = *(longlong **)(unaff_RDI + 0x50);
  }
  else {
    plVar13 = (longlong *)0x0;
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      *(undefined8 *)(unaff_RDI + 0x50) = 0;
      FUN_00d50b20();
      goto LAB_01324709;
    }
  }
  if (plVar13 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      plVar13 = *(longlong **)(unaff_RDI + 0x50);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar13 + 0x138))();
    local_b0 = 0;
    local_b8 = *(longlong *)(unaff_RDI + 0x50);
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_016cbc90();
    plVar13 = *(longlong **)(unaff_RDI + 0x58);
    plVar7 = plVar13;
    if (plVar13 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_013247db;
        }
        FUN_00d50b00();
        param_1 = *(longlong **)(unaff_RDI + 0x58);
        *(longlong **)(unaff_RDI + 0x58) = local_60;
        plVar7 = local_60;
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar7 = local_60;
LAB_013247db:
        *(longlong **)(unaff_RDI + 0x58) = plVar7;
        param_1 = plVar13;
      }
      if (param_1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      *(undefined8 *)(unaff_RDI + 0x50) = 0;
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x58) == 0) {
    FUN_016c0a70();
    plVar13 = *(longlong **)(unaff_RDI + 0x58);
    plVar7 = plVar13;
    if (plVar13 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_01324884;
        }
        FUN_00d50b00();
        param_1 = *(longlong **)(unaff_RDI + 0x58);
        *(longlong **)(unaff_RDI + 0x58) = local_60;
        plVar7 = local_60;
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar7 = local_60;
LAB_01324884:
        *(longlong **)(unaff_RDI + 0x58) = plVar7;
        param_1 = plVar13;
      }
      if (param_1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
    plVar13 = (longlong *)*unaff_RSI;
    FUN_0002c940();
    if (plVar13 == (longlong *)0x0) {
LAB_01324973:
      param_1 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      param_1 = unaff_RSI;
      if (cVar2 == '\0') goto LAB_01324973;
    }
    plVar13 = (longlong *)*param_1;
    lVar5 = param_1[1];
    if (((char)lVar5 == '\0') || (plVar13 == (longlong *)0x0)) {
      if (plVar13 == (longlong *)0x0) goto LAB_01324e0a;
    }
    else {
      FUN_00d50b00();
    }
    lVar10 = DAT_027bf3e0;
    if (DAT_027bf3e0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar13 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_027bf3e0;
    if (cVar2 != '\0') {
      if (DAT_027bf3e0 != 0) {
        FUN_00d50b00();
      }
      iVar3 = (**(code **)(*plVar13 + 0x520))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (iVar3 != 0) {
        FUN_0141ae70();
        plVar7 = *(longlong **)(unaff_RDI + 0x148);
        plVar8 = plVar7;
        if (plVar7 != local_60) {
          if ((char)local_58 == '\0') {
            if (local_60 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_01324c98;
            }
            FUN_00d50b00();
            param_1 = *(longlong **)(unaff_RDI + 0x148);
            *(longlong **)(unaff_RDI + 0x148) = local_60;
            plVar8 = local_60;
          }
          else {
            local_58 = local_58 & 0xffffff00;
            plVar8 = local_60;
LAB_01324c98:
            *(longlong **)(unaff_RDI + 0x148) = plVar8;
            param_1 = plVar7;
          }
          if (param_1 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_60;
          }
        }
        if (((char)local_58 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = DAT_027bf3e8;
        if (iVar3 == 3) {
          if (DAT_027bf3e8 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*plVar13 + 0x590))();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar10 = DAT_027bf3e8;
            if (DAT_027bf3e8 != 0) {
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
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b660();
    plVar13 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_013249c5;
      }
    }
    else if (local_60 != (longlong *)0x0) {
LAB_013249c5:
      lVar5 = DAT_027bf3f0;
      if (DAT_027bf3f0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar13 + 0x50))();
      lVar10 = DAT_027bf3f8;
      cVar1 = '\x01';
      if (cVar2 == '\0') {
        if (DAT_027bf3f8 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar13 + 0x50))();
        lVar12 = DAT_027bf400;
        cVar1 = '\x01';
        if (cVar2 == '\0') {
          if (DAT_027bf400 != 0) {
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
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01538fb0();
        if (*(longlong *)(unaff_RDI + 0x158) == 0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          param_1 = (longlong *)&DAT_025eec60;
          *puVar6 = &DAT_025eec60;
          puVar6[7] = 0;
          puVar6[8] = 0;
          *(undefined4 *)(puVar6 + 9) = 0;
          (*DAT_025eec78)();
          lVar5 = *(longlong *)(unaff_RDI + 0x158);
          *(undefined8 **)(unaff_RDI + 0x158) = puVar6;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01538fb0();
      }
      FUN_00d50b20();
    }
  }
LAB_01324e0a:
  pVar11 = (pthread_key_t)param_1;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  uVar17 = FUN_00d50b00();
  pplVar14 = &local_a0;
  FUN_00d8cb40(uVar17,&local_60);
  plVar13 = local_a0;
  if (local_98 == '\0') {
    if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
       (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = '\0';
  }
  local_60 = &DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  local_d0 = plVar13;
  uVar17 = (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  local_130 = plVar13;
  local_128 = '\0';
  pplVar15 = &local_60;
  FUN_000175c0(uVar17,&local_130);
  plVar13 = local_60;
  FUN_0015ea50();
  if (plVar13 == (longlong *)0x0) {
LAB_01324eef:
    pplVar15 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01324eef;
  }
  plVar13 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_a0 = plVar13;
    local_98 = 1;
  }
  else {
    local_a0 = plVar13;
    local_98 = 1;
    *(undefined1 *)(pplVar15 + 1) = 0;
  }
  local_98 = '\x01';
  local_a0 = plVar13;
  if (((char)local_58 != '\0') && (local_98 = '\x01', local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_0278c570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027c3448 = FUN_0015ea50();
    _DAT_027c3430 = "MU12TETPitchSystem";
    _DAT_027c3438 = 0x68;
    pVar11 = 0x15ec50;
    _DAT_027c3440 = FUN_0015ec50;
    _DAT_027c3450 = 0;
    uRam00000000027c3458 = 0;
    _DAT_027c3460 = 0;
    uRam00000000027c3468 = 0;
    _DAT_027c3470 = 0;
    uRam00000000027c3478 = 0;
    _DAT_027c3480 = 0;
    uRam00000000027c3488 = 0;
    _DAT_027c3490 = 0;
    uRam00000000027c3498 = 0;
    _DAT_027c34a0 = 0;
    uRam00000000027c34a8 = 0;
    _DAT_027c34b0 = 0;
    uRam00000000027c34b8 = 0;
    _DAT_027c34c0 = 0;
    uRam00000000027c34c8 = 0;
    _DAT_027c34d0 = 0;
    uRam00000000027c34d8 = 0;
    _DAT_027c34e0 = 0;
    uRam00000000027c34e8 = 0;
    _DAT_027c34f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (longlong *)0x0) {
LAB_01324fe3:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01324fe3;
  }
  plVar13 = local_a0;
  cVar2 = *(char *)(pplVar14 + 1);
  if ((cVar2 == '\0') || (*pplVar14 == (longlong *)0x0)) {
    if (*pplVar14 != (longlong *)0x0) goto LAB_01325010;
    if ((DAT_027c0150 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      pVar11 = 0x15eca0;
      _DAT_0270acc0 = FUN_0015eca0;
      _DAT_0270acd0 = 0;
      uRam000000000270acd8 = 0;
      _DAT_0270ace0 = 0;
      uRam000000000270ace8 = 0;
      _DAT_0270acf0 = 0;
      uRam000000000270acf8 = 0;
      _DAT_0270ad00 = 0;
      uRam000000000270ad08 = 0;
      _DAT_0270ad10 = 0;
      uRam000000000270ad18 = 0;
      _DAT_0270ad20 = 0;
      uRam000000000270ad28 = 0;
      _DAT_0270ad30 = 0;
      uRam000000000270ad38 = 0;
      _DAT_0270ad40 = 0;
      uRam000000000270ad48 = 0;
      _DAT_0270ad50 = 0;
      uRam000000000270ad58 = 0;
      _DAT_0270ad60 = 0;
      uRam000000000270ad68 = 0;
      _DAT_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar13 == (longlong *)0x0) {
LAB_01325133:
      pplVar14 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01325133;
      pplVar14 = &local_a0;
    }
    plVar7 = local_a0;
    plVar13 = *pplVar14;
    local_88 = (longlong *)CONCAT71(local_88._1_7_,*(char *)(pplVar14 + 1));
    if ((*(char *)(pplVar14 + 1) != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b00();
LAB_013252ea:
      FUN_0173c6e0();
      local_38 = local_60;
      plVar7 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        local_90 = 0;
      }
      else {
        plVar8 = local_60;
        if ((char)local_58 == '\0') {
          plVar8 = (longlong *)FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            local_90 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
            FUN_00d50b20();
            goto LAB_0132534b;
          }
        }
        local_90 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      }
LAB_0132534b:
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
      plVar8 = local_38;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar7 = local_38;
        plVar8 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar13 + 0x3f0))();
      lVar5 = *plVar8;
      (**(code **)(lVar5 + 0x3f8))();
      pVar11 = (pthread_key_t)lVar5;
      if ((char)local_88 == '\0') {
        local_80 = local_90;
      }
      else {
        FUN_00d50b20();
        local_80 = local_90;
      }
      goto LAB_01325232;
    }
    if (plVar13 != (longlong *)0x0) goto LAB_013252ea;
    if ((DAT_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      pVar11 = 0x15ecf0;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
LAB_01325465:
      pplVar14 = (longlong **)&DAT_02802688;
      if (DAT_02802688 == 0) goto LAB_013254be;
LAB_01325481:
      local_38 = local_a0;
      if (local_a0 == (longlong *)0x0) goto LAB_013254be;
      local_80 = CONCAT71((int7)((ulonglong)pplVar14 >> 8),local_98);
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
    if (local_a0 != (longlong *)0x0) goto LAB_01325481;
LAB_013254be:
    local_80 = 0;
LAB_013254c4:
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_01510030();
    if (local_60 == (longlong *)0x0) {
      bVar16 = true;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_0150eb60();
      bVar16 = local_70 == (longlong *)0x0;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_90 = CONCAT44(local_90._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
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
    if (local_60 == (longlong *)0x0) {
      pvVar4 = _pthread_getspecific(0);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd00();
      if ((char)local_58 == '\0') {
        if (local_60 == (longlong *)0x0) goto LAB_013251c1;
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_60 == (longlong *)0x0) {
LAB_013251c1:
        local_80 = 0;
        local_38 = (longlong *)0x0;
        goto LAB_013251e3;
      }
      FUN_0173c6e0();
      local_38 = local_60;
      plVar7 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        local_80 = 0;
      }
      else {
        local_80 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
    else {
      plVar8 = local_60;
      if ((char)local_58 == '\0') {
        plVar8 = (longlong *)FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          plVar8 = (longlong *)FUN_00d50b20();
        }
      }
      local_80 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar7 = plVar13;
      }
      local_80 = 1;
      FUN_0174bd90();
    }
LAB_013251e3:
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
    plVar13 = local_38;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar7 = local_38;
      plVar13 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar11 = (pthread_key_t)plVar7;
    (**(code **)(*plVar13 + 0x3f8))();
    if (cVar2 != '\0') {
      FUN_00d50b20();
    }
LAB_01325232:
    if (local_38 == (longlong *)0x0) goto LAB_013254c4;
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_120 = local_38;
    local_118 = '\0';
    FUN_0150bf50();
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = local_90 & 0xffffffff00000000;
  }
  local_58 = 1;
  local_60 = &DAT_024c5048;
  uVar17 = FUN_00d50b00();
  FUN_00d8cb40(uVar17,&local_60);
  plVar13 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  local_60 = &DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  local_110 = plVar13;
  local_108 = '\0';
  pplVar14 = &local_60;
  FUN_000175c0();
  plVar7 = local_60;
  if ((DAT_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    local_78 = plVar13;
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    pVar11 = 0x15ecf0;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
    plVar13 = local_78;
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_013256c4;
  }
  pplVar14 = (longlong **)&DAT_02802688;
LAB_013256c4:
  plVar7 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = '\0';
    local_100 = plVar7;
    FUN_0150bf50();
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_026f6de8;
  plVar8 = (longlong *)*unaff_RSI;
  if (DAT_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar5;
  local_c0 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if (iVar3 < 1) {
    iVar3 = 5;
    if ((*(longlong *)(unaff_RDI + 0x1f8) == 0) &&
       (iVar3 = 6, *(longlong *)(unaff_RDI + 0x200) == 0)) {
      if (*(longlong *)(unaff_RDI + 0x148) == 0) {
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
      lVar5 = *(longlong *)(unaff_RDI + 200);
      if (lVar5 != 0) {
        local_58 = local_58 & 0xffffff00;
        local_60 = (longlong *)0x0;
        local_48 = -1;
        local_88 = plVar7;
        local_78 = plVar13;
        while( true ) {
          lVar10 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_48) break;
          lVar12 = *(longlong *)(lVar5 + 0x10);
          local_60 = *(longlong **)(lVar12 + 8 + lVar10 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar12);
          pVar11 = (pthread_key_t)lVar12;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc000();
          plVar13 = local_70;
          if (local_68 == '\0') {
            if (local_70 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_013259a0;
            }
LAB_01325a00:
            bVar16 = true;
          }
          else {
            if (local_70 == (longlong *)0x0) goto LAB_01325a00;
LAB_013259a0:
            pvVar4 = _pthread_getspecific(pVar11);
            if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
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
      *(undefined1 *)(unaff_RDI + 0x1a8) = 1;
    }
  }
  else if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_026f6de8;
  plVar8 = (longlong *)*unaff_RSI;
  if (DAT_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar5;
  local_e8 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((iVar3 < 2) && (lVar5 = *(longlong *)(unaff_RDI + 200), lVar5 != 0)) {
    local_88 = plVar7;
    local_78 = plVar13;
    local_58 = local_58 & 0xffffff00;
    local_60 = (longlong *)0x0;
    local_48 = -1;
LAB_01325b2b:
    while( true ) {
      lVar10 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) break;
      plVar13 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + 8 + lVar10 * 8);
      local_60 = plVar13;
      if ((DAT_027c0170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        ___cxa_guard_release();
      }
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar14 = &local_60;
        if (cVar2 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar13 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') goto LAB_01325bd0;
      *(undefined1 *)(pplVar14 + 1) = 0;
      if (plVar13 != (longlong *)0x0) goto LAB_01325be1;
    }
    FUN_0131c8b0();
    plVar13 = local_78;
    plVar7 = local_88;
  }
  lVar5 = DAT_026f6de8;
  plVar8 = (longlong *)*unaff_RSI;
  if (DAT_026f6de8 != 0) {
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
    *(undefined1 *)(unaff_RDI + 0x1a8) = 1;
  }
  plVar8 = local_d0;
  if (*(float *)(unaff_RDI + 0x78) < *(float *)(unaff_RDI + 0x8c)) {
    *(float *)(unaff_RDI + 0x8c) = *(float *)(unaff_RDI + 0x78);
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_80 != '\0' && (char)local_90 == '\0') {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_01325bd0:
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b00();
LAB_01325be1:
    pVar11 = (pthread_key_t)pplVar14;
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d1d00();
    if (local_70 == (longlong *)0x0) {
      bVar16 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      bVar16 = true;
      if (((cVar2 == '\0') && (plVar13 != *(longlong **)(unaff_RDI + 0x118))) &&
         (plVar13 != *(longlong **)(unaff_RDI + 0x128))) {
        bVar16 = plVar13 == *(longlong **)(unaff_RDI + 0x120);
      }
      bVar16 = (bool)(bVar16 ^ 1);
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014bc1c0();
      if (fVar18 < *(float *)(unaff_RDI + 0x78)) {
        pvVar4 = _pthread_getspecific(pVar11);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        plVar13 = local_70;
        if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_01326e80();
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  goto LAB_01325b2b;
}




// ============================================================
// @01bab160 — 5703 bytes
// str: ""MUPercussivePitchSystem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01bab8e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bab160(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong **pplVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  pthread_key_t pVar9;
  longlong **pplVar10;
  longlong *plVar11;
  int iVar12;
  longlong *unaff_RDI;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong *local_res8;
  undefined4 local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_248;
  undefined1 local_240;
  longlong local_238;
  undefined1 local_230;
  longlong *local_228;
  undefined1 local_220;
  longlong local_218;
  undefined1 local_210;
  longlong *local_208;
  undefined1 local_200;
  longlong local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  float local_1c4;
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  int local_dc;
  longlong *local_d8;
  char local_d0;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  longlong *local_b8;
  char local_b0 [8];
  longlong *local_a8;
  undefined8 local_a0;
  int local_98;
  int local_8c;
  longlong *local_88;
  ulonglong local_80;
  float local_78;
  float local_74;
  longlong *local_70;
  uint local_64;
  longlong *local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  local_248 = *unaff_RDI;
  local_240 = 0;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_01ba9e60(param_1,&local_248);
  plVar11 = local_60;
  if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_70 = plVar11;
  if ((*(int *)(*unaff_RDI + 0xc) == 0) || (plVar11 == (longlong *)0x0)) {
    if ((longlong *)*local_f0 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*local_f0 + 0x998))();
      plVar1 = (longlong *)*local_f0;
      FUN_00e9aaa0();
      local_1a8 = local_60;
      local_1a0 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_1a0 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((longlong *)*local_e8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*local_e8 + 0x998))();
      plVar1 = (longlong *)*local_e8;
      FUN_00e9aaa0();
      local_198 = local_60;
      local_190 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_190 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((longlong *)*local_res8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*local_res8 + 0x998))();
      plVar1 = (longlong *)*local_res8;
      FUN_00e9aaa0();
      local_1c0 = local_60;
      local_1b8 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_1b8 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01bac7ab;
  }
  local_230 = 0;
  local_238 = *unaff_RDI;
  FUN_01baad70();
  if ((longlong *)*local_f0 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_f0 + 0x998))();
  }
  if ((longlong *)*local_e8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_e8 + 0x998))();
  }
  if (((longlong *)*local_res8 != (longlong *)0x0) && (*local_res18 != 0)) {
    (**(code **)(*(longlong *)*local_res8 + 0x998))();
    plVar11 = (longlong *)*local_res18;
    FUN_00c9fe20();
    plVar1 = local_60;
    local_d8 = (longlong *)CONCAT71(local_d8._1_7_,local_58[0]);
    pplVar10 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar10 = &local_d8;
    }
    *(char *)pplVar10 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_38 = plVar11;
    FUN_00d23310();
    plVar11 = local_60;
    local_b8 = (longlong *)CONCAT71(local_b8._1_7_,local_58[0]);
    pplVar10 = &local_b8;
    pplVar4 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = pplVar10;
    }
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)pplVar10);
    plVar13 = plVar11;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar13 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar13 + 0x390))();
    fVar18 = (float)_exp2f(fVar18 * DAT_023941f4);
    (**(code **)(*local_38 + 0x3c8))(fVar18 * DAT_023941f8);
    if (((char)local_b8 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = (longlong *)*local_res18;
    FUN_00c9fe20();
    plVar1 = local_60;
    pplVar10 = &local_d8;
    if (local_58[0] != '\0') {
      pplVar10 = (longlong **)local_58;
    }
    local_d8 = (longlong *)CONCAT71(local_d8._1_7_,local_58[0]);
    *(char *)pplVar10 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    plVar13 = local_60;
    pplVar10 = &local_b8;
    pplVar4 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = pplVar10;
    }
    local_b8 = (longlong *)CONCAT71(local_b8._1_7_,local_58[0]);
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)pplVar10);
    plVar14 = plVar13;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar14 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar14 + 0x398))();
    fVar18 = (float)_exp2f(fVar18 * DAT_023941f4);
    (**(code **)(*plVar11 + 0x3d8))(fVar18 * DAT_023941f8);
    if (((char)local_b8 != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar11 = local_70;
  if (*unaff_RDI == 0) {
    local_c0 = 0;
    local_c8 = DAT_02391074;
    local_c4 = DAT_02391074;
    local_78 = DAT_02391078;
    local_74 = DAT_02391078;
    local_38 = (longlong *)0x0;
    local_80 = 0;
    local_88 = (longlong *)0x0;
    cVar3 = '\0';
LAB_01bac0e2:
    plVar1 = (longlong *)*local_f0;
    if (plVar1 != (longlong *)0x0) {
      FUN_00e99dd0();
      local_168 = local_60;
      local_160 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_160 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_dc = -0x80000000;
    local_8c = 0x7fffffff;
    local_74 = DAT_02391078;
    local_78 = DAT_02391078;
    local_c4 = DAT_02391074;
    local_c8 = DAT_02391074;
    local_48._4_4_ = 0;
    uVar15 = 0;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    local_38 = (longlong *)0x0;
    local_c0 = 0;
    local_50 = *unaff_RDI;
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
      lVar6 = (longlong)(int)local_48;
      iVar12 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      if (*(int *)(local_50 + 0xc) <= iVar12) break;
      plVar1 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar6 * 8);
      local_b8 = plVar1;
      local_60 = plVar1;
      FUN_0006e1c0();
      pplVar10 = &DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar10 = &local_b8;
        if (cVar3 == '\0') {
          pplVar10 = &DAT_02802688;
        }
      }
      if (*pplVar10 != (longlong *)0x0) {
        local_1b0 = (longlong *)0x0;
        FUN_00c9fe20();
        plVar1 = local_b8;
        local_d8 = (longlong *)CONCAT71(local_d8._1_7_,local_b0[0]);
        pplVar10 = (longlong **)local_b0;
        if (local_b0[0] == '\0') {
          pplVar10 = &local_d8;
        }
        *(undefined1 *)pplVar10 = 0;
        if ((local_b0[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_d8 == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01bab8b1;
          }
        }
        else if (plVar1 != (longlong *)0x0) {
LAB_01bab8b1:
          local_b0[0] = '\0';
          local_b8 = (longlong *)0x0;
          local_a8 = plVar1;
          local_a0 = 0xffffffff;
          local_98 = 0;
          while( true ) {
            lVar6 = (longlong)(int)local_a0;
            iVar12 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar12);
            bVar2 = true;
            if (*(int *)((longlong)local_a8 + 0xc) <= iVar12) break;
            local_1d8 = *(longlong **)(local_a8[2] + 8 + lVar6 * 8);
            local_1d0 = '\0';
            local_b8 = local_1d8;
            FUN_01baacc0(local_a8[2],&local_1d8);
            local_d8 = local_60;
            local_d0 = '\0';
            uVar7 = FUN_00d23d70();
            cVar3 = (char)uVar7;
            if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            plVar13 = local_b8;
            if (cVar3 != '\0') {
              if (local_b8 != (longlong *)0x0) {
                if (local_b0[0] == '\0') {
                  uVar7 = FUN_00d50b00();
                }
                else {
                  local_b0[0] = '\0';
                }
                local_1b0 = plVar13;
                local_f8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                bVar2 = false;
                FUN_01bb3e20();
                if (plVar1 == (longlong *)0x0) goto LAB_01baba93;
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
          plVar13 = (longlong *)0x0;
          local_f8 = 0;
          FUN_01bb3e20();
          if (plVar1 != (longlong *)0x0) {
LAB_01baba8b:
            FUN_00d50b20();
          }
LAB_01baba93:
          plVar11 = local_70;
          if (plVar13 != (longlong *)0x0) {
            bVar17 = local_88 != (longlong *)0x0;
            if (!bVar17) {
              local_88 = plVar13;
            }
            local_64 = uVar15 & 0xff;
            pVar9 = 0;
            if (!bVar17) {
              local_64 = 0;
            }
            if (!(bool)(bVar17 | bVar2)) {
              local_64 = (uint)CONCAT71((int7)((ulonglong)local_88 >> 8),1);
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
            uVar8 = (undefined7)((ulonglong)plVar1 >> 8);
            if (local_b8 == local_38) {
              if (((char)local_80 == '\0') && (local_b8 != (longlong *)0x0)) {
                if (local_b0[0] != '\0') {
                  uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
                  goto joined_r0x01babb82;
                }
                uVar16 = CONCAT71(uVar8,1);
                FUN_00d50b00();
              }
              else {
                uVar16 = local_80 & 0xffffffff;
              }
LAB_01babbcb:
              if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_80 = uVar16 & 0xffffffff;
              if (plVar11 == (longlong *)0x0) goto LAB_01babce5;
LAB_01babbf5:
              local_38 = plVar11;
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152ebe0();
              plVar11 = local_b8;
              if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 == (longlong *)0x0) goto LAB_01babceb;
              if ((DAT_027c0150 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
                _DAT_0270acc8 = FUN_0015ea50();
                _DAT_0270acb0 = "MUPercussivePitchSystem";
                _DAT_0270acb8 = 0x58;
                _DAT_0270acc0 = FUN_0015eca0;
                _DAT_0270acd0 = 0;
                uRam000000000270acd8 = 0;
                _DAT_0270ace0 = 0;
                uRam000000000270ace8 = 0;
                _DAT_0270acf0 = 0;
                uRam000000000270acf8 = 0;
                _DAT_0270ad00 = 0;
                uRam000000000270ad08 = 0;
                _DAT_0270ad10 = 0;
                uRam000000000270ad18 = 0;
                _DAT_0270ad20 = 0;
                uRam000000000270ad28 = 0;
                _DAT_0270ad30 = 0;
                uRam000000000270ad38 = 0;
                _DAT_0270ad40 = 0;
                uRam000000000270ad48 = 0;
                _DAT_0270ad50 = 0;
                uRam000000000270ad58 = 0;
                _DAT_0270ad60 = 0;
                uRam000000000270ad68 = 0;
                _DAT_0270ad70 = 0;
                ___cxa_guard_release();
              }
              (**(code **)(*plVar13 + 0x360))();
              cVar3 = FUN_00e85ea0();
              plVar1 = local_1b0;
              plVar11 = local_1b0;
              if (cVar3 == '\0') {
                plVar11 = DAT_02802688;
              }
              if (plVar11 == (longlong *)0x0) {
                pvVar5 = _pthread_getspecific(0);
                pVar9 = (pthread_key_t)plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  pVar9 = (pthread_key_t)local_38;
                }
                FUN_0152ebe0();
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar12 = FUN_01507f00();
                if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar5 = _pthread_getspecific((pthread_key_t)plVar11);
                pVar9 = (pthread_key_t)plVar11;
                plVar11 = plVar1;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar11 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
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
              local_c0 = (ulonglong)((int)local_c0 + 1);
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
              if (bVar2 || plVar1 == (longlong *)0x0) goto LAB_01bab796;
            }
            else {
              plVar11 = local_b8;
              if (local_b0[0] == '\0') {
                if (local_b8 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                uVar16 = CONCAT71(uVar8,1);
                if (((char)local_80 != '\0') && (local_38 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01babbcb;
              }
              if (((char)local_80 != '\0') && (local_38 != (longlong *)0x0)) {
                uVar7 = FUN_00d50b20();
              }
              uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
joined_r0x01babb82:
              local_80 = CONCAT71(uVar8,1);
              if (plVar11 != (longlong *)0x0) goto LAB_01babbf5;
LAB_01babce5:
              local_38 = (longlong *)0x0;
LAB_01babceb:
              plVar11 = local_70;
              uVar15 = local_64;
              if ((bool)(bVar2 | plVar13 == (longlong *)0x0)) goto LAB_01bab796;
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
    lVar6 = DAT_027e1380;
    if (local_8c != local_dc) goto LAB_01bac0e2;
    plVar1 = (longlong *)*local_f0;
    if ((int)local_c0 == 1) {
      if (plVar1 != (longlong *)0x0) {
        local_228 = local_88;
        local_220 = 0;
        if (DAT_027e1380 != 0) {
          FUN_00d50b00();
        }
        local_218 = lVar6;
        local_210 = 1;
        FUN_01ba9920(&local_218,local_8c,1,local_res10);
        local_188 = local_60;
        local_180 = 0;
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58[0] = '\0';
        }
        plVar11 = local_70;
        local_180 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      local_c0 = 1;
    }
    else if (plVar1 != (longlong *)0x0) {
      local_208 = local_88;
      local_200 = 0;
      if (DAT_027e1380 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar6;
      local_1f0 = 1;
      FUN_01ba9920(&local_1f8,local_8c,1,local_res10);
      local_178 = local_60;
      local_170 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      plVar11 = local_70;
      local_170 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_78 != local_c8) || (NAN(local_78) || NAN(local_c8))) {
    plVar1 = (longlong *)*local_e8;
    if (plVar1 != (longlong *)0x0) {
      FUN_00e99dd0();
      local_138 = local_60;
      local_130 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_130 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    plVar1 = (longlong *)*local_e8;
    if ((int)local_c0 == 1) {
      local_c0 = 1;
      if ((plVar1 != (longlong *)0x0) && ((longlong *)*local_res20 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*local_res20 + 0x378))(local_78);
        local_158 = local_60;
        local_150 = 0;
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58[0] = '\0';
        }
        local_150 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((plVar1 != (longlong *)0x0) && ((longlong *)*local_res20 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*local_res20 + 0x378))(local_78);
      local_148 = local_60;
      local_140 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_140 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (longlong *)*local_res8;
  if ((plVar1 != (longlong *)0x0) &&
     (plVar13 = (longlong *)*local_res18, plVar13 != (longlong *)0x0)) {
    if ((local_74 != local_c4) || (NAN(local_74) || NAN(local_c4))) {
      FUN_00e99dd0();
      local_108 = local_60;
      local_100 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_100 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((int)local_c0 == 1) {
      fVar18 = (float)_exp2f(local_74 * DAT_023941f4);
      (**(code **)(*plVar13 + 0x378))(fVar18 * DAT_023941f8);
      local_128 = local_60;
      local_120 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_120 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      fVar18 = (float)_exp2f(local_74 * DAT_023941f4);
      (**(code **)(*plVar13 + 0x378))(fVar18 * DAT_023941f8);
      local_118 = local_60;
      local_110 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_110 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((cVar3 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01bac7ab:
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01515040 — 4434 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01515eea) */
/* WARNING: Removing unreachable block (ram,0x01515ef3) */
/* WARNING: Removing unreachable block (ram,0x015159c6) */
/* WARNING: Removing unreachable block (ram,0x015159cf) */
/* WARNING: Removing unreachable block (ram,0x01515ff8) */
/* WARNING: Removing unreachable block (ram,0x01516001) */
/* WARNING: Removing unreachable block (ram,0x01515473) */
/* WARNING: Removing unreachable block (ram,0x0151547c) */
/* WARNING: Removing unreachable block (ram,0x015156aa) */
/* WARNING: Removing unreachable block (ram,0x015156b3) */
/* WARNING: Removing unreachable block (ram,0x01515868) */
/* WARNING: Removing unreachable block (ram,0x01515871) */

ulonglong FUN_01515040(undefined8 param_1,undefined8 *param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  pthread_key_t pVar13;
  longlong *in_RCX;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar17;
  undefined7 uVar18;
  ulonglong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 *local_res8;
  undefined1 local_res10;
  char local_res18;
  char local_res20;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  ulonglong local_128;
  longlong *local_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  undefined4 local_d4;
  longlong local_d0;
  char local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_98;
  char local_90;
  longlong *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 *local_60;
  longlong *local_50;
  char local_38;
  
  lVar10 = *unaff_RSI;
  local_120 = in_RCX;
  local_a8 = param_4;
  local_78 = param_1;
  local_60 = param_2;
  pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar6 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar10 + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar10 + 0x50);
      if (lVar7 == 0) {
        lVar10 = 0;
        goto LAB_01515137;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar10 + 0x50);
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      lVar10 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    lVar10 = *(longlong *)(lVar7 + 0x80);
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0x80);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
LAB_01515137:
  local_68 = lVar10;
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_0124b580();
  (**(code **)(*plVar8 + 0x18))();
  if (lVar10 == 0) {
    uVar19 = 0;
  }
  else {
    local_90 = '\0';
    local_98 = 0;
    local_d4 = 0xffffffff;
    local_108 = (longlong *)(unaff_RDI + 0x78);
    bVar1 = true;
    local_118 = param_3 >> 0x20;
    local_110 = (ulonglong)local_a8 >> 0x20;
    puVar15 = local_60;
    local_128 = param_3;
    while( true ) {
      pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      in_RCX = local_a8;
      cVar2 = FUN_01252960(local_a8,param_3,&local_98,&local_88);
      if (cVar2 == '\0') break;
      if (local_98 != 0) {
        uVar11 = extraout_XMM0_Qa;
        if (((ulonglong)local_88 >> 0x20 == 0) && (local_118 != 0)) {
          local_218 = *puVar15;
          local_210 = 0;
          local_88 = (longlong *)FUN_01514010(0,&local_218);
          uVar11 = extraout_XMM0_Qa_00;
        }
        if ((local_b0._4_4_ == 0) && (local_110 != 0)) {
          local_208 = *puVar15;
          local_200 = 0;
          local_b0 = (longlong *)FUN_01514010(uVar11,&local_208);
        }
        plVar17 = local_120;
        local_1f8 = *puVar15;
        local_1f0 = 0;
        local_1e8 = *local_120;
        local_1e0 = 0;
        local_1d8 = *local_res8;
        local_1d0 = 0;
        local_88 = (longlong *)FUN_01514120(local_78,&local_1f8,&local_1d8,local_res10);
        local_1c8 = *puVar15;
        local_1c0 = 0;
        local_1b8 = *plVar17;
        local_1b0 = 0;
        local_1a8 = *local_res8;
        local_1a0 = 0;
        local_b8 = (longlong *)FUN_01514120(local_78,&local_1c8,&local_1a8,local_res10);
        plVar17 = local_88;
        param_3 = local_128;
        in_RCX = (longlong *)((ulonglong)local_88 >> 0x20);
        local_b0 = local_b8;
        if (((in_RCX == (longlong *)0x0) || ((ulonglong)local_b8 >> 0x20 == 0)) ||
           (cVar2 = FUN_00e7c020(), puVar15 = local_60, cVar2 != '\0')) {
          puVar15 = local_60;
          lVar10 = local_98;
          pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
          lVar7 = local_98;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar10 = lVar7, lVar9 != 0)) {
            lVar10 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_00d51d20();
          if ((local_38 == '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          pVar13 = (pthread_key_t)in_RCX;
          plVar14 = plVar17;
          if (local_res20 != '\0') {
            local_70 = plVar17;
            lVar7 = *unaff_RSI;
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *unaff_RSI;
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            if (*(longlong *)(lVar7 + 0x78) == 0) {
              do {
                lVar9 = *(longlong *)(lVar7 + 0x50);
                if (lVar9 == 0) goto LAB_01515608;
                pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
                if (pvVar6 != (void *)0x0) {
                  lVar9 = *(longlong *)(lVar7 + 0x50);
                  lVar7 = FUN_00e8b990();
                  if (lVar7 != 0) {
                    lVar9 = *(longlong *)
                             (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                  }
                }
                lVar7 = lVar9;
              } while (*(longlong *)(lVar9 + 0x78) == 0);
              if (*(longlong *)(lVar9 + 0x78) != 0) goto LAB_0151554f;
LAB_01515608:
              uVar11 = 0;
              local_50 = (longlong *)0x0;
            }
            else {
              if (*(longlong *)(lVar7 + 0x78) == 0) goto LAB_01515608;
LAB_0151554f:
              FUN_00d50b00();
              FUN_00d50b20();
              lVar7 = *unaff_RSI;
              pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *unaff_RSI;
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (pthread_key_t)in_RCX;
              if (*(longlong *)(lVar7 + 0x78) == 0) {
                do {
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar9 = *(longlong *)(lVar7 + 0x50);
                  if (lVar9 == 0) {
                    bVar1 = true;
                    lVar7 = 0;
                    goto LAB_01515637;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar9 = *(longlong *)(lVar7 + 0x50);
                    lVar7 = FUN_00e8b990();
                    if (lVar7 != 0) {
                      lVar9 = *(longlong *)
                               (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                    }
                  }
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar7 = lVar9;
                } while (*(longlong *)(lVar9 + 0x78) == 0);
                lVar7 = *(longlong *)(lVar9 + 0x78);
              }
              else {
                lVar7 = *(longlong *)(lVar7 + 0x78);
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
              if (plVar17 == (longlong *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar18 = (undefined7)((ulonglong)lVar10 >> 8);
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
            lVar10 = unaff_RDI;
            local_100 = uVar11;
            if (*local_108 == 0) {
              do {
                pVar13 = (pthread_key_t)in_RCX;
                lVar7 = *(longlong *)(lVar10 + 0x50);
                if (lVar7 == 0) {
                  local_c0 = 0;
                  plVar17 = (longlong *)0x0;
                  goto LAB_0151589a;
                }
                pvVar6 = _pthread_getspecific(pVar13);
                if (pvVar6 != (void *)0x0) {
                  lVar7 = *(longlong *)(lVar10 + 0x50);
                  lVar10 = FUN_00e8b990();
                  if (lVar10 != 0) {
                    lVar7 = *(longlong *)
                             (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                  }
                }
                lVar10 = lVar7;
              } while (*(longlong *)(lVar7 + 0x78) == 0);
              plVar14 = (longlong *)(lVar7 + 0x78);
            }
            pVar13 = (pthread_key_t)in_RCX;
            if (*plVar14 == 0) {
              local_c0 = 0;
              plVar17 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              uVar11 = FUN_00d50b20();
              pVar13 = (pthread_key_t)in_RCX;
              lVar10 = unaff_RDI;
              if (*local_108 == 0) {
                do {
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar7 = *(longlong *)(lVar10 + 0x50);
                  if (lVar7 == 0) {
                    local_7c = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
                    lVar10 = 0;
                    plVar14 = (longlong *)0x0;
                    goto LAB_01515799;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar7 = *(longlong *)(lVar10 + 0x50);
                    lVar10 = FUN_00e8b990();
                    if (lVar10 != 0) {
                      lVar7 = *(longlong *)
                               (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                    }
                  }
                  uVar11 = 0;
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar10 = lVar7;
                } while (*(longlong *)(lVar7 + 0x78) == 0);
                lVar10 = *(longlong *)(lVar7 + 0x78);
                plVar14 = (longlong *)(lVar7 + 0x78);
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
              if (plVar17 == (longlong *)0x0) {
                local_c0 = 0;
              }
              else {
                uVar18 = (undefined7)((ulonglong)plVar14 >> 8);
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
            if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_c0 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_100 != '\0') && (local_50 != (longlong *)0x0)) {
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
          if (plVar14 != (longlong *)0x0) {
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
      local_b8 = (longlong *)FUN_00e7bdb0();
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
        local_b8 = (longlong *)FUN_01514120(local_78,&local_168,&local_148,local_res10);
      }
      uVar3 = 2;
      if (local_res18 == '\0') {
        pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0124ae30();
      }
      local_78 = CONCAT44(local_78._4_4_,uVar3);
      param_3 = param_3 | (ulonglong)local_a8;
      plVar17 = (longlong *)(unaff_RDI + 0x80);
      lVar7 = unaff_RDI;
      if (*(longlong *)(unaff_RDI + 0x80) == 0) {
        do {
          lVar9 = *(longlong *)(lVar7 + 0x50);
          if (lVar9 == 0) goto LAB_01515cdb;
          pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar6 != (void *)0x0) {
            lVar9 = *(longlong *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(longlong *)(lVar9 + 0x80) == 0);
        if (*(longlong *)(lVar9 + 0x80) != 0) goto LAB_01515be5;
LAB_01515cdb:
        pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          in_RCX = plVar8;
        }
        FUN_0124ae40();
        pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
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
            lVar7 = *(longlong *)(unaff_RDI + 0x50);
            if (lVar7 == 0) {
              local_d0 = 0;
              goto LAB_01515de6;
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *(longlong *)(unaff_RDI + 0x50);
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            unaff_RDI = lVar7;
          } while (*(longlong *)(unaff_RDI + 0x80) == 0);
          local_d0 = *(longlong *)(unaff_RDI + 0x80);
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
        uVar19 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
        local_138 = plVar8;
        FUN_0150ceb0();
      }
      else {
        if (*plVar17 == 0) goto LAB_01515cdb;
LAB_01515be5:
        FUN_00d50b00();
        FUN_00d50b20();
        pVar13 = (pthread_key_t)in_RCX;
        if (param_3 >> 0x20 == 0) goto LAB_01515cdb;
        plVar14 = plVar17;
        if (*plVar17 == 0) {
          lVar10 = 0;
          lVar7 = unaff_RDI;
          do {
            pVar13 = (pthread_key_t)in_RCX;
            lVar9 = *(longlong *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01515e8a;
            }
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(longlong *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            pVar13 = (pthread_key_t)in_RCX;
            lVar7 = lVar9;
          } while (*(longlong *)(lVar9 + 0x80) == 0);
          plVar14 = (longlong *)(lVar9 + 0x80);
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
        pVar13 = (pthread_key_t)plVar14;
        if ((char)uVar4 == '\0') {
          plVar16 = plVar17;
          if (*plVar17 == 0) {
            lVar10 = 0;
            lVar7 = unaff_RDI;
            do {
              pVar13 = (pthread_key_t)plVar14;
              lVar9 = *(longlong *)(lVar7 + 0x50);
              if (lVar9 == 0) {
                bVar1 = true;
                goto LAB_01515f95;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar9 = *(longlong *)(lVar7 + 0x50);
                lVar7 = FUN_00e8b990();
                if (lVar7 != 0) {
                  lVar9 = *(longlong *)
                           (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (pthread_key_t)plVar14;
              lVar7 = lVar9;
            } while (*(longlong *)(lVar9 + 0x80) == 0);
            plVar16 = (longlong *)(lVar9 + 0x80);
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
          lVar7 = unaff_RDI;
          do {
            lVar9 = *(longlong *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01516097;
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar14);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(longlong *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            lVar7 = lVar9;
          } while (*(longlong *)(lVar9 + 0x80) == 0);
          plVar16 = (longlong *)(lVar9 + 0x80);
        }
        lVar10 = *plVar16;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar1 = false;
LAB_01516097:
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar14);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0124ae30();
        if (!bVar1 && lVar10 != 0) {
          FUN_00d50b20();
        }
        pVar13 = (pthread_key_t)plVar14;
        if (iVar5 < (int)local_78) {
          if (*plVar17 == 0) {
            lVar10 = 0;
            do {
              pVar13 = (pthread_key_t)plVar14;
              lVar7 = *(longlong *)(unaff_RDI + 0x50);
              if (lVar7 == 0) {
                bVar1 = true;
                goto LAB_0151616f;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *(longlong *)(unaff_RDI + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              unaff_RDI = lVar7;
              pVar13 = (pthread_key_t)plVar14;
            } while (*(longlong *)(unaff_RDI + 0x80) == 0);
            plVar17 = (longlong *)(unaff_RDI + 0x80);
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
          uVar19 = (ulonglong)uVar4 ^ 1;
        }
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_015161ce;
  }
  FUN_00d50b20();
LAB_015161ce:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return uVar19 & 0xffffffff;
}




// ============================================================
// @01516720 — 3844 bytes
// ============================================================

ulonglong FUN_01516720(undefined8 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong **pplVar11;
  ulonglong uVar12;
  longlong lVar13;
  pthread_key_t pVar14;
  longlong *in_RCX;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong *puVar18;
  undefined8 *local_res8;
  undefined1 local_res10;
  char local_res18;
  undefined8 local_1b0;
  undefined1 local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined1 local_178;
  longlong local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  longlong local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  longlong *local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_60;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  longlong *local_38;
  
  local_b8 = '\0';
  local_c0 = (longlong *)0x0;
  plVar15 = in_RCX;
  local_70 = param_4;
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0111d0d0();
  (**(code **)(*plVar7 + 0x18))();
  bVar2 = true;
  local_38 = plVar7;
LAB_015167b0:
  lVar10 = *unaff_RSI;
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
  if (pvVar8 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  pVar14 = (pthread_key_t)plVar15;
  if (*(longlong *)(lVar10 + 0x88) == 0) {
    do {
      pVar14 = (pthread_key_t)plVar15;
      lVar9 = *(longlong *)(lVar10 + 0x50);
      if (lVar9 == 0) {
        bVar1 = true;
        lVar10 = 0;
        goto LAB_01516880;
      }
      pvVar8 = _pthread_getspecific(pVar14);
      if (pvVar8 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar10 + 0x50);
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      pVar14 = (pthread_key_t)plVar15;
      lVar10 = lVar9;
    } while (*(longlong *)(lVar9 + 0x88) == 0);
    lVar10 = *(longlong *)(lVar9 + 0x88);
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0x88);
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
    if (((ulonglong)local_78 >> 0x20 == 0) && (param_3 >> 0x20 != 0)) {
      pvVar8 = _pthread_getspecific((pthread_key_t)(param_3 >> 0x20));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (longlong *)FUN_016caf30(0,4);
    }
    if ((local_90._4_4_ == 0) && (local_70 >> 0x20 != 0)) {
      pvVar8 = _pthread_getspecific((pthread_key_t)(local_70 >> 0x20));
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
    local_78 = (longlong *)FUN_01514120(param_1,&local_1b0,&local_190,local_res10);
    local_180 = *param_2;
    local_178 = 0;
    local_170 = *in_RCX;
    local_168 = 0;
    local_160 = *local_res8;
    local_158 = 0;
    local_90 = (longlong *)FUN_01514120(param_1,&local_180,&local_160,local_res10);
    local_48 = local_78;
    plVar15 = (longlong *)((ulonglong)local_78 >> 0x20);
    pVar14 = (pthread_key_t)((ulonglong)local_78 >> 0x20);
    local_50 = local_90;
    if ((plVar15 != (longlong *)0x0) && ((ulonglong)local_90 >> 0x20 != 0)) goto code_r0x01516ac3;
    goto LAB_01516ad8;
  }
  if (!bVar2) {
    local_88 = (longlong *)FUN_00e7bdb0();
    local_80 = FUN_00e7bdb0();
    plVar15 = (longlong *)0x0;
    if (param_3 >> 0x20 != 0) {
      local_150 = *param_2;
      local_148 = 0;
      local_140 = *in_RCX;
      local_138 = 0;
      local_130 = *local_res8;
      local_128 = 0;
      plVar15 = &local_140;
      local_88 = (longlong *)FUN_01514120(param_1,&local_150,&local_130,local_res10);
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
      lVar10 = *unaff_RSI;
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
      if (pvVar8 != (void *)0x0) {
        lVar10 = *unaff_RSI;
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar10 + 0x88) == 0) {
        lVar9 = 0;
        do {
          lVar13 = *(longlong *)(lVar10 + 0x50);
          if (lVar13 == 0) {
            bVar2 = true;
            goto LAB_01516d50;
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
          if (pvVar8 != (void *)0x0) {
            lVar13 = *(longlong *)(lVar10 + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8)
              ;
            }
          }
          lVar10 = lVar13;
        } while (*(longlong *)(lVar13 + 0x88) == 0);
        lVar9 = *(longlong *)(lVar13 + 0x88);
      }
      else {
        lVar9 = *(longlong *)(lVar10 + 0x88);
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01516d50:
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_018847d0();
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    param_3 = param_3 | local_70;
    plVar7 = (longlong *)(unaff_RDI + 0x88);
    lVar10 = unaff_RDI;
    if (*(longlong *)(unaff_RDI + 0x88) == 0) {
      do {
        lVar9 = *(longlong *)(lVar10 + 0x50);
        if (lVar9 == 0) goto LAB_01516e9e;
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
        if (pvVar8 != (void *)0x0) {
          lVar9 = *(longlong *)(lVar10 + 0x50);
          lVar10 = FUN_00e8b990();
          if (lVar10 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
        }
        lVar10 = lVar9;
      } while (*(longlong *)(lVar9 + 0x88) == 0);
      lVar10 = *(longlong *)(lVar9 + 0x88);
    }
    else {
      lVar10 = *plVar7;
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      if (param_3 >> 0x20 != 0) {
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
        plVar15 = local_38;
        if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar15 = local_38, lVar10 != 0)) {
          plVar15 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        FUN_00d23310();
        plVar16 = local_48;
        local_50 = (longlong *)CONCAT71(local_50._1_7_,local_40[0]);
        pplVar11 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar11 = &local_50;
        }
        *(char *)pplVar11 = '\0';
        if ((local_40[0] != '\0') && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar16 == (longlong *)0x0) && (0xe < *(int *)(plVar15[9] + 0x18) + 7U)) {
          local_60 = (longlong *)**(undefined8 **)(plVar15[9] + 0x10);
        }
        else {
          local_60 = (longlong *)FUN_00e7bdb0();
          if (((char)local_50 != '\0') && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d23340();
        plVar16 = local_48;
        local_50 = (longlong *)CONCAT71(local_50._1_7_,local_40[0]);
        pplVar11 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar11 = &local_50;
        }
        *(char *)pplVar11 = '\0';
        if ((local_40[0] != '\0') && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 == (longlong *)0x0) {
          iVar6 = *(int *)(plVar15[9] + 0x18);
          if (iVar6 + 7U < 0xf) goto LAB_01517141;
          uVar12 = *(ulonglong *)((longlong)iVar6 + -8 + *(longlong *)(plVar15[9] + 0x10));
        }
        else {
LAB_01517141:
          uVar12 = FUN_00e7bdb0();
          if (((char)local_50 != '\0') && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(int *)(plVar15[9] + 0x18) + 7U < 0xf) {
          FUN_00d23310();
          plVar15 = local_48;
          pplVar11 = (longlong **)local_40;
          if (local_40[0] == '\0') {
            pplVar11 = &local_50;
          }
          local_50 = (longlong *)CONCAT71(local_50._1_7_,local_40[0]);
          *(char *)pplVar11 = '\0';
          if ((local_40[0] != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_50 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar15 == (longlong *)0x0) goto LAB_01516fe0;
        }
        local_e0 = local_88;
        local_d0 = local_80;
        local_d8 = local_60;
        local_c8 = uVar12;
        if ((ulonglong)local_88 >> 0x20 == 0) {
          local_88 = local_60;
          if (local_80 >> 0x20 != 0) goto LAB_0151722d;
LAB_0151725d:
          puVar18 = &local_c8;
        }
        else {
          local_60 = (longlong *)((ulonglong)local_60 >> 0x20);
          if (local_60 != (longlong *)0x0) {
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
        plVar15 = (longlong *)*puVar18;
        local_50 = plVar15;
        local_48 = local_88;
        if ((((ulonglong)local_88 >> 0x20 == 0) || ((ulonglong)plVar15 >> 0x20 == 0)) ||
           (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          pVar14 = (pthread_key_t)local_60;
          plVar16 = plVar7;
          if (*plVar7 == 0) {
            lVar10 = 0;
            lVar9 = unaff_RDI;
            do {
              pVar14 = (pthread_key_t)local_60;
              lVar13 = *(longlong *)(lVar9 + 0x50);
              if (lVar13 == 0) {
                bVar2 = true;
                goto LAB_01517328;
              }
              pvVar8 = _pthread_getspecific(pVar14);
              if (pvVar8 != (void *)0x0) {
                lVar13 = *(longlong *)(lVar9 + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              pVar14 = (pthread_key_t)local_60;
              lVar9 = lVar13;
            } while (*(longlong *)(lVar13 + 0x88) == 0);
            plVar16 = (longlong *)(lVar13 + 0x88);
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
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar2 && lVar10 != 0) {
            FUN_00d50b20();
          }
          pVar14 = (pthread_key_t)plVar16;
          if ((char)uVar5 == '\0') {
            plVar17 = plVar7;
            if (*plVar7 == 0) {
              lVar10 = 0;
              lVar9 = unaff_RDI;
              do {
                pVar14 = (pthread_key_t)plVar16;
                lVar13 = *(longlong *)(lVar9 + 0x50);
                if (lVar13 == 0) {
                  bVar2 = true;
                  goto LAB_0151742a;
                }
                pvVar8 = _pthread_getspecific(pVar14);
                if (pvVar8 != (void *)0x0) {
                  lVar13 = *(longlong *)(lVar9 + 0x50);
                  lVar9 = FUN_00e8b990();
                  if (lVar9 != 0) {
                    lVar13 = *(longlong *)
                              (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                  }
                }
                pVar14 = (pthread_key_t)plVar16;
                lVar9 = lVar13;
              } while (*(longlong *)(lVar13 + 0x88) == 0);
              plVar17 = (longlong *)(lVar13 + 0x88);
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
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
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
            lVar9 = unaff_RDI;
            do {
              lVar13 = *(longlong *)(lVar9 + 0x50);
              if (lVar13 == 0) {
                bVar2 = true;
                goto LAB_0151752c;
              }
              pvVar8 = _pthread_getspecific((pthread_key_t)plVar16);
              if (pvVar8 != (void *)0x0) {
                lVar13 = *(longlong *)(lVar9 + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              lVar9 = lVar13;
            } while (*(longlong *)(lVar13 + 0x88) == 0);
            plVar15 = (longlong *)(lVar13 + 0x88);
          }
          lVar10 = *plVar15;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar2 = false;
LAB_0151752c:
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar16);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_018847d0();
          if (!bVar2 && lVar10 != 0) {
            FUN_00d50b20();
          }
          pVar14 = (pthread_key_t)plVar16;
          if (iVar6 < iVar4) {
            if (*plVar7 == 0) {
              lVar10 = 0;
              do {
                pVar14 = (pthread_key_t)plVar16;
                lVar9 = *(longlong *)(unaff_RDI + 0x50);
                if (lVar9 == 0) {
                  bVar2 = true;
                  goto LAB_01517605;
                }
                pvVar8 = _pthread_getspecific(pVar14);
                if (pvVar8 != (void *)0x0) {
                  lVar9 = *(longlong *)(unaff_RDI + 0x50);
                  lVar13 = FUN_00e8b990();
                  if (lVar13 != 0) {
                    lVar9 = *(longlong *)
                             (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
                  }
                }
                unaff_RDI = lVar9;
                pVar14 = (pthread_key_t)plVar16;
              } while (*(longlong *)(unaff_RDI + 0x88) == 0);
              plVar7 = (longlong *)(unaff_RDI + 0x88);
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
            uVar12 = (ulonglong)uVar5 ^ 1;
          }
          goto LAB_01517009;
        }
        goto LAB_01516fe0;
      }
    }
LAB_01516e9e:
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = local_38;
    }
    FUN_018847e0();
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
    if ((pvVar8 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      plVar16 = local_38;
      if (*plVar7 != 0) goto LAB_01516f8e;
LAB_01516f41:
      do {
        lVar10 = *(longlong *)(unaff_RDI + 0x50);
        if (lVar10 == 0) {
          local_b0 = 0;
          goto LAB_01516fa6;
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
        if (pvVar8 != (void *)0x0) {
          lVar10 = *(longlong *)(unaff_RDI + 0x50);
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
        }
        unaff_RDI = lVar10;
      } while (*(longlong *)(unaff_RDI + 0x88) == 0);
      local_b0 = *(longlong *)(unaff_RDI + 0x88);
    }
    else {
      plVar15 = local_38;
      plVar16 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
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
      uVar12 = CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
      FUN_0150c7f0();
      goto LAB_01517009;
    }
  }
LAB_01516fe0:
  uVar12 = 0;
LAB_01517009:
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
code_r0x01516ac3:
  cVar3 = FUN_00e7c020();
  pVar14 = (pthread_key_t)plVar15;
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
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  goto LAB_015167b0;
}




// ============================================================
// @00153530 — 3837 bytes
// str: ""%p::_pitchSystem""
// str: ""MU12TETPitchSystem""
// str: ""MUPercussivePitchSystem""
// str: ""MUScalePitchSystem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00153638) */
/* WARNING: Removing unreachable block (ram,0x00153644) */
/* WARNING: Removing unreachable block (ram,0x001536fc) */
/* WARNING: Removing unreachable block (ram,0x00153708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00153530(code *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  pthread_key_t pVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  code *pcVar8;
  code *pcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined4 uVar12;
  longlong local_148;
  char local_140;
  code *local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  code *local_e8;
  char local_e0;
  longlong local_d8;
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
  undefined1 *local_70;
  code *local_68;
  ulonglong local_60;
  code *local_58;
  uint local_50;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_004f9670();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004fae50();
  pcVar8 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (code *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_78 != '\0') && (local_80 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_98 = pcVar8;
  FUN_01f27fe0();
  cVar1 = FUN_000c7760();
  if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d9bb60();
    pcVar9 = local_58;
    if (((char)local_50 == '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar12 = FUN_004405c0();
    local_108 = pcVar9;
    local_100 = '\0';
    FUN_004b8670(uVar12,&local_108);
    if ((local_100 != '\0') && (local_108 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_004405f0();
    local_f8 = pcVar8;
    local_f0 = '\0';
    local_e8 = pcVar9;
    local_e0 = '\0';
    FUN_004b8670(uVar12,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x88);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar5;
    FUN_004f9670();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = pcVar9;
    local_c0 = '\0';
    FUN_004fae00();
    if ((local_c0 != '\0') && (local_c8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (pcVar9 != (code *)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = 1;
  local_58 = (code *)&DAT_024c5048;
  uVar12 = FUN_00d50b00();
  ppcVar11 = &local_80;
  FUN_00d8cb40(uVar12,&local_58);
  local_88 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  local_58 = (code *)&DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  uVar12 = (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  local_b8 = local_88;
  local_b0 = '\0';
  ppcVar10 = &local_58;
  FUN_000175c0(uVar12,&local_b8);
  pcVar8 = local_58;
  FUN_0015ea50();
  if (pcVar8 == (code *)0x0) {
LAB_0015395b:
    ppcVar10 = (code **)&DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0015395b;
  }
  pcVar8 = *ppcVar10;
  if (*(char *)(ppcVar10 + 1) == '\0') {
    if (pcVar8 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(ppcVar10 + 1) = 0;
  }
  local_78 = 1;
  local_80 = pcVar8;
  if (((char)local_50 != '\0') && (local_78 = 1, local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((pcVar8 != (code *)0x0) && (*(longlong *)(unaff_RDI + 0x90) != 0)) {
    if ((DAT_0278c570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_027c3448 = FUN_0015ea50();
      _DAT_027c3430 = "MU12TETPitchSystem";
      _DAT_027c3438 = 0x68;
      param_1 = FUN_0015ec50;
      _DAT_027c3440 = FUN_0015ec50;
      _DAT_027c3450 = 0;
      uRam00000000027c3458 = 0;
      _DAT_027c3460 = 0;
      uRam00000000027c3468 = 0;
      _DAT_027c3470 = 0;
      uRam00000000027c3478 = 0;
      _DAT_027c3480 = 0;
      uRam00000000027c3488 = 0;
      _DAT_027c3490 = 0;
      uRam00000000027c3498 = 0;
      _DAT_027c34a0 = 0;
      uRam00000000027c34a8 = 0;
      _DAT_027c34b0 = 0;
      uRam00000000027c34b8 = 0;
      _DAT_027c34c0 = 0;
      uRam00000000027c34c8 = 0;
      _DAT_027c34d0 = 0;
      uRam00000000027c34d8 = 0;
      _DAT_027c34e0 = 0;
      uRam00000000027c34e8 = 0;
      _DAT_027c34f0 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*(longlong *)pcVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    pcVar8 = local_80;
    pVar7 = (pthread_key_t)param_1;
    if (cVar1 == '\0') {
      ppcVar11 = (code **)&DAT_02802688;
    }
    cVar1 = *(char *)(ppcVar11 + 1);
    if ((cVar1 == '\0') || (*ppcVar11 == (code *)0x0)) {
      if (*ppcVar11 != (code *)0x0) goto LAB_00153abe;
      if ((DAT_027c0150 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_0270acc8 = FUN_0015ea50();
        _DAT_0270acb0 = "MUPercussivePitchSystem";
        _DAT_0270acb8 = 0x58;
        pVar7 = 0x15eca0;
        _DAT_0270acc0 = FUN_0015eca0;
        _DAT_0270acd0 = 0;
        uRam000000000270acd8 = 0;
        _DAT_0270ace0 = 0;
        uRam000000000270ace8 = 0;
        _DAT_0270acf0 = 0;
        uRam000000000270acf8 = 0;
        _DAT_0270ad00 = 0;
        uRam000000000270ad08 = 0;
        _DAT_0270ad10 = 0;
        uRam000000000270ad18 = 0;
        _DAT_0270ad20 = 0;
        uRam000000000270ad28 = 0;
        _DAT_0270ad30 = 0;
        uRam000000000270ad38 = 0;
        _DAT_0270ad40 = 0;
        uRam000000000270ad48 = 0;
        _DAT_0270ad50 = 0;
        uRam000000000270ad58 = 0;
        _DAT_0270ad60 = 0;
        uRam000000000270ad68 = 0;
        _DAT_0270ad70 = 0;
        ___cxa_guard_release();
      }
      if (pcVar8 == (code *)0x0) {
LAB_00153be1:
        ppcVar11 = (code **)&DAT_02802688;
      }
      else {
        (**(code **)(*(longlong *)pcVar8 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') goto LAB_00153be1;
        ppcVar11 = &local_80;
      }
      pcVar9 = local_80;
      pcVar8 = *ppcVar11;
      local_90 = (code *)CONCAT71(local_90._1_7_,*(char *)(ppcVar11 + 1));
      if ((*(char *)(ppcVar11 + 1) == '\0') || (pcVar8 == (code *)0x0)) {
        if (pcVar8 != (code *)0x0) goto LAB_00154001;
        if ((DAT_027c0160 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_0270ab28 = FUN_0015ea50();
          _DAT_0270ab10 = "MUScalePitchSystem";
          _DAT_0270ab18 = 0x78;
          _DAT_0270ab20 = FUN_0015ecf0;
          _DAT_0270ab30 = 0;
          uRam000000000270ab38 = 0;
          _DAT_0270ab40 = 0;
          uRam000000000270ab48 = 0;
          _DAT_0270ab50 = 0;
          uRam000000000270ab58 = 0;
          _DAT_0270ab60 = 0;
          uRam000000000270ab68 = 0;
          _DAT_0270ab70 = 0;
          uRam000000000270ab78 = 0;
          _DAT_0270ab80 = 0;
          uRam000000000270ab88 = 0;
          _DAT_0270ab90 = 0;
          uRam000000000270ab98 = 0;
          _DAT_0270aba0 = 0;
          uRam000000000270aba8 = 0;
          _DAT_0270abb0 = 0;
          uRam000000000270abb8 = 0;
          _DAT_0270abc0 = 0;
          uRam000000000270abc8 = 0;
          _DAT_0270abd0 = 0;
          ___cxa_guard_release();
        }
        if (pcVar9 == (code *)0x0) {
LAB_001541e1:
          ppcVar11 = (code **)&DAT_02802688;
        }
        else {
          local_60 = 0;
          (**(code **)(*(longlong *)pcVar9 + 0x360))();
          local_60 = 0;
          cVar1 = FUN_00e85ea0();
          if (cVar1 == '\0') goto LAB_001541e1;
          ppcVar11 = &local_80;
        }
        param_1 = local_80;
        if (*ppcVar11 == (code *)0x0) goto LAB_00153f89;
        uVar6 = CONCAT71((int7)((ulonglong)ppcVar11 >> 8),local_78);
        if (local_80 == (code *)0x0) goto LAB_00153f8c;
        local_70 = (undefined1 *)uVar6;
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
        if (local_58 == (code *)0x0) {
          local_60 = 0;
          pcVar9 = (code *)0x0;
        }
        else {
          if ((char)local_50 == '\0') {
            uVar4 = FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
              local_60 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
              FUN_00d50b20();
              goto LAB_0015404e;
            }
          }
          local_60 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        }
LAB_0015404e:
        pvVar3 = _pthread_getspecific(pVar7);
        param_1 = pcVar9;
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = *(code **)(pcVar9 + ((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pcVar8 = *(code **)(pcVar8 + ((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
        }
        (**(code **)(*(longlong *)pcVar8 + 0x3f0))();
        param_1 = *(code **)param_1;
        (**(code **)(param_1 + 0x3f8))();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_017702f0();
        if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_90 == '\0') {
          local_70 = (undefined1 *)local_60;
        }
        else {
          FUN_00d50b20();
          local_70 = (undefined1 *)local_60;
        }
      }
    }
    else {
      FUN_00d50b00();
LAB_00153abe:
      local_60 = CONCAT71(local_60._1_7_,cVar1);
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd70();
      pcVar9 = local_58;
      if (local_58 == (code *)0x0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014fdd00();
        pcVar8 = local_58;
        if ((char)local_50 == '\0') {
          if (local_58 == (code *)0x0) goto LAB_00153c6e;
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_58 == (code *)0x0) {
LAB_00153c6e:
          pcVar9 = (code *)0x0;
          local_70 = (undefined1 *)0x0;
          iVar2 = 0;
          goto LAB_00153d27;
        }
        local_90 = pcVar8;
        uVar4 = FUN_0173c6e0();
        pcVar9 = local_58;
        if (local_58 == (code *)0x0) {
          local_70 = (undefined1 *)0x0;
          pcVar9 = (code *)0x0;
        }
        else {
          local_70 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_017702f0();
        if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_70 = &DAT_02802501;
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = 0;
        local_70 = (undefined1 *)0x1;
        FUN_0174bd90();
      }
LAB_00153d27:
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      pcVar8 = pcVar9;
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pcVar8 = *(code **)(pcVar9 + ((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(longlong *)pcVar8 + 0x3f8))();
      if ((char)local_60 != '\0') {
        FUN_00d50b20();
      }
    }
    if (pcVar9 == (code *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      local_60 = CONCAT44(local_60._4_4_,(int)uVar4);
    }
    else {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = '\0';
      local_a8 = pcVar9;
      FUN_0150bf50();
      if ((local_a0 != '\0') && (local_a8 != (code *)0x0)) {
        FUN_00d50b20();
      }
      uVar4 = 0;
      local_60 = local_60 & 0xffffffff00000000;
    }
    if (iVar2 != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150c530();
      pcVar8 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != (code *)0x0) {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00153e95;
        }
      }
      else if (local_58 != (code *)0x0) {
LAB_00153e95:
        local_50 = local_50 & 0xffffff00;
        local_58 = (code *)0x0;
        local_68 = pcVar9;
        for (lVar5 = 0; (int)lVar5 < *(int *)(pcVar8 + 0xc); lVar5 = lVar5 + 1) {
          local_58 = *(code **)(*(longlong *)(pcVar8 + 0x10) + lVar5 * 8);
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
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
  uVar6 = (ulonglong)local_78;
LAB_00153f8c:
  pcVar9 = local_88;
  pcVar8 = local_98;
  if (((char)uVar6 != '\0') && (local_80 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar9 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar8 != (code *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0150aa70 — 3731 bytes
// str: ""%p::_pitchSystem""
// str: ""MU12TETPitchSystem""
// str: ""MUPercussivePitchSystem""
// str: ""MUScalePitchSystem""
// str: ""%p::_chordSequence""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150aab0) */
/* WARNING: Removing unreachable block (ram,0x0150aabc) */
/* WARNING: Removing unreachable block (ram,0x0150ac35) */
/* WARNING: Removing unreachable block (ram,0x0150ac41) */
/* WARNING: Removing unreachable block (ram,0x0150b0e0) */
/* WARNING: Removing unreachable block (ram,0x0150b0ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0150aa70(code *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  code **ppcVar11;
  code **ppcVar12;
  byte bVar13;
  undefined4 uVar14;
  code *local_e8;
  code *local_b8;
  char local_b0;
  undefined4 local_a4;
  longlong local_a0;
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
  if (*(longlong *)(unaff_RDI + 0x58) == 0) {
    return;
  }
  local_70 = 1;
  local_78 = (code *)&DAT_024c5048;
  uVar14 = FUN_00d50b00();
  ppcVar12 = &local_50;
  FUN_00d8cb40(uVar14,&local_78);
  pcVar10 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (code *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = (code *)&DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  local_90 = pcVar10;
  (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  ppcVar11 = &local_78;
  FUN_000175c0();
  pcVar10 = local_78;
  FUN_0015ea50();
  if (pcVar10 == (code *)0x0) {
LAB_0150abaa:
    ppcVar11 = &DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150abaa;
  }
  pcVar10 = *ppcVar11;
  if (*(char *)(ppcVar11 + 1) == '\0') {
    if (pcVar10 != (code *)0x0) {
      FUN_00d50b00();
    }
    local_50 = pcVar10;
    local_48 = 1;
  }
  else {
    local_50 = pcVar10;
    local_48 = 1;
    *(undefined1 *)(ppcVar11 + 1) = 0;
  }
  if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((DAT_0278c570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027c3448 = FUN_0015ea50();
    _DAT_027c3430 = "MU12TETPitchSystem";
    _DAT_027c3438 = 0x68;
    param_1 = FUN_0015ec50;
    _DAT_027c3440 = FUN_0015ec50;
    _DAT_027c3450 = 0;
    uRam00000000027c3458 = 0;
    _DAT_027c3460 = 0;
    uRam00000000027c3468 = 0;
    _DAT_027c3470 = 0;
    uRam00000000027c3478 = 0;
    _DAT_027c3480 = 0;
    uRam00000000027c3488 = 0;
    _DAT_027c3490 = 0;
    uRam00000000027c3498 = 0;
    _DAT_027c34a0 = 0;
    uRam00000000027c34a8 = 0;
    _DAT_027c34b0 = 0;
    uRam00000000027c34b8 = 0;
    _DAT_027c34c0 = 0;
    uRam00000000027c34c8 = 0;
    _DAT_027c34d0 = 0;
    uRam00000000027c34d8 = 0;
    _DAT_027c34e0 = 0;
    uRam00000000027c34e8 = 0;
    _DAT_027c34f0 = 0;
    ___cxa_guard_release();
  }
  if (pcVar10 == (code *)0x0) {
LAB_0150ac93:
    ppcVar12 = &DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150ac93;
  }
  pcVar10 = local_50;
  pVar8 = (pthread_key_t)param_1;
  cVar1 = *(char *)(ppcVar12 + 1);
  if ((cVar1 == '\0') || (*ppcVar12 == (code *)0x0)) {
    if (*ppcVar12 != (code *)0x0) goto LAB_0150acbd;
    if ((DAT_027c0150 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      param_1 = FUN_0015eca0;
      _DAT_0270acc0 = FUN_0015eca0;
      _DAT_0270acd0 = 0;
      uRam000000000270acd8 = 0;
      _DAT_0270ace0 = 0;
      uRam000000000270ace8 = 0;
      _DAT_0270acf0 = 0;
      uRam000000000270acf8 = 0;
      _DAT_0270ad00 = 0;
      uRam000000000270ad08 = 0;
      _DAT_0270ad10 = 0;
      uRam000000000270ad18 = 0;
      _DAT_0270ad20 = 0;
      uRam000000000270ad28 = 0;
      _DAT_0270ad30 = 0;
      uRam000000000270ad38 = 0;
      _DAT_0270ad40 = 0;
      uRam000000000270ad48 = 0;
      _DAT_0270ad50 = 0;
      uRam000000000270ad58 = 0;
      _DAT_0270ad60 = 0;
      uRam000000000270ad68 = 0;
      _DAT_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (pcVar10 == (code *)0x0) {
LAB_0150addd:
      pcVar10 = DAT_02802688;
      bVar13 = DAT_02802690;
      if (DAT_02802690 == 0) goto LAB_0150b4e8;
LAB_0150b4d9:
      if (pcVar10 == (code *)0x0) goto LAB_0150b4e8;
      FUN_00d50b00();
LAB_0150b4f1:
      uVar7 = FUN_0173c6e0();
      if (local_78 == (code *)0x0) {
        local_38 = (code *)0x0;
        local_40 = (code *)0x0;
      }
      else {
        local_38 = local_78;
        if ((char)local_70 == '\0') {
          uVar7 = FUN_00d50b00();
          if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
            local_40 = (code *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            FUN_00d50b20();
            goto LAB_0150b545;
          }
        }
        local_40 = (code *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
LAB_0150b545:
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      pcVar5 = local_38;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), pcVar5 = local_38, lVar4 != 0)) {
        param_1 = local_38;
        pcVar5 = *(code **)(local_38 + ((ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pcVar10 = *(code **)(pcVar10 + ((ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(longlong *)pcVar10 + 0x3f0))();
      param_1 = *(code **)pcVar5;
      (**(code **)(param_1 + 0x3f8))();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_017702f0();
      if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
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
    (**(code **)(*(longlong *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150addd;
    pcVar10 = local_50;
    bVar13 = local_48;
    if (local_48 != 0) goto LAB_0150b4d9;
LAB_0150b4e8:
    pcVar5 = local_50;
    if (pcVar10 != (code *)0x0) goto LAB_0150b4f1;
    if ((DAT_027c0160 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      param_1 = FUN_0015ecf0;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      ___cxa_guard_release();
    }
    if (pcVar5 == (code *)0x0) {
LAB_0150b6ca:
      ppcVar12 = &DAT_02802688;
    }
    else {
      local_40 = (code *)0x0;
      local_38 = (code *)0x0;
      (**(code **)(*(longlong *)pcVar5 + 0x360))();
      local_40 = (code *)0x0;
      param_1 = (code *)0x0;
      local_38 = (code *)0x0;
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_0150b6ca;
      ppcVar12 = &local_50;
    }
    if (*ppcVar12 != (code *)0x0) {
      pcVar10 = local_50;
      pcVar5 = (code *)CONCAT71((int7)((ulonglong)ppcVar12 >> 8),local_48);
      if (local_50 == (code *)0x0) goto LAB_0150b126;
      local_88 = pcVar5;
      if (local_48 != 0) {
        local_40 = (code *)0x0;
        local_38 = (code *)0x0;
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
    local_88 = (code *)CONCAT71(local_88._1_7_,cVar1);
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014fdd70();
    local_38 = local_78;
    param_1 = local_78;
    if (local_78 == (code *)0x0) {
      pvVar3 = _pthread_getspecific(0);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd00();
      pcVar10 = local_78;
      if ((char)local_70 == '\0') {
        if (local_78 == (code *)0x0) goto LAB_0150ae7f;
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_78 == (code *)0x0) {
LAB_0150ae7f:
        cVar1 = '\0';
        local_38 = (code *)0x0;
        iVar2 = 0;
        goto LAB_0150af32;
      }
      local_40 = pcVar10;
      FUN_0173c6e0();
      local_38 = local_78;
      param_1 = local_78;
      if (local_78 == (code *)0x0) {
        local_38 = (code *)0x0;
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
        if ((char)local_70 == '\0') {
          FUN_00d50b00();
          if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_017702f0();
      if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      if ((char)local_70 == '\0') {
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      iVar2 = 0;
      cVar1 = '\x01';
      FUN_0174bd90();
    }
LAB_0150af32:
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    pcVar10 = local_38;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), pcVar10 = local_38, lVar4 != 0)) {
      param_1 = local_38;
      pcVar10 = *(code **)(local_38 + ((ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
    }
    (**(code **)(*(longlong *)pcVar10 + 0x3f8))();
    if ((char)local_88 != '\0') {
      FUN_00d50b20();
    }
LAB_0150af82:
    if (local_38 != (code *)0x0) {
      FUN_0150bf50();
    }
    if (iVar2 != 0) {
      FUN_0150c530();
      pcVar10 = local_78;
      if ((char)local_70 == '\0') {
        if (local_78 != (code *)0x0) {
          FUN_00d50b00();
          goto LAB_0150afe4;
        }
      }
      else if (local_78 != (code *)0x0) {
LAB_0150afe4:
        local_70 = local_70 & 0xffffff00;
        local_78 = (code *)0x0;
        local_88 = pcVar10;
        local_60 = -1;
        while( true ) {
          lVar4 = (longlong)local_60;
          local_60 = local_60 + 1;
          if (*(int *)(pcVar10 + 0xc) <= local_60) break;
          lVar9 = *(longlong *)(pcVar10 + 0x10);
          local_78 = *(code **)(lVar9 + 8 + lVar4 * 8);
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar9);
          pVar8 = (pthread_key_t)lVar9;
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
    if ((cVar1 != '\0') && (local_38 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  pcVar5 = (code *)(ulonglong)local_48;
LAB_0150b126:
  pcVar10 = local_90;
  if (((char)pcVar5 != '\0') && (local_50 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar10 != (code *)0x0) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar4 != 0) {
    local_70 = 1;
    local_78 = (code *)&DAT_024c5048;
    uVar14 = FUN_00d50b00();
    FUN_00d8cb40(uVar14,&local_78);
    pcVar10 = local_50;
    if (local_48 == 0) {
      if (((local_50 != (code *)0x0) && (FUN_00d50b00(), local_48 != 0)) &&
         (local_50 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = 0;
    }
    local_78 = (code *)&DAT_024c5048;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
    local_b8 = pcVar10;
    local_b0 = '\0';
    FUN_000175c0(uVar14,&local_b8);
    pcVar5 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != (code *)0x0) {
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_70 = local_70 & 0xffffff00;
    }
    if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != 0) && (local_50 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar5 != (code *)0x0) {
      local_38 = pcVar10;
      FUN_00d50b00();
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_0111d0d0();
      (**(code **)(*plVar6 + 0x18))();
      FUN_0150c7f0();
      FUN_00d50b20();
      local_48 = 0;
      local_50 = (code *)0x0;
      local_a4 = 0xffffffff;
      while( true ) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_00e7bdb0();
        param_1 = (code *)FUN_00e7bdb0();
        cVar1 = FUN_01252960(param_1,uVar7,&local_50,&local_a0);
        pcVar10 = local_38;
        if (cVar1 == '\0') break;
        if (local_50 != (code *)0x0) {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_78 = local_50;
          local_70 = local_70 & 0xffffff00;
          param_1 = local_e8;
          FUN_012502a0(local_e8,local_a0,0);
          if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018847e0();
      if ((local_48 != 0) && (local_50 != (code *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (pcVar10 != (code *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01511080 — 3077 bytes
// ============================================================

undefined8 FUN_01511080(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  pthread_key_t pVar11;
  undefined8 uVar13;
  char *pcVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b0;
  char local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  undefined4 local_60;
  uint local_5c;
  longlong *local_58;
  longlong *local_50;
  int local_44;
  char local_38 [8];
  ulonglong uVar12;
  
  lVar8 = *unaff_RSI;
  if (lVar8 == 0) {
    return 0;
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x78) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        return 0;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x78) == 0);
    lVar8 = *(longlong *)(lVar7 + 0x78);
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x78);
  }
  if (lVar8 == 0) {
    return 0;
  }
  FUN_00d50b00();
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01511220;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    if (*(longlong *)(lVar7 + 0x80) != 0) goto LAB_0151120c;
LAB_01511220:
    bVar1 = true;
  }
  else {
    if (*(longlong *)(lVar8 + 0x80) == 0) goto LAB_01511220;
LAB_0151120c:
    FUN_00d50b00();
    FUN_00d50b20();
    bVar1 = false;
  }
  FUN_00d50b20();
  if (bVar1) {
    return 0;
  }
  plVar16 = (longlong *)(unaff_RDI + 0x78);
  lVar8 = unaff_RDI;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        return 1;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x78) == 0);
    lVar8 = *(longlong *)(lVar7 + 0x78);
  }
  else {
    lVar8 = *plVar16;
  }
  if (lVar8 == 0) {
    return 1;
  }
  FUN_00d50b00();
  plVar17 = (longlong *)(unaff_RDI + 0x80);
  lVar8 = unaff_RDI;
  plVar15 = plVar17;
  local_50 = plVar16;
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01511378;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    plVar15 = (longlong *)(lVar7 + 0x80);
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
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x78) == 0) {
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        local_60 = 1;
        goto LAB_015113e4;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(longlong *)(lVar9 + 0x78) == 0);
    lVar7 = *(longlong *)(lVar9 + 0x78);
  }
  else {
    lVar7 = *(longlong *)(lVar8 + 0x78);
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_60 = 0;
LAB_015113e4:
  local_78 = lVar7;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_44 = FUN_018232b0();
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    local_58 = (longlong *)0x0;
    do {
      lVar9 = *(longlong *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        goto LAB_0151156e;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(longlong *)(lVar9 + 0x80) == 0);
    plVar16 = *(longlong **)(lVar9 + 0x80);
  }
  else {
    plVar16 = *(longlong **)(lVar8 + 0x80);
  }
  if (plVar16 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar12 = 0;
  local_58 = plVar16;
LAB_0151156e:
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  plVar16 = local_50;
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = local_58;
  }
  iVar3 = FUN_0124ae30();
  if (local_44 == iVar3) {
    local_5c = (uint)uVar12;
    if (*plVar16 == 0) {
      local_50 = (longlong *)0x0;
      lVar8 = unaff_RDI;
      do {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        if (lVar7 == 0) {
          local_44 = 1;
          goto LAB_01511635;
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar8 = lVar7;
      } while (*(longlong *)(lVar8 + 0x78) == 0);
      plVar16 = (longlong *)(lVar8 + 0x78);
    }
    plVar16 = (longlong *)*plVar16;
    if (plVar16 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_44 = 0;
    local_50 = plVar16;
LAB_01511635:
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = local_50;
    }
    FUN_018232b0();
    pVar11 = (pthread_key_t)param_1;
    plVar16 = plVar17;
    if (*plVar17 == 0) {
      lVar8 = 0;
      lVar7 = unaff_RDI;
      do {
        pVar11 = (pthread_key_t)param_1;
        lVar9 = *(longlong *)(lVar7 + 0x50);
        if (lVar9 == 0) {
          bVar1 = true;
          goto LAB_015116e3;
        }
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          lVar9 = *(longlong *)(lVar7 + 0x50);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar11 = (pthread_key_t)param_1;
        lVar7 = lVar9;
      } while (*(longlong *)(lVar9 + 0x80) == 0);
      plVar16 = (longlong *)(lVar9 + 0x80);
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
    uVar12 = (ulonglong)local_5c;
    if ((char)local_44 == '\0' && local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar12 == '\0' && local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  bVar10 = (byte)local_60 | local_78 == 0;
  uVar12 = (ulonglong)CONCAT31((int3)((uint)local_60 >> 8),bVar10);
  if (bVar10 == 0) {
    FUN_00d50b20();
  }
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        bVar1 = true;
        goto LAB_015117c1;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(longlong *)(lVar9 + 0x80) == 0);
    lVar7 = *(longlong *)(lVar9 + 0x80);
  }
  else {
    lVar7 = *(longlong *)(lVar8 + 0x80);
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_015117c1:
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
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
      lVar7 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar7 == 0) {
        bVar1 = true;
        goto LAB_01511903;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(unaff_RDI + 0x50);
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      unaff_RDI = lVar7;
    } while (*(longlong *)(unaff_RDI + 0x80) == 0);
    plVar17 = (longlong *)(unaff_RDI + 0x80);
  }
  lVar8 = *plVar17;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_01511903:
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
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
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
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
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
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
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
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
// @014fdd70 — 2679 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014fe087) */
/* WARNING: Removing unreachable block (ram,0x014fe093) */
/* WARNING: Removing unreachable block (ram,0x014fe497) */
/* WARNING: Removing unreachable block (ram,0x014fe4a3) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe57c) */
/* WARNING: Removing unreachable block (ram,0x014fe23d) */
/* WARNING: Removing unreachable block (ram,0x014fe246) */
/* WARNING: Removing unreachable block (ram,0x014fe4e0) */
/* WARNING: Removing unreachable block (ram,0x014fe5dc) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe4b7) */

undefined8 * FUN_014fdd70(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong lVar13;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  longlong local_78;
  char local_70;
  int local_60;
  
  lVar13 = local_78;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  *puVar5 = &DAT_025fee18;
  *(undefined8 *)((longlong)puVar5 + 0x6c) = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined2 *)(puVar5 + 0xd) = 0;
  (*DAT_025fee30)();
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*plVar6 + 0x18))();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*plVar7 + 0x18))();
  pcVar3 = DAT_025ffd78;
  lVar1 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    uVar14 = 0;
    iVar15 = 0;
    do {
      pVar11 = 0xaaaaaaab;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14;
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_025ffd60;
      puVar8[7] = 0;
      puVar8[8] = 0;
      (*pcVar3)();
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar17 = (float)(int)uVar14 * DAT_023908e0;
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
        pVar11 = (pthread_key_t)plVar6;
      }
      FUN_0176fde0();
      FUN_00d50b20();
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + 8;
    } while ((int)uVar14 != 0xd);
    pvVar9 = _pthread_getspecific(pVar11);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar11 = (pthread_key_t)plVar7;
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
      pcVar3 = DAT_025fe688;
      local_70 = '\0';
      local_78 = 0;
      local_60 = -1;
      while( true ) {
        lVar10 = (longlong)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar13 + 0xc) <= local_60) break;
        lVar12 = *(longlong *)(lVar13 + 0x10);
        local_78 = *(longlong *)(lVar12 + 8 + lVar10 * 8);
        puVar8 = (undefined8 *)FUN_00e8fc40();
        pVar11 = (pthread_key_t)lVar12;
        FUN_00d4ff40();
        *puVar8 = &DAT_025fe670;
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
          lVar10 = DAT_027cd580;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
            lVar10 = DAT_027cd580;
          }
          DAT_027cd580 = lVar10;
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
          lVar10 = DAT_027cd560;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
            lVar10 = DAT_027cd560;
          }
          DAT_027cd560 = lVar10;
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
      pVar11 = (pthread_key_t)lVar13;
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
    fVar17 = (float)_logf(*(float *)(unaff_RSI + 0x5c) / DAT_02411fd0);
    FUN_01770230(fVar17 * DAT_02394208);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_01769110();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (!bVar16) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      bVar16 = true;
      goto joined_r0x014fe7ed;
    }
  }
  bVar16 = lVar1 != 0;
  FUN_00d50b20();
joined_r0x014fe7ed:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!(bool)(bVar16 | puVar5 == (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @001552e0 — 2627 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00155c5a) */
/* WARNING: Removing unreachable block (ram,0x00155c5f) */
/* WARNING: Removing unreachable block (ram,0x00155c12) */
/* WARNING: Removing unreachable block (ram,0x00155b8d) */
/* WARNING: Removing unreachable block (ram,0x00155afc) */
/* WARNING: Removing unreachable block (ram,0x001559ba) */
/* WARNING: Removing unreachable block (ram,0x001559c6) */
/* WARNING: Removing unreachable block (ram,0x00155d0c) */
/* WARNING: Removing unreachable block (ram,0x00155d19) */
/* WARNING: Removing unreachable block (ram,0x001558d0) */
/* WARNING: Removing unreachable block (ram,0x0015580d) */
/* WARNING: Removing unreachable block (ram,0x00155741) */
/* WARNING: Removing unreachable block (ram,0x001556c8) */
/* WARNING: Removing unreachable block (ram,0x001556d1) */
/* WARNING: Removing unreachable block (ram,0x00155630) */
/* WARNING: Removing unreachable block (ram,0x00155635) */
/* WARNING: Removing unreachable block (ram,0x001554ed) */
/* WARNING: Removing unreachable block (ram,0x001553ea) */
/* WARNING: Removing unreachable block (ram,0x001553f3) */
/* WARNING: Removing unreachable block (ram,0x0015557d) */
/* WARNING: Removing unreachable block (ram,0x00155586) */
/* WARNING: Removing unreachable block (ram,0x0015568f) */
/* WARNING: Removing unreachable block (ram,0x00155694) */
/* WARNING: Removing unreachable block (ram,0x00155787) */
/* WARNING: Removing unreachable block (ram,0x00155790) */
/* WARNING: Removing unreachable block (ram,0x00155836) */
/* WARNING: Removing unreachable block (ram,0x0015583f) */
/* WARNING: Removing unreachable block (ram,0x001558c4) */
/* WARNING: Removing unreachable block (ram,0x00155955) */
/* WARNING: Removing unreachable block (ram,0x00155961) */
/* WARNING: Removing unreachable block (ram,0x001559ad) */
/* WARNING: Removing unreachable block (ram,0x00155a6b) */
/* WARNING: Removing unreachable block (ram,0x00155a77) */
/* WARNING: Removing unreachable block (ram,0x00155b08) */
/* WARNING: Removing unreachable block (ram,0x00155b99) */
/* WARNING: Removing unreachable block (ram,0x00155c1b) */
/* WARNING: Removing unreachable block (ram,0x00155c90) */
/* WARNING: Removing unreachable block (ram,0x00155c99) */

longlong * FUN_001552e0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  bool bVar9;
  longlong local_f8;
  char local_f0;
  longlong local_70;
  char local_68;
  longlong local_50;
  
  FUN_00154c40();
  lVar5 = *(longlong *)(unaff_RSI + 0x88);
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
  lVar1 = *(longlong *)(unaff_RSI + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d237a0();
  *(undefined4 *)(unaff_RSI + 0xb0) = uVar2;
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
  lVar5 = *(longlong *)(unaff_RSI + 0x88);
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
    if (*(longlong *)(unaff_RSI + 0xa0) == 0) goto LAB_0015558b;
    *(undefined8 *)(unaff_RSI + 0xa0) = 0;
LAB_00155554:
    FUN_00d50b20();
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RSI + 0xa0);
    if (lVar4 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RSI + 0xa0) = lVar1;
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
  lVar5 = *(longlong *)(unaff_RSI + 0x90);
  if ((lVar5 == 0) || (FUN_00d50b00(), *(longlong *)(unaff_RSI + 0x90) == 0)) {
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
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
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
    pVar6 = (pthread_key_t)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
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
    param_1 = (pthread_key_t)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
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
    lVar4 = *(longlong *)(unaff_RSI + 0x90);
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
  if (*(longlong *)(unaff_RSI + 0xa0) != 0) {
    *(longlong *)(unaff_RSI + 0xa0) = 0;
    FUN_00d50b20();
  }
  if (lVar5 != lVar1) {
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
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
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
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
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
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
    lVar5 = *(longlong *)(unaff_RSI + 0x90);
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
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar8) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @005039a0 — 2394 bytes
// str: ""MUPercussivePitchSystem""
// str: ""MUScalePitchSystem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0050412a) */
/* WARNING: Removing unreachable block (ram,0x00504133) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005039a0(undefined8 param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  longlong *local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  local_50 = (longlong *)CONCAT44(local_50._4_4_,unaff_ESI);
  FUN_0197b900();
  (**(code **)(*local_60 + 0xa28))();
  plVar5 = local_40;
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00503a43:
    if (DAT_02802688 != 0) goto LAB_00503a54;
LAB_00503b0a:
    plVar5 = local_48;
    if ((DAT_027c0150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      _DAT_0270acc0 = FUN_0015eca0;
      _DAT_0270acd0 = 0;
      uRam000000000270acd8 = 0;
      _DAT_0270ace0 = 0;
      uRam000000000270ace8 = 0;
      _DAT_0270acf0 = 0;
      uRam000000000270acf8 = 0;
      _DAT_0270ad00 = 0;
      uRam000000000270ad08 = 0;
      _DAT_0270ad10 = 0;
      uRam000000000270ad18 = 0;
      _DAT_0270ad20 = 0;
      uRam000000000270ad28 = 0;
      _DAT_0270ad30 = 0;
      uRam000000000270ad38 = 0;
      _DAT_0270ad40 = 0;
      uRam000000000270ad48 = 0;
      _DAT_0270ad50 = 0;
      uRam000000000270ad58 = 0;
      _DAT_0270ad60 = 0;
      uRam000000000270ad68 = 0;
      _DAT_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503b50;
      if (local_48 != (longlong *)0x0) goto LAB_00503ea8;
      goto LAB_00503f0c;
    }
LAB_00503b50:
    if (DAT_02802688 == 0) goto LAB_00503f0c;
LAB_00503ea8:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_0050ef30();
    if (plVar5 == (longlong *)0x0) {
LAB_00503ee4:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503ee4;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) goto LAB_00503f0c;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(undefined4 *)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(undefined4 *)(plVar5 + 0x2c) = 0;
    *plVar5 = (longlong)&DAT_02656f08;
    plVar5[2] = (longlong)&DAT_02657878;
    plVar5[0x27] = (longlong)&DAT_026578b8;
    (*DAT_02656f20)();
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00503a43;
    if (local_48 == (longlong *)0x0) goto LAB_00503b0a;
LAB_00503a54:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar5 = local_40;
    FUN_00275460();
    if (plVar5 == (longlong *)0x0) {
LAB_00503a90:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00503a90;
    }
    plVar5 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar5 != (longlong *)0x0 & (param_2 ^ 1)) != 0) {
LAB_00503f0c:
      bVar2 = true;
      bVar1 = true;
      plVar5 = (longlong *)0x0;
      goto joined_r0x00504168;
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x28] = 0;
    *(undefined4 *)(plVar5 + 0x29) = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    *(undefined4 *)(plVar5 + 0x2c) = 0;
    *plVar5 = (longlong)&DAT_026449b8;
    plVar5[2] = (longlong)&DAT_02645458;
    plVar5[0x27] = (longlong)&DAT_02645498;
    plVar5[0x2d] = (longlong)&DAT_026454e8;
    plVar5[0x2e] = (longlong)&DAT_02645518;
    plVar5[0x2f] = (longlong)&DAT_02645550;
    *(undefined4 *)((longlong)plVar5 + 0x1dc) = 0;
    *(undefined2 *)(plVar5 + 0x3c) = 0;
    plVar5[99] = 0;
    plVar5[0x30] = 0;
    *(undefined1 *)(plVar5 + 0x31) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x19c) = 0;
    plVar5[0x34] = 0;
    plVar5[0x35] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1a9) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1b1) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1cb) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1d3) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1bc) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c4) = 0;
    *(undefined8 *)((longlong)plVar5 + 500) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1e4) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1ec) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x203) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x279) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x281) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x26c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x274) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x25c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x264) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x24c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x254) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x23c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x244) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x22c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x234) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x21c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x224) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x20c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x214) = 0;
    plVar5[0x54] = 0;
    plVar5[0x55] = 0;
    plVar5[0x52] = 0;
    plVar5[0x53] = 0;
    *(undefined1 *)(plVar5 + 0x56) = 0;
    plVar5[0x57] = 0;
    plVar5[0x58] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x2c1) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x2c9) = 0;
    plVar5[0x5f] = 0;
    plVar5[0x60] = 0;
    plVar5[0x5d] = 0;
    plVar5[0x5e] = 0;
    plVar5[0x5b] = 0;
    plVar5[0x5c] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x305) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x313) = 0;
    *(undefined4 *)(plVar5 + 0x62) = 0;
    (*DAT_026449d0)();
    FUN_01b150d0();
    FUN_01b15090();
    FUN_01b28220();
    FUN_01b182c0();
    plVar6 = DAT_02709e30;
    if (DAT_02709e30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar6;
    FUN_00e7d6f0();
    uVar8 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_60 = local_50;
    local_58 = '\0';
    FUN_000175c0(uVar8,&local_60);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_01b28af0();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x3f] != 0) {
      FUN_00249410();
      FUN_01b15090();
      FUN_00248dc0();
      FUN_01b150d0();
    }
  }
  FUN_01d98320();
  plVar6 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_01d98320();
    FUN_00d50130();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar6 + 0x18))();
  FUN_00504610();
  FUN_00d50b20();
  if ((unaff_RDI[0x45] != 0) && (FUN_00d50130(), unaff_RDI[0x45] != 0)) {
    unaff_RDI[0x45] = 0;
    FUN_00d50b20();
  }
  uVar8 = (**(code **)(*plVar5 + 0x938))();
  auVar9._8_8_ = extraout_XMM0_Qb;
  auVar9._0_8_ = uVar8;
  auVar9 = blendps(auVar9,_DAT_023b4a30,0xe);
  (**(code **)(*plVar5 + 0x4d0))(0,auVar9._0_8_);
  FUN_01d980f0();
  (**(code **)(*unaff_RDI + 0x9f8))();
  (**(code **)(*unaff_RDI + 0x928))();
  FUN_00504770();
  bVar2 = false;
  bVar1 = false;
joined_r0x00504168:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1 && plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @015189a0 — 2392 bytes
// ============================================================

void FUN_015189a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  undefined4 in_EDX;
  char unaff_SIL;
  undefined1 *local_res8;
  longlong local_118;
  undefined1 local_110;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  pthread_key_t local_b4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
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
    in_ECX = (pthread_key_t)local_68;
  }
  FUN_012e8920();
  local_58 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_58;
  }
  FUN_012caf10();
  local_80 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_58;
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
    in_ECX = (pthread_key_t)local_60;
  }
  FUN_0132d610();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_60;
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
      in_ECX = (pthread_key_t)local_48;
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
      pVar7 = (pthread_key_t)local_48;
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
    bVar1 = FUN_01514480(0,(undefined1)local_8c);
    local_70 = '\0';
    local_b0 = local_48;
    local_a8 = '\0';
    local_a0 = local_80;
    local_98 = '\0';
    pVar7 = (pthread_key_t)&local_a0;
    bVar2 = FUN_01515040(0,&local_b0,local_88,uVar6);
    if (((bVar2 | bVar1) == 1) && (local_c0 != (undefined1 *)0x0)) {
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
    if ((bVar1 & local_res8 != (undefined1 *)0x0) == 1) {
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
// @0150ddd0 — 2375 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150e347) */
/* WARNING: Removing unreachable block (ram,0x0150e353) */
/* WARNING: Removing unreachable block (ram,0x0150e146) */
/* WARNING: Removing unreachable block (ram,0x0150e4c5) */
/* WARNING: Removing unreachable block (ram,0x0150e4d1) */
/* WARNING: Removing unreachable block (ram,0x0150dedd) */
/* WARNING: Removing unreachable block (ram,0x0150dee6) */
/* WARNING: Removing unreachable block (ram,0x0150e639) */
/* WARNING: Removing unreachable block (ram,0x0150e642) */

void FUN_0150ddd0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  longlong *plVar9;
  char cVar10;
  void *pvVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  pthread_key_t pVar16;
  longlong lVar17;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar18;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong *local_50;
  
  plVar9 = local_78;
  pVar16 = (pthread_key_t)param_1;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    do {
      lVar15 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar15 == 0) goto LAB_0150dea5;
      pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar11 != (void *)0x0) {
        lVar15 = *(longlong *)(unaff_RDI + 0x50);
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar15 = *(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      pVar16 = (pthread_key_t)param_1;
      unaff_RDI = lVar15;
    } while (*(longlong *)(lVar15 + 0x78) == 0);
    lVar15 = *(longlong *)(lVar15 + 0x78);
  }
  else {
    lVar15 = *(longlong *)(unaff_RDI + 0x78);
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
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  pcVar8 = DAT_025ecda8;
  lVar15 = *unaff_RSI;
  if (*(int *)(lVar15 + 0xc) < 1) {
    bVar4 = false;
    local_68 = (longlong *)0x0;
    bVar6 = false;
    local_50 = (longlong *)0x0;
    bVar3 = false;
    local_80 = (longlong *)0x0;
    bVar2 = false;
    lVar12 = 0;
  }
  else {
    lVar18 = 0;
    lVar12 = 0;
    bVar2 = false;
    local_80 = (longlong *)0x0;
    bVar3 = false;
    local_50 = (longlong *)0x0;
    bVar6 = false;
    local_68 = (longlong *)0x0;
    lVar17 = 0;
    bVar4 = false;
    do {
      pVar16 = (pthread_key_t)lVar17;
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
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
        if ((!bVar3) && (local_78 != (longlong *)0x0)) {
          bVar3 = true;
          if (local_70 != '\0') goto LAB_0150e15e;
          FUN_00d50b00();
LAB_0150e117:
          bVar3 = true;
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (bVar3) {
          if (local_80 != (longlong *)0x0) {
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
      else if ((bVar3) && (local_80 != (longlong *)0x0)) {
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
          if ((!bVar4) && (local_78 != (longlong *)0x0)) {
            if (local_70 != '\0') {
              bVar5 = true;
              goto LAB_0150e294;
            }
            FUN_00d50b00();
            bVar5 = true;
          }
LAB_0150e280:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar13 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar4) && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e280;
          }
          if ((bVar4) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar5 = true;
        }
LAB_0150e294:
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar13 = (longlong)&DAT_025ecd90;
          *(undefined4 *)((longlong)plVar13 + 0x54) = 0;
          *(undefined1 *)(plVar13 + 0xb) = 0;
          plVar13[7] = 0;
          plVar13[8] = 0;
          *(undefined8 *)((longlong)plVar13 + 0x42) = 0;
          *(undefined8 *)((longlong)plVar13 + 0x4a) = 0;
          *(undefined8 *)((longlong)plVar13 + 0x5c) = 0;
          *(undefined8 *)((longlong)plVar13 + 100) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x6c) = 0;
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
          if ((!bVar6) && (local_78 != (longlong *)0x0)) {
            if (local_70 != '\0') {
              bVar7 = true;
              goto LAB_0150e454;
            }
            FUN_00d50b00();
            bVar7 = true;
          }
LAB_0150e440:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar14 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar7 = true;
            if ((bVar6) && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e440;
          }
          if ((bVar6) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar7 = true;
        }
LAB_0150e454:
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)FUN_0117a3f0();
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
            pVar16 = (pthread_key_t)plVar9;
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar16 = (pthread_key_t)lVar12;
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
      lVar15 = *unaff_RSI;
      lVar17 = (longlong)*(int *)(lVar15 + 0xc);
    } while (lVar18 < lVar17);
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00505840 — 2219 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00505840(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  double dVar9;
  undefined8 uVar10;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RSI[0x40] == 0) {
    (**(code **)(*unaff_RSI + 0x640))();
    uVar8 = (**(code **)(*local_40 + 0x580))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(undefined4 *)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(undefined1 *)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(undefined4 *)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &DAT_02677e10;
    puVar7[2] = &DAT_026788e8;
    puVar7[0x39] = &DAT_02678928;
    *(undefined4 *)((longlong)puVar7 + 500) = 0;
    *(undefined1 *)(puVar7 + 0x3f) = 0;
    puVar7[0x43] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3d] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x3b] = 0;
    *(undefined1 *)(puVar7 + 0x3e) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x20c) = 0;
    (*DAT_02677e28)();
    puVar1 = (undefined8 *)unaff_RSI[0x40];
    if (puVar1 == puVar7) {
      FUN_00d50b20();
    }
    else {
      unaff_RSI[0x40] = (longlong)puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RSI[0x40] + 0x4d0))(0,uVar8);
    lVar3 = DAT_02709e50;
    plVar2 = (longlong *)unaff_RSI[0x40];
    if (DAT_02709e50 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa10))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026e1800;
    if (DAT_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar9 = (double)FUN_00e7d6f0();
    uVar6 = (ulonglong)(dVar9 * DAT_023907c0);
    dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
    uVar10 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
    local_50 = lVar3;
    local_48 = '\0';
    FUN_000175c0(uVar10,&local_50);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02709e60;
    if ((plVar2 != (longlong *)0x0 & bVar5) != 0) {
      if (DAT_02709e60 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01cef3b0();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01cef450();
    FUN_01cef4c0();
    FUN_01d0fe80();
    lVar3 = DAT_026f6f70;
    plVar2 = (longlong *)unaff_RSI[0x40];
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_026deab8;
    if (DAT_026deab8 != 0) {
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
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar2 + 0x6a8))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
  lVar3 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar3;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((plVar2 != (longlong *)0x0 & bVar5) == 0) {
    FUN_01cef410();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
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
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02709e60;
    if (plVar2 == (longlong *)0x0) {
      if (DAT_02709e60 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      FUN_01d51a40();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_01cef3b0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar3 = unaff_RSI[0x40];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01514480 — 2211 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01514b0c) */
/* WARNING: Removing unreachable block (ram,0x01514b15) */
/* WARNING: Removing unreachable block (ram,0x015147dd) */
/* WARNING: Removing unreachable block (ram,0x015147e9) */
/* WARNING: Removing unreachable block (ram,0x01514b23) */
/* WARNING: Removing unreachable block (ram,0x01514b2f) */
/* WARNING: Removing unreachable block (ram,0x01514724) */
/* WARNING: Removing unreachable block (ram,0x0151472d) */
/* WARNING: Removing unreachable block (ram,0x015149e5) */
/* WARNING: Removing unreachable block (ram,0x015149f2) */

ulonglong FUN_01514480(longlong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar13;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  cVar3 = (char)param_1;
  lVar9 = *unaff_RSI;
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *unaff_RSI;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar9 + 0x78) == 0) {
    do {
      lVar8 = *(longlong *)(lVar9 + 0x50);
      if (lVar8 == 0) {
        return 0;
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *(longlong *)(lVar9 + 0x50);
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      lVar9 = lVar8;
    } while (*(longlong *)(lVar8 + 0x78) == 0);
    lVar9 = *(longlong *)(lVar8 + 0x78);
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 0x78);
  }
  if (lVar9 == 0) {
    return 0;
  }
  FUN_00d50b00();
  plVar1 = (longlong *)(unaff_RDI + 0x78);
  lVar8 = unaff_RDI;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    do {
      lVar10 = *(longlong *)(lVar8 + 0x50);
      if (lVar10 == 0) goto LAB_01514701;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar10 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar10;
    } while (*(longlong *)(lVar10 + 0x78) == 0);
    lVar8 = *(longlong *)(lVar10 + 0x78);
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
    pVar11 = (pthread_key_t)param_1;
    if (*plVar1 == 0) {
      lVar8 = 0;
      lVar10 = unaff_RDI;
      do {
        pVar11 = (pthread_key_t)param_1;
        lVar12 = *(longlong *)(lVar10 + 0x50);
        if (lVar12 == 0) {
          bVar2 = true;
          goto LAB_01514556;
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          lVar12 = *(longlong *)(lVar10 + 0x50);
          lVar10 = FUN_00e8b990();
          if (lVar10 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
        }
        pVar11 = (pthread_key_t)param_1;
        lVar10 = lVar12;
      } while (*(longlong *)(lVar12 + 0x78) == 0);
      lVar8 = *(longlong *)(lVar12 + 0x78);
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
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = lVar9;
  }
  FUN_01822e80();
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_00d51e10();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
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
        lVar8 = unaff_RDI;
        do {
          lVar10 = *(longlong *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_015148de;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(longlong *)(lVar10 + 0x78) == 0);
        lVar9 = *(longlong *)(lVar10 + 0x78);
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015148de:
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
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
      if (*(longlong *)(unaff_RDI + 0x80) == 0) {
        lVar9 = 0;
        lVar8 = unaff_RDI;
        do {
          lVar10 = *(longlong *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_01514aab;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(longlong *)(lVar10 + 0x80) == 0);
        lVar9 = *(longlong *)(lVar10 + 0x80);
      }
      else {
        lVar9 = *(longlong *)(unaff_RDI + 0x80);
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01514aab:
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
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
  uVar13 = (ulonglong)uVar5 ^ 1;
  if (param_2 != '\0') {
    if (*plVar1 == 0) {
      lVar9 = 0;
      lVar8 = unaff_RDI;
      do {
        lVar10 = *(longlong *)(lVar8 + 0x50);
        if (lVar10 == 0) {
          bVar2 = true;
          goto LAB_01514b87;
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar10 = *(longlong *)(lVar8 + 0x50);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar8 = lVar10;
      } while (*(longlong *)(lVar10 + 0x78) == 0);
      lVar9 = *(longlong *)(lVar10 + 0x78);
    }
    else {
      lVar9 = *plVar1;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_01514b87:
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_018232b0();
    if (!bVar2 && lVar9 != 0) {
      FUN_00d50b20();
    }
    pVar11 = (pthread_key_t)param_1;
    if (iVar6 != 2) {
      if (*plVar1 == 0) {
        lVar9 = 0;
        do {
          pVar11 = (pthread_key_t)param_1;
          lVar8 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar8 == 0) {
            bVar2 = true;
            goto LAB_01514bf9;
          }
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            lVar8 = *(longlong *)(unaff_RDI + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          unaff_RDI = lVar8;
          pVar11 = (pthread_key_t)param_1;
        } while (*(longlong *)(unaff_RDI + 0x78) == 0);
        lVar9 = *(longlong *)(unaff_RDI + 0x78);
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
// @001563c0 — 2192 bytes
// str: ""Melodyne #%d""
// str: ""%@.%d""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00156744) */
/* WARNING: Removing unreachable block (ram,0x00156c08) */
/* WARNING: Removing unreachable block (ram,0x00156c14) */
/* WARNING: Removing unreachable block (ram,0x00156c60) */
/* WARNING: Removing unreachable block (ram,0x00156c6d) */
/* WARNING: Removing unreachable block (ram,0x0015644a) */
/* WARNING: Removing unreachable block (ram,0x00156453) */
/* WARNING: Removing unreachable block (ram,0x0015698f) */
/* WARNING: Removing unreachable block (ram,0x0015699c) */
/* WARNING: Removing unreachable block (ram,0x00156750) */
/* WARNING: Removing unreachable block (ram,0x00156770) */
/* WARNING: Removing unreachable block (ram,0x00156752) */
/* WARNING: Removing unreachable block (ram,0x00156772) */

void FUN_001563c0(longlong *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  longlong local_f8;
  char local_f0;
  char local_b4;
  longlong *local_a0;
  char local_98;
  int local_74;
  longlong *local_70;
  char local_68;
  int local_58;
  longlong *local_48;
  char local_40;
  
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_70 == (longlong *)0x0) {
    bVar9 = false;
  }
  else {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    iVar1 = FUN_00d8c7a0();
    bVar9 = 10 < iVar1;
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b4 = '\0';
  if (bVar9) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    FUN_00d97ce0();
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026e3cb8;
    if (DAT_026e3cb8 != 0) {
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
    pVar4 = (pthread_key_t)param_1;
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
    if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == (longlong *)0x0) break;
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_58 = -1;
    do {
      lVar3 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) <= local_58) {
        bVar9 = false;
        goto LAB_00156b52;
      }
      plVar5 = (longlong *)plVar6[2];
      local_70 = (longlong *)plVar5[lVar3 + 1];
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      cVar8 = local_a0 == plVar7;
      if ((!(bool)cVar8) && (plVar7 != (longlong *)0x0)) {
        pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6000();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar8 = (**(code **)(*plVar7 + 0x50))();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (cVar8 == '\0');
    local_74 = local_74 + 1;
    if (local_b4 == '\0') {
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
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
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar6 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
            goto LAB_00156af2;
          }
        }
        else {
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
        }
      }
      local_a0 = &DAT_024c5048;
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
      plVar5 = &DAT_024cc6f0;
      local_48 = &DAT_024cc6f0;
      FUN_00d8cb40();
      if (local_a0 == plVar7) {
LAB_00156aaa:
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = plVar7 != (longlong *)0x0;
        plVar7 = local_a0;
        if (bVar9) {
          FUN_00d50b20();
          goto LAB_00156aaa;
        }
      }
      else {
        bVar9 = plVar7 != (longlong *)0x0;
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
    pVar4 = (pthread_key_t)plVar6;
    param_1 = plVar6;
  } while (bVar9);
  if (0 < local_74) {
    lVar3 = *(longlong *)(unaff_RDI + 0x88);
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
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01513590 — 2000 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01513c7e) */
/* WARNING: Removing unreachable block (ram,0x01513c87) */
/* WARNING: Removing unreachable block (ram,0x01513c95) */
/* WARNING: Removing unreachable block (ram,0x01513ca1) */
/* WARNING: Removing unreachable block (ram,0x01513a4b) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513be0) */
/* WARNING: Removing unreachable block (ram,0x01513be9) */

ulonglong FUN_01513590(ulonglong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  pthread_key_t pVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong local_78;
  ulonglong local_50;
  undefined4 local_48;
  ulonglong local_40;
  char local_38;
  
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01513689;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    uVar13 = *(ulonglong *)(lVar7 + 0x80);
  }
  else {
    uVar13 = *(ulonglong *)(lVar8 + 0x80);
  }
  if (uVar13 == 0) {
LAB_01513689:
    uVar13 = 0;
    goto LAB_01513cec;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = (longlong *)(unaff_RDI + 0x80);
  lVar8 = unaff_RDI;
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        local_78 = 0;
        goto LAB_015136c3;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    local_78 = *(longlong *)(lVar7 + 0x80);
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
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
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
      lVar8 = *unaff_RSI;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar8 = *unaff_RSI;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar8 + 0x78) == 0) {
        do {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_0151394e;
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(longlong *)(lVar7 + 0x78) == 0);
        if (*(longlong *)(lVar7 + 0x78) == 0) goto LAB_0151394e;
LAB_015138f5:
        FUN_00d50b00();
        FUN_00d50b20();
        lVar8 = *unaff_RSI;
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar8 = *unaff_RSI;
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar12 = (pthread_key_t)param_1;
        if (*(longlong *)(lVar8 + 0x78) == 0) {
          lVar7 = 0;
          do {
            pVar12 = (pthread_key_t)param_1;
            lVar10 = *(longlong *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              bVar2 = true;
              goto LAB_015139d1;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(longlong *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            pVar12 = (pthread_key_t)param_1;
            lVar8 = lVar10;
          } while (*(longlong *)(lVar10 + 0x78) == 0);
          lVar7 = *(longlong *)(lVar10 + 0x78);
        }
        else {
          lVar7 = *(longlong *)(lVar8 + 0x78);
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
        if (*(longlong *)(lVar8 + 0x78) != 0) goto LAB_015138f5;
LAB_0151394e:
        bVar4 = false;
        local_50 = 0;
      }
      plVar15 = (longlong *)(unaff_RDI + 0x78);
      lVar8 = unaff_RDI;
      if (*(longlong *)(unaff_RDI + 0x78) == 0) {
        do {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_01513b52;
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(longlong *)(lVar7 + 0x78) == 0);
        lVar8 = *(longlong *)(lVar7 + 0x78);
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
        pVar12 = (pthread_key_t)param_1;
        if (*plVar15 == 0) {
          lVar7 = 0;
          lVar8 = unaff_RDI;
          do {
            pVar12 = (pthread_key_t)param_1;
            lVar10 = *(longlong *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              local_48 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              goto LAB_01513b7e;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(longlong *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            lVar8 = lVar10;
            uVar9 = 0;
            pVar12 = (pthread_key_t)param_1;
          } while (*(longlong *)(lVar8 + 0x78) == 0);
          plVar15 = (longlong *)(lVar8 + 0x78);
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
          uVar14 = (undefined7)((ulonglong)lVar8 >> 8);
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
        param_1 = (ulonglong)CONCAT31((int3)((uint)local_48 >> 8),bVar11);
        if (bVar11 == 0) {
          FUN_00d50b20();
        }
      }
      pVar12 = (pthread_key_t)param_1;
      if (*plVar1 == 0) {
        lVar8 = 0;
        do {
          pVar12 = (pthread_key_t)param_1;
          lVar7 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar7 == 0) {
            bVar3 = true;
            goto LAB_01513c20;
          }
          pvVar6 = _pthread_getspecific(pVar12);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(unaff_RDI + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          unaff_RDI = lVar7;
          pVar12 = (pthread_key_t)param_1;
        } while (*(longlong *)(unaff_RDI + 0x80) == 0);
        lVar8 = *(longlong *)(unaff_RDI + 0x80);
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
      uVar13 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
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
// @00504b00 — 1891 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00504e0c) */
/* WARNING: Removing unreachable block (ram,0x00504e18) */
/* WARNING: Removing unreachable block (ram,0x00504f37) */
/* WARNING: Removing unreachable block (ram,0x00504f43) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00504b00(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar11 [16];
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_00275460();
  if (plVar1 == (longlong *)0x0) {
LAB_00504b52:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00504b52;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    if (unaff_RDI[0x42] != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        local_78 = 0;
        lVar2 = unaff_RDI[0x42];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\x01';
        local_80 = lVar2;
        (**(code **)(*unaff_RDI + 0x470))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(undefined4 *)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(undefined1 *)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(undefined4 *)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &DAT_02645fa8;
    puVar7[2] = &DAT_02646a70;
    puVar7[0x39] = 0;
    puVar7[0x3a] = 0;
    *(undefined4 *)((longlong)puVar7 + 0x1d7) = 0;
    puVar7[0x3f] = 0;
    puVar7[0x40] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1ec) = 0;
    *(undefined8 *)((longlong)puVar7 + 500) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1dc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1e4) = 0;
    (*DAT_02645fc0)();
    puVar3 = (undefined8 *)unaff_RDI[0x42];
    if (puVar3 == puVar7) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x42] = (longlong)puVar7;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (longlong *)unaff_RDI[0x42];
    uVar5 = FUN_01b2b5d0();
    auVar11._8_4_ = extraout_XMM0_Dc;
    auVar11._0_8_ = uVar5;
    auVar11._12_4_ = extraout_XMM0_Dd;
    auVar11 = insertps(_DAT_023b4a40,auVar11,0x10);
    (**(code **)(*plVar4 + 0x4d0))(0,auVar11._0_8_);
    (**(code **)(*(longlong *)unaff_RDI[0x42] + 0x558))();
    local_68 = 0;
    local_70 = unaff_RDI[0x42];
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_01b0ac50();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02709e38;
    plVar4 = (longlong *)unaff_RDI[0x42];
    if (DAT_02709e38 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x42] + 0xa20))();
    FUN_01b2ff20(DAT_023b4a10);
    FUN_01b2ff30(DAT_023b4a14);
    FUN_01b2fe80();
    if (unaff_RDI[0x45] != 0) {
      FUN_00d50130();
    }
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_000161a0();
    (**(code **)(*plVar8 + 0x18))();
    plVar4 = (longlong *)unaff_RDI[0x45];
    if (plVar4 == plVar8) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x45] = (longlong)plVar8;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    uVar10 = (**(code **)(*plVar8 + 0x18))();
    plVar4 = DAT_02709e40;
    if (DAT_02709e40 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    local_40 = plVar4;
    local_38 = '\0';
    uVar10 = FUN_00ca0840(uVar10,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = DAT_027e3c80;
    plVar4 = (longlong *)unaff_RDI[0x45];
    if (DAT_027e3c80 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_98 = '\0';
    local_a0 = plVar8;
    (**(code **)(*plVar4 + 0x508))(uVar10,&local_a0);
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x990))();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01b214b0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00504610();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_0050ef30();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 != '\0') goto LAB_005051cd;
  }
  pplVar9 = (longlong **)&DAT_02802688;
LAB_005051cd:
  plVar1 = *pplVar9;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x990))();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00504610();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01518160 — 1812 bytes
// ============================================================

void FUN_01518160(double param_1,double param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  void *pvVar6;
  uint in_ECX;
  pthread_key_t pVar7;
  undefined8 *in_RDX;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qa;
  double dVar17;
  undefined1 *local_res8;
  undefined1 *local_res10;
  undefined8 local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  longlong *in_stack_ffffffffffffff60;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  
  pVar7 = in_ECX;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = unaff_RDI;
  if (1 < *(int *)(*unaff_RSI + 0xc)) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar5 + 0x18))();
    if (plVar5 == unaff_RDI) {
      FUN_00d50b20();
      plVar5 = unaff_RDI;
    }
    else if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((char)in_ECX != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_98[0] = '\0';
      uVar11 = FUN_01512be0();
      FUN_01513590(uVar11,0);
      in_stack_ffffffffffffff60 = unaff_RDI;
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (param_3 != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_01512890();
      if (unaff_RDI != (longlong *)0x0) {
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
  if ((local_98[0] != '\0') && (in_stack_ffffffffffffff60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (in_stack_ffffffffffffff60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = in_stack_ffffffffffffff60;
  FUN_00d23740();
  uVar9 = in_ECX & 0xff;
  uVar11 = 0;
  FUN_01517980(param_1,param_2,uVar9,param_3);
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_01655040();
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_01655100();
  uVar12 = FUN_00e7b500(uVar12);
  lVar1 = *unaff_RSI;
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
        uVar12 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01655040();
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
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
  if (plVar5 != unaff_RDI) {
    if ((char)in_ECX != '\0') {
      local_98[0] = '\0';
      bVar3 = FUN_01512be0(uVar12,0);
      bVar4 = FUN_01513590(extraout_XMM0_Qa,0);
      if (((bVar3 | bVar4) == 1) && (local_res8 != (undefined1 *)0x0)) {
        *local_res8 = 1;
      }
    }
    in_stack_ffffffffffffff60 = local_78;
    if (param_3 != '\0') {
      local_e0 = 0;
      local_e8 = plVar5;
      bVar3 = FUN_01512890();
      if ((bVar3 & local_res10 != (undefined1 *)0x0) == 1) {
        *local_res10 = 1;
      }
    }
  }
  if (in_stack_ffffffffffffff60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01512be0 — 1756 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01513094) */
/* WARNING: Removing unreachable block (ram,0x0151309d) */
/* WARNING: Removing unreachable block (ram,0x015130ab) */
/* WARNING: Removing unreachable block (ram,0x015130b7) */
/* WARNING: Removing unreachable block (ram,0x015132bc) */
/* WARNING: Removing unreachable block (ram,0x015132c5) */
/* WARNING: Removing unreachable block (ram,0x01513187) */
/* WARNING: Removing unreachable block (ram,0x01513194) */

ulonglong FUN_01512be0(ulonglong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  pthread_key_t pVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar14;
  longlong local_78;
  undefined4 local_50;
  longlong local_48;
  char local_40;
  
  lVar11 = *unaff_RSI;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar11 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar11 + 0x78) == 0) {
    do {
      lVar4 = *(longlong *)(lVar11 + 0x50);
      if (lVar4 == 0) goto LAB_01512cc6;
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(longlong *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(longlong *)(lVar4 + 0x78) == 0);
    lVar11 = *(longlong *)(lVar4 + 0x78);
  }
  else {
    lVar11 = *(longlong *)(lVar11 + 0x78);
  }
  if (lVar11 == 0) {
LAB_01512cc6:
    uVar12 = 0;
    goto LAB_015130fa;
  }
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar14 = (longlong *)(unaff_RDI + 0x78);
  lVar11 = unaff_RDI;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    do {
      lVar4 = *(longlong *)(lVar11 + 0x50);
      if (lVar4 == 0) {
        local_78 = 0;
        goto LAB_01512cfd;
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(longlong *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(longlong *)(lVar4 + 0x78) == 0);
    local_78 = *(longlong *)(lVar4 + 0x78);
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
      lVar11 = unaff_RDI;
      if (*plVar14 == 0) {
        do {
          lVar4 = *(longlong *)(lVar11 + 0x50);
          if (lVar4 == 0) {
            lVar11 = 0;
            bVar1 = false;
            goto LAB_01512edc;
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(longlong *)(lVar11 + 0x50);
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
            }
          }
          lVar11 = lVar4;
        } while (*(longlong *)(lVar4 + 0x78) == 0);
        lVar11 = *(longlong *)(lVar4 + 0x78);
      }
      else {
        lVar11 = *plVar14;
      }
      if (lVar11 == 0) goto LAB_01512ed4;
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
      pVar9 = (pthread_key_t)param_1;
      plVar13 = plVar14;
      if (*plVar14 == 0) {
        lVar11 = 0;
        lVar4 = unaff_RDI;
        do {
          pVar9 = (pthread_key_t)param_1;
          lVar6 = *(longlong *)(lVar4 + 0x50);
          if (lVar6 == 0) {
            local_50 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            goto LAB_0151324b;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar6 = *(longlong *)(lVar4 + 0x50);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          uVar5 = 0;
          pVar9 = (pthread_key_t)param_1;
          lVar4 = lVar6;
        } while (*(longlong *)(lVar6 + 0x78) == 0);
        plVar13 = (longlong *)(lVar6 + 0x78);
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
      param_1 = (ulonglong)CONCAT31((int3)((uint)local_50 >> 8),bVar8);
      lVar11 = local_48;
      if (bVar8 == 0) {
        FUN_00d50b20();
      }
    }
LAB_01512edc:
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
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
        lVar6 = unaff_RDI;
        do {
          lVar7 = *(longlong *)(lVar6 + 0x50);
          if (lVar7 == 0) {
            bVar10 = true;
            goto LAB_01512faa;
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar6 + 0x50);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
          }
          lVar6 = lVar7;
        } while (*(longlong *)(lVar6 + 0x78) == 0);
        lVar4 = *(longlong *)(lVar6 + 0x78);
      }
      else {
        lVar4 = *plVar14;
      }
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      bVar10 = false;
LAB_01512faa:
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
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
      pVar9 = (pthread_key_t)param_1;
      if (*(longlong *)(unaff_RDI + 0x80) == 0) {
        lVar6 = 0;
        do {
          pVar9 = (pthread_key_t)param_1;
          lVar4 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar4 == 0) {
            bVar10 = true;
            goto LAB_01513032;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(longlong *)(unaff_RDI + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          unaff_RDI = lVar4;
          pVar9 = (pthread_key_t)param_1;
        } while (*(longlong *)(unaff_RDI + 0x80) == 0);
      }
      lVar6 = *(longlong *)(unaff_RDI + 0x80);
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
    uVar12 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
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
// @01323a40 — 1738 bytes
// str: ""%p::_pitchSystem""
// str: ""_audioSourceSibilantItems""
// str: ""%p::_microtonalPitchSystem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01323c21) */
/* WARNING: Removing unreachable block (ram,0x01323c2d) */
/* WARNING: Removing unreachable block (ram,0x01323c0a) */
/* WARNING: Removing unreachable block (ram,0x01323c13) */
/* WARNING: Removing unreachable block (ram,0x01323a80) */
/* WARNING: Removing unreachable block (ram,0x01323a8c) */
/* WARNING: Removing unreachable block (ram,0x01323dd4) */
/* WARNING: Removing unreachable block (ram,0x01323ddd) */
/* WARNING: Removing unreachable block (ram,0x01323deb) */
/* WARNING: Removing unreachable block (ram,0x01323df7) */
/* WARNING: Removing unreachable block (ram,0x01323f28) */
/* WARNING: Removing unreachable block (ram,0x01323f35) */
/* WARNING: Removing unreachable block (ram,0x01323ef6) */
/* WARNING: Removing unreachable block (ram,0x01323f03) */
/* WARNING: Removing unreachable block (ram,0x01323fb8) */
/* WARNING: Removing unreachable block (ram,0x01323fc5) */
/* WARNING: Removing unreachable block (ram,0x01323fea) */
/* WARNING: Removing unreachable block (ram,0x01323ff7) */
/* WARNING: Removing unreachable block (ram,0x01324032) */
/* WARNING: Removing unreachable block (ram,0x0132403b) */

void FUN_01323a40(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  FUN_00d61ea0();
  lVar2 = DAT_027e3c40;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e3c40;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027e3c40 != 0) {
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
      if (unaff_RDI != (longlong *)0x0) {
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
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
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
  lVar2 = DAT_027bf3c8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027bf3c8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027bf3c8;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027bf3c8 != 0) {
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
      if (unaff_RDI != (longlong *)0x0) {
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
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
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
  lVar2 = DAT_027bf3d0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027bf3d0 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027bf3d0;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027bf3d0 != 0) {
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
        uVar6 = *(undefined8 *)(lVar5 + 0x28);
      }
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
    }
    (**(code **)(*unaff_RDI + 0x200))(0,uVar6,0);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027bf3d8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027bf3d8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027bf3d8;
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027bf3d8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x510))();
    *(undefined1 *)((longlong)unaff_RDI + 0x1aa) = uVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00506830 — 1651 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00506870) */
/* WARNING: Removing unreachable block (ram,0x0050687c) */

void FUN_00506830(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar7;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined8 uVar6;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Dc;
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
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  FUN_01d96f70();
  uVar4 = (**(code **)(*unaff_RDI + 0x640))();
  plVar2 = local_50;
  local_98 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar2 + 0x3b0))(uVar4,&local_98);
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  lVar1 = unaff_RDI[0x49];
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
    (*DAT_02680418)();
    lVar1 = unaff_RDI[0x49];
    unaff_RDI[0x49] = (longlong)puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d9aea0();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
      FUN_01d97e80();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d9aea0();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d97e80();
    (**(code **)(*local_40 + 0x4d8))();
    FUN_01d39400((float)local_68,extraout_XMM0_Db);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*unaff_RDI + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_01 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_00 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*unaff_RDI + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_02 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_01 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*unaff_RDI + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_03 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_02 + in_XMM1_Dc;
    fVar8 = fVar7 + DAT_02390d00 + DAT_023b2664;
    FUN_01d38ba0((float)local_68);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x49];
    plVar2 = (longlong *)*unaff_RSI;
  }
  else {
    plVar2 = (longlong *)*unaff_RSI;
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
  plVar2 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x950))();
  uVar6 = (**(code **)(*local_40 + 0x4d8))();
  fVar9 = fVar8;
  local_68 = uVar6;
  (**(code **)(*unaff_RDI + 0x950))();
  (**(code **)(*local_50 + 0x4d8))();
  fVar10 = fVar7;
  fVar11 = fVar9;
  fVar12 = in_XMM1_Dc;
  (**(code **)(*unaff_RDI + 0x950))();
  fVar5 = (float)(**(code **)(*local_c8 + 0x4d8))();
  uVar4 = extraout_XMM0_Dc;
  (**(code **)(*unaff_RDI + 0x950))();
  (**(code **)(*local_b8 + 0x4d8))();
  (**(code **)(*plVar2 + 0x3e0))
            ((float)local_68 + fVar8 + DAT_02390d00,extraout_XMM0_Db_04 + fVar7 + DAT_02390d00,
             fVar5 + fVar9 + DAT_02390d00,extraout_XMM0_Db_05 + fVar10 + DAT_02390d00 + DAT_023b2664
             ,fVar11,fVar12,fVar5,uVar4,fVar9,in_XMM1_Dc);
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01519670 — 1590 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01519670(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_40;
  char local_38;
  
  if (*param_2 == unaff_RSI) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = unaff_RSI;
  }
  else {
    if (*(longlong *)(unaff_RSI + 0x78) == 0) {
      lVar7 = 0;
      lVar5 = unaff_RSI;
      do {
        lVar9 = *(longlong *)(lVar5 + 0x50);
        if (lVar9 == 0) {
          bVar2 = true;
          goto LAB_015196c0;
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          lVar9 = *(longlong *)(lVar5 + 0x50);
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        lVar5 = lVar9;
      } while (*(longlong *)(lVar9 + 0x78) == 0);
      lVar7 = *(longlong *)(lVar9 + 0x78);
    }
    else {
      lVar7 = *(longlong *)(unaff_RSI + 0x78);
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_015196c0:
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
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
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        lVar7 = *param_2;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar7 + 0x78) == 0) {
        lVar5 = 0;
        do {
          lVar9 = *(longlong *)(lVar7 + 0x50);
          if (lVar9 == 0) {
            bVar2 = true;
            goto LAB_015197ce;
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar4 != (void *)0x0) {
            lVar9 = *(longlong *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(longlong *)(lVar9 + 0x78) == 0);
        lVar5 = *(longlong *)(lVar9 + 0x78);
      }
      else {
        lVar5 = *(longlong *)(lVar7 + 0x78);
      }
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015197ce:
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
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
    if (DAT_0239425c <= (float)((uint)(fVar12 - fVar11) & _DAT_02390140)) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_0013dd30();
      (**(code **)(*plVar6 + 0x18))();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
      }
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      local_38 = 0;
      uVar13 = FUN_01512be0();
      local_70 = 0;
      FUN_01513590(uVar13,0);
      local_38 = 0;
      FUN_01512890();
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = 0;
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      plVar1 = plVar6;
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
        plVar1 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      while( true ) {
        plVar10 = plVar1;
        if ((*(char *)((longlong)plVar10 + 0xa1) == '\0') &&
           (pvVar4 = _pthread_getspecific((pthread_key_t)param_1), pvVar4 == (void *)0x0)) {
          FUN_015104e0();
        }
        lVar7 = plVar10[0x12];
        if (lVar7 != 0) break;
        plVar1 = (longlong *)plVar10[10];
        if (plVar1 == (longlong *)0x0) {
          lVar7 = 0;
LAB_01519b79:
          while( true ) {
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_00e7bdb0();
            param_1 = (longlong *)FUN_00e7bdb0();
            cVar3 = FUN_01252960(param_1,uVar8,&local_40,local_78);
            if (cVar3 == '\0') break;
            if (local_40 != 0) {
              pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01767a10(fVar12);
            }
          }
          *unaff_RDI = (longlong)plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (local_38 == '\0') {
            return unaff_RDI;
          }
          if (local_40 == 0) {
            return unaff_RDI;
          }
          FUN_00d50b20();
          return unaff_RDI;
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          plVar1 = (longlong *)plVar10[10];
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
      }
      FUN_00d50b00();
      goto LAB_01519b79;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = unaff_RSI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @01517980 — 1528 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01517afc) */
/* WARNING: Removing unreachable block (ram,0x01517b05) */
/* WARNING: Removing unreachable block (ram,0x01517a1a) */
/* WARNING: Removing unreachable block (ram,0x01517a23) */
/* WARNING: Removing unreachable block (ram,0x01517a8d) */
/* WARNING: Removing unreachable block (ram,0x01517a96) */
/* WARNING: Removing unreachable block (ram,0x01517c1b) */
/* WARNING: Removing unreachable block (ram,0x01517c28) */

void FUN_01517980(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  undefined8 *in_RDX;
  undefined1 local_res8;
  undefined1 *local_res10;
  undefined1 *local_res18;
  undefined1 local_118 [8];
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_f0;
  undefined1 local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_8c;
  longlong local_88;
  char local_80;
  undefined8 local_68;
  longlong local_50;
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
      pVar7 = (pthread_key_t)local_50;
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
      pVar7 = (pthread_key_t)local_50;
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
    pVar7 = (pthread_key_t)&local_108;
    local_108 = uVar1;
    bVar3 = FUN_01515040(0,local_118,local_68,uVar6);
    if (((bVar3 | bVar2) == 1) && (local_res10 != (undefined1 *)0x0)) {
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
    if ((bVar2 & local_res18 != (undefined1 *)0x0) == 1) {
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
// @01512000 — 1446 bytes
// ============================================================

ulonglong FUN_01512000(pthread_key_t param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  char *pcVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar11;
  char cVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88 [8];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  char local_38 [8];
  
  lVar6 = *unaff_RSI;
  if (lVar6 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(longlong *)(lVar6 + 0x88) == 0) {
      lVar5 = 0;
      do {
        lVar7 = *(longlong *)(lVar6 + 0x50);
        if (lVar7 == 0) {
          bVar1 = true;
          goto LAB_01512080;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar7 = *(longlong *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar7;
      } while (*(longlong *)(lVar7 + 0x88) == 0);
      lVar5 = *(longlong *)(lVar7 + 0x88);
    }
    else {
      lVar5 = *(longlong *)(lVar6 + 0x88);
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
    if (*(longlong *)(unaff_RDI + 0x88) == 0) {
      lVar6 = 0;
      do {
        lVar5 = *(longlong *)(unaff_RDI + 0x50);
        if (lVar5 == 0) {
          uVar14 = (undefined7)((ulonglong)unaff_RDI >> 8);
          bVar1 = true;
          goto LAB_015120f3;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar5 = *(longlong *)(unaff_RDI + 0x50);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        unaff_RDI = lVar5;
      } while (*(longlong *)(lVar5 + 0x88) == 0);
      lVar6 = *(longlong *)(lVar5 + 0x88);
    }
    else {
      lVar6 = *(longlong *)(unaff_RDI + 0x88);
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
                local_58 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
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
// @0151a240 — 1242 bytes
// ============================================================

void FUN_0151a240(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_d0 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    local_40 = '\0';
    local_48 = 0;
    local_80 = 0xffffffff;
    plVar5 = (longlong *)FUN_010eca10();
    (**(code **)(*plVar5 + 0x18))();
    local_a8 = plVar5;
    if (*(longlong *)(unaff_RDI + 0x88) == 0) {
      local_38 = 0;
      lVar6 = unaff_RDI;
      do {
        lVar2 = *(longlong *)(lVar6 + 0x50);
        lVar1 = local_38;
        if (lVar2 == 0) goto LAB_0151a340;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar2 = *(longlong *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar2;
      } while (*(longlong *)(lVar6 + 0x88) == 0);
      lVar1 = *(longlong *)(lVar6 + 0x88);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x88);
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
LAB_0151a340:
    while( true ) {
      local_38 = lVar1;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = param_2;
      cVar3 = FUN_01252960(param_2,unaff_RSI,&local_48,&local_b8);
      if (cVar3 == '\0') break;
      lVar1 = local_38;
      if (local_48 != 0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531ce0();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531d40();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01531da0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          local_50 = '\0';
          local_58 = (longlong *)0x0;
          local_7c = 0xffffffff;
          cVar3 = '\0';
          plVar5 = (longlong *)0x0;
LAB_0151a4e4:
          do {
            plVar8 = plVar5;
LAB_0151a500:
            do {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              param_1 = local_b0;
              cVar4 = FUN_01252960(local_b0,local_b8,&local_58,local_d0);
              if (cVar4 == '\0') {
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0151a666;
              }
            } while (local_58 == (longlong *)0x0);
            if ((plVar8 != (longlong *)0x0) && (local_58 != plVar8)) {
              local_a0 = local_58;
              local_98 = '\0';
              cVar4 = (**(code **)(*plVar8 + 0x50))();
              if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_0151a500;
            }
            cVar4 = local_50;
            plVar5 = local_58;
            if (local_58 != plVar8) {
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              bVar9 = cVar3 != '\0';
              cVar3 = cVar4;
              if ((bVar9) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0151a4e4;
            }
            if ((local_50 == '\0') || (cVar3 != '\0' || plVar8 == (longlong *)0x0))
            goto LAB_0151a500;
            FUN_00d50b00();
            cVar3 = '\x01';
            plVar5 = plVar8;
          } while( true );
        }
        plVar8 = (longlong *)0x0;
        cVar3 = '\0';
LAB_0151a666:
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = '\0';
        local_90 = plVar8;
        FUN_01531df0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = local_38;
        if ((cVar3 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
          lVar1 = local_38;
        }
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @0150f7e0 — 1229 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150fbd3) */
/* WARNING: Removing unreachable block (ram,0x0150fbdc) */
/* WARNING: Removing unreachable block (ram,0x0150f894) */
/* WARNING: Removing unreachable block (ram,0x0150f8c0) */
/* WARNING: Removing unreachable block (ram,0x0150f896) */
/* WARNING: Removing unreachable block (ram,0x0150f8c2) */

void FUN_0150f7e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  int iVar8;
  longlong local_80;
  char local_78;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar3 = local_58;
  if (*(char *)((longlong)unaff_RDI + 0xa2) != '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 0;
    (**(code **)(*unaff_RDI + 0x380))();
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
      lVar2 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      lVar6 = *(longlong *)(lVar3 + 0x10);
      local_58 = *(longlong *)(lVar6 + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      if (local_68 == (longlong *)0x0) {
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
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
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
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0150fbf0;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_0150fbf0:
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar7 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
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
  lVar3 = unaff_RDI[9];
  if (lVar3 != 0) {
    for (iVar8 = 0; iVar8 < *(int *)(lVar3 + 0xc); iVar8 = iVar8 + 1) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
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
// @015104e0 — 1151 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01510958) */
/* WARNING: Removing unreachable block (ram,0x01510965) */

void FUN_015104e0(void)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  code *local_98;
  longlong local_90;
  char local_88;
  undefined4 local_7c;
  longlong local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RDI + 0x80) != 0) && (*(longlong *)(unaff_RDI + 0x78) != 0)) {
    if (*(longlong *)(unaff_RDI + 0x90) == 0) {
      FUN_00d64850();
      plVar2 = (longlong *)FUN_0151fdc0();
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = *(longlong *)(unaff_RDI + 0x90);
      *(longlong **)(unaff_RDI + 0x90) = plVar2;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    local_70 = '\0';
    local_78 = 0;
    local_7c = 0xffffffff;
    local_98 = DAT_025fee30;
    local_a0 = &DAT_025fee18;
    pcVar5 = DAT_025fee30;
    while( true ) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      pcVar5 = (code *)FUN_00e7bdb0();
      cVar1 = FUN_01252960(pcVar5,uVar4,&local_78,&local_b0);
      pVar7 = (pthread_key_t)pcVar5;
      if (cVar1 == '\0') break;
      if (local_78 != 0) {
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar2[10] = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        *(undefined4 *)(plVar2 + 9) = 0;
        *plVar2 = (longlong)local_a0;
        *(undefined8 *)((longlong)plVar2 + 0x6c) = 0;
        plVar2[0xb] = 0;
        plVar2[0xc] = 0;
        *(undefined2 *)(plVar2 + 0xd) = 0;
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
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0173b720();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_015220b0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        plVar8 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar8 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
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
  *(undefined1 *)(unaff_RDI + 0xa1) = 1;
  return;
}




// ============================================================
// @001570d0 — 1117 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00157329) */
/* WARNING: Removing unreachable block (ram,0x0015732e) */
/* WARNING: Removing unreachable block (ram,0x00157337) */
/* WARNING: Removing unreachable block (ram,0x0015734e) */
/* WARNING: Removing unreachable block (ram,0x00157352) */
/* WARNING: Removing unreachable block (ram,0x001574b3) */
/* WARNING: Removing unreachable block (ram,0x001574bc) */
/* WARNING: Removing unreachable block (ram,0x00157203) */
/* WARNING: Removing unreachable block (ram,0x0015720c) */
/* WARNING: Removing unreachable block (ram,0x00157153) */
/* WARNING: Removing unreachable block (ram,0x00157170) */
/* WARNING: Removing unreachable block (ram,0x00157155) */
/* WARNING: Removing unreachable block (ram,0x00157172) */
/* WARNING: Removing unreachable block (ram,0x00157279) */

int FUN_001570d0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong lVar9;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_90;
  char local_88;
  int local_68;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar9 = *unaff_RDI;
  if (*(int *)(lVar9 + 0xc) != 0) {
    if (unaff_ESI == -1) {
      return *(int *)(lVar9 + 0xc) + -1;
    }
    local_68 = -1;
    local_38 = 0;
    iVar3 = -1;
    bVar1 = false;
    while( true ) {
      lVar4 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar9 + 0xc) <= local_68) break;
      lVar8 = *(longlong *)(lVar9 + 0x10);
      lVar4 = *(longlong *)(lVar8 + 8 + lVar4 * 8);
      FUN_00517fa0();
      pVar7 = (pthread_key_t)lVar8;
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
          lVar8 = *(longlong *)((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
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
    pVar7 = (pthread_key_t)lVar9;
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
// @0150bf50 — 1109 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150c2a9) */
/* WARNING: Removing unreachable block (ram,0x0150c0d4) */
/* WARNING: Removing unreachable block (ram,0x0150c0dd) */
/* WARNING: Removing unreachable block (ram,0x0150c2f2) */
/* WARNING: Removing unreachable block (ram,0x0150c2fb) */

void FUN_0150bf50(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    if (*(longlong *)(unaff_RDI + 0x80) == 0) {
      plVar1 = (longlong *)FUN_00e8fc40();
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
    pVar6 = (pthread_key_t)uVar4;
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
    plVar1 = (longlong *)*unaff_RSI;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (longlong *)*unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_0124ae40();
    if (*(longlong *)(unaff_RDI + 0x78) == 0) {
      plVar1 = (longlong *)FUN_00e8fc40();
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
    plVar1 = (longlong *)*unaff_RSI;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (longlong *)*unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_018232c0();
  }
  return;
}




// ============================================================
// @0151a950 — 1105 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0151ac02) */
/* WARNING: Removing unreachable block (ram,0x0151ac0b) */
/* WARNING: Removing unreachable block (ram,0x0151aa7a) */
/* WARNING: Removing unreachable block (ram,0x0151aa7f) */
/* WARNING: Removing unreachable block (ram,0x0151ad47) */
/* WARNING: Removing unreachable block (ram,0x0151ad50) */
/* WARNING: Removing unreachable block (ram,0x0151abb0) */
/* WARNING: Removing unreachable block (ram,0x0151abb9) */
/* WARNING: Removing unreachable block (ram,0x0151aa0a) */
/* WARNING: Removing unreachable block (ram,0x0151aa13) */
/* WARNING: Removing unreachable block (ram,0x0151ac57) */
/* WARNING: Removing unreachable block (ram,0x0151ac60) */

undefined8 * FUN_0151a950(void)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar8;
  longlong local_90;
  char local_88;
  longlong in_stack_ffffffffffffff98;
  char local_60;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar7 == 0) {
    if (*(longlong *)(unaff_RSI + 0x58) != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
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
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
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
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      lVar7 = *(longlong *)(unaff_RSI + 0x50);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0151a950();
    if (unaff_RSI != 0) {
      FUN_00d50b00();
      puVar5 = (undefined *)(longlong)iVar1;
      for (iVar8 = 0; iVar8 < *(int *)(unaff_RSI + 0xc); iVar8 = iVar8 + 1) {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if (iVar1 < *(int *)(local_40 + 0xc)) {
          local_40 = *(longlong *)(*(longlong *)(local_40 + 0x10) + (longlong)puVar5 * 8);
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
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @013234b0 — 1078 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01323822) */
/* WARNING: Removing unreachable block (ram,0x0132382b) */
/* WARNING: Removing unreachable block (ram,0x013236c2) */
/* WARNING: Removing unreachable block (ram,0x013236cb) */
/* WARNING: Removing unreachable block (ram,0x01323562) */
/* WARNING: Removing unreachable block (ram,0x0132356e) */
/* WARNING: Removing unreachable block (ram,0x01323612) */
/* WARNING: Removing unreachable block (ram,0x0132361b) */
/* WARNING: Removing unreachable block (ram,0x01323772) */
/* WARNING: Removing unreachable block (ram,0x0132377b) */
/* WARNING: Removing unreachable block (ram,0x013238d2) */
/* WARNING: Removing unreachable block (ram,0x013238db) */

void FUN_013234b0(longlong param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[8] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df660();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[8] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x19] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x19] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x1a] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x1a] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x1d] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x1d] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x20] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x20] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x1c] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x1c] + 0xc);
    } while (lVar3 < param_1);
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0xffffffff;
  if (unaff_RDI[0x32] != 0) {
    FUN_00e83070();
    unaff_RDI[0x32] = 0;
  }
  FUN_00e8b7e0();
  return;
}




// ============================================================
// @01519e20 — 954 bytes
// ============================================================

void FUN_01519e20(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 in_CL;
  ulonglong in_RDX;
  char *pcVar4;
  uint unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong local_a0;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  double local_78;
  double local_70;
  double local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
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
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_01653910();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01653920();
  FUN_00e7b500(local_40);
  lVar1 = *unaff_RDI;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_01653910();
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RDX);
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
            in_RDX = (ulonglong)local_44;
            FUN_015189a0(local_40,local_68,in_CL,local_50);
          }
          else {
            if (local_40 < dVar7) {
              in_RDX = (ulonglong)local_44;
              local_40 = dVar7;
              FUN_015189a0(in_RDX,dVar7,in_CL,local_50,uVar2,0);
              dVar7 = local_40;
            }
            if (dVar7 + dVar6 < local_68) {
              in_RDX = (ulonglong)local_44;
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
// @0151b0b0 — 900 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0151b1a0) */
/* WARNING: Removing unreachable block (ram,0x0151b353) */
/* WARNING: Removing unreachable block (ram,0x0151b35c) */
/* WARNING: Removing unreachable block (ram,0x0151b178) */

void FUN_0151b0b0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  int iVar6;
  longlong *local_68;
  char local_60;
  longlong local_58;
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
      lVar2 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar3 + 0x10));
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
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
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
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0151b370;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_0151b370:
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar5 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
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
  lVar3 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar3 != 0) {
    for (iVar6 = 0; iVar6 < *(int *)(lVar3 + 0xc); iVar6 = iVar6 + 1) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
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
// @01514120 — 852 bytes
// ============================================================

ulonglong FUN_01514120(double param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  pthread_key_t in_ECX;
  ulonglong unaff_RSI;
  int unaff_EDI;
  undefined8 uVar3;
  double dVar4;
  
  if (unaff_RSI >> 0x20 == 0) {
    return unaff_RSI;
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
// @00154c40 — 760 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00154ce9) */
/* WARNING: Removing unreachable block (ram,0x00154cf5) */
/* WARNING: Removing unreachable block (ram,0x00154de3) */
/* WARNING: Removing unreachable block (ram,0x00154dec) */
/* WARNING: Removing unreachable block (ram,0x00154e27) */
/* WARNING: Removing unreachable block (ram,0x00154e50) */
/* WARNING: Removing unreachable block (ram,0x00154e29) */
/* WARNING: Removing unreachable block (ram,0x00154e52) */

void FUN_00154c40(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  pthread_key_t pVar5;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00155070();
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
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
            lVar4 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar1 = *(longlong *)(lVar2 + 0x10);
            local_58 = *(longlong *)(lVar1 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar1);
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
// @00151f70 — 715 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00152177) */
/* WARNING: Removing unreachable block (ram,0x00152184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00151f70(float param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar18;
  undefined1 auVar15 [16];
  float fVar19;
  undefined4 uVar20;
  longlong local_48;
  char local_40;
  longlong local_30;
  char local_28;
  
  fVar16 = (float)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  fVar13 = fVar12;
  (**(code **)(*unaff_RDI + 0x4d8))();
  (**(code **)(*unaff_RDI + 0x958))();
  bVar5 = true;
  if (local_30 == 0) {
    (**(code **)(*unaff_RDI + 0x938))();
    bVar5 = local_48 != 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    (**(code **)(*unaff_RDI + 0x948))();
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
    fVar14 = *(float *)((longlong)unaff_RDI + 0x15c) * (float)dVar1;
    fVar17 = 0.0;
    uVar18 = 0;
    FUN_01e3f820();
    if (param_1 <= DAT_02390124) {
      if (param_1 < DAT_02390124) {
        fVar14 = fVar14 / _DAT_023942ac;
      }
    }
    else {
      fVar14 = fVar14 * _DAT_023942ac;
    }
    fVar6 = fVar17 / DAT_023941e0;
    fVar19 = fVar17;
    uVar20 = uVar18;
    if (fVar12 <= DAT_02390124) {
      fVar7 = fVar6;
      if (fVar12 < DAT_02390124) {
        if (DAT_02390d34 <= fVar6) {
          fVar7 = fVar6 + DAT_02390d00;
        }
        else {
          fVar7 = DAT_0239011c;
          fVar19 = 0.0;
          uVar20 = 0;
        }
      }
    }
    else {
      fVar7 = DAT_02390124;
      fVar19 = 0.0;
      uVar20 = 0;
      if (DAT_02390124 <= fVar6) {
        fVar7 = fVar6 + DAT_02390124;
        fVar19 = fVar17;
        uVar20 = uVar18;
      }
    }
    *(float *)((longlong)unaff_RDI + 0x15c) = fVar14 / (float)dVar1;
    FUN_00d50b20();
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = uVar20;
    auVar3._12_4_ = uVar20;
    auVar10._4_12_ = auVar3._4_12_;
    auVar10._0_4_ = fVar7 * DAT_023941e0;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dd;
    auVar15 = insertps(auVar2,auVar10,0x10);
    param_1 = *(float *)((longlong)unaff_RDI + 0x15c);
  }
  else {
    param_1 = param_1 * *(float *)((longlong)unaff_RDI + 0x15c);
    *(float *)((longlong)unaff_RDI + 0x15c) = param_1;
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
  auVar11._0_4_ = (float)(double)unaff_RDI[0x2d] * param_1 + DAT_02390110;
  auVar11._4_4_ = (int)((ulonglong)unaff_RDI[0x2d] >> 0x20);
  auVar11._8_8_ = 0;
  auVar15 = blendps(auVar11,auVar15,0xe);
  (**(code **)(*unaff_RDI + 0x4e8))(auVar15._0_8_);
  (**(code **)(*unaff_RDI + 0x988))();
  if (unaff_RDI[0x2a] != 0) {
    unaff_RDI[0x2a] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}




// ============================================================
// @01512890 — 666 bytes
// ============================================================

uint FUN_01512890(pthread_key_t param_1)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar4 + 0x88) == 0) {
    do {
      lVar3 = *(longlong *)(lVar4 + 0x50);
      if (lVar3 == 0) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)(lVar4 + 0x50);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
      }
      lVar4 = lVar3;
    } while (*(longlong *)(lVar3 + 0x88) == 0);
    lVar4 = *(longlong *)(lVar3 + 0x88);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x88);
  }
  if (lVar4 == 0) {
    return 0;
  }
  FUN_00d50b00();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = *(longlong *)(unaff_RDI + 0x88);
  }
  else {
    lVar4 = *(longlong *)(unaff_RDI + 0x88);
  }
  if (lVar4 == 0) {
    do {
      lVar4 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar4 == 0) {
        local_50 = 0;
        goto LAB_01512a5a;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar4 = *(longlong *)(unaff_RDI + 0x50);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      unaff_RDI = lVar4;
    } while (*(longlong *)(lVar4 + 0x88) == 0);
    local_50 = *(longlong *)(lVar4 + 0x88);
  }
  else {
    local_50 = *(longlong *)(unaff_RDI + 0x88);
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
// @00507310 — 654 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507310(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  double dVar5;
  undefined8 uVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026f6fd0;
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    if (DAT_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    dVar5 = (double)FUN_00e7d6f0();
    uVar4 = (ulonglong)(dVar5 * DAT_023907c0);
    dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
    uVar6 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar5 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
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
      lVar2 = DAT_02709e60;
      if (lVar1 == 0) {
        if (DAT_02709e60 != 0) {
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
// @0150ec20 — 649 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150ee1a) */
/* WARNING: Removing unreachable block (ram,0x0150ee23) */
/* WARNING: Removing unreachable block (ram,0x0150ed99) */
/* WARNING: Removing unreachable block (ram,0x0150eda2) */
/* WARNING: Removing unreachable block (ram,0x0150ed13) */
/* WARNING: Removing unreachable block (ram,0x0150ed1c) */
/* WARNING: Removing unreachable block (ram,0x0150ee75) */
/* WARNING: Removing unreachable block (ram,0x0150ee7e) */

void FUN_0150ec20(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RSI;
  int iVar3;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
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




// ============================================================
// @013231f0 — 647 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013231f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_00e8b7a0();
  uVar4 = _UNK_0240d41c;
  uVar3 = _UNK_0240d418;
  uVar2 = _UNK_0240d414;
  *(undefined4 *)(unaff_RDI + 0x78) = _DAT_0240d410;
  *(undefined4 *)(unaff_RDI + 0x7c) = uVar2;
  *(undefined4 *)(unaff_RDI + 0x80) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x84) = uVar4;
  *(undefined4 *)(unaff_RDI + 0x94) = 4;
  *(undefined1 *)(unaff_RDI + 0x1a9) = 0;
  *(undefined2 *)(unaff_RDI + 0x171) = 0x100;
  *(undefined1 *)(unaff_RDI + 0x130) = 1;
  *(undefined4 *)(unaff_RDI + 0x180) = 0xffffffff;
  *(undefined8 *)(unaff_RDI + 0x70) = 0x4628c00044960000;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = (pthread_key_t)&DAT_025f0698;
  *puVar5 = &DAT_025f0698;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  (*DAT_025f06b0)();
  lVar1 = *(longlong *)(unaff_RDI + 0x138);
  *(undefined8 **)(unaff_RDI + 0x138) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x21c) = 0;
  *(undefined8 *)(unaff_RDI + 0x8c) = 0x3ccccccd3f000000;
  FUN_016c0a70();
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  lVar8 = lVar1;
  if (lVar1 == local_30) goto LAB_01323327;
  lVar8 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar8 = 0;
      goto LAB_013232e5;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    *(longlong *)(unaff_RDI + 0x58) = local_30;
  }
  else {
    local_28 = '\0';
LAB_013232e5:
    *(longlong *)(unaff_RDI + 0x58) = lVar8;
  }
  pVar9 = (pthread_key_t)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_30;
  }
LAB_01323327:
  if ((local_28 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  *(longlong **)(unaff_RDI + 0x68) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  *(longlong **)(unaff_RDI + 0x60) = plVar6;
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
  *(undefined1 *)(unaff_RDI + 0x1aa) = 0;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025eec60;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  (*DAT_025eec78)();
  lVar1 = *(longlong *)(unaff_RDI + 0x150);
  *(undefined8 **)(unaff_RDI + 0x150) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00153100 — 602 bytes
// str: ""%p::_pitchSystem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0015313b) */
/* WARNING: Removing unreachable block (ram,0x00153147) */
/* WARNING: Removing unreachable block (ram,0x00153343) */
/* WARNING: Removing unreachable block (ram,0x00153350) */

void FUN_00153100(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_38;
  char local_30;
  
  FUN_00d61ea0();
  lVar2 = DAT_027e3c40;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e3c40;
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027e3c40 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_78);
    puVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
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
    if (puVar3 != (undefined8 *)0x0) {
      local_50 = 1;
      local_58 = &DAT_024c5048;
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40(param_1,&local_58);
      if (local_30 == '\0') {
        if (local_38 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_58 = &DAT_024c5048;
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
      local_68 = puVar3;
      local_60 = '\0';
      local_58 = local_38;
      local_50 = local_50 & 0xffffff00;
      FUN_00ca0840(param_1,&local_58);
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00504770 — 580 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00504988) */
/* WARNING: Removing unreachable block (ram,0x00504991) */

void FUN_00504770(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  *(int *)(unaff_RDI + 0x220) = unaff_ESI;
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (longlong *)0x0) {
LAB_005047c9:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_005047c9;
  }
  plVar1 = *pplVar6;
  local_38[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (longlong **)local_38;
  if (local_38[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(undefined1 *)pplVar5 = 0;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  iVar3 = FUN_01b18580();
  if ((iVar3 == 0) || (-1 < unaff_ESI)) {
    if (unaff_ESI == 0) {
      FUN_01d9aea0();
      plVar1 = local_48;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01d9aea0();
        plVar1 = local_48;
        if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d9ade0();
        FUN_00d50130();
        if (plVar1 != (longlong *)0x0) {
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
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar4 = &DAT_024dc470;
    puVar4[2] = &DAT_024dcdc0;
    puVar4[0x27] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    (*DAT_024dc488)();
    FUN_01d9ade0();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01d9aea0();
  FUN_002ba3c0();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_005048ee:
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0150f500 — 566 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150f623) */
/* WARNING: Removing unreachable block (ram,0x0150f62c) */

void FUN_0150f500(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  longlong *plVar3;
  int iVar4;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  if (*(char *)((longlong)unaff_RDI + 0xa1) != '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0xa1) = 0;
    (**(code **)(*unaff_RDI + 0x380))();
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
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0150f640;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_0150f640:
        pvVar2 = _pthread_getspecific(param_1);
        plVar3 = local_68;
        if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
          plVar3 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar1 + 0x154) & 1) + 4];
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
  lVar1 = unaff_RDI[9];
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
// @01510b20 — 529 bytes
// ============================================================

void FUN_01510b20(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = param_1;
  do {
    lVar2 = unaff_RSI;
    if ((*(longlong *)(lVar2 + 0x80) != 0) && (*(longlong *)(lVar2 + 0x78) != 0)) {
      if ((*(char *)(lVar2 + 0xa1) == '\0') &&
         (pvVar1 = _pthread_getspecific((pthread_key_t)uVar3), pvVar1 == (void *)0x0)) {
        FUN_015104e0();
      }
      if (*(longlong *)(lVar2 + 0x90) != 0) {
        if (param_2 >> 0x20 == 0) {
          pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
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
          pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
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
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
    }
    unaff_RSI = *(longlong *)(lVar2 + 0x50);
    if (unaff_RSI == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    pvVar1 = _pthread_getspecific((pthread_key_t)uVar3);
    if (pvVar1 != (void *)0x0) {
      unaff_RSI = *(longlong *)(lVar2 + 0x50);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        unaff_RSI = *(longlong *)(unaff_RSI + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
  } while( true );
}




// ============================================================
// @0150c530 — 504 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150c5de) */
/* WARNING: Removing unreachable block (ram,0x0150c5e7) */
/* WARNING: Removing unreachable block (ram,0x0150c6ca) */
/* WARNING: Removing unreachable block (ram,0x0150c6d3) */

longlong * FUN_0150c530(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  
  lVar3 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(*(longlong *)(unaff_RSI + 0x48) + 0xc) == 0) goto LAB_0150c6fb;
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
  lVar1 = *(longlong *)(unaff_RSI + 0x48);
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
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}



