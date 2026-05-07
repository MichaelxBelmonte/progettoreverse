// Reconstructed implementation of MUAudioSourceSibilantItem
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAudioSourceSibilantItem.h"

// ============================================================
// @01278f90 — 11313 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01279392) */
/* WARNING: Removing unreachable block (ram,0x0127a5d0) */
/* WARNING: Removing unreachable block (ram,0x0127a5dd) */
/* WARNING: Removing unreachable block (ram,0x0127a5ea) */
/* WARNING: Removing unreachable block (ram,0x0127a613) */
/* WARNING: Removing unreachable block (ram,0x0127a648) */
/* WARNING: Removing unreachable block (ram,0x0127a651) */
/* WARNING: Removing unreachable block (ram,0x0127a66c) */
/* WARNING: Removing unreachable block (ram,0x0127a679) */
/* WARNING: Removing unreachable block (ram,0x0127a686) */
/* WARNING: Removing unreachable block (ram,0x0127a6a1) */
/* WARNING: Removing unreachable block (ram,0x0127a6da) */
/* WARNING: Removing unreachable block (ram,0x0127a6e7) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01278f90(undefined4 param_1,ulonglong param_2)

{
  undefined8 *****pppppuVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *puVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  undefined7 uVar18;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  undefined8 *******pppppppuVar17;
  pthread_key_t pVar19;
  undefined8 *******pppppppuVar20;
  int iVar21;
  int iVar22;
  undefined8 unaff_RSI;
  undefined8 ******ppppppuVar23;
  longlong *unaff_RDI;
  char cVar24;
  undefined8 *****pppppuVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  uint uVar28;
  char cVar29;
  undefined8 *puVar30;
  bool bVar31;
  undefined8 ******ppppppuVar32;
  double dVar33;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 *****local_1b8;
  undefined1 local_1b0;
  undefined8 *******local_1a8;
  undefined1 local_1a0;
  undefined8 *******local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  undefined8 *******local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  undefined8 local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 ******local_118;
  undefined8 *******local_110;
  undefined4 local_104;
  undefined8 ******local_100;
  undefined8 *******local_d8;
  undefined8 ******local_d0;
  undefined8 *******local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 *******local_b0;
  undefined8 *******local_a8;
  undefined8 ******local_a0;
  double local_98;
  undefined8 *****local_90;
  undefined8 *******local_88;
  undefined8 *local_80;
  undefined8 *******local_78;
  undefined8 *local_68;
  char local_60 [8];
  undefined8 *******local_58;
  undefined8 *******local_50;
  undefined8 *******local_48;
  uint local_3c;
  undefined8 *******local_38;
  
  local_110 = (undefined8 *******)CONCAT44(local_110._4_4_,param_1);
  local_130 = param_2;
  local_128 = FUN_00e7bcc0();
  local_80 = (undefined8 *)0x0;
  local_48 = (undefined8 *******)0x0;
  local_78 = (undefined8 *******)0x0;
  local_58 = (undefined8 *******)0x0;
  local_50 = (undefined8 *******)0x0;
  local_38 = (undefined8 *******)0x0;
  local_158 = FUN_00e7bcc0();
  iVar21 = (int)unaff_RSI;
  if (iVar21 == 0) {
    cVar7 = '\0';
    local_48 = (undefined8 *******)0x0;
    bVar3 = false;
    local_78 = (undefined8 *******)0x0;
    cVar24 = '\0';
    pppppppuVar20 = (undefined8 *******)0x0;
    local_50 = (undefined8 *******)0x0;
    local_38 = (undefined8 *******)0x0;
    cVar29 = '\0';
    pppppuVar25 = (undefined8 *****)0x0;
    bVar2 = false;
    local_b0 = (undefined8 *******)0x0;
    goto LAB_0127bbcf;
  }
  if (param_2 >> 0x20 == 0) {
    local_d8 = (undefined8 *******)CONCAT44(local_d8._4_4_,1);
    FUN_00e7c240();
  }
  local_150 = *unaff_RDI;
  local_148 = '\0';
  FUN_00243390();
  pppppppuVar20 = (undefined8 *******)*unaff_RDI;
  if (pppppppuVar20 == local_d8) {
    if (((char)unaff_RDI[1] != '\0') || (local_d8 == (undefined8 *******)0x0)) goto LAB_0127916f;
    if ((char)local_d0 == '\0') {
      FUN_00d50b00();
      goto LAB_0127916b;
    }
LAB_0127912e:
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_d0._0_1_ = '\0';
  }
  else {
    lVar15 = unaff_RDI[1];
    if ((char)local_d0 != '\0') {
      *unaff_RDI = (longlong)local_d8;
      if (((char)lVar15 != '\0') && (pppppppuVar20 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0127912e;
    }
    if (local_d8 != (undefined8 *******)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)local_d8;
    if (((char)lVar15 != '\0') && (pppppppuVar20 != (undefined8 *******)0x0)) {
      FUN_00d50b20();
    }
LAB_0127916b:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_0127916f:
    if (((char)local_d0 != '\0') && (local_d8 != (undefined8 *******)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar26 = (undefined8 *)0x0;
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  lVar15 = *unaff_RDI;
  uVar28 = *(uint *)(lVar15 + 0xc);
  puVar30 = (undefined8 *)(ulonglong)uVar28;
  if (0 < (int)uVar28) {
    puVar26 = &DAT_02802558;
    while( true ) {
      uVar28 = uVar28 - 1;
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)uVar28 * 8);
      pvVar9 = _pthread_getspecific(uVar28);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar15 = *(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      if (*(longlong *)(lVar15 + 200) == 0) {
        FUN_00d23620();
      }
      else {
        FUN_00d50b00();
        FUN_00d50b20();
      }
      if ((longlong)puVar30 < 2) break;
      puVar30 = (undefined8 *)((longlong)puVar30 + -1);
      lVar15 = *unaff_RDI;
    }
  }
  FUN_01271180();
  local_b0 = local_d8;
  uVar18 = (undefined7)((ulonglong)local_d8 >> 8);
  if (local_d8 == (undefined8 *******)0x0) {
    local_104 = 1;
    local_120 = 0;
    bVar2 = false;
    local_b0 = (undefined8 *******)0x0;
    if ((int)MACH_HEADER.filetype < 1) goto LAB_012792e2;
LAB_012793ed:
    ppppppuVar23 = (undefined8 ******)0x0;
    puVar30 = &DAT_02802558;
    local_90 = (undefined8 *****)0x0;
    local_3c = 0;
    local_38 = (undefined8 *******)0x0;
    local_50 = (undefined8 *******)0x0;
    local_88 = (undefined8 *******)0x0;
    local_68 = (undefined8 *)0x0;
    local_78 = (undefined8 *******)0x0;
    bVar3 = false;
    local_48 = (undefined8 *******)0x0;
    local_80 = (undefined8 *)0x0;
    do {
      ppppppuVar12 = local_b0[2];
      pppppuVar25 = ppppppuVar12[(longlong)ppppppuVar23];
      local_118 = ppppppuVar23;
      if (local_90 == pppppuVar25) {
        if (((char)local_3c == '\0') && (local_90 != (undefined8 *****)0x0)) {
          local_3c = (uint)CONCAT71((int7)((ulonglong)ppppppuVar12 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pppppuVar25 != (undefined8 *****)0x0) {
          ppppppuVar12 = (undefined8 ******)FUN_00d50b00();
        }
        if (((char)local_3c == '\0') || (local_90 == (undefined8 *****)0x0)) {
          local_3c = (uint)CONCAT71((int7)((ulonglong)ppppppuVar12 >> 8),1);
          local_90 = pppppuVar25;
        }
        else {
          local_90 = pppppuVar25;
          uVar13 = FUN_00d50b20();
          local_3c = (uint)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        }
      }
      FUN_00d23310();
      local_a8 = (undefined8 *******)CONCAT71(local_a8._1_7_,(char)local_d0);
      pppppppuVar11 = &local_a8;
      pppppppuVar14 = &local_d0;
      if ((char)local_d0 == '\0') {
        pppppppuVar14 = pppppppuVar11;
      }
      *(undefined1 *)pppppppuVar14 = 0;
      if (((char)local_d0 != '\0') && (local_d8 != (undefined8 *******)0x0)) {
        pppppppuVar14 = (undefined8 *******)FUN_00d50b20();
      }
      pppppppuVar20 = local_38;
      pVar19 = (pthread_key_t)pppppppuVar11;
      if (local_d8 == local_38) {
        if (((char)local_50 == '\0') && (local_d8 != (undefined8 *******)0x0)) {
          pVar19 = (pthread_key_t)CONCAT71((int7)((ulonglong)pppppppuVar11 >> 8),1);
          local_98 = (double)CONCAT44(local_98._4_4_,pVar19);
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a8 == '\0') || (local_d8 == (undefined8 *******)0x0)) {
          local_98 = (double)CONCAT44(local_98._4_4_,(int)local_50);
        }
        else {
          FUN_00d50b20();
          local_98 = (double)CONCAT44(local_98._4_4_,(int)local_50);
          pppppppuVar20 = local_38;
        }
      }
      else {
        pppppppuVar20 = local_d8;
        if ((char)local_a8 == '\0') {
          if (local_d8 != (undefined8 *******)0x0) {
            pppppppuVar14 = (undefined8 *******)FUN_00d50b00();
          }
          local_98 = (double)CONCAT44(local_98._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)pppppppuVar14 >> 8),1));
          if (((char)local_50 != '\0') && (local_38 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98 = (double)CONCAT44(local_98._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)pppppppuVar14 >> 8),1));
          if (((char)local_50 != '\0') && (local_38 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
        ppppppuVar23 = pppppppuVar20[0x19];
      }
      else {
        ppppppuVar23 = (undefined8 ******)
                       pppppppuVar20[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
      }
      if (ppppppuVar23 != (undefined8 ******)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_0152ebe0();
      if (local_d8 == local_48) {
        if (((char)local_80 != '\0') || (local_d8 == (undefined8 *******)0x0)) {
          puVar26 = (undefined8 *)((ulonglong)local_80 & 0xffffffff);
          goto joined_r0x012797a0;
        }
        pppppppuVar11 = local_48;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
          pppppppuVar11 = local_48;
          goto joined_r0x01279b80;
        }
LAB_01279738:
        local_d0._0_1_ = '\0';
        puVar5 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        local_48 = pppppppuVar11;
      }
      else {
        if ((char)local_d0 != '\0') {
          pppppppuVar11 = local_d8;
          if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_01279738;
        }
        if (local_d8 != (undefined8 *******)0x0) {
          FUN_00d50b00();
        }
        pppppppuVar11 = local_d8;
        if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01279b80:
        puVar26 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar26 >> 8),1);
        local_48 = pppppppuVar11;
joined_r0x012797a0:
        puVar5 = puVar26;
        if (((char)local_d0 != '\0') && (local_d8 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
      }
      local_80 = puVar5;
      if (ppppppuVar23 != (undefined8 ******)0x0) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
        if (pppppppuVar20[0x20] == (undefined8 ******)0x0) goto LAB_0127982a;
LAB_0127984f:
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      else {
        if (pppppppuVar20[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x20] !=
            (undefined8 *****)0x0) goto LAB_0127984f;
LAB_0127982a:
        local_a0._0_1_ = '\0';
        local_a8 = (undefined8 *******)0x0;
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_d8 == local_78) {
        if ((bVar3) || (local_d8 == (undefined8 *******)0x0)) goto joined_r0x012799a6;
        pppppppuVar11 = local_78;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
          pppppppuVar11 = local_78;
          goto joined_r0x01279bc0;
        }
LAB_0127992f:
        local_d0._0_1_ = '\0';
        bVar3 = true;
        local_78 = pppppppuVar11;
      }
      else {
        if ((char)local_d0 != '\0') {
          pppppppuVar11 = local_d8;
          if ((bVar3) && (local_78 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0127992f;
        }
        if (local_d8 != (undefined8 *******)0x0) {
          FUN_00d50b00();
        }
        pppppppuVar11 = local_d8;
        if ((bVar3) && (local_78 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01279bc0:
        bVar3 = true;
        local_78 = pppppppuVar11;
joined_r0x012799a6:
        if (((char)local_d0 != '\0') && (local_d8 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_a0 != '\0') && (local_a8 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      if (iVar21 < 0) {
        pvVar9 = _pthread_getspecific(pVar19);
        if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          ppppppuVar23 = pppppppuVar20[0x15];
        }
        else {
          ppppppuVar23 = (undefined8 ******)
                         pppppppuVar20[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x15];
        }
        if (ppppppuVar23 != (undefined8 ******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar9 = _pthread_getspecific(pVar19);
          if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
            ppppppuVar23 = pppppppuVar20[0x15];
          }
          else {
            ppppppuVar23 = (undefined8 ******)
                           pppppppuVar20[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x15];
          }
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          pppppppuVar14 = local_88;
          local_58 = local_d8;
          uVar18 = (undefined7)((ulonglong)puVar26 >> 8);
          pppppppuVar11 = local_d8;
          if (local_d8 == local_88) {
            bVar31 = (char)local_68 != '\0';
            if ((bVar31) || (local_d8 == (undefined8 *******)0x0)) goto joined_r0x01279c3f;
            if ((char)local_d0 != '\0') {
              local_58 = local_88;
              goto LAB_01279b66;
            }
            local_68 = (undefined8 *)CONCAT71(uVar18,1);
            FUN_00d50b00();
            local_58 = pppppppuVar14;
            if ((char)local_d0 == '\0') goto LAB_01279c70;
LAB_01279c5f:
            if (local_d8 != (undefined8 *******)0x0) {
              FUN_00d50b20();
            }
          }
          else if ((char)local_d0 == '\0') {
            if (local_d8 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
            puVar26 = (undefined8 *)CONCAT71(uVar18,1);
            bVar31 = (char)local_68 != '\0';
            pppppppuVar14 = local_58;
            local_68 = puVar26;
            if ((bVar31) && (local_88 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
              pppppppuVar14 = local_58;
            }
joined_r0x01279c3f:
            local_58 = pppppppuVar14;
            if ((char)local_d0 != '\0') goto LAB_01279c5f;
          }
          else {
            if (((char)local_68 != '\0') && (local_88 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
LAB_01279b66:
            local_d0._0_1_ = '\0';
            local_68 = (undefined8 *)CONCAT71(uVar18,1);
          }
LAB_01279c70:
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b20();
          }
          local_50 = (undefined8 *******)((ulonglong)local_98 & 0xffffffff);
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar14 = local_58;
          if (pvVar9 != (void *)0x0) {
            local_50 = (undefined8 *******)((ulonglong)local_98 & 0xffffffff);
            lVar15 = FUN_00e8b990();
            pppppppuVar14 = local_58;
            if (lVar15 != 0) {
              pppppppuVar14 =
                   (undefined8 *******)local_58[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              pppppppuVar11 = local_58;
            }
          }
          ppppppuVar23 = pppppppuVar14[0x1e];
          local_50 = (undefined8 *******)((ulonglong)local_98 & 0xffffffff);
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar14 = local_58;
          if (pvVar9 != (void *)0x0) {
            local_50 = (undefined8 *******)((ulonglong)local_98 & 0xffffffff);
            lVar15 = FUN_00e8b990();
            pppppppuVar14 = local_58;
            if (lVar15 != 0) {
              pppppppuVar11 = local_58;
              pppppppuVar14 =
                   (undefined8 *******)local_58[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          if (iVar21 != 0) {
            ppppppuVar32 = (undefined8 ******)
                           ((double)pppppppuVar14[0x28] + DAT_02391030 + DAT_02391030);
            ppppppuVar12 = DAT_0241b6a8;
            if ((double)DAT_0241b6a8 <= (double)ppppppuVar32) {
              ppppppuVar12 = ppppppuVar32;
            }
            ppppppuVar32 = pppppppuVar14[0x1e];
            if ((double)ppppppuVar12 <= (double)pppppppuVar14[0x1e]) {
              ppppppuVar32 = ppppppuVar12;
            }
            do {
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              uVar13 = FUN_01507970();
              local_38 = (undefined8 *******)FUN_016c98e0(uVar13,0);
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              local_d8 = (undefined8 *******)FUN_01507970();
              uVar13 = FUN_00e7b820();
              dVar33 = (double)FUN_016c98e0(uVar13,0);
              if ((double)local_38 - dVar33 <= (double)ppppppuVar23 - (double)ppppppuVar32) break;
              local_a8 = (undefined8 *******)CONCAT44(local_a8._4_4_,1);
              local_d8 = (undefined8 *******)FUN_00e7c4f0();
              FUN_00e7b820();
            } while (iVar21 != 0);
          }
          local_88 = local_58;
        }
      }
      FUN_00d23340();
      local_a8 = (undefined8 *******)CONCAT71(local_a8._1_7_,(char)local_d0);
      pppppppuVar11 = &local_a8;
      pppppppuVar14 = &local_d0;
      if ((char)local_d0 == '\0') {
        pppppppuVar14 = pppppppuVar11;
      }
      *(undefined1 *)pppppppuVar14 = 0;
      if (((char)local_d0 != '\0') && (local_d8 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      local_38 = local_d8;
      if (local_d8 == pppppppuVar20) {
        pppppppuVar14 = pppppppuVar20;
        if ((local_98._0_1_ == '\0') && (local_d8 != (undefined8 *******)0x0)) {
          pppppppuVar11 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar11 >> 8),1);
          local_50 = pppppppuVar11;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a8 == '\0') || (local_d8 == (undefined8 *******)0x0)) {
          local_50 = (undefined8 *******)((ulonglong)local_98 & 0xffffffff);
        }
        else {
          FUN_00d50b20();
          local_50 = (undefined8 *******)((ulonglong)local_98 & 0xffffffff);
        }
      }
      else if ((char)local_a8 == '\0') {
        uVar13 = 0;
        if (local_d8 != (undefined8 *******)0x0) {
          uVar13 = FUN_00d50b00();
        }
        local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        pppppppuVar14 = local_38;
        if ((local_98._0_1_ != '\0') && (pppppppuVar20 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
          pppppppuVar14 = local_38;
        }
      }
      else {
        local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)local_d8 >> 8),1);
        pppppppuVar14 = local_38;
        if ((local_98._0_1_ != '\0') && (pppppppuVar20 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
          pppppppuVar14 = local_38;
        }
      }
      local_38 = pppppppuVar14;
      pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
      if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
        ppppppuVar23 = local_38[0x19];
      }
      else {
        ppppppuVar23 = (undefined8 ******)
                       local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
        pppppppuVar11 = local_38;
      }
      if (ppppppuVar23 != (undefined8 ******)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_0152ebe0();
      if (local_d8 == local_48) {
        if (((char)local_80 != '\0') || (local_d8 == (undefined8 *******)0x0)) {
          pppppppuVar20 = (undefined8 *******)((ulonglong)local_80 & 0xffffffff);
          goto joined_r0x0127a180;
        }
        pppppppuVar14 = local_48;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
          pppppppuVar14 = local_48;
          goto joined_r0x0127a313;
        }
LAB_0127a118:
        local_d0._0_1_ = '\0';
        local_80 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        local_48 = pppppppuVar14;
      }
      else {
        if ((char)local_d0 != '\0') {
          pppppppuVar14 = local_d8;
          if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_0127a118;
        }
        if (local_d8 != (undefined8 *******)0x0) {
          FUN_00d50b00();
        }
        pppppppuVar14 = local_d8;
        if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
joined_r0x0127a313:
        pppppppuVar20 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar20 >> 8),1);
        local_48 = pppppppuVar14;
joined_r0x0127a180:
        if (((char)local_d0 == '\0') || (local_d8 == (undefined8 *******)0x0)) {
          local_80 = (undefined8 *)((ulonglong)pppppppuVar20 & 0xffffffff);
        }
        else {
          FUN_00d50b20();
          local_80 = (undefined8 *)((ulonglong)pppppppuVar20 & 0xffffffff);
        }
      }
      if (ppppppuVar23 != (undefined8 ******)0x0) {
        FUN_00d50b20();
      }
      if (0 < iVar21) {
        pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
        if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          ppppppuVar23 = local_38[0x14];
        }
        else {
          ppppppuVar23 = (undefined8 ******)
                         local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x14];
          pppppppuVar11 = local_38;
        }
        if (ppppppuVar23 != (undefined8 ******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pppppppuVar20 = local_38;
          cVar7 = (char)local_68;
          if (local_88 == local_38) {
            if ((((char)local_50 == '\0') || (cVar7 != '\0')) ||
               (local_88 == (undefined8 *******)0x0)) {
              local_58 = local_88;
            }
            else {
              local_68 = (undefined8 *)(CONCAT71((int7)((ulonglong)local_88 >> 8),1) & 0xffffffff);
              local_58 = local_88;
              FUN_00d50b00();
            }
          }
          else {
            if (((char)local_50 != '\0') && (local_38 != (undefined8 *******)0x0)) {
              local_58 = local_88;
              FUN_00d50b00();
            }
            local_68 = (undefined8 *)((ulonglong)local_50 & 0xffffffff);
            local_58 = pppppppuVar20;
            if (cVar7 != '\0') {
              local_68 = (undefined8 *)((ulonglong)local_50 & 0xffffffff);
              if (local_88 != (undefined8 *******)0x0) {
                FUN_00d50b20();
                local_68 = (undefined8 *)((ulonglong)local_50 & 0xffffffff);
              }
            }
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar14 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar14 = local_58, lVar15 != 0)) {
            pppppppuVar14 =
                 (undefined8 *******)local_58[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            pppppppuVar11 = local_58;
          }
          pppppppuVar20 = local_38;
          local_88 = (undefined8 *******)pppppppuVar14[0x1e];
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar17 = local_38;
          pppppppuVar14 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = pppppppuVar17, pppppppuVar14 = local_58,
             lVar15 != 0)) {
            pppppppuVar11 = local_58;
            pppppppuVar14 =
                 (undefined8 *******)local_58[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          if (iVar21 != 0) {
            ppppppuVar12 = (undefined8 ******)
                           ((double)pppppppuVar14[0x28] + DAT_02391030 + DAT_02391030);
            ppppppuVar23 = DAT_0241b6a8;
            if ((double)DAT_0241b6a8 <= (double)ppppppuVar12) {
              ppppppuVar23 = ppppppuVar12;
            }
            ppppppuVar12 = pppppppuVar14[0x1e];
            if ((double)ppppppuVar23 <= (double)pppppppuVar14[0x1e]) {
              ppppppuVar12 = ppppppuVar23;
            }
            local_88 = (undefined8 *******)((double)local_88 - (double)ppppppuVar12);
            do {
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              uVar13 = FUN_01508610();
              local_98 = (double)FUN_016c98e0(uVar13,0);
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              local_d8 = (undefined8 *******)FUN_01508610();
              uVar13 = FUN_00e7b820();
              dVar33 = (double)FUN_016c98e0(uVar13,0);
              if (dVar33 - local_98 <= (double)local_88) break;
              local_a8 = (undefined8 *******)CONCAT44(local_a8._4_4_,1);
              local_d8 = (undefined8 *******)FUN_00e7c4f0();
              FUN_00e7b970();
            } while (iVar21 != 0);
          }
          local_88 = local_58;
        }
      }
      ppppppuVar23 = (undefined8 ******)((longlong)local_118 + 1);
      uVar8 = SUB84(local_68,0);
      puVar26 = local_68;
    } while ((longlong)ppppppuVar23 < (longlong)*(int *)((longlong)local_b0 + 0xc));
  }
  else {
    if ((char)local_d0 == '\0') {
      uVar13 = FUN_00d50b00();
      uVar18 = (undefined7)((ulonglong)uVar13 >> 8);
    }
    local_120 = CONCAT71(uVar18,1);
    local_104 = 0;
    bVar2 = true;
    if (0 < *(int *)((longlong)local_d8 + 0xc)) goto LAB_012793ed;
LAB_012792e2:
    local_80 = (undefined8 *)0x0;
    local_48 = (undefined8 *******)0x0;
    bVar3 = false;
    local_78 = (undefined8 *******)0x0;
    uVar8 = 0;
    local_88 = (undefined8 *******)0x0;
    local_50 = (undefined8 *******)0x0;
    local_38 = (undefined8 *******)0x0;
    local_3c = 0;
    local_90 = (undefined8 *****)0x0;
    pppppppuVar20 = local_d8;
  }
  cVar24 = (char)uVar8;
  local_58 = local_88;
  pppppppuVar11 = (undefined8 *******)FUN_00e7bdb0();
  cVar7 = (char)local_110;
  cVar29 = cVar7;
  if (((ulonglong)pppppppuVar11 >> 0x20 != 0) && (local_158._4_4_ != 0)) {
    cVar6 = FUN_00e7c020();
    cVar29 = '\x01';
    if (cVar6 == '\0') {
      cVar29 = cVar7;
    }
  }
  iVar21 = (int)((ulonglong)unaff_RSI >> 0x20);
  if (cVar29 == '\0') {
    puVar26 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar30 >> 8),1);
  }
  else {
    if (0 < *(int *)((longlong)local_b0 + 0xc)) {
      lVar15 = 0;
      pppppppuVar20 = (undefined8 *******)&DAT_02802558;
      do {
        ppppppuVar23 = local_b0[2];
        pppppuVar25 = ppppppuVar23[lVar15];
        if (local_90 == pppppuVar25) {
          if (((char)local_3c == '\0') && (local_90 != (undefined8 *****)0x0)) {
            local_3c = (uint)CONCAT71((int7)((ulonglong)ppppppuVar23 >> 8),1);
            puVar30 = (undefined8 *)0x0;
            FUN_00d50b00();
          }
        }
        else {
          if (pppppuVar25 != (undefined8 *****)0x0) {
            puVar30 = (undefined8 *)(ulonglong)local_3c;
            ppppppuVar23 = (undefined8 ******)FUN_00d50b00();
          }
          if (((char)local_3c == '\0') || (local_90 == (undefined8 *****)0x0)) {
            local_3c = (uint)CONCAT71((int7)((ulonglong)ppppppuVar23 >> 8),1);
            local_90 = pppppuVar25;
          }
          else {
            puVar30 = (undefined8 *)(ulonglong)local_3c;
            local_90 = pppppuVar25;
            uVar13 = FUN_00d50b20();
            local_3c = (uint)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
          }
        }
        FUN_00d23310();
        local_a8 = (undefined8 *******)CONCAT71(local_a8._1_7_,(char)local_d0);
        pppppppuVar14 = &local_a8;
        pppppppuVar17 = &local_d0;
        if ((char)local_d0 == '\0') {
          pppppppuVar17 = pppppppuVar14;
        }
        *(undefined1 *)pppppppuVar17 = 0;
        if (((char)local_d0 != '\0') && (pppppppuVar11 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = (undefined7)((ulonglong)puVar30 >> 8);
        if (pppppppuVar11 == local_38) {
          if (((char)local_50 == '\0') && (pppppppuVar11 != (undefined8 *******)0x0)) {
            puVar30 = (undefined8 *)CONCAT71(uVar18,1);
            if ((char)local_a8 == '\0') {
              FUN_00d50b00();
            }
          }
          else if (((char)local_a8 == '\0') || (pppppppuVar11 == (undefined8 *******)0x0)) {
            puVar30 = (undefined8 *)((ulonglong)local_50 & 0xffffffff);
          }
          else {
            FUN_00d50b20();
            puVar30 = (undefined8 *)((ulonglong)local_50 & 0xffffffff);
          }
        }
        else if ((char)local_a8 == '\0') {
          if (pppppppuVar11 != (undefined8 *******)0x0) {
            FUN_00d50b00();
          }
          puVar30 = (undefined8 *)CONCAT71(uVar18,1);
          if (((char)local_50 == '\0') || (local_38 == (undefined8 *******)0x0)) goto LAB_0127a8c0;
          FUN_00d50b20();
          local_38 = pppppppuVar11;
        }
        else {
          puVar30 = (undefined8 *)CONCAT71(uVar18,1);
          if (((char)local_50 == '\0') || (local_38 == (undefined8 *******)0x0)) {
LAB_0127a8c0:
            puVar30 = (undefined8 *)CONCAT71(uVar18,1);
            local_38 = pppppppuVar11;
          }
          else {
            FUN_00d50b20();
            local_38 = pppppppuVar11;
          }
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar14);
        if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          ppppppuVar23 = local_38[0x15];
        }
        else {
          ppppppuVar23 = (undefined8 ******)
                         local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x15];
          pppppppuVar14 = local_38;
        }
        if (ppppppuVar23 != (undefined8 ******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar14);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            ppppppuVar23 = local_38[0x15];
          }
          else {
            ppppppuVar23 = (undefined8 ******)
                           local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x15];
            pppppppuVar14 = local_38;
          }
          pVar19 = (pthread_key_t)pppppppuVar14;
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d23340();
        local_a8 = (undefined8 *******)CONCAT71(local_a8._1_7_,(char)local_d0);
        pppppppuVar14 = &local_a8;
        pppppppuVar17 = &local_d0;
        if ((char)local_d0 == '\0') {
          pppppppuVar17 = pppppppuVar14;
        }
        *(undefined1 *)pppppppuVar17 = 0;
        if (((char)local_d0 != '\0') && (pppppppuVar11 != (undefined8 *******)0x0)) {
          pppppppuVar17 = (undefined8 *******)FUN_00d50b20();
        }
        cVar7 = (char)puVar30;
        if (pppppppuVar11 == local_38) {
          pppppppuVar4 = local_38;
          if ((cVar7 == '\0') && (pppppppuVar11 != (undefined8 *******)0x0)) {
            pppppppuVar14 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar14 >> 8),1);
            local_50 = pppppppuVar14;
            if ((char)local_a8 == '\0') {
              FUN_00d50b00();
              pppppppuVar4 = local_38;
            }
          }
          else if (((char)local_a8 == '\0') || (pppppppuVar11 == (undefined8 *******)0x0)) {
            local_50 = (undefined8 *******)((ulonglong)puVar30 & 0xffffffff);
          }
          else {
            FUN_00d50b20();
            local_50 = (undefined8 *******)((ulonglong)puVar30 & 0xffffffff);
            pppppppuVar4 = local_38;
          }
        }
        else {
          pppppppuVar4 = pppppppuVar11;
          if ((char)local_a8 == '\0') {
            if (pppppppuVar11 != (undefined8 *******)0x0) {
              pppppppuVar17 = (undefined8 *******)FUN_00d50b00();
            }
            local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar17 >> 8),1);
            if ((cVar7 != '\0') && (local_38 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar17 >> 8),1);
            if ((cVar7 != '\0') && (local_38 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        local_38 = pppppppuVar4;
        pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar14);
        if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          ppppppuVar23 = local_38[0x14];
        }
        else {
          ppppppuVar23 = (undefined8 ******)
                         local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x14];
          pppppppuVar14 = local_38;
        }
        if (ppppppuVar23 != (undefined8 ******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar14);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            ppppppuVar23 = local_38[0x14];
          }
          else {
            ppppppuVar23 = (undefined8 ******)
                           local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x14];
            pppppppuVar14 = local_38;
          }
          pVar19 = (pthread_key_t)pppppppuVar14;
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b20();
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((longlong)local_b0 + 0xc));
    }
    FUN_01271180();
    if (pppppppuVar11 == local_b0) {
      if (((byte)local_104 & pppppppuVar11 != (undefined8 *******)0x0) == 1) {
        bVar2 = true;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
        }
      }
      else if (((char)local_d0 != '\0') && (pppppppuVar11 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((char)local_d0 == '\0') {
      if (pppppppuVar11 != (undefined8 *******)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      if ((char)local_120 == '\0') goto LAB_0127ace8;
      local_b0 = pppppppuVar11;
      FUN_00d50b20();
    }
    else {
      bVar2 = true;
      if ((char)local_120 == '\0') {
LAB_0127ace8:
        bVar2 = true;
        local_b0 = pppppppuVar11;
      }
      else {
        FUN_00d50b20();
        local_b0 = pppppppuVar11;
      }
    }
    puVar26 = (undefined8 *)0x0;
  }
  local_1c8 = 0;
  local_1c0 = 0;
  uVar13 = FUN_01271d60(&local_1c8);
  local_110 = pppppppuVar11;
  if ((char)local_d0 == '\0') {
    if (pppppppuVar11 != (undefined8 *******)0x0) {
      uVar13 = FUN_00d50b00();
      goto LAB_0127ad92;
    }
    local_98 = (double)CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((ulonglong)uVar13 >> 8),1));
    iVar21 = *(int *)((longlong)local_b0 + 0xc);
joined_r0x0127b994:
    if (0 < iVar21) goto LAB_0127b99a;
LAB_0127bb34:
    local_88 = local_58;
    puVar26 = (undefined8 *)(ulonglong)local_3c;
    pppppuVar25 = local_90;
  }
  else {
LAB_0127ad92:
    if (((char)puVar26 == '\0') || (pppppppuVar11 == (undefined8 *******)0x0)) {
      local_98 = (double)CONCAT44(local_98._4_4_,
                                  (int)CONCAT71((int7)((ulonglong)uVar13 >> 8),
                                                pppppppuVar11 == (undefined8 *******)0x0));
      iVar21 = *(int *)((longlong)local_b0 + 0xc);
      goto joined_r0x0127b994;
    }
    local_d0._0_1_ = '\0';
    local_c0 = 0xffffffff;
    local_b8 = 0;
    local_c0._4_4_ = 0;
    puVar26 = &DAT_02802558;
    local_c8 = pppppppuVar11;
    while( true ) {
      cVar24 = (char)uVar8;
      if (local_c0._4_4_ != 0) {
        if (local_c0._4_4_ < 1) {
          iVar22 = -local_c0._4_4_;
        }
        else {
          iVar22 = (int)local_c0 - local_c0._4_4_;
          local_c0 = CONCAT44(local_c0._4_4_,iVar22);
          FUN_00d23690();
          local_b8 = local_b8 + local_c0._4_4_;
          iVar22 = 0;
        }
        local_c0 = CONCAT44(iVar22,(int)local_c0);
      }
      lVar15 = (longlong)(int)local_c0;
      iVar22 = (int)local_c0 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,iVar22);
      if (*(int *)((longlong)local_c8 + 0xc) <= iVar22) break;
      pppppuVar25 = local_c8[2][lVar15 + 1];
      local_100 = (undefined8 ******)((ulonglong)local_100 & 0xffffffff00000000);
      if ((iVar21 != 0) && (cVar7 = FUN_00e7c6b0(), cVar7 == '\0')) {
        FUN_00d23310();
        pppppppuVar14 = local_a8;
        local_60[0] = (char)local_a0;
        pppppppuVar11 = (undefined8 *******)local_60;
        pppppppuVar17 = &local_a0;
        if ((char)local_a0 == '\0') {
          pppppppuVar17 = pppppppuVar11;
        }
        *(undefined1 *)pppppppuVar17 = 0;
        if (((char)local_a0 != '\0') && (local_a8 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if (local_60[0] == '\0') {
          if (pppppppuVar14 != (undefined8 *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60[0] = '\0';
        }
        local_a0._0_1_ = '\0';
        local_a8 = pppppppuVar14;
        cVar7 = FUN_00d24090();
        if (((char)local_a0 != '\0') && (local_a8 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          ppppuVar16 = pppppuVar25[2];
          pppppppuVar14 = (undefined8 *******)ppppuVar16[1];
          if (local_38 == pppppppuVar14) {
            if (((char)local_50 == '\0') && (local_38 != (undefined8 *******)0x0)) {
              local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)ppppuVar16 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (pppppppuVar14 != (undefined8 *******)0x0) {
              ppppuVar16 = (undefined8 ****)FUN_00d50b00();
            }
            if (((char)local_50 == '\0') || (local_38 == (undefined8 *******)0x0)) {
              local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)ppppuVar16 >> 8),1);
              local_38 = pppppppuVar14;
            }
            else {
              local_38 = pppppppuVar14;
              uVar13 = FUN_00d50b20();
              local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            }
          }
          pppppppuVar14 = (undefined8 *******)*pppppuVar25[2];
          if (local_58 == pppppppuVar14) {
            if ((cVar24 == '\0') && (local_58 != (undefined8 *******)0x0)) {
              uVar8 = 1;
              FUN_00d50b00();
            }
          }
          else {
            if (pppppppuVar14 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
            if ((cVar24 == '\0') || (local_58 == (undefined8 *******)0x0)) {
              uVar8 = 1;
              local_58 = pppppppuVar14;
            }
            else {
              local_58 = pppppppuVar14;
              FUN_00d50b20();
              uVar8 = 1;
            }
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
            ppppppuVar23 = local_38[0x19];
          }
          else {
            ppppppuVar23 = (undefined8 ******)
                           local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
            pppppppuVar11 = local_38;
          }
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0152ebe0();
          pppppppuVar14 = local_a8;
          if (local_a8 == local_48) {
            if (((char)local_80 != '\0') || (local_a8 == (undefined8 *******)0x0)) {
              uVar27 = (ulonglong)local_80 & 0xffffffff;
              goto joined_r0x0127b171;
            }
            pppppppuVar14 = local_48;
            if ((char)local_a0 == '\0') {
              FUN_00d50b00();
              pppppppuVar14 = local_48;
              goto joined_r0x0127b91c;
            }
LAB_0127b112:
            local_a0._0_1_ = '\0';
            local_80 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            local_48 = pppppppuVar14;
          }
          else {
            if ((char)local_a0 != '\0') {
              if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
                uVar13 = FUN_00d50b20();
              }
              goto LAB_0127b112;
            }
            if (local_a8 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
            if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
joined_r0x0127b91c:
            uVar27 = CONCAT71((int7)((ulonglong)pppppppuVar20 >> 8),1);
            local_48 = pppppppuVar14;
joined_r0x0127b171:
            if (((char)local_a0 == '\0') || (local_a8 == (undefined8 *******)0x0)) {
              local_80 = (undefined8 *)(uVar27 & 0xffffffff);
            }
            else {
              FUN_00d50b20();
              local_80 = (undefined8 *)(uVar27 & 0xffffffff);
            }
          }
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          uVar13 = FUN_01507970();
          local_98 = (double)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          local_a8 = (undefined8 *******)FUN_01507970();
          uVar13 = FUN_00e7b820();
          local_88 = (undefined8 *******)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar20 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_58, lVar15 != 0)) {
            pppppppuVar20 =
                 (undefined8 *******)local_58[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            pppppppuVar11 = local_58;
          }
          local_118 = pppppppuVar20[0x1e];
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar20 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_58, lVar15 != 0)) {
            pppppppuVar20 =
                 (undefined8 *******)local_58[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          ppppppuVar12 = (undefined8 ******)
                         ((double)pppppppuVar20[0x28] + DAT_02391030 + DAT_02391030);
          ppppppuVar23 = DAT_0241b6a8;
          if ((double)DAT_0241b6a8 <= (double)ppppppuVar12) {
            ppppppuVar23 = ppppppuVar12;
          }
          ppppppuVar12 = pppppppuVar20[0x1e];
          if ((double)ppppppuVar23 <= (double)pppppppuVar20[0x1e]) {
            ppppppuVar12 = ppppppuVar23;
          }
          if (local_98 - (double)local_88 <= (double)local_118 - (double)ppppppuVar12) {
            FUN_00d23620();
          }
        }
      }
      pppppppuVar20 = (undefined8 *******)((ulonglong)local_50 & 0xffffffff);
      local_100 = (undefined8 ******)((ulonglong)local_100 & 0xffffffff00000000);
      if ((iVar21 != 0) && (cVar7 = FUN_00e7c650(), cVar7 != '\0')) {
        FUN_00d23340();
        pppppppuVar11 = local_a8;
        local_60[0] = (char)local_a0;
        ppppppuVar23 = &local_a0;
        if ((char)local_a0 == '\0') {
          ppppppuVar23 = (undefined8 ******)local_60;
        }
        *(undefined1 *)ppppppuVar23 = 0;
        if (((char)local_a0 != '\0') && (local_a8 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if (local_60[0] == '\0') {
          if (pppppppuVar11 != (undefined8 *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60[0] = '\0';
        }
        local_a0._0_1_ = '\0';
        local_a8 = pppppppuVar11;
        cVar7 = FUN_00d24090();
        if (((char)local_a0 != '\0') && (local_a8 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppuVar11 != (undefined8 *******)0x0) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          FUN_00d23340();
          pppppppuVar14 = local_a8;
          local_100 = (undefined8 ******)CONCAT71(local_100._1_7_,(char)local_a0);
          pppppppuVar11 = &local_100;
          pppppppuVar17 = &local_a0;
          if ((char)local_a0 == '\0') {
            pppppppuVar17 = pppppppuVar11;
          }
          *(undefined1 *)pppppppuVar17 = 0;
          if (((char)local_a0 != '\0') && (pppppppuVar14 != (undefined8 *******)0x0)) {
            pppppppuVar17 = (undefined8 *******)FUN_00d50b20();
          }
          cVar7 = (char)pppppppuVar20;
          if (pppppppuVar14 == local_38) {
            if ((cVar7 == '\0') && (pppppppuVar14 != (undefined8 *******)0x0)) {
              pppppppuVar11 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar11 >> 8),1);
              pppppppuVar17 = pppppppuVar11;
              if ((char)local_100 == '\0') {
                local_50 = pppppppuVar11;
                FUN_00d50b00();
                pppppppuVar17 = local_50;
              }
            }
            else {
              pppppppuVar17 = pppppppuVar20;
              if (((char)local_100 != '\0') && (pppppppuVar14 != (undefined8 *******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else if ((char)local_100 == '\0') {
            if (pppppppuVar14 != (undefined8 *******)0x0) {
              pppppppuVar17 = (undefined8 *******)FUN_00d50b00();
            }
            local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar17 >> 8),1);
            if ((cVar7 == '\0') || (local_38 == (undefined8 *******)0x0)) goto LAB_0127b57e;
            FUN_00d50b20();
            local_38 = pppppppuVar14;
            pppppppuVar17 = local_50;
          }
          else {
            local_50 = (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar17 >> 8),1);
            if ((cVar7 == '\0') || (local_38 == (undefined8 *******)0x0)) {
LAB_0127b57e:
              local_38 = pppppppuVar14;
              pppppppuVar17 = local_50;
            }
            else {
              FUN_00d50b20();
              local_38 = pppppppuVar14;
              pppppppuVar17 = local_50;
            }
          }
          local_50 = pppppppuVar17;
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
            ppppppuVar23 = local_38[0x19];
          }
          else {
            ppppppuVar23 = (undefined8 ******)
                           local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
            pppppppuVar11 = local_38;
          }
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0152ebe0();
          pppppppuVar14 = local_a8;
          if (local_a8 == local_48) {
            if (((char)local_80 != '\0') || (local_a8 == (undefined8 *******)0x0)) {
              uVar27 = (ulonglong)local_80 & 0xffffffff;
              goto joined_r0x0127b6d0;
            }
            pppppppuVar14 = local_48;
            if ((char)local_a0 == '\0') {
              FUN_00d50b00();
              pppppppuVar14 = local_48;
              goto joined_r0x0127b955;
            }
LAB_0127b671:
            local_a0._0_1_ = '\0';
            uVar27 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            local_48 = pppppppuVar14;
          }
          else {
            if ((char)local_a0 != '\0') {
              if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
                uVar13 = FUN_00d50b20();
              }
              goto LAB_0127b671;
            }
            if (local_a8 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
            if (((char)local_80 != '\0') && (local_48 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
joined_r0x0127b955:
            uVar27 = CONCAT71((int7)((ulonglong)pppppppuVar20 >> 8),1);
            local_48 = pppppppuVar14;
joined_r0x0127b6d0:
            if (((char)local_a0 != '\0') && (local_a8 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
          local_80 = (undefined8 *)uVar27;
          if (ppppppuVar23 != (undefined8 ******)0x0) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          uVar13 = FUN_01507970();
          local_98 = (double)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          local_a8 = (undefined8 *******)FUN_01507970();
          uVar13 = FUN_00e7b820();
          local_88 = (undefined8 *******)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar20 = local_38;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_38, lVar15 != 0)) {
            pppppppuVar20 =
                 (undefined8 *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            pppppppuVar11 = local_38;
          }
          local_118 = pppppppuVar20[0x1e];
          pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar11);
          pppppppuVar20 = local_38;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_38, lVar15 != 0)) {
            pppppppuVar20 =
                 (undefined8 *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          ppppppuVar12 = (undefined8 ******)
                         ((double)pppppppuVar20[0x28] + DAT_02391030 + DAT_02391030);
          ppppppuVar23 = DAT_0241b6a8;
          if ((double)DAT_0241b6a8 <= (double)ppppppuVar12) {
            ppppppuVar23 = ppppppuVar12;
          }
          ppppppuVar12 = pppppppuVar20[0x1e];
          if ((double)ppppppuVar23 <= (double)pppppppuVar20[0x1e]) {
            ppppppuVar12 = ppppppuVar23;
          }
          if ((double)local_118 - (double)ppppppuVar12 < local_98 - (double)local_88) {
            pppppppuVar20 = (undefined8 *******)((ulonglong)local_50 & 0xffffffff);
          }
          else {
            FUN_00d23740();
            pppppppuVar20 = (undefined8 *******)((ulonglong)local_50 & 0xffffffff);
          }
        }
      }
      local_50 = pppppppuVar20;
    }
    FUN_01a02020();
    local_98 = (double)((ulonglong)local_98 & 0xffffffff00000000);
    if (*(int *)((longlong)local_b0 + 0xc) < 1) goto LAB_0127bb34;
LAB_0127b99a:
    if (local_78 == (undefined8 *******)0x0) {
      local_88 = (undefined8 *******)0x0;
      lVar15 = 0;
      pppppppuVar20 = local_58;
      do {
        if (pppppppuVar20 != (undefined8 *******)0x0) {
          local_68._0_1_ = (char)uVar8;
          if ((char)local_68 != '\0') {
            FUN_00d50b20();
          }
          uVar8 = 0;
        }
        pppppuVar25 = local_90;
        cVar24 = (char)uVar8;
        pppppuVar1 = local_b0[2][lVar15];
        uVar18 = (undefined7)((ulonglong)puVar26 >> 8);
        if (local_90 == pppppuVar1) {
          if ((char)local_3c == '\0') {
            if (local_90 == (undefined8 *****)0x0) {
              puVar26 = (undefined8 *)(ulonglong)local_3c;
            }
            else {
              puVar26 = (undefined8 *)CONCAT71(uVar18,1);
              local_3c = 0;
              FUN_00d50b00();
            }
          }
          else {
            puVar26 = (undefined8 *)(ulonglong)local_3c;
          }
        }
        else {
          if (pppppuVar1 != (undefined8 *****)0x0) {
            FUN_00d50b00();
          }
          puVar26 = (undefined8 *)CONCAT71(uVar18,1);
          pppppuVar25 = pppppuVar1;
          if (((char)local_3c != '\0') && (local_90 != (undefined8 *****)0x0)) {
            local_90 = pppppuVar1;
            FUN_00d50b20();
          }
        }
        lVar15 = lVar15 + 1;
        local_3c = (uint)puVar26;
        pppppppuVar20 = (undefined8 *******)0x0;
        local_90 = pppppuVar25;
      } while (lVar15 < *(int *)((longlong)local_b0 + 0xc));
    }
    else {
      local_88 = (undefined8 *******)0x0;
      lVar15 = 0;
      puVar26 = (undefined8 *)(ulonglong)local_3c;
      pppppppuVar20 = local_58;
      pppppuVar25 = local_90;
      do {
        if (pppppppuVar20 != (undefined8 *******)0x0) {
          local_68._0_1_ = (char)uVar8;
          if ((char)local_68 != '\0') {
            FUN_00d50b20();
          }
          uVar8 = 0;
        }
        cVar24 = (char)uVar8;
        pppppuVar1 = local_b0[2][lVar15];
        if (pppppuVar25 == pppppuVar1) {
          if (((char)puVar26 == '\0') && (pppppuVar25 != (undefined8 *****)0x0)) {
            puVar26 = (undefined8 *)0x1;
            FUN_00d50b00();
          }
        }
        else {
          if (pppppuVar1 != (undefined8 *****)0x0) {
            FUN_00d50b00();
          }
          if (((char)puVar26 == '\0') || (pppppuVar25 == (undefined8 *****)0x0)) {
            puVar26 = (undefined8 *)0x1;
            pppppuVar25 = pppppuVar1;
          }
          else {
            FUN_00d50b20();
            puVar26 = (undefined8 *)0x1;
            pppppuVar25 = pppppuVar1;
          }
        }
        local_1b0 = 0;
        local_1a8 = local_78;
        local_1a0 = 0;
        local_198 = local_78;
        local_190 = 0;
        local_140 = 0;
        local_138 = '\0';
        local_1b8 = pppppuVar25;
        FUN_0127c8a0(DAT_0238fee8,&local_198,&local_140);
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        lVar15 = lVar15 + 1;
        pppppppuVar20 = (undefined8 *******)0x0;
      } while (lVar15 < *(int *)((longlong)local_b0 + 0xc));
    }
  }
  cVar29 = (char)puVar26;
  local_188 = *unaff_RDI;
  local_180 = 0;
  local_178 = local_110;
  local_170 = 0;
  FUN_0127e4d0(0);
  local_168 = *unaff_RDI;
  local_160 = 0;
  FUN_0127f8b0();
  pppppppuVar20 = local_88;
  if (local_98._0_1_ == '\0') {
    FUN_00d50b20();
    cVar7 = (char)local_80;
  }
  else {
    cVar7 = (char)local_80;
  }
LAB_0127bbcf:
  if ((cVar7 != '\0') && (local_48 != (undefined8 *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_78 != (undefined8 *******)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar24 != '\0') && (pppppppuVar20 != (undefined8 *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_38 != (undefined8 *******)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar29 != '\0') && (pppppuVar25 != (undefined8 *****)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_b0 != (undefined8 *******)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @012771c0 — 3613 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01277dc1) */
