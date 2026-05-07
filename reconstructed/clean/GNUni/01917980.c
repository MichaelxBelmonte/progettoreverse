// Function: FUN_01917980
// Address: 01917980
// Size: 2140 bytes
// Class: GNUni
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


uint64_t FUN_01917980(uint64_t param_1,int64_t *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  int64_t *plVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t *plVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Db;
  uint64_t uVar17;
  int64_t local_b0;
  char local_a8;
  uint32_t local_98;
  float fStack_94;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int local_48;
  int64_t *local_38;
  float fVar18;
  
  plVar4 = local_60;
  if (*param_2 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_01a58dc0();
    if (local_60 == (int64_t *)0x0) {
      bVar3 = true;
      plVar13 = (int64_t *)0x0;
    }
    else {
      plVar13 = local_60;
      if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = false;
      }
      else {
        bVar3 = false;
      }
    }
    (**(code **)(*plVar13 + 0x7b0))();
    if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *plVar13))();
    if (cVar5 == '\0') {
      bVar2 = false;
      local_38 = (int64_t *)0x0;
      uVar9 = 0;
    }
    else {
      iVar6 = FUN_01d3a5a0();
      uVar14 = extraout_XMM0_Da;
      if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), uVar14 = extraout_XMM0_Da_00, iVar6 == 1)) {
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*plVar13 + 0xe30))();
        local_38 = local_60;
        plVar11 = local_60;
        if (local_60 == (int64_t *)0x0) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_58 == '\0') {
            FUN_00d50b00();
          }
        }
        iVar6 = FUN_01d3b620();
        if (iVar6 == 2) {
          if (local_60 != (int64_t *)0x0) {
            for (lVar12 = 0; (int)lVar12 < *(int *)((int64_t)local_60 + 0xc); lVar12 = lVar12 + 1)
            {
              arg1 = *(int64_t **)(local_60[2] + lVar12 * 8);
              pvVar7 = _pthread_getspecific((void*)plVar11);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                arg1 = (int64_t *)arg1[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              pvVar7 = _pthread_getspecific((void*)plVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0126cd60();
              FUN_0126cd10();
            }
            FUN_001159b0();
          }
          uVar9 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
          (**(code **)(*this_ptr + 0x458))();
        }
        else {
          FUN_01cf74c0();
          fStack_94 = extraout_XMM0_Db;
          while( true ) {
            (**(code **)(*plVar13 + 0x658))();
            plVar11 = (int64_t *)*arg1;
            if (plVar11 != local_60) break;
            if (((char)arg1[1] == '\0') && (local_60 != (int64_t *)0x0)) {
              if (local_58 == '\0') {
                FUN_00d50b00();
                goto LAB_01917d74;
              }
LAB_01917d32:
              *(void*)(arg1 + 1) = 1;
              local_58 = '\0';
            }
            if (*arg1 == 0) goto LAB_0191818a;
LAB_01917d85:
            iVar6 = FUN_01d3a5a0();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar6 == 6) goto LAB_0191819e;
            iVar6 = FUN_01d3a5a0();
            if (iVar6 == 5) {
              FUN_01d3abf0();
              uVar17 = FUN_01e466c0();
              fVar18 = (float)((uint64_t)uVar17 >> 0x20);
              (**(code **)(*plVar13 + 3000))();
              uVar9 = FUN_01d3b590();
              if (plVar4 != (int64_t *)0x0) {
                local_58 = '\0';
                local_60 = (int64_t *)0x0;
                local_48 = -1;
                fVar1 = *(float *)(&g_0241aee0 + (uint64_t)((uVar9 & 8) == 0) * 4);
                while( true ) {
                  lVar12 = (int64_t)local_48;
                  local_48 = local_48 + 1;
                  if (*(int *)((int64_t)plVar4 + 0xc) <= local_48) break;
                  lVar8 = plVar4[2];
                  local_60 = *(int64_t **)(lVar8 + 8 + lVar12 * 8);
                  pvVar7 = _pthread_getspecific((void*)lVar8);
                  pVar10 = (void*)lVar8;
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01265b60();
                  fVar15 = (float)FUN_00aea6b0();
                  fVar15 = fVar15 + (fStack_94 - fVar18) * fVar1;
                  fVar16 = 0.0;
                  if (0.0 <= fVar15) {
                    fVar16 = fVar15;
                  }
                  local_98 = FUN_00aea630(fVar16);
                  fVar16 = (float)FUN_00aea610(local_98);
                  if (g_02390434 < fVar16) {
                    local_98 = FUN_00aea5e0(g_02390434);
                  }
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01265b00(local_98);
                  cVar5 = FUN_0199be40();
                  if (cVar5 != '\0') {
                    (**(code **)((int64_t)&linkedit_data_command_000013d8.cmd + *plVar13))();
                    pvVar7 = _pthread_getspecific(pVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01265b00(local_98);
                    if ((local_78 != '\0') && (local_80 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  if ((local_78 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_80 != 0) {
                    pvVar7 = _pthread_getspecific(pVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0125e930();
                    pvVar7 = _pthread_getspecific(pVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152e890(local_98);
                    if ((local_78 != '\0') && (local_80 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                FUN_001159b0();
              }
              (**(code **)(*this_ptr + 0x458))();
              (**(code **)((int64_t)&linkedit_data_command_000013e8.cmd + *plVar13))((int)uVar17);
              fStack_94 = fVar18;
            }
          }
          lVar12 = arg1[1];
          if (local_58 != '\0') {
            *arg1 = (int64_t)local_60;
            if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01917d32;
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)local_60;
          if (((char)lVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01917d74:
          *(void*)(arg1 + 1) = 1;
          if (*arg1 != 0) goto LAB_01917d85;
LAB_0191818a:
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_0191819e:
          FUN_0199eb40();
          uVar9 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
          FUN_01cf74c0();
        }
      }
      else {
        local_b0 = *param_2;
        local_a8 = '\0';
        uVar9 = FUN_01a58d30(uVar14,&local_b0);
        uVar9 = uVar9 & 0xffffffff;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        local_38 = (int64_t *)0x0;
        bVar2 = false;
      }
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3 && plVar13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return uVar9 & 0xffffffff;
}

