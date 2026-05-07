// ===================================================================
// MUTextFieldDragAndEditHandler — Complete reconstructed pseudocode
// 16 functions
// ===================================================================

// Registered properties (28):
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


// ============================================================
// 01ba40f0
// ============================================================
// Function: FUN_01ba40f0
// Address: 01ba40f0
// Size: 2679 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


uint64_t FUN_01ba40f0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void *pvVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t *unaff_RBX;
  int64_t *arg1;
  bool bVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Db;
  uint64_t uVar15;
  float fVar16;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  uint8_t local_a8 [16];
  int local_94;
  int64_t local_88;
  char local_80;
  int64_t local_70;
  char local_68;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  local_b0 = param_2;
  uVar12 = FUN_01a58dc0();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
      goto LAB_01ba412f;
    }
    if (*local_b0 == 0) {
      uVar5 = 0;
      goto LAB_01ba4b6e;
    }
    goto LAB_01ba4ae8;
  }
LAB_01ba412f:
  if (*local_b0 == 0) {
    uVar5 = 0;
LAB_01ba4b61:
    if (plVar1 == (int64_t *)0x0) goto LAB_01ba4b6e;
  }
  else {
    if (local_58 == (int64_t *)0x0) {
LAB_01ba4ae8:
      local_c0 = *local_b0;
      local_b8 = '\0';
      uVar4 = FUN_01a58d30(uVar12,&local_c0);
      uVar5 = (uint64_t)uVar4;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01ba4b61;
    }
    cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_58))();
    if (cVar2 != '\0') {
      iVar3 = FUN_01d3a5a0();
      uVar12 = extraout_XMM0_Da;
      if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), uVar12 = extraout_XMM0_Da_00, iVar3 == 1)) {
        (**(code **)(*local_58 + 0x7b0))();
        if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*local_58 + 0xe30))();
        if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_94 = FUN_01d3b620();
        if (local_94 == 2) {
          uVar12 = extraout_XMM0_Da_01;
          if (local_58 != (int64_t *)0x0) {
            local_40 = -1;
            local_a8 = ZEXT816(0);
            iVar3 = 0;
            while (local_40 = local_40 + 1, local_40 < *(int *)((int64_t)local_58 + 0xc)) {
              pvVar8 = _pthread_getspecific((void*)local_58[2]);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar13 = (float)FUN_012660a0();
              local_a8._0_4_ = (float)local_a8._0_4_ + fVar13;
              iVar3 = iVar3 + -1;
            }
            plVar7 = local_58;
            FUN_001159b0();
            if (iVar3 == 0) {
              local_a8 = ZEXT816(0);
            }
            else {
              local_a8 = ZEXT416((uint)g_02390d00 &
                                 -(uint)((float)local_a8._0_4_ / (float)-iVar3 < g_0239011c) &
                                 -(uint)(g_02390118 < (float)local_a8._0_4_ / (float)-iVar3));
            }
            if (0 < *(int *)((int64_t)local_58 + 0xc)) {
              iVar3 = 0;
              do {
                pvVar8 = _pthread_getspecific((void*)plVar7);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01264240();
                if (local_70 == 0) {
                  cVar2 = '\0';
                }
                else {
                  pvVar8 = _pthread_getspecific((void*)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01264240();
                  pvVar8 = _pthread_getspecific((void*)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01334f30();
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_68 != '\0') && (local_70 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') {
                  pvVar8 = _pthread_getspecific((void*)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01266020(local_a8._0_4_);
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)((int64_t)local_58 + 0xc));
            }
            FUN_001159b0();
LAB_01ba4ac4:
            uVar12 = FUN_00d50b20();
            unaff_RBX = plVar1;
          }
        }
        else {
          FUN_01cf74c0();
          while( true ) {
            (**(code **)(*plVar1 + 0x658))();
            plVar7 = (int64_t *)*arg1;
            if (plVar7 != local_58) break;
            if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
              if (local_50 == '\0') {
                FUN_00d50b00();
                goto LAB_01ba44b0;
              }
LAB_01ba4467:
              *(void*)(arg1 + 1) = 1;
              local_50 = '\0';
            }
            if (*arg1 == 0) goto LAB_01ba48dc;
LAB_01ba44c8:
            iVar3 = FUN_01d3a5a0();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar3 == 6) goto LAB_01ba48f0;
            iVar3 = FUN_01d3a5a0();
            if (iVar3 == 5) {
              FUN_01d3abf0();
              uVar15 = FUN_01e466c0();
              uVar5 = FUN_01d3b590();
              if (plVar1 != (int64_t *)0x0) {
                local_50 = '\0';
                local_58 = (int64_t *)0x0;
                local_40 = -1;
                fVar13 = *(float *)(&g_0241dcb8 + (uint64_t)((uVar5 & 8) == 0) * 4);
                bVar11 = true;
                while( true ) {
                  lVar6 = (int64_t)local_40;
                  local_40 = local_40 + 1;
                  if (*(int *)((int64_t)plVar1 + 0xc) <= local_40) break;
                  lVar10 = plVar1[2];
                  local_58 = *(int64_t **)(lVar10 + 8 + lVar6 * 8);
                  if (bVar11) {
                    pvVar8 = _pthread_getspecific((void*)lVar10);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    plVar7 = (int64_t *)FUN_00e8b990();
                    lVar10 = *plVar7;
                    cVar2 = (**(code **)(lVar10 + 0x3c0))();
                    if (cVar2 != '\0') {
                      pvVar8 = _pthread_getspecific((void*)lVar10);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      plVar7 = (int64_t *)FUN_00e8b990();
                      lVar10 = *plVar7;
                      (**(code **)(lVar10 + 0x3b8))();
                    }
                    bVar11 = false;
                  }
                  pVar9 = (void*)lVar10;
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar12 = FUN_012660a0();
                  local_a8._0_4_ = uVar12;
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01264240();
                  if (local_70 == 0) {
                    cVar2 = '\0';
                  }
                  else {
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01264240();
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar2 = FUN_01334f30();
                    if ((local_80 != '\0') && (local_88 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_68 != '\0') && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 != '\0') {
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    fVar16 = (float)local_a8._0_4_ +
                             (extraout_XMM0_Db - (float)((uint64_t)uVar15 >> 0x20)) * fVar13;
                    fVar14 = g_02390124;
                    if (fVar16 <= g_02390124) {
                      fVar14 = fVar16;
                    }
                    fVar16 = g_02390d00;
                    if (g_02390d00 <= fVar14) {
                      fVar16 = fVar14;
                    }
                    local_a8._0_4_ = fVar16;
                    FUN_01266020(fVar16);
                    cVar2 = FUN_0199be40();
                    if (cVar2 != '\0') {
                      (**(code **)((int64_t)&linkedit_data_command_000013d8.cmd + *plVar1))();
                      pvVar8 = _pthread_getspecific(pVar9);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01266020(local_a8._0_4_);
                      if ((local_68 != '\0') && (local_70 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                FUN_001159b0();
              }
              (**(code **)((int64_t)&linkedit_data_command_000013e8.cmd + *plVar1))((int)uVar15);
            }
          }
          lVar6 = arg1[1];
          if (local_50 != '\0') {
            *arg1 = (int64_t)local_58;
            if (((char)lVar6 != '\0') && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01ba4467;
          }
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)local_58;
          if (((char)lVar6 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ba44b0:
          *(void*)(arg1 + 1) = 1;
          if (*arg1 != 0) goto LAB_01ba44c8;
LAB_01ba48dc:
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ba48f0:
          uVar12 = FUN_01cf74c0();
          unaff_RBX = plVar1;
          if (plVar1 != (int64_t *)0x0) goto LAB_01ba4ac4;
        }
        if (plVar1 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
        if (local_94 == 2) goto LAB_01ba4b61;
      }
      goto LAB_01ba4ae8;
    }
    uVar5 = 0;
  }
  FUN_00d50b20();
LAB_01ba4b6e:
  return uVar5 & 0xffffffff;
}



// ============================================================
// 01bbad10
// ============================================================
// Function: FUN_01bbad10
// Address: 01bbad10
// Size: 1595 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


uint64_t FUN_01bbad10(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  undefined7 uVar12;
  uint64_t uVar11;
  int64_t *arg1;
  bool bVar13;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  local_70 = param_1;
  FUN_01a58dc0();
  pVar10 = (void*)param_1;
  if (local_40 == (int64_t *)0x0) {
    bVar3 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_58))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 == 0) && (lVar9 = *param_2, lVar9 != 0)) {
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      lVar9 = *param_2;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_01bbae1f;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_01bbae1f:
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01bbaea6;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_01bbaea6:
        FUN_01a58dc0();
        cVar4 = (**(code **)((int64_t)&dylib_command_00001220.dylib.current_version + *local_40))()
        ;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar8 = 0;
        if (*param_2 != 0) {
          FUN_01a58dc0();
          if ((local_40 == (int64_t *)0x0) || (iVar5 = FUN_01d3a5a0(), iVar5 != 1)) {
            bVar13 = false;
            uVar12 = 0;
          }
          else {
            iVar5 = FUN_01d3b630();
            bVar13 = iVar5 == 1;
            uVar12 = (undefined7)((uint64_t)lVar9 >> 8);
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar13) {
            iVar5 = FUN_01d3b620();
            if ((iVar5 == 2) && (cVar4 == '\x01')) {
              pvVar7 = _pthread_getspecific(pVar10);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar10 = (void*)local_40;
              }
              cVar4 = FUN_014c4200();
              if (cVar4 == '\0') {
                pvVar7 = _pthread_getspecific(pVar10);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014c7490(0,g_02390124,g_02390124,g_02390124);
                uVar11 = CONCAT71(uVar12,1);
              }
              else {
                pvVar7 = _pthread_getspecific(pVar10);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar11 = CONCAT71(uVar12,1);
                FUN_014c4100();
              }
            }
            else {
              pvVar7 = _pthread_getspecific(pVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar4 = FUN_014c4200();
              if (cVar4 != '\0') {
                do {
                  lVar8 = *local_70;
                  cVar4 = (char)local_70[1];
                  lVar9 = *arg1;
                  if (lVar9 == lVar8) {
                    if (cVar4 != '\0') {
                      if (((char)arg1[1] == '\0') && (lVar8 != 0)) {
                        cVar4 = '\x01';
                        FUN_00d50b00();
                        goto LAB_01bbb120;
                      }
                      goto LAB_01bbb124;
                    }
                  }
                  else {
                    lVar2 = arg1[1];
                    if ((cVar4 != '\0') && (lVar8 != 0)) {
                      FUN_00d50b00();
                    }
                    *arg1 = lVar8;
                    if (((char)lVar2 != '\0') && (lVar9 != 0)) {
                      FUN_00d50b20();
                    }
LAB_01bbb120:
                    *(char *)(arg1 + 1) = cVar4;
LAB_01bbb124:
                    lVar8 = *arg1;
                  }
                  if (lVar8 == 0) {
                    FUN_01a58dc0();
                    (**(code **)(*local_58 + 0x658))();
                    plVar1 = (int64_t *)*arg1;
                    if (plVar1 == local_40) {
                      if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
                        if (local_38 == '\0') {
                          FUN_00d50b00();
                          goto LAB_01bbb1e1;
                        }
                        goto LAB_01bbb191;
                      }
LAB_01bbb19a:
                      if (*arg1 != 0) goto LAB_01bbb1a2;
LAB_01bbb1ee:
                      bVar13 = false;
                      uVar12 = 0;
                    }
                    else {
                      lVar9 = arg1[1];
                      if (local_38 != '\0') {
                        *arg1 = (int64_t)local_40;
                        if (((char)lVar9 != '\0') && (plVar1 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
LAB_01bbb191:
                        *(void*)(arg1 + 1) = 1;
                        local_38 = '\0';
                        goto LAB_01bbb19a;
                      }
                      if (local_40 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      *arg1 = (int64_t)local_40;
                      if (((char)lVar9 != '\0') && (plVar1 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
LAB_01bbb1e1:
                      *(void*)(arg1 + 1) = 1;
                      if (*arg1 == 0) goto LAB_01bbb1ee;
LAB_01bbb1a2:
                      iVar5 = FUN_01d3a5a0();
                      bVar13 = iVar5 != 6;
                      uVar12 = (undefined7)((uint64_t)local_40 >> 8);
                    }
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (!bVar13) goto LAB_01bbb251;
                  }
                  FUN_01d3a5a0();
                } while( true );
              }
              uVar11 = 0;
            }
            goto LAB_01bbafef;
          }
          lVar8 = *param_2;
        }
        local_78 = '\0';
        local_80 = lVar8;
        uVar6 = FUN_01a58d30(*arg1,&local_80);
        uVar11 = (uint64_t)uVar6;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01bbafef;
      }
      uVar11 = 0;
      goto LAB_01bbaffc;
    }
  }
  uVar11 = 0;
LAB_01bbae4c:
  return uVar11 & 0xffffffff;
LAB_01bbb251:
  uVar11 = CONCAT71(uVar12,1);
  if (*local_70 != 0) {
    *local_70 = 0;
    if ((char)local_70[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(local_70 + 1) = 0;
  }
LAB_01bbafef:
  FUN_00d50b20();
LAB_01bbaffc:
  FUN_00d50b20();
  goto LAB_01bbae4c;
}



// ============================================================
// 01bbc610
// ============================================================
// Function: FUN_01bbc610
// Address: 01bbc610
// Size: 1448 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


int64_t * FUN_01bbc610(uint64_t param_1,double param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  char *pcVar4;
  void* in_ECX;
  void* pVar5;
  char *pcVar6;
  int64_t *in_RDX;
  int iVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  char cVar9;
  uint uVar10;
  uint32_t uVar11;
  float fVar12;
  uint uVar13;
  uint32_t uVar14;
  float extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  double dVar15;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a0;
  char local_98;
  int64_t *local_80;
  char local_78 [8];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint64_t local_48;
  uint uStack_40;
  uint uStack_3c;
  char local_38 [8];
  
  fVar12 = (float)((uint64_t)param_1 >> 0x20);
  lVar8 = *in_RDX;
  cVar9 = (char)in_RDX[1];
  if ((cVar9 == '\0') || (lVar8 == 0)) {
    if (lVar8 == 0) goto LAB_01bbc6b7;
LAB_01bbc663:
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar15 = (double)FUN_0125a280();
    uVar10 = (uint)(float)(dVar15 - param_2) & g_02390140;
    uVar13 = (uint)((uint64_t)(dVar15 - param_2) >> 0x20) & _UNK_02390144;
    uStack_40 = extraout_XMM0_Dc & _UNK_02390148;
    uStack_3c = extraout_XMM0_Dd & _UNK_0239014c;
  }
  else {
    FUN_00d50b00();
    if (*in_RDX != 0) goto LAB_01bbc663;
LAB_01bbc6b7:
    uVar10 = 0;
    uVar13 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  local_48 = (double)CONCAT44(uVar13,uVar10);
  FUN_01a58dc0();
  dVar15 = g_02390108;
  (**(code **)(*local_80 + 0x9b8))(SUB84(param_2,0));
  lVar3 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_48 = (double)(float)local_48;
    local_68 = '\0';
    local_70 = 0;
    local_60 = lVar3;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar3 = (int64_t)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)(local_60 + 0xc) <= iVar7) break;
      local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar3 * 8);
      uVar11 = FUN_01a58dc0();
      local_a0 = local_70;
      local_98 = '\0';
      (**(code **)(*local_b8 + 0xab0))(uVar11,&local_a0);
      local_38[0] = local_78[0];
      pcVar6 = local_38;
      pcVar4 = local_78;
      if (local_78[0] == '\0') {
        pcVar4 = pcVar6;
      }
      *pcVar4 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar5 = (void*)pcVar6;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 == (int64_t *)0x0) {
        uVar11 = SUB84(local_48,0);
        uVar14 = (uint32_t)((uint64_t)local_48 >> 0x20);
      }
      else {
        (**(code **)(*local_80 + 0x4d8))();
        if ((extraout_XMM0_Db < fVar12) &&
           (fVar12 < extraout_XMM0_Db + (float)((uint64_t)dVar15 >> 0x20))) {
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_0125a280();
          lVar3 = local_70;
          dVar15 = (double)(float)((uint)(float)(dVar15 - param_2) & g_02390140);
          if ((lVar8 == 0) || (dVar15 < local_48)) {
            local_48 = dVar15;
            if (local_70 == lVar8) {
              if ((cVar9 == '\0') && (local_70 != 0)) {
                lVar3 = lVar8;
                if (local_68 != '\0') goto LAB_01bbc9a0;
                cVar9 = '\x01';
                FUN_00d50b00();
              }
            }
            else {
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
                if ((cVar9 != '\0') && (lVar8 != 0)) {
                  FUN_00d50b20();
                  lVar8 = lVar3;
                  cVar9 = '\x01';
                  goto LAB_01bbc956;
                }
              }
              else {
                if ((cVar9 != '\0') && (lVar8 != 0)) {
                  FUN_00d50b20();
                }
LAB_01bbc9a0:
                local_68 = '\0';
              }
              lVar8 = lVar3;
              cVar9 = '\x01';
            }
          }
        }
LAB_01bbc956:
        if (local_38[0] == '\0') {
          uVar11 = SUB84(local_48,0);
          uVar14 = (uint32_t)((uint64_t)local_48 >> 0x20);
        }
        else {
          FUN_00d50b20();
          uVar11 = SUB84(local_48,0);
          uVar14 = (uint32_t)((uint64_t)local_48 >> 0x20);
        }
      }
      local_48 = (double)CONCAT44(uVar14,uVar11);
    }
    lVar3 = local_60;
    FUN_001159b0();
    in_ECX = (void*)lVar3;
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    *(void*)(this_ptr + 1) = 0;
    goto LAB_01bbcbc6;
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01268dd0();
  lVar3 = local_70;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01bbcab3;
    }
  }
  else if (local_70 != 0) {
LAB_01bbcab3:
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01263cf0();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_0125a280();
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_0125a280();
      if ((float)((uint)(float)(dVar15 - param_2) & g_02390140) <
          (float)((uint)(float)(local_48 - param_2) & g_02390140)) {
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        if (cVar9 == '\0') {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
    }
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (cVar9 == '\0') {
    FUN_00d50b00();
  }
LAB_01bbcbc6:
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01bbc300
// ============================================================
// Function: FUN_01bbc300
// Address: 01bbc300
// Size: 602 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


int64_t * FUN_01bbc300(double param_1,void*param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  void *pvVar3;
  uint64_t in_RCX;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  char cVar7;
  int64_t lVar8;
  double dVar9;
  double local_78;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  (**(code **)(&UNK_00001668 + *(int64_t *)*param_2))();
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328ff0();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(local_70 + 0xc) < 1) {
      uVar4 = 0;
      lVar5 = 0;
    }
    else {
      local_78 = g_02411188;
      lVar8 = 0;
      lVar6 = 0;
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        lVar1 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_014bb640();
        dVar9 = (double)((uint64_t)(dVar9 - param_1) & g_023908f0);
        lVar5 = lVar6;
        if (dVar9 < local_78) {
          cVar7 = (char)uVar4;
          local_78 = dVar9;
          if (lVar6 == lVar1) {
            if ((cVar7 == '\0') && (lVar6 != 0)) {
              FUN_00d50b00();
              uVar4 = CONCAT71((int7)(in_RCX >> 8),1);
            }
          }
          else {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            uVar4 = CONCAT71((int7)(in_RCX >> 8),1);
            lVar5 = lVar1;
            if ((cVar7 != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
              uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
            }
          }
        }
        lVar8 = lVar8 + 1;
        in_RCX = uVar4;
        lVar6 = lVar5;
        uVar2 = uVar4 & 0xffffffff;
      } while ((int)lVar8 < *(int *)(local_70 + 0xc));
    }
    FUN_01a021a0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if ((char)uVar4 != '\0') goto LAB_01bbc549;
    if (lVar5 != 0) {
      FUN_00d50b00();
      goto LAB_01bbc549;
    }
  }
  lVar5 = 0;
LAB_01bbc549:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01bbbec0
// ============================================================
// Function: FUN_01bbbec0
// Address: 01bbbec0
// Size: 505 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01bbbec0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b5cc8 == 0) || (g_028b5cd1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e0810;
    if (g_028b5cc8 == 0) {
      if (g_027e0810 != 0) {
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
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b5cc8;
      if (g_028b5cc8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b5cc8 != 0;
        g_028b5cc8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b5cd0 == '\0')) {
        g_028b5cd0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b5cd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b5cd1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b5cc8 == 0) {
      lVar3 = 0;
      goto LAB_01bbc079;
    }
  }
  lVar3 = g_028b5cc8;
  FUN_00d50b00();
LAB_01bbc079:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ba3cc0
// ============================================================
// Function: FUN_01ba3cc0
// Address: 01ba3cc0
// Size: 505 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01ba3cc0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b5b20 == 0) || (g_028b5b29 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e5298;
    if (g_028b5b20 == 0) {
      if (g_027e5298 != 0) {
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
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b5b20;
      if (g_028b5b20 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b5b20 != 0;
        g_028b5b20 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b5b28 == '\0')) {
        g_028b5b28 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b5b29 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b5b29 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b5b20 == 0) {
      lVar3 = 0;
      goto LAB_01ba3e79;
    }
  }
  lVar3 = g_028b5b20;
  FUN_00d50b00();
LAB_01ba3e79:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ba5af0
// ============================================================
// Function: FUN_01ba5af0
// Address: 01ba5af0
// Size: 505 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01ba5af0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b5b30 == 0) || (g_028b5b39 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e53d8;
    if (g_028b5b30 == 0) {
      if (g_027e53d8 != 0) {
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
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b5b30;
      if (g_028b5b30 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b5b30 != 0;
        g_028b5b30 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b5b38 == '\0')) {
        g_028b5b38 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b5b39 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b5b39 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b5b30 == 0) {
      lVar3 = 0;
      goto LAB_01ba5ca9;
    }
  }
  lVar3 = g_028b5b30;
  FUN_00d50b00();
LAB_01ba5ca9:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bba8e0
// ============================================================
// Function: FUN_01bba8e0
// Address: 01bba8e0
// Size: 505 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01bba8e0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b5cb8 == 0) || (g_028b5cc1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e5548;
    if (g_028b5cb8 == 0) {
      if (g_027e5548 != 0) {
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
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b5cb8;
      if (g_028b5cb8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b5cb8 != 0;
        g_028b5cb8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b5cc0 == '\0')) {
        g_028b5cc0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b5cc1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b5cc1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b5cb8 == 0) {
      lVar3 = 0;
      goto LAB_01bbaa99;
    }
  }
  lVar3 = g_028b5cb8;
  FUN_00d50b00();
LAB_01bbaa99:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0080b970
// ============================================================
// Function: FUN_0080b970
// Address: 0080b970
// Size: 677 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUDetectionPitchRelevanceInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_0080b970(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_30;
  
  if ((g_02732b88 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02732ad8 = FUN_00335590();
    g_02732ac0 = "MUDetectionPitchRelevanceInspector";
    g_02732ac8 = 0xe0;
    g_02732ad0 = FUN_00828b70;
    g_02732ae0 = 0;
    ram_0000000002732ae8 = 0;
    g_02732af0 = 0;
    g_02732b68 = 0;
    ram_0000000002732b70 = 0;
    g_02732b78 = 0;
    g_02732b7a = 1;
    g_02732af8 = 0;
    ram_0000000002732b00 = 0;
    g_02732b08 = 0;
    ram_0000000002732b10 = 0;
    g_02732b18 = 0;
    ram_0000000002732b20 = 0;
    g_02732b28 = 0;
    ram_0000000002732b30 = 0;
    g_02732b38 = 0;
    ram_0000000002732b40 = 0;
    g_02732b48 = 0;
    ram_0000000002732b50 = 0;
    g_02732b58 = 0;
    ram_0000000002732b60 = 0;
    g_02732b83 = 0;
    g_02732b7b = 0;
    ___cxa_guard_release();
  }
  if (g_02732b7b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    if ((g_027323d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_0271fb70 = "MUTextFieldDragAndEditHandler";
      g_0271fb80 = 0;
      g_0271fb78 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_00828be0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01c390e0();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}



// ============================================================
// 01ba3960
// ============================================================
// Function: FUN_01ba3960
// Address: 01ba3960
// Size: 677 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUSibilantBalanceInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01ba3960(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_30;
  
  if ((g_027e5368 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e52b8 = FUN_00335590();
    g_027e52a0 = "MUSibilantBalanceInspector";
    g_027e52a8 = 0xe0;
    g_027e52b0 = FUN_01ba53d0;
    g_027e52c0 = 0;
    ram_00000000027e52c8 = 0;
    g_027e52d0 = 0;
    g_027e5348 = 0;
    ram_00000000027e5350 = 0;
    g_027e5358 = 0;
    g_027e535a = 1;
    g_027e52d8 = 0;
    ram_00000000027e52e0 = 0;
    g_027e52e8 = 0;
    ram_00000000027e52f0 = 0;
    g_027e52f8 = 0;
    ram_00000000027e5300 = 0;
    g_027e5308 = 0;
    ram_00000000027e5310 = 0;
    g_027e5318 = 0;
    ram_00000000027e5320 = 0;
    g_027e5328 = 0;
    ram_00000000027e5330 = 0;
    g_027e5338 = 0;
    ram_00000000027e5340 = 0;
    g_027e5363 = 0;
    g_027e535b = 0;
    ___cxa_guard_release();
  }
  if (g_027e535b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    if ((g_027323d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_0271fb70 = "MUTextFieldDragAndEditHandler";
      g_0271fb80 = 0;
      g_0271fb78 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_01ba5440();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_0192ad80();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}



// ============================================================
// 01ba4ed0
// ============================================================
// Function: FUN_01ba4ed0
// Address: 01ba4ed0
// Size: 500 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01ba4ed0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t local_48;
  char local_40;
  
  FUN_01a58dc0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01ba4f27;
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
LAB_01ba4f27:
    plVar1 = (int64_t *)*param_2;
    FUN_000914a0();
    if (plVar1 == (int64_t *)0x0) {
LAB_01ba4f53:
      param_2 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01ba4f53;
    }
    lVar2 = *param_2;
    if (lVar2 != 0) {
      cVar3 = (char)param_2[1];
      if (cVar3 != '\0') {
        FUN_00d50b00();
      }
      goto joined_r0x01ba4f87;
    }
  }
  cVar3 = '\x01';
  lVar2 = local_48;
joined_r0x01ba4f87:
  if (lVar2 != 0) {
    FUN_019c1990();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (local_48 != 0) {
      if (0 < *(int *)(local_48 + 0xc)) {
        lVar6 = 0;
        do {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01334f30();
        } while ((cVar4 == '\0') && (lVar6 = lVar6 + 1, lVar6 < *(int *)(local_48 + 0xc)));
      }
      FUN_00d50b20();
    }
  }
  FUN_01e262d0();
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00831880
// ============================================================
// Function: FUN_00831880
// Address: 00831880
// Size: 600 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementPitchInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_00831880(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008258e0();
  this_ptr[0x1a] = &g_0264a7b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02654840;
  this_ptr[0x17] = &g_02654f10;
  this_ptr[0x1a] = &g_02654f60;
  FUN_00831bb0();
  FUN_00831ee0();
  FUN_00832210();
  FUN_00832540();
  FUN_00832800();
  FUN_00832ac0();
  *(void*)(this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735003 == '\0') {
    FUN_00832d80();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0082f7f0
// ============================================================
// Function: FUN_0082f7f0
// Address: 0082f7f0
// Size: 558 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementSinglePercentInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_0082f7f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008258e0();
  this_ptr[0x1a] = &g_0264a7b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02655728;
  this_ptr[0x17] = &g_02655e10;
  this_ptr[0x1a] = &g_02655e60;
  FUN_0082fac0();
  FUN_0082fd80();
  FUN_008300b0();
  FUN_00830370();
  *(void*)(this_ptr + 0x1f) = 0;
  // [STATIC_INIT: property registration]
  if (g_02734b0b == '\0') {
    FUN_00830630();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 008308f0
// ============================================================
// Function: FUN_008308f0
// Address: 008308f0
// Size: 512 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementFormantInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_008308f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008258e0();
  this_ptr[0x1a] = &g_0264a7b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02652f30;
  this_ptr[0x17] = &g_026535f8;
  this_ptr[0x1a] = &g_02653648;
  FUN_00830b50();
  FUN_00830e80();
  *(void*)(this_ptr + 0x1d) = 0;
  // [STATIC_INIT: property registration]
  if (g_02734d43 == '\0') {
    FUN_00831140();
    FUN_00e87980();
  }
  FUN_008312d0();
  return;
}



// ============================================================
// 01ba5860
// ============================================================
// Function: FUN_01ba5860
// Address: 01ba5860
// Size: 583 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUDetectionSibilantRangeInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01ba5860(void)

{
  int iVar1;
  uint32_t uVar2;
  
  // [STATIC_INIT: property registration]
  if (g_027e549b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    // [STATIC_INIT: property registration]
    FUN_00e87c40();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b8c840();
    FUN_00e87920(uVar2,0);
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}



// ============================================================
// 01bba650
// ============================================================
// Function: FUN_01bba650
// Address: 01bba650
// Size: 583 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUVibratoInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01bba650(void)

{
  int iVar1;
  uint32_t uVar2;
  
  // [STATIC_INIT: property registration]
  if (g_027e560b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    // [STATIC_INIT: property registration]
    FUN_00e87c40();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b8d300();
    FUN_00e87920(uVar2,0);
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}

