// Function: FUN_01532cf0
// Address: 01532cf0
// Size: 9782 bytes
// Class: GNFraction


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