/* WARNING: Removing unreachable block (ram,0x01277dcd) */
/* WARNING: Removing unreachable block (ram,0x01277f8d) */
/* WARNING: Removing unreachable block (ram,0x01277f99) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012771c0(double param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  pthread_key_t pVar14;
  longlong *in_RCX;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  longlong local_d8;
  char local_d0;
  double local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  plVar15 = in_RCX;
  local_38 = (longlong *)FUN_000bea40();
  pVar14 = (pthread_key_t)plVar15;
  (**(code **)(*local_38 + 0x18))();
  plVar15 = (longlong *)*in_RCX;
  if (plVar15 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      plVar15 = (longlong *)*in_RCX;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar15 = (longlong *)plVar15[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    pplVar18 = &local_48;
    (**(code **)(*plVar15 + 0x378))();
    plVar15 = local_48;
    FUN_01131770();
    if (plVar15 == (longlong *)0x0) {
LAB_0127727c:
      pplVar18 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar15 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_0127727c;
    }
    local_50 = *pplVar18;
    if (*(char *)(pplVar18 + 1) == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar18 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01266770();
  plVar15 = local_48;
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01266b80();
  plVar6 = local_48;
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar16 = 0;
  FUN_004f2260(0,FUN_012759c0);
  plVar2 = local_48;
  plVar17 = (longlong *)*unaff_RSI;
  if (plVar17 == local_48) {
    if (((char)unaff_RSI[1] == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_012773ab;
      FUN_00d50b00();
      goto LAB_012773e1;
    }
  }
  else {
    lVar10 = unaff_RSI[1];
    if (local_40 != '\0') {
      *unaff_RSI = (longlong)local_48;
      if (((char)lVar10 != '\0') && (plVar17 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_012773ab:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_012773f9;
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RSI = (longlong)plVar2;
    if (((char)lVar10 != '\0') && (plVar17 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_012773e1:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_012773f9:
  plVar17 = (longlong *)CONCAT71((int7)((ulonglong)uVar16 >> 8),!NAN(param_1));
  pVar14 = (pthread_key_t)plVar17;
  lVar10 = *unaff_RSI;
  if (0 < *(int *)(lVar10 + 0xc)) {
    lVar20 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + lVar20 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
      if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        lVar10 = plVar2[0x19];
      }
      else {
        lVar10 = *(longlong *)(plVar2[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 200);
      }
      if (lVar10 != 0) {
        FUN_00d50b00();
        if ((param_2 & !NAN(param_1)) != 0) {
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152e7b0(param_1);
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_0126ee50();
        if (cVar7 == '\0') {
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            if (plVar2[0x1b] == 0) goto LAB_0127758f;
LAB_012775ae:
            pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef490();
          }
          else {
            if (*(longlong *)(plVar2[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xd8) != 0)
            goto LAB_012775ae;
LAB_0127758f:
            local_40 = '\0';
            local_48 = (longlong *)0x0;
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_01326de0();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((iVar8 != 3 || plVar15 == plVar2) || plVar6 == plVar2) goto LAB_0127766f;
        }
        else {
LAB_0127766f:
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          plVar11 = plVar2;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          dVar24 = (double)plVar11[0x1d] + (double)plVar11[0x17];
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0152e9b0(param_1);
          pVar14 = (pthread_key_t)plVar17;
          if (local_50 != (longlong *)0x0) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar11 = local_50;
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              plVar17 = local_50;
              plVar11 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            pVar14 = (pthread_key_t)plVar17;
            local_58 = (double)(**(code **)(*plVar11 + 0x3d8))(local_58,1);
          }
          pvVar9 = _pthread_getspecific(pVar14);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar14 = (pthread_key_t)local_38;
          }
          iVar8 = FUN_013f3690(dVar24);
          if (iVar8 == -1) {
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (pthread_key_t)local_38;
            }
            FUN_013f2b00();
            iVar8 = *(int *)((longlong)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar19 = true;
            iVar4 = -(uint)(iVar8 == 0);
          }
          else {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (longlong)iVar8;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (pthread_key_t)lVar10;
            if ((dVar22 != dVar24) || (bVar19 = false, NAN(dVar22) || NAN(dVar24))) {
              if ((dVar23 != local_58) || (bVar19 = false, NAN(dVar23) || NAN(local_58))) {
                dVar22 = (dVar24 - dVar22) / (local_58 - dVar23);
                pVar14 = (pthread_key_t)
                         CONCAT71((int7)((ulonglong)lVar10 >> 8),dVar22 <= _DAT_023b1e98);
                bVar19 = _DAT_023b3498 <= dVar22 && dVar22 <= _DAT_023b1e98;
              }
            }
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (pthread_key_t)local_38;
            }
            FUN_013f2b00();
            iVar1 = *(int *)((longlong)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            iVar4 = iVar8 + 1;
            if (iVar1 + -1 <= iVar8) {
              iVar4 = -1;
            }
          }
          bVar3 = bVar19;
          if ((iVar4 != -1) && (bVar3 = false, bVar19)) {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (longlong)iVar4;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (pthread_key_t)lVar10;
            bVar3 = false;
            if ((dVar24 != dVar22) || (NAN(dVar24) || NAN(dVar22))) {
              if ((local_58 != dVar23) || (NAN(local_58) || NAN(dVar23))) {
                dVar22 = (dVar22 - dVar24) / (dVar23 - local_58);
                pVar14 = (pthread_key_t)
                         CONCAT71((int7)((ulonglong)lVar10 >> 8),dVar22 <= _DAT_023b1e98);
                bVar3 = _DAT_023b3498 <= dVar22 && dVar22 <= _DAT_023b1e98;
              }
            }
          }
          if (bVar3) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar17 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar10 = FUN_00e8b990(), plVar17 = local_38, lVar10 != 0)) {
              plVar17 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar17 + 0x410))(dVar24,local_58);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar10 = *unaff_RSI;
      pVar14 = *(pthread_key_t *)(lVar10 + 0xc);
      plVar17 = (longlong *)(longlong)(int)pVar14;
    } while (lVar20 < (longlong)plVar17);
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  plVar17 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((longlong)*(int *)((longlong)plVar17 + 0xc) != 0) {
    lVar10 = *(longlong *)(plVar17[2] + -8 + (longlong)*(int *)((longlong)plVar17 + 0xc) * 8);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    puVar12 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar14 = 0x25ddb28;
    *puVar12 = &DAT_025ddb28;
    puVar12[0xb] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    *(undefined8 *)((longlong)puVar12 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x4b) = 0;
    pcVar5 = DAT_025ddb40;
    (*DAT_025ddb40)();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + DAT_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + DAT_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar14 = (pthread_key_t)local_38;
    }
    FUN_013f2b30();
    lVar20 = *(longlong *)plVar17[2];
    lVar21 = lVar10;
    if (lVar10 != lVar20) {
      if (lVar20 != 0) {
        FUN_00d50b00();
      }
      lVar21 = lVar20;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &DAT_025ddb28;
    puVar13[0xb] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    *(undefined8 *)((longlong)puVar13 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x4b) = 0;
    (*pcVar5)();
    if (puVar12 == puVar13) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + DAT_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + DAT_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2cf0();
    FUN_00d50b20();
    if (lVar21 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01271d60 — 3478 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012720a2) */
