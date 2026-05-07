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

