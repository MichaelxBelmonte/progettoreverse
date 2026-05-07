// Function: FUN_01c3d0f0
// Address: 01c3d0f0
// Size: 7812 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01c3d22d) */
/* WARNING: Removing unreachable block (ram,0x01c3d23d) */

ulonglong FUN_01c3d0f0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar8;
  void *pvVar6;
  ulonglong uVar7;
  pthread_key_t pVar9;
  longlong *in_RDX;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_298;
  char local_290;
  longlong local_288;
  char local_280;
  longlong local_278;
  char local_270;
  longlong *local_268;
  char local_260;
  longlong *local_258;
  char local_250;
  longlong *local_248;
  char local_240;
  longlong *local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  char local_150;
  undefined8 local_148;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_68 = in_RDX;
  uVar14 = FUN_01a58dc0();
  local_80 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c3d154;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_01c3d154:
    cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_80))();
    if (cVar2 == '\0') {
      if (*local_68 != 0) {
        local_280 = '\0';
        local_288 = *local_68;
        FUN_0039e8b0();
        local_130 = local_60;
        local_128 = 0;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_128 = '\x01';
        cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                            *local_80 + 8))();
        if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_280 != '\0') && (local_288 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') goto LAB_01c3d2c4;
      }
      bVar13 = false;
      uVar7 = 0;
      goto LAB_01c3df59;
    }