/* WARNING: Removing unreachable block (ram,0x012720c0) */
/* WARNING: Removing unreachable block (ram,0x01271e27) */
/* WARNING: Removing unreachable block (ram,0x01271e50) */
/* WARNING: Removing unreachable block (ram,0x01271e29) */
/* WARNING: Removing unreachable block (ram,0x01271e52) */
/* WARNING: Removing unreachable block (ram,0x012720a4) */
/* WARNING: Removing unreachable block (ram,0x012720c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01271d60(longlong *param_1,char param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *pvVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  char *pcVar16;
  char *pcVar17;
  longlong lVar18;
  char *pcVar19;
  pthread_key_t pVar20;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar21;
  int local_70;
  undefined8 *local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  pcVar6 = DAT_02572370;
  (*DAT_02572370)();
  FUN_00d21370();
  lVar18 = *unaff_RSI;
  if (lVar18 != 0) {
    local_70 = -1;
    while( true ) {
      lVar10 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar18 + 0xc) <= local_70) break;
      lVar14 = *(longlong *)(lVar18 + 0x10);
      lVar10 = *(longlong *)(lVar14 + 8 + lVar10 * 8);
      pvVar11 = _pthread_getspecific((pthread_key_t)lVar14);
      pVar20 = (pthread_key_t)lVar14;
      lVar14 = lVar10;
      if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        lVar14 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
      if (*(longlong *)(lVar14 + 0xd8) == 0) {
LAB_01271fb6:
        local_40[0] = '\0';
        FUN_00d21140();
        local_48 = lVar10;
        if ((local_40[0] != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar11 = _pthread_getspecific(pVar20);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef490();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01271f30;
          }
          goto LAB_01271fb6;
        }
        if (local_48 == 0) goto LAB_01271fb6;
LAB_01271f30:
        pvVar11 = _pthread_getspecific(pVar20);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar8 = FUN_01326de0();
        if (iVar8 != 3) {
          FUN_00d50b20();
          goto LAB_01271fb6;
        }
        if (*param_1 == 0) {
          FUN_00d50b20();
        }
        else {
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          local_48 = lVar10;
        }
      }
    }
    FUN_001159b0();
  }
  FUN_00d242c0();
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_02572358;
  (*pcVar6)();
  if (puVar9 == (undefined8 *)0x0) {
    bVar5 = false;
    local_60 = (undefined8 *)0x0;
  }
  else {
    local_70 = -1;
    bVar5 = false;
    local_60 = (undefined8 *)0x0;
    lVar18 = 0;
    while( true ) {
      lVar10 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)((longlong)puVar9 + 0xc) <= local_70) break;
      lVar14 = puVar9[2];
      local_48 = *(longlong *)(lVar14 + 8 + lVar10 * 8);
      if (lVar18 == 0) {
LAB_01272192:
        puVar15 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar15 = &DAT_02572358;
        (*pcVar6)();
        if ((bVar5) && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (puVar15 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        bVar5 = true;
        local_60 = puVar15;
      }
      else {
        pvVar11 = _pthread_getspecific((pthread_key_t)lVar14);
        pVar20 = (pthread_key_t)lVar14;
        lVar10 = lVar18;
        if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          lVar10 = *(longlong *)(lVar18 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
        dVar1 = *(double *)(lVar10 + 0xe8);
        dVar2 = *(double *)(lVar10 + 0xf0);
        pvVar11 = _pthread_getspecific(pVar20);
        lVar10 = local_48;
        if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          lVar10 = *(longlong *)(local_48 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
        if (DAT_0240d190 <
            (double)((ulonglong)((dVar1 + dVar2) - *(double *)(lVar10 + 0xe8)) & _DAT_023908f0))
        goto LAB_01272192;
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != lVar18) {
        lVar18 = local_48;
      }
    }
    FUN_001159b0();
  }
  if ((param_2 != '\0') && (puVar13 != (undefined8 *)0x0)) {
    if (0 < *(int *)((longlong)puVar13 + 0xc)) {
      iVar8 = 0;
      do {
        lVar18 = local_48;
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar19 = local_38;
        pcVar16 = local_40;
        if (local_40[0] == '\0') {
          pcVar16 = pcVar19;
        }
        *pcVar16 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar19);
        if ((pvVar11 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          pcVar16 = *(char **)(local_48 + 0x100);
        }
        else {
          pcVar16 = *(char **)(*(longlong *)
                                (local_48 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8) +
                              0x100);
        }
        if (pcVar16 != (char *)0x0) {
          FUN_00d50b00();
          pvVar11 = _pthread_getspecific((pthread_key_t)pcVar19);
          if ((pvVar11 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pcVar19 = pcVar16;
          }
          pVar20 = (pthread_key_t)pcVar19;
          pvVar11 = _pthread_getspecific(pVar20);
          lVar10 = local_48;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar10 = *(longlong *)(local_48 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8)
            ;
          }
          FUN_012ea9e0(*(double *)(lVar10 + 0xe8) + _DAT_0240cff0,DAT_0240cfd0);
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012724b0;
            }
          }
          else if (local_48 != 0) {
LAB_012724b0:
            lVar10 = local_48;
            if (*(int *)(local_48 + 0xc) == 1) {
              uVar21 = FUN_00d23310();
              local_38[0] = local_40[0];
              pcVar19 = local_40;
              if (local_40[0] == '\0') {
                pcVar19 = local_38;
              }
              *pcVar19 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                uVar21 = FUN_00d50b20();
              }
              if (local_48 == 0) {
                lVar10 = 0;
                bVar4 = false;
              }
              else if (local_38[0] == '\0') {
                bVar4 = true;
                uVar21 = FUN_00d50b00();
              }
              else {
                bVar4 = true;
              }
LAB_01272664:
              if (lVar10 == 0) goto LAB_0127269d;
              local_40[0] = '\0';
              FUN_00d23370(uVar21,0);
              if ((local_40[0] != '\0') && (lVar10 != 0)) {
                FUN_00d50b20();
              }
              bVar3 = false;
              local_48 = lVar10;
            }
            else {
              if (1 < *(int *)(local_48 + 0xc)) {
                pvVar11 = _pthread_getspecific(pVar20);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01268710();
                if (local_40[0] == '\0') {
                  if (local_48 == 0) goto LAB_012725e0;
                  FUN_00d50b00();
LAB_01272599:
                  local_40[0] = '\0';
                  cVar7 = FUN_00d23d70();
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 == '\0') {
                    bVar3 = false;
                    goto LAB_012725f1;
                  }
                  FUN_00d50b00();
                  bVar4 = true;
                }
                else {
                  if (local_48 != 0) goto LAB_01272599;
LAB_012725e0:
                  bVar3 = true;
LAB_012725f1:
                  uVar21 = FUN_00d23310();
                  local_38[0] = local_40[0];
                  pcVar19 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar19 = local_38;
                  }
                  *pcVar19 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    uVar21 = FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    bVar4 = false;
                    lVar10 = 0;
                  }
                  else {
                    bVar4 = true;
                    if (local_38[0] == '\0') {
                      uVar21 = FUN_00d50b00();
                    }
                  }
                  if (bVar3) goto LAB_01272664;
                }
                uVar21 = FUN_00d50b20();
                goto LAB_01272664;
              }
              bVar4 = false;
LAB_0127269d:
              bVar3 = true;
            }
            FUN_00d50b20();
            if (bVar4 && !bVar3) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d23340();
        local_38[0] = local_40[0];
        pcVar19 = local_38;
        pcVar17 = local_40;
        if (local_40[0] == '\0') {
          pcVar17 = pcVar19;
        }
        *pcVar17 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar20 = (pthread_key_t)pcVar19;
        if (lVar18 == local_48) {
          lVar10 = lVar18;
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar10 = local_48;
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if (lVar18 != 0) {
              FUN_00d50b20();
            }
          }
          else if (lVar18 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar11 = _pthread_getspecific(pVar20);
        if ((pvVar11 == (void *)0x0) || (lVar18 = FUN_00e8b990(), lVar18 == 0)) {
          pcVar19 = *(char **)(lVar10 + 0x100);
        }
        else {
          pcVar19 = *(char **)(*(longlong *)
                                (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar18 + 0x154) & 1) * 8) +
                              0x100);
        }
        pcVar17 = pcVar16;
        if (pcVar16 != pcVar19) {
          if (pcVar19 != (char *)0x0) {
            FUN_00d50b00();
          }
          pcVar17 = pcVar19;
          if (pcVar16 != (char *)0x0) {
            FUN_00d50b20();
          }
        }
        if (pcVar17 != (char *)0x0) {
          pvVar11 = _pthread_getspecific(pVar20);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar11 = _pthread_getspecific(pVar20);
          lVar18 = lVar10;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar18 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
          FUN_012ea6f0(*(double *)(lVar18 + 0xe8) + *(double *)(lVar18 + 0xf0) + _DAT_0240cff0,
                       DAT_0240cfd0);
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012728f0;
            }
          }
          else if (local_48 != 0) {
LAB_012728f0:
            lVar18 = local_48;
            if (*(int *)(local_48 + 0xc) == 1) {
              FUN_00d23310();
              local_38[0] = local_40[0];
              pcVar19 = local_40;
              if (local_40[0] == '\0') {
                pcVar19 = local_38;
              }
              *pcVar19 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 == 0) {
                bVar4 = false;
                lVar18 = 0;
              }
              else {
                bVar4 = true;
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                }
              }
LAB_01272abb:
              if (lVar18 == 0) {
                bVar3 = true;
              }
              else {
                local_40[0] = '\0';
                FUN_00d21140();
                if ((local_40[0] != '\0') && (lVar18 != 0)) {
                  FUN_00d50b20();
                }
                bVar3 = false;
                local_48 = lVar18;
              }
            }
            else {
              if (1 < *(int *)(local_48 + 0xc)) {
                pvVar11 = _pthread_getspecific(pVar20);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274c40(_DAT_02391038);
                if (local_40[0] == '\0') {
                  if (local_48 == 0) goto LAB_01272a2d;
                  FUN_00d50b00();
LAB_012729e6:
                  local_40[0] = '\0';
                  cVar7 = FUN_00d23d70();
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 == '\0') {
                    bVar3 = false;
                    goto LAB_01272a41;
                  }
                  FUN_00d50b00();
                  bVar4 = true;
                }
                else {
                  if (local_48 != 0) goto LAB_012729e6;
LAB_01272a2d:
                  bVar3 = true;
LAB_01272a41:
                  FUN_00d23310();
                  local_38[0] = local_40[0];
                  pcVar19 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar19 = local_38;
                  }
                  *pcVar19 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    bVar4 = false;
                    lVar18 = 0;
                  }
                  else {
                    bVar4 = true;
                    if (local_38[0] == '\0') {
                      FUN_00d50b00();
                    }
                  }
                  if (bVar3) goto LAB_01272abb;
                }
                FUN_00d50b20();
                goto LAB_01272abb;
              }
              bVar3 = true;
              bVar4 = false;
            }
            FUN_00d50b20();
            if (bVar4 && !bVar3) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((longlong)puVar13 + 0xc));
    }
    FUN_01a02020();
  }
  *unaff_RDI = puVar13;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar5) && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0132a0a0 — 3214 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0132a0a0(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  undefined8 *puVar6;
  double *pdVar7;
  longlong *unaff_RSI;
  bool bVar8;
  double dVar9;
  longlong local_160;
  char local_158;
  double local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong local_130;
  char local_128;
  undefined8 local_120;
  undefined1 local_118;
  double local_110;
  undefined1 local_108;
  double local_100;
  undefined1 local_f8;
  longlong local_f0;
  int local_e8;
  int iStack_e4;
  int local_e0;
  longlong local_d8;
  char local_d0;
  double local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
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
  
  local_f0 = *unaff_RSI;
  if (local_f0 != 0) {
    local_f8 = 0;
    local_100 = 0.0;
    local_e8 = -1;
    iStack_e4 = 0;
    local_e0 = 0;
    do {
      do {
        do {
          if (iStack_e4 != 0) {
            if (iStack_e4 < 1) {
              iStack_e4 = -iStack_e4;
            }
            else {
              local_e8 = local_e8 - iStack_e4;
              FUN_00d23690();
              local_e0 = local_e0 + iStack_e4;
              iStack_e4 = 0;
            }
          }
          lVar2 = (longlong)local_e8;
          local_e8 = local_e8 + 1;
          if (*(int *)(local_f0 + 0xc) <= local_e8) goto LAB_0132ad3d;
          lVar5 = *(longlong *)(local_f0 + 0x10);
          dVar1 = *(double *)(lVar5 + 8 + lVar2 * 8);
          local_100 = dVar1;
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar5);
          pVar4 = (pthread_key_t)lVar5;
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          if (local_60 == 0) {
            bVar8 = false;
          }
          else {
            local_c8 = dVar1;
            pvVar3 = _pthread_getspecific(pVar4);
            if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
              pVar4 = SUB84(local_c8,0);
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            if (local_80 == 0) {
              bVar8 = false;
              dVar1 = local_c8;
            }
            else {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              if (local_50 == 0) {
                bVar8 = false;
                dVar1 = local_c8;
              }
              else {
                pvVar3 = _pthread_getspecific(pVar4);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar3 = _pthread_getspecific(pVar4);
                dVar1 = local_c8;
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                bVar8 = local_90 != 0;
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        } while (!bVar8);
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if (local_60 == 0) {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if (local_80 == 0) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if (local_70 == local_d8) {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_01259520();
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_0125a280();
              bVar8 = (double)((ulonglong)(local_c8 - dVar9) & _DAT_023908f0) < DAT_02391030;
            }
            else {
              bVar8 = false;
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = false;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar8 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar8) {
          local_148 = 0;
          local_140 = *param_2;
          local_138 = 0;
          puVar6 = &local_140;
          local_150 = dVar1;
          FUN_01329cf0(puVar6,&local_150);
          pVar4 = (pthread_key_t)puVar6;
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          lVar2 = local_60;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) goto LAB_0132ad3d;
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if (local_60 == 0) {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if (local_80 == 0) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if (local_70 == local_d8) {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_01259520();
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_0125a280();
              bVar8 = (double)((ulonglong)(local_c8 - dVar9) & _DAT_023908f0) < DAT_02391030;
            }
            else {
              bVar8 = false;
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = false;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar8 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      } while (!bVar8);
      local_120 = *param_2;
      local_118 = 0;
      local_108 = 0;
      pdVar7 = &local_110;
      local_110 = dVar1;
      FUN_01329cf0(pdVar7,&local_120);
      pVar4 = (pthread_key_t)pdVar7;
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01270ab0();
      lVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar2 == 0);
LAB_0132ad3d:
    FUN_001159b0();
  }
  return;
}




// ============================================================
// @0132b1c0 — 3152 bytes
// ============================================================

undefined8 * FUN_0132b1c0(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  undefined8 local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined8 *local_58;
  char local_50 [8];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  lVar13 = *(longlong *)(unaff_RSI + 0x200);
  local_158 = param_1;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar11 = (longlong *)&DAT_02572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (lVar13 != 0) {
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    uVar14 = CONCAT71((int7)((ulonglong)plVar11 >> 8),(char)local_a8);
    plVar11 = &local_38;
    if ((char)local_a8 != '\0') {
      plVar11 = &local_a8;
    }
    local_38._0_1_ = (char)local_a8;
    *(undefined1 *)plVar11 = 0;
    if (((char)local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)uVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    lVar13 = local_48;
    if ((char)local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), (char)local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40._0_1_ = '\0';
    }
    if (((char)local_38 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (CONCAT71(local_d0._1_7_,(char)local_d0) != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (CONCAT71(local_c0._1_7_,(char)local_c0) != 0)) {
      FUN_00d50b20();
    }
    local_58 = puVar6;
    if (lVar13 != 0) {
      local_a8._0_1_ = 0;
      local_b0 = 0;
      local_a0 = lVar13;
      local_90 = 0;
      local_98 = 0;
      if (0 < *(int *)(lVar13 + 0xc)) {
        lVar12 = 0;
        do {
          local_b0 = *(undefined8 *)(*(longlong *)(lVar13 + 0x10) + lVar12 * 8);
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar14);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012649b0();
          lVar1 = CONCAT71(local_70._1_7_,(char)local_70);
          if (local_68 == '\0') {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_40._0_1_ = '\0';
          local_48 = lVar1;
          FUN_00d21140();
          if (((char)local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
          local_98 = CONCAT44(local_98._4_4_,(int)lVar12);
        } while ((int)lVar12 < *(int *)(lVar13 + 0xc));
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  FUN_00d21370();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_0258a670;
  pcVar2 = DAT_0258a688;
  (*DAT_0258a688)();
  local_78 = puVar8;
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_0258a670;
  (*pcVar2)();
  lVar13 = *(longlong *)(unaff_RSI + 0x40);
  local_80 = puVar8;
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  FUN_0147ce20();
  lVar12 = local_b0;
  if ((char)local_a8 == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), (char)local_a8 != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8._0_1_ = '\0';
  }
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  if (lVar12 == 0) {
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    local_a8._0_1_ = '\0';
    local_b0 = 0;
    local_a0 = lVar12;
    local_90 = 0;
    local_98 = 0;
    local_58 = puVar6;
    if (0 < *(int *)(lVar12 + 0xc)) {
      lVar13 = 0;
      do {
        local_b0 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar13 * 8);
        pVar10 = (pthread_key_t)plVar11;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5700(local_158);
        lVar1 = local_48;
        if ((((char)local_40 == '\0') && (local_48 != 0)) &&
           ((FUN_00d50b00(), (char)local_40 != '\0' && (local_48 != 0)))) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a560();
        lVar3 = local_48;
        local_d0._0_1_ = (char)local_40;
        plVar11 = &local_d0;
        plVar9 = &local_40;
        if ((char)local_40 == '\0') {
          plVar9 = plVar11;
        }
        *(undefined1 *)plVar9 = 0;
        if (((char)local_40 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          lVar4 = local_48;
          if (((char)local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pVar10 = (pthread_key_t)plVar11;
          if (lVar4 != 0) {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            lVar4 = local_48;
            local_c0._0_1_ = (char)local_40;
            plVar11 = &local_c0;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(undefined1 *)plVar9 = 0;
            if (((char)local_40 != '\0') && (lVar4 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (pthread_key_t)plVar11;
            local_60 = lVar4;
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_014bc420();
            lVar4 = local_48;
            local_70._0_1_ = (char)local_40;
            plVar11 = &local_70;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(undefined1 *)plVar9 = 0;
            if (((char)local_40 != '\0') && (lVar4 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            pVar10 = (pthread_key_t)plVar11;
            local_88 = lVar4;
            if (lVar4 != 0) {
              local_150 = lVar4;
              local_148 = '\0';
              uVar14 = FUN_0132c500(uVar14,&local_150);
              lVar4 = local_48;
              local_38._0_1_ = (char)local_40;
              plVar11 = &local_38;
              plVar9 = &local_40;
              if ((char)local_40 == '\0') {
                plVar9 = plVar11;
              }
              *(undefined1 *)plVar9 = 0;
              if (((char)local_40 != '\0') && (local_48 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              pVar10 = (pthread_key_t)plVar11;
              if ((local_148 != '\0') && (local_150 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (lVar4 == 0) {
                local_140 = lVar1;
                local_138 = '\0';
                local_130 = local_60;
                local_128 = '\0';
                FUN_0132c5b0(uVar14,&local_130);
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_48 = local_88;
                local_40._0_1_ = '\0';
                FUN_00e383c0();
                if (((char)local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                local_1a8 = lVar1;
                local_1a0 = 0;
                local_198 = lVar4;
                local_190 = 0;
                plVar11 = &local_198;
                FUN_01329cf0(plVar11,&local_1a8);
                pVar10 = (pthread_key_t)plVar11;
                if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((char)local_38 != '\0') {
                  FUN_00d50b20();
                }
              }
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_014bc340();
            lVar4 = local_48;
            local_38._0_1_ = (char)local_40;
            plVar11 = &local_38;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(undefined1 *)plVar9 = 0;
            if (((char)local_40 != '\0') && (local_48 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if (lVar4 != 0) {
              local_120 = lVar4;
              local_118 = '\0';
              uVar14 = FUN_0132c500(uVar14,&local_120);
              lVar5 = local_48;
              local_50[0] = (char)local_40;
              plVar11 = (longlong *)local_50;
              plVar9 = &local_40;
              if ((char)local_40 == '\0') {
                plVar9 = plVar11;
              }
              *(undefined1 *)plVar9 = 0;
              if (((char)local_40 != '\0') && (lVar5 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (lVar5 == 0) {
                local_110 = lVar1;
                local_108 = '\0';
                local_100 = local_60;
                local_f8 = '\0';
                FUN_0132c5b0(uVar14,&local_100);
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40._0_1_ = '\0';
                local_48 = lVar4;
                FUN_00e383c0();
                if (((char)local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                local_178 = lVar5;
                local_170 = 0;
                local_168 = lVar1;
                local_160 = 0;
                plVar11 = &local_168;
                FUN_01329cf0(plVar11,&local_178);
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if (local_50[0] != '\0') {
                  FUN_00d50b20();
                }
              }
              if ((char)local_38 != '\0') {
                FUN_00d50b20();
              }
            }
            if (((char)local_70 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if (((char)local_c0 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        local_40._0_1_ = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if (((char)local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_d0 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar13 = lVar13 + 1;
        local_98 = CONCAT44(local_98._4_4_,(int)lVar13);
      } while ((int)lVar13 < *(int *)(lVar12 + 0xc));
    }
    FUN_001150f0();
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    puVar6 = local_78;
    if (local_80 == (undefined8 *)0x0) goto LAB_0132be24;
  }
  puVar6 = local_78;
  FUN_00d50b20();
LAB_0132be24:
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01273930 — 2807 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01274378) */
/* WARNING: Removing unreachable block (ram,0x01274384) */
/* WARNING: Removing unreachable block (ram,0x01273d42) */
/* WARNING: Removing unreachable block (ram,0x01273d4e) */
/* WARNING: Removing unreachable block (ram,0x01273f72) */
/* WARNING: Removing unreachable block (ram,0x01273f7e) */
/* WARNING: Removing unreachable block (ram,0x012743c4) */
/* WARNING: Removing unreachable block (ram,0x012743d4) */

