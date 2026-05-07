// ===================================================================
// MUTimeHandleToolViewInfo — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (4):
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


// ============================================================
// 01a78ad0
// ============================================================
// Function: FUN_01a78ad0
// Address: 01a78ad0
// Size: 7003 bytes
// Class: MUTimeHandleToolViewInfo
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


uint32_t FUN_01a78ad0(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  int64_t **pplVar11;
  void *pvVar12;
  int64_t lVar13;
  char *pcVar14;
  char *pcVar15;
  int64_t *plVar16;
  void* pVar17;
  int64_t lVar18;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar19;
  uint64_t uVar20;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  double dVar21;
  uint64_t extraout_XMM0_Qa_04;
  int64_t *local_338;
  uint8_t local_330;
  int64_t *local_328;
  uint8_t local_320;
  int64_t *local_318;
  uint8_t local_310;
  int64_t *local_308;
  uint8_t local_300;
  int64_t *local_2f8;
  uint8_t local_2f0;
  int64_t *local_2e8;
  uint8_t local_2e0;
  int64_t *local_2d8;
  uint8_t local_2d0;
  int64_t *local_2c8;
  uint8_t local_2c0;
  int64_t local_2b8;
  uint8_t local_2b0;
  int64_t local_2a8;
  uint8_t local_2a0;
  int64_t local_298;
  uint8_t local_290;
  int64_t local_288;
  uint8_t local_280;
  int64_t *local_278;
  uint8_t local_270;
  int64_t *local_268;
  uint8_t local_260;
  double local_258;
  double local_250;
  int64_t *local_248;
  uint8_t local_238;
  uint8_t local_230 [8];
  uint8_t local_228;
  int64_t *local_220;
  char local_218 [8];
  double local_210;
  int64_t *local_208;
  int64_t local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  double local_130;
  double local_128;
  uint32_t local_10c;
  int64_t *local_108;
  char local_100;
  double local_f8;
  int64_t *local_f0;
  int64_t local_e8;
  char local_e0;
  char local_d1;
  int64_t *local_d0;
  int64_t *local_b8;
  char local_b0 [8];
  int64_t local_a8;
  uint64_t local_a0;
  int local_98;
  int64_t *local_90;
  char local_80 [8];
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  char local_50 [8];
  double local_48;
  
  local_248 = param_1;
  local_d0 = param_2;
  uVar20 = FUN_01a58dc0();
  local_90 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a78b50;
    }