LAB_01c3d2c4:
    FUN_01d3abf0();
    local_a8 = (longlong *)FUN_01e466c0();
    plVar11 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    if (*local_68 == 0) {
      local_d8 = 0;
LAB_01c3d3bc:
      local_b8 = (longlong *)0x0;
      local_c0 = 0;
LAB_01c3d3ce:
      bVar13 = false;
      local_ac = 0;
    }
    else {
      local_270 = '\0';
      local_278 = *local_68;
      (**(code **)(*local_80 + 0xab0))((int)local_a8,&local_278);
      local_b8 = local_60;
      param_1 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_d8 = 0;
        local_b8 = (longlong *)0x0;
LAB_01c3d379:
        bVar13 = local_b8 == (longlong *)0x0;
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_58 == '\0') {
          uVar5 = FUN_00d50b00();
          local_d8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          goto LAB_01c3d379;
        }
        local_58 = '\0';
        local_d8 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        bVar13 = false;
      }
      if ((local_270 != '\0') && (local_278 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = local_b8;
      if (bVar13) goto LAB_01c3d3bc;
      local_268 = local_80;
      local_260 = '\0';
      local_148 = FUN_01e437f0(local_a8._0_4_);
      uVar14 = FUN_019765b0();
      cVar2 = FUN_00d05410((undefined4)local_148,uVar14,param_2);
      if ((local_260 != '\0') && (local_268 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        local_258 = local_80;
        local_250 = '\0';
        uVar5 = FUN_01e437f0(local_a8._0_4_);
        local_148 = uVar5;
        uVar15 = FUN_019765d0();
        local_c0 = FUN_00d05410((undefined4)local_148,uVar15,uVar14);
        if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = (longlong *)(local_c0 & 0xffffffff ^ 1);
        goto LAB_01c3d3ce;
      }
      plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      local_c0 = 0;
      bVar13 = true;
      local_ac = 1;
    }
    uVar5 = (**(code **)(*local_80 + 0xae0))(local_a8._0_4_);
    plVar1 = local_60;
    local_c8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (longlong *)0x0) goto LAB_01c3d516;
      uVar5 = FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      local_148._0_4_ = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if (*(int *)((longlong)plVar1 + 0xc) != 0) goto LAB_01c3d423;
LAB_01c3d4f9:
      local_d0 = 0;
LAB_01c3d502:
      local_90 = (longlong *)0x0;
      local_88 = 0;
LAB_01c3d783:
      local_98 = 0;
    }
    else {
      if (local_60 != (longlong *)0x0) {
        local_148._0_4_ = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if (*(int *)((longlong)local_60 + 0xc) == 0) goto LAB_01c3d4f9;
LAB_01c3d423:
        lVar10 = *(longlong *)plVar1[2];
        local_150 = 0;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        local_150 = '\x01';
        local_158 = lVar10;
        FUN_01e48f80(local_a8._0_4_);
        local_d0 = FUN_01983b10();
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        local_90 = *(longlong **)local_c8[2];
        if (local_90 == (longlong *)0x0) goto LAB_01c3d502;
        uVar5 = FUN_00d50b00();
        plVar11 = (longlong *)((ulonglong)plVar11 ^ 1);
        if (bVar13 || (char)plVar11 != '\0') {
          uVar8 = (undefined7)((ulonglong)uVar5 >> 8);
          uVar7 = local_c0;
        }
        else {
          (**(code **)(*local_90 + 0x928))();
          plVar1 = local_60;
          plVar11 = (longlong *)*local_68;
          if (plVar11 == local_60) {
            if (((char)local_68[1] == '\0') && (local_60 != (longlong *)0x0)) {
              local_a8 = local_68 + 1;
              if (local_58 != '\0') goto LAB_01c3d6c2;
              FUN_00d50b00();
              goto LAB_01c3d6fe;
            }
LAB_01c3d708:
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            param_1 = local_68 + 1;
            lVar10 = local_68[1];
            local_a8 = param_1;
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *local_68 = (longlong)plVar1;
              if (((char)lVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01c3d6fe:
              *(undefined1 *)local_a8 = 1;
              goto LAB_01c3d708;
            }
            *local_68 = (longlong)local_60;
            if (((char)lVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01c3d6c2:
            *(undefined1 *)local_a8 = 1;
          }
          uVar5 = FUN_019801a0();
          if ((char)uVar5 != '\0') {
            local_88 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            local_148._0_4_ = 0;
            local_98 = 0;
            local_ac = 1;
            goto LAB_01c3d78c;
          }
          cVar2 = FUN_019801b0();
          uVar8 = (undefined7)((ulonglong)param_1 >> 8);
          param_1 = (longlong *)(local_c0 & 0xff);
          uVar7 = 1;
          if (cVar2 == '\0') {
            uVar7 = local_c0 & 0xff;
          }
        }
        local_c0 = uVar7;
        local_88 = CONCAT71(uVar8,1);
        local_148._0_4_ = 0;
        goto LAB_01c3d783;
      }
LAB_01c3d516:
      local_d0 = 0;
      local_148._0_4_ = 1;
      local_90 = (longlong *)0x0;
      local_88 = 0;
      local_98 = 1;
    }
LAB_01c3d78c:
    if (*local_68 == 0) {
      local_e0 = 0;
      local_a8 = (longlong *)0x0;
    }
    else {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_a8 = local_60;
      param_1 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_a8 = (longlong *)0x0;
        local_e0 = 0;
      }
      else {
        local_e0 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    iVar4 = FUN_01d3a5a0();
    uVar14 = extraout_XMM0_Da;
    if ((iVar4 == 1) && (iVar4 = FUN_01d3b630(), uVar14 = extraout_XMM0_Da_00, iVar4 == 1)) {
      iVar4 = FUN_01d3b620();
      pVar9 = (pthread_key_t)param_1;
      uVar8 = (undefined7)((ulonglong)plVar11 >> 8);
      if (iVar4 != 2) {
        if ((char)local_ac == '\0') {
          if (((char)local_c0 != '\0') && (local_a8 != (longlong *)0x0)) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01268dd0();
            plVar11 = local_60;
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01c3e0da;
              }
            }
            else if (local_60 != (longlong *)0x0) {
LAB_01c3e0da:
              (**(code **)(*local_80 + 0xe20))();
              local_58 = '\0';
              local_60 = plVar11;
              cVar2 = FUN_00d23d70();
              plVar1 = local_68;
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                local_168 = *plVar1;
                local_160 = plVar11;
                FUN_00083ea0(2,&local_160);
                uVar14 = FUN_00790070();
                local_f0 = local_78;
                local_e8 = 0;
                if (local_70 == '\0') {
                  if (local_78 != 0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_e8 = '\x01';
                (**(code **)(*local_80 + 0xdb8))(uVar14,1);
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != 0)) {
                  FUN_00d50b20();
                }
                local_60 = (longlong *)&DAT_0253d630;
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                local_60 = &DAT_024c5048;
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
              }
              uVar7 = CONCAT71(uVar8,1);
              FUN_00d50b20();
              goto LAB_01c3def2;
            }
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar6 = _pthread_getspecific(pVar9);
            plVar11 = local_68;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_1b8 = *plVar11;
            local_1b0 = '\0';
            FUN_012ebc80();
            plVar1 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_1b0 != '\0') && (local_1b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            uVar7 = CONCAT71(uVar8,1);
            if (plVar1 != (longlong *)0x0) {
              if (*(int *)((longlong)plVar1 + 0xc) != 0) {
                local_60 = (longlong *)*plVar11;
                local_58 = '\0';
                uVar14 = FUN_00d21140();
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  uVar14 = FUN_00d50b20();
                }
                local_1a8 = plVar1;
                local_1a0 = '\0';
                (**(code **)(*local_80 + 0xdb8))(uVar14,1);
                if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            goto LAB_01c3def2;
          }
        }
        else if (local_a8 != (longlong *)0x0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01268710();
          plVar11 = local_60;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01c3dbfa;
            }
          }
          else if (local_60 != (longlong *)0x0) {
LAB_01c3dbfa:
            (**(code **)(*local_80 + 0xe20))();
            local_58 = '\0';
            local_60 = plVar11;
            cVar2 = FUN_00d23d70();
            plVar1 = local_68;
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_168 = *plVar1;
              local_160 = plVar11;
              FUN_00083ea0(2,&local_160);
              uVar14 = FUN_00790070();
              local_100 = local_78;
              local_f8 = 0;
              if (local_70 == '\0') {
                if (local_78 != 0) {
                  uVar14 = FUN_00d50b00();
                }
              }
              else {
                local_70 = '\0';
              }
              local_f8 = '\x01';
              (**(code **)(*local_80 + 0xdb8))(uVar14,1);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              local_60 = (longlong *)&DAT_0253d630;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              local_60 = &DAT_024c5048;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            uVar7 = CONCAT71(uVar8,1);
            FUN_00d50b20();
            goto LAB_01c3def2;
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar6 = _pthread_getspecific(pVar9);
          plVar11 = local_68;
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_1d8 = *plVar11;
          local_1d0 = '\0';
          FUN_012eb7a0();
          plVar1 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_1d0 != '\0') && (local_1d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = CONCAT71(uVar8,1);
          if (plVar1 != (longlong *)0x0) {
            if (*(int *)((longlong)plVar1 + 0xc) != 0) {
              local_60 = (longlong *)*plVar11;
              local_58 = '\0';
              uVar14 = FUN_00d21140();
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
              local_1c8 = plVar1;
              local_1c0 = '\0';
              (**(code **)(*local_80 + 0xdb8))(uVar14,1);
              if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          goto LAB_01c3def2;
        }
        uVar14 = extraout_XMM0_Da_01;
        if (*local_68 != 0) {
          (**(code **)(*local_80 + 0xeb0))();
          do {
            (**(code **)(*local_80 + 0x658))();
            plVar1 = local_60;
            plVar11 = (longlong *)*unaff_RSI;
            if (plVar11 == local_60) {
              if (((char)unaff_RSI[1] == '\0') && (local_60 != (longlong *)0x0)) {
                if (local_58 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01c3db0c;
                }
LAB_01c3daca:
                *(undefined1 *)(unaff_RSI + 1) = 1;
                local_58 = '\0';
              }
              lVar10 = *unaff_RSI;
            }
            else {
              lVar10 = unaff_RSI[1];
              if (local_58 != '\0') {
                *unaff_RSI = (longlong)local_60;
                if (((char)lVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01c3daca;
              }
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *unaff_RSI = (longlong)plVar1;
              if (((char)lVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01c3db0c:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              lVar10 = *unaff_RSI;
            }
            if (lVar10 == 0) {
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              break;
            }
            iVar4 = FUN_01d3a5a0();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          } while (iVar4 != 6);
          local_198 = *unaff_RSI;
          local_190 = '\0';
          FUN_0199eb40();
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          uVar14 = (**(code **)(*local_80 + 0xeb0))();
        }
        goto LAB_01c3de7f;
      }
      uVar7 = FUN_01d3b590();
      pVar9 = (pthread_key_t)param_1;
      if ((uVar7 & 8) == 0) {
        if ((char)local_ac == '\0') {
          if ((char)local_c0 == '\0') {
            (**(code **)(*local_80 + 0xe30))();
            plVar11 = local_60;
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_01c3c4d0();
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar7 = CONCAT71(uVar8,1);
          }
          else {
            uVar7 = CONCAT71(uVar8,1);
            if (((int)local_d0 == 1) && (local_a8 != (longlong *)0x0)) {
              pvVar6 = _pthread_getspecific(pVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01268dd0();
              plVar11 = local_60;
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01c3e739;
                }
              }
              else if (local_60 != (longlong *)0x0) {
LAB_01c3e739:
                (**(code **)(*local_80 + 0xe20))();
                local_58 = '\0';
                local_60 = plVar11;
                cVar2 = FUN_00d23d70();
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 == '\0') {
                  local_208 = plVar11;
                  local_200 = '\0';
                  uVar14 = FUN_0039e8b0();
                  local_110 = local_60;
                  local_108 = 0;
                  if (local_58 == '\0') {
                    if (local_60 != (longlong *)0x0) {
                      uVar14 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_58 = '\0';
                  }
                  local_108 = '\x01';
                  (**(code **)(*local_80 + 0xdb8))(uVar14,1);
                  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                (**(code **)(*local_80 + 0xe30))();
                plVar11 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                FUN_01c3b620();
                if (plVar11 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                goto LAB_01c3def2;
              }
              pvVar6 = _pthread_getspecific(pVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar6 = _pthread_getspecific(pVar9);
              plVar11 = local_68;
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1f8 = *plVar11;
              local_1f0 = '\0';
              uVar14 = FUN_012ebc80();
              plVar11 = local_60;
              if (local_58 == '\0') {
                if (((local_60 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_58 != '\0'))
                   && (local_60 != (longlong *)0x0)) {
                  uVar14 = FUN_00d50b20();
                }
              }
              else {
                local_58 = '\0';
              }
              if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                if (*(int *)((longlong)plVar11 + 0xc) != 0) {
                  local_1e8 = plVar11;
                  local_1e0 = '\0';
                  (**(code **)(*local_80 + 0xdb8))(uVar14,1);
                  if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  (**(code **)(*local_80 + 0xe30))();
                  plVar11 = local_60;
                  if (local_58 == '\0') {
                    if (local_60 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_58 = '\0';
                  }
                  FUN_01c3bc90();
                  if (plVar11 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
          }
        }
        else {
          uVar7 = CONCAT71(uVar8,1);
          if (((int)local_d0 == 1) && (local_a8 != (longlong *)0x0)) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01268710();
            plVar11 = local_60;
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01c3e326;
              }
            }
            else if (local_60 != (longlong *)0x0) {
LAB_01c3e326:
              (**(code **)(*local_80 + 0xe20))();
              local_58 = '\0';
              local_60 = plVar11;
              cVar2 = FUN_00d23d70();
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                local_238 = plVar11;
                local_230 = '\0';
                uVar14 = FUN_0039e8b0();
                local_120 = local_60;
                local_118 = 0;
                if (local_58 == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                local_118 = '\x01';
                (**(code **)(*local_80 + 0xdb8))(uVar14,1);
                if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              (**(code **)(*local_80 + 0xe30))();
              plVar11 = local_60;
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              FUN_01c3b620();
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              goto LAB_01c3def2;
            }
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar6 = _pthread_getspecific(pVar9);
            plVar11 = local_68;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_228 = *plVar11;
            local_220 = '\0';
            uVar14 = FUN_012eb7a0();
            plVar11 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_220 != '\0') && (local_228 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if (plVar11 != (longlong *)0x0) {
              if (*(int *)((longlong)plVar11 + 0xc) != 0) {
                local_218 = plVar11;
                local_210 = '\0';
                (**(code **)(*local_80 + 0xdb8))(uVar14,1);
                if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*local_80 + 0xe30))();
                plVar11 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                FUN_01c3bc90();
                if (plVar11 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        uVar7 = CONCAT71(uVar8,1);
        if (*(char *)(unaff_RDI + 0x31) != '\0') {
          (**(code **)(*local_80 + 0xe30))();
          plVar11 = local_60;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01c3dfa0;
            }
          }
          else if (local_60 != (longlong *)0x0) {
LAB_01c3dfa0:
            pVar9 = (pthread_key_t)param_1;
            if (*(int *)((longlong)plVar11 + 0xc) != 0) {
              if (((char)local_98 == '\0') && (*(int *)((longlong)local_c8 + 0xc) != 0)) {
                if (0 < *(int *)((longlong)local_c8 + 0xc)) {
                  lVar10 = 0;
                  do {
                    plVar1 = *(longlong **)(local_c8[2] + lVar10 * 8);
                    if (plVar1 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    cVar2 = FUN_019801a0();
                    if (cVar2 != '\0') {
                      cVar2 = FUN_01983bd0();
                      pVar9 = (pthread_key_t)param_1;
                      if (cVar2 != '\0') {
                        (**(code **)(*plVar1 + 0x928))();
                        pvVar6 = _pthread_getspecific(pVar9);
                        if (pvVar6 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        uVar5 = FUN_0125e7c0();
                        plVar12 = local_60;
                        if (local_60 == (longlong *)0x0) {
                          plVar12 = (longlong *)0x0;
                          local_68 = (longlong *)0x0;
                        }
                        else if (local_58 == '\0') {
                          uVar5 = FUN_00d50b00();
                          local_68 = (longlong *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_58 = '\0';
                          local_68 = (longlong *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                        }
                        if ((local_70 != '\0') && (local_78 != 0)) {
                          FUN_00d50b20();
                        }
                        FUN_00d50b20();
                        goto LAB_01c3ebda;
                      }
                    }
                    if (plVar1 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < *(int *)((longlong)local_c8 + 0xc));
                }
              }
              else if (local_a8 != (longlong *)0x0) {
                pvVar6 = _pthread_getspecific(pVar9);
                if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  pVar9 = (pthread_key_t)local_a8;
                }
                FUN_013de560();
                plVar1 = local_60;
                if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
                    (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar6 = _pthread_getspecific(pVar9);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar5 = FUN_014bc340();
                if (local_60 == (longlong *)0x0) {
                  pvVar6 = _pthread_getspecific(pVar9);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar5 = FUN_014d19a0();
                  bVar13 = local_78 != 0;
                  if ((local_70 != '\0') && (local_78 != 0)) {
                    uVar5 = FUN_00d50b20();
                  }
                }
                else {
                  bVar13 = false;
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  uVar5 = FUN_00d50b20();
                }
                plVar12 = local_a8;
                if (bVar13) {
                  if ((char)local_e0 == '\0') {
                    local_68 = (longlong *)0x0;
                  }
                  else {
                    local_68 = (longlong *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = (longlong *)0x0;
                  plVar12 = (longlong *)0x0;
                }
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
LAB_01c3ebda:
                if (plVar12 != (longlong *)0x0) {
                  pvVar6 = _pthread_getspecific(pVar9);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dfcb0();
                  pvVar6 = _pthread_getspecific(pVar9);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013ddf90();
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_248 = plVar11;
                  local_240 = '\0';
                  FUN_0138ca60();
                  if ((local_240 != '\0') && (local_248 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((char)local_68 != '\0') {
                    FUN_00d50b20();
                  }
                }
              }
            }
            FUN_00d50b20();
          }
        }
      }
    }
    else {
LAB_01c3de7f:
      local_188 = *unaff_RSI;
      local_180 = '\0';
      local_178 = *local_68;
      local_170 = '\0';
      uVar3 = FUN_01a58d30(uVar14,&local_178);
      uVar7 = (ulonglong)uVar3;
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01c3def2:
    if (((char)local_e0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_98 == '\0') {
      FUN_00d50b20();
    }
    if ((char)local_148 == '\0') {
      FUN_00d50b20();
    }
    bVar13 = false;
    if (((char)local_d8 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
      bVar13 = false;
    }
    goto LAB_01c3df59;
  }
  local_298 = *local_68;
  local_290 = '\0';
  uVar3 = FUN_01a58d30(uVar14,&local_298);
  uVar7 = (ulonglong)uVar3;
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  bVar13 = true;
LAB_01c3df59:
  if (!bVar13) {
    FUN_00d50b20();
  }
  return uVar7 & 0xffffffff;
}