undefined8 * FUN_01273930(pthread_key_t param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  int iVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  char local_40 [8];
  char local_38 [8];
  longlong lVar11;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    local_98 = plVar3;
    FUN_00d23310();
    puVar6 = local_88;
    local_48 = (undefined8 *)CONCAT71(local_48._1_7_,(char)local_80);
    ppuVar8 = &local_48;
    if ((char)local_80 != '\0') {
      ppuVar8 = &local_80;
    }
    *(undefined1 *)ppuVar8 = 0;
    if (((char)local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      lVar5 = puVar6[9];
    }
    else {
      lVar5 = *(longlong *)(puVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x48);
    }
    if (lVar5 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (puVar6 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar5 == 0) {
      FUN_01273200();
      local_50 = local_88;
      if (((char)local_80 == '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c9fe20();
      puVar6 = local_88;
      ppuVar8 = &local_80;
      if ((char)local_80 == '\0') {
        ppuVar8 = (undefined8 **)&local_60;
      }
      local_60 = (char)local_80;
      *(undefined1 *)ppuVar8 = 0;
      if (((char)local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_60 == '\0') {
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_012e8850();
      puVar7 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (undefined8 *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 == (undefined8 *)0x0) {
        *unaff_RDI = plVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (undefined8 *)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((longlong)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(undefined8 **)(puVar7[2] + lVar5 * 8);
            FUN_00805b20();
            lVar11 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00c9fe20();
            puVar6 = local_48;
            local_38[0] = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_c0 = 0;
            if (local_38[0] == '\0') {
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_c0 = '\x01';
            local_c8 = puVar6;
            FUN_012fceb0();
            lVar1 = CONCAT71(local_d8._1_7_,(char)local_d8);
            if (local_d0 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d0 = '\0';
            }
            FUN_01274b90();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((longlong)puVar7 + 0xc));
        }
        FUN_000be170();
        *unaff_RDI = local_98;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00d50b20();
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      pcVar2 = DAT_02572370;
      (*DAT_02572370)();
      local_90 = puVar6;
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      local_50 = puVar7;
      if ((undefined8 *)*unaff_RSI != (undefined8 *)0x0) {
        local_80._0_1_ = '\0';
        local_88 = (undefined8 *)0x0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        local_78 = (undefined8 *)*unaff_RSI;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar5 = (longlong)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)((longlong)local_78 + 0xc) <= iVar12) break;
          lVar11 = local_78[2];
          puVar6 = *(undefined8 **)(lVar11 + 8 + lVar5 * 8);
          local_88 = puVar6;
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar11);
          puVar7 = local_88;
          pVar10 = (pthread_key_t)lVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), puVar6 = puVar7, lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          if (puVar6[0x20] != 0) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f4d60();
            puVar6 = local_48;
            local_60 = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = &local_60;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            local_48 = puVar6;
            iVar12 = FUN_00d237a0();
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar12 == -1) {
              local_40[0] = '\0';
              local_48 = puVar6;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              puVar7 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar7 = &DAT_02572358;
              (*pcVar2)();
              local_40[0] = '\0';
              local_48 = puVar7;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            local_48 = local_88;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (puVar6 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_001159b0();
        puVar6 = local_90;
      }
      FUN_012e8850();
      puVar7 = local_88;
      if ((char)local_80 == '\0') {
        if (((local_88 != (undefined8 *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
           (local_88 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80._0_1_ = '\0';
      }
      if (puVar7 == (undefined8 *)0x0) {
        *unaff_RDI = plVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (undefined8 *)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((longlong)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(undefined8 **)(puVar7[2] + lVar5 * 8);
            local_40[0] = '\0';
            local_48 = local_88;
            iVar12 = FUN_00d23d20();
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            lVar11 = *(longlong *)(local_90[2] + (longlong)iVar12 * 8);
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            plVar3 = local_98;
            FUN_00c9fe20();
            puVar6 = local_48;
            local_d8._0_1_ = local_40[0];
            ppuVar8 = (undefined8 **)local_40;
            if (local_40[0] == '\0') {
              ppuVar8 = &local_d8;
            }
            *(char *)ppuVar8 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = 0;
            if ((char)local_d8 == '\0') {
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d8._0_1_ = '\0';
            }
            local_a0 = '\x01';
            local_a8 = puVar6;
            FUN_012fceb0();
            local_b0 = 0;
            lVar1 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_b0 = '\x01';
            local_b8 = lVar1;
            FUN_01274b90();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((longlong)puVar7 + 0xc));
        }
        FUN_000be170();
        *unaff_RDI = plVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00d50b20();
        puVar6 = local_90;
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return unaff_RDI;
}




// ============================================================
// @012762c0 — 2673 bytes
// ============================================================

void FUN_012762c0(undefined8 param_1)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  pthread_key_t pVar5;
  undefined8 in_RCX;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  longlong *local_1d8;
  undefined1 local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  char local_190;
  undefined8 local_188;
  undefined1 local_180;
  longlong *local_178;
  undefined1 local_170;
  longlong *local_168;
  undefined1 local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  int local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  if (*(int *)(*unaff_RDI + 0xc) == 0) {
    return;
  }
  local_d0 = param_1;
  FUN_00d23310();
  plVar4 = local_60;
  pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_58[0]);
  plVar7 = &local_c0;
  if (local_58[0] != '\0') {
    plVar7 = (longlong *)local_58;
  }
  local_c0 = CONCAT71(local_c0._1_7_,local_58[0]);
  *(char *)plVar7 = '\0';
  if ((local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = plVar4[9];
  }
  else {
    lVar3 = *(longlong *)(plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4] + 0x48);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  local_140 = lVar3;
  if (((char)local_c0 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    local_70 = 0;
    local_68 = (longlong *)0x0;
  }
  else {
    FUN_01273930();
    plVar4 = local_60;
    if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_138 = *unaff_RSI;
    local_130 = '\0';
    FUN_012771c0(local_d0,0);
    local_68 = local_60;
    if (local_60 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      local_70 = 0;
    }
    else {
      local_70 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
      if (local_58[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01273930();
  plVar4 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_01276d6b;
    FUN_00d50b00();
  }
  else if (local_60 == (longlong *)0x0) goto LAB_01276d6b;
  local_b8 = '\0';
  local_c0 = 0;
  local_c8 = plVar4;
  local_b0 = plVar4[2];
  local_a8 = 0;
  if (0 < *(int *)(local_b0 + 0xc)) {
    do {
      local_c0 = *(longlong *)(*(longlong *)(local_b0 + 0x10) + (longlong)local_a8 * 8);
      FUN_01278310((longlong)local_a8,&local_c0);
      plVar4 = local_60;
      if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_78 = plVar4;
      local_128 = plVar4;
      local_120 = '\0';
      local_1d8 = local_68;
      local_1d0 = 0;
      pVar5 = (pthread_key_t)&local_1d8;
      FUN_012771c0(local_d0,local_140 == 0);
      plVar4 = local_60;
      if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_38 = plVar4;
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_140 == 0) {
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013f2b00();
        iVar8 = *(int *)((longlong)local_60 + 0xc);
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 != 0) {
          local_1c8 = local_78;
          local_1c0 = 0;
          local_1b8 = local_38;
          local_1b0 = 0;
          FUN_012783e0();
        }
        if (local_68 != (longlong *)0x0) {
          local_118 = local_78;
          local_110 = '\0';
          FUN_0152eef0();
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_1a8 = local_78;
        local_1a0 = 0;
        FUN_01273200();
        plVar4 = local_60;
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_012766b4;
          }
        }
        else if (local_60 != (longlong *)0x0) {
LAB_012766b4:
          local_98 = '\0';
          local_a0 = 0;
          local_d8 = plVar4;
          local_90 = plVar4[2];
          local_88 = 0;
          if (0 < *(int *)(local_90 + 0xc)) {
            do {
              lVar3 = (longlong)local_88;
              local_a0 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar3 * 8);
              FUN_019c6680();
              plVar4 = local_60;
              pVar5 = (pthread_key_t)lVar3;
              if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_150 = plVar4;
              local_108 = plVar4;
              local_100 = '\0';
              FUN_01278c70();
              plVar4 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              local_80 = plVar4;
              if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_68 == (longlong *)0x0) {
                local_f8 = local_80;
                local_f0 = '\0';
                local_188 = 0;
                local_180 = 0;
                pVar5 = (pthread_key_t)&local_188;
                FUN_012771c0(local_d0,1);
                plVar4 = local_60;
                if (local_60 == (longlong *)0x0) {
                  bVar1 = false;
                  plVar4 = (longlong *)0x0;
                }
                else {
                  bVar1 = true;
                  if (local_58[0] == '\0') {
                    FUN_00d50b00();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                plVar4 = (longlong *)FUN_000bea40();
                (**(code **)(*plVar4 + 0x18))();
                pvVar2 = _pthread_getspecific(pVar5);
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                  pVar5 = (pthread_key_t)local_38;
                }
                FUN_013f2b00();
                plVar7 = local_60;
                if (local_58[0] == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_012768e8;
                  }
                }
                else if (local_60 != (longlong *)0x0) {
LAB_012768e8:
                  local_58[0] = '\0';
                  local_60 = (longlong *)0x0;
                  local_148 = plVar7;
                  local_50 = plVar7;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  local_48._4_4_ = 0;
                  while( true ) {
                    if (local_48._4_4_ != 0) {
                      if (local_48._4_4_ < 1) {
                        iVar8 = -local_48._4_4_;
                      }
                      else {
                        iVar8 = (int)local_48 - local_48._4_4_;
                        local_48 = CONCAT44(local_48._4_4_,iVar8);
                        FUN_00d23690();
                        local_40 = local_40 + local_48._4_4_;
                        iVar8 = 0;
                      }
                      local_48 = CONCAT44(iVar8,(int)local_48);
                    }
                    lVar3 = (longlong)(int)local_48;
                    iVar8 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar8);
                    if (*(int *)((longlong)local_50 + 0xc) <= iVar8) break;
                    lVar6 = local_50[2];
                    local_60 = *(longlong **)(lVar6 + 8 + lVar3 * 8);
                    pvVar2 = _pthread_getspecific((pthread_key_t)lVar6);
                    pVar5 = (pthread_key_t)lVar6;
                    plVar7 = plVar4;
                    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                      plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013faed0();
                    local_158 = FUN_012f8e60();
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013faf20();
                    uVar9 = FUN_012f8e60();
                    (**(code **)(*plVar7 + 0x418))(local_158,uVar9);
                    if ((local_190 != '\0') && (local_198 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  plVar7 = local_50;
                  FUN_01a81420();
                  pVar5 = (pthread_key_t)plVar7;
                  bVar1 = true;
                  FUN_00d50b20();
                  goto LAB_01276b40;
                }
                bVar1 = true;
              }
LAB_01276b40:
              pvVar2 = _pthread_getspecific(pVar5);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013f2b00();
              iVar8 = *(int *)((longlong)local_60 + 0xc);
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar8 != 0) {
                local_178 = local_80;
                local_170 = 0;
                local_160 = 0;
                local_168 = plVar4;
                FUN_012783e0();
              }
              if (local_68 != (longlong *)0x0) {
                local_e8 = local_80;
                local_e0 = '\0';
                FUN_0152eef0();
                if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((bVar1) && (plVar4 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (local_150 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_88 = local_88 + 1;
            } while (local_88 < *(int *)(local_90 + 0xc));
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 < *(int *)(local_b0 + 0xc));
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01276d6b:
  if (((char)local_70 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0132df30 — 2430 bytes
// ============================================================

void FUN_0132df30(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong *plVar7;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  uint local_ac;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar2 = FUN_0141bab0();
  if (iVar2 != 1) {
    return;
  }
  plVar7 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  lVar4 = (**(code **)(*plVar7 + 0x378))();
  if (0x7eb851ea < lVar4) {
    return;
  }
  cVar1 = *(char *)(unaff_RDI + 0x1aa);
  if (cVar1 == unaff_SIL) {
    return;
  }
  if (unaff_SIL == '\0') {
    if (cVar1 != '\0') {
      FUN_00d64850();
      *(undefined1 *)(unaff_RDI + 0x1aa) = 0;
      FUN_00d64910();
    }
    lVar4 = local_48;
    if (*(longlong *)(unaff_RDI + 0x40) == 0) goto LAB_0132e873;
    local_98 = (longlong *)(unaff_RDI + 0x40);
    local_50 = 0;
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x40);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar2 = -local_40._4_4_;
        }
        else {
          iVar2 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar2);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar2 = 0;
        }
        local_40 = CONCAT44(iVar2,(int)local_40);
      }
      lVar4 = (longlong)(int)local_40;
      iVar2 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar2);
      if (*(int *)(local_48 + 0xc) <= iVar2) break;
      lVar6 = *(longlong *)(local_48 + 0x10);
      local_58 = *(undefined8 *)(lVar6 + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_88 == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0132e17b;
        }
      }
      else if (local_90 != (longlong *)0x0) {
LAB_0132e17b:
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bd1e0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e0cc0();
        FUN_00d50b20();
      }
    }
  }
  else {
    if (cVar1 == '\0') {
      FUN_00d64850();
      *(undefined1 *)(unaff_RDI + 0x1aa) = 1;
      FUN_00d64910();
      if (*(char *)(unaff_RDI + 0x1ab) != '\0') goto LAB_0132e040;
LAB_0132e25b:
      FUN_0132ec50();
      lVar6 = *(longlong *)(unaff_RDI + 0x40);
      lVar4 = local_48;
    }
    else {
      if (*(char *)(unaff_RDI + 0x1ab) == '\0') goto LAB_0132e25b;
LAB_0132e040:
      lVar6 = *(longlong *)(unaff_RDI + 0x40);
      lVar4 = local_48;
    }
    local_48 = lVar6;
    if (local_48 == 0) goto LAB_0132e873;
    local_98 = (longlong *)(unaff_RDI + 0x40);
    local_50 = 0;
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar2 = -local_40._4_4_;
        }
        else {
          iVar2 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar2);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar2 = 0;
        }
        local_40 = CONCAT44(iVar2,(int)local_40);
      }
      lVar4 = (longlong)(int)local_40;
      iVar2 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar2);
      if (*(int *)(local_48 + 0xc) <= iVar2) break;
      lVar6 = *(longlong *)(local_48 + 0x10);
      local_58 = *(undefined8 *)(lVar6 + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_88 == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0132e36a;
        }
      }
      else if (local_90 != (longlong *)0x0) {
LAB_0132e36a:
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = '\0';
        local_e0 = 0;
        plVar7 = &local_e0;
        FUN_014c0100(plVar7,1);
        pVar5 = (pthread_key_t)plVar7;
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e0cc0();
        FUN_00d50b20();
      }
    }
  }
  FUN_001150f0();
  lVar6 = *local_98;
  lVar4 = local_48;
  if (lVar6 != 0) {
    local_50 = 0;
    local_58 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = lVar6;
    if (0 < *(int *)(lVar6 + 0xc)) {
      pVar5 = 0;
      local_e8 = lVar6;
      do {
        local_58 = *(undefined8 *)(*(longlong *)(local_e8 + 0x10) + (ulonglong)pVar5 * 8);
        local_ac = pVar5;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_98 = local_90;
        if (local_88 == '\0') {
          if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
             (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_88 = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (local_98 != (longlong *)0x0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_80 = local_98;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_78._4_4_ = 0;
          while( true ) {
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar2 = -local_78._4_4_;
              }
              else {
                iVar2 = (int)local_78 - local_78._4_4_;
                local_78 = CONCAT44(local_78._4_4_,iVar2);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar2 = 0;
              }
              local_78 = CONCAT44(iVar2,(int)local_78);
            }
            lVar4 = (longlong)(int)local_78;
            iVar2 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar2);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar2) break;
            lVar6 = local_80[2];
            local_90 = *(longlong **)(lVar6 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
            pVar5 = (pthread_key_t)lVar6;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            lVar4 = local_68;
            if (((local_60 == '\0') && (local_68 != 0)) &&
               ((FUN_00d50b00(), local_60 != '\0' && (local_68 != 0)))) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266020(0);
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            local_d0 = lVar4;
            local_c8 = '\0';
            FUN_0039e8b0();
            local_a8 = local_68;
            local_a0 = 0;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_a0 = '\x01';
            FUN_00e7bdb0();
            FUN_01287c80();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar5 = local_ac + 1;
        local_40 = CONCAT44(local_40._4_4_,pVar5);
      } while ((int)pVar5 < *(int *)(local_e8 + 0xc));
    }
    FUN_001150f0();
    lVar4 = local_48;
  }
LAB_0132e873:
  local_48 = lVar4;
  local_b8 = '\0';
  local_c0 = (longlong *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_0132f280(&local_f8,&local_c0,0,0);
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0126f610 — 2249 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0126f993) */
/* WARNING: Removing unreachable block (ram,0x0126f99c) */
/* WARNING: Removing unreachable block (ram,0x0126f732) */
/* WARNING: Removing unreachable block (ram,0x0126f73b) */
/* WARNING: Removing unreachable block (ram,0x0126f660) */
/* WARNING: Removing unreachable block (ram,0x0126f669) */
/* WARNING: Removing unreachable block (ram,0x0126f941) */
/* WARNING: Removing unreachable block (ram,0x0126fa0a) */
/* WARNING: Removing unreachable block (ram,0x0126fa16) */
/* WARNING: Removing unreachable block (ram,0x0126fa8f) */
/* WARNING: Removing unreachable block (ram,0x0126fa9f) */

void FUN_0126f610(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  uint uVar14;
  longlong unaff_RDI;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong local_80;
  longlong local_78;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_38;
  
  FUN_0125e7c0();
  lVar11 = local_58;
  if (local_58 == 0) {
    bVar7 = true;
    local_48 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0xe0);
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar7 = false;
    lVar2 = *(longlong *)(unaff_RDI + 0xe0);
    local_48 = local_58;
  }
  pVar12 = (pthread_key_t)lVar11;
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    FUN_00d50b00();
    local_78 = lVar2;
  }
  pvVar9 = _pthread_getspecific(pVar12);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  local_80 = local_58;
  lVar11 = local_58;
  if (local_58 == 0) {
    bVar3 = true;
    local_80 = 0;
  }
  else if (local_50 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  uVar14 = *(uint *)(local_78 + 0xc);
  if ((int)uVar14 < 1) {
    bVar6 = false;
    lVar13 = 0;
    bVar4 = false;
    local_38 = 0;
  }
  else {
    lVar15 = (ulonglong)uVar14 + 1;
    local_38 = 0;
    bVar4 = false;
    bVar6 = false;
    lVar10 = 0;
    do {
      uVar14 = uVar14 - 1;
      lVar11 = *(longlong *)(*(longlong *)(local_78 + 0x10) + (ulonglong)uVar14 * 8);
      pVar12 = uVar14;
      if (local_38 == lVar11) {
        if ((!bVar4) && (local_38 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          local_38 = lVar11;
        }
        else {
          bVar4 = true;
          local_38 = lVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_58 == lVar10) {
        if ((bVar6) || (local_58 == 0)) {
joined_r0x0126f929:
          lVar13 = lVar10;
          bVar5 = bVar6;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar13 = lVar10;
          bVar5 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_0126f915;
          }
        }
      }
      else {
        lVar13 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar6) && (lVar10 != 0)) {
            FUN_00d50b20();
            lVar10 = local_58;
LAB_0126f915:
            bVar6 = true;
            goto joined_r0x0126f929;
          }
        }
        else {
          bVar5 = true;
          if ((bVar6) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar6 = bVar5;
      local_50 = '\0';
      lVar11 = lVar13;
      cVar8 = FUN_00d24090();
      if (cVar8 == '\0') {
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013ddad0();
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar11);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar11 = local_38;
        }
        FUN_011ef3f0();
        FUN_0126e8b0();
      }
      lVar15 = lVar15 + -1;
      lVar10 = lVar13;
      local_58 = lVar13;
    } while (1 < lVar15);
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(local_80 + 0x10) + lVar10 * 8);
      if (lVar13 == lVar11) {
        if (bVar6) {
          iVar1 = *(int *)(local_78 + 0xc);
        }
        else {
          if (lVar13 != 0) {
            FUN_00d50b00();
            goto LAB_0126fb33;
          }
          iVar1 = *(int *)(local_78 + 0xc);
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        if ((bVar6) && (lVar13 != 0)) {
          FUN_00d50b20();
          lVar13 = lVar11;
LAB_0126fb33:
          bVar6 = true;
          iVar1 = *(int *)(local_78 + 0xc);
        }
        else {
          bVar6 = true;
          iVar1 = *(int *)(local_78 + 0xc);
          lVar13 = lVar11;
        }
      }
      if (0 < iVar1) {
        lVar11 = 0;
        do {
          pvVar9 = _pthread_getspecific((pthread_key_t)local_78);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 == lVar13) goto LAB_0126fae0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(local_78 + 0xc));
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)local_78);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013ddd70();
      if (local_58 == local_38) {
        lVar11 = local_38;
        bVar5 = bVar4;
        if ((!bVar4) && (local_58 != 0)) {
          bVar5 = true;
          if (local_50 != '\0') goto LAB_0126fd34;
          FUN_00d50b00();
          bVar5 = true;
        }
LAB_0126fd20:
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar11 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar4) && (local_38 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0126fd20;
        }
        bVar5 = true;
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_0126fd34:
      FUN_01265db0();
      local_38 = lVar11;
      bVar4 = bVar5;
LAB_0126fae0:
      lVar10 = lVar10 + 1;
      lVar11 = local_80;
    } while (lVar10 < *(int *)(local_80 + 0xc));
  }
  pVar12 = (pthread_key_t)lVar11;
  pvVar9 = _pthread_getspecific(pVar12);
  if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar12 = (pthread_key_t)local_48;
  }
  dVar16 = (double)FUN_013def20();
  if ((*(double *)(unaff_RDI + 0xb8) != dVar16) ||
     (NAN(*(double *)(unaff_RDI + 0xb8)) || NAN(dVar16))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xb8) = dVar16;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific(pVar12);
  if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar12 = (pthread_key_t)local_48;
  }
  dVar17 = (double)FUN_013defa0();
  dVar16 = *(double *)(unaff_RDI + 0xf0);
  pvVar9 = _pthread_getspecific(pVar12);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar18 = (double)FUN_013de9b0();
  dVar18 = (dVar17 + dVar16) - dVar18;
  if ((*(double *)(unaff_RDI + 0xc0) != dVar18) ||
     (NAN(*(double *)(unaff_RDI + 0xc0)) || NAN(dVar18))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xc0) = dVar18;
    FUN_00d64910();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((bVar6) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar7 && local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0132c9b0 — 1974 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0132d0b1) */
/* WARNING: Removing unreachable block (ram,0x0132d0bd) */
/* WARNING: Removing unreachable block (ram,0x0132cae8) */
/* WARNING: Removing unreachable block (ram,0x0132caf4) */
/* WARNING: Removing unreachable block (ram,0x0132cbd4) */
/* WARNING: Removing unreachable block (ram,0x0132cbe0) */
/* WARNING: Removing unreachable block (ram,0x0132d0f1) */
/* WARNING: Removing unreachable block (ram,0x0132d0fd) */

void FUN_0132c9b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  char *pcVar8;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0x200) == 0) {
    FUN_01505340();
    local_50 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_0132c660(param_1,0);
    local_80 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_50;
    }
    FUN_01505960();
    if (*(longlong *)(unaff_RSI + 0x58) != 0) {
      FUN_00d50b00();
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = (pthread_key_t)local_50;
      }
      FUN_016cbba0();
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
      FUN_015056c0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_50;
    }
    FUN_015058d0();
    lVar5 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_58 = lVar5;
    if (*(longlong *)(unaff_RSI + 0x68) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      lVar5 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = *(longlong *)(unaff_RSI + 0x68);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        FUN_01512830();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(unaff_RSI + 0x68) != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510280();
        lVar5 = local_48;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar5 = *(longlong *)(unaff_RSI + 0x68);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_01512890();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_58;
    }
    FUN_0150eff0();
    FUN_00d23310();
    lVar5 = local_48;
    local_90 = local_40[0];
    pcVar6 = &local_90;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 == '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    lVar2 = local_48;
    lVar1 = local_80;
    pcVar6 = local_38;
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = pcVar6;
    }
    local_38[0] = local_40[0];
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pVar7 = (pthread_key_t)pcVar6;
    if ((local_38[0] == '\0') && (lVar2 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    lVar3 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ddd0();
    FUN_00e7bdb0();
    FUN_01287c80();
    *unaff_RDI = local_50;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
  }
  return;
}




