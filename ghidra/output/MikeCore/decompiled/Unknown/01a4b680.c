// Function: FUN_01a4b680
// Address: 01a4b680
// Size: 9338 bytes
// Class: Unknown


ulonglong FUN_01a4b680(pthread_key_t param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  code *pcVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  void *pvVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  pthread_key_t pVar23;
  code *pcVar24;
  longlong *in_RDX;
  int iVar25;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  code **ppcVar26;
  code *pcVar27;
  ulonglong uVar28;
  undefined7 uVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340;
  undefined1 local_338;
  longlong local_330;
  undefined1 local_328;
  code *local_320;
  undefined1 local_318;
  code *local_310;
  code *local_308;
  undefined1 local_300;
  undefined1 local_2f8 [8];
  undefined1 local_2f0;
  code *local_2e8;
  undefined1 local_2e0;
  undefined1 local_2d8 [8];
  undefined1 local_2d0;
  code *local_2c8;
  undefined1 local_2c0;
  double local_2b8;
  longlong local_2a8;
  char local_2a0;
  longlong local_298;
  char local_290;
  longlong local_288;
  char local_280;
  longlong local_278;
  char local_270;
  code *local_268;
  char local_260;
  code *local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  code *local_228;
  char local_220;
  code *local_218;
  char local_210;
  code *local_208;
  char local_200;
  code *local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  undefined8 *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  undefined8 *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  undefined8 *local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  double local_148;
  code *local_140;
  longlong local_138;
  char local_130;
  undefined8 local_128;
  code *local_120;
  char local_118;
  undefined8 local_110;
  code *local_108;
  longlong local_100;
  char local_f8;
  code *local_e8;
  double local_d8;
  uint local_c4;
  code *local_c0;
  code *local_a8;
  code *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong *local_60;
  code *local_58;
  undefined1 local_50 [8];
  code *local_48;
  undefined8 local_40;
  int local_38;
  
  local_60 = in_RDX;
  uVar31 = FUN_01a58dc0();
  pcVar7 = local_58;
  if (local_50[0] == (code)0x0) {
    if (local_58 != (code *)0x0) {
      FUN_00d50b00();
      if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a4b6e4;
    }
  }
  else if (local_58 != (code *)0x0) {
LAB_01a4b6e4:
    cVar9 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *(longlong *)pcVar7))();
    if (cVar9 == '\0') {
      if (*local_60 != 0) {
        local_280 = '\0';
        local_288 = *local_60;
        FUN_0039e8b0();
        local_120 = local_58;
        local_118 = 0;
        if (local_50[0] == (code)0x0) {
          if (local_58 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50[0] = (code)0x0;
        }
        local_118 = '\x01';
        cVar9 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                            *(longlong *)pcVar7 + 8))();
        if ((local_118 != '\0') && (local_120 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_280 != '\0') && (local_288 != 0)) {
          FUN_00d50b20();
        }
        if (cVar9 != '\0') goto LAB_01a4b855;
      }
      bVar30 = false;
      uVar28 = 0;
      goto LAB_01a4c989;
    }
