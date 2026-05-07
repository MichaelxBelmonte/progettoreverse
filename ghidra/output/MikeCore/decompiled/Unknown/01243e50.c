// Function: FUN_01243e50
// Address: 01243e50
// Size: 6452 bytes
// Class: Unknown


undefined8 * FUN_01243e50(pthread_key_t param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  void *pvVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong **pplVar12;
  pthread_key_t pVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar17;
  undefined4 uVar18;
  longlong local_230;
  char local_228;
  longlong *local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  undefined8 *local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
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
  char local_148;
  undefined7 uStack_147;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  undefined *local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  int local_80;
  longlong *local_78;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  
  local_a8 = param_2;
  if ((DAT_028ac278 == (longlong *)0x0) || (DAT_028ac281 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ac278 == (longlong *)0x0) {
      plVar15 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2572358;
      local_e8 = &DAT_02572358;
      *plVar15 = (longlong)&DAT_02572358;
      pcVar2 = DAT_02572370;
      (*DAT_02572370)();
      bVar17 = DAT_028ac278 == (longlong *)0x0;
      DAT_028ac278 = plVar15;
      if (((bVar17) || (FUN_00d50b20(), DAT_028ac278 != (longlong *)0x0)) && (DAT_028ac280 == '\0'))
      {
        DAT_028ac280 = '\x01';
        FUN_00e8cb90();
      }
      FUN_017bf740();
      plVar15 = local_a0;
      if ((char)local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
          if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01243f76;
        }
      }
      else if (local_a0 != (longlong *)0x0) {
LAB_01243f76:
        local_98._0_1_ = '\0';
        local_a0 = (longlong *)0x0;
        local_90 = plVar15;
        local_88 = 0xffffffff;
        local_80 = 0;
        local_88._4_4_ = 0;
        while( true ) {
          if (local_88._4_4_ != 0) {
            if (local_88._4_4_ < 1) {
              iVar16 = -local_88._4_4_;
            }
            else {
              iVar16 = (int)local_88 - local_88._4_4_;
              local_88 = CONCAT44(local_88._4_4_,iVar16);
              FUN_00d23690();
              local_80 = local_80 + local_88._4_4_;
              iVar16 = 0;
            }
            local_88 = CONCAT44(iVar16,(int)local_88);
          }
          lVar11 = (longlong)(int)local_88;
          iVar16 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,iVar16);
          if (*(int *)((longlong)local_90 + 0xc) <= iVar16) break;
          lVar14 = local_90[2];
          local_a0 = *(longlong **)(lVar14 + 8 + lVar11 * 8);
          pvVar9 = _pthread_getspecific((pthread_key_t)lVar14);
          pVar13 = (pthread_key_t)lVar14;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          local_78 = local_68;
          if (((local_60 == '\0') && (local_68 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_60 != '\0' && (local_68 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar13);
          if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar13 = (pthread_key_t)local_78;
          }
          FUN_0173b6f0();
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736d70();
          local_40 = local_68;
          if (local_60 == '\0') {
            if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar10 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar10 = (longlong)&DAT_025ce9e8;
          plVar10[2] = 0;
          plVar10[3] = 0;
          *(undefined8 *)((longlong)plVar10 + 0x1c) = 0;
          *(undefined8 *)((longlong)plVar10 + 0x24) = 0;
          FUN_00d500e0();
          FUN_00d99300();
          plVar15 = (longlong *)plVar10[3];
          plVar7 = plVar15;
          if (plVar15 != local_68) {
            if (local_60 == '\0') {
              if (local_68 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
                goto LAB_012441a5;
              }
              FUN_00d50b00();
              plVar15 = (longlong *)plVar10[3];
              plVar10[3] = (longlong)local_68;
              plVar7 = local_68;
            }
            else {
              local_60 = '\0';
              plVar7 = local_68;
LAB_012441a5:
              plVar10[3] = (longlong)plVar7;
            }
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar7 = local_68;
            }
          }
          if ((local_60 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar18 = FUN_016ab300();
          local_218 = local_40;
          local_210 = '\0';
          FUN_016ac280(uVar18,&local_218);
          FUN_00d99300();
          plVar15 = local_68;
          if (local_60 == '\0') {
            if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_208 = plVar15;
          local_200 = '\0';
          cVar4 = (**(code **)(*(longlong *)plVar10[3] + 0x50))();
          if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((cVar4 == '\0') && (plVar7 = (longlong *)plVar10[4], plVar7 != plVar15)) {
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar10[4] = (longlong)plVar15;
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if (plVar10[4] == 0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = local_e8;
            (*pcVar2)();
            FUN_00d95590();
            plVar7 = local_d0;
            local_130 = 0;
            if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_130 = '\x01';
            local_138 = plVar7;
            uVar18 = FUN_00d91bc0();
            plVar7 = local_68;
            if (local_60 == '\0') {
              if (((local_68 != (longlong *)0x0) && (uVar18 = FUN_00d50b00(), local_60 != '\0')) &&
                 (local_68 != (longlong *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
            }
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if (plVar7 != (longlong *)0x0) {
              local_60 = '\0';
              local_68 = (longlong *)0x0;
              local_58 = plVar7;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar16 = -local_50._4_4_;
                  }
                  else {
                    iVar16 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar16);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar16 = 0;
                  }
                  local_50 = CONCAT44(iVar16,(int)local_50);
                }
                lVar11 = (longlong)(int)local_50;
                iVar16 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar16);
                if (*(int *)((longlong)local_58 + 0xc) <= iVar16) break;
                local_68 = *(longlong **)(local_58[2] + 8 + lVar11 * 8);
                uVar18 = FUN_016ab300();
                local_1f8 = local_68;
                local_1f0 = '\0';
                FUN_016ac280(uVar18,&local_1f8);
                FUN_00d99300();
                plVar7 = local_e0;
                if (local_d8 == '\0') {
                  if (local_e0 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_d8 = '\0';
                }
                local_d0 = plVar7;
                local_c8 = '\0';
                FUN_00d21140();
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar7 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_140 != '\0') && (CONCAT71(uStack_147,local_148) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_228 != '\0') && (local_230 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00018280();
              uVar18 = FUN_00d50b20();
            }
            lVar11 = DAT_027259e0;
            local_1e0 = '\0';
            local_1e8 = puVar6;
            if (DAT_027259e0 != 0) {
              uVar18 = FUN_00d50b00();
            }
            local_1d8 = lVar11;
            local_1d0 = '\x01';
            FUN_00d95130(uVar18,&local_1d8);
            plVar7 = local_68;
            if (local_60 == '\0') {
              if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
                 (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
            }
            if ((local_1d0 != '\0') && (local_1d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_1c8 = plVar7;
            local_1c0 = '\0';
            cVar4 = (**(code **)(*(longlong *)plVar10[3] + 0x50))();
            if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((cVar4 == '\0') && (plVar1 = (longlong *)plVar10[4], plVar1 != plVar7)) {
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar10[4] = (longlong)plVar7;
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar7 = plVar10 + 2;
          plVar1 = (longlong *)*plVar7;
          if (plVar1 != local_a0) {
            if ((char)local_98 == '\0') {
              if (local_a0 == (longlong *)0x0) {
                *plVar7 = 0;
              }
              else {
                FUN_00d50b00();
                plVar1 = (longlong *)*plVar7;
                *plVar7 = (longlong)local_a0;
              }
            }
            else {
              local_98._0_1_ = '\0';
              *plVar7 = (longlong)local_a0;
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          local_60 = '\0';
          local_68 = plVar10;
          FUN_00d21140();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar15 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar15 = local_90;
        FUN_017c0b20();
        param_1 = (pthread_key_t)plVar15;
        FUN_00d50b20();
      }
      DAT_028ac281 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ac281 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (*local_a8 == 0) {
    local_e8 = (undefined *)0x0;
    plVar15 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_0173b7c0();
    plVar15 = local_a0;
    if (local_a0 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
      local_e8 = (undefined *)0x0;
    }
    else {
      local_e8 = (undefined *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if ((((char)local_98 == '\0') && (FUN_00d50b00(), (char)local_98 != '\0')) &&
         (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    local_128 = local_a0;
    local_120 = 0;
    if ((char)local_98 == '\0') {
      if (local_a0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98._0_1_ = '\0';
    }
    local_120 = '\x01';
    FUN_0173b720();
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d99300();
  plVar10 = local_a0;
  plVar7 = (longlong *)*unaff_RSI;
  if (plVar7 == local_a0) {
    if ((*(char *)(unaff_RSI + 1) != '\0') || (local_a0 == (longlong *)0x0)) goto LAB_01244b11;
    if ((char)local_98 == '\0') {
      FUN_00d50b00();
      goto LAB_01244b0d;
    }
LAB_01244b30:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  else {
    cVar4 = *(char *)(unaff_RSI + 1);
    if ((char)local_98 != '\0') {
      *unaff_RSI = local_a0;
      if ((cVar4 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01244b30;
    }
    if (local_a0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RSI = plVar10;
    if ((cVar4 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01244b0d:
    *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01244b11:
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d95590();
  local_118 = local_68;
  local_110 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_110 = '\x01';
  FUN_00d91bc0();
  plVar7 = local_a0;
  if ((char)local_98 == '\0') {
    if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_98 != '\0')) &&
       (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98._0_1_ = '\0';
  }
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar10 = (longlong)&DAT_02572358;
  (*DAT_02572370)();
  local_40 = plVar7;
  if (DAT_028ac278 != (longlong *)0x0) {
    local_98._0_1_ = '\0';
    local_a0 = (longlong *)0x0;
    local_90 = DAT_028ac278;
    local_88 = 0xffffffff;
    local_80 = 0;
    local_88._4_4_ = 0;
    while( true ) {
      if (local_88._4_4_ != 0) {
        if (local_88._4_4_ < 1) {
          iVar16 = -local_88._4_4_;
        }
        else {
          iVar16 = (int)local_88 - local_88._4_4_;
          local_88 = CONCAT44(local_88._4_4_,iVar16);
          FUN_00d23690();
          local_80 = local_80 + local_88._4_4_;
          iVar16 = 0;
        }
        local_88 = CONCAT44(iVar16,(int)local_88);
      }
      lVar11 = (longlong)(int)local_88;
      iVar16 = (int)local_88 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar16);
      if (*(int *)((longlong)local_90 + 0xc) <= iVar16) break;
      lVar14 = local_90[2];
      local_a0 = *(longlong **)(lVar14 + 8 + lVar11 * 8);
      *(undefined4 *)(local_a0 + 5) = 0;
      local_148 = '\x01';
      if (plVar15 == (longlong *)0x0) {
        local_78 = (longlong *)CONCAT71(local_78._1_7_,1);
      }
      else {
        local_78 = (longlong *)local_a0[2];
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_1b0 = '\0';
        local_1b8 = plVar15;
        uVar3 = FUN_017c0150();
        local_78 = (longlong *)CONCAT71(local_78._1_7_,uVar3);
        if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_148 != '\0') && ((char)local_78 != '\0')) {
        FUN_00d95590();
        local_100 = 0;
        if (local_c8 == '\0') {
          plVar7 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            local_78 = local_d0;
            FUN_00d50b00();
            plVar7 = local_78;
          }
        }
        else {
          local_108 = local_d0;
          local_c8 = '\0';
          plVar7 = local_108;
        }
        local_108 = plVar7;
        local_100 = '\x01';
        FUN_00d91bc0();
        plVar7 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          local_60 = '\0';
          local_68 = (longlong *)0x0;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_58 = plVar7;
          iVar16 = 0;
          while( true ) {
            iVar5 = 0;
            if (iVar16 != 0) {
              if (iVar16 < 1) {
                iVar5 = -iVar16;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar16);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar5 = 0;
              }
              local_50 = CONCAT44(iVar5,(int)local_50);
            }
            lVar11 = (longlong)(int)local_50;
            iVar16 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar16);
            if (*(int *)((longlong)local_58 + 0xc) <= iVar16) break;
            local_68 = *(longlong **)(local_58[2] + 8 + lVar11 * 8);
            iVar16 = iVar5;
            if (local_40 != (longlong *)0x0) {
              local_c8 = '\0';
              local_d0 = (longlong *)0x0;
              local_c0 = local_40;
              local_b8 = 0xffffffff;
              local_b0 = 0;
              local_b8._4_4_ = 0;
              while( true ) {
                if (local_b8._4_4_ != 0) {
                  if (local_b8._4_4_ < 1) {
                    iVar16 = -local_b8._4_4_;
                  }
                  else {
                    iVar16 = (int)local_b8 - local_b8._4_4_;
                    local_b8 = CONCAT44(local_b8._4_4_,iVar16);
                    FUN_00d23690();
                    local_b0 = local_b0 + local_b8._4_4_;
                    iVar16 = 0;
                  }
                  local_b8 = CONCAT44(iVar16,(int)local_b8);
                }
                lVar11 = (longlong)(int)local_b8;
                iVar16 = (int)local_b8 + 1;
                local_b8 = CONCAT44(local_b8._4_4_,iVar16);
                if (*(int *)((longlong)local_c0 + 0xc) <= iVar16) break;
                local_1a8 = *(longlong **)(local_c0[2] + 8 + lVar11 * 8);
                local_1a0 = '\0';
                local_d0 = local_1a8;
                cVar4 = FUN_00d90eb0();
                if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  local_198 = local_d0;
                  local_190 = '\0';
                  local_188 = local_68;
                  local_180 = '\0';
                  uVar18 = FUN_00d9c300();
                  local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar18);
                  if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  *(float *)(local_a0 + 5) = local_78._0_4_ + *(float *)(local_a0 + 5);
                  local_e0 = local_a0;
                  local_d8 = '\0';
                  FUN_00d235a0();
                  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00018280();
              iVar16 = local_50._4_4_;
            }
          }
          FUN_00018280();
        }
        local_78 = (longlong *)local_a0[4];
        if (local_78 == (longlong *)0x0) {
          if (plVar7 == (longlong *)0x0) goto LAB_01244c78;
LAB_01244c73:
          FUN_00d50b20();
        }
        else {
          FUN_00d95590();
          plVar1 = local_d0;
          local_f0 = 0;
          if (local_c8 == '\0') {
            if (local_d0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_f0 = '\x01';
          local_f8 = plVar1;
          FUN_00d91bc0();
          local_a8 = local_68;
          plVar1 = plVar7;
          if (plVar7 == local_68) {
LAB_0124520f:
            local_a8 = plVar1;
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar1 = local_a8;
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar1 = local_a8;
              }
              goto LAB_0124520f;
            }
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_60 = '\0';
          }
          if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_a8 != (longlong *)0x0) {
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_58 = local_a8;
            local_50 = 0xffffffff;
            local_48 = 0;
            iVar16 = 0;
            while( true ) {
              iVar5 = 0;
              if (iVar16 != 0) {
                if (iVar16 < 1) {
                  iVar5 = -iVar16;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar16);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar5 = 0;
                }
                local_50 = CONCAT44(iVar5,(int)local_50);
              }
              lVar11 = (longlong)(int)local_50;
              iVar16 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar16);
              if (*(int *)((longlong)local_58 + 0xc) <= iVar16) break;
              local_68 = *(longlong **)(local_58[2] + 8 + lVar11 * 8);
              iVar16 = iVar5;
              if (local_40 != (longlong *)0x0) {
                local_c8 = '\0';
                local_d0 = (longlong *)0x0;
                local_c0 = local_40;
                local_b8 = 0xffffffff;
                local_b0 = 0;
                local_b8._4_4_ = 0;
                while( true ) {
                  if (local_b8._4_4_ != 0) {
                    if (local_b8._4_4_ < 1) {
                      iVar16 = -local_b8._4_4_;
                    }
                    else {
                      iVar16 = (int)local_b8 - local_b8._4_4_;
                      local_b8 = CONCAT44(local_b8._4_4_,iVar16);
                      FUN_00d23690();
                      local_b0 = local_b0 + local_b8._4_4_;
                      iVar16 = 0;
                    }
                    local_b8 = CONCAT44(iVar16,(int)local_b8);
                  }
                  lVar11 = (longlong)(int)local_b8;
                  iVar16 = (int)local_b8 + 1;
                  local_b8 = CONCAT44(local_b8._4_4_,iVar16);
                  if (*(int *)((longlong)local_c0 + 0xc) <= iVar16) break;
                  local_178 = *(longlong **)(local_c0[2] + 8 + lVar11 * 8);
                  local_170 = '\0';
                  local_d0 = local_178;
                  cVar4 = FUN_00d90eb0();
                  if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar4 != '\0') {
                    local_168 = local_d0;
                    local_160 = '\0';
                    local_158 = local_68;
                    local_150 = '\0';
                    uVar18 = FUN_00d9c300();
                    local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar18);
                    if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    *(float *)(local_a0 + 5) = local_78._0_4_ + *(float *)(local_a0 + 5);
                    local_e0 = local_a0;
                    local_d8 = '\0';
                    FUN_00d235a0();
                    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                FUN_00018280();
                iVar16 = local_50._4_4_;
              }
            }
            FUN_00018280();
            if (local_a8 != (longlong *)0x0) goto LAB_01244c73;
          }
        }
      }
LAB_01244c78:
    }
    FUN_0124a560();
  }
  plVar7 = local_40;
  lVar11 = DAT_027be628;
  if (DAT_027be628 != 0) {
    FUN_00d50b00();
  }
  lVar14 = lVar11;
  FUN_012466e0(lVar11,FUN_01243840);
  plVar1 = plVar10;
  if (plVar10 == local_a0) {
joined_r0x0124580e:
    if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = local_a0;
    if ((char)local_98 == '\0') {
      if (local_a0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto joined_r0x0124580e;
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_98._0_1_ = '\0';
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  plVar10 = local_a0;
  pVar13 = (pthread_key_t)CONCAT71((int7)((ulonglong)lVar14 >> 8),(char)local_98);
  pplVar12 = &local_98;
  if ((char)local_98 == '\0') {
    pplVar12 = &local_68;
  }
  local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_98);
  *(undefined1 *)pplVar12 = 0;
  if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_68 == '\0') {
    if (plVar10 == (longlong *)0x0) goto LAB_01245770;
    FUN_00d50b00();
  }
  else if (plVar10 == (longlong *)0x0) {
LAB_01245770:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto joined_r0x01245782;
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017aa5e0();
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  plVar7 = local_40;
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  plVar10 = local_a0;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((char)local_98 == '\0') {
    if (local_a0 == (longlong *)0x0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = plVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *unaff_RDI = local_a0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_98._0_1_ = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
joined_r0x01245782:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_e8 != '\0') && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