// ============================================================
// @01271180 — 1940 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01271647) */
/* WARNING: Removing unreachable block (ram,0x012718c9) */

undefined8 * FUN_01271180(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar14;
  undefined8 *local_70;
  undefined8 *local_58;
  char local_50 [32];
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  local_58 = (undefined8 *)*unaff_RSI;
  local_50[0] = '\0';
  FUN_00d243f0();
  if ((local_50[0] != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d227d0();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  local_50[0x10] = '\0';
  local_50[0x18] = '\0';
  puVar12 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)0x0;
  bVar1 = false;
  local_70 = (undefined8 *)0x0;
  do {
    if (*(int *)((longlong)puVar4 + 0xc) == 0) {
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_50[0x18] != '\0') && (puVar12 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0x10] != '\0') && (puVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    FUN_00d23340();
    local_50[8] = local_50[0];
    pcVar6 = local_50;
    if (local_50[0] == '\0') {
      pcVar6 = local_50 + 8;
    }
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == puVar10) {
      if (((local_50[0x10] == '\0') && (local_58 != (undefined8 *)0x0)) && (local_50[8] != '\0'))
      goto LAB_012712e9;
    }
    else {
      bVar14 = puVar10 != (undefined8 *)0x0;
      puVar10 = local_58;
      if (local_50[8] == '\0') {
        pcVar6 = local_50 + 0x10;
        if (bVar14 && local_50[0x10] != '\0') {
          FUN_00d50b20();
          pcVar6 = local_50 + 0x10;
        }
      }
      else {
        if (bVar14 && local_50[0x10] != '\0') {
          FUN_00d50b20();
        }
LAB_012712e9:
        local_50[0x10] = '\x01';
        pcVar6 = local_50 + 8;
      }
      *pcVar6 = '\0';
    }
    if ((local_50[8] != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 == (undefined8 *)0x0) {
      FUN_00d23740();
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      if (puVar7 == local_70) {
        puVar7 = local_70;
        if (bVar1) {
          FUN_00d50b20();
          bVar14 = bVar1;
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = true;
        if ((bVar1) && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = bVar14;
      local_50[0] = '\0';
      puVar11 = puVar7;
      FUN_00d21140();
      if ((local_50[0] != '\0') && (puVar7 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_50[0] = '\0';
      FUN_00d21140();
      if ((local_50[0] != '\0') && (puVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
      puVar13 = puVar12;
      local_58 = puVar10;
      if (puVar12 != puVar10) {
        if ((local_50[0x18] != '\0') && (puVar12 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_50[0x18] = '\0';
        puVar13 = puVar10;
      }
      while( true ) {
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar13[0x14];
        }
        else {
          lVar9 = *(longlong *)(puVar13[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar9 == 0) break;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar13[0x14];
        }
        else {
          lVar9 = *(longlong *)(puVar13[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        if (local_58 == puVar13) {
          if (((local_50[0x18] == '\0') && (local_58 != (undefined8 *)0x0)) &&
             (puVar12 = puVar13, local_50[0] != '\0')) goto LAB_0127158a;
        }
        else {
          if (local_50[0] == '\0') {
            pcVar6 = local_50 + 0x18;
            puVar11 = local_58;
            if (puVar13 != (undefined8 *)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
              pcVar6 = local_50 + 0x18;
            }
          }
          else {
            puVar12 = local_58;
            if (puVar13 != (undefined8 *)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
            }
LAB_0127158a:
            local_50[0x18] = '\x01';
            pcVar6 = local_50;
            puVar11 = puVar12;
          }
          *pcVar6 = '\0';
          puVar13 = puVar11;
        }
        if ((local_50[0] != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        local_50[0] = '\0';
        iVar3 = FUN_00d23d20();
        if ((local_50[0] != '\0') && (puVar13 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = puVar13;
        if (iVar3 == -1) break;
        local_50[0] = '\0';
        FUN_00d21140();
        if ((local_50[0] != '\0') && (puVar13 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (undefined8 *)0x0;
        local_50[0] = '\0';
        FUN_00d233f0();
      }
      puVar12 = puVar10;
      if (puVar13 != puVar10) {
        if ((local_50[0x18] != '\0') && (puVar13 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_50[0x18] = '\0';
      }
      while( true ) {
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar12[0x15];
        }
        else {
          lVar9 = *(longlong *)(puVar12[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa8);
        }
        local_70 = puVar7;
        if (lVar9 == 0) break;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar12[0x15];
        }
        else {
          lVar9 = *(longlong *)(puVar12[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa8);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        if (local_58 == puVar12) {
          if (((local_50[0x18] == '\0') && (local_58 != (undefined8 *)0x0)) &&
             (puVar13 = puVar12, local_50[0] != '\0')) goto LAB_0127180a;
        }
        else {
          if (local_50[0] == '\0') {
            pcVar6 = local_50 + 0x18;
            puVar11 = local_58;
            if (puVar12 != (undefined8 *)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
              pcVar6 = local_50 + 0x18;
            }
          }
          else {
            puVar13 = local_58;
            if (puVar12 != (undefined8 *)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
            }
LAB_0127180a:
            local_50[0x18] = '\x01';
            pcVar6 = local_50;
            puVar11 = puVar13;
          }
          *pcVar6 = '\0';
          puVar12 = puVar11;
        }
        if ((local_50[0] != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        local_50[0] = '\0';
        iVar3 = FUN_00d23d20();
        if ((local_50[0] != '\0') && (puVar12 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = puVar12;
        if (iVar3 == -1) break;
        local_50[0] = '\0';
        FUN_00d23370();
        if ((local_50[0] != '\0') && (puVar12 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (undefined8 *)0x0;
        local_50[0] = '\0';
        FUN_00d233f0();
      }
    }
  } while( true );
}




// ============================================================
// @012783e0 — 1933 bytes
// ============================================================

void FUN_012783e0(void)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char cVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  longlong local_c8;
  char local_c0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  double local_78;
  longlong local_70;
  double local_60;
  double local_48;
  ulonglong local_38;
  
  local_a8 = 0;
  local_a0 = 0;
  FUN_01271d60(&local_a8,1);
  if ((local_c0 == '\0') && (local_c8 != 0)) {
    FUN_00d50b00();
  }
  local_70 = local_c8;
  local_98 = *unaff_RDI;
  if (*(int *)(local_98 + 0xc) < 1) {
    local_38 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = 0;
    lVar10 = 0;
    lVar3 = 0;
    local_38 = 0;
    do {
      pVar7 = (pthread_key_t)lVar3;
      lVar3 = *(longlong *)(local_98 + 0x10);
      lVar6 = *(longlong *)(lVar3 + lVar12 * 8);
      if (lVar10 == lVar6) {
        if (((char)local_38 == '\0') && (lVar10 != 0)) {
          local_38 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          lVar3 = FUN_00d50b00();
        }
        if (((char)local_38 == '\0') || (lVar10 == 0)) {
          local_38 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          lVar10 = lVar6;
        }
        else {
          uVar4 = FUN_00d50b20();
          local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          lVar10 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_78 = *(double *)(lVar3 + 0xe8) + *(double *)(lVar3 + 0xf0);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar13 = *(double *)(lVar3 + 0xe8);
      dVar14 = *(double *)(lVar3 + 0xb8);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar1 = *(double *)(lVar3 + 0xe8);
      dVar2 = *(double *)(lVar3 + 0xc0);
      plVar9 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      dVar13 = (double)(**(code **)(*plVar9 + 0x3d8))(dVar13 + dVar14,1);
      plVar9 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      local_60 = (double)(**(code **)(*plVar9 + 0x3d8))(dVar1 + dVar2,1);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar13 = dVar13 - *(double *)(lVar3 + 0xb8);
      plVar9 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      local_48 = (double)(**(code **)(*plVar9 + 0x3d8))(local_78,1);
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (local_48 - dVar13 < DAT_0241b6a8) {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = dVar13 + DAT_0241b6a8;
        pvVar5 = _pthread_getspecific(pVar7);
        lVar3 = lVar10;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        dVar14 = local_78 - local_48;
        local_48 = local_48 + dVar14;
        local_60 = local_60 + dVar14;
        if (*(longlong *)(lVar3 + 0xa0) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar5 = _pthread_getspecific(pVar7);
          if ((pvVar5 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
            lVar3 = *(longlong *)(lVar10 + 0xa0);
          }
          else {
            lVar3 = *(longlong *)
                     (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                     0xa0);
          }
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        lVar3 = lVar10;
        if ((*(double *)(lVar10 + 0xe8) != dVar13) ||
           (NAN(*(double *)(lVar10 + 0xe8)) || NAN(dVar13))) goto LAB_01278914;
      }
      else {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        if ((*(double *)(lVar3 + 0xe8) != dVar13) || (NAN(*(double *)(lVar3 + 0xe8)) || NAN(dVar13))
           ) {
LAB_01278914:
          FUN_00d64850();
          *(double *)(lVar3 + 0xe8) = dVar13;
          FUN_00d64910();
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_48 = local_48 - dVar13;
      if ((*(double *)(lVar3 + 0xf0) != local_48) ||
         (NAN(*(double *)(lVar3 + 0xf0)) || NAN(local_48))) {
        FUN_00d64850();
        *(double *)(lVar3 + 0xf0) = local_48;
        FUN_00d64910();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_60 = local_60 - dVar13;
      if ((*(double *)(lVar3 + 0xc0) != local_60) ||
         (NAN(*(double *)(lVar3 + 0xc0)) || NAN(local_60))) {
        FUN_00d64850();
        *(double *)(lVar3 + 0xc0) = local_60;
        FUN_00d64910();
      }
      lVar12 = lVar12 + 1;
      local_98 = *unaff_RDI;
      lVar3 = (longlong)*(int *)(local_98 + 0xc);
    } while (lVar12 < lVar3);
  }
  local_90 = 0;
  local_88 = local_70;
  local_80 = 0;
  FUN_0127e4d0(0);
  lVar3 = *unaff_RDI;
  if (*(int *)(lVar3 + 0xc) < 1) {
    cVar11 = (char)local_38;
  }
  else {
    lVar12 = 0;
    uVar8 = local_38;
    do {
      pVar7 = (pthread_key_t)uVar8;
      local_38 = local_38 & 0xffffffff;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar12 * 8);
      cVar11 = (char)local_38;
      if (lVar10 == lVar3) {
        lVar3 = lVar10;
        if ((cVar11 == '\0') && (lVar10 != 0)) {
          local_38 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_38 = 1;
        if ((cVar11 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar3;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
      lVar12 = lVar12 + 1;
      lVar3 = *unaff_RDI;
      uVar8 = (ulonglong)*(int *)(lVar3 + 0xc);
    } while (lVar12 < (longlong)uVar8);
    cVar11 = (char)local_38;
  }
  if (local_70 != 0) {
    cVar11 = (char)local_38;
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01274c40 — 1476 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012750b2) */
/* WARNING: Removing unreachable block (ram,0x01274d8f) */
/* WARNING: Removing unreachable block (ram,0x01274da4) */
/* WARNING: Removing unreachable block (ram,0x01274da9) */
/* WARNING: Removing unreachable block (ram,0x01274db1) */
/* WARNING: Removing unreachable block (ram,0x01274d95) */
/* WARNING: Removing unreachable block (ram,0x012751a4) */
/* WARNING: Removing unreachable block (ram,0x012751ac) */
/* WARNING: Removing unreachable block (ram,0x012751b5) */
/* WARNING: Removing unreachable block (ram,0x012750ee) */
/* WARNING: Removing unreachable block (ram,0x01275121) */
/* WARNING: Removing unreachable block (ram,0x01275126) */
/* WARNING: Removing unreachable block (ram,0x01274e58) */
/* WARNING: Removing unreachable block (ram,0x01274e61) */
/* WARNING: Removing unreachable block (ram,0x01274cd2) */
/* WARNING: Removing unreachable block (ram,0x01274cdb) */
/* WARNING: Removing unreachable block (ram,0x01274d34) */
/* WARNING: Removing unreachable block (ram,0x01274d3d) */
/* WARNING: Removing unreachable block (ram,0x01274fd6) */
/* WARNING: Removing unreachable block (ram,0x01274fe0) */
/* WARNING: Removing unreachable block (ram,0x01274fe9) */
/* WARNING: Removing unreachable block (ram,0x01275143) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01274c40(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t in_ECX;
  pthread_key_t pVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x100) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_40 == 0) {
    bVar5 = true;
    lVar11 = 0;
  }
  else {
    lVar11 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_0125e7c0();
  if (local_40 != 0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(in_ECX);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      in_ECX = (pthread_key_t)local_40;
    }
    FUN_013e61a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if (*(longlong *)(unaff_RSI + 0xa0) == 0) {
LAB_01274eb3:
        if (*(int *)(lVar11 + 0xc) < 1) {
          lVar7 = 0;
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          bVar4 = false;
          lVar12 = 0;
          if (NAN(param_1)) {
            lVar7 = 0;
            bVar4 = false;
            lVar12 = **(longlong **)(lVar11 + 0x10);
            lVar9 = lVar11;
            if (lVar12 != 0) {
              if (lVar12 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              lVar7 = lVar12;
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if (local_38 != '\0') {
              FUN_00d50b20();
            }
LAB_012751cc:
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if ((!bVar4) && (lVar7 != 0)) {
              FUN_00d50b00();
            }
            *unaff_RDI = lVar7;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            local_40 = lVar7;
            goto LAB_012751f5;
          }
          do {
            lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar12 * 8);
            lVar8 = lVar11;
            if (lVar7 == lVar9) {
              if ((!bVar4) && (lVar7 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar7 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar7 = lVar9;
              }
              else {
                bVar4 = true;
                lVar7 = lVar9;
              }
            }
            pVar10 = (pthread_key_t)lVar8;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            lVar9 = lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xe8);
            dVar2 = *(double *)(unaff_RSI + 0xe8);
            dVar3 = *(double *)(unaff_RSI + 0xf0);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((double)((ulonglong)(dVar1 - (dVar2 + dVar3)) & _DAT_023908f0) < param_1)
            goto LAB_012751cc;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar11 + 0xc));
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        local_40 = lVar7;
      }
      else {
        pvVar6 = _pthread_getspecific(in_ECX);
        lVar7 = unaff_RSI;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = (pthread_key_t)lVar7;
        FUN_012dff00();
        if (local_40 == 0) goto LAB_01274eb3;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_012751f5:
        bVar4 = false;
      }
      FUN_00d50b20();
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01275217;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01275217:
  if (!bVar5 && lVar11 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01275b30 — 1437 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0127602e) */
/* WARNING: Removing unreachable block (ram,0x01276037) */
/* WARNING: Removing unreachable block (ram,0x01276087) */
/* WARNING: Removing unreachable block (ram,0x01276090) */

undefined8 * FUN_01275b30(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar9;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar4 = (longlong *)*unaff_RSI;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    plVar4 = (longlong *)*unaff_RSI;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
  }
  dVar9 = (double)(**(code **)(*plVar4 + 0x398))();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25c86c0;
  *puVar3 = &DAT_025c86c0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  (*DAT_025c86d8)();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x1e] != dVar9) || (NAN((double)plVar4[0x1e]) || NAN(dVar9)))
    goto LAB_01275c4c;
  }
  else {
    plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x1e] != dVar9) || (NAN((double)plVar5[0x1e]) || NAN(dVar9))) {
LAB_01275c4c:
      FUN_00d64850();
      plVar5[0x1e] = (longlong)dVar9;
      FUN_00d64910();
    }
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x18] == dVar9) && (!NAN((double)plVar4[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  else {
    plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x18] == dVar9) && (!NAN((double)plVar5[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  FUN_00d64850();
  plVar5[0x18] = (longlong)dVar9;
  FUN_00d64910();
LAB_01275cf6:
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265bc0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  plVar5 = plVar4;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  FUN_013f82a0(DAT_0238fee8,plVar5[0x1e]);
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  FUN_01265f70();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  local_38[0] = local_48[0];
  pcVar6 = local_38;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  FUN_00d23310();
  pcVar6 = local_40;
  pcVar8 = local_48;
  if (local_48[0] == '\0') {
    pcVar8 = pcVar6;
  }
  local_40[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar7 = (pthread_key_t)pcVar6;
  if (local_40[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef3f0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd9a0();
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @01327e70 — 1431 bytes
// str: ""MUAudioSourceSibilantItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0132822a) */
/* WARNING: Removing unreachable block (ram,0x01328236) */
/* WARNING: Removing unreachable block (ram,0x013282c4) */
/* WARNING: Removing unreachable block (ram,0x013282d0) */
/* WARNING: Removing unreachable block (ram,0x0132833e) */
/* WARNING: Removing unreachable block (ram,0x0132834b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01327e70(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  uint uVar11;
  uint uVar12;
  pthread_key_t pVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined7 uVar18;
  ulonglong uVar17;
  longlong lVar19;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_68 = (longlong *)0x0;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  local_60 = local_58;
  if (local_58 == (longlong *)0x0) {
    bVar2 = true;
    bVar3 = true;
    local_60 = (longlong *)0x0;
    uVar11 = MACH_HEADER.filetype;
  }
  else {
    if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = false;
    uVar11 = *(uint *)((longlong)local_60 + 0xc);
  }
  if (0 < (int)uVar11) {
    lVar19 = (ulonglong)uVar11 + 1;
    plVar15 = (longlong *)0x0;
    lVar16 = 0;
    local_48 = 0;
    local_38 = 0;
    do {
      uVar11 = uVar11 - 1;
      lVar8 = local_60[2];
      lVar1 = *(longlong *)(lVar8 + (ulonglong)uVar11 * 8);
      uVar12 = uVar11;
      if (lVar16 == lVar1) {
        if (((char)local_48 == '\0') && (lVar16 != 0)) {
          local_48 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar8 = FUN_00d50b00();
        }
        if (((char)local_48 == '\0') || (lVar16 == 0)) {
          local_48 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          lVar16 = lVar1;
        }
        else {
          uVar9 = FUN_00d50b20();
          local_48 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          lVar16 = lVar1;
        }
      }
      local_40 = lVar16;
      pvVar7 = _pthread_getspecific(uVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_013dd6a0();
      plVar4 = local_58;
      uVar10 = (undefined7)((ulonglong)uVar9 >> 8);
      uVar18 = (undefined7)((ulonglong)lVar16 >> 8);
      if (local_58 == plVar15) {
        if (((char)local_38 != '\0') || (local_58 == (longlong *)0x0)) {
          uVar17 = local_38 & 0xffffffff;
          plVar4 = plVar15;
          goto joined_r0x0132810c;
        }
        local_38 = CONCAT71(uVar10,1);
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_013280b0;
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_68 = plVar4;
          uVar17 = CONCAT71(uVar18,1);
          if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar15 = plVar4;
LAB_013280b0:
            uVar17 = CONCAT71(uVar18,1);
            plVar4 = plVar15;
          }
joined_r0x0132810c:
          plVar15 = plVar4;
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_38 = uVar17 & 0xffffffff;
            goto LAB_01328157;
          }
          local_38 = uVar17 & 0xffffffff;
        }
        else {
          local_68 = local_58;
          if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
            local_38 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            plVar15 = plVar4;
            goto LAB_01328157;
          }
          local_38 = CONCAT71(uVar10,1);
          plVar15 = local_58;
        }
      }
LAB_01328157:
      lVar16 = local_40;
      if ((DAT_027c0190 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_027910a8 = FUN_007ef2d0();
        _DAT_02791090 = "MUAudioSourceSibilantItem";
        _DAT_02791098 = 200;
        _DAT_027910a0 = FUN_01103980;
        _DAT_027910b0 = 0;
        uRam00000000027910b8 = 0;
        _DAT_027910c0 = 0;
        uRam00000000027910c8 = 0;
        _DAT_027910d0 = 0;
        uRam00000000027910d8 = 0;
        _DAT_027910e0 = 0;
        uRam00000000027910e8 = 0;
        _DAT_027910f0 = 0;
        uRam00000000027910f8 = 0;
        _DAT_02791100 = 0;
        uRam0000000002791108 = 0;
        _DAT_02791110 = 0;
        uRam0000000002791118 = 0;
        _DAT_02791120 = 0;
        uRam0000000002791128 = 0;
        _DAT_02791130 = 0;
        uRam0000000002791138 = 0;
        _DAT_02791140 = 0;
        uRam0000000002791148 = 0;
        _DAT_02791150 = 0;
        ___cxa_guard_release();
        lVar16 = local_40;
      }
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar14 = &local_68;
        if (cVar5 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar15 = local_68;
      if (*pplVar14 != (longlong *)0x0) {
        if (((char)local_38 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)pplVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
        FUN_01328650();
        if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar13 = (pthread_key_t)pplVar14;
      pvVar7 = _pthread_getspecific(pVar13);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd650();
      plVar15 = local_68;
      if (local_68 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc570();
      }
      lVar19 = lVar19 + -1;
    } while (1 < lVar19);
    if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (((char)local_48 != '\0') && (lVar16 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01270af0 — 1301 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01270f2f) */
/* WARNING: Removing unreachable block (ram,0x01270f37) */
/* WARNING: Removing unreachable block (ram,0x01270f7d) */
/* WARNING: Removing unreachable block (ram,0x01270f3c) */
/* WARNING: Removing unreachable block (ram,0x01270d89) */
/* WARNING: Removing unreachable block (ram,0x01270d92) */
/* WARNING: Removing unreachable block (ram,0x01270e3e) */
/* WARNING: Removing unreachable block (ram,0x01270e43) */
/* WARNING: Removing unreachable block (ram,0x01270fa1) */
/* WARNING: Removing unreachable block (ram,0x01270fb0) */
/* WARNING: Removing unreachable block (ram,0x01270fb9) */
/* WARNING: Removing unreachable block (ram,0x01270f55) */
/* WARNING: Removing unreachable block (ram,0x01270fdd) */
/* WARNING: Removing unreachable block (ram,0x01270fea) */

undefined8 * FUN_01270af0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar6;
  bool bVar7;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  bVar7 = unaff_RSI == 0;
  if (bVar7) {
    unaff_RSI = 0;
  }
  else {
    FUN_00d50b00();
  }
  bVar7 = !bVar7;
  while( true ) {
    bVar1 = bVar7;
    lVar6 = unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(longlong *)(lVar6 + 0xa8);
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(longlong *)(lVar6 + 0xa8) == 0) goto LAB_01270c49;
LAB_01270ca0:
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if (local_40 != lVar6) goto LAB_01270ce9;
LAB_01270c60:
      unaff_RSI = lVar6;
      bVar7 = bVar1;
      if ((bVar1) || (local_40 == 0)) goto LAB_01270d4a;
      bVar7 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar7 = true;
LAB_01270d4a:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(longlong *)
           (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8) != 0
         ) goto LAB_01270ca0;
LAB_01270c49:
      local_38 = '\0';
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270c60;
LAB_01270ce9:
      unaff_RSI = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01270d4a;
      }
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d21140();
  local_40 = lVar6;
  while( true ) {
    lVar6 = local_40;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(longlong *)(local_40 + 0xa0);
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
               0xa0);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(longlong *)(local_40 + 0xa0) == 0) goto LAB_01270e89;
LAB_01270ee0:
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
LAB_01270ea0:
      lVar4 = lVar6;
      bVar7 = bVar1;
      if ((!bVar1) && (local_40 != 0)) {
        FUN_00d50b00();
        local_40 = lVar6;
LAB_01270f75:
        lVar4 = local_40;
        bVar7 = true;
      }
    }
    else {
      if (*(longlong *)
           (*(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa0)
          != 0) goto LAB_01270ee0;
LAB_01270e89:
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270ea0;
      local_40 = 0;
      lVar4 = local_40;
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
        goto LAB_01270f75;
      }
    }
    bVar1 = bVar7;
    FUN_00d21140();
    local_40 = lVar4;
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01273200 — 1144 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0127353f) */
/* WARNING: Removing unreachable block (ram,0x01273548) */
/* WARNING: Removing unreachable block (ram,0x01273372) */
/* WARNING: Removing unreachable block (ram,0x0127337b) */
/* WARNING: Removing unreachable block (ram,0x012733a8) */
/* WARNING: Removing unreachable block (ram,0x012733b1) */
/* WARNING: Removing unreachable block (ram,0x012734b4) */
/* WARNING: Removing unreachable block (ram,0x012734c0) */
/* WARNING: Removing unreachable block (ram,0x012735ac) */
/* WARNING: Removing unreachable block (ram,0x012735b8) */
/* WARNING: Removing unreachable block (ram,0x012733f5) */
/* WARNING: Removing unreachable block (ram,0x012733fe) */
/* WARNING: Removing unreachable block (ram,0x0127362a) */
/* WARNING: Removing unreachable block (ram,0x01273637) */
/* WARNING: Removing unreachable block (ram,0x012732c7) */
/* WARNING: Removing unreachable block (ram,0x012732f0) */
/* WARNING: Removing unreachable block (ram,0x012732c9) */
/* WARNING: Removing unreachable block (ram,0x012732f2) */
/* WARNING: Removing unreachable block (ram,0x01273438) */
/* WARNING: Removing unreachable block (ram,0x01273445) */

undefined8 * FUN_01273200(void)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_70;
  char local_68;
  int local_58;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    while( true ) {
      lVar7 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_58) break;
      local_70 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
      lVar7 = local_70;
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar7 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      if (*(longlong *)(lVar7 + 0x100) != 0) {
        iVar3 = FUN_00d237a0();
        if (iVar3 == -1) {
          FUN_00d21140();
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_02572358;
          (*pcVar2)();
          FUN_00d21140();
          FUN_00d50b20();
        }
        FUN_00d21140();
      }
    }
    FUN_001159b0();
  }
  plVar11 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar11 + 0x18))();
  FUN_012e8850();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (local_70 == 0) {
    *unaff_RDI = plVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar3 = 0;
      do {
        iVar4 = FUN_00d23d20();
        lVar1 = *(longlong *)(puVar5[2] + (longlong)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_70 + 0xc));
    }
    FUN_000be170();
    *unaff_RDI = plVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0132ec50 — 1034 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0132ee00) */
/* WARNING: Removing unreachable block (ram,0x0132ee09) */

void FUN_0132ec50(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong unaff_RDI;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_e0 [16];
  undefined1 local_d0 [8];
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  undefined1 local_31;
  
  local_31 = 0;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_90 = *(longlong *)(unaff_RDI + 0x40);
  if (local_90 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_0147ce20();
  lVar1 = local_b8;
  if (local_b0 == '\0') {
    if (((local_b8 != 0) && (FUN_00d50b00(), local_b0 != '\0')) && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_b0 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d242c0();
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 0x1ab) = 1;
  }
  else {
    local_b0 = '\0';
    local_b8 = 0;
    local_a8 = lVar1;
    local_98 = 0;
    local_a0 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar8 = 0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar8 * 8);
        uVar4 = uVar8;
        local_b8 = lVar9;
        pvVar3 = _pthread_getspecific(uVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        local_40 = local_60;
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = 0;
        FUN_00d50b00();
        local_48 = '\x01';
        local_78 = '\0';
        local_80 = puVar2;
        local_50 = unaff_RDI;
        FUN_014c03f0(&local_50,local_d0,&local_80);
        if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = *(int *)(puVar2 + 3);
        if (0xe < iVar5 + 7U) {
          if (lVar9 != 0) {
            FUN_00d50b00();
            iVar5 = *(int *)(puVar2 + 3);
          }
          if (iVar5 < 8) {
            if (lVar9 == 0) goto LAB_0132efed;
          }
          else {
            lVar7 = 0;
            do {
              local_c0 = 0;
              local_c8 = lVar9;
              FUN_0135f200(*(undefined8 *)(puVar2[2] + lVar7 * 8),&local_c8,local_e0,&local_31);
              if (local_60 == lVar9) {
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
                bVar10 = lVar9 != 0;
                lVar9 = local_60;
                if (bVar10) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar10 = lVar9 != 0;
                lVar9 = local_60;
                if (bVar10) {
                  FUN_00d50b20();
                }
              }
              if (lVar9 == 0) goto LAB_0132efed;
              lVar7 = lVar7 + 1;
              iVar5 = *(int *)(puVar2 + 3);
              iVar6 = iVar5 + 7;
              if (-1 < iVar5) {
                iVar6 = iVar5;
              }
            } while (lVar7 < iVar6 >> 3);
          }
          FUN_00d50b20();
        }
LAB_0132efed:
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar8 = uVar8 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,uVar8);
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_001150f0();
    *(undefined1 *)(unaff_RDI + 0x1ab) = 1;
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01327070 — 964 bytes
// ============================================================

void FUN_01327070(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_0141bab0();
    pVar4 = 0x132745c;
    uVar5 = DAT_02390124;
    param_1 = 0x132745c;
    switch(uVar2) {
    case 1:
      lVar1 = *(longlong *)(unaff_RDI + 0x148);
      pVar4 = 0x132745c;
      if (lVar1 != 0) {
        pVar4 = 0x132745c;
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0141bae0();
      uVar5 = DAT_0239011c;
      if (lVar1 != 0) {
        FUN_00d50b20();
        uVar5 = DAT_0239011c;
      }
      break;
    case 2:
      break;
    default:
      goto switchD_013273c1_caseD_3;
    }
  }
  else {
switchD_013273c1_caseD_3:
    pVar4 = param_1;
    uVar5 = DAT_0239011c;
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2ec0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f40(DAT_0239011c);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2fc0(uVar5);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3000(DAT_02390124);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3060(DAT_02390124);
  return;
}




// ============================================================
// @01327470 — 762 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0132777a) */
/* WARNING: Removing unreachable block (ram,0x01327787) */
/* WARNING: Removing unreachable block (ram,0x01327627) */
/* WARNING: Removing unreachable block (ram,0x01327630) */
/* WARNING: Removing unreachable block (ram,0x01327677) */
/* WARNING: Removing unreachable block (ram,0x013276a0) */
/* WARNING: Removing unreachable block (ram,0x01327679) */
/* WARNING: Removing unreachable block (ram,0x013276a2) */

void FUN_01327470(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  pthread_key_t pVar5;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  int local_40;
  
  *(undefined8 *)(unaff_RDI + 0x38) = 0;
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if ((local_80 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        pVar5 = 0;
        do {
          lVar1 = local_58;
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124c6e0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
              goto LAB_01327640;
            }
          }
          else if (local_58 != 0) {
LAB_01327640:
            local_50 = '\0';
            local_58 = 0;
            local_40 = -1;
            while( true ) {
              lVar3 = (longlong)local_40;
              local_40 = local_40 + 1;
              if (*(int *)(lVar1 + 0xc) <= local_40) break;
              lVar4 = *(longlong *)(lVar1 + 0x10);
              local_58 = *(longlong *)(lVar4 + 8 + lVar3 * 8);
              pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
              lVar3 = local_58;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                lVar3 = *(longlong *)
                         (local_58 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
              }
              if (*(longlong *)(lVar3 + 0x208) != 0) {
                FUN_00d64850();
                *(undefined8 *)(lVar3 + 0x208) = 0;
                FUN_00d64910();
              }
            }
            FUN_00115190();
            FUN_00d50b20();
          }
          pVar5 = pVar5 + 1;
        } while ((int)pVar5 < *(int *)(local_88 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
  }
  FUN_00d505d0();
  return;
}




// ============================================================
// @0126eaa0 — 729 bytes
// str: ""MUAudioSourceSibilantItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0126ed6e) */
/* WARNING: Removing unreachable block (ram,0x0126eb07) */
/* WARNING: Removing unreachable block (ram,0x0126eb30) */
/* WARNING: Removing unreachable block (ram,0x0126eb09) */
/* WARNING: Removing unreachable block (ram,0x0126eb32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_0126eaa0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int local_50;
  longlong *local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RSI + 0xe0);
  if (1 < *(int *)(lVar1 + 0xc)) {
    local_50 = -1;
LAB_0126eb03:
    while( true ) {
      lVar5 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) break;
      lVar8 = *(longlong *)(lVar1 + 0x10);
      lVar5 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar7 = (pthread_key_t)lVar8;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_38 == '\0') goto LAB_0126ebb0;
      if (local_40 != (longlong *)0x0) goto LAB_0126ebe0;
    }
    FUN_0015edf0();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
LAB_0126ebb0:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0126ebe0:
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    plVar2 = local_40;
    if ((DAT_027c0190 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_027910a8 = FUN_007ef2d0();
      _DAT_02791090 = "MUAudioSourceSibilantItem";
      _DAT_02791098 = 200;
      _DAT_027910a0 = FUN_01103980;
      _DAT_027910b0 = 0;
      uRam00000000027910b8 = 0;
      _DAT_027910c0 = 0;
      uRam00000000027910c8 = 0;
      _DAT_027910d0 = 0;
      uRam00000000027910d8 = 0;
      _DAT_027910e0 = 0;
      uRam00000000027910e8 = 0;
      _DAT_027910f0 = 0;
      uRam00000000027910f8 = 0;
      _DAT_02791100 = 0;
      uRam0000000002791108 = 0;
      _DAT_02791110 = 0;
      uRam0000000002791118 = 0;
      _DAT_02791120 = 0;
      uRam0000000002791128 = 0;
      _DAT_02791130 = 0;
      uRam0000000002791138 = 0;
      _DAT_02791140 = 0;
      uRam0000000002791148 = 0;
      _DAT_02791150 = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_40;
      if (cVar3 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar2 = *pplVar9;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      FUN_0015edf0();
      return unaff_RDI;
    }
    FUN_00d50b20();
  }
  goto LAB_0126eb03;
}




// ============================================================
// @01328810 — 713 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01328acd) */
/* WARNING: Removing unreachable block (ram,0x01328ada) */
/* WARNING: Removing unreachable block (ram,0x01328967) */
/* WARNING: Removing unreachable block (ram,0x01328970) */
/* WARNING: Removing unreachable block (ram,0x01328a93) */
/* WARNING: Removing unreachable block (ram,0x01328a9c) */
/* WARNING: Removing unreachable block (ram,0x013288af) */
/* WARNING: Removing unreachable block (ram,0x013288d0) */
/* WARNING: Removing unreachable block (ram,0x013288b1) */
/* WARNING: Removing unreachable block (ram,0x013288d2) */
/* WARNING: Removing unreachable block (ram,0x0132899d) */
/* WARNING: Removing unreachable block (ram,0x013289aa) */

void FUN_01328810(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar6;
  int local_50;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  puVar5 = *(undefined **)(unaff_RSI + 200);
  if (puVar5 != (undefined *)0x0) {
    local_50 = -1;
LAB_013288ab:
    while (local_50 = local_50 + 1, local_50 < *(int *)(puVar5 + 0xc)) {
      pvVar3 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(puVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      if (local_38 == '\0') goto LAB_01328950;
      if (local_40 != 0) goto LAB_01328980;
    }
    FUN_0131c8b0();
    puVar4 = puVar5;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc000();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01328ab0;
          }
        }
        else if (local_40 != 0) {
LAB_01328ab0:
          local_38 = '\0';
          FUN_00d235a0();
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_013dc230();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
LAB_01328950:
  if (local_40 != 0) {
    FUN_00d50b00();
LAB_01328980:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_013288ab;
}




// ============================================================
// @01278c70 — 578 bytes
// ============================================================

void FUN_01278c70(undefined4 param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  lVar2 = *unaff_RSI;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
    FUN_00d23310();
    pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_60[0]);
    plVar5 = &local_40;
    if (local_60[0] != '\0') {
      plVar5 = (longlong *)local_60;
    }
    local_40 = CONCAT71(local_40._1_7_,local_60[0]);
    *(char *)plVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
      lVar2 = *(longlong *)(local_68 + 0x48);
    }
    else {
      lVar2 = *(longlong *)
               (*(longlong *)(local_68 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8) +
               0x48);
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_0025e9a0();
      if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *unaff_RSI;
      if (lVar2 != 0) {
        local_60[0] = 0;
        local_48 = 0;
        local_50 = 0;
        local_58 = lVar2;
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar7 = 0;
          do {
            lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
            pvVar1 = _pthread_getspecific(pVar4);
            if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
            }
            lVar6 = *(longlong *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_40 = lVar6;
            FUN_00d235a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
            local_50 = CONCAT44(local_50._4_4_,(int)lVar7);
          } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
        }
        FUN_001159b0();
      }
      *unaff_RDI = local_68;
      goto LAB_01278e9b;
    }
    lVar2 = *unaff_RSI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((char)unaff_RSI[1] != '\0') {
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    return;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar2;
LAB_01278e9b:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01329cf0 — 567 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01329d6d) */
/* WARNING: Removing unreachable block (ram,0x01329d79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01329cf0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong *unaff_RDI;
  double dVar3;
  double dVar4;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pVar2 = (pthread_key_t)param_1;
  local_88 = *param_1;
  local_80 = '\0';
  FUN_012e0130(pVar2,&local_88);
  local_58 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)FUN_01259520();
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar4 = (double)FUN_0125a280();
  if (DAT_023b67d8 < (double)((ulonglong)(dVar3 - dVar4) & _DAT_023908f0)) {
    local_78 = *param_2;
    local_70 = '\0';
    FUN_0039e8b0();
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
    local_60 = '\0';
    local_68 = 0;
    FUN_0127e4d0(0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @0126f100 — 565 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0126f1b7) */
/* WARNING: Removing unreachable block (ram,0x0126f1c0) */
/* WARNING: Removing unreachable block (ram,0x0126f141) */
/* WARNING: Removing unreachable block (ram,0x0126f14a) */
/* WARNING: Removing unreachable block (ram,0x0126f226) */
/* WARNING: Removing unreachable block (ram,0x0126f22f) */

undefined1 * FUN_0126f100(pthread_key_t param_1)

{
  double dVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_40;
  char local_38;
  
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return (undefined1 *)0x0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return (undefined1 *)0x0;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_0126f20c;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_0126f20c:
    puVar4 = &DAT_02802501;
    goto LAB_0126f31c;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc240();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0126f234;
    }
LAB_0126f281:
    puVar4 = &DAT_02802501;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_0126f281;
LAB_0126f234:
    pvVar2 = _pthread_getspecific(param_1);
    plVar5 = local_40;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    dVar1 = (double)(**(code **)(*plVar5 + 0x380))(0);
    if ((float)dVar1 <= DAT_023d59b4) {
      pvVar2 = _pthread_getspecific(param_1);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_014bb310();
      dVar1 = (double)(**(code **)(*local_40 + 0x3a8))(0,uVar6);
      puVar4 = (undefined1 *)CONCAT71(0x28025,(float)dVar1 <= DAT_023d59b4);
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0126f31c:
  FUN_00d50b20();
  return puVar4;
}




// ============================================================
// @0132c660 — 547 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0132c80e) */
/* WARNING: Removing unreachable block (ram,0x0132c817) */

void FUN_0132c660(pthread_key_t param_1)

{
  void *pvVar1;
  pthread_key_t pVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012c9e50(param_1,0);
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
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
  FUN_00d23310();
  pVar2 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_0132b1c0(0);
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f49a0();
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @012756a0 — 513 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01275806) */
/* WARNING: Removing unreachable block (ram,0x0127580f) */

void FUN_012756a0(double param_1)

{
  double dVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  char unaff_SIL;
  longlong unaff_RDI;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong local_38;
  char local_30;
  
  dVar6 = *(double *)(unaff_RDI + 0xb8);
  dVar7 = *(double *)(unaff_RDI + 0xc0);
  dVar1 = *(double *)(unaff_RDI + 0xf0);
  param_1 = param_1 + dVar1;
  dVar4 = dVar1 - dVar6;
  dVar5 = (dVar7 - dVar6) / dVar4;
  if ((dVar1 != param_1) || (NAN(dVar1) || NAN(param_1))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xf0) = param_1;
    FUN_00d64910();
    dVar6 = *(double *)(unaff_RDI + 0xb8);
    dVar7 = *(double *)(unaff_RDI + 0xc0);
    dVar4 = *(double *)(unaff_RDI + 0xf0) - dVar6;
  }
  dVar6 = dVar5 * dVar4 + dVar6;
  if ((dVar7 != dVar6) || (NAN(dVar7) || NAN(dVar6))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xc0) = dVar6;
    FUN_00d64910();
  }
  if ((unaff_SIL != '\0') && (*(longlong *)(unaff_RDI + 0xa0) != 0)) {
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    if (local_30 == '\0') {
      if (local_38 == 0) goto LAB_01275889;
      FUN_00d50b00();
    }
    else if (local_38 == 0) goto LAB_01275889;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0126ee50();
    if (cVar2 == '\0') {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
    }
    FUN_00d50b20();
  }
LAB_01275889:
  FUN_0125a5f0();
  return;
}