LAB_01a4b855:
    FUN_01d3abf0();
    uVar31 = FUN_01e466c0();
    if (*local_60 == 0) {
      local_110 = 0;
LAB_01a4b94c:
      local_e8 = (code *)0x0;
      uVar14 = 0;
LAB_01a4b958:
      bVar30 = false;
    }
    else {
      local_270 = '\0';
      local_278 = *local_60;
      (**(code **)(*(longlong *)pcVar7 + 0xab0))();
      local_e8 = local_58;
      pcVar27 = local_58;
      if (local_58 == (code *)0x0) {
        local_110 = 0;
        local_e8 = (code *)0x0;
LAB_01a4b909:
        bVar30 = local_e8 == (code *)0x0;
        if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50[0] == (code)0x0) {
          uVar18 = FUN_00d50b00();
          local_110 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          goto LAB_01a4b909;
        }
        local_50[0] = (code)0x0;
        local_110 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
        bVar30 = false;
      }
      param_1 = (pthread_key_t)pcVar27;
      if ((local_270 != '\0') && (local_278 != 0)) {
        FUN_00d50b20();
      }
      if (bVar30) goto LAB_01a4b94c;
      local_268 = pcVar7;
      local_260 = '\0';
      uVar32 = FUN_01e437f0(uVar31);
      uVar18 = FUN_019765b0();
      cVar9 = FUN_00d05410(uVar32,uVar18,param_2);
      if ((local_260 != '\0') && (local_268 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar9 == '\0') {
        local_258 = pcVar7;
        local_250 = '\0';
        uVar32 = FUN_01e437f0(uVar31);
        uVar1 = FUN_019765d0();
        uVar14 = FUN_00d05410(uVar32,uVar1,uVar18);
        if ((local_250 != '\0') && (local_258 != (code *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a4b958;
      }
      bVar30 = true;
      uVar14 = 0;
    }
    (**(code **)(*(longlong *)pcVar7 + 0xae0))(uVar31);
    pcVar27 = local_58;
    local_108 = local_58;
    plVar21 = unaff_RDI;
    if (local_50[0] == (code)0x0) {
      if (local_58 == (code *)0x0) goto LAB_01a4bc8e;
      FUN_00d50b00();
      if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)(pcVar27 + 0xc) != 0) goto LAB_01a4b9ae;
LAB_01a4bc7a:
      bVar3 = false;
LAB_01a4bca0:
      bVar4 = false;
      local_c4 = 0;
joined_r0x01a4bcbb:
      local_c0 = (code *)0x0;
      if (bVar30) goto LAB_01a4c160;
LAB_01a4c077:
      if (((uVar14 & 1) != 0) || (local_c0 == (code *)0x0)) goto LAB_01a4c160;
      (**(code **)(*(longlong *)local_c0 + 0x928))();
      pcVar20 = local_58;
      plVar6 = local_60;
      pcVar27 = (code *)*local_60;
      if (pcVar27 == local_58) {
        if (((char)local_60[1] == '\0') && (local_58 != (code *)0x0)) {
          if (local_50[0] != (code)0x0) goto LAB_01a4c0ea;
          FUN_00d50b00();
          goto LAB_01a4c128;
        }
LAB_01a4c134:
        if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar9 = (char)local_60[1];
        plVar21 = (longlong *)CONCAT71((int7)((ulonglong)plVar21 >> 8),cVar9);
        if (local_50[0] == (code)0x0) {
          if (local_58 != (code *)0x0) {
            FUN_00d50b00();
          }
          *local_60 = (longlong)pcVar20;
          if ((cVar9 != '\0') && (pcVar27 != (code *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a4c128:
          *(undefined1 *)(plVar6 + 1) = 1;
          goto LAB_01a4c134;
        }
        *local_60 = (longlong)local_58;
        if ((cVar9 != '\0') && (pcVar27 != (code *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a4c0ea:
        *(undefined1 *)(plVar6 + 1) = 1;
      }
      cVar9 = FUN_019801a0();
      if (cVar9 != '\0') {
        bVar30 = true;
        goto LAB_01a4c160;
      }
      cVar9 = FUN_019801b0();
      param_1 = uVar14 & 0xff;
      uVar14 = 1;
      if (cVar9 == '\0') {
        uVar14 = param_1;
      }
      if (*local_60 != 0) goto LAB_01a4c170;
LAB_01a4c210:
      local_128 = 0;
      pcVar27 = (code *)0x0;
    }
    else {
      if (local_58 == (code *)0x0) {
LAB_01a4bc8e:
        bVar3 = true;
        goto LAB_01a4bca0;
      }
      if (*(int *)(local_58 + 0xc) == 0) goto LAB_01a4bc7a;
LAB_01a4b9ae:
      lVar16 = **(longlong **)(pcVar27 + 0x10);
      local_130 = 0;
      if (lVar16 != 0) {
        FUN_00d50b00();
      }
      local_130 = '\x01';
      local_138 = lVar16;
      FUN_01e48f80(uVar31);
      local_c4 = FUN_01983b10();
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if (local_c4 != 3) {
        if (local_c4 == 2) {
          local_50[0] = (code)0x0;
          local_58 = (code *)0x0;
          local_48 = local_108;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          bVar4 = false;
          local_c0 = (code *)0x0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar25 = -local_40._4_4_;
              }
              else {
                iVar25 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar25);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar25 = 0;
              }
              local_40 = CONCAT44(iVar25,(int)local_40);
            }
            lVar16 = (longlong)(int)local_40;
            iVar25 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar25);
            if (*(int *)(local_48 + 0xc) <= iVar25) break;
            local_58 = *(code **)(*(longlong *)(local_48 + 0x10) + 8 + lVar16 * 8);
            cVar9 = FUN_019801b0();
            pcVar27 = local_58;
            pcVar20 = local_c0;
            if (cVar9 != '\0') {
              if (local_58 == local_c0) {
                bVar3 = bVar4;
                if ((!bVar4) && (local_58 != (code *)0x0)) {
                  pcVar27 = local_c0;
                  if (local_50[0] != (code)0x0) goto LAB_01a4bb36;
                  FUN_00d50b00();
                  bVar3 = true;
                }
              }
              else if (local_50[0] == (code)0x0) {
                if (local_58 != (code *)0x0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                pcVar20 = pcVar27;
                if ((bVar4) && (local_c0 != (code *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if ((bVar4) && (local_c0 != (code *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01a4bb36:
                local_50[0] = (code)0x0;
                pcVar20 = pcVar27;
                bVar3 = true;
              }
              (**(code **)(*(longlong *)local_58 + 0x928))();
              lVar2 = CONCAT71(uStack_6f,local_70);
              lVar16 = *local_60;
              if (lVar16 == lVar2) {
                if (((char)local_60[1] == '\0') && (lVar2 != 0)) {
                  if (local_68 != '\0') goto LAB_01a4ba70;
                  FUN_00d50b00();
                  goto LAB_01a4bc23;
                }
LAB_01a4bc2b:
                if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                lVar5 = local_60[1];
                plVar21 = (longlong *)0x0;
                if (local_68 == '\0') {
                  if (lVar2 != 0) {
                    FUN_00d50b00();
                  }
                  *local_60 = lVar2;
                  if (((char)lVar5 != '\0') && (lVar16 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01a4bc23:
                  *(undefined1 *)(local_60 + 1) = 1;
                  goto LAB_01a4bc2b;
                }
                *local_60 = lVar2;
                if (((char)lVar5 != '\0') && (lVar16 != 0)) {
                  FUN_00d50b20();
                }
LAB_01a4ba70:
                *(undefined1 *)(local_60 + 1) = 1;
              }
              uVar14 = 1;
              bVar30 = false;
              bVar4 = bVar3;
            }
            local_c0 = pcVar20;
          }
          goto LAB_01a4bffc;
        }
        bVar4 = false;
LAB_01a4c015:
        local_c0 = (code *)**(undefined8 **)(local_108 + 0x10);
        if (local_c0 != (code *)0x0) {
          FUN_00d50b00();
          bVar4 = true;
          goto LAB_01a4c039;
        }
        bVar3 = false;
        goto joined_r0x01a4bcbb;
      }
      local_50[0] = (code)0x0;
      local_58 = (code *)0x0;
      local_48 = local_108;
      local_40 = 0xffffffff;
      local_38 = 0;
      bVar4 = false;
      local_c0 = (code *)0x0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar25 = -local_40._4_4_;
          }
          else {
            iVar25 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar25);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar25 = 0;
          }
          local_40 = CONCAT44(iVar25,(int)local_40);
        }
        lVar16 = (longlong)(int)local_40;
        iVar25 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar25);
        if (*(int *)(local_48 + 0xc) <= iVar25) break;
        local_58 = *(code **)(*(longlong *)(local_48 + 0x10) + 8 + lVar16 * 8);
        cVar9 = FUN_019801a0();
        pcVar27 = local_58;
        pcVar20 = local_c0;
        if (cVar9 != '\0') {
          if (local_58 == local_c0) {
            bVar3 = bVar4;
            if ((!bVar4) && (local_58 != (code *)0x0)) {
              pcVar27 = local_c0;
              if (local_50[0] != (code)0x0) goto LAB_01a4bee6;
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else if (local_50[0] == (code)0x0) {
            if (local_58 != (code *)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            pcVar20 = pcVar27;
            if ((bVar4) && (local_c0 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar4) && (local_c0 != (code *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a4bee6:
            local_50[0] = (code)0x0;
            pcVar20 = pcVar27;
            bVar3 = true;
          }
          (**(code **)(*(longlong *)local_58 + 0x928))();
          lVar2 = CONCAT71(uStack_6f,local_70);
          lVar16 = *local_60;
          if (lVar16 == lVar2) {
            if (((char)local_60[1] == '\0') && (lVar2 != 0)) {
              if (local_68 != '\0') goto LAB_01a4be20;
              FUN_00d50b00();
              goto LAB_01a4bfd3;
            }
LAB_01a4bfdb:
            if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar5 = local_60[1];
            plVar21 = (longlong *)0x0;
            if (local_68 == '\0') {
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              *local_60 = lVar2;
              if (((char)lVar5 != '\0') && (lVar16 != 0)) {
                FUN_00d50b20();
              }
LAB_01a4bfd3:
              *(undefined1 *)(local_60 + 1) = 1;
              goto LAB_01a4bfdb;
            }
            *local_60 = lVar2;
            if (((char)lVar5 != '\0') && (lVar16 != 0)) {
              FUN_00d50b20();
            }
LAB_01a4be20:
            *(undefined1 *)(local_60 + 1) = 1;
          }
          bVar30 = true;
          uVar14 = 0;
          bVar4 = bVar3;
        }
        local_c0 = pcVar20;
      }
LAB_01a4bffc:
      pcVar27 = local_48;
      FUN_01a01cb0();
      param_1 = (pthread_key_t)pcVar27;
      if (local_c0 == (code *)0x0) goto LAB_01a4c015;
LAB_01a4c039:
      bVar3 = false;
      if (!bVar30) goto LAB_01a4c077;
LAB_01a4c160:
      if (*local_60 == 0) goto LAB_01a4c210;
LAB_01a4c170:
      pvVar17 = _pthread_getspecific(param_1);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar18 = FUN_0125e7c0();
      pcVar27 = local_58;
      if (local_58 == (code *)0x0) {
        pcVar27 = (code *)0x0;
        local_128 = 0;
      }
      else {
        local_128 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
        if (((local_50[0] == (code)0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
           (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    iVar25 = FUN_01d3a5a0();
    uVar32 = extraout_XMM0_Da;
    if ((iVar25 == 1) && (iVar25 = FUN_01d3b630(), uVar32 = extraout_XMM0_Da_00, iVar25 == 1)) {
      iVar25 = FUN_01d3b620();
      if (iVar25 == 2) {
        uVar29 = (undefined7)((ulonglong)plVar21 >> 8);
        if (bVar30) {
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pcVar7 = local_58;
          if (local_50[0] == (code)0x0) {
            if (local_58 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50[0] = (code)0x0;
          }
          local_300 = 1;
          local_308 = pcVar7;
          local_350 = 0;
          local_348 = 0;
          FUN_01a58dc0();
          lVar16 = CONCAT71(uStack_6f,local_70);
          if (local_68 == '\0') {
            if (lVar16 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_2f0 = 1;
          FUN_01a43090(local_2f8,&local_350);
          if (lVar16 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if (pcVar7 != (code *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((uVar14 & 1) == 0) {
            if (*local_60 == 0) {
              local_248 = *unaff_RSI;
              local_240 = '\0';
              local_230 = '\0';
              local_238 = *local_60;
              uVar14 = FUN_01a58d30(local_248,&local_238);
              uVar28 = (ulonglong)uVar14;
              if ((local_230 != '\0') && (local_238 != 0)) {
                FUN_00d50b20();
              }
              if ((local_240 != '\0') && (local_248 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01d3abf0();
              FUN_01e466c0();
              (**(code **)(*(longlong *)pcVar7 + 0x930))();
              local_320 = pcVar7;
              local_318 = 0;
              uVar28 = CONCAT71(uVar29,1);
              FUN_01a42180();
            }
            goto LAB_01a4c923;
          }
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          pcVar7 = local_58;
          if (local_50[0] == (code)0x0) {
            if (local_58 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50[0] = (code)0x0;
          }
          local_2e0 = 1;
          local_2e8 = pcVar7;
          local_338 = 0;
          local_340 = 0;
          local_330 = *local_60;
          local_328 = 0;
          FUN_01a58dc0();
          lVar16 = CONCAT71(uStack_6f,local_70);
          if (local_68 == '\0') {
            if (lVar16 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_2d0 = 1;
          FUN_01a43090(local_2d8,&local_330);
          if (lVar16 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if (pcVar7 != (code *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar28 = CONCAT71(uVar29,1);
      }
      else {
        if ((!bVar30 && (uVar14 & 1) == 0) || (local_c0 == (code *)0x0)) {
          uVar32 = extraout_XMM0_Da_01;
          if (*local_60 != 0) {
            (**(code **)(*(longlong *)pcVar7 + 0xeb0))();
            do {
              (**(code **)(*(longlong *)pcVar7 + 0x658))();
              pcVar24 = local_58;
              pcVar20 = (code *)*unaff_RSI;
              if (pcVar20 == local_58) {
                if (((char)unaff_RSI[1] == '\0') && (local_58 != (code *)0x0)) {
                  if (local_50[0] == (code)0x0) {
                    FUN_00d50b00();
                    goto LAB_01a4c425;
                  }
LAB_01a4c3dc:
                  *(undefined1 *)(unaff_RSI + 1) = 1;
                  local_50[0] = (code)0x0;
                }
                lVar16 = *unaff_RSI;
              }
              else {
                lVar16 = unaff_RSI[1];
                if (local_50[0] != (code)0x0) {
                  *unaff_RSI = (longlong)local_58;
                  if (((char)lVar16 != '\0') && (pcVar20 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a4c3dc;
                }
                if (local_58 != (code *)0x0) {
                  FUN_00d50b00();
                }
                *unaff_RSI = (longlong)pcVar24;
                if (((char)lVar16 != '\0') && (pcVar20 != (code *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01a4c425:
                *(undefined1 *)(unaff_RSI + 1) = 1;
                lVar16 = *unaff_RSI;
              }
              if (lVar16 == 0) {
                if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
                  FUN_00d50b20();
                }
                break;
              }
              iVar25 = FUN_01d3a5a0();
              if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
                FUN_00d50b20();
              }
            } while (iVar25 != 6);
            local_178 = *unaff_RSI;
            local_170 = '\0';
            FUN_0199eb40();
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            uVar32 = (**(code **)(*(longlong *)pcVar7 + 0xeb0))();
          }
          goto LAB_01a4c8a8;
        }
        local_148 = (double)(**(code **)(*(longlong *)pcVar7 + 0x930))(uVar31);
        (**(code **)("/usr/lib/libobjc.A.dylib" + *(longlong *)pcVar7 + 0x18))();
        pvVar17 = _pthread_getspecific(param_1);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pcVar20 = local_58;
        if ((((local_50[0] == (code)0x0) && (local_58 != (code *)0x0)) &&
            (FUN_00d50b00(), local_50[0] != (code)0x0)) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_140 = pcVar20;
        FUN_01a58dc0();
        (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0xe20))();
        pcVar24 = local_58;
        if (local_50[0] == (code)0x0) {
          if (local_58 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50[0] = (code)0x0;
        }
        local_2c0 = 1;
        local_2c8 = pcVar24;
        uVar10 = FUN_01a4b510();
        if (pcVar24 != (code *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if (bVar30) {
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a280();
          local_a8 = (code *)*local_60;
          if (local_a8 == (code *)0x0) {
            cVar9 = '\0';
            local_a8 = (code *)0x0;
          }
          else {
            cVar9 = (char)local_60[1];
            if (cVar9 != '\0') {
              FUN_00d50b00();
            }
          }
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01268710();
          local_78 = local_58;
          if (local_58 == (code *)0x0) {
            uVar18 = 0;
            bVar11 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version +
                                 *(longlong *)pcVar7))();
            pcVar24 = (code *)(CONCAT71((int7)((ulonglong)uVar18 >> 8),uVar10) ^ 1);
            if ((byte)(bVar11 | (byte)pcVar24) != 1) goto LAB_01a4cd37;
            pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
            if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pcVar24 = local_a8;
            }
            pVar23 = (pthread_key_t)pcVar24;
            FUN_01266fe0();
            pvVar17 = _pthread_getspecific(pVar23);
            if (pvVar17 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_228 = local_a8;
            local_220 = '\0';
            FUN_012eb7a0();
            pcVar20 = local_58;
            if (local_50[0] == (code)0x0) {
              if (((local_58 != (code *)0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
                 (local_58 != (code *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50[0] = (code)0x0;
            }
            if ((local_220 != '\0') && (local_228 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
              FUN_00d50b20();
            }
            if (*(int *)(pcVar20 + 0xc) == 0) {
              cVar12 = '\0';
              local_78 = (code *)0x0;
            }
            else {
              FUN_00d23310();
              local_78 = local_58;
              puVar19 = local_50;
              if (local_50[0] == (code)0x0) {
                puVar19 = &local_70;
              }
              local_70 = local_50[0];
              *puVar19 = 0;
              if ((local_50[0] != (code)0x0) && (local_78 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if (local_78 == (code *)0x0) {
                local_78 = (code *)0x0;
                cVar12 = '\0';
              }
              else {
                cVar12 = '\x01';
                if (local_70 == (code)0x0) {
                  FUN_00d50b00();
                }
              }
            }
            FUN_00d50b20();
            pcVar20 = local_78;
          }
          else {
            if (((local_50[0] == (code)0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
               (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
            cVar12 = '\x01';
          }
        }
        else if ((uVar14 & 1) == 0) {
          cVar9 = '\0';
          local_a8 = (code *)0x0;
LAB_01a4cd37:
          cVar12 = '\0';
          local_78 = (code *)0x0;
        }
        else {
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01259520();
          local_78 = (code *)*local_60;
          if (local_78 == (code *)0x0) {
            cVar12 = '\0';
            local_78 = (code *)0x0;
          }
          else {
            cVar12 = (char)local_60[1];
            if (cVar12 != '\0') {
              FUN_00d50b00();
            }
          }
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01268dd0();
          local_a8 = local_58;
          if (local_58 == (code *)0x0) {
            uVar18 = 0;
            bVar11 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version +
                                 *(longlong *)pcVar7))();
            pcVar24 = (code *)(CONCAT71((int7)((ulonglong)uVar18 >> 8),uVar10) ^ 1);
            if ((byte)(bVar11 | (byte)pcVar24) == 1) {
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
              if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar24 = local_78;
              }
              pVar23 = (pthread_key_t)pcVar24;
              FUN_01266fe0();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_218 = local_78;
              local_210 = '\0';
              FUN_012ebc80();
              pcVar20 = local_58;
              if (local_50[0] == (code)0x0) {
                if (((local_58 != (code *)0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
                   (local_58 != (code *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50[0] = (code)0x0;
              }
              if ((local_210 != '\0') && (local_218 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              if (*(int *)(pcVar20 + 0xc) == 0) {
                cVar9 = '\0';
                local_a8 = (code *)0x0;
              }
              else {
                FUN_00d23310();
                local_a8 = local_58;
                pcVar20 = (code *)local_50;
                if (local_50[0] == (code)0x0) {
                  pcVar20 = (code *)&local_70;
                }
                local_70 = local_50[0];
                *pcVar20 = (code)0x0;
                if ((local_50[0] != (code)0x0) && (local_a8 != (code *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_a8 == (code *)0x0) {
                  local_a8 = (code *)0x0;
                  cVar9 = '\0';
                }
                else {
                  cVar9 = '\x01';
                  if (local_70 == (code)0x0) {
                    FUN_00d50b00();
                  }
                }
              }
              FUN_00d50b20();
              pcVar20 = (code *)&local_70;
            }
            else {
              cVar9 = '\0';
              local_a8 = (code *)0x0;
            }
          }
          else {
            if (((local_50[0] == (code)0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
               (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
            cVar9 = '\x01';
          }
        }
        local_200 = '\0';
        local_1f8 = local_a8;
        local_1f0 = '\0';
        local_208 = local_78;
        uVar15 = FUN_01d3b590();
        pcVar24 = (code *)(ulonglong)((uVar15 & 4) >> 2);
        (**(code **)(*unaff_RDI + 0x4c0))(pcVar24,&local_1f8);
        if ((local_1f0 != '\0') && (local_1f8 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_200 != '\0') && (local_208 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (local_c4 == 1) {
LAB_01a4d763:
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(longlong *)pcVar7 + 0x28))();
        }
        else {
          plVar21 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar21 = (longlong)&DAT_02572358;
          pcVar20 = DAT_02572370;
          (*DAT_02572370)();
          local_60 = plVar21;
          puVar22 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar22 = &DAT_02572358;
          (*pcVar20)();
          if ((((bVar30) && (cVar13 = FUN_01983af0(), uVar31 = extraout_XMM0_Da_02, cVar13 == '\0'))
              || (((uVar14 & 1) != 0 &&
                  (cVar13 = FUN_01983b00(), uVar31 = extraout_XMM0_Da_03, cVar13 == '\0')))) ||
             ((cVar13 = FUN_01983bd0(), cVar13 != '\0' &&
              (uVar31 = extraout_XMM0_Da_04, local_c4 == 0)))) {
            local_1e8 = local_60;
            local_1e0 = '\0';
            local_1d0 = '\0';
            local_1d8 = puVar22;
            (**(code **)(*unaff_RDI + 0x4c8))(uVar31,&local_1d8);
            if ((local_1d0 != '\0') && (local_1d8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (bVar30) {
            FUN_01a58dc0();
            cVar13 = FUN_019a9840();
            if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar13 == '\0') {
              local_58 = local_a8;
              local_50[0] = (code)0x0;
              FUN_00d21140();
              if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
              if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar24 = local_a8;
              }
              pVar23 = (pthread_key_t)pcVar24;
              FUN_01274b60();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar31 = FUN_01299fe0();
              pcVar24 = (code *)CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (pcVar24 != (code *)0x0) {
                  uVar31 = FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_50[0] = (code)0x0;
              local_58 = pcVar24;
              FUN_00d214d0(uVar31,*(undefined4 *)((longlong)local_60 + 0xc));
              if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if (pcVar24 != (code *)0x0) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else if ((uVar14 & 1) != 0) {
            FUN_01a58dc0();
            cVar13 = FUN_019a9840();
            if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar13 == '\0') {
              local_50[0] = (code)0x0;
              local_58 = local_78;
              FUN_00d21140();
              if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
              if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar24 = local_78;
              }
              pVar23 = (pthread_key_t)pcVar24;
              FUN_01274b60();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar31 = FUN_01299fe0();
              pcVar24 = (code *)CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (pcVar24 != (code *)0x0) {
                  uVar31 = FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_50[0] = (code)0x0;
              local_58 = pcVar24;
              FUN_00d214d0(uVar31,*(undefined4 *)((longlong)puVar22 + 0xc));
              if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if (pcVar24 != (code *)0x0) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          local_1c8 = local_60;
          local_1c0 = '\0';
          (**(code **)((longlong)&dylib_command_000011b8.dylib.current_version + *(longlong *)pcVar7
                      ))();
          if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_1b0 = '\0';
          local_1b8 = puVar22;
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(longlong *)pcVar7))();
          if ((local_1b0 != '\0') && (local_1b8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(longlong *)pcVar7 + 0x10))(0);
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(longlong *)pcVar7 + 8))(0);
          ppcVar26 = &local_58;
          (**(code **)(*(longlong *)pcVar7 + 0xed0))();
          pcVar24 = local_58;
          FUN_00276bd0();
          if (pcVar24 == (code *)0x0) {
LAB_01a4d41f:
            ppcVar26 = (code **)&DAT_02802688;
          }
          else {
            (**(code **)(*(longlong *)pcVar24 + 0x360))();
            cVar13 = FUN_00e85ea0();
            if (cVar13 == '\0') goto LAB_01a4d41f;
          }
          local_310 = *ppcVar26;
          if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
          local_c4 = local_c4 & 0xfffffffe;
          if (local_c4 == 2) {
            FUN_01983f40();
          }
          local_d8 = local_148;
LAB_01a4d480:
          (**(code **)(*(longlong *)pcVar7 + 0x658))();
          pcVar8 = local_58;
          pcVar24 = (code *)*unaff_RSI;
          if (pcVar24 != local_58) {
            lVar16 = unaff_RSI[1];
            pcVar20 = (code *)0x0;
            if (local_50[0] != (code)0x0) {
              *unaff_RSI = (longlong)local_58;
              if (((char)lVar16 != '\0') && (pcVar24 != (code *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01a4d4d3;
            }
            if (local_58 != (code *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)pcVar8;
            if (((char)lVar16 != '\0') && (pcVar24 != (code *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a4d51c:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            if (*unaff_RSI == 0) goto LAB_01a4d60c;
LAB_01a4d530:
            iVar25 = FUN_01d3a5a0();
            if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar25 == 6) goto LAB_01a4d620;
            iVar25 = FUN_01d3a5a0();
            if (iVar25 == 5) {
              FUN_01d3abf0();
              local_2b8 = (double)FUN_01e466c0();
              local_d8 = (double)(**(code **)(*(longlong *)pcVar7 + 0x930))(SUB84(local_2b8,0));
              if (local_310 != (code *)0x0) {
                (**(code **)(&UNK_000017f0 + *(longlong *)pcVar7))(local_2b8._0_4_);
                (**(code **)(*(longlong *)pcVar7 + 0x620))();
              }
              local_2b8 = local_d8 - local_148;
              (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *(longlong *)pcVar7 + 0x10))();
              (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *(longlong *)pcVar7 + 8))(SUB84(local_2b8,0));
            }
            goto LAB_01a4d480;
          }
          if (((char)unaff_RSI[1] == '\0') && (local_58 != (code *)0x0)) {
            if (local_50[0] == (code)0x0) {
              FUN_00d50b00();
              goto LAB_01a4d51c;
            }
LAB_01a4d4d3:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_50[0] = (code)0x0;
          }
          if (*unaff_RSI != 0) goto LAB_01a4d530;
LAB_01a4d60c:
          if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a4d620:
          FUN_01e42030();
          pcVar24 = local_58;
          if ((local_50[0] != (code)0x0) && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if (pcVar24 != (code *)0x0) {
            local_1a8 = *unaff_RSI;
            local_1a0 = '\0';
            FUN_0199eb40();
            if ((local_1a0 != '\0') && (local_1a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_148 != local_d8) || (NAN(local_148) || NAN(local_d8))) {
              local_198 = local_60;
              local_190 = '\0';
              local_180 = '\0';
              local_188 = puVar22;
              (**(code **)(*unaff_RDI + 0x4b0))(local_c4 != 2,&local_188);
              if ((local_180 != '\0') && (local_188 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_c4 == 2) {
              FUN_01983f40();
            }
            if (puVar22 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01a4d763;
          }
          if (puVar22 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if (local_140 != (code *)0x0) {
          FUN_00d50b20();
        }
        if ((cVar9 != '\0') && (local_a8 != (code *)0x0)) {
          FUN_00d50b20();
        }
        uVar28 = CONCAT71((int7)((ulonglong)pcVar20 >> 8),1);
        if ((cVar12 != '\0') && (local_78 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
LAB_01a4c8a8:
      local_168 = *unaff_RSI;
      local_160 = '\0';
      local_158 = *local_60;
      local_150 = '\0';
      uVar14 = FUN_01a58d30(uVar32,&local_158);
      uVar28 = (ulonglong)uVar14;
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01a4c923:
    if (((char)local_128 != '\0') && (pcVar27 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_c0 != (code *)0x0)) {
      FUN_00d50b20();
    }
    bVar30 = false;
    if (((char)local_110 != '\0') && (local_e8 != (code *)0x0)) {
      FUN_00d50b20();
      bVar30 = false;
    }
    goto LAB_01a4c989;
  }
  local_2a8 = *unaff_RSI;
  local_2a0 = '\0';
  local_298 = *local_60;
  local_290 = '\0';
  uVar14 = FUN_01a58d30(uVar31,&local_298);
  uVar28 = (ulonglong)uVar14;
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  bVar30 = true;
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
LAB_01a4c989:
  if (!bVar30) {
    FUN_00d50b20();
  }
  return uVar28 & 0xffffffff;
}


