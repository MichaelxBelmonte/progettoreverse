// Function: FUN_01a78ad0
// Address: 01a78ad0
// Size: 7003 bytes
// Class: MUTimeHandleToolViewInfo


undefined4 FUN_01a78ad0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong **pplVar11;
  void *pvVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  longlong *plVar16;
  pthread_key_t pVar17;
  longlong lVar18;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  double dVar21;
  undefined8 extraout_XMM0_Qa_04;
  longlong *local_338;
  undefined1 local_330;
  longlong *local_328;
  undefined1 local_320;
  longlong *local_318;
  undefined1 local_310;
  longlong *local_308;
  undefined1 local_300;
  longlong *local_2f8;
  undefined1 local_2f0;
  longlong *local_2e8;
  undefined1 local_2e0;
  longlong *local_2d8;
  undefined1 local_2d0;
  longlong *local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  undefined1 local_2b0;
  longlong local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  undefined1 local_290;
  longlong local_288;
  undefined1 local_280;
  longlong *local_278;
  undefined1 local_270;
  longlong *local_268;
  undefined1 local_260;
  double local_258;
  double local_250;
  longlong *local_248;
  undefined1 local_238;
  undefined1 local_230 [8];
  undefined1 local_228;
  longlong *local_220;
  char local_218 [8];
  double local_210;
  longlong *local_208;
  longlong local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  double local_130;
  double local_128;
  undefined4 local_10c;
  longlong *local_108;
  char local_100;
  double local_f8;
  longlong *local_f0;
  longlong local_e8;
  char local_e0;
  char local_d1;
  longlong *local_d0;
  longlong *local_b8;
  char local_b0 [8];
  longlong local_a8;
  undefined8 local_a0;
  int local_98;
  longlong *local_90;
  char local_80 [8];
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  char local_50 [8];
  double local_48;
  
  local_248 = param_1;
  local_d0 = param_2;
  uVar20 = FUN_01a58dc0();
  local_90 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a78b50;
    }
LAB_01a78bb9:
    bVar19 = true;
    goto LAB_01a7a1a9;
  }
  if (local_78 == (longlong *)0x0) goto LAB_01a78bb9;