LAB_01a78bb9:
    bVar19 = true;
    goto LAB_01a7a1a9;
  }
  if (local_78 == (int64_t *)0x0) goto LAB_01a78bb9;
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
          if (local_78 == (int64_t *)0x0) {
            uVar9 = 1;
            goto LAB_01a7a22b;
          }
          FUN_00d50b00();
        }
        else if (local_78 == (int64_t *)0x0) {
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
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a82400(local_128);
        plVar4 = local_78;
        if ((((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar7 = FUN_01d3b620();
        if (iVar7 == 2) {
          if (plVar4 == (int64_t *)0x0) {
            uVar10 = FUN_01d3b590();
            if ((uVar10 & 4) == 0) {
              FUN_01a7c080();
            }
            (**(code **)(*local_90 + 0x9b8))(local_130,0);
            plVar16 = local_78;
            if (local_70[0] == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a7a270;
              }
            }
            else if (local_78 != (int64_t *)0x0) {
LAB_01a7a270:
              local_70[0] = '\0';
              local_78 = (int64_t *)0x0;
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
                lVar13 = (int64_t)(int)local_60;
                iVar7 = (int)local_60 + 1;
                local_60 = CONCAT44(local_60._4_4_,iVar7);
                if (*(int *)((int64_t)local_68 + 0xc) <= iVar7) break;
                lVar18 = local_68[2];
                local_78 = *(int64_t **)(lVar18 + 8 + lVar13 * 8);
                (**(code **)(*local_90 + 0xe20))();
                pVar17 = (void*)lVar18;
                local_b8 = local_78;
                local_b0[0] = '\0';
                cVar5 = FUN_00d24090();
                uVar20 = extraout_XMM0_Qa_04;
                if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                  uVar20 = FUN_00d50b20();
                }
                plVar16 = local_78;
                if (cVar5 == '\0') {
                  plVar1 = (int64_t *)*local_d0;
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
                    if (local_b8 == (int64_t *)0x0) goto LAB_01a7a3e8;
                    FUN_00d50b00();
LAB_01a7a428:
                    if (plVar16 == (int64_t *)0x0) goto LAB_01a7a2a3;
                  }
                  else {
                    if (local_b8 != (int64_t *)0x0) goto LAB_01a7a428;
LAB_01a7a3e8:
                    pvVar12 = _pthread_getspecific(pVar17);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar5 = FUN_01263cf0();
                    if (cVar5 != '\0') goto LAB_01a7a428;
                    plVar16 = (int64_t *)FUN_00e8fc40();
                    FUN_0086a5a0();
                    (**(code **)(*plVar16 + 0x18))();
                    local_1f0 = local_78;
                    local_1e8 = '\0';
                    local_138 = 0;
                    if (this_ptr != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    local_138 = '\x01';
                    pVar17 = 1;
                    local_140 = this_ptr;
                    FUN_01a81ae0(1,&local_140);
                    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_1d8 = '\0';
                    local_1e0 = plVar16;
                    (**(code **)(*local_90 + 0x450))();
                    if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_b0[0] = '\0';
                    local_b8 = plVar16;
                    FUN_00d21140();
                    if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
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
                  if ((local_b0[0] == '\0') && (local_b8 != (int64_t *)0x0)) {
                    uVar20 = FUN_00d50b00();
                  }
                  if (lVar13 != 0) {
                    uVar20 = FUN_00d50b20();
                  }
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    uVar20 = FUN_00d50b20();
                  }
                  if (plVar1 != (int64_t *)0x0) {
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
            if (local_78 != (int64_t *)0x0) {
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
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
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
          if (plVar4 != (int64_t *)0x0) {
            local_1d0 = plVar4;
            local_1c8 = '\0';
            cVar5 = FUN_01a87be0();
            if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
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
                local_78 = (int64_t *)*local_d0;
                local_70[0] = '\0';
                cVar6 = FUN_00d24090();
                if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
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
                local_78 = (int64_t *)*local_d0;
                local_70[0] = '\0';
                cVar6 = FUN_00d24090();
                if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
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
            lVar13 = *arg1;
            local_f8 = dVar21;
            if (lVar13 == lVar18) {
              if (cVar5 != '\0') {
                if (((char)arg1[1] == '\0') && (lVar18 != 0)) {
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
              lVar2 = arg1[1];
              if ((cVar5 != '\0') && (lVar18 != 0)) {
                FUN_00d50b00();
              }
              *arg1 = lVar18;
              if (((char)lVar2 != '\0') && (lVar13 != 0)) {
                FUN_00d50b20();
              }
LAB_01a79490:
              *(char *)(arg1 + 1) = cVar5;
LAB_01a7949e:
              lVar18 = *arg1;
              if (lVar18 != 0) goto LAB_01a79538;
LAB_01a794ad:
              (**(code **)(*local_90 + 0x658))();
              lVar2 = local_e8;
              lVar13 = *arg1;
              if (lVar13 == local_e8) {
                if (((char)arg1[1] == '\0') && (local_e8 != 0)) {
                  if (local_e0 == '\0') {
                    FUN_00d50b00();
                    goto LAB_01a79588;
                  }
                  goto LAB_01a79524;
                }
LAB_01a79530:
                lVar13 = *arg1;
              }
              else {
                lVar3 = arg1[1];
                if (local_e0 != '\0') {
                  *arg1 = local_e8;
                  if (((char)lVar3 != '\0') && (lVar13 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01a79524:
                  *(void*)(arg1 + 1) = 1;
                  local_e0 = '\0';
                  goto LAB_01a79530;
                }
                if (local_e8 != 0) {
                  FUN_00d50b00();
                }
                *arg1 = lVar2;
                if (((char)lVar3 != '\0') && (lVar13 != 0)) {
                  FUN_00d50b20();
                }
LAB_01a79588:
                *(void*)(arg1 + 1) = 1;
                lVar13 = *arg1;
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
                local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_70[0]);
                pplVar11 = (int64_t **)local_70;
                if (local_70[0] == '\0') {
                  pplVar11 = &local_b8;
                }
                *(void*)pplVar11 = 0;
                if ((local_70[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
                  pplVar11 = (int64_t **)FUN_00d50b20();
                }
                if ((char)local_b8 == '\0') {
                  if (plVar16 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    goto LAB_01a798ad;
                  }
                }
                else if (plVar16 != (int64_t *)0x0) {
LAB_01a798ad:
                  local_70[0] = '\0';
                  local_78 = (int64_t *)0x0;
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
                    lVar13 = (int64_t)(int)local_60;
                    iVar7 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,iVar7);
                    if (*(int *)((int64_t)local_68 + 0xc) <= iVar7) break;
                    local_78 = *(int64_t **)(local_68[2] + 8 + lVar13 * 8);
                    lVar13 = local_78[2];
                    if (lVar13 != 0) {
                      FUN_00d50b00();
                      local_b0[0] = '\0';
                      local_b8 = (int64_t *)0x0;
                      local_a0 = 0xffffffff;
                      local_98 = 0;
                      local_a8 = lVar13;
                      while( true ) {
                        lVar13 = (int64_t)(int)local_a0;
                        iVar7 = (int)local_a0 + 1;
                        local_a0 = CONCAT44(local_a0._4_4_,iVar7);
                        if (*(int *)(local_a8 + 0xc) <= iVar7) break;
                        local_b8 = *(int64_t **)(*(int64_t *)(local_a8 + 0x10) + 8 + lVar13 * 8);
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
                  pplVar11 = (int64_t **)FUN_01a814c0();
                  if (plVar16 != (int64_t *)0x0) {
                    pplVar11 = (int64_t **)FUN_00d50b20();
                  }
                }
              }
              else {
                FUN_00ca1380();
                plVar16 = local_78;
                local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_70[0]);
                pplVar11 = (int64_t **)local_70;
                if (local_70[0] == '\0') {
                  pplVar11 = &local_b8;
                }
                *(void*)pplVar11 = 0;
                if ((local_70[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
                  pplVar11 = (int64_t **)FUN_00d50b20();
                }
                if ((char)local_b8 == '\0') {
                  if (plVar16 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    goto LAB_01a796ea;
                  }
                }
                else if (plVar16 != (int64_t *)0x0) {
LAB_01a796ea:
                  local_70[0] = '\0';
                  local_78 = (int64_t *)0x0;
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
                    lVar13 = (int64_t)(int)local_60;
                    iVar7 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,iVar7);
                    if (*(int *)((int64_t)local_68 + 0xc) <= iVar7) break;
                    local_78 = *(int64_t **)(local_68[2] + 8 + lVar13 * 8);
                    lVar13 = local_78[2];
                    if (lVar13 != 0) {
                      FUN_00d50b00();
                      local_b0[0] = '\0';
                      local_b8 = (int64_t *)0x0;
                      local_a0 = 0xffffffff;
                      local_98 = 0;
                      local_a8 = lVar13;
                      while( true ) {
                        lVar13 = (int64_t)(int)local_a0;
                        iVar7 = (int)local_a0 + 1;
                        local_a0 = CONCAT44(local_a0._4_4_,iVar7);
                        if (*(int *)(local_a8 + 0xc) <= iVar7) break;
                        local_b8 = *(int64_t **)(*(int64_t *)(local_a8 + 0x10) + 8 + lVar13 * 8);
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
                  pplVar11 = (int64_t **)FUN_01a814c0();
                  if (plVar16 != (int64_t *)0x0) {
                    pplVar11 = (int64_t **)FUN_00d50b20();
                  }
                }
              }
              local_10c = (uint32_t)CONCAT71((int7)((uint64_t)pplVar11 >> 8),1);
              dVar21 = local_f8;
              if (local_48 != g_023d7d68) {
                pvVar12 = _pthread_getspecific((void*)param_1);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274b60();
                plVar16 = local_78;
                if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar16 != (int64_t *)0x0) {
                  FUN_00ca1380();
                  plVar16 = local_78;
                  local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_70[0]);
                  pplVar11 = (int64_t **)local_70;
                  if (local_70[0] == '\0') {
                    pplVar11 = &local_b8;
                  }
                  *(void*)pplVar11 = 0;
                  if ((local_70[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  dVar21 = local_128;
                  if ((char)local_b8 == '\0') {
                    if (plVar16 == (int64_t *)0x0) goto LAB_01a79400;
                    FUN_00d50b00();
                  }
                  else if (plVar16 == (int64_t *)0x0) goto LAB_01a79400;
                  local_f8 = local_f8 + local_130;
                  dVar21 = local_130 + local_210;
                  local_70[0] = '\0';
                  local_78 = (int64_t *)0x0;
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
                    lVar13 = (int64_t)(int)local_60;
                    iVar7 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,iVar7);
                    if (*(int *)((int64_t)local_68 + 0xc) <= iVar7) break;
                    local_78 = *(int64_t **)(local_68[2] + 8 + lVar13 * 8);
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
                    if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    pVar17 = (void*)pcVar15;
                    if (lVar13 != 0) {
                      FUN_00d50b20();
                    }
                    if (plVar16 == (int64_t *)0x0) {
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
                      if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      pVar17 = (void*)pcVar15;
                      FUN_01a81b80();
                      if (local_220 != (int64_t *)0x0) {
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
                      if ((local_80[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
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
                    if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
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
                    if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_290 = 0;
                    local_298 = lVar13;
                    dVar21 = (double)FUN_01a7d860(local_258 - local_48);
                    if (lVar13 != 0) {
                      dVar21 = (double)FUN_00d50b20();
                    }
                    if ((local_50[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
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
                local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_70[0]);
                pplVar11 = (int64_t **)local_70;
                if (local_70[0] == '\0') {
                  pplVar11 = &local_b8;
                }
                *(void*)pplVar11 = 0;
                if ((local_70[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                dVar21 = local_128;
                if ((char)local_b8 == '\0') {
                  if (plVar16 == (int64_t *)0x0) goto LAB_01a79400;
                  FUN_00d50b00();
                }
                else if (plVar16 == (int64_t *)0x0) goto LAB_01a79400;
                local_70[0] = '\0';
                local_78 = (int64_t *)0x0;
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
                  lVar13 = (int64_t)(int)local_60;
                  iVar7 = (int)local_60 + 1;
                  local_60 = CONCAT44(local_60._4_4_,iVar7);
                  if (*(int *)((int64_t)local_68 + 0xc) <= iVar7) break;
                  local_78 = *(int64_t **)(local_68[2] + 8 + lVar13 * 8);
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
        local_78 = (int64_t *)*local_d0;
        local_70[0] = '\0';
        cVar5 = FUN_00d24090();
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
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
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70[0] = '\0';
    }
    local_100 = '\x01';
    cVar5 = (**(code **)(*this_ptr + 0x488))();
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
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
  local_190 = *arg1;
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
  local_160 = *arg1;
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



// ============================================================
// 01a77f70
// ============================================================
// Function: FUN_01a77f70
// Address: 01a77f70
// Size: 1802 bytes
// Class: MUTimeHandleToolViewInfo
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


void FUN_01a77f70(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t *puVar12;
  uint uVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t local_118;
  uint64_t local_110;
  int64_t *local_108;
  uint64_t local_100;
  uint32_t local_f8;
  uint64_t local_90;
  char local_88;
  uint64_t local_80;
  uint64_t local_78;
  int local_70;
  uint local_64;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  FUN_00c9fe20();
  puVar12 = &local_90;
  if ((char)local_110 != '\0') {
    puVar12 = &local_110;
  }
  local_90 = CONCAT71(local_90._1_7_,(char)local_110);
  *(void*)puVar12 = 0;
  if (((char)local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_90 == '\0') {
    if (local_118 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = local_90 & 0xffffffffffffff00;
  }
  FUN_00243390();
  plVar14 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_118 != 0) {
    FUN_00d50b20();
  }
  if (plVar14 != (int64_t *)0x0) {
    local_110._0_1_ = 0;
    local_108 = plVar14;
    local_f8 = 0;
    local_100 = 0;
    if (0 < *(int *)((int64_t)plVar14 + 0xc)) {
      uVar13 = 0;
      local_38 = plVar14;
      do {
        plVar1 = *(int64_t **)(plVar14[2] + (uint64_t)uVar13 * 8);
        uVar9 = uVar13;
        FUN_01a78a20();
        plVar4 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        pvVar6 = _pthread_getspecific(uVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126e7e0();
        plVar15 = local_60;
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar15 == (int64_t *)0x0) {
          bVar3 = false;
          plVar15 = (int64_t *)0x0;
        }
        else {
          pvVar6 = _pthread_getspecific(uVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126e7e0();
          pvVar6 = _pthread_getspecific(uVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013f2b00();
          plVar15 = local_60;
          if (local_60 == (int64_t *)0x0) {
            plVar15 = (int64_t *)0x0;
            bVar3 = false;
          }
          else if (local_58 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            bVar3 = true;
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = plVar4[2];
        if (lVar7 != 0) {
          FUN_00d50b00();
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_64 = 0;
          local_50 = lVar7;
          while( true ) {
            lVar7 = (int64_t)(int)local_48;
            iVar11 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar11);
            if (*(int *)(local_50 + 0xc) <= iVar11) break;
            lVar10 = *(int64_t *)(local_50 + 0x10);
            local_60 = *(int64_t **)(lVar10 + 8 + lVar7 * 8);
            uVar8 = FUN_01e40eb0();
            uVar2 = local_90;
            if ((local_88 != '\0') && (local_90 != 0)) {
              uVar8 = FUN_00d50b20();
            }
            if (uVar2 == 0) {
              local_64 = (uint)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
              break;
            }
            FUN_01a87f10();
            uVar2 = local_90;
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a78430;
              }
            }
            else if (local_90 != 0) {
LAB_01a78430:
              local_88 = '\0';
              local_90 = 0;
              local_80 = uVar2;
              local_78 = 0xffffffff;
              local_70 = 0;
              if (plVar15 == (int64_t *)0x0) {
                local_78 = 0;
                if (0 < *(int *)(uVar2 + 0xc)) {
                  local_90 = **(uint64_t **)(uVar2 + 0x10);
LAB_01a7859e:
                  local_64 = (uint)CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
                  (**(code **)(*local_60 + 0x620))();
                }
              }
              else {
                while( true ) {
                  lVar7 = (int64_t)(int)local_78;
                  iVar11 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar11);
                  if (*(int *)(local_80 + 0xc) <= iVar11) break;
                  lVar10 = *(int64_t *)(local_80 + 0x10);
                  uVar2 = *(uint64_t *)(lVar10 + 8 + lVar7 * 8);
                  local_90 = uVar2;
                  cVar5 = FUN_00d23d70();
                  if ((cVar5 == '\0') || (FUN_01a83c00(), uVar2 == 0)) goto LAB_01a7859e;
                  if (local_78._4_4_ != 0) {
                    if (local_78._4_4_ < 1) {
                      iVar11 = -local_78._4_4_;
                    }
                    else {
                      local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                      FUN_00d23690();
                      local_70 = local_70 + local_78._4_4_;
                      iVar11 = 0;
                    }
                    local_78 = CONCAT44(iVar11,(int)local_78);
                  }
                }
              }
              FUN_01a81420();
              FUN_00d50b20();
            }
            if ((local_64 & 1) != 0) break;
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar11 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar11 = 0;
              }
              local_48 = CONCAT44(iVar11,(int)local_48);
            }
          }
          FUN_01a80d20();
          FUN_00d50b20();
          plVar14 = local_38;
          if ((local_64 & 1) != 0) {
            local_58 = '\0';
            local_60 = plVar1;
            FUN_00ca13a0();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((bVar3) && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
        local_100 = CONCAT44(local_100._4_4_,uVar13);
      } while ((int)uVar13 < *(int *)((int64_t)plVar14 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a77500
// ============================================================
// Function: FUN_01a77500
// Address: 01a77500
// Size: 568 bytes
// Class: MUTimeHandleToolViewInfo
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


void FUN_01a77500(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b3008 == 0) || (g_028b3011 == '\0')) {
    FUN_00e8cb50();
    lVar5 = g_027e2888;
    if (g_028b3008 == 0) {
      if (g_027e2888 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(g_0241f3f0);
      lVar4 = g_028b3008;
      if (g_028b3008 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar4 = local_48;
        }
        bVar2 = g_028b3008 != 0;
        g_028b3008 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_48;
        }
      }
      if ((lVar4 != 0) && (g_028b3010 == '\0')) {
        g_028b3010 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_48;
      }
      if ((local_40 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      g_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b3008 == 0) {
      lVar5 = 0;
      goto LAB_01a776b9;
    }
  }
  lVar5 = g_028b3008;
  FUN_00d50b00();
LAB_01a776b9:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (int64_t *)this_ptr[9];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[9] = (int64_t)plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01a779a0
// ============================================================
// Function: FUN_01a779a0
// Address: 01a779a0
// Size: 652 bytes
// Class: MUTimeHandleToolViewInfo
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


int64_t * FUN_01a779a0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f5210();
  lVar1 = *param_2;
  cVar4 = FUN_00d23d70();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar6 = 0;
      while ((int)lVar6 < *(int *)(lVar1 + 0xc)) {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        lVar3 = *arg1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        if (local_68 == lVar3) {
          *(void*)(this_ptr + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar2;
          *(void*)(this_ptr + 1) = 1;
          FUN_001159b0();
          FUN_00d50b20();
          return this_ptr;
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 01a771f0
// ============================================================
// Function: FUN_01a771f0
// Address: 01a771f0
// Size: 523 bytes
// Class: MUTimeHandleToolViewInfo
// String references:
//   "MUTimeHandleToolViewInfo"
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


void FUN_01a771f0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_48;
  int64_t local_40;
  void*local_28;
  
  if ((g_027e2958 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e28a8 = FUN_00d4fe50();
    g_027e2890 = "MUTimeHandleToolViewInfo";
    g_027e2898 = 0x20;
    g_027e28a0 = FUN_01a80ad0;
    g_027e28b0 = 0;
    ram_00000000027e28b8 = 0;
    g_027e28c0 = 0;
    g_027e2938 = 0;
    ram_00000000027e2940 = 0;
    g_027e2948 = 0;
    g_027e294a = 1;
    g_027e28c8 = 0;
    ram_00000000027e28d0 = 0;
    g_027e28d8 = 0;
    ram_00000000027e28e0 = 0;
    g_027e28e8 = 0;
    ram_00000000027e28f0 = 0;
    g_027e28f8 = 0;
    ram_00000000027e2900 = 0;
    g_027e2908 = 0;
    ram_00000000027e2910 = 0;
    g_027e2918 = 0;
    ram_00000000027e2920 = 0;
    g_027e2928 = 0;
    ram_00000000027e2930 = 0;
    g_027e2953 = 0;
    g_027e294b = 0;
    ___cxa_guard_release();
  }
  if (g_027e294b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_01a80dc0();
    FUN_01a810f0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}

