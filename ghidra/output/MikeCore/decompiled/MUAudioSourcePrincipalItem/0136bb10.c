// Function: FUN_0136bb10
// Address: 0136bb10
// Size: 7520 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x0136cbe9) */
/* WARNING: Removing unreachable block (ram,0x0136c992) */
/* WARNING: Removing unreachable block (ram,0x0136c99e) */
/* WARNING: Removing unreachable block (ram,0x0136cbf5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0136bb10(undefined8 *param_1,undefined8 **param_2,char param_3,undefined4 param_4)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  int iVar13;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 **ppuVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dc_02;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  uint extraout_XMM0_Dd_02;
  undefined8 **local_2b0;
  undefined1 local_2a8;
  undefined8 **local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 *local_280;
  undefined1 local_278;
  undefined8 *local_270;
  undefined1 local_268;
  undefined8 *local_260;
  undefined1 local_258;
  undefined8 *local_250;
  undefined1 local_248;
  undefined8 *local_240;
  undefined1 local_238;
  undefined8 **local_230;
  undefined1 local_228;
  undefined8 *local_220;
  undefined1 local_218;
  longlong local_210;
  undefined1 local_208;
  undefined8 **local_200;
  undefined1 local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 **local_1a8;
  char local_1a0;
  undefined8 **local_198;
  char local_190;
  undefined8 **local_188;
  char local_180;
  undefined8 **local_178;
  char local_170;
  float local_164;
  undefined8 **local_160;
  char local_158;
  longlong local_150;
  char local_148;
  undefined8 **local_140;
  char local_138;
  undefined8 **local_130;
  char local_128;
  undefined8 **local_120;
  undefined1 local_118 [16];
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  uint uStack_f0;
  uint uStack_ec;
  float local_e4;
  undefined8 local_e0;
  undefined8 **local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 **local_c8;
  undefined8 **local_c0;
  undefined8 **local_b8;
  undefined8 **local_b0;
  char local_a8;
  undefined8 **local_a0;
  char local_98;
  undefined8 **local_90;
  undefined8 local_88;
  int local_80;
  undefined8 **local_78;
  char local_70;
  undefined8 **local_68;
  undefined8 local_60;
  int local_58;
  undefined8 **local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 **local_38;
  
  local_40 = (undefined8 *)CONCAT44(local_40._4_4_,param_4);
  puVar8 = param_1;
  local_c8 = param_2;
  uVar4 = FUN_00e7b4e0();
  *param_1 = uVar4;
  local_48 = param_1;
  pvVar5 = _pthread_getspecific((pthread_key_t)puVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  local_38 = local_78;
  ppuVar14 = local_78;
  if (local_78 == (undefined8 **)0x0) {
    local_cc = 1;
    local_38 = (undefined8 **)0x0;
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
      local_cc = 0;
      if ((local_70 == '\0') || (local_78 == (undefined8 **)0x0)) goto LAB_0136bbe5;
      FUN_00d50b20();
    }
    local_cc = 0;
  }
LAB_0136bbe5:
  pvVar5 = _pthread_getspecific((pthread_key_t)ppuVar14);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  local_50 = local_78;
  ppuVar14 = local_78;
  if (local_78 == (undefined8 **)0x0) {
    local_d0 = 1;
    local_50 = (undefined8 **)0x0;
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
      local_d0 = 0;
      if ((local_70 != '\0') && (local_78 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = 0;
  }
  if ((((param_3 == '\0') && (*(longlong *)(unaff_RDI + 0x1f8) == 0)) &&
      (*(longlong *)(unaff_RDI + 0x200) == 0)) && (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific((pthread_key_t)ppuVar14);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar13 = FUN_0141bab0();
    if (iVar13 == 3) {
      pvVar5 = _pthread_getspecific((pthread_key_t)ppuVar14);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        ppuVar14 = local_38;
      }
      cVar3 = FUN_014bc070();
      if (cVar3 == '\0') {
        pvVar5 = _pthread_getspecific((pthread_key_t)ppuVar14);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          ppuVar14 = local_50;
        }
        cVar3 = FUN_014bc070();
        if (cVar3 == '\0') goto LAB_0136bcad;
      }
      local_d8 = (undefined8 **)((ulonglong)local_d8 & 0xffffffff00000000);
      goto LAB_0136d3f2;
    }
  }
LAB_0136bcad:
  pvVar5 = _pthread_getspecific((pthread_key_t)ppuVar14);
  ppuVar12 = local_38;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), ppuVar12 = local_38, lVar6 != 0)) {
    ppuVar14 = local_38;
    ppuVar12 = (undefined8 **)local_38[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  pVar10 = (pthread_key_t)ppuVar14;
  local_164 = (float)(*(code *)(*ppuVar12)[0x7c])();
  pvVar5 = _pthread_getspecific(pVar10);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar10 = (pthread_key_t)local_38;
  }
  local_c0 = (undefined8 **)FUN_014bb310();
  pvVar5 = _pthread_getspecific(pVar10);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar10 = (pthread_key_t)local_50;
  }
  local_1e0 = FUN_014bb310();
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar13 = FUN_0141bab0();
    if (iVar13 != 1) goto LAB_0136bd9e;
    local_2b0 = local_38;
    local_2a8 = 0;
    uVar17 = FUN_013699d0(extraout_XMM0_Da,&local_2b0);
    local_b8 = local_78;
    if (local_78 == (undefined8 **)0x0) {
      local_b8 = (undefined8 **)0x0;
      local_e0 = 0;
    }
    else {
      local_e0 = CONCAT71((int7)((ulonglong)local_78 >> 8),1);
      if (local_70 == '\0') {
        uVar17 = FUN_00d50b00();
      }
    }
    pVar10 = (pthread_key_t)local_78;
    local_2a0 = local_50;
    local_298 = 0;
    FUN_013699d0(uVar17,&local_2a0);
    ppuVar14 = local_a0;
    if (local_98 == '\0') {
      if (local_a0 != (undefined8 **)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_78 = ppuVar14;
    local_70 = '\0';
    FUN_00d214d0();
    if ((local_70 != '\0') && (local_78 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if (ppuVar14 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
  }
  else {
LAB_0136bd9e:
    local_e0 = 0;
    local_b8 = (undefined8 **)0x0;
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  local_108 = plVar7;
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  local_100 = plVar7;
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  local_120 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (undefined8 **)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  if (local_120 != (undefined8 **)0x0) {
    local_70 = '\0';
    local_78 = (undefined8 **)0x0;
    local_68 = local_120;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar13) break;
      puVar8 = local_68[2];
      local_78 = (undefined8 **)puVar8[lVar6 + 1];
      pvVar5 = _pthread_getspecific((pthread_key_t)puVar8);
      pVar10 = (pthread_key_t)puVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      ppuVar14 = local_a0;
      if ((((local_98 == '\0') && (local_a0 != (undefined8 **)0x0)) &&
          (FUN_00d50b00(), local_98 != '\0')) && (local_a0 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268dd0();
      ppuVar12 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 == (undefined8 **)0x0) goto LAB_0136c090;
        FUN_00d50b00();
        if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_a0 == (undefined8 **)0x0) {
LAB_0136c090:
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_d8 = local_a0;
        if (local_98 == '\0') {
          if (((local_a0 != (undefined8 **)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
             (local_a0 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if (local_d8 != (undefined8 **)0x0) {
          local_98 = '\0';
          local_a0 = (undefined8 **)0x0;
          local_90 = local_d8;
          local_88 = 0xffffffff;
          local_80 = 0;
          local_88._4_4_ = 0;
          local_118 = ZEXT416(DAT_02391078);
          while( true ) {
            if (local_88._4_4_ != 0) {
              if (local_88._4_4_ < 1) {
                iVar13 = -local_88._4_4_;
              }
              else {
                iVar13 = (int)local_88 - local_88._4_4_;
                local_88 = CONCAT44(local_88._4_4_,iVar13);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar13 = 0;
              }
              local_88 = CONCAT44(iVar13,(int)local_88);
            }
            lVar6 = (longlong)(int)local_88;
            iVar13 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar13);
            if (*(int *)((longlong)local_90 + 0xc) <= iVar13) break;
            puVar8 = local_90[2];
            local_a0 = (undefined8 **)puVar8[lVar6 + 1];
            pvVar5 = _pthread_getspecific((pthread_key_t)puVar8);
            pVar10 = (pthread_key_t)puVar8;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            ppuVar11 = local_b0;
            if ((((local_a8 == '\0') && (local_b0 != (undefined8 **)0x0)) &&
                (FUN_00d50b00(), local_a8 != '\0')) && (local_b0 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if (local_b0 == local_160) {
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_f8 = (code *)FUN_01259520();
              uStack_f0 = extraout_XMM0_Dc;
              uStack_ec = extraout_XMM0_Dd;
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar2 = (double)FUN_0125a280();
              if (DAT_0240d3f8 <= (double)((ulonglong)((double)local_f8 - dVar2) & _DAT_023908f0)) {
                if ((local_158 != '\0') && (local_160 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_f8 = (code *)FUN_0125a2c0();
                uStack_f0 = extraout_XMM0_Dc_00;
                uStack_ec = extraout_XMM0_Dd_00;
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e4 = (float)FUN_0125a2c0();
                if ((local_158 != '\0') && (local_160 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
                if ((float)((uint)((float)local_f8 - local_e4) & _DAT_02390140) <
                    (float)local_118._0_4_) {
                  pvVar5 = _pthread_getspecific(pVar10);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_118._0_8_ = FUN_0125a2c0();
                  local_118._8_4_ = extraout_XMM0_Dc_01;
                  local_118._12_4_ = extraout_XMM0_Dd_01;
                  pvVar5 = _pthread_getspecific(pVar10);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  fVar16 = (float)FUN_0125a2c0();
                  local_118._4_4_ = local_118._4_4_ & _UNK_02390144;
                  local_118._0_4_ = (uint)((float)local_118._0_4_ - fVar16) & _DAT_02390140;
                  local_118._8_4_ = local_118._8_4_ & _UNK_02390148;
                  local_118._12_4_ = local_118._12_4_ & _UNK_0239014c;
                  if (ppuVar11 != ppuVar12) {
                    if (ppuVar11 != (undefined8 **)0x0) {
                      FUN_00d50b00();
                    }
                    bVar15 = ppuVar12 != (undefined8 **)0x0;
                    ppuVar12 = ppuVar11;
                    if (bVar15) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
            else {
              if ((local_158 != '\0') && (local_160 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
            }
            if (ppuVar11 != (undefined8 **)0x0) {
              FUN_00d50b20();
            }
          }
          ppuVar11 = local_90;
          FUN_0015edf0();
          pVar10 = (pthread_key_t)ppuVar11;
          FUN_00d50b20();
        }
      }
      uVar17 = SUB84(DAT_023908c8,0);
      local_f8 = DAT_0238fee8;
      if (ppuVar12 != (undefined8 **)0x0) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_01266110();
        local_118._0_8_ = uVar4;
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_f8 = (code *)FUN_012661f0();
        uVar17 = local_118._0_4_;
      }
      uVar17 = FUN_00d470c0(uVar17);
      local_140 = local_b0;
      local_138 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != (undefined8 **)0x0) {
          uVar17 = FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_138 = '\x01';
      local_98 = '\0';
      local_a0 = ppuVar14;
      FUN_00ca0840(uVar17,&local_a0);
      if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      uVar17 = FUN_00d470c0((int)local_f8);
      local_130 = local_b0;
      local_128 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != (undefined8 **)0x0) {
          uVar17 = FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_128 = '\x01';
      local_98 = '\0';
      local_a0 = ppuVar14;
      FUN_00ca0840(uVar17,&local_a0);
      if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if (ppuVar12 != (undefined8 **)0x0) {
        FUN_00d50b20();
      }
      if (ppuVar14 != (undefined8 **)0x0) {
        FUN_00d50b20();
      }
    }
    ppuVar14 = local_68;
    FUN_0015edf0();
    pVar10 = (pthread_key_t)ppuVar14;
  }
  pvVar5 = _pthread_getspecific(pVar10);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar10 = (pthread_key_t)local_38;
  }
  uVar17 = FUN_014ddc50();
  local_d8 = (undefined8 **)CONCAT44(local_d8._4_4_,uVar17);
  ppuVar14 = local_d8;
  local_d8._0_1_ = (char)uVar17;
  local_d8 = ppuVar14;
  if ((char)local_d8 == '\0') {
    cVar3 = '\0';
    ppuVar14 = (undefined8 **)0x0;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfef0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013e0cc0();
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    local_f8 = DAT_02572370;
    (*DAT_02572370)();
    ppuVar12 = local_c8;
    local_290 = *unaff_RSI;
    local_288 = 0;
    local_280 = *local_c8;
    local_278 = 0;
    local_268 = 0;
    ppuVar14 = &local_270;
    local_270 = puVar8;
    local_40 = puVar8;
    FUN_0134d090((int)local_c0,(int)local_1e0);
    local_260 = *ppuVar12;
    local_258 = 0;
    FUN_0134c610();
    local_250 = *ppuVar12;
    local_248 = 0;
    FUN_01327e70();
    local_240 = *ppuVar12;
    local_238 = 0;
    FUN_01327a80();
    local_230 = local_50;
    local_228 = 0;
    FUN_01328e30();
    pvVar5 = _pthread_getspecific((pthread_key_t)ppuVar14);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      ppuVar14 = local_50;
    }
    FUN_014bbe30();
    pvVar5 = _pthread_getspecific((pthread_key_t)ppuVar14);
    ppuVar12 = local_38;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), ppuVar12 = local_38, lVar6 != 0)) {
      ppuVar14 = local_38;
      ppuVar12 = (undefined8 **)local_38[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    pVar10 = (pthread_key_t)ppuVar14;
    (*(code *)(*ppuVar12)[0x70])();
    pvVar5 = _pthread_getspecific(pVar10);
    ppuVar14 = local_38;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), ppuVar14 = local_38, lVar6 != 0)) {
      ppuVar14 = (undefined8 **)local_38[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (*(code *)(*ppuVar14)[0x71])();
    uVar4 = FUN_00e7b4e0();
    *local_48 = uVar4;
    puVar8 = local_48;
    if (*(longlong *)(unaff_RDI + 0x1f8) == 0) {
      if ((*(longlong *)(unaff_RDI + 0x200) == 0) && (*(longlong *)(unaff_RDI + 0x148) != 0)) {
        pvVar5 = _pthread_getspecific((pthread_key_t)local_48);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar13 = FUN_0141bab0();
        if (iVar13 == 3) {
          puVar9 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &DAT_02572358;
          (*local_f8)();
          local_78 = local_38;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          local_218 = 0;
          local_220 = puVar9;
          FUN_0135d660();
          FUN_00d50b20();
        }
      }
      if (((*(longlong *)(unaff_RDI + 0x1f8) != 0) || (*(longlong *)(unaff_RDI + 0x200) != 0)) ||
         (*(longlong *)(unaff_RDI + 0x148) == 0)) goto LAB_0136ccc3;
      pvVar5 = _pthread_getspecific((pthread_key_t)puVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_0141bab0();
      if (iVar13 != 1) goto LAB_0136ccc3;
      if (0 < *(int *)((longlong)local_b8 + 0xc)) {
        lVar6 = 0;
        do {
          lVar1 = local_b8[2][lVar6];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_208 = 1;
          local_210 = lVar1;
          FUN_013295b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)((longlong)local_b8 + 0xc));
      }
      ppuVar14 = local_b8;
      pvVar5 = _pthread_getspecific((pthread_key_t)local_b8);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        ppuVar14 = local_38;
      }
      pVar10 = (pthread_key_t)ppuVar14;
      local_148 = 0;
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      local_148 = '\x01';
      local_150 = unaff_RDI;
      uVar4 = FUN_014e8b20();
      ppuVar14 = local_78;
      if (local_78 == (undefined8 **)0x0) {
        bVar15 = true;
        ppuVar14 = (undefined8 **)0x0;
        local_48 = (undefined8 *)0x0;
      }
      else {
        if (local_70 == '\0') {
          uVar4 = FUN_00d50b00();
          bVar15 = false;
          local_48 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if ((local_70 == '\0') || (local_78 == (undefined8 **)0x0)) goto LAB_0136d91c;
          FUN_00d50b20();
        }
        else {
          local_70 = '\0';
          local_48 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        }
        bVar15 = false;
      }
LAB_0136d91c:
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar15) {
        local_1f8 = 0;
        local_200 = ppuVar14;
        FUN_013293f0();
      }
    }
    else {
LAB_0136ccc3:
      pVar10 = (pthread_key_t)puVar8;
      local_48 = (undefined8 *)0x0;
      ppuVar14 = (undefined8 **)0x0;
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    ppuVar12 = local_78;
    pvVar5 = _pthread_getspecific(pVar10);
    ppuVar11 = local_78;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), ppuVar12 = ppuVar11, lVar6 != 0)) {
      ppuVar12 = (undefined8 **)ppuVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    local_e4 = (float)(*(code *)(*ppuVar12)[0x7c])();
    if ((local_70 != '\0') && (local_78 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    puVar8 = local_40;
    cVar3 = (char)local_48;
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    local_c8 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (undefined8 **)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if (local_c8 != (undefined8 **)0x0) {
      local_70 = '\0';
      local_78 = (undefined8 **)0x0;
      local_68 = local_c8;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_60._4_4_ = 0;
      local_c0 = ppuVar14;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar13 = -local_60._4_4_;
          }
          else {
            iVar13 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar13);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar13 = 0;
          }
          local_60 = CONCAT44(iVar13,(int)local_60);
        }
        lVar6 = (longlong)(int)local_60;
        iVar13 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar13);
        if (*(int *)((longlong)local_68 + 0xc) <= iVar13) break;
        puVar8 = local_68[2];
        local_78 = (undefined8 **)puVar8[lVar6 + 1];
        pvVar5 = _pthread_getspecific((pthread_key_t)puVar8);
        pVar10 = (pthread_key_t)puVar8;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        ppuVar14 = local_a0;
        if (((local_98 == '\0') && (local_a0 != (undefined8 **)0x0)) &&
           ((FUN_00d50b00(), local_98 != '\0' && (local_a0 != (undefined8 **)0x0)))) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126f610();
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_0125a2c0();
        local_118._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_118._0_4_ = (float)uVar4 - local_164;
        local_118._8_4_ = extraout_XMM0_Dc_02;
        local_118._12_4_ = extraout_XMM0_Dd_02;
        uStack_f0 = extraout_XMM0_Dc_02 & _UNK_02390148;
        uStack_ec = extraout_XMM0_Dd_02 & _UNK_0239014c;
        local_f8 = (code *)CONCAT44(local_118._4_4_ & _UNK_02390144,
                                    -(uint)((float)(local_118._0_4_ & _DAT_02390140) < DAT_02394240)
                                   );
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0((float)(~(uint)(float)local_f8 & local_118._0_4_) + local_e4);
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_0125a5f0();
        local_1a8 = ppuVar14;
        local_1a0 = '\0';
        FUN_007a2fc0(uVar17,&local_1a8);
        ppuVar12 = local_a0;
        if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        uVar17 = SUB84(DAT_023908c8,0);
        local_f8 = DAT_023908c8;
        if (ppuVar12 != (undefined8 **)0x0) {
          local_198 = ppuVar14;
          local_190 = '\0';
          FUN_007a2fc0(uVar17,&local_198);
          local_f8 = (code *)FUN_00d45bc0();
          uVar17 = SUB84(local_f8,0);
          if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != (undefined8 **)0x0)) {
            uVar17 = FUN_00d50b20();
          }
        }
        local_188 = ppuVar14;
        local_180 = '\0';
        FUN_007a2fc0(uVar17,&local_188);
        ppuVar12 = local_a0;
        if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        local_118._0_8_ = DAT_0238fee8;
        if (ppuVar12 != (undefined8 **)0x0) {
          local_178 = ppuVar14;
          local_170 = '\0';
          FUN_007a2fc0((int)DAT_0238fee8,&local_178);
          uVar4 = FUN_00d45bc0();
          local_118._0_8_ = uVar4;
          if ((local_98 != '\0') && (local_a0 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012660b0((int)local_f8);
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266190(local_118._0_4_);
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012682a0();
        if (ppuVar14 != (undefined8 **)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_0015edf0();
      cVar3 = (char)local_48;
      puVar8 = local_40;
      ppuVar14 = local_c0;
    }
    local_1e8 = 0;
    local_1f0 = puVar8;
    FUN_0134fa60();
    if (local_c8 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_120 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if (local_100 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_108 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_b8 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (ppuVar14 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
LAB_0136d3f2:
  if ((char)local_d0 == '\0' && local_50 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_cc == '\0' && local_38 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  return (ulonglong)local_d8 & 0xffffffff;
}