LAB_01a78b50:
  cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *local_90
                      ))();
  if (cVar5 != '\0') {
LAB_01a78c3e:
    iVar7 = FUN_01d3a5a0();
    uVar20 = extraout_XMM0_Qa;
    if ((iVar7 == 1) && (iVar7 = FUN_01d3b630(), uVar20 = extraout_XMM0_Qa_00, iVar7 == 1)) {
      if (*local_d0 != 0) {
        FUN_01a77f70();
        FUN_01a7b2c0();
        plVar4 = local_78;
        if (local_70[0] == '\0') {
          if (local_78 == (longlong *)0x0) {
            uVar9 = 1;
            goto LAB_01a7a22b;
          }
          FUN_00d50b00();
        }
        else if (local_78 == (longlong *)0x0) {
          uVar9 = 1;
          bVar19 = false;
          goto LAB_01a7a226;
        }
        local_f0 = plVar4;
        FUN_01d3abf0();
        local_48 = (double)FUN_01e466c0();
        FUN_01d3abf0();
        local_128 = (double)FUN_01e466c0();
        FUN_01a58dc0();
        local_130 = (double)(**(code **)(*local_78 + 0x930))(local_48);
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a82400(local_128);
        plVar4 = local_78;
        if ((((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        iVar7 = FUN_01d3b620();
        if (iVar7 == 2) {
          if (plVar4 == (longlong *)0x0) {
            uVar10 = FUN_01d3b590();
            if ((uVar10 & 4) == 0) {
              FUN_01a7c080();
            }
            (**(code **)(*local_90 + 0x9b8))(local_130,0);
            plVar16 = local_78;
            if (local_70[0] == '\0') {
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a7a270;
              }
            }
            else if (local_78 != (longlong *)0x0) {
LAB_01a7a270:
              local_70[0] = '\0';
              local_78 = (longlong *)0x0;
              local_68 = plVar16;
              local_60 = 0xffffffff;
              local_58 = 0;
              local_60._4_4_ = 0;
              while( true ) {
                if (local_60._4_4_ != 0) {
                  if (local_60._4_4_ < 1) {
                    iVar7 = -local_60._4_4_;
                  }
                  else {
                    iVar7 = (int)local_60 - local_60._4_4_;
                    local_60 = CONCAT44(local_60._4_4_,iVar7);
                    FUN_00d23690();
                    local_58 = local_58 + local_60._4_4_;
                    iVar7 = 0;
                  }
                  local_60 = CONCAT44(iVar7,(int)local_60);
                }
                lVar13 = (longlong)(int)local_60;
                iVar7 = (int)local_60 + 1;
                local_60 = CONCAT44(local_60._4_4_,iVar7);
                if (*(int *)((longlong)local_68 + 0xc) <= iVar7) break;
                lVar18 = local_68[2];
                local_78 = *(longlong **)(lVar18 + 8 + lVar13 * 8);
                (**(code **)(*local_90 + 0xe20))();
                pVar17 = (pthread_key_t)lVar18;
                local_b8 = local_78;
                local_b0[0] = '\0';
                cVar5 = FUN_00d24090();
                uVar20 = extraout_XMM0_Qa_04;
                if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                  uVar20 = FUN_00d50b20();
                }
                plVar16 = local_78;
                if (cVar5 == '\0') {
                  plVar1 = (longlong *)*local_d0;
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    uVar20 = FUN_00d50b20();
                  }
                  if (plVar16 == plVar1) goto LAB_01a7a399;
                }
                else {
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    uVar20 = FUN_00d50b20();
                  }
LAB_01a7a399:
                  local_328 = local_78;
                  local_320 = 0;
                  FUN_01a7b2c0(uVar20,&local_328);
                  plVar16 = local_b8;
                  if (local_b0[0] == '\0') {
                    if (local_b8 == (longlong *)0x0) goto LAB_01a7a3e8;
                    FUN_00d50b00();
LAB_01a7a428:
                    if (plVar16 == (longlong *)0x0) goto LAB_01a7a2a3;
                  }
                  else {
                    if (local_b8 != (longlong *)0x0) goto LAB_01a7a428;
LAB_01a7a3e8:
                    pvVar12 = _pthread_getspecific(pVar17);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar5 = FUN_01263cf0();
                    if (cVar5 != '\0') goto LAB_01a7a428;
                    plVar16 = (longlong *)FUN_00e8fc40();
                    FUN_0086a5a0();
                    (**(code **)(*plVar16 + 0x18))();
                    local_1f0 = local_78;
                    local_1e8 = '\0';
                    local_138 = 0;
                    if (unaff_RDI != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    local_138 = '\x01';
                    pVar17 = 1;
                    local_140 = unaff_RDI;
                    FUN_01a81ae0(1,&local_140);
                    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_1d8 = '\0';
                    local_1e0 = plVar16;
                    (**(code **)(*local_90 + 0x450))();
                    if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_b0[0] = '\0';
                    local_b8 = plVar16;
                    FUN_00d21140();
                    if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  pvVar12 = _pthread_getspecific(pVar17);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_48 = (double)FUN_0125a280();
                  FUN_01a81c00();
                  lVar13 = local_e8;
                  if (local_e0 == '\0') {
                    if (local_e8 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_e0 = '\0';
                  }
                  local_228 = 1;
                  uVar20 = FUN_01a7c220(local_130 - local_48,local_230);
                  plVar1 = local_b8;
                  if ((local_b0[0] == '\0') && (local_b8 != (longlong *)0x0)) {
                    uVar20 = FUN_00d50b00();
                  }
                  if (lVar13 != 0) {
                    uVar20 = FUN_00d50b20();
                  }
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    uVar20 = FUN_00d50b20();
                  }
                  if (plVar1 != (longlong *)0x0) {
                    local_318 = plVar1;
                    local_310 = 0;
                    local_300 = 0;
                    local_308 = plVar16;
                    FUN_01a7cd20(uVar20,&local_308);
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
LAB_01a7a2a3:
              }
              param_1 = local_68;
              FUN_001159b0();
              bVar19 = true;
              FUN_00d50b20();
              goto LAB_01a78e1c;
            }
            bVar19 = true;
            goto LAB_01a78e1c;
          }
          uVar20 = FUN_01a81c00();
          plVar16 = local_78;
          if (local_70[0] == '\0') {
            if (local_78 != (longlong *)0x0) {
              uVar20 = FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_238 = 1;
          local_338 = plVar4;
          local_330 = 0;
          FUN_01a7b3d0(uVar20,&local_338);
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_01a7bc70();
          bVar19 = false;
        }
        else {
          bVar19 = false;
LAB_01a78e1c:
          plVar16 = local_f0;
          if (plVar4 != (longlong *)0x0) {
            local_1d0 = plVar4;
            local_1c8 = '\0';
            cVar5 = FUN_01a87be0();
            if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar10 = FUN_01d3b590();
            if ((uVar10 & 4) == 0) {
              if (cVar5 == '\0') {
                FUN_01a7c080();
                uVar20 = (**(code **)(*local_90 + 0xda0))();
                local_2d8 = plVar4;
                local_2d0 = 0;
                local_2c8 = plVar16;
                local_2c0 = 0;
                FUN_01a7cd20(uVar20,&local_2c8);
                local_1a0 = *local_d0;
                local_198 = '\0';
                (**(code **)(*local_90 + 0xda8))();
                if ((local_198 != '\0') && (local_1a0 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_2f8 = plVar4;
              local_2f0 = 0;
              local_2e8 = plVar16;
              local_2e0 = 0;
              FUN_01a7d1d0();
              cVar6 = FUN_01a87c60();
              if (cVar6 == '\0') {
                (**(code **)(*local_90 + 0xe20))();
                local_78 = (longlong *)*local_d0;
                local_70[0] = '\0';
                cVar6 = FUN_00d24090();
                if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar6 != '\0') {
                  local_1b0 = *local_d0;
                  local_1a8 = '\0';
                  (**(code **)(*local_90 + 0xdb0))();
                  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                (**(code **)(*local_90 + 0xe20))();
                local_78 = (longlong *)*local_d0;
                local_70[0] = '\0';
                cVar6 = FUN_00d24090();
                if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar6 == '\0') {
                  local_1c0 = *local_d0;
                  local_1b8 = '\0';
                  (**(code **)(*local_90 + 0xda8))();
                  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            local_10c = 0;
            dVar21 = 0.0;
            local_d1 = cVar5;
LAB_01a79400:
            lVar18 = *local_248;
            cVar5 = (char)local_248[1];
            lVar13 = *unaff_RSI;
            local_f8 = dVar21;
            if (lVar13 == lVar18) {
              if (cVar5 != '\0') {
                if (((char)unaff_RSI[1] == '\0') && (lVar18 != 0)) {
                  cVar5 = '\x01';
                  FUN_00d50b00();
                  goto LAB_01a79490;
                }
                goto LAB_01a7949e;
              }
              if (lVar18 == 0) goto LAB_01a794ad;
LAB_01a79538:
              iVar7 = FUN_01d3a5a0();
              bVar19 = iVar7 != 6;
              if (lVar18 == 0) goto LAB_01a7959e;
              if (iVar7 == 6) goto LAB_01a7a0e7;
            }
            else {
              lVar2 = unaff_RSI[1];
              if ((cVar5 != '\0') && (lVar18 != 0)) {
                FUN_00d50b00();
              }
              *unaff_RSI = lVar18;
              if (((char)lVar2 != '\0') && (lVar13 != 0)) {
                FUN_00d50b20();
              }
LAB_01a79490:
              *(char *)(unaff_RSI + 1) = cVar5;
LAB_01a7949e:
              lVar18 = *unaff_RSI;
              if (lVar18 != 0) goto LAB_01a79538;
LAB_01a794ad:
              (**(code **)(*local_90 + 0x658))();
              lVar2 = local_e8;
              lVar13 = *unaff_RSI;
              if (lVar13 == local_e8) {
                if (((char)unaff_RSI[1] == '\0') && (local_e8 != 0)) {
                  if (local_e0 == '\0') {
                    FUN_00d50b00();
                    goto LAB_01a79588;
                  }
                  goto LAB_01a79524;
                }
LAB_01a79530:
                lVar13 = *unaff_RSI;
              }
              else {
                lVar3 = unaff_RSI[1];
                if (local_e0 != '\0') {
                  *unaff_RSI = local_e8;
                  if (((char)lVar3 != '\0') && (lVar13 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01a79524:
                  *(undefined1 *)(unaff_RSI + 1) = 1;
                  local_e0 = '\0';
                  goto LAB_01a79530;
                }
                if (local_e8 != 0) {
                  FUN_00d50b00();
                }
                *unaff_RSI = lVar2;
                if (((char)lVar3 != '\0') && (lVar13 != 0)) {
                  FUN_00d50b20();
                }
LAB_01a79588:
                *(undefined1 *)(unaff_RSI + 1) = 1;
                lVar13 = *unaff_RSI;
              }
              if (lVar13 != 0) goto LAB_01a79538;
              bVar19 = false;
LAB_01a7959e:
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if (!bVar19) goto LAB_01a7a0e7;
            }
            iVar7 = FUN_01d3a5a0();
            dVar21 = local_f8;
            if (iVar7 == 5) {
              FUN_01d3abf0();
              FUN_01e466c0();
              local_128 = (double)(**(code **)(*local_90 + 0x930))();
              local_128 = local_128 - local_130;
              local_48 = local_128 - local_f8;
              if (0.0 <= local_48) {
                FUN_00ca1380();
                plVar16 = local_78;
                local_b8 = (longlong *)CONCAT71(local_b8._1_7_,local_70[0]);
                pplVar11 = (longlong **)local_70;
                if (local_70[0] == '\0') {
                  pplVar11 = &local_b8;
                }
                *(undefined1 *)pplVar11 = 0;
                if ((local_70[0] != '\0') && (plVar16 != (longlong *)0x0)) {
                  pplVar11 = (longlong **)FUN_00d50b20();
                }
                if ((char)local_b8 == '\0') {
                  if (plVar16 != (longlong *)0x0) {
                    FUN_00d50b00();
                    goto LAB_01a798ad;
                  }
                }
                else if (plVar16 != (longlong *)0x0) {
LAB_01a798ad:
                  local_70[0] = '\0';
                  local_78 = (longlong *)0x0;
                  local_68 = plVar16;
                  local_60 = 0xffffffff;
                  local_58 = 0;
                  local_60._4_4_ = 0;
                  while( true ) {
                    if (local_60._4_4_ != 0) {
                      if (local_60._4_4_ < 1) {
                        iVar7 = -local_60._4_4_;
                      }
                      else {
                        iVar7 = (int)local_60 - local_60._4_4_;
                        local_60 = CONCAT44(local_60._4_4_,iVar7);
                        FUN_00d23690();
                        local_58 = local_58 + local_60._4_4_;
                        iVar7 = 0;
                      }
                      local_60 = CONCAT44(iVar7,(int)local_60);
                    }
                    lVar13 = (longlong)(int)local_60;
                    iVar7 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,iVar7);
                    if (*(int *)((longlong)local_68 + 0xc) <= iVar7) break;
                    local_78 = *(longlong **)(local_68[2] + 8 + lVar13 * 8);
                    lVar13 = local_78[2];
                    if (lVar13 != 0) {
                      FUN_00d50b00();
                      local_b0[0] = '\0';
                      local_b8 = (longlong *)0x0;
                      local_a0 = 0xffffffff;
                      local_98 = 0;
                      local_a8 = lVar13;
                      while( true ) {
                        lVar13 = (longlong)(int)local_a0;
                        iVar7 = (int)local_a0 + 1;
                        local_a0 = CONCAT44(local_a0._4_4_,iVar7);
                        if (*(int *)(local_a8 + 0xc) <= iVar7) break;
                        local_b8 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + 8 + lVar13 * 8);
                        dVar21 = (double)FUN_01a82d70(local_48);
                        local_210 = local_128 - (local_48 - dVar21);
                        if (local_48 <= dVar21) {
                          dVar21 = local_48;
                        }
                        local_48 = dVar21;
                        if (local_a0._4_4_ != 0) {
                          if (local_a0 < 0) {
                            iVar7 = -local_a0._4_4_;
                          }
                          else {
                            local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - local_a0._4_4_);
                            FUN_00d23690();
                            local_98 = local_98 + local_a0._4_4_;
                            iVar7 = 0;
                          }
                          local_a0 = CONCAT44(iVar7,(int)local_a0);
                        }
                      }
                      FUN_01a80d20();
                      FUN_00d50b20();
                    }
                  }
                  param_1 = local_68;
                  pplVar11 = (longlong **)FUN_01a814c0();
                  if (plVar16 != (longlong *)0x0) {
                    pplVar11 = (longlong **)FUN_00d50b20();
                  }
                }
              }
              else {
                FUN_00ca1380();
                plVar16 = local_78;
                local_b8 = (longlong *)CONCAT71(local_b8._1_7_,local_70[0]);
                pplVar11 = (longlong **)local_70;
                if (local_70[0] == '\0') {
                  pplVar11 = &local_b8;
                }
                *(undefined1 *)pplVar11 = 0;
                if ((local_70[0] != '\0') && (plVar16 != (longlong *)0x0)) {
                  pplVar11 = (longlong **)FUN_00d50b20();
                }
                if ((char)local_b8 == '\0') {
                  if (plVar16 != (longlong *)0x0) {
                    FUN_00d50b00();
                    goto LAB_01a796ea;
                  }
                }
                else if (plVar16 != (longlong *)0x0) {
LAB_01a796ea:
                  local_70[0] = '\0';
                  local_78 = (longlong *)0x0;
                  local_68 = plVar16;
                  local_60 = 0xffffffff;
                  local_58 = 0;
                  local_60._4_4_ = 0;
                  while( true ) {
                    if (local_60._4_4_ != 0) {
                      if (local_60._4_4_ < 1) {
                        iVar7 = -local_60._4_4_;
                      }
                      else {
                        iVar7 = (int)local_60 - local_60._4_4_;
                        local_60 = CONCAT44(local_60._4_4_,iVar7);
                        FUN_00d23690();
                        local_58 = local_58 + local_60._4_4_;
                        iVar7 = 0;
                      }
                      local_60 = CONCAT44(iVar7,(int)local_60);
                    }
                    lVar13 = (longlong)(int)local_60;
                    iVar7 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,iVar7);
                    if (*(int *)((longlong)local_68 + 0xc) <= iVar7) break;
                    local_78 = *(longlong **)(local_68[2] + 8 + lVar13 * 8);
                    lVar13 = local_78[2];
                    if (lVar13 != 0) {
                      FUN_00d50b00();
                      local_b0[0] = '\0';
                      local_b8 = (longlong *)0x0;
                      local_a0 = 0xffffffff;
                      local_98 = 0;
                      local_a8 = lVar13;
                      while( true ) {
                        lVar13 = (longlong)(int)local_a0;
                        iVar7 = (int)local_a0 + 1;
                        local_a0 = CONCAT44(local_a0._4_4_,iVar7);
                        if (*(int *)(local_a8 + 0xc) <= iVar7) break;
                        local_b8 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + 8 + lVar13 * 8);
                        dVar21 = (double)FUN_01a82d70(local_48);
                        local_210 = local_128 - (local_48 - dVar21);
                        if (dVar21 <= local_48) {
                          dVar21 = local_48;
                        }
                        local_48 = dVar21;
                        if (local_a0._4_4_ != 0) {
                          if (local_a0 < 0) {
                            iVar7 = -local_a0._4_4_;
                          }
                          else {
                            local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - local_a0._4_4_);
                            FUN_00d23690();
                            local_98 = local_98 + local_a0._4_4_;
                            iVar7 = 0;
                          }
                          local_a0 = CONCAT44(iVar7,(int)local_a0);
                        }
                      }
                      FUN_01a80d20();
                      FUN_00d50b20();
                    }
                  }
                  param_1 = local_68;
                  pplVar11 = (longlong **)FUN_01a814c0();
                  if (plVar16 != (longlong *)0x0) {
                    pplVar11 = (longlong **)FUN_00d50b20();
                  }
                }
              }
              local_10c = (undefined4)CONCAT71((int7)((ulonglong)pplVar11 >> 8),1);
              dVar21 = local_f8;
              if (local_48 != DAT_023d7d68) {
                pvVar12 = _pthread_getspecific((pthread_key_t)param_1);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274b60();
                plVar16 = local_78;
                if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar16 != (longlong *)0x0) {
                  FUN_00ca1380();
                  plVar16 = local_78;
                  local_b8 = (longlong *)CONCAT71(local_b8._1_7_,local_70[0]);
                  pplVar11 = (longlong **)local_70;
                  if (local_70[0] == '\0') {
                    pplVar11 = &local_b8;
                  }
                  *(undefined1 *)pplVar11 = 0;
                  if ((local_70[0] != '\0') && (plVar16 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  dVar21 = local_128;
                  if ((char)local_b8 == '\0') {
                    if (plVar16 == (longlong *)0x0) goto LAB_01a79400;
                    FUN_00d50b00();
                  }
                  else if (plVar16 == (longlong *)0x0) goto LAB_01a79400;
                  local_f8 = local_f8 + local_130;
                  dVar21 = local_130 + local_210;
                  local_70[0] = '\0';
                  local_78 = (longlong *)0x0;
                  local_208 = plVar16;
                  local_68 = plVar16;
                  local_60 = 0xffffffff;
                  local_58 = 0;
                  local_60._4_4_ = 0;
                  local_250 = dVar21;
                  while( true ) {
                    if (local_60._4_4_ != 0) {
                      if (local_60._4_4_ < 1) {
                        iVar7 = -local_60._4_4_;
                      }
                      else {
                        iVar7 = (int)local_60 - local_60._4_4_;
                        local_60 = CONCAT44(local_60._4_4_,iVar7);
                        dVar21 = (double)FUN_00d23690();
                        local_58 = local_58 + local_60._4_4_;
                        iVar7 = 0;
                      }
                      local_60 = CONCAT44(iVar7,(int)local_60);
                    }
                    lVar13 = (longlong)(int)local_60;
                    iVar7 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,iVar7);
                    if (*(int *)((longlong)local_68 + 0xc) <= iVar7) break;
                    local_78 = *(longlong **)(local_68[2] + 8 + lVar13 * 8);
                    lVar13 = local_78[2];
                    if (lVar13 != 0) {
                      dVar21 = (double)FUN_00d50b00();
                    }
                    local_2b0 = 1;
                    local_2a8 = *local_d0;
                    local_2a0 = 0;
                    local_2b8 = lVar13;
                    FUN_01a77d30(dVar21,&local_2a8);
                    plVar16 = local_b8;
                    local_50[0] = local_b0[0];
                    pcVar15 = local_50;
                    pcVar14 = local_b0;
                    if (local_b0[0] == '\0') {
                      pcVar14 = pcVar15;
                    }
                    *pcVar14 = '\0';
                    if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pVar17 = (pthread_key_t)pcVar15;
                    if (lVar13 != 0) {
                      FUN_00d50b20();
                    }
                    if (plVar16 == (longlong *)0x0) {
                      lVar13 = local_78[2];
                      if (lVar13 != 0) {
                        FUN_00d50b00();
                      }
                      FUN_00d23310();
                      plVar1 = local_b8;
                      local_80[0] = local_b0[0];
                      pcVar15 = local_80;
                      pcVar14 = local_b0;
                      if (local_b0[0] == '\0') {
                        pcVar14 = pcVar15;
                      }
                      *pcVar14 = '\0';
                      if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      pVar17 = (pthread_key_t)pcVar15;
                      FUN_01a81b80();
                      if (local_220 != (longlong *)0x0) {
                        pcVar15 = local_50;
                        if (local_218[0] != '\0') {
                          local_50[0] = '\x01';
                          pcVar15 = local_218;
                        }
                        *pcVar15 = '\0';
                        plVar16 = local_220;
                        if (local_218[0] != '\0') {
                          FUN_00d50b20();
                        }
                      }
                      if ((local_80[0] != '\0') && (plVar1 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (lVar13 != 0) {
                        FUN_00d50b20();
                      }
                    }
                    lVar13 = local_78[3];
                    if (lVar13 != 0) {
                      FUN_00d50b00();
                    }
                    pvVar12 = _pthread_getspecific(pVar17);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01266fe0();
                    pvVar12 = _pthread_getspecific(pVar17);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_48 = (double)FUN_012f8e60(local_f8);
                    if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pvVar12 = _pthread_getspecific(pVar17);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01266fe0();
                    pvVar12 = _pthread_getspecific(pVar17);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_258 = (double)FUN_012f8e60(local_250);
                    if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_290 = 0;
                    local_298 = lVar13;
                    dVar21 = (double)FUN_01a7d860(local_258 - local_48);
                    if (lVar13 != 0) {
                      dVar21 = (double)FUN_00d50b20();
                    }
                    if ((local_50[0] != '\0') && (plVar16 != (longlong *)0x0)) {
                      dVar21 = (double)FUN_00d50b20();
                    }
                  }
                  param_1 = local_68;
                  FUN_01a814c0();
                  FUN_00d50b20();
                  dVar21 = local_128;
                  goto LAB_01a79400;
                }
                FUN_00ca1380();
                plVar16 = local_78;
                local_b8 = (longlong *)CONCAT71(local_b8._1_7_,local_70[0]);
                pplVar11 = (longlong **)local_70;
                if (local_70[0] == '\0') {
                  pplVar11 = &local_b8;
                }
                *(undefined1 *)pplVar11 = 0;
                if ((local_70[0] != '\0') && (plVar16 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                dVar21 = local_128;
                if ((char)local_b8 == '\0') {
                  if (plVar16 == (longlong *)0x0) goto LAB_01a79400;
                  FUN_00d50b00();
                }
                else if (plVar16 == (longlong *)0x0) goto LAB_01a79400;
                local_70[0] = '\0';
                local_78 = (longlong *)0x0;
                local_68 = plVar16;
                local_60 = 0xffffffff;
                local_58 = 0;
                local_60._4_4_ = 0;
                while( true ) {
                  if (local_60._4_4_ != 0) {
                    if (local_60._4_4_ < 1) {
                      iVar7 = -local_60._4_4_;
                    }
                    else {
                      iVar7 = (int)local_60 - local_60._4_4_;
                      local_60 = CONCAT44(local_60._4_4_,iVar7);
                      FUN_00d23690();
                      local_58 = local_58 + local_60._4_4_;
                      iVar7 = 0;
                    }
                    local_60 = CONCAT44(iVar7,(int)local_60);
                  }
                  lVar13 = (longlong)(int)local_60;
                  iVar7 = (int)local_60 + 1;
                  local_60 = CONCAT44(local_60._4_4_,iVar7);
                  if (*(int *)((longlong)local_68 + 0xc) <= iVar7) break;
                  local_78 = *(longlong **)(local_68[2] + 8 + lVar13 * 8);
                  lVar13 = local_78[3];
                  if (lVar13 != 0) {
                    FUN_00d50b00();
                  }
                  local_280 = 1;
                  local_288 = lVar13;
                  FUN_01a7d860(local_48);
                  if (lVar13 != 0) {
                    FUN_00d50b20();
                  }
                }
                param_1 = local_68;
                FUN_01a814c0();
                FUN_00d50b20();
                dVar21 = local_128;
              }
            }
            goto LAB_01a79400;
          }
        }
        uVar8 = FUN_01d3b590();
        if ((char)((uVar8 & 4) >> 2) == '\0' && !bVar19) {
          FUN_01a7c080();
        }
        (**(code **)(*local_90 + 0xe10))();
        local_78 = (longlong *)*local_d0;
        local_70[0] = '\0';
        cVar5 = FUN_00d24090();
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0[0] != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          uVar10 = FUN_01d3b590();
          uVar20 = extraout_XMM0_Qa_03;
          if ((uVar10 & 4) == 0) {
            uVar20 = (**(code **)(*local_90 + 0xda0))();
          }
          local_180 = *local_d0;
          local_178 = '\0';
          (**(code **)(*local_90 + 0xda8))(uVar20,1);
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar10 = FUN_01d3b590();
          if ((!bVar19 && (uVar10 & 4) != 0) && (cVar5 = FUN_01a87c60(), cVar5 == '\0')) {
            local_170 = *local_d0;
            local_168 = '\0';
            (**(code **)(*local_90 + 0xdb0))(extraout_XMM0_Qa_02,1);
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        goto LAB_01a7a19e;
      }
      uVar10 = FUN_01d3b590();
      uVar20 = extraout_XMM0_Qa_01;
      if ((uVar10 & 4) == 0) {
        (**(code **)(*local_90 + 0xda0))();
        uVar20 = FUN_01a7c080();
      }
    }
    goto LAB_01a7a1a6;
  }
  if (*local_d0 != 0) {
    local_1f8 = '\0';
    local_200 = *local_d0;
    FUN_0039e8b0();
    local_108 = local_78;
    local_100 = 0;
    if (local_70[0] == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70[0] = '\0';
    }
    local_100 = '\x01';
    cVar5 = (**(code **)(*unaff_RDI + 0x488))();
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') goto LAB_01a78c3e;
  }
  bVar19 = false;
  uVar9 = 0;
  goto LAB_01a7a226;
LAB_01a7a0e7:
  local_190 = *unaff_RSI;
  local_188 = '\0';
  FUN_0199eb40();
  cVar5 = local_d1;
  plVar16 = local_f0;
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_10c == '\0' && cVar5 == '\0') && (uVar10 = FUN_01d3b590(), (uVar10 & 4) == 0)) {
    uVar20 = FUN_01a7c080();
    local_278 = plVar4;
    local_270 = 0;
    local_268 = plVar16;
    local_260 = 0;
    FUN_01a7cd20(uVar20,&local_268);
  }
  FUN_00d50b20();
LAB_01a7a19e:
  uVar20 = FUN_00d50b20();
LAB_01a7a1a6:
  bVar19 = false;
LAB_01a7a1a9:
  local_160 = *unaff_RSI;
  local_158 = '\0';
  local_150 = *local_d0;
  local_148 = '\0';
  uVar9 = FUN_01a58d30(uVar20,&local_150);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
LAB_01a7a226:
  if (bVar19) {
    return uVar9;
  }
LAB_01a7a22b:
  FUN_00d50b20();
  return uVar9;
}


