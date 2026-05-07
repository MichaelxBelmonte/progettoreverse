// Reconstructed implementation of GNFraction
// From MikeCore binary — reverse-engineered pseudocode

#include "GNFraction.h"

// ============================================================
// @01532cf0 — 9782 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01533981) */
/* WARNING: Removing unreachable block (ram,0x0153398d) */

undefined8 * FUN_01532cf0(pthread_key_t param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  dword *pdVar10;
  undefined8 *puVar11;
  char cVar12;
  byte bVar13;
  pthread_key_t pVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar18;
  char cVar19;
  uint uVar20;
  bool bVar21;
  ulonglong uVar22;
  int iVar23;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar24;
  ulonglong uVar25;
  dword *pdVar26;
  double dVar27;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar28 [16];
  longlong *local_2f0;
  undefined1 local_2e8;
  code *local_2c8;
  char local_2c0;
  code *local_2b8;
  char local_2b0;
  code *local_2a8;
  char local_2a0;
  dword *local_298;
  char local_290;
  code *local_288;
  char local_280;
  dword *local_278;
  char local_270;
  undefined8 *local_268;
  char local_260;
  dword *local_258;
  char local_250;
  dword *local_248;
  char local_240;
  undefined8 *local_238;
  char local_230;
  pthread_key_t local_228;
  undefined4 local_224;
  double local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  char local_1d8;
  dword *local_1d0;
  char local_1c8;
  dword *local_1c0;
  char local_1b8;
  dword *local_1b0;
  char local_1a8;
  dword *local_1a0;
  char local_198;
  code *local_190;
  char local_188;
  code *local_180;
  char local_178;
  code *local_170;
  char local_168;
  code *local_160;
  char local_158;
  code *local_150;
  char local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  dword *local_120;
  uint local_118;
  int local_114;
  double local_110;
  dword *local_108;
  undefined4 local_fc;
  code *local_f8;
  undefined4 local_ec;
  dword *local_e8;
  dword *local_e0;
  undefined4 local_d4;
  dword *local_d0;
  longlong *local_c8;
  undefined8 local_b8;
  char local_b0;
  code *local_a8;
  undefined8 local_a0;
  int local_98;
  dword *local_90;
  dword *local_88;
  char local_80;
  dword *local_78;
  undefined8 local_70;
  int local_68;
  code *local_60;
  dword *local_58;
  dword *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  dword *pdVar17;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_228 = param_1;
  local_224 = param_3;
  local_1e4 = param_4;
  local_118 = param_2;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  local_e0 = local_88;
  if (local_80 == '\0') {
    if (local_88 == (dword *)0x0) goto LAB_01532e18;
    FUN_00d50b00();
    if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
LAB_01532dba:
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = (pthread_key_t)local_e0;
    }
    FUN_01505900();
    local_d4 = 0;
  }
  else {
    if (local_88 != (dword *)0x0) goto LAB_01532dba;
LAB_01532e18:
    uVar5 = FUN_016c0a70();
    local_d4 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  local_50 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (dword *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  local_fc = 0xffffffff;
  local_ec = 0xffffffff;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar14 = (pthread_key_t)&local_ec;
  FUN_016c45d0(*(double *)(unaff_RSI + 0x18) + DAT_0241b698,&local_fc);
  pvVar4 = _pthread_getspecific(pVar14);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar16 = &local_ec;
  FUN_016c4630(puVar16,2);
  pVar14 = (pthread_key_t)puVar16;
  pvVar4 = _pthread_getspecific(pVar14);
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar14 = (pthread_key_t)local_50;
  }
  local_128 = FUN_016c4760();
  pvVar4 = _pthread_getspecific(pVar14);
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar14 = (pthread_key_t)local_50;
  }
  local_110 = (double)FUN_016c98e0();
  pdVar26 = (dword *)(local_110 - *(double *)(unaff_RSI + 0x18));
  local_108 = (dword *)0x0;
  local_120 = (dword *)0x0;
  if (0.0 <= (double)pdVar26) {
    local_120 = pdVar26;
  }
  local_114 = 4;
  local_220 = DAT_023942d0;
  if (((char)local_1e4 == '\0') && (((double)local_120 != 0.0 || (NAN((double)local_120))))) {
    local_b8 = (code *)FUN_00e7bcc0();
    pvVar4 = _pthread_getspecific(pVar14);
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar14 = (pthread_key_t)local_50;
    }
    local_58 = (dword *)FUN_016c9410();
    pvVar4 = _pthread_getspecific(pVar14);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar14 = 0;
    FUN_016ca840(0,local_128,0,&local_ec);
    pdVar26 = local_88;
    if ((((local_80 == '\0') && (local_88 != (dword *)0x0)) && (FUN_00d50b00(), local_80 != '\0'))
       && (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    dVar27 = (double)FUN_00e7c860();
    if (dVar27 <= (double)local_120 / (DAT_023b4df8 / (double)local_58)) {
      FUN_00e7cd00();
      FUN_0123ff00();
      FUN_0123fc50();
      pdVar17 = local_88;
      if (((local_80 == '\0') && (local_88 != (dword *)0x0)) &&
         ((FUN_00d50b00(), local_80 != '\0' && (local_88 != (dword *)0x0)))) {
        FUN_00d50b20();
      }
      local_140 = FUN_0123fef0();
      local_114 = FUN_0123ff00();
      if (pdVar17 != (dword *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = (dword *)FUN_0123fff0();
      FUN_00e7b820();
      pvVar4 = _pthread_getspecific(pVar14);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar14 = (pthread_key_t)local_50;
      }
      local_110 = (double)FUN_016c98e0();
      local_58 = *(dword **)(unaff_RSI + 0x18);
      local_140 = FUN_0123fef0();
      local_114 = FUN_0123ff00();
      local_120 = (dword *)(local_110 - (double)local_58);
    }
    local_108 = (dword *)((double)((int)local_140 * 4) / (double)local_114);
    local_220 = (double)local_120 / (double)local_108;
    if (DAT_02423860 < local_220) {
      auVar28._0_8_ = local_220 / DAT_02423860;
      auVar28._8_8_ = 0;
      auVar28 = roundsd(auVar28,auVar28,0xb);
      local_220 = local_220 / auVar28._0_8_;
      local_108 = (dword *)((double)local_108 * auVar28._0_8_);
    }
    if (pdVar26 != (dword *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    local_140 = 4;
  }
  if ((char)local_118 == '\0') {
    local_1f0 = 0;
    local_c8 = (longlong *)0x0;
    local_e8 = (dword *)0x0;
  }
  else {
    pdVar26 = (dword *)FUN_00e8fc40();
    FUN_0038cc50();
    (**(code **)(*(longlong *)pdVar26 + 0x18))();
    local_210 = 0;
    local_218 = *(longlong *)(unaff_RSI + 0x10);
    local_58 = pdVar26;
    if (local_218 != 0) {
      FUN_00d50b00();
    }
    local_210 = '\x01';
    FUN_012d1940();
    if ((local_210 != '\0') && (local_218 != 0)) {
      FUN_00d50b20();
    }
    pdVar26 = local_58;
    (**(code **)(*(longlong *)local_58 + 0x398))(DAT_02410f78);
    (**(code **)(*(longlong *)pdVar26 + 0x3a0))();
    FUN_00b335a0();
    FUN_012dc370();
    (**(code **)(*(longlong *)pdVar26 + 0x418))();
    (**(code **)(*(longlong *)pdVar26 + 0x368))();
    local_48 = 0.0;
    uStack_40 = 0;
    (**(code **)(*(longlong *)pdVar26 + 0x400))(0x100);
    pdVar26 = (dword *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined **)pdVar26 = &DAT_02572358;
    (*DAT_02572370)();
    local_e8 = pdVar26;
    FUN_012d5c40();
    local_90 = local_88;
    if ((((local_80 == '\0') && (local_88 != (dword *)0x0)) && (FUN_00d50b00(), local_80 != '\0'))
       && (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    local_c8 = plVar7;
    if (local_90 != (dword *)0x0) {
      local_80 = '\0';
      local_88 = (dword *)0x0;
      local_78 = local_90;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_70._4_4_ = 0;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar23 = -local_70._4_4_;
          }
          else {
            iVar23 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar23);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar23 = 0;
          }
          local_70 = CONCAT44(iVar23,(int)local_70);
        }
        lVar6 = (longlong)(int)local_70;
        iVar23 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar23);
        if ((int)local_78[3] <= iVar23) break;
        lVar18 = *(longlong *)(local_78 + 4);
        local_88 = *(dword **)(lVar18 + 8 + lVar6 * 8);
        FUN_01312040();
        pVar14 = (pthread_key_t)lVar18;
        if (local_b0 == '\0') {
          if (local_b8 != (code *)0x0) {
            local_f8 = local_b8;
            FUN_00d50b00();
            if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_015335d0;
          }
        }
        else {
          local_f8 = local_b8;
          if (local_b8 != (code *)0x0) {
LAB_015335d0:
            FUN_01308710();
            local_60 = local_b8;
            if (((local_b0 == '\0') && (local_b8 != (code *)0x0)) &&
               ((FUN_00d50b00(), local_b0 != '\0' && (local_b8 != (code *)0x0)))) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar14);
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar14 = (pthread_key_t)local_60;
            }
            cVar3 = FUN_012f49e0();
            if (cVar3 == '\0') {
              pvVar4 = _pthread_getspecific(pVar14);
              if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                pVar14 = (pthread_key_t)local_60;
              }
              local_d0 = (dword *)FUN_012ebfe0();
              pvVar4 = _pthread_getspecific(pVar14);
              if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                pVar14 = (pthread_key_t)local_60;
              }
              local_1f8 = (double)FUN_012ebd30();
              pvVar4 = _pthread_getspecific(pVar14);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012ea6f0(local_d0,local_1f8 - (double)local_d0);
              pcVar1 = local_b8;
              if (local_b0 == '\0') {
                if (local_b8 != (code *)0x0) {
                  FUN_00d50b00();
                  if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0153378a;
                }
              }
              else if (local_b8 != (code *)0x0) {
LAB_0153378a:
                local_b0 = '\0';
                local_b8 = (code *)0x0;
                local_a8 = pcVar1;
                local_a0 = 0xffffffff;
                local_98 = 0;
                uVar20 = 0;
                while( true ) {
                  if (uVar20 != 0) {
                    if ((int)uVar20 < 1) {
                      iVar23 = -uVar20;
                    }
                    else {
                      local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - uVar20);
                      FUN_00d23690();
                      local_98 = local_98 + local_a0._4_4_;
                      iVar23 = 0;
                    }
                    local_a0 = CONCAT44(iVar23,(int)local_a0);
                  }
                  lVar6 = (longlong)(int)local_a0;
                  iVar23 = (int)local_a0 + 1;
                  local_a0 = CONCAT44(local_a0._4_4_,iVar23);
                  if (*(int *)(local_a8 + 0xc) <= iVar23) break;
                  local_b8 = *(code **)(*(longlong *)(local_a8 + 0x10) + 8 + lVar6 * 8);
                  pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_a8 + 0x10));
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar3 = FUN_01263cf0();
                  uVar20 = local_a0._4_4_;
                  if (cVar3 != '\0') {
                    uVar20 = ~local_a0._4_4_;
                    local_a0 = CONCAT44(uVar20,(int)local_a0);
                  }
                }
                pcVar8 = local_a8;
                FUN_001159b0();
                uVar20 = *(uint *)(pcVar1 + 0xc);
                uVar22 = (ulonglong)uVar20;
                if (uVar22 != 0) {
                  lVar6 = FUN_00e83010();
                  pVar14 = (pthread_key_t)pcVar8;
                  uVar5 = extraout_XMM0_Qa;
                  if (0 < (int)uVar20) {
                    uVar25 = 0;
                    do {
                      pvVar4 = _pthread_getspecific((pthread_key_t)pcVar8);
                      if (pvVar4 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar5 = FUN_0126cd70();
                      pVar14 = (pthread_key_t)pcVar8;
                      *(int *)(lVar6 + uVar25 * 4) = (int)uVar5;
                      uVar25 = uVar25 + 1;
                    } while (uVar22 != uVar25);
                  }
                  FUN_01536600(uVar5,uVar22);
                  pcVar1 = local_b8;
                  if ((local_b0 == '\0') && (local_b8 != (code *)0x0)) {
                    FUN_00d50b00();
                  }
                  FUN_00e83070();
                  pcVar8 = (code *)FUN_0116f240();
                  (**(code **)(*(longlong *)pcVar8 + 0x18))();
                  FUN_013e7160();
                  lVar6 = *(longlong *)(unaff_RSI + 0x30);
                  if ((lVar6 == 0) || (local_90[3] != 1)) {
                    pvVar4 = _pthread_getspecific(pVar14);
                    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                      pVar14 = (pthread_key_t)local_60;
                    }
                    FUN_012e6000();
                    pcVar2 = local_b8;
                    if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (pcVar2 != (code *)0x0) {
                      pvVar4 = _pthread_getspecific(pVar14);
                      if (pvVar4 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar5 = FUN_012e6000();
                      pcVar2 = local_b8;
                      local_1d8 = 0;
                      if (local_b0 == '\0') {
                        if (local_b8 != (code *)0x0) {
                          uVar5 = FUN_00d50b00();
                        }
                      }
                      else {
                        local_b0 = '\0';
                      }
                      local_1d8 = '\x01';
                      local_1e0 = pcVar2;
                      local_2b0 = '\0';
                      local_2b8 = pcVar8;
                      FUN_01536b80(uVar5,&local_2b8);
                      if ((local_2b0 != '\0') && (local_2b8 != (code *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_1d8 != '\0') && (local_1e0 != (code *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                  else {
                    local_200 = 0;
                    uVar5 = FUN_00d50b00();
                    local_200 = '\x01';
                    local_2c0 = '\0';
                    local_2c8 = pcVar8;
                    local_208 = lVar6;
                    FUN_01536b80(uVar5,&local_2c8);
                    if ((local_2c0 != '\0') && (local_2c8 != (code *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_200 != '\0') && (local_208 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  local_2a0 = '\0';
                  local_2a8 = pcVar8;
                  FUN_01311d60();
                  if ((local_2a0 != '\0') && (local_2a8 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_b0 = '\0';
                  local_b8 = pcVar8;
                  FUN_00d21140();
                  if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  if (pcVar1 != (code *)0x0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
            if (local_60 != (code *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
      }
      FUN_01312d90();
    }
    (**(code **)(*(longlong *)local_58 + 0x418))();
    FUN_0141c350(local_110);
    local_1d0 = local_88;
    local_1c8 = 0;
    if (local_80 == '\0') {
      if (local_88 != (dword *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_1c8 = '\x01';
    (**(code **)(*(longlong *)local_58 + 0x690))();
    if ((local_1c8 != '\0') && (local_1d0 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    do {
      pVar14 = 0x100;
      (**(code **)(*(longlong *)local_58 + 0x400))();
      dVar27 = (double)(**(code **)(*(longlong *)local_58 + 0x5e0))();
      if (*(double *)(unaff_RSI + 0x18) + *(double *)(unaff_RSI + 0x20) <= dVar27) {
        FUN_0141cb70(0);
        pdVar26 = local_88;
        local_1b8 = 0;
        if (local_80 == '\0') {
          if (local_88 != (dword *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_1b8 = '\x01';
        local_1c0 = pdVar26;
        (**(code **)(*(longlong *)local_58 + 0x690))();
        if ((local_1b8 != '\0') && (local_1c0 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar3 = (**(code **)(*(longlong *)local_58 + 0x5e8))();
    } while (cVar3 != '\0');
    (**(code **)(*(longlong *)local_58 + 0x370))();
    if (local_90 != (dword *)0x0) {
      FUN_00d50b20();
    }
    uVar5 = FUN_00d50b20();
    local_1f0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00b66760();
  (**(code **)(*plVar7 + 0x18))();
  local_90 = (dword *)plVar7;
  FUN_00b5f970();
  if ((char)local_1e4 == '\0') {
    FUN_00b609d0(0);
    if (((double)local_120 == DAT_02390448) && (!NAN((double)local_120) && !NAN(DAT_02390448)))
    goto LAB_01533f06;
    FUN_00b5f120(0);
    FUN_00b5f040(local_220);
    iVar23 = *(int *)(unaff_RSI + 0x28);
    pdVar26 = local_120;
    if (iVar23 != 0) goto LAB_01533f14;
  }
  else {
    FUN_00b609d0(local_120);
LAB_01533f06:
    iVar23 = *(int *)(unaff_RSI + 0x28);
    pdVar26 = (dword *)0x0;
LAB_01533f14:
    local_108 = pdVar26;
  }
  if (iVar23 == 0) {
    local_110 = (double)FUN_00e7c860();
  }
  if (*(longlong *)(unaff_RSI + 0x30) != 0) {
    FUN_00d8cbf0();
    local_1b0 = local_88;
    local_1a8 = 0;
    if (local_80 == '\0') {
      if (local_88 != (dword *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_1a8 = '\x01';
    FUN_00b61090();
    if ((local_1a8 != '\0') && (local_1b0 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_110 = local_110 - (double)local_108;
  if ((char)local_228 != '\0') {
    pvVar4 = _pthread_getspecific(pVar14);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar14 = (pthread_key_t)&local_ec;
    FUN_016c45d0(*(double *)(unaff_RSI + 0x18) + *(double *)(unaff_RSI + 0x20),&local_fc);
    pvVar4 = _pthread_getspecific(pVar14);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c4760();
    local_2f0 = (longlong *)local_90;
    local_2e8 = 0;
    pdVar26 = (dword *)&local_2f0;
    FUN_01536c30(local_108);
    pVar14 = (pthread_key_t)pdVar26;
    if ((char)local_d4 == '\0') {
      pvVar4 = _pthread_getspecific(pVar14);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pdVar26 = local_e0;
      }
      FUN_015058d0();
      pVar14 = (pthread_key_t)pdVar26;
      if (local_80 == '\0') {
        if (local_88 != (dword *)0x0) {
          local_58 = local_88;
          FUN_00d50b00();
          if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01534191;
        }
      }
      else {
        local_58 = local_88;
        if (local_88 != (dword *)0x0) {
LAB_01534191:
          pvVar4 = _pthread_getspecific((pthread_key_t)pdVar26);
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            pdVar26 = local_58;
          }
          FUN_01510d50();
          pdVar17 = local_88;
          if ((((local_80 == '\0') && (local_88 != (dword *)0x0)) &&
              (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          local_80 = '\0';
          local_88 = (dword *)0x0;
          local_138 = (dword *)CONCAT44(local_138._4_4_,0xffffffff);
          local_12c = 0xffffffff;
          while( true ) {
            pvVar4 = _pthread_getspecific((pthread_key_t)pdVar26);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar5 = FUN_00e7bdb0();
            uVar9 = FUN_00e7bdb0();
            cVar3 = FUN_01252960(uVar9,uVar5,&local_88,&local_b8);
            pVar14 = (pthread_key_t)uVar9;
            if (cVar3 == '\0') break;
            pvVar4 = _pthread_getspecific(pVar14);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar23 = FUN_01743720();
            pdVar26 = local_88;
            pvVar4 = _pthread_getspecific(pVar14);
            pdVar10 = local_88;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), pdVar26 = pdVar10, lVar6 != 0))
            {
              pdVar26 = *(dword **)(pdVar10 + ((ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4) * 2);
            }
            cVar3 = (**(code **)(*(longlong *)pdVar26 + 0x400))();
            if (cVar3 != '\0') {
              iVar23 = iVar23 + -3;
            }
            iVar24 = iVar23;
            if (iVar23 < -6) {
              iVar24 = -7;
            }
            uVar20 = (uint)(iVar24 - iVar23 != 0);
            iVar23 = iVar23 + (((iVar24 - iVar23) - uVar20) / 0xc + uVar20) * 0xc;
            iVar24 = iVar23;
            if (6 < iVar23) {
              iVar24 = 7;
            }
            if (local_b8._4_4_ != 0) {
              if (*(int *)(unaff_RSI + 0x28) == 0) {
                FUN_00e7c860();
              }
              else {
                pvVar4 = _pthread_getspecific(uVar20);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_016c98e0();
              }
            }
            pdVar26 = (dword *)(ulonglong)((((iVar23 - iVar24) + 0xbU) / 0xc) * 0xc);
            FUN_00b60dd0(pdVar26,cVar3);
          }
          if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          if (pdVar17 != (dword *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
  }
  if ((char)local_224 == '\x01' && (char)local_d4 == '\0') {
    pvVar4 = _pthread_getspecific(pVar14);
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar14 = (pthread_key_t)local_e0;
    }
    FUN_015058d0();
    pvVar4 = _pthread_getspecific(pVar14);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    pdVar26 = local_88;
    if (local_80 == '\0') {
      if (((local_88 != (dword *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (dword *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    pdVar10 = (dword *)FUN_00e8fc40();
    FUN_00d4ff40();
    pdVar17 = (dword *)&DAT_0253b338;
    *(undefined **)pdVar10 = &DAT_0253b338;
    *(longlong *)(pdVar10 + 4) = 0;
    *(longlong *)(pdVar10 + 6) = 0;
    *(longlong *)(pdVar10 + 8) = 0;
    *(longlong *)(pdVar10 + 10) = 0;
    *(longlong *)(pdVar10 + 0xc) = 0;
    *(longlong *)(pdVar10 + 0xe) = 0;
    *(longlong *)(pdVar10 + 0x10) = 0;
    *(longlong *)(pdVar10 + 0x12) = 0;
    uVar5 = (*DAT_0253b350)();
    lVar6 = DAT_027c4270;
    local_d0 = pdVar26;
    local_58 = pdVar10;
    if (DAT_027c4270 != 0) {
      uVar5 = FUN_00d50b00();
    }
    FUN_00d8cbf0(uVar5,4);
    local_1a0 = local_88;
    local_198 = 0;
    if (local_80 == '\0') {
      if (local_88 != (dword *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_198 = '\x01';
    FUN_00b5d810();
    if ((local_198 != '\0') && (local_1a0 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    local_80 = '\0';
    local_88 = (dword *)0x0;
    local_12c = 0xffffffff;
    local_1e8 = 0xffffffff;
    pvVar4 = _pthread_getspecific((pthread_key_t)pdVar17);
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pdVar17 = local_50;
    }
    local_1f8 = (double)FUN_016cb940(*(undefined8 *)(unaff_RSI + 0x18),0);
    pvVar4 = _pthread_getspecific((pthread_key_t)pdVar17);
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pdVar17 = local_50;
    }
    local_108 = (dword *)FUN_016cb940(*(double *)(unaff_RSI + 0x18) + *(double *)(unaff_RSI + 0x20),
                                      0);
    while( true ) {
      pvVar4 = _pthread_getspecific((pthread_key_t)pdVar17);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pdVar17 = local_108;
      cVar3 = FUN_01252960(local_108,local_1f8,&local_88,&local_48);
      pVar14 = (pthread_key_t)pdVar17;
      if (cVar3 == '\0') break;
      if (local_88 != (dword *)0x0) {
        if (local_48._4_4_ == 0) {
          local_48 = local_1f8;
          if (local_138._4_4_ != 0) goto LAB_015347f9;
LAB_01534864:
          local_138 = local_108;
          if (*(int *)(unaff_RSI + 0x28) != 0) goto LAB_01534806;
LAB_0153487f:
          local_60 = (code *)FUN_00e7c860();
          local_f8 = (code *)FUN_00e7c860();
        }
        else {
          if (local_138._4_4_ == 0) goto LAB_01534864;
LAB_015347f9:
          if (*(int *)(unaff_RSI + 0x28) == 0) goto LAB_0153487f;
LAB_01534806:
          pvVar4 = _pthread_getspecific(pVar14);
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            pVar14 = (pthread_key_t)local_50;
          }
          local_60 = (code *)FUN_016c98e0();
          pvVar4 = _pthread_getspecific(pVar14);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f8 = (code *)FUN_016c98e0();
        }
        iVar23 = FUN_01716a70();
        local_60 = (code *)((double)local_60 - local_110);
        local_f8 = (code *)((double)local_f8 - local_110);
        if (iVar23 != 0) {
          cVar3 = FUN_017154c0();
          FUN_00b51960(0x60,cVar3 + '\f');
          pcVar1 = local_b8;
          local_188 = 0;
          if (local_b0 == '\0') {
            if (local_b8 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          local_188 = '\x01';
          local_190 = pcVar1;
          FUN_00b5d1a0(local_60);
          if ((local_188 != '\0') && (local_190 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00b51a20(0x60,cVar3 + '\f');
          pcVar1 = local_b8;
          local_178 = 0;
          if (local_b0 == '\0') {
            if (local_b8 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          local_178 = '\x01';
          local_180 = pcVar1;
          FUN_00b5d1a0(local_f8);
          if ((local_178 != '\0') && (local_180 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        cVar3 = FUN_01715480();
        cVar3 = cVar3 + '0';
        lVar6 = 0;
        do {
          uVar20 = (uint)(*(ulonglong *)(local_88 + 6) >> ((byte)lVar6 & 0x3f));
          uVar15 = ~uVar20;
          pdVar17 = (dword *)(ulonglong)uVar15;
          if ((uVar15 & 0xf) != 0) {
            uVar20 = uVar20 & 0xf;
            cVar19 = cVar3;
            if (uVar20 < 7) {
              cVar19 = cVar3 + -0xc;
            }
            cVar12 = cVar3 + -0xc;
            if (uVar20 != 0xf) {
              cVar12 = cVar19;
            }
            FUN_00b51960(0x60,cVar12);
            pcVar1 = local_b8;
            local_168 = 0;
            if (local_b0 == '\0') {
              if (local_b8 != (code *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            pdVar26 = local_d0;
            local_168 = '\x01';
            local_170 = pcVar1;
            FUN_00b5d1a0(local_60);
            if ((local_168 != '\0') && (local_170 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
              FUN_00d50b20();
            }
            pdVar17 = &segment_command_00000020.nsects;
            FUN_00b51a20(0x60,cVar12);
            pcVar1 = local_b8;
            local_158 = 0;
            if (local_b0 == '\0') {
              if (local_b8 != (code *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            local_158 = '\x01';
            local_160 = pcVar1;
            FUN_00b5d1a0(local_f8);
            if ((local_158 != '\0') && (local_160 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
          cVar3 = cVar3 + '\x01';
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0x30);
      }
    }
    local_298 = local_58;
    local_290 = '\0';
    FUN_00b61290();
    if ((local_290 != '\0') && (local_298 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != (dword *)0x0) {
      FUN_00d50b20();
    }
    if (pdVar26 != (dword *)0x0) {
      FUN_00d50b20();
    }
  }
  local_118 = local_118 ^ 1;
  bVar13 = local_e8 == (dword *)0x0 | (byte)local_118;
  local_f8 = (code *)CONCAT71(local_f8._1_7_,bVar13);
  if (bVar13 == 0) {
    local_80 = '\0';
    local_88 = (dword *)0x0;
    local_78 = local_e8;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_60 = DAT_0253b350;
    local_70._4_4_ = 0;
    bVar21 = false;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar23 = -local_70._4_4_;
        }
        else {
          iVar23 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar23);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar23 = 0;
        }
        local_70 = CONCAT44(iVar23,(int)local_70);
      }
      lVar6 = (longlong)(int)local_70;
      iVar23 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar23);
      if ((int)local_78[3] <= iVar23) break;
      local_88 = *(dword **)(*(longlong *)(local_78 + 4) + 8 + lVar6 * 8);
      FUN_01531870();
      pcVar1 = local_b8;
      if ((((local_b0 == '\0') && (local_b8 != (code *)0x0)) && (FUN_00d50b00(), local_b0 != '\0'))
         && (local_b8 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)(pcVar1 + 0xc) < 1) {
LAB_01534d50:
        FUN_00d50b20();
      }
      else {
        local_48 = (double)CONCAT44(local_48._4_4_,0xffffffff);
        local_b0 = '\0';
        local_b8 = (code *)0x0;
        local_a8 = pcVar1;
        local_a0 = 0xffffffff;
        local_98 = 0;
        while( true ) {
          lVar6 = (longlong)(int)local_a0;
          iVar23 = (int)local_a0 + 1;
          local_a0 = CONCAT44(local_a0._4_4_,iVar23);
          if (*(int *)(local_a8 + 0xc) <= iVar23) break;
          lVar18 = *(longlong *)(local_a8 + 0x10);
          local_b8 = *(code **)(lVar18 + 8 + lVar6 * 8);
          local_58 = (dword *)FUN_00b5beb0();
          if (*(int *)(unaff_RSI + 0x28) == 0) {
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar18);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = (dword *)FUN_016c25f0(local_58);
          }
          dVar27 = 0.0;
          if (0.0 <= (double)local_58 - local_110) {
            dVar27 = (double)local_58 - local_110;
          }
          FUN_00b5ae60(dVar27);
          if (local_a0._4_4_ != 0) {
            if (local_a0 < 0) {
              iVar23 = -local_a0._4_4_;
            }
            else {
              local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - local_a0._4_4_);
              FUN_00d23690();
              local_98 = local_98 + local_a0._4_4_;
              iVar23 = 0;
            }
            local_a0 = CONCAT44(iVar23,(int)local_a0);
          }
        }
        FUN_00b66ae0();
        puVar11 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar11 = &DAT_0253b338;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        (*local_60)();
        local_288 = pcVar1;
        local_280 = '\0';
        uVar5 = FUN_00b5d690();
        if ((local_280 != '\0') && (local_288 != (code *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
        local_278 = local_88;
        local_270 = '\0';
        uVar5 = FUN_01537300(uVar5,&local_278);
        pcVar8 = local_b8;
        if (local_b0 == '\0') {
          if (((local_b8 != (code *)0x0) && (uVar5 = FUN_00d50b00(), local_b0 != '\0')) &&
             (local_b8 != (code *)0x0)) {
            uVar5 = FUN_00d50b20();
          }
        }
        else {
          local_b0 = '\0';
        }
        if ((local_270 != '\0') && (local_278 != (dword *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
        if (pcVar8 != (code *)0x0) {
          FUN_00d8cbf0(uVar5,4);
          pcVar2 = local_b8;
          local_148 = 0;
          if (local_b0 == '\0') {
            if (local_b8 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          local_148 = '\x01';
          local_150 = pcVar2;
          FUN_00b5d810();
          if ((local_148 != '\0') && (local_150 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_260 = '\0';
        local_268 = puVar11;
        FUN_00b61290();
        if ((local_260 != '\0') && (local_268 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (pcVar8 != (code *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar21 = true;
        if (pcVar1 != (code *)0x0) goto LAB_01534d50;
      }
    }
    FUN_01537630();
    if (bVar21) goto LAB_015352cb;
  }
  FUN_00b5abc0(0);
  pdVar26 = local_88;
  if ((((local_80 == '\0') && (local_88 != (dword *)0x0)) && (FUN_00d50b00(), local_80 != '\0')) &&
     (local_88 != (dword *)0x0)) {
    FUN_00d50b20();
  }
  local_258 = pdVar26;
  local_250 = '\0';
  FUN_015373b0();
  pdVar17 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (dword *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (dword *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_250 != '\0') && (local_258 != (dword *)0x0)) {
    FUN_00d50b20();
  }
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_0253b338;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  (*DAT_0253b350)();
  local_248 = pdVar17;
  local_240 = '\0';
  FUN_00b5d690();
  if ((local_240 != '\0') && (local_248 != (dword *)0x0)) {
    FUN_00d50b20();
  }
  local_230 = '\0';
  local_238 = puVar11;
  FUN_00b61290();
  if ((local_230 != '\0') && (local_238 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (pdVar17 != (dword *)0x0) {
    FUN_00d50b20();
  }
  if (pdVar26 != (dword *)0x0) {
    FUN_00d50b20();
  }
LAB_015352cb:
  *unaff_RDI = local_90;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)local_118 == '\0' && local_c8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_f8 == '\0') {
    FUN_00d50b20();
  }
  if (local_50 != (dword *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_d4 == '\0') {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_RDI;
}




// ============================================================
// @01531f40 — 2516 bytes
// ============================================================

void FUN_01531f40(uint param_1)

{
  longlong lVar1;
  pthread_key_t pVar2;
  void *pvVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  undefined4 *puVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar10;
  double dVar11;
  ulonglong local_90;
  double local_88;
  double local_80;
  undefined4 local_68;
  int iStack_64;
  char local_60;
  double local_58;
  char local_50 [16];
  pthread_key_t local_40;
  undefined4 uStack_3c;
  char local_38 [8];
  
  lVar1 = *unaff_RSI;
  lVar4 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x10) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  pVar8 = local_40;
  lVar1 = CONCAT44(uStack_3c,local_40);
  if ((((local_38[0] == '\0') && (lVar1 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (CONCAT44(uStack_3c,local_40) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_58 = (double)FUN_012ebfe0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = (double)FUN_016c9870();
  if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_012ebd30();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_016c9950();
  if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pVar2 = local_40;
  if (local_58 <= local_88) {
    local_88 = local_58;
  }
  if (dVar11 <= dVar10) {
    dVar11 = dVar10;
  }
  local_80 = dVar11;
  if (local_38[0] == '\0') {
    if (CONCAT44(uStack_3c,local_40) == 0) goto LAB_01532808;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else if (CONCAT44(uStack_3c,local_40) == 0) goto LAB_01532808;
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar2;
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_58 = (double)CONCAT44(uStack_3c,local_40);
  if (local_38[0] == '\0') {
    if (((local_58 != 0.0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (CONCAT44(uStack_3c,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_60 != '\0') && (CONCAT44(iStack_64,local_68) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  dVar10 = local_58;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), dVar10 = local_58, lVar4 != 0)) {
    dVar10 = *(double *)((longlong)local_58 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  pcVar5 = local_38;
  local_68 = CONCAT31(local_68._1_3_,local_38[0]);
  pcVar7 = pcVar5;
  if (local_38[0] == '\0') {
    pcVar7 = (char *)&local_68;
  }
  lVar4 = CONCAT44(uStack_3c,local_40);
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  param_1 = (uint)pcVar5;
  if (lVar4 == 0) {
    param_1 = *(int *)(*(longlong *)((longlong)dVar10 + 0x48) + 0x18) + 7;
    if (param_1 < 0xf) goto LAB_01532353;
    local_90 = **(ulonglong **)(*(longlong *)((longlong)dVar10 + 0x48) + 0x10);
  }
  else {
LAB_01532353:
    local_90 = FUN_00e7bdb0();
    if (((char)local_68 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  local_68 = CONCAT31(local_68._1_3_,local_38[0]);
  pcVar5 = local_38;
  if (local_38[0] == '\0') {
    pcVar5 = (char *)&local_68;
  }
  lVar4 = CONCAT44(uStack_3c,local_40);
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    param_1 = *(uint *)(*(longlong *)((longlong)dVar10 + 0x48) + 0x18);
    if (param_1 + 7 < 0xf) goto LAB_01532405;
    uVar6 = *(ulonglong *)
             ((longlong)(int)param_1 + -8 +
             *(longlong *)(*(longlong *)((longlong)dVar10 + 0x48) + 0x10));
  }
  else {
LAB_01532405:
    uVar6 = FUN_00e7bdb0();
    if (((char)local_68 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(longlong *)((longlong)dVar10 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar4 = CONCAT44(uStack_3c,local_40);
    pcVar5 = local_38;
    pcVar7 = (char *)&local_68;
    if (local_38[0] != '\0') {
      pcVar7 = pcVar5;
    }
    local_68 = CONCAT31(local_68._1_3_,local_38[0]);
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    param_1 = (uint)pcVar5;
    if (((char)local_68 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) goto LAB_01532493;
  }
  else {
LAB_01532493:
    if (local_90 >> 0x20 == 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01252670(0,0,&local_68,0);
      local_50[0] = local_38[0];
      pcVar5 = local_38;
      pcVar7 = local_50;
      if (local_38[0] != '\0') {
        pcVar7 = pcVar5;
      }
      lVar4 = CONCAT44(uStack_3c,local_40);
      *pcVar7 = '\0';
      if ((local_38[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      param_1 = (uint)pcVar5;
      if ((local_50[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      dVar10 = local_88;
      if (iStack_64 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        param_1 = 0;
        FUN_016ca840(0,CONCAT44(iStack_64,local_68),0,0);
        FUN_0123fff0();
        FUN_00e7b970();
        if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_016c98e0();
        goto LAB_0153264b;
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = pVar8;
      }
      dVar10 = (double)FUN_016c98e0();
LAB_0153264b:
      if (local_88 <= dVar10) {
        dVar10 = local_88;
      }
    }
    local_88 = dVar10;
    if (uVar6 >> 0x20 == 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012527b0(&local_68,0,0,0);
      pcVar5 = local_50 + 8;
      pcVar7 = local_38;
      if (local_38[0] == '\0') {
        pcVar7 = pcVar5;
      }
      lVar4 = CONCAT44(uStack_3c,local_40);
      local_50[8] = local_38[0];
      *pcVar7 = '\0';
      if ((local_38[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      param_1 = (uint)pcVar5;
      if ((local_50[8] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (iStack_64 == 0) goto LAB_015327f1;
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = 0;
      FUN_016ca840(0,CONCAT44(iStack_64,local_68),0,0);
      FUN_0123fff0();
      FUN_00e7b820();
      if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = (double)FUN_016c98e0();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = (double)FUN_016c98e0();
    }
    if (local_80 <= dVar11) {
      local_80 = dVar11;
    }
  }
LAB_015327f1:
  if (local_58 != 0.0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01532808:
  local_40 = 0xffffffff;
  local_68 = 0xffffffff;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar8 = (pthread_key_t)&local_68;
  FUN_016c45d0(local_88,&local_40);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar9 = &local_68;
  FUN_016c4630(puVar9,1);
  pvVar3 = _pthread_getspecific((pthread_key_t)puVar9);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_016c46a0(&local_68,&local_40);
  *(double *)(unaff_RDI + 0x18) = dVar10;
  *(double *)(unaff_RDI + 0x20) = local_80 - dVar10;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @015278a0 — 2291 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01527f81) */
/* WARNING: Removing unreachable block (ram,0x01527f8a) */
/* WARNING: Removing unreachable block (ram,0x01527d40) */
/* WARNING: Removing unreachable block (ram,0x01527d49) */
/* WARNING: Removing unreachable block (ram,0x01527de7) */
/* WARNING: Removing unreachable block (ram,0x01527df3) */
/* WARNING: Removing unreachable block (ram,0x01528141) */
/* WARNING: Removing unreachable block (ram,0x0152814a) */

void FUN_015278a0(ulonglong param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  pthread_key_t pVar13;
  longlong unaff_RDI;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *unaff_R14;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  uint local_7c;
  longlong local_60;
  char local_58;
  undefined8 *local_38;
  
  iVar2 = (int)param_1;
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
    *(int *)(unaff_RDI + 0x40) = -param_2;
    uVar11 = iVar2 - param_2;
    if (-1 < (int)uVar11) {
      uVar12 = (iVar2 - param_2) + 1;
      param_1 = (ulonglong)uVar12;
      uVar14 = 0;
      unaff_R14 = (undefined8 *)0x0;
      plVar5 = (longlong *)0x0;
      do {
        plVar4 = (longlong *)FUN_011d2cb0();
        (**(code **)(*plVar4 + 0x18))();
        cVar1 = (char)unaff_R14;
        if (plVar5 == plVar4) {
          plVar4 = plVar5;
          if ((cVar1 == '\0') && (plVar5 != (longlong *)0x0)) {
            unaff_R14 = (undefined8 *)0x1;
          }
          else if (plVar5 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b20();
          }
        }
        else {
          unaff_R14 = (undefined8 *)0x1;
          if ((cVar1 != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar2 = *(int *)(unaff_RDI + 0x40);
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        plVar5 = plVar4;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        *(uint *)(plVar5 + 8) = uVar14 - iVar2;
        FUN_01527350();
        uVar14 = uVar14 + 1;
        plVar5 = plVar4;
      } while (uVar12 != uVar14);
      local_7c = 0;
      local_38 = unaff_R14;
      goto joined_r0x015279ea;
    }
    local_38 = (undefined8 *)0x0;
    local_7c = 0;
    if (uVar11 < 0x80000000) goto LAB_01527c4e;
  }
  else {
    local_7c = *(int *)(unaff_RDI + 0x40) + param_2;
    if ((int)local_7c < 0) {
      uVar11 = iVar2 - param_2;
      uVar16 = (ulonglong)uVar11;
      local_38 = (undefined8 *)0x0;
      plVar5 = (longlong *)0x0;
      do {
        while( true ) {
          plVar4 = (longlong *)FUN_011d2cb0();
          (**(code **)(*plVar4 + 0x18))();
          cVar1 = (char)local_38;
          if (plVar5 == plVar4) {
            plVar4 = plVar5;
            if ((cVar1 == '\0') && (plVar5 != (longlong *)0x0)) {
              local_38 = (undefined8 *)0x1;
            }
            else if (plVar5 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = (undefined8 *)0x1;
            if ((cVar1 != '\0') && (plVar5 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_01527510();
          uVar12 = *(uint *)(unaff_RDI + 0x40);
          *(uint *)(unaff_RDI + 0x40) = uVar12 + 1;
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar16);
          plVar5 = plVar4;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) break;
          *(uint *)(plVar4 + 8) = ~uVar12;
          local_7c = local_7c + 1;
          if (local_7c == 0) goto LAB_01527b05;
        }
        *(uint *)(plVar4[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x40) = ~uVar12;
        local_7c = local_7c + 1;
      } while (local_7c != 0);
LAB_01527b05:
      local_7c = 0;
    }
    else {
      uVar11 = iVar2 + *(int *)(unaff_RDI + 0x40);
      local_38 = (undefined8 *)0x0;
      plVar4 = (longlong *)0x0;
    }
    unaff_R14 = &DAT_02802558;
    while (param_1 = (ulonglong)uVar11,
          *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) <= (int)uVar11) {
      plVar5 = (longlong *)FUN_011d2cb0();
      (**(code **)(*plVar5 + 0x18))();
      cVar1 = (char)local_38;
      if (plVar4 == plVar5) {
        plVar5 = plVar4;
        if ((cVar1 == '\0') && (plVar4 != (longlong *)0x0)) {
          local_38 = (undefined8 *)0x1;
        }
        else if (plVar4 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = (undefined8 *)0x1;
        if ((cVar1 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
      iVar3 = *(int *)(unaff_RDI + 0x40);
      pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RDI);
      plVar4 = plVar5;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar4 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      *(int *)(plVar4 + 8) = iVar2 - iVar3;
      FUN_01527350();
      plVar4 = plVar5;
    }
joined_r0x015279ea:
    if (plVar4 != (longlong *)0x0) {
      if ((char)local_38 != '\0') {
        FUN_00d50b20();
      }
      local_38 = (undefined8 *)0x0;
    }
    if ((int)local_7c <= (int)uVar11) {
LAB_01527c4e:
      lVar8 = (longlong)(int)local_7c;
      lVar7 = 0;
      do {
        lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar8 * 8);
        if (lVar7 == lVar18) {
          if (((char)local_38 == '\0') && (lVar7 != 0)) {
            FUN_00d50b00();
            lVar18 = lVar7;
            goto LAB_01527cd0;
          }
          local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff);
          if (param_3 == '\0') goto LAB_01527cdd;
LAB_01527d80:
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152aaa0();
        }
        else {
          if (lVar18 != 0) {
            FUN_00d50b00();
          }
          if (((char)local_38 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01527cd0:
          local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
          lVar7 = lVar18;
          if (param_3 != '\0') goto LAB_01527d80;
LAB_01527cdd:
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152aa70();
          cVar1 = FUN_00d23d70();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') goto LAB_01527d80;
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152b730();
        lVar8 = lVar8 + 1;
        unaff_R14 = local_38;
      } while (uVar11 + 1 != (int)lVar8);
      goto LAB_01527e4c;
    }
  }
  lVar7 = 0;
LAB_01527e4c:
  if (param_3 == '\0') {
    if (0 < (int)local_7c) {
      uVar16 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
        lVar18 = *(longlong *)(lVar8 + uVar16 * 8);
        if (lVar7 == lVar18) {
          if (((char)local_38 == '\0') && (lVar7 != 0)) {
            local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (lVar18 != 0) {
            lVar8 = FUN_00d50b00();
          }
          if (((char)local_38 == '\0') || (lVar7 == 0)) {
            local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            lVar7 = lVar18;
          }
          else {
            uVar9 = FUN_00d50b20();
            local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            lVar7 = lVar18;
          }
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        iVar2 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar2 != -1) {
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152abd0();
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152b730();
        }
        uVar16 = uVar16 + 1;
      } while (local_7c != uVar16);
    }
    lVar8 = *(longlong *)(unaff_RDI + 0x48);
    if ((int)(uVar11 + 1) < *(int *)(lVar8 + 0xc)) {
      lVar17 = (longlong)(int)(uVar11 + 1);
      iVar2 = (*(int *)(lVar8 + 0xc) - uVar11) + -2;
      lVar18 = lVar7;
      while( true ) {
        puVar15 = (undefined8 *)((ulonglong)local_38 & 0xffffffff);
        lVar8 = *(longlong *)(lVar8 + 0x10);
        lVar7 = *(longlong *)(lVar8 + lVar17 * 8);
        if (lVar18 == lVar7) {
          lVar7 = lVar18;
          puVar10 = puVar15;
          pVar13 = (pthread_key_t)local_38;
          if (((char)puVar15 == '\0') && (lVar18 != 0)) {
            FUN_00d50b00();
            puVar10 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            pVar13 = (pthread_key_t)local_38;
          }
        }
        else {
          if (lVar7 != 0) {
            lVar8 = FUN_00d50b00();
          }
          puVar10 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          pVar13 = (pthread_key_t)local_38;
          if (((char)puVar15 != '\0') && (lVar18 != 0)) {
            FUN_00d50b20();
            pVar13 = (pthread_key_t)local_38;
          }
        }
        local_38 = puVar10;
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        iVar3 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar3 != -1) {
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152abd0();
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152b730();
        }
        bVar19 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar19) break;
        lVar8 = *(longlong *)(unaff_RDI + 0x48);
        lVar17 = lVar17 + 1;
        lVar18 = lVar7;
      }
    }
    cVar1 = (char)local_38;
    FUN_01528450();
  }
  else {
    cVar1 = (char)local_38;
  }
  if ((cVar1 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01530ba0 — 2269 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01530ce0) */
/* WARNING: Removing unreachable block (ram,0x01530ce9) */
/* WARNING: Removing unreachable block (ram,0x01530bf2) */
/* WARNING: Removing unreachable block (ram,0x01530bfb) */
/* WARNING: Removing unreachable block (ram,0x01530e21) */
/* WARNING: Removing unreachable block (ram,0x01530e2a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01530ba0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *unaff_RDI;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  double dVar26;
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined4 local_90;
  undefined4 uStack_8c;
  char local_88;
  longlong *local_60;
  char local_58;
  longlong *local_48;
  
  plVar13 = param_1;
  FUN_012dde10();
  pVar11 = (pthread_key_t)plVar13;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01530c00;
    }
LAB_01530c7c:
    bVar6 = true;
  }
  else {
    if (local_60 == (longlong *)0x0) goto LAB_01530c7c;
LAB_01530c00:
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
    if ((pvVar9 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
      cVar7 = *(char *)((longlong)local_60 + 0x4c);
    }
    else {
      cVar7 = *(char *)(local_60[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4] + 0x4c);
      plVar13 = local_60;
    }
    if (cVar7 == '\0') goto LAB_01531484;
    pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
    plVar10 = local_60;
    if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      plVar10 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
      plVar13 = local_60;
    }
    pVar11 = (pthread_key_t)plVar13;
    if ((*(float *)(plVar10 + 9) == 0.0) && (!NAN(*(float *)(plVar10 + 9)))) goto LAB_01531484;
    bVar6 = false;
  }
  (**(code **)(*unaff_RDI + 0x5d0))();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01530cee;
    }
LAB_01530db2:
    bVar3 = false;
    bVar5 = true;
joined_r0x01530f6f:
    bVar4 = true;
  }
  else {
    if (local_60 == (longlong *)0x0) goto LAB_01530db2;
LAB_01530cee:
    FUN_012d2570();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = true;
    if (local_60 != (longlong *)0x0) {
      FUN_012d2570();
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_48 = local_60;
      plVar13 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        *(undefined4 *)((longlong)unaff_RDI + 0xfc) = 0xffffffff;
        uVar18 = (**(code **)(*unaff_RDI + 0x5e0))();
        uVar19 = (**(code **)(*unaff_RDI + 0x5f0))();
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
        if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar13 = local_48;
        }
        dVar22 = (double)FUN_016cb850(uVar18);
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
        if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar13 = local_48;
        }
        dVar20 = (double)FUN_016cb850(uVar19);
        cVar7 = (**(code **)(*local_60 + 0x5e8))();
        if (cVar7 == '\0') {
LAB_0153100f:
          iVar12 = *(int *)((longlong)unaff_RDI + 0xfc);
LAB_01531015:
          if (iVar12 != -1) goto LAB_0153101e;
        }
        else {
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
          if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar13 = local_60;
          }
          FUN_00e7c4f0();
          dVar21 = (double)FUN_00e7c860();
          auVar27._0_8_ = dVar22 * dVar21;
          auVar27._8_8_ = 0;
          auVar27 = roundsd(in_XMM2,auVar27,9);
          dVar26 = auVar27._0_8_ / dVar21;
          if ((dVar26 != dVar22) || (NAN(dVar26) || NAN(dVar22))) {
            auVar23._0_8_ = dVar20 * dVar21;
            auVar23._8_8_ = 0;
            auVar27 = roundsd(auVar23,auVar23,9);
            dVar21 = auVar27._0_8_ / dVar21;
            if ((dVar26 == dVar21) && (!NAN(dVar26) && !NAN(dVar21))) goto LAB_0153100f;
            iVar12 = (int)((double)(int)param_1 * ((dVar21 - dVar22) / (dVar20 - dVar22)));
            *(int *)((longlong)unaff_RDI + 0xfc) = iVar12;
            goto LAB_01531015;
          }
          *(undefined4 *)((longlong)unaff_RDI + 0xfc) = 0;
LAB_0153101e:
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
          if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar13 = local_48;
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
          if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar13 = local_60;
          }
          FUN_00e7cd00(dVar20);
          cVar7 = FUN_016cade0();
          if (cVar7 == '\0') {
            pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
            plVar10 = local_60;
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar10 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
              plVar13 = local_60;
            }
            *(float *)(unaff_RDI + 0x1f) = *(float *)(plVar10 + 9) * DAT_0239011c;
            pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              local_60 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            fVar17 = *(float *)(local_60 + 0xd);
          }
          else {
            pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
            plVar10 = local_60;
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar10 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
              plVar13 = local_60;
            }
            *(int *)(unaff_RDI + 0x1f) = (int)plVar10[9];
            pvVar9 = _pthread_getspecific((pthread_key_t)plVar13);
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              local_60 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            fVar17 = *(float *)(local_60 + 0xd) * DAT_02394298 * DAT_0239011c;
          }
          *(float *)((longlong)unaff_RDI + 0xf4) = fVar17;
        }
        bVar4 = false;
        bVar5 = false;
        goto joined_r0x01530def;
      }
      bVar5 = false;
      goto joined_r0x01530f6f;
    }
    bVar3 = false;
    bVar5 = false;
  }
joined_r0x01530def:
  if (0 < (int)param_1) {
    uVar15 = 0;
    do {
      if (uVar15 == *(uint *)((longlong)unaff_RDI + 0xfc)) {
        dVar22 = (double)FUN_00b335d0();
        dVar22 = dVar22 * _DAT_0240ed20;
        iVar12 = (int)dVar22;
        *(int *)(unaff_RDI + 0x1d) = iVar12;
        *(float *)((longlong)unaff_RDI + 0xec) = DAT_02390124 / (float)(int)dVar22;
        *(undefined4 *)(unaff_RDI + 0x1e) = 0;
      }
      else {
        iVar12 = (int)unaff_RDI[0x1d];
      }
      if (iVar12 != 0) {
        fVar28 = (float)iVar12 * *(float *)((longlong)unaff_RDI + 0xec);
        fVar17 = *(float *)(unaff_RDI + 0x1e);
        if (DAT_0239426c <= fVar17) {
          if (DAT_023b3888 <= fVar17) {
            fVar24 = fVar17 + DAT_0240e354 + fVar17 + DAT_0240e354 + DAT_02390d00;
          }
          else {
            fVar24 = DAT_02390124 - (fVar17 + DAT_0241b63c + fVar17 + DAT_0241b63c);
          }
        }
        else {
          fVar24 = fVar17 + fVar17;
        }
        fVar25 = DAT_02390124 - fVar28 * fVar28;
        fVar17 = (float)_sinf(fVar17 * DAT_02394278);
        fVar17 = (fVar17 * fVar25 + fVar24 * fVar28 * fVar28) * fVar28 *
                 *(float *)(unaff_RDI + 0x1f);
        lVar16 = unaff_RDI[0x20];
        if (lVar16 == 0) {
          for (lVar16 = 0; iVar12 = FUN_00b33120(), lVar16 < iVar12; lVar16 = lVar16 + 1) {
            lVar2 = *(longlong *)(param_2 + lVar16 * 8);
            *(float *)(lVar2 + uVar15 * 4) = *(float *)(lVar2 + uVar15 * 4) + fVar17;
          }
        }
        else {
          uVar1 = *(uint *)(lVar16 + 0x18);
          uVar8 = uVar1 + 3;
          if (-1 < (int)uVar1) {
            uVar8 = uVar1;
          }
          if (3 < (int)uVar1) {
            lVar16 = *(longlong *)(lVar16 + 0x10);
            uVar14 = 0;
            if ((uVar1 & 0xfffffffc) != 4) {
              uVar14 = 0;
              do {
                lVar2 = *(longlong *)(param_2 + (longlong)*(int *)(lVar16 + uVar14 * 4) * 8);
                *(float *)(lVar2 + uVar15 * 4) = *(float *)(lVar2 + uVar15 * 4) + fVar17;
                lVar2 = *(longlong *)(param_2 + (longlong)*(int *)(lVar16 + 4 + uVar14 * 4) * 8);
                *(float *)(lVar2 + uVar15 * 4) = *(float *)(lVar2 + uVar15 * 4) + fVar17;
                uVar14 = uVar14 + 2;
              } while (((int)uVar8 >> 2 & 0xfffffffeU) != (uint)uVar14);
            }
            if (((int)uVar8 >> 2 & 1U) != 0) {
              lVar16 = *(longlong *)
                        (param_2 + (longlong)*(int *)(lVar16 + (uVar14 & 0xffffffff) * 4) * 8);
              *(float *)(lVar16 + uVar15 * 4) = fVar17 + *(float *)(lVar16 + uVar15 * 4);
            }
          }
        }
        fVar17 = *(float *)((longlong)unaff_RDI + 0xf4);
        dVar22 = (double)FUN_00b335e0();
        fVar17 = (float)(dVar22 * (double)fVar17) + *(float *)(unaff_RDI + 0x1e);
        *(uint *)(unaff_RDI + 0x1e) = ~-(uint)(DAT_02390124 < fVar17) & (uint)fVar17;
        *(int *)(unaff_RDI + 0x1d) = (int)unaff_RDI[0x1d] + -1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != ((ulonglong)param_1 & 0xffffffff));
  }
  if (bVar3 && !bVar4) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_00d50b20();
  }
  if (bVar6) {
    return;
  }
LAB_01531484:
  FUN_00d50b20();
  return;
}




// ============================================================
// @0152ad10 — 1937 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0152b12c) */
/* WARNING: Removing unreachable block (ram,0x0152b138) */
/* WARNING: Removing unreachable block (ram,0x0152b146) */
/* WARNING: Removing unreachable block (ram,0x0152b152) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0152ad10(void)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  void *pvVar8;
  char *pcVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  longlong unaff_RDI;
  int iVar15;
  double dVar16;
  double dVar17;
  longlong local_b0;
  char local_a8 [12];
  int local_9c;
  char *local_98;
  char local_90 [8];
  char *local_88;
  int local_80;
  int iStack_7c;
  int local_78;
  char *local_70;
  longlong local_68;
  char local_60;
  char *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(unaff_RDI + 0x54) != '\0') {
    return;
  }
  FUN_004f2260(0);
  pcVar3 = local_98;
  if ((((local_90[0] == '\0') && (local_98 != (char *)0x0)) && (FUN_00d50b00(), local_90[0] != '\0')
      ) && (local_98 != (char *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0025e9a0();
  local_70 = local_98;
  if (((local_90[0] == '\0') && (local_98 != (char *)0x0)) &&
     ((FUN_00d50b00(), local_90[0] != '\0' && (local_98 != (char *)0x0)))) {
    FUN_00d50b20();
  }
  local_90[0] = '\0';
  local_98 = (char *)0x0;
  local_88 = pcVar3;
  local_80 = -1;
  iStack_7c = 0;
  local_78 = 0;
  local_9c = 1;
  iVar15 = 0;
  while( true ) {
    if (iStack_7c != 0) {
      if (iStack_7c < 1) {
        iStack_7c = -iStack_7c;
      }
      else {
        local_80 = local_80 - iStack_7c;
        FUN_00d23690();
        local_78 = local_78 + iStack_7c;
        iStack_7c = 0;
      }
    }
    lVar7 = (longlong)local_80;
    local_80 = local_80 + 1;
    if (*(int *)(local_88 + 0xc) <= local_80) break;
    pcVar12 = *(char **)(local_88 + 0x10);
    local_98 = *(char **)(pcVar12 + lVar7 * 8 + 8);
    if (local_9c == 1) {
      pvVar8 = _pthread_getspecific((pthread_key_t)pcVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126eaa0();
      lVar7 = local_68;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_9c = 2 - (uint)(lVar7 == 0);
    }
    bVar4 = true;
    do {
      bVar5 = bVar4;
      if (local_70 != (char *)0x0) {
        local_60 = 0;
        local_68 = 0;
        local_58 = local_70;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if ((int)local_50._4_4_ < 1) {
              iVar14 = -local_50._4_4_;
            }
            else {
              iVar14 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar14);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar14 = 0;
            }
            local_50 = CONCAT44(iVar14,(int)local_50);
          }
          lVar7 = (longlong)(int)local_50;
          iVar14 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar14);
          if (*(int *)(local_58 + 0xc) <= iVar14) {
            lVar7 = 0;
            pcVar12 = local_58;
            goto LAB_0152af22;
          }
          local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
          pvVar8 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          local_40[0] = local_a8[0];
          pcVar12 = local_40;
          pcVar9 = local_a8;
          if (local_a8[0] == '\0') {
            pcVar9 = pcVar12;
          }
          lVar1 = CONCAT71(local_b0._1_7_,(char)local_b0);
          *pcVar9 = '\0';
          if ((local_a8[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)pcVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          local_38[0] = local_a8[0];
          pcVar12 = local_38;
          pcVar9 = local_a8;
          if (local_a8[0] == '\0') {
            pcVar9 = pcVar12;
          }
          lVar2 = CONCAT71(local_b0._1_7_,(char)local_b0);
          *pcVar9 = '\0';
          if ((local_a8[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if (((lVar1 != 0) && (lVar2 != 0)) &&
             (cVar6 = FUN_012a7870(), lVar7 = local_68, cVar6 != '\0')) break;
          if ((local_38[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
LAB_0152af22:
        FUN_001159b0();
        pVar11 = (pthread_key_t)pcVar12;
        if (lVar7 != 0) {
          local_60 = '\0';
          local_68 = lVar7;
          FUN_00d23f50();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          break;
        }
      }
      pVar11 = (pthread_key_t)pcVar12;
      bVar4 = false;
    } while (bVar5);
    local_68 = (longlong)local_98;
    local_60 = '\0';
    FUN_00d21140();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (iVar15 < *(int *)(local_70 + 0xc)) {
      iVar15 = *(int *)(local_70 + 0xc);
    }
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_0125a280();
    local_60 = '\0';
    local_68 = 0;
    local_58 = local_70;
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar13 = 0;
    while( true ) {
      if (uVar13 != 0) {
        if ((int)uVar13 < 1) {
          iVar14 = -uVar13;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar13);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar14 = 0;
        }
        local_50 = CONCAT44(iVar14,(int)local_50);
      }
      lVar7 = (longlong)(int)local_50;
      iVar14 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar14);
      if (*(int *)(local_58 + 0xc) <= iVar14) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_01259520();
      uVar13 = local_50._4_4_;
      if (dVar17 + _DAT_02423ba0 < dVar16) {
        uVar13 = ~local_50._4_4_;
        local_50 = CONCAT44(uVar13,(int)local_50);
      }
    }
    FUN_001159b0();
  }
  pcVar12 = local_88;
  FUN_001159b0();
  pVar11 = (pthread_key_t)pcVar12;
  FUN_00d64850();
  *(undefined1 *)(unaff_RDI + 0x54) = 1;
  FUN_00d64910();
  iVar15 = iVar15 * local_9c * 2;
  if (*(int *)(unaff_RDI + 0x50) == iVar15) goto LAB_0152b4b5;
  FUN_00d64850();
  *(int *)(unaff_RDI + 0x50) = iVar15;
  FUN_00d64910();
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152a4a0();
  }
  FUN_00d23310();
  pcVar12 = local_98;
  plVar10 = (longlong *)local_90;
  if (local_90[0] == '\0') {
    plVar10 = &local_b0;
  }
  local_b0._0_1_ = local_90[0];
  *(undefined1 *)plVar10 = 0;
  if ((local_90[0] != '\0') && (pcVar12 != (char *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = CONCAT71(local_68._1_7_,(char)local_b0 != '\0');
  plVar10 = &local_b0;
  if ((char)local_b0 == '\0') {
    plVar10 = &local_68;
  }
  *(undefined1 *)plVar10 = 0;
  if ((char)local_b0 == '\0') {
    if (((char)local_68 == '\0') || (pcVar12 == (char *)0x0)) goto LAB_0152b4b5;
  }
  else {
    if (pcVar12 == (char *)0x0) goto LAB_0152b4b5;
    FUN_00d50b20();
    if ((char)local_68 == '\0') goto LAB_0152b4b5;
  }
  FUN_00d50b20();
LAB_0152b4b5:
  if (local_70 != (char *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar3 != (char *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @011a17a0 — 1715 bytes
// str: ""bool""
// str: ""float""
// str: ""GNFraction""
// str: ""MUTimeJump""
// str: ""double""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a17a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025ed110;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aee30 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aedf8 = FUN_011a15f0();
        _DAT_027aedf0 = "_isRecording";
        _DAT_027aee00 = 0;
        _DAT_027aee08 = 0x6200;
        _DAT_027aee10 = "bool";
        _DAT_027aee18 = 0;
        uRam00000000027aee20 = 0;
        _DAT_027aee28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1f40();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeJump");
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aeec0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aee88 = FUN_011a15f0();
        _DAT_027aee80 = "_clickLevel";
        _DAT_027aee90 = 0;
        _DAT_027aee98 = 0x6600;
        _DAT_027aeea0 = "float";
        _DAT_027aeea8 = 0;
        uRam00000000027aeeb0 = 0;
        _DAT_027aeeb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aef08 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aeed0 = FUN_011a15f0();
        _DAT_027aeec8 = "_isClicking";
        _DAT_027aeed8 = 0;
        _DAT_027aeee0 = 0x6200;
        _DAT_027aeee8 = "bool";
        _DAT_027aeef0 = 0;
        uRam00000000027aeef8 = 0;
        _DAT_027aef00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4d) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aef50 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aef18 = FUN_011a15f0();
        _DAT_027aef10 = "_isMutingAllTracks";
        _DAT_027aef20 = 0;
        _DAT_027aef28 = 0x6200;
        _DAT_027aef30 = "bool";
        _DAT_027aef38 = 0;
        uRam00000000027aef40 = 0;
        _DAT_027aef48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4e) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aef98 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aef60 = FUN_011a15f0();
        _DAT_027aef58 = "_isIgnoringSourceTimeForElementTimeFunction";
        _DAT_027aef68 = 0;
        _DAT_027aef70 = 0x6200;
        _DAT_027aef78 = "bool";
        _DAT_027aef80 = 0;
        uRam00000000027aef88 = 0;
        _DAT_027aef90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aefe0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aefa8 = FUN_011a15f0();
        _DAT_027aefa0 = "_releaseDuration";
        _DAT_027aefb0 = 0;
        _DAT_027aefb8 = 0x6400;
        _DAT_027aefc0 = "double";
        _DAT_027aefc8 = 0;
        uRam00000000027aefd0 = 0;
        _DAT_027aefd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027af028 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aeff0 = FUN_011a15f0();
        _DAT_027aefe8 = "_preplayDuration";
        _DAT_027aeff8 = 0;
        _DAT_027af000 = 0x6400;
        _DAT_027af008 = "double";
        _DAT_027af010 = 0;
        uRam00000000027af018 = 0;
        _DAT_027af020 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0x100000000;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027af070 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027af038 = FUN_011a15f0();
        _DAT_027af030 = "_clickResolution";
        _DAT_027af040 = 0;
        _DAT_027af048 = 0x7100;
        _DAT_027af050 = "GNFraction";
        _DAT_027af058 = 0;
        uRam00000000027af060 = 0;
        _DAT_027af068 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_011a15f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027af0b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027af080 = FUN_011a15f0();
        _DAT_027af078 = "_clickFrequency";
        _DAT_027af088 = 0;
        _DAT_027af090 = 0x6600;
        _DAT_027af098 = "float";
        _DAT_027af0a0 = 0;
        uRam00000000027af0a8 = 0;
        _DAT_027af0b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @017c4570 — 1641 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_017c4570(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_88;
  
  if ((*(float *)(unaff_RDI + 0x58) == 0.0) && (!NAN(*(float *)(unaff_RDI + 0x58)))) {
    return param_1;
  }
  cVar4 = FUN_00e7c7f0();
  if (cVar4 == '\0') {
    return param_1;
  }
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((unaff_RSI & 0xffffffff00000000) == 0x100000000) {
      fVar7 = *(float *)(unaff_RDI + 0x58);
      dVar1 = (double)FUN_00e7c860();
      dVar1 = (dVar1 * (double)fVar7) / DAT_023b3bc0;
      goto LAB_017c4bbd;
    }
  }
  FUN_00e7c3c0();
  FUN_00e7b820();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((unaff_RSI & 0xffffffff00000000) == 0x100000000) {
      fVar7 = *(float *)(unaff_RDI + 0x58);
      if (DAT_02390124 <= fVar7) {
        local_88 = FUN_00e7c860();
        fVar7 = *(float *)(unaff_RDI + 0x58) + DAT_02390d00;
        dVar1 = (double)FUN_00e7c860();
        auVar8._8_8_ = dVar1 * (double)fVar7;
        auVar8._0_8_ = local_88;
        auVar8 = divpd(auVar8,_DAT_02415ec0);
        dVar1 = auVar8._8_8_ + auVar8._0_8_;
      }
      else {
        dVar1 = (double)FUN_00e7c860();
        dVar1 = (dVar1 * (double)fVar7) / DAT_02423860;
      }
LAB_017c4bbd:
      return param_1 + dVar1;
    }
  }
  iVar5 = (int)(unaff_RSI >> 0x20);
  if (iVar5 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    return param_1;
  }
  if (iVar5 <= *(int *)(unaff_RDI + 0x54)) {
    return param_1;
  }
  FUN_00e7c3c0();
  FUN_00e7c860();
  uVar6 = FUN_00e7cd00();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 == '\0') {
LAB_017c4854:
    FUN_00e7c3c0();
    FUN_00e7b820();
    cVar4 = FUN_00e7c7f0();
    if (cVar4 != '\0') {
      FUN_00e7b970();
      FUN_00e7c2a0();
      FUN_00e7bdc0();
      if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c4933;
    }
    FUN_00e7c860();
    FUN_00e7cd00();
  }
  else {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((uVar6 & 0xffffffff00000000) != 0x100000000) goto LAB_017c4854;
  }
LAB_017c4933:
  FUN_00e7c3c0();
  FUN_00e7c860();
  uVar6 = FUN_00e7cd00();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c4adb;
  }
  FUN_00e7c3c0();
  FUN_00e7b820();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c4adb;
  }
  FUN_00e7c860();
  FUN_00e7cd00();
LAB_017c4adb:
  dVar1 = (double)FUN_017c4570(0);
  dVar2 = (double)FUN_017c4570(0);
  FUN_00e7b970();
  FUN_00e7b970();
  FUN_00e7bdc0();
  dVar3 = (double)FUN_00e7c860();
  return dVar3 * (dVar2 - dVar1) + dVar1;
}




// ============================================================
// @017098a0 — 1604 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01709bce) */
/* WARNING: Removing unreachable block (ram,0x01709bda) */

void FUN_017098a0(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *unaff_RDI;
  uint uVar11;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 *local_98;
  undefined8 *local_80;
  char local_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  pcVar1 = DAT_02572370;
  if ((undefined8 *)*unaff_RDI != (undefined8 *)0x0) {
    local_78[0] = '\0';
    local_80 = (undefined8 *)0x0;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = (undefined8 *)*unaff_RDI;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar10 = -local_68._4_4_;
        }
        else {
          iVar10 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar10);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar10 = 0;
        }
        local_68 = CONCAT44(iVar10,(int)local_68);
      }
      lVar3 = (longlong)(int)local_68;
      iVar10 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar10) break;
      lVar7 = local_70[2];
      local_80 = *(undefined8 **)(lVar7 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      puVar5 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        puVar5 = (undefined8 *)local_80[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      lVar3 = puVar5[8];
      if (lVar3 == 0) {
        FUN_00d8ede0();
        if (local_b0 != '\0') goto LAB_017099f7;
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        local_a8 = local_b8;
      }
      else {
        FUN_00d50b00();
        local_b8 = lVar3;
LAB_017099f7:
        local_b0 = '\0';
        local_a8 = local_b8;
      }
      FUN_0170a170();
      puVar5 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (undefined8 *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*pcVar1)();
        pvVar4 = _pthread_getspecific(pVar6);
        puVar9 = local_80;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          puVar9 = (undefined8 *)local_80[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        puVar9 = (undefined8 *)puVar9[8];
        if (puVar9 == (undefined8 *)0x0) {
          FUN_00d8ede0();
          local_98 = local_58;
          if (local_50 != '\0') goto LAB_01709b6f;
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = 0;
          FUN_00d50b00();
          local_58 = puVar9;
LAB_01709b6f:
          local_50 = '\0';
          local_98 = local_58;
        }
        FUN_0170a220();
        if (local_98 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_50 = '\0';
      local_58 = local_80;
      FUN_00d21140();
      if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_b8 = local_a8;
    }
    FUN_0170cbd0();
  }
  FUN_00ca1380();
  ppuVar8 = &local_58;
  if (local_78[0] != '\0') {
    ppuVar8 = (undefined8 **)local_78;
  }
  local_58 = (undefined8 *)CONCAT71(local_58._1_7_,local_78[0]);
  *(char *)ppuVar8 = '\0';
  if ((local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_58 == '\0') {
    if (local_80 == (undefined8 *)0x0) goto LAB_01709f15;
    FUN_00d50b00();
  }
  else if (local_80 == (undefined8 *)0x0) goto LAB_01709f15;
  local_78[0] = '\0';
  local_70 = local_80;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)((longlong)local_80 + 0xc)) {
    uVar11 = 0;
    do {
      local_48 = *(longlong *)(local_80[2] + (ulonglong)uVar11 * 8);
      if (*(int *)(local_48 + 0xc) < 2) {
        local_50 = '\0';
        local_58 = (undefined8 *)0x0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar10 = -local_40._4_4_;
            }
            else {
              iVar10 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar10 = 0;
            }
            local_40 = CONCAT44(iVar10,(int)local_40);
          }
          lVar3 = (longlong)(int)local_40;
          iVar10 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          if (*(int *)(local_48 + 0xc) <= iVar10) break;
          puVar5 = *(undefined8 **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
          local_58 = puVar5;
          pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
          puVar9 = local_58;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), puVar5 = puVar9, lVar3 != 0)) {
            puVar5 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          iVar10 = local_38 + (int)local_40;
          if (*(int *)(puVar5 + 9) != iVar10) {
            FUN_00d64850();
            *(int *)(puVar5 + 9) = iVar10;
            FUN_00d64910();
          }
        }
      }
      else {
        local_50 = '\0';
        local_58 = (undefined8 *)0x0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar10 = -local_40._4_4_;
            }
            else {
              iVar10 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar10 = 0;
            }
            local_40 = CONCAT44(iVar10,(int)local_40);
          }
          lVar3 = (longlong)(int)local_40;
          iVar10 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          if (*(int *)(local_48 + 0xc) <= iVar10) break;
          puVar5 = *(undefined8 **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
          local_58 = puVar5;
          pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
          puVar9 = local_58;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), puVar5 = puVar9, lVar3 != 0)) {
            puVar5 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          iVar10 = (int)local_40 + local_38 + 1;
          if (*(int *)(puVar5 + 9) != iVar10) {
            FUN_00d64850();
            *(int *)(puVar5 + 9) = iVar10;
            FUN_00d64910();
          }
        }
      }
      FUN_0170cbd0();
      uVar11 = uVar11 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar11);
    } while ((int)uVar11 < *(int *)((longlong)local_80 + 0xc));
  }
  FUN_0170cc70();
  FUN_00d50b20();
LAB_01709f15:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01707c30 — 1575 bytes
// str: ""bool""
// str: ""GNFraction""
// str: ""double""
// str: ""GNInt""
// str: ""_timeAnchor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01707c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025eb898;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbb48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbb10 = FUN_01707870();
        _DAT_027cbb08 = "_timeAnchor";
        _DAT_027cbb18 = 0;
        _DAT_027cbb20 = 0x6400;
        _DAT_027cbb28 = "double";
        _DAT_027cbb30 = 0;
        uRam00000000027cbb38 = 0;
        _DAT_027cbb40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708440();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUBarDefinition");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708530();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseDefinition");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708620();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseDefinition",param_3,param_4,puVar11);
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbc68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbc30 = FUN_01707870();
        _DAT_027cbc28 = "_pulseSegmentSize";
        _DAT_027cbc38 = 0;
        _DAT_027cbc40 = 0x6900;
        _DAT_027cbc48 = "GNInt";
        _DAT_027cbc50 = 0;
        uRam00000000027cbc58 = 0;
        _DAT_027cbc60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01708710();
  FUN_017087f0();
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbd40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbd08 = FUN_01707870();
        _DAT_027cbd00 = "_timeSegmentSize";
        _DAT_027cbd10 = 0;
        _DAT_027cbd18 = 0x6900;
        _DAT_027cbd20 = "GNInt";
        _DAT_027cbd28 = 0;
        uRam00000000027cbd30 = 0;
        _DAT_027cbd38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_017088d0();
  FUN_017089b0();
  FUN_01708a90();
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01708b70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbeb8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbe80 = FUN_01707870();
        _DAT_027cbe78 = "_isDefaultDivisionTriplets";
        _DAT_027cbe88 = 0;
        _DAT_027cbe90 = 0x6200;
        _DAT_027cbe98 = "bool";
        _DAT_027cbea0 = 0;
        uRam00000000027cbea8 = 0;
        _DAT_027cbeb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x13] = 0x100000000;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbf00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbec8 = FUN_01707870();
        _DAT_027cbec0 = "_defaultPulseMultiple";
        _DAT_027cbed0 = 0;
        _DAT_027cbed8 = 0x7100;
        _DAT_027cbee0 = "GNFraction";
        _DAT_027cbee8 = 0;
        uRam00000000027cbef0 = 0;
        _DAT_027cbef8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar9 = FUN_01707870();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cbf48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cbf10 = FUN_01707870();
        _DAT_027cbf08 = "_defaultSubPulseDuration";
        _DAT_027cbf18 = 0;
        _DAT_027cbf20 = 0x6400;
        _DAT_027cbf28 = "double";
        _DAT_027cbf30 = 0;
        uRam00000000027cbf38 = 0;
        _DAT_027cbf40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01528a90 — 1519 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01528df4) */
/* WARNING: Removing unreachable block (ram,0x01528dfd) */

void FUN_01528a90(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_78;
  char local_70;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_70 == '\0') {
      if (local_78 == 0) goto LAB_01528fda;
      FUN_00d50b00();
    }
    else if (local_78 == 0) goto LAB_01528fda;
    for (iVar4 = 0; pVar9 = (pthread_key_t)param_1, iVar4 < *(int *)(local_78 + 0xc);
        iVar4 = iVar4 + 1) {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_0125a280();
      iVar5 = *(int *)(unaff_RDI + 0x3c);
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_01259520();
      iVar1 = *(int *)(unaff_RDI + 0x3c);
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01259520();
      param_1 = (ulonglong)((int)(dVar12 / (double)iVar1) - (uint)(dVar13 < 0.0));
      FUN_015278a0(param_1,(int)(dVar10 / (double)iVar5) - (uint)(dVar11 < 0.0),1);
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  else if ((*(longlong *)(unaff_RDI + 0x50) != 0) && (iVar4 = FUN_00c8d620(), 0 < iVar4)) {
    iVar5 = 0;
    bVar3 = true;
    do {
      do {
        lVar6 = FUN_00c8df10();
      } while (lVar6 == 0);
      if (!bVar3) break;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        if (*(longlong *)(lVar6 + 0x100) != 0) goto LAB_01528b91;
LAB_01528aea:
        FUN_015287d0();
      }
      else {
        if (*(longlong *)
             (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x100)
            == 0) goto LAB_01528aea;
LAB_01528b91:
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(lVar6 + 0x100);
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar8 = *(longlong *)(lVar6 + 0x100);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        pVar9 = (pthread_key_t)param_1;
        if (*(longlong *)(lVar8 + 0x138) != unaff_RDI) goto LAB_01528aea;
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_0125a280();
        iVar1 = *(int *)(unaff_RDI + 0x3c);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar9 = (pthread_key_t)(dVar11 < 0.0);
        dVar12 = (double)FUN_01259520();
        iVar2 = *(int *)(unaff_RDI + 0x3c);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01259520();
        param_1 = (ulonglong)((int)(dVar12 / (double)iVar2) - (uint)(dVar13 < 0.0));
        FUN_015278a0(param_1,(int)(dVar10 / (double)iVar1) - (uint)(dVar11 < 0.0),0,param_4,0);
      }
      iVar5 = iVar5 + 1;
      bVar3 = iVar5 < iVar4;
    } while (iVar5 != iVar4);
  }
LAB_01528fda:
  FUN_00d7a2d0();
  lVar6 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar6 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(lVar6 + 0xc); iVar4 = iVar4 + 1) {
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ad10();
    }
    FUN_0152a5b0();
  }
  FUN_01529100();
  *(undefined1 *)(unaff_RDI + 0x38) = 1;
  return;
}




// ============================================================
// @0152fdb0 — 1499 bytes
// ============================================================

void FUN_0152fdb0(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong unaff_RDI;
  float fVar9;
  longlong local_58;
  char local_50 [8];
  float local_48;
  float local_44;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x60) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x68) == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01274b60();
  local_40[0] = local_50[0];
  pcVar4 = local_40;
  if (local_50[0] != '\0') {
    pcVar4 = local_50;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pcVar4 = local_38;
  pcVar8 = local_50;
  if (local_50[0] == '\0') {
    pcVar8 = pcVar4;
  }
  local_38[0] = local_50[0];
  *pcVar8 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pVar7 = (pthread_key_t)pcVar4;
  if (local_58 == 0) goto LAB_0153036e;
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = *(longlong *)(local_58 + 0x68);
  }
  else {
    lVar5 = *(longlong *)
             (*(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x68)
    ;
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar7 = (pthread_key_t)lVar5;
    }
    local_44 = (float)FUN_01507f00();
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_58 != 0) {
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0129a470();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_0125a2c0();
        if ((local_48 != fVar9) || (NAN(local_48) || NAN(fVar9))) {
          pvVar3 = _pthread_getspecific(pVar7);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = (float)FUN_0125a2c0();
          pvVar3 = _pthread_getspecific(pVar7);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar9 = (float)FUN_0125a2c0();
          iVar2 = FUN_00e7d780((local_48 - fVar9) / DAT_023908e0);
          local_44 = (float)((int)local_44 + iVar2);
        }
      }
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508220();
    pvVar3 = _pthread_getspecific(pVar7);
    lVar5 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar5 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    fVar9 = *(float *)(lVar5 + 0x48);
    if ((*(float *)(unaff_RDI + 0x48) != fVar9) || (NAN(*(float *)(unaff_RDI + 0x48)) || NAN(fVar9))
       ) {
      local_44 = fVar9;
      FUN_00d64850();
      *(float *)(unaff_RDI + 0x48) = local_44;
      FUN_00d64910();
    }
    pvVar3 = _pthread_getspecific(pVar7);
    lVar5 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar5 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    fVar9 = *(float *)(lVar5 + 0x4c);
    if ((*(float *)(unaff_RDI + 0x4c) != fVar9) || (NAN(*(float *)(unaff_RDI + 0x4c)) || NAN(fVar9))
       ) {
      local_44 = fVar9;
      FUN_00d64850();
      *(float *)(unaff_RDI + 0x4c) = local_44;
      FUN_00d64910();
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      iVar2 = *(int *)(local_58 + 0x5c);
      if (*(int *)(unaff_RDI + 0x5c) != iVar2) goto LAB_01530271;
    }
    else {
      iVar2 = *(int *)(*(longlong *)
                        (local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x5c);
      if (*(int *)(unaff_RDI + 0x5c) != iVar2) {
LAB_01530271:
        FUN_00d64850();
        *(int *)(unaff_RDI + 0x5c) = iVar2;
        FUN_00d64910();
      }
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      cVar1 = *(char *)(local_58 + 0x50);
      if (*(char *)(unaff_RDI + 0x50) != cVar1) goto LAB_015302d5;
    }
    else {
      cVar1 = *(char *)(*(longlong *)
                         (local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x50);
      if (*(char *)(unaff_RDI + 0x50) != cVar1) {
LAB_015302d5:
        FUN_00d64850();
        *(char *)(unaff_RDI + 0x50) = cVar1;
        FUN_00d64910();
      }
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      cVar1 = *(char *)(local_58 + 0x58);
      if (*(char *)(unaff_RDI + 0x58) != cVar1) goto LAB_01530339;
    }
    else {
      cVar1 = *(char *)(*(longlong *)
                         (local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x58);
      if (*(char *)(unaff_RDI + 0x58) != cVar1) {
LAB_01530339:
        FUN_00d64850();
        *(char *)(unaff_RDI + 0x58) = cVar1;
        FUN_00d64910();
      }
    }
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
LAB_0153036e:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0152f790 — 1386 bytes
// ============================================================

void FUN_0152f790(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  pthread_key_t pVar7;
  double dVar8;
  char cVar9;
  longlong unaff_RDI;
  double local_70;
  char local_68 [8];
  longlong local_60;
  double local_58;
  double local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x60) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x68) == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01274b60();
  local_48[0] = local_68[0];
  pcVar3 = local_48;
  if (local_68[0] != '\0') {
    pcVar3 = local_68;
  }
  *pcVar3 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0.0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0.0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  local_40[0] = local_68[0];
  pcVar3 = local_40;
  if (local_68[0] != '\0') {
    pcVar3 = local_68;
  }
  *pcVar3 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0.0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0.0) goto LAB_0152fcdd;
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar1 = *(longlong *)((longlong)local_70 + 0x68);
    lVar4 = local_60;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)
               ((longlong)local_70 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x68);
    lVar4 = local_60;
  }
  local_60 = lVar1;
  if (local_60 != 0) {
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pcVar3 = local_68;
    if (local_68[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_68[0];
    *pcVar3 = '\0';
    local_50 = local_70;
    if ((local_68[0] != '\0') && (local_70 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0.0) {
      dVar8 = local_50;
      pvVar2 = _pthread_getspecific(SUB84(local_50,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      local_58 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), local_58 = local_50, lVar4 != 0)) {
        local_58 = *(double *)
                    ((longlong)local_50 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        dVar8 = local_50;
      }
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
      uVar5 = FUN_012f92d0();
      dVar8 = 1.97626258336499e-323;
      FUN_012f92f0(4,uVar5);
      FUN_015084d0();
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      dVar6 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), dVar6 = local_50, lVar4 != 0)) {
        dVar6 = *(double *)
                 ((longlong)local_50 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        dVar8 = local_50;
      }
      local_58 = dVar6;
      pvVar2 = _pthread_getspecific(SUB84(dVar8,0));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
      uVar5 = FUN_012f92d0();
      pVar7 = 4;
      FUN_012f92f0(4,uVar5);
      FUN_015085a0();
      pvVar2 = _pthread_getspecific(pVar7);
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pVar7 = local_50._0_4_;
      }
      pvVar2 = _pthread_getspecific(pVar7);
      dVar8 = local_70;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        dVar8 = *(double *)
                 ((longlong)local_70 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      dVar8 = (double)FUN_012f8ad0(*(undefined8 *)((longlong)dVar8 + 0x38));
      if ((*(double *)(unaff_RDI + 0x38) != dVar8) ||
         (NAN(*(double *)(unaff_RDI + 0x38)) || NAN(dVar8))) {
        local_58 = dVar8;
        FUN_00d64850();
        *(double *)(unaff_RDI + 0x38) = local_58;
        FUN_00d64910();
      }
      pvVar2 = _pthread_getspecific(pVar7);
      dVar8 = local_70;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        dVar8 = *(double *)
                 ((longlong)local_70 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      dVar8 = *(double *)((longlong)dVar8 + 0x40);
      if ((*(double *)(unaff_RDI + 0x40) != dVar8) ||
         (NAN(*(double *)(unaff_RDI + 0x40)) || NAN(dVar8))) {
        local_58 = dVar8;
        FUN_00d64850();
        *(double *)(unaff_RDI + 0x40) = local_58;
        FUN_00d64910();
      }
      pvVar2 = _pthread_getspecific(pVar7);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        cVar9 = *(char *)((longlong)local_70 + 0x51);
        if (*(char *)(unaff_RDI + 0x51) != cVar9) goto LAB_0152fc99;
      }
      else {
        cVar9 = *(char *)(*(longlong *)
                           ((longlong)local_70 + 0x20 +
                           (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x51);
        if (*(char *)(unaff_RDI + 0x51) != cVar9) {
LAB_0152fc99:
          FUN_00d64850();
          *(char *)(unaff_RDI + 0x51) = cVar9;
          FUN_00d64910();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    lVar4 = local_60;
  }
  local_60 = lVar4;
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
LAB_0152fcdd:
  if (local_48[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01526d00 — 1270 bytes
// str: ""GNFraction""
// str: ""GNInt""
// str: ""_beatsPerBar""
// str: ""_pulseAnchor""
// str: ""_pulsesPerQuarter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01526d00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025e8d20;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c39b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3980 = FUN_014ff9f0();
        _DAT_027c3978 = "_beatsPerBar";
        _DAT_027c3988 = 0;
        _DAT_027c3990 = 0x6900;
        _DAT_027c3998 = "GNInt";
        _DAT_027c39a0 = 0;
        uRam00000000027c39a8 = 0;
        _DAT_027c39b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3a00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c39c8 = FUN_014ff9f0();
        _DAT_027c39c0 = "_pulseAnchor";
        _DAT_027c39d0 = 0;
        _DAT_027c39d8 = 0x7100;
        _DAT_027c39e0 = "GNFraction";
        _DAT_027c39e8 = 0;
        uRam00000000027c39f0 = 0;
        _DAT_027c39f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3a48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3a10 = FUN_014ff9f0();
        _DAT_027c3a08 = "_pulsesPerQuarter";
        _DAT_027c3a18 = 0;
        _DAT_027c3a20 = 0x7100;
        _DAT_027c3a28 = "GNFraction";
        _DAT_027c3a30 = 0;
        uRam00000000027c3a38 = 0;
        _DAT_027c3a40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3a90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3a58 = FUN_014ff9f0();
        _DAT_027c3a50 = "_beatsPerQuarter";
        _DAT_027c3a60 = 0;
        _DAT_027c3a68 = 0x7100;
        _DAT_027c3a70 = "GNFraction";
        _DAT_027c3a78 = 0;
        uRam00000000027c3a80 = 0;
        _DAT_027c3a88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3ad8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3aa0 = FUN_014ff9f0();
        _DAT_027c3a98 = "_quarterAtPulseAnchor";
        _DAT_027c3aa8 = 0;
        _DAT_027c3ab0 = 0x7100;
        _DAT_027c3ab8 = "GNFraction";
        _DAT_027c3ac0 = 0;
        uRam00000000027c3ac8 = 0;
        _DAT_027c3ad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3b20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3ae8 = FUN_014ff9f0();
        _DAT_027c3ae0 = "_beatAtPulseAnchor";
        _DAT_027c3af0 = 0;
        _DAT_027c3af8 = 0x6900;
        _DAT_027c3b00 = "GNInt";
        _DAT_027c3b08 = 0;
        uRam00000000027c3b10 = 0;
        _DAT_027c3b18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3b68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3b30 = FUN_014ff9f0();
        _DAT_027c3b28 = "_barAtPulseAnchor";
        _DAT_027c3b38 = 0;
        _DAT_027c3b40 = 0x6900;
        _DAT_027c3b48 = "GNInt";
        _DAT_027c3b50 = 0;
        uRam00000000027c3b58 = 0;
        _DAT_027c3b60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @015292f0 — 1052 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01529630) */
/* WARNING: Removing unreachable block (ram,0x01529639) */
/* WARNING: Removing unreachable block (ram,0x01529497) */
/* WARNING: Removing unreachable block (ram,0x015294a0) */
/* WARNING: Removing unreachable block (ram,0x01529671) */
/* WARNING: Removing unreachable block (ram,0x0152967a) */
/* WARNING: Removing unreachable block (ram,0x015294f0) */
/* WARNING: Removing unreachable block (ram,0x01529510) */
/* WARNING: Removing unreachable block (ram,0x015294f2) */
/* WARNING: Removing unreachable block (ram,0x01529512) */
/* WARNING: Removing unreachable block (ram,0x015296a1) */
/* WARNING: Removing unreachable block (ram,0x015296ae) */

undefined8 * FUN_015292f0(double param_1,double param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong unaff_RSI;
  ulonglong uVar13;
  undefined8 *unaff_RDI;
  int iVar14;
  bool bVar15;
  longlong local_80;
  char local_78;
  int local_68;
  undefined8 *local_58;
  undefined8 *local_50;
  
  pcVar5 = DAT_02578b18;
  pcVar4 = DAT_02572370;
  if (*(char *)(unaff_RSI + 0x38) != '\0') {
    uVar12 = (uint)(param_1 / (double)*(int *)(unaff_RSI + 0x3c) +
                   (double)*(int *)(unaff_RSI + 0x40));
    uVar8 = 0;
    if (-1 < (int)uVar12) {
      uVar8 = uVar12;
    }
    iVar14 = (int)((param_1 + param_2) / (double)*(int *)(unaff_RSI + 0x3c) +
                  (double)*(int *)(unaff_RSI + 0x40));
    if ((int)uVar8 <= iVar14) {
      uVar13 = (ulonglong)uVar8;
      local_50 = (undefined8 *)0x0;
      bVar3 = false;
      local_58 = (undefined8 *)0x0;
      bVar15 = false;
      do {
        lVar6 = local_80;
        pVar1 = *(pthread_key_t *)(*(longlong *)(unaff_RSI + 0x48) + 0xc);
        if ((longlong)(int)pVar1 <= (longlong)uVar13) break;
        pvVar9 = _pthread_getspecific(pVar1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
            goto LAB_015294b0;
          }
        }
        else if (local_80 != 0) {
LAB_015294b0:
          local_78 = '\0';
          local_80 = 0;
          local_68 = -1;
          while( true ) {
            lVar10 = (longlong)local_68;
            local_68 = local_68 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_68) break;
            lVar2 = *(longlong *)(lVar6 + 0x10);
            local_80 = *(longlong *)(lVar2 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar2);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_012754d0(param_1,param_2);
            if (cVar7 != '\0') {
              if (local_50 == (undefined8 *)0x0) {
                local_50 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *local_50 = &DAT_02572358;
                (*pcVar4)();
                puVar11 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &DAT_02578b00;
                (*pcVar5)();
                if ((bVar15) && (local_58 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                bVar3 = true;
                local_58 = puVar11;
                bVar15 = true;
              }
              cVar7 = FUN_00d7a850();
              if (cVar7 == '\0') {
                FUN_00d24b60(0,FUN_012e8c90,0);
                FUN_00d7a410();
              }
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != iVar14 + 1);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar3) {
        if (local_50 == (undefined8 *)0x0) {
          local_50 = (undefined8 *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_015296ee;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  bVar15 = false;
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
LAB_015296ee:
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar15) && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0152d500 — 981 bytes
// ============================================================

float FUN_0152d500(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t pVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *local_48;
  char local_40;
  float local_34;
  
  if (*(longlong *)(unaff_RDI + 0x68) == 0) {
    return 0.0;
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_48 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = local_48;
    if (local_40 != '\0') goto LAB_0152d5a9;
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    return 0.0;
  }
LAB_0152d5a9:
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar5;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar4 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507f00();
  lVar2 = *plVar4;
  fVar6 = (float)(**(code **)(lVar2 + 0x3a0))();
  pVar3 = (pthread_key_t)lVar2;
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar7 = (float)FUN_0125a2c0();
  if (fVar7 <= fVar6) {
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar7 = (float)FUN_0125a2c0();
    local_34 = 0.0;
    if (fVar7 < fVar6) {
      pvVar1 = _pthread_getspecific(pVar3);
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar2 = *plVar5;
      fVar7 = (float)(**(code **)(lVar2 + 0x3a0))();
      pvVar1 = _pthread_getspecific((pthread_key_t)lVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar8 = (float)FUN_0125a2c0();
      local_34 = ((fVar8 - fVar6) / (fVar7 - fVar6)) * DAT_023b1608;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(pVar3);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    lVar2 = *plVar5;
    fVar7 = (float)(**(code **)(lVar2 + 0x3a0))();
    pvVar1 = _pthread_getspecific((pthread_key_t)lVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar8 = (float)FUN_0125a2c0();
    local_34 = (fVar8 - fVar6) / (fVar7 - fVar6);
    local_34 = local_34 + local_34;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_34;
}




// ============================================================
// @017c4e20 — 979 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017c517b) */
/* WARNING: Removing unreachable block (ram,0x017c5188) */

undefined8 * FUN_017c4e20(undefined8 param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  ulonglong uVar6;
  code *pcVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar8;
  undefined8 *local_38;
  
  cVar4 = FUN_00e7c7f0();
  pcVar3 = DAT_02572370;
  if (cVar4 == '\0') {
LAB_017c5192:
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_017c519b:
    local_38 = (undefined8 *)0x0;
  }
  else {
    if (param_2 != '\0') {
      if (DAT_0240b530 < *(float *)(unaff_RSI + 0x58)) goto LAB_017c4e86;
      goto LAB_017c5192;
    }
    if (*(float *)(unaff_RSI + 0x58) <= 0.0) goto LAB_017c5192;
LAB_017c4e86:
    lVar1 = *(longlong *)(unaff_RSI + 0x40);
    if (lVar1 == 0) goto LAB_017c5192;
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar2 = false;
      local_38 = (undefined8 *)0x0;
    }
    else {
      iVar8 = 0;
      local_38 = (undefined8 *)0x0;
      bVar2 = false;
      pcVar7 = DAT_02572370;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_017c3170();
        cVar4 = FUN_00e7c7f0();
        if (cVar4 == '\0') {
LAB_017c4fff:
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_017c3170();
          FUN_00e7c3c0();
          FUN_00e7b820();
          cVar4 = FUN_00e7c7f0();
          if (cVar4 != '\0') {
            FUN_00e7b970();
            FUN_00e7c2a0();
            FUN_00e7bdc0();
            pcVar7 = (code *)0x0;
            if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c5109;
          }
        }
        else {
          FUN_00e7b970();
          FUN_00e7c2a0();
          FUN_00e7bdc0();
          pcVar7 = (code *)0x0;
          if ((uVar6 & 0xffffffff00000000) != 0x100000000) goto LAB_017c4fff;
LAB_017c5109:
          pcVar7 = (code *)0x0;
          if (local_38 == (undefined8 *)0x0) {
            local_38 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_38 = &DAT_02572358;
            (*pcVar3)();
            bVar2 = true;
          }
          FUN_00d21140();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0142bf90();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar2) {
      *unaff_RDI = local_38;
      goto LAB_017c51a0;
    }
    if (local_38 == (undefined8 *)0x0) goto LAB_017c519b;
    FUN_00d50b00();
  }
  *unaff_RDI = local_38;
LAB_017c51a0:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @0152b9f0 — 910 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0152bc4b) */
/* WARNING: Removing unreachable block (ram,0x0152baed) */
/* WARNING: Removing unreachable block (ram,0x0152baf9) */
/* WARNING: Removing unreachable block (ram,0x0152bb07) */
/* WARNING: Removing unreachable block (ram,0x0152bb13) */
/* WARNING: Removing unreachable block (ram,0x0152bd51) */
/* WARNING: Removing unreachable block (ram,0x0152bd5a) */
/* WARNING: Removing unreachable block (ram,0x0152bc50) */
/* WARNING: Removing unreachable block (ram,0x0152bc70) */
/* WARNING: Removing unreachable block (ram,0x0152bc52) */
/* WARNING: Removing unreachable block (ram,0x0152bc72) */

void FUN_0152b9f0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  int local_40;
  
  if ((DAT_028ad110 == 0) || (DAT_028ad119 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad110 == 0) {
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      lVar4 = DAT_027c20c0;
      if (DAT_027c20c0 != 0) {
        FUN_00d50b00();
      }
      FUN_01e2af10();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027c40f0;
      if (DAT_027c40f0 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar1 = DAT_028ad110;
      if (DAT_028ad110 != local_58) {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        DAT_028ad110 = local_58;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != 0) && (DAT_028ad118 == '\0')) {
        DAT_028ad118 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_028ad110;
      if (DAT_028ad110 != 0) {
        FUN_00d50b00();
        FUN_00d23d90();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)puVar3 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(puVar3[2] + 8 + lVar4 * 8);
        FUN_00d50130();
      }
      FUN_00083b20();
      FUN_00d50b20();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      DAT_028ad119 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad119 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00e427c0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_58 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_58 = *(longlong *)(unaff_RSI + 0x38);
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @0152eef0 — 885 bytes
// ============================================================

void FUN_0152eef0(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  longlong local_58;
  char local_50;
  longlong local_38;
  
  lVar6 = *unaff_RDI;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar10 = 0;
    local_38 = 0;
    bVar2 = false;
    lVar9 = 0;
    bVar3 = false;
    lVar7 = 0;
    do {
      pVar8 = (pthread_key_t)lVar9;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar10 * 8);
      if (local_38 == lVar6) {
        if ((!bVar2) && (local_38 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = lVar6;
        }
        else {
          bVar2 = true;
          local_38 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (pthread_key_t)local_38;
      }
      FUN_0125e930();
      if (local_58 == lVar7) {
        lVar11 = lVar7;
        bVar4 = bVar3;
        if ((!bVar3) && (local_58 != 0)) {
          if (local_50 != '\0') goto LAB_0152f054;
          FUN_00d50b00();
          bVar4 = true;
        }
LAB_0152f0a9:
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar11 == 0) goto LAB_0152ef30;
LAB_0152f0cc:
        pvVar5 = _pthread_getspecific(pVar8);
        lVar6 = lVar11;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_01259650();
        if ((*(double *)(lVar6 + 0x38) != dVar12) || (NAN(*(double *)(lVar6 + 0x38)) || NAN(dVar12))
           ) {
          FUN_00d64850();
          *(double *)(lVar6 + 0x38) = dVar12;
          FUN_00d64910();
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          lVar6 = lVar11;
          if ((*(double *)(lVar11 + 0x40) != DAT_02390448) ||
             (NAN(*(double *)(lVar11 + 0x40)) || NAN(DAT_02390448))) goto LAB_0152f1d4;
        }
        else {
          lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          if ((*(double *)(lVar6 + 0x40) != DAT_02390448) ||
             (NAN(*(double *)(lVar6 + 0x40)) || NAN(DAT_02390448))) {
LAB_0152f1d4:
            FUN_00d64850();
            *(undefined8 *)(lVar6 + 0x40) = 0;
            FUN_00d64910();
          }
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          cVar1 = *(char *)(lVar11 + 0x51);
          lVar6 = lVar11;
        }
        else {
          lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          cVar1 = *(char *)(lVar6 + 0x51);
        }
        bVar3 = bVar4;
        if (cVar1 != '\0') {
          FUN_00d64850();
          *(undefined1 *)(lVar6 + 0x51) = 0;
          FUN_00d64910();
        }
      }
      else {
        lVar11 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0152f0a9;
        }
        if ((bVar3) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
LAB_0152f054:
        bVar4 = true;
        if (lVar11 != 0) goto LAB_0152f0cc;
LAB_0152ef30:
        lVar11 = 0;
        bVar3 = bVar4;
      }
      lVar10 = lVar10 + 1;
      lVar6 = *unaff_RDI;
      lVar9 = (longlong)*(int *)(lVar6 + 0xc);
      lVar7 = lVar11;
    } while (lVar10 < lVar9);
    if ((bVar3) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @0152f340 — 852 bytes
// ============================================================

void FUN_0152f340(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  longlong local_40;
  char local_38;
  
  lVar2 = *unaff_RDI;
  if (0 < *(int *)(lVar2 + 0xc)) {
    lVar7 = 0;
    lVar6 = 0;
    bVar1 = false;
    do {
      pVar5 = (pthread_key_t)param_1;
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
      if (lVar6 == lVar2) {
        if ((!bVar1) && (lVar6 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar6 = lVar2;
        }
        else {
          bVar1 = true;
          lVar6 = lVar2;
        }
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar2 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        fVar8 = (float)FUN_0152d500();
        if ((*(float *)(lVar2 + 0x48) != fVar8) || (NAN(*(float *)(lVar2 + 0x48)) || NAN(fVar8))) {
          FUN_00d64850();
          *(float *)(lVar2 + 0x48) = fVar8;
          FUN_00d64910();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar2 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if ((*(float *)(lVar2 + 0x4c) != DAT_0239424c) ||
           (NAN(*(float *)(lVar2 + 0x4c)) || NAN(DAT_0239424c))) {
          FUN_00d64850();
          *(undefined4 *)(lVar2 + 0x4c) = 0;
          FUN_00d64910();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar2 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (*(char *)(lVar2 + 0x50) != '\0') {
          FUN_00d64850();
          *(undefined1 *)(lVar2 + 0x50) = 0;
          FUN_00d64910();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      lVar2 = *unaff_RDI;
      param_1 = (longlong)*(int *)(lVar2 + 0xc);
    } while (lVar7 < param_1);
    if ((bVar1) && (lVar6 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @0152d930 — 747 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0152d9dc) */

ulonglong FUN_0152d930(float param_1)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t in_ECX;
  pthread_key_t pVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  float fVar6;
  ulonglong uVar7;
  longlong *local_50;
  char local_48;
  float local_34;
  
  if (*(longlong *)(unaff_RDI + 0x68) == 0) goto LAB_0152da11;
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_50 == (longlong *)0x0) {
    bVar1 = false;
    local_50 = (longlong *)0x0;
    if (local_48 != '\0') {
      bVar1 = false;
      local_50 = (longlong *)0x0;
    }
LAB_0152d9e1:
    if (local_50 == (longlong *)0x0) {
LAB_0152da11:
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_0125a2c0();
      return uVar7;
    }
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      goto LAB_0152d9e1;
    }
    bVar1 = true;
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = local_50;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507f00();
  lVar3 = *plVar5;
  local_34 = (float)(**(code **)(lVar3 + 0x3a0))();
  pVar4 = (pthread_key_t)lVar3;
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) goto LAB_0152dbed;
    pvVar2 = _pthread_getspecific(pVar4);
    plVar5 = local_50;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
    fVar6 = (fVar6 - local_34) * param_1 * DAT_02390118;
  }
  else {
    pvVar2 = _pthread_getspecific(pVar4);
    plVar5 = local_50;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
    fVar6 = (fVar6 - local_34) * param_1 * DAT_0239011c;
  }
  local_34 = local_34 + fVar6;
LAB_0152dbed:
  if ((bVar1) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return (ulonglong)(uint)local_34;
}




// ============================================================
// @017c5270 — 739 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017c54f8) */
/* WARNING: Removing unreachable block (ram,0x017c5505) */

undefined8 * FUN_017c5270(void)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  code *pcVar7;
  code *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  code *local_88;
  undefined *local_80;
  code *local_78;
  
  local_88 = unaff_RSI + 0x50;
  cVar4 = FUN_00e7c7f0();
  if ((cVar4 == '\0') || (lVar1 = *(longlong *)(unaff_RSI + 0x40), lVar1 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    local_b0 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = lVar1;
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar3 = false;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      local_78 = DAT_02572370;
      lVar8 = 0;
      local_80 = &DAT_02572358;
      puVar6 = (undefined8 *)0x0;
      bVar3 = false;
      pcVar7 = DAT_02572370;
      do {
        local_b8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017c3170();
        local_d0 = 0;
        local_d8 = 0;
        pcVar7 = unaff_RSI;
        cVar4 = FUN_017c4d30(unaff_RSI,&local_d8);
        if (cVar4 == '\0') {
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017c3170();
          uVar2 = *(undefined8 *)local_88;
          FUN_00e7c2a0();
          FUN_00e7c3c0();
          local_90 = uVar2;
          FUN_00e7b820();
          local_c0 = 0;
          local_c8 = 0;
          cVar4 = FUN_017c4d30();
          if (cVar4 != '\0') goto LAB_017c549e;
        }
        else {
LAB_017c549e:
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = local_80;
            (*local_78)();
            bVar3 = true;
          }
          FUN_00d21140();
        }
        lVar8 = lVar8 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0142bf90();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) goto LAB_017c5550;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_017c5550;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_017c5550:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @01529c50 — 729 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01529f03) */
/* WARNING: Removing unreachable block (ram,0x01529f10) */
/* WARNING: Removing unreachable block (ram,0x01529db7) */
/* WARNING: Removing unreachable block (ram,0x01529dc0) */
/* WARNING: Removing unreachable block (ram,0x01529e07) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e09) */
/* WARNING: Removing unreachable block (ram,0x01529e32) */

undefined8 * FUN_01529c50(double param_1,double param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar13;
  longlong local_58;
  char local_50;
  int local_40;
  
  pcVar4 = DAT_02572370;
  if (*(char *)(unaff_RSI + 0x38) == '\0') {
LAB_01529cad:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    uVar11 = (uint)(param_1 / (double)*(int *)(unaff_RSI + 0x3c) +
                   (double)*(int *)(unaff_RSI + 0x40));
    uVar7 = 0;
    if (-1 < (int)uVar11) {
      uVar7 = uVar11;
    }
    iVar12 = (int)((param_1 + param_2) / (double)*(int *)(unaff_RSI + 0x3c) +
                  (double)*(int *)(unaff_RSI + 0x40));
    if (iVar12 < (int)uVar7) goto LAB_01529cad;
    uVar13 = (ulonglong)uVar7;
    puVar10 = (undefined8 *)0x0;
    bVar3 = false;
    do {
      lVar5 = local_58;
      pVar1 = *(pthread_key_t *)(*(longlong *)(unaff_RSI + 0x48) + 0xc);
      if ((longlong)(int)pVar1 <= (longlong)uVar13) break;
      pvVar8 = _pthread_getspecific(pVar1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_01529dd0;
        }
      }
      else if (local_58 != 0) {
LAB_01529dd0:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar9 = (longlong)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_40) break;
          lVar2 = *(longlong *)(lVar5 + 0x10);
          local_58 = *(longlong *)(lVar2 + 8 + lVar9 * 8);
          pvVar8 = _pthread_getspecific((pthread_key_t)lVar2);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_01275530(param_1,param_2);
          if (cVar6 != '\0') {
            if (puVar10 == (undefined8 *)0x0) {
              puVar10 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar10 = &DAT_02572358;
              (*pcVar4)();
              bVar3 = true;
            }
            FUN_00d24b60(0,FUN_012e8c90,1);
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != iVar12 + 1);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) goto LAB_01529f3e;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_01529f3e;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_01529f3e:
  *unaff_RDI = puVar10;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @015298a0 — 729 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01529b53) */
/* WARNING: Removing unreachable block (ram,0x01529b60) */
/* WARNING: Removing unreachable block (ram,0x01529a07) */
/* WARNING: Removing unreachable block (ram,0x01529a10) */
/* WARNING: Removing unreachable block (ram,0x01529a57) */
/* WARNING: Removing unreachable block (ram,0x01529a80) */
/* WARNING: Removing unreachable block (ram,0x01529a59) */
/* WARNING: Removing unreachable block (ram,0x01529a82) */

undefined8 * FUN_015298a0(double param_1,double param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar13;
  longlong local_58;
  char local_50;
  int local_40;
  
  pcVar4 = DAT_02572370;
  if (*(char *)(unaff_RSI + 0x38) == '\0') {
LAB_015298fd:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    uVar11 = (uint)(param_1 / (double)*(int *)(unaff_RSI + 0x3c) +
                   (double)*(int *)(unaff_RSI + 0x40));
    uVar7 = 0;
    if (-1 < (int)uVar11) {
      uVar7 = uVar11;
    }
    iVar12 = (int)((param_1 + param_2) / (double)*(int *)(unaff_RSI + 0x3c) +
                  (double)*(int *)(unaff_RSI + 0x40));
    if (iVar12 < (int)uVar7) goto LAB_015298fd;
    uVar13 = (ulonglong)uVar7;
    puVar10 = (undefined8 *)0x0;
    bVar3 = false;
    do {
      lVar5 = local_58;
      pVar1 = *(pthread_key_t *)(*(longlong *)(unaff_RSI + 0x48) + 0xc);
      if ((longlong)(int)pVar1 <= (longlong)uVar13) break;
      pvVar8 = _pthread_getspecific(pVar1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_01529a20;
        }
      }
      else if (local_58 != 0) {
LAB_01529a20:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar9 = (longlong)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_40) break;
          lVar2 = *(longlong *)(lVar5 + 0x10);
          local_58 = *(longlong *)(lVar2 + 8 + lVar9 * 8);
          pvVar8 = _pthread_getspecific((pthread_key_t)lVar2);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_01275500(param_1,param_2);
          if (cVar6 != '\0') {
            if (puVar10 == (undefined8 *)0x0) {
              puVar10 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar10 = &DAT_02572358;
              (*pcVar4)();
              bVar3 = true;
            }
            FUN_00d24b60(0,FUN_012e8c90,1);
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != iVar12 + 1);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) goto LAB_01529b8e;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_01529b8e;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_01529b8e:
  *unaff_RDI = puVar10;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @0114f310 — 727 bytes
// str: ""float""
// str: ""GNFraction""
// str: ""_duration""
// str: ""MUGrooveItem""
// str: ""_swingResolution""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0114f310(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_02603c58;
  unaff_RDI[7] = 0x100000000;
  lVar9 = FUN_0114f090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279f380 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279f348 = FUN_0114f090();
        _DAT_0279f340 = "_duration";
        _DAT_0279f350 = 0;
        _DAT_0279f358 = 0x7100;
        _DAT_0279f360 = "GNFraction";
        _DAT_0279f368 = 0;
        uRam000000000279f370 = 0;
        _DAT_0279f378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0114f090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0114f690();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUGrooveItem");
  }
  FUN_0114f780();
  unaff_RDI[10] = 0x100000000;
  lVar9 = FUN_0114f090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279f458 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279f420 = FUN_0114f090();
        _DAT_0279f418 = "_swingResolution";
        _DAT_0279f428 = 0;
        _DAT_0279f430 = 0x7100;
        _DAT_0279f438 = "GNFraction";
        _DAT_0279f440 = 0;
        uRam000000000279f448 = 0;
        _DAT_0279f450 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_0114f090();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279f4a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279f468 = FUN_0114f090();
        _DAT_0279f460 = "_swingFactor";
        _DAT_0279f470 = 0;
        _DAT_0279f478 = 0x6600;
        _DAT_0279f480 = "float";
        _DAT_0279f488 = 0;
        uRam000000000279f490 = 0;
        _DAT_0279f498 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01528450 — 678 bytes
// ============================================================

void FUN_01528450(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char *pcVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong lVar8;
  longlong unaff_RDI;
  bool bVar9;
  uint uVar10;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
    uVar10 = 0;
    bVar9 = false;
    lVar8 = 0;
  }
  else {
    uVar10 = 0;
    lVar8 = 0;
    bVar9 = false;
    do {
      FUN_00d23310();
      local_38[0] = local_40[0];
      pcVar7 = local_38;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar7;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar6 = (pthread_key_t)pcVar7;
      if (local_48 == lVar8) {
        if ((bVar9) || (local_48 == 0)) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar9 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_38[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar9) || (lVar8 == 0)) goto LAB_01528530;
        FUN_00d50b20();
        lVar8 = local_48;
        bVar9 = true;
      }
      else if ((bVar9) && (lVar8 != 0)) {
        FUN_00d50b20();
        lVar8 = local_48;
        bVar9 = true;
      }
      else {
LAB_01528530:
        lVar8 = local_48;
        bVar9 = true;
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 != 0) {
        uVar10 = *(uint *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
        break;
      }
      FUN_015276e0();
      *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + -1;
    } while (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) != 0);
  }
  do {
    if ((int)uVar10 < 1) {
LAB_01528704:
      if ((bVar9) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      return;
    }
    uVar10 = uVar10 - 1;
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)uVar10 * 8);
    pVar6 = uVar10;
    if (lVar8 == lVar2) {
      lVar2 = lVar8;
      bVar3 = bVar9;
      if ((!bVar9) && (lVar8 != 0)) {
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar9) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
    }
    bVar9 = bVar3;
    lVar8 = lVar2;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152aa70();
    iVar1 = *(int *)(local_48 + 0xc);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 != 0) goto LAB_01528704;
    FUN_015276e0();
  } while( true );
}




// ============================================================
// @017c56a0 — 638 bytes
// str: ""bool""
// str: ""GNFraction""
// str: ""_startQuarter""
// str: ""double""
// str: ""_quarterDeviation""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017c56a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_026038a0;
  unaff_RDI[7] = 0x100000000;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d2e40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d2e08 = FUN_017c3330();
        _DAT_027d2e00 = "_startQuarter";
        _DAT_027d2e10 = 0;
        _DAT_027d2e18 = 0x7100;
        _DAT_027d2e20 = "GNFraction";
        _DAT_027d2e28 = 0;
        uRam00000000027d2e30 = 0;
        _DAT_027d2e38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d2e88 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d2e50 = FUN_017c3330();
        _DAT_027d2e48 = "_quarterDeviation";
        _DAT_027d2e58 = 0;
        _DAT_027d2e60 = 0x6400;
        _DAT_027d2e68 = "double";
        _DAT_027d2e70 = 0;
        uRam00000000027d2e78 = 0;
        _DAT_027d2e80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_017c5970();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d2f90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d2f58 = FUN_017c3330();
        _DAT_027d2f50 = "_isAccent";
        _DAT_027d2f60 = 0;
        _DAT_027d2f68 = 0x6200;
        _DAT_027d2f70 = "bool";
        _DAT_027d2f78 = 0;
        uRam00000000027d2f80 = 0;
        _DAT_027d2f88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0165fd70 — 625 bytes
// str: ""bool""
// str: ""GNFraction""
// str: ""GNInt""
// str: ""_isTransitional""
// str: ""_startBarIndexCache""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0165fd70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025f6568;
  FUN_01660050();
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0165f620();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c8108 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c80d0 = FUN_0165f620();
        _DAT_027c80c8 = "_isTransitional";
        _DAT_027c80d8 = 0;
        _DAT_027c80e0 = 0x6200;
        _DAT_027c80e8 = "bool";
        _DAT_027c80f0 = 0;
        uRam00000000027c80f8 = 0;
        _DAT_027c8100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_0165f620();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c8150 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c8118 = FUN_0165f620();
        _DAT_027c8110 = "_startBarIndexCache";
        _DAT_027c8120 = 0;
        _DAT_027c8128 = 0x6901;
        _DAT_027c8130 = "GNInt";
        _DAT_027c8138 = 0;
        uRam00000000027c8140 = 0;
        _DAT_027c8148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0x100000000;
  lVar9 = FUN_0165f620();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c8198 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c8160 = FUN_0165f620();
        _DAT_027c8158 = "_startBeatCache";
        _DAT_027c8168 = 0;
        _DAT_027c8170 = 0x7101;
        _DAT_027c8178 = "GNFraction";
        _DAT_027c8180 = 0;
        uRam00000000027c8188 = 0;
        _DAT_027c8190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0085a3b0 — 569 bytes
// str: ""GNFraction""
// str: ""_offset""
// str: ""_linesPerSecond""
// str: ""_secondsPerGrid""
// str: ""double""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085a3b0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_008233b0();
  *unaff_RDI = &DAT_02639cd8;
  *(undefined8 *)((longlong)unaff_RDI + 0x24) = 0x100000000;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273c650 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273c618 = FUN_000be800();
        _DAT_0273c610 = "_linesPerSecond";
        _DAT_0273c620 = 0;
        _DAT_0273c628 = 0x7100;
        _DAT_0273c630 = "GNFraction";
        _DAT_0273c638 = 0;
        uRam000000000273c640 = 0;
        _DAT_0273c648 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273c698 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273c660 = FUN_000be800();
        _DAT_0273c658 = "_secondsPerGrid";
        _DAT_0273c668 = 0;
        _DAT_0273c670 = 0x6400;
        _DAT_0273c678 = "double";
        _DAT_0273c680 = 0;
        uRam000000000273c688 = 0;
        _DAT_0273c690 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273c6e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273c6a8 = FUN_000be800();
        _DAT_0273c6a0 = "_offset";
        _DAT_0273c6b0 = 0;
        _DAT_0273c6b8 = 0x6400;
        _DAT_0273c6c0 = "double";
        _DAT_0273c6c8 = 0;
        uRam000000000273c6d0 = 0;
        _DAT_0273c6d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0085a660();
  return;
}




// ============================================================
// @0152ec70 — 542 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0152ecfc) */
/* WARNING: Removing unreachable block (ram,0x0152ed05) */

void FUN_0152ec70(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507e40();
    if (local_40 != (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      if (unaff_SIL == '\0') {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2c0();
        (**(code **)(*local_40 + 0x3a8))();
        FUN_01508220();
      }
      else {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125dfa0();
        (**(code **)(*local_40 + 0x3a8))();
        FUN_01508220();
      }
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00043ac0 — 538 bytes
// str: ""bool""
// str: ""_showsMixedFraction""
// str: ""_reducingDisabled""
// str: ""_resolution""
// str: ""GNFraction""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00043ac0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025910f8;
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_000438c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027785d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02778598 = FUN_000438c0();
        _DAT_02778590 = "_showsMixedFraction";
        _DAT_027785a0 = 0;
        _DAT_027785a8 = 0x6200;
        _DAT_027785b0 = "bool";
        _DAT_027785b8 = 0;
        uRam00000000027785c0 = 0;
        _DAT_027785c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd) = 0;
  lVar2 = FUN_000438c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d1c50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d1c18 = FUN_000438c0();
        _DAT_026d1c10 = "_reducingDisabled";
        _DAT_026d1c20 = 0;
        _DAT_026d1c28 = 0x6200;
        _DAT_026d1c30 = "bool";
        _DAT_026d1c38 = 0;
        uRam00000000026d1c40 = 0;
        _DAT_026d1c48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[2] = 0x100000000;
  lVar2 = FUN_000438c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02778620 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027785e8 = FUN_000438c0();
        _DAT_027785e0 = "_resolution";
        _DAT_027785f0 = 0;
        _DAT_027785f8 = 0x7100;
        _DAT_02778600 = "GNFraction";
        _DAT_02778608 = 0;
        uRam0000000002778610 = 0;
        _DAT_02778618 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @015287d0 — 516 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015288f1) */
/* WARNING: Removing unreachable block (ram,0x015288fa) */

void FUN_015287d0(void)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  longlong local_60;
  char local_58;
  
  lVar3 = *(longlong *)(unaff_RDI + 0x48);
  uVar9 = *(uint *)(lVar3 + 0xc);
  uVar7 = (ulonglong)uVar9;
  if ((int)uVar9 < 1) {
    bVar8 = false;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    bVar8 = false;
    while( true ) {
      uVar9 = uVar9 - 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar9 * 8);
      pVar5 = uVar9;
      if (lVar6 == lVar3) {
        lVar3 = lVar6;
        bVar1 = bVar8;
        if ((!bVar8) && (lVar6 != 0)) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar8) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar8 = bVar1;
      lVar6 = lVar3;
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      iVar2 = FUN_00d237a0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (iVar2 != -1) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152abd0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152b730();
      }
      if ((longlong)uVar7 < 2) break;
      uVar7 = uVar7 - 1;
      lVar3 = *(longlong *)(unaff_RDI + 0x48);
    }
  }
  FUN_01528450();
  if ((bVar8) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01706fd0 — 511 bytes
// str: ""GNFraction""
// str: ""_startQuarter""
// str: ""MUQuarterAnchor""
// str: ""_subdivison""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01706fd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_02615e70;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01706dd0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01707240();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterAnchor");
  }
  unaff_RDI[8] = 0x100000000;
  lVar9 = FUN_01706dd0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cb860 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cb828 = FUN_01706dd0();
        _DAT_027cb820 = "_startQuarter";
        _DAT_027cb830 = 0;
        _DAT_027cb838 = 0x7100;
        _DAT_027cb840 = "GNFraction";
        _DAT_027cb848 = 0;
        uRam00000000027cb850 = 0;
        _DAT_027cb858 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0x100000000;
  lVar9 = FUN_01706dd0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cb8a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cb870 = FUN_01706dd0();
        _DAT_027cb868 = "_subdivison";
        _DAT_027cb878 = 0;
        _DAT_027cb880 = 0x7100;
        _DAT_027cb888 = "GNFraction";
        _DAT_027cb890 = 0;
        uRam00000000027cb898 = 0;
        _DAT_027cb8a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @017c3c30 — 502 bytes
// ============================================================

void FUN_017c3c30(pthread_key_t param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  int iStack_54;
  int iStack_4c;
  int iVar7;
  char local_38;
  
  plVar2 = (longlong *)FUN_0114f240();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  plVar6 = plVar2;
  if (pvVar3 == (void *)0x0) {
    iVar7 = *(int *)((longlong)plVar2 + 0x3c);
  }
  else {
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    iVar7 = *(int *)((longlong)plVar6 + 0x3c);
  }
  if (((iVar7 == 0) || (unaff_RSI >> 0x20 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
    FUN_00d64850();
    plVar6[7] = unaff_RSI;
    FUN_00d64910();
  }
  uVar5 = FUN_00e7bcc0();
  if ((uVar5 >> 0x20 != 0) && (iVar7 = (int)(unaff_RSI >> 0x20), iVar7 != 0)) {
    while (cVar1 = FUN_00e7c020(), cVar1 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c3180(0);
      if (local_38 == '\0') {
        if (unaff_RSI != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_017c3eb0();
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (unaff_RSI != 0)) {
        FUN_00d50b20();
      }
      iStack_54 = (int)((ulonglong)param_2 >> 0x20);
      if (iStack_54 == 0) break;
      unaff_RSI = unaff_RSI & 0xffffffff00000000;
      cVar1 = FUN_00e7c630();
      if (cVar1 != '\0') break;
      FUN_00e7b820();
      iStack_4c = (int)(uVar5 >> 0x20);
      if ((iStack_4c == 0) || (iVar7 == 0)) break;
    }
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



