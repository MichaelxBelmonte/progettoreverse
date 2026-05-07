// Function: FUN_01a4b680
// Address: 01a4b680
// Size: 9338 bytes
// Class: Unknown

uint64_t FUN_01a4b680(void* param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  code *pcVar7;
  code *pcVar8;
  char cVar9;
  uint8_t uVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int64_t lVar16;
  void *pvVar17;
  uint64_t uVar18;
  void*puVar19;
  code *pcVar20;
  int64_t *plVar21;
  void*puVar22;
  void* pVar23;
  code *pcVar24;
  int64_t *in_RDX;
  int iVar25;
  int64_t *arg1;
  int64_t *this_ptr;
  code **ppcVar26;
  code *pcVar27;
  uint64_t uVar28;
  undefined7 uVar29;
  bool bVar30;
  uint32_t uVar31;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t uVar32;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint64_t local_350;
  uint8_t local_348;
  uint64_t local_340;
  uint8_t local_338;
  int64_t local_330;
  uint8_t local_328;
  code *local_320;
  uint8_t local_318;
  code *local_310;
  code *local_308;
  uint8_t local_300;
  uint8_t local_2f8 [8];
  uint8_t local_2f0;
  code *local_2e8;
  uint8_t local_2e0;
  uint8_t local_2d8 [8];
  uint8_t local_2d0;
  code *local_2c8;
  uint8_t local_2c0;
  double local_2b8;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  code *local_268;
  char local_260;
  code *local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  code *local_228;
  char local_220;
  code *local_218;
  char local_210;
  code *local_208;
  char local_200;
  code *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  void*local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  void*local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  void*local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  double local_148;
  code *local_140;
  int64_t local_138;
  char local_130;
  uint64_t local_128;
  code *local_120;
  char local_118;
  uint64_t local_110;
  code *local_108;
  int64_t local_100;
  char local_f8;
  code *local_e8;
  double local_d8;
  uint local_c4;
  code *local_c0;
  code *local_a8;
  code *local_78;
  uint8_t local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t *local_60;
  code *local_58;
  uint8_t local_50 [8];
  code *local_48;
  uint64_t local_40;
  int local_38;
  
  local_60 = in_RDX;
  uVar31 = FUN_01a58dc0();
  pcVar7 = local_58;
  if (local_50[0] == (code)0x0) {
    if (local_58 != 0x0) {
      FUN_00d50b00();
      if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a4b6e4;
    }
  }
  else if (local_58 != 0x0) {
LAB_01a4b6e4:
    cVar9 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *(int64_t *)pcVar7))();
    if (cVar9 == '\0') {
      if (*local_60 != 0) {
        local_280 = '\0';
        local_288 = *local_60;
        FUN_0039e8b0();
        local_120 = local_58;
        local_118 = 0;
        if (local_50[0] == (code)0x0) {
          if (local_58 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50[0] = (code)0x0;
        }
        local_118 = '\x01';
        cVar9 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                            *(int64_t *)pcVar7 + 8))();
        if ((local_118 != '\0') && (local_120 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
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
      local_e8 = 0x0;
      uVar14 = 0;
LAB_01a4b958:
      bVar30 = false;
    }
    else {
      local_270 = '\0';
      local_278 = *local_60;
      (**(code **)(*(int64_t *)pcVar7 + 0xab0))();
      local_e8 = local_58;
      pcVar27 = local_58;
      if (local_58 == 0x0) {
        local_110 = 0;
        local_e8 = 0x0;
LAB_01a4b909:
        bVar30 = local_e8 == 0x0;
        if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50[0] == (code)0x0) {
          uVar18 = FUN_00d50b00();
          local_110 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
          goto LAB_01a4b909;
        }
        local_50[0] = (code)0x0;
        local_110 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
        bVar30 = false;
      }
      param_1 = (void*)pcVar27;
      if ((local_270 != '\0') && (local_278 != 0)) {
        FUN_00d50b20();
      }
      if (bVar30) goto LAB_01a4b94c;
      local_268 = pcVar7;
      local_260 = '\0';
      uVar32 = FUN_01e437f0(uVar31);
      uVar18 = FUN_019765b0();
      cVar9 = FUN_00d05410(uVar32,uVar18,param_2);
      if ((local_260 != '\0') && (local_268 != 0x0)) {
        FUN_00d50b20();
      }
      if (cVar9 == '\0') {
        local_258 = pcVar7;
        local_250 = '\0';
        uVar32 = FUN_01e437f0(uVar31);
        uVar1 = FUN_019765d0();
        uVar14 = FUN_00d05410(uVar32,uVar1,uVar18);
        if ((local_250 != '\0') && (local_258 != 0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a4b958;
      }
      bVar30 = true;
      uVar14 = 0;
    }
    (**(code **)(*(int64_t *)pcVar7 + 0xae0))(uVar31);
    pcVar27 = local_58;
    local_108 = local_58;
    plVar21 = this_ptr;
    if (local_50[0] == (code)0x0) {
      if (local_58 == 0x0) goto LAB_01a4bc8e;
      FUN_00d50b00();
      if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)(pcVar27 + 0xc) != 0) goto LAB_01a4b9ae;
LAB_01a4bc7a:
      bVar3 = false;
LAB_01a4bca0:
      bVar4 = false;
      local_c4 = 0;
joined_r0x01a4bcbb:
      local_c0 = 0x0;
      if (bVar30) goto LAB_01a4c160;
LAB_01a4c077:
      if (((uVar14 & 1) != 0) || (local_c0 == 0x0)) goto LAB_01a4c160;
      (**(code **)(*(int64_t *)local_c0 + 0x928))();
      pcVar20 = local_58;
      plVar6 = local_60;
      pcVar27 = *local_60;
      if (pcVar27 == local_58) {
        if (((char)local_60[1] == '\0') && (local_58 != 0x0)) {
          if (local_50[0] != (code)0x0) goto LAB_01a4c0ea;
          FUN_00d50b00();
          goto LAB_01a4c128;
        }
LAB_01a4c134:
        if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar9 = (char)local_60[1];
        plVar21 = (int64_t *)CONCAT71((int7)((uint64_t)plVar21 >> 8),cVar9);
        if (local_50[0] == (code)0x0) {
          if (local_58 != 0x0) {
            FUN_00d50b00();
          }
          *local_60 = (int64_t)pcVar20;
          if ((cVar9 != '\0') && (pcVar27 != 0x0)) {
            FUN_00d50b20();
          }
LAB_01a4c128:
          *(void*)(plVar6 + 1) = 1;
          goto LAB_01a4c134;
        }
        *local_60 = (int64_t)local_58;
        if ((cVar9 != '\0') && (pcVar27 != 0x0)) {
          FUN_00d50b20();
        }
LAB_01a4c0ea:
        *(void*)(plVar6 + 1) = 1;
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
      pcVar27 = 0x0;
    }
    else {
      if (local_58 == 0x0) {
LAB_01a4bc8e:
        bVar3 = true;
        goto LAB_01a4bca0;
      }
      if (*(int *)(local_58 + 0xc) == 0) goto LAB_01a4bc7a;
LAB_01a4b9ae:
      lVar16 = **(int64_t **)(pcVar27 + 0x10);
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
          local_58 = 0x0;
          local_48 = local_108;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          bVar4 = false;
          local_c0 = 0x0;
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
            lVar16 = (int64_t)(int)local_40;
            iVar25 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar25);
            if (*(int *)(local_48 + 0xc) <= iVar25) break;
            local_58 = *(code **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar16 * 8);
            cVar9 = FUN_019801b0();
            pcVar27 = local_58;
            pcVar20 = local_c0;
            if (cVar9 != '\0') {
              if (local_58 == local_c0) {
                bVar3 = bVar4;
                if ((!bVar4) && (local_58 != 0x0)) {
                  pcVar27 = local_c0;
                  if (local_50[0] != (code)0x0) goto LAB_01a4bb36;
                  FUN_00d50b00();
                  bVar3 = true;
                }
              }
              else if (local_50[0] == (code)0x0) {
                if (local_58 != 0x0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                pcVar20 = pcVar27;
                if ((bVar4) && (local_c0 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if ((bVar4) && (local_c0 != 0x0)) {
                  FUN_00d50b20();
                }
LAB_01a4bb36:
                local_50[0] = (code)0x0;
                pcVar20 = pcVar27;
                bVar3 = true;
              }
              (**(code **)(*(int64_t *)local_58 + 0x928))();
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
                plVar21 = (int64_t *)0x0;
                if (local_68 == '\0') {
                  if (lVar2 != 0) {
                    FUN_00d50b00();
                  }
                  *local_60 = lVar2;
                  if (((char)lVar5 != '\0') && (lVar16 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01a4bc23:
                  *(void*)(local_60 + 1) = 1;
                  goto LAB_01a4bc2b;
                }
                *local_60 = lVar2;
                if (((char)lVar5 != '\0') && (lVar16 != 0)) {
                  FUN_00d50b20();
                }
LAB_01a4ba70:
                *(void*)(local_60 + 1) = 1;
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
        local_c0 = **(void**)(local_108 + 0x10);
        if (local_c0 != 0x0) {
          FUN_00d50b00();
          bVar4 = true;
          goto LAB_01a4c039;
        }
        bVar3 = false;
        goto joined_r0x01a4bcbb;
      }
      local_50[0] = (code)0x0;
      local_58 = 0x0;
      local_48 = local_108;
      local_40 = 0xffffffff;
      local_38 = 0;
      bVar4 = false;
      local_c0 = 0x0;
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
        lVar16 = (int64_t)(int)local_40;
        iVar25 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar25);
        if (*(int *)(local_48 + 0xc) <= iVar25) break;
        local_58 = *(code **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar16 * 8);
        cVar9 = FUN_019801a0();
        pcVar27 = local_58;
        pcVar20 = local_c0;
        if (cVar9 != '\0') {
          if (local_58 == local_c0) {
            bVar3 = bVar4;
            if ((!bVar4) && (local_58 != 0x0)) {
              pcVar27 = local_c0;
              if (local_50[0] != (code)0x0) goto LAB_01a4bee6;
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else if (local_50[0] == (code)0x0) {
            if (local_58 != 0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            pcVar20 = pcVar27;
            if ((bVar4) && (local_c0 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar4) && (local_c0 != 0x0)) {
              FUN_00d50b20();
            }
LAB_01a4bee6:
            local_50[0] = (code)0x0;
            pcVar20 = pcVar27;
            bVar3 = true;
          }
          (**(code **)(*(int64_t *)local_58 + 0x928))();
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
            plVar21 = (int64_t *)0x0;
            if (local_68 == '\0') {
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              *local_60 = lVar2;
              if (((char)lVar5 != '\0') && (lVar16 != 0)) {
                FUN_00d50b20();
              }
LAB_01a4bfd3:
              *(void*)(local_60 + 1) = 1;
              goto LAB_01a4bfdb;
            }
            *local_60 = lVar2;
            if (((char)lVar5 != '\0') && (lVar16 != 0)) {
              FUN_00d50b20();
            }
LAB_01a4be20:
            *(void*)(local_60 + 1) = 1;
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
      param_1 = (void*)pcVar27;
      if (local_c0 == 0x0) goto LAB_01a4c015;
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
      if (local_58 == 0x0) {
        pcVar27 = 0x0;
        local_128 = 0;
      }
      else {
        local_128 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
        if (((local_50[0] == (code)0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
           (local_58 != 0x0)) {
          FUN_00d50b20();
        }
      }
    }
    iVar25 = FUN_01d3a5a0();
    uVar32 = extraout_XMM0_Da;
    if ((iVar25 == 1) && (iVar25 = FUN_01d3b630(), uVar32 = extraout_XMM0_Da_00, iVar25 == 1)) {
      iVar25 = FUN_01d3b620();
      if (iVar25 == 2) {
        uVar29 = (undefined7)((uint64_t)plVar21 >> 8);
        if (bVar30) {
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pcVar7 = local_58;
          if (local_50[0] == (code)0x0) {
            if (local_58 != 0x0) {
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
          if (pcVar7 != 0x0) {
            FUN_00d50b20();
          }
          if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((uVar14 & 1) == 0) {
            if (*local_60 == 0) {
              local_248 = *arg1;
              local_240 = '\0';
              local_230 = '\0';
              local_238 = *local_60;
              uVar14 = FUN_01a58d30(local_248,&local_238);
              uVar28 = (uint64_t)uVar14;
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
              (**(code **)(*(int64_t *)pcVar7 + 0x930))();
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
            if (local_58 != 0x0) {
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
          if (pcVar7 != 0x0) {
            FUN_00d50b20();
          }
          if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
        }
        uVar28 = CONCAT71(uVar29,1);
      }
      else {
        if ((!bVar30 && (uVar14 & 1) == 0) || (local_c0 == 0x0)) {
          uVar32 = extraout_XMM0_Da_01;
          if (*local_60 != 0) {
            (**(code **)(*(int64_t *)pcVar7 + 0xeb0))();
            do {
              (**(code **)(*(int64_t *)pcVar7 + 0x658))();
              pcVar24 = local_58;
              pcVar20 = *arg1;
              if (pcVar20 == local_58) {
                if (((char)arg1[1] == '\0') && (local_58 != 0x0)) {
                  if (local_50[0] == (code)0x0) {
                    FUN_00d50b00();
                    goto LAB_01a4c425;
                  }
LAB_01a4c3dc:
                  *(void*)(arg1 + 1) = 1;
                  local_50[0] = (code)0x0;
                }
                lVar16 = *arg1;
              }
              else {
                lVar16 = arg1[1];
                if (local_50[0] != (code)0x0) {
                  *arg1 = (int64_t)local_58;
                  if (((char)lVar16 != '\0') && (pcVar20 != 0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a4c3dc;
                }
                if (local_58 != 0x0) {
                  FUN_00d50b00();
                }
                *arg1 = (int64_t)pcVar24;
                if (((char)lVar16 != '\0') && (pcVar20 != 0x0)) {
                  FUN_00d50b20();
                }
LAB_01a4c425:
                *(void*)(arg1 + 1) = 1;
                lVar16 = *arg1;
              }
              if (lVar16 == 0) {
                if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
                  FUN_00d50b20();
                }
                break;
              }
              iVar25 = FUN_01d3a5a0();
              if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
                FUN_00d50b20();
              }
            } while (iVar25 != 6);
            local_178 = *arg1;
            local_170 = '\0';
            FUN_0199eb40();
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            uVar32 = (**(code **)(*(int64_t *)pcVar7 + 0xeb0))();
          }
          goto LAB_01a4c8a8;
        }
        local_148 = (double)(**(code **)(*(int64_t *)pcVar7 + 0x930))(uVar31);
        (**(code **)("/usr/lib/libobjc.A.dylib" + *(int64_t *)pcVar7 + 0x18))();
        pvVar17 = _pthread_getspecific(param_1);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pcVar20 = local_58;
        if ((((local_50[0] == (code)0x0) && (local_58 != 0x0)) &&
            (FUN_00d50b00(), local_50[0] != (code)0x0)) && (local_58 != 0x0)) {
          FUN_00d50b20();
        }
        local_140 = pcVar20;
        FUN_01a58dc0();
        (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0xe20))();
        pcVar24 = local_58;
        if (local_50[0] == (code)0x0) {
          if (local_58 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50[0] = (code)0x0;
        }
        local_2c0 = 1;
        local_2c8 = pcVar24;
        uVar10 = FUN_01a4b510();
        if (pcVar24 != 0x0) {
          FUN_00d50b20();
        }
        if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
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
          local_a8 = *local_60;
          if (local_a8 == 0x0) {
            cVar9 = '\0';
            local_a8 = 0x0;
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
          if (local_58 == 0x0) {
            uVar18 = 0;
            bVar11 = (**(code **)((int64_t)&dylib_command_00001220.dylib.current_version +
                                 *(int64_t *)pcVar7))();
            pcVar24 = (CONCAT71((int7)((uint64_t)uVar18 >> 8),uVar10) ^ 1);
            if ((byte)(bVar11 | (byte)pcVar24) != 1) goto LAB_01a4cd37;
            pvVar17 = _pthread_getspecific((void*)pcVar24);
            if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pcVar24 = local_a8;
            }
            pVar23 = (void*)pcVar24;
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
              if (((local_58 != 0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
                 (local_58 != 0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50[0] = (code)0x0;
            }
            if ((local_220 != '\0') && (local_228 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
              FUN_00d50b20();
            }
            if (*(int *)(pcVar20 + 0xc) == 0) {
              cVar12 = '\0';
              local_78 = 0x0;
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
              if ((local_50[0] != (code)0x0) && (local_78 != 0x0)) {
                FUN_00d50b20();
              }
              if (local_78 == 0x0) {
                local_78 = 0x0;
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
               (local_58 != 0x0)) {
              FUN_00d50b20();
            }
            cVar12 = '\x01';
          }
        }
        else if ((uVar14 & 1) == 0) {
          cVar9 = '\0';
          local_a8 = 0x0;
LAB_01a4cd37:
          cVar12 = '\0';
          local_78 = 0x0;
        }
        else {
          pvVar17 = _pthread_getspecific(param_1);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01259520();
          local_78 = *local_60;
          if (local_78 == 0x0) {
            cVar12 = '\0';
            local_78 = 0x0;
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
          if (local_58 == 0x0) {
            uVar18 = 0;
            bVar11 = (**(code **)((int64_t)&dylib_command_00001220.dylib.current_version +
                                 *(int64_t *)pcVar7))();
            pcVar24 = (CONCAT71((int7)((uint64_t)uVar18 >> 8),uVar10) ^ 1);
            if ((byte)(bVar11 | (byte)pcVar24) == 1) {
              pvVar17 = _pthread_getspecific((void*)pcVar24);
              if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar24 = local_78;
              }
              pVar23 = (void*)pcVar24;
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
                if (((local_58 != 0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
                   (local_58 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50[0] = (code)0x0;
              }
              if ((local_210 != '\0') && (local_218 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              if (*(int *)(pcVar20 + 0xc) == 0) {
                cVar9 = '\0';
                local_a8 = 0x0;
              }
              else {
                FUN_00d23310();
                local_a8 = local_58;
                pcVar20 = local_50;
                if (local_50[0] == (code)0x0) {
                  pcVar20 = &local_70;
                }
                local_70 = local_50[0];
                *pcVar20 = (code)0x0;
                if ((local_50[0] != (code)0x0) && (local_a8 != 0x0)) {
                  FUN_00d50b20();
                }
                if (local_a8 == 0x0) {
                  local_a8 = 0x0;
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
              pcVar20 = &local_70;
            }
            else {
              cVar9 = '\0';
              local_a8 = 0x0;
            }
          }
          else {
            if (((local_50[0] == (code)0x0) && (FUN_00d50b00(), local_50[0] != (code)0x0)) &&
               (local_58 != 0x0)) {
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
        pcVar24 = (uint64_t)((uVar15 & 4) >> 2);
        (**(code **)(*this_ptr + 0x4c0))(pcVar24,&local_1f8);
        if ((local_1f0 != '\0') && (local_1f8 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_200 != '\0') && (local_208 != 0x0)) {
          FUN_00d50b20();
        }
        if (local_c4 == 1) {
LAB_01a4d763:
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(int64_t *)pcVar7 + 0x28))();
        }
        else {
          plVar21 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar21 = (int64_t)&g_02572358;
          pcVar20 = g_02572370;
          (*g_02572370)();
          local_60 = plVar21;
          puVar22 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar22 = &g_02572358;
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
            (**(code **)(*this_ptr + 0x4c8))(uVar31,&local_1d8);
            if ((local_1d0 != '\0') && (local_1d8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (bVar30) {
            FUN_01a58dc0();
            cVar13 = FUN_019a9840();
            if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
              FUN_00d50b20();
            }
            if (cVar13 == '\0') {
              local_58 = local_a8;
              local_50[0] = (code)0x0;
              FUN_00d21140();
              if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar17 = _pthread_getspecific((void*)pcVar24);
              if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar24 = local_a8;
              }
              pVar23 = (void*)pcVar24;
              FUN_01274b60();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar31 = FUN_01299fe0();
              pcVar24 = CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (pcVar24 != 0x0) {
                  uVar31 = FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_50[0] = (code)0x0;
              local_58 = pcVar24;
              FUN_00d214d0(uVar31,*(void*)((int64_t)local_60 + 0xc));
              if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
                FUN_00d50b20();
              }
              if (pcVar24 != 0x0) {
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
            if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
              FUN_00d50b20();
            }
            if (cVar13 == '\0') {
              local_50[0] = (code)0x0;
              local_58 = local_78;
              FUN_00d21140();
              if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar17 = _pthread_getspecific((void*)pcVar24);
              if ((pvVar17 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar24 = local_78;
              }
              pVar23 = (void*)pcVar24;
              FUN_01274b60();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar31 = FUN_01299fe0();
              pcVar24 = CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (pcVar24 != 0x0) {
                  uVar31 = FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_50[0] = (code)0x0;
              local_58 = pcVar24;
              FUN_00d214d0(uVar31,*(void*)((int64_t)puVar22 + 0xc));
              if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
                FUN_00d50b20();
              }
              if (pcVar24 != 0x0) {
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
          (**(code **)((int64_t)&dylib_command_000011b8.dylib.current_version + *(int64_t *)pcVar7
                      ))();
          if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_1b0 = '\0';
          local_1b8 = puVar22;
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(int64_t *)pcVar7))();
          if ((local_1b0 != '\0') && (local_1b8 != (void*)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(int64_t *)pcVar7 + 0x10))(0);
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *(int64_t *)pcVar7 + 8))(0);
          ppcVar26 = &local_58;
          (**(code **)(*(int64_t *)pcVar7 + 0xed0))();
          pcVar24 = local_58;
          FUN_00276bd0();
          if (pcVar24 == 0x0) {
LAB_01a4d41f:
            ppcVar26 = (code **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pcVar24 + 0x360))();
            cVar13 = FUN_00e85ea0();
            if (cVar13 == '\0') goto LAB_01a4d41f;
          }
          local_310 = *ppcVar26;
          if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
          local_c4 = local_c4 & 0xfffffffe;
          if (local_c4 == 2) {
            FUN_01983f40();
          }
          local_d8 = local_148;
LAB_01a4d480:
          (**(code **)(*(int64_t *)pcVar7 + 0x658))();
          pcVar8 = local_58;
          pcVar24 = *arg1;
          if (pcVar24 != local_58) {
            lVar16 = arg1[1];
            pcVar20 = 0x0;
            if (local_50[0] != (code)0x0) {
              *arg1 = (int64_t)local_58;
              if (((char)lVar16 != '\0') && (pcVar24 != 0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01a4d4d3;
            }
            if (local_58 != 0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)pcVar8;
            if (((char)lVar16 != '\0') && (pcVar24 != 0x0)) {
              FUN_00d50b20();
            }
LAB_01a4d51c:
            *(void*)(arg1 + 1) = 1;
            if (*arg1 == 0) goto LAB_01a4d60c;
LAB_01a4d530:
            iVar25 = FUN_01d3a5a0();
            if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
              FUN_00d50b20();
            }
            if (iVar25 == 6) goto LAB_01a4d620;
            iVar25 = FUN_01d3a5a0();
            if (iVar25 == 5) {
              FUN_01d3abf0();
              local_2b8 = (double)FUN_01e466c0();
              local_d8 = (double)(**(code **)(*(int64_t *)pcVar7 + 0x930))(SUB84(local_2b8,0));
              if (local_310 != 0x0) {
                (**(code **)(&UNK_000017f0 + *(int64_t *)pcVar7))(local_2b8._0_4_);
                (**(code **)(*(int64_t *)pcVar7 + 0x620))();
              }
              local_2b8 = local_d8 - local_148;
              (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *(int64_t *)pcVar7 + 0x10))();
              (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *(int64_t *)pcVar7 + 8))(SUB84(local_2b8,0));
            }
            goto LAB_01a4d480;
          }
          if (((char)arg1[1] == '\0') && (local_58 != 0x0)) {
            if (local_50[0] == (code)0x0) {
              FUN_00d50b00();
              goto LAB_01a4d51c;
            }
LAB_01a4d4d3:
            *(void*)(arg1 + 1) = 1;
            local_50[0] = (code)0x0;
          }
          if (*arg1 != 0) goto LAB_01a4d530;
LAB_01a4d60c:
          if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
LAB_01a4d620:
          FUN_01e42030();
          pcVar24 = local_58;
          if ((local_50[0] != (code)0x0) && (local_58 != 0x0)) {
            FUN_00d50b20();
          }
          if (pcVar24 != 0x0) {
            local_1a8 = *arg1;
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
              (**(code **)(*this_ptr + 0x4b0))(local_c4 != 2,&local_188);
              if ((local_180 != '\0') && (local_188 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_c4 == 2) {
              FUN_01983f40();
            }
            if (puVar22 != (void*)0x0) {
              FUN_00d50b20();
            }
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01a4d763;
          }
          if (puVar22 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if (local_140 != 0x0) {
          FUN_00d50b20();
        }
        if ((cVar9 != '\0') && (local_a8 != 0x0)) {
          FUN_00d50b20();
        }
        uVar28 = CONCAT71((int7)((uint64_t)pcVar20 >> 8),1);
        if ((cVar12 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
LAB_01a4c8a8:
      local_168 = *arg1;
      local_160 = '\0';
      local_158 = *local_60;
      local_150 = '\0';
      uVar14 = FUN_01a58d30(uVar32,&local_158);
      uVar28 = (uint64_t)uVar14;
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01a4c923:
    if (((char)local_128 != '\0') && (pcVar27 != 0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_c0 != 0x0)) {
      FUN_00d50b20();
    }
    bVar30 = false;
    if (((char)local_110 != '\0') && (local_e8 != 0x0)) {
      FUN_00d50b20();
      bVar30 = false;
    }
    goto LAB_01a4c989;
  }
  local_2a8 = *arg1;
  local_2a0 = '\0';
  local_298 = *local_60;
  local_290 = '\0';
  uVar14 = FUN_01a58d30(uVar31,&local_298);
  uVar28 = (uint64_t)uVar14;
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

