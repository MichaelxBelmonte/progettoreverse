// Function: FUN_01bf7370
// Address: 01bf7370
// Size: 3361 bytes
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


uint64_t FUN_01bf7370(void* param_1,int64_t *param_2)

{
  float fVar1;
  int64_t *******ppppppplVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  code *pcVar8;
  int64_t *******ppppppplVar9;
  int64_t *******ppppppplVar10;
  int64_t *******ppppppplVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  int64_t *******ppppppplVar16;
  int64_t *******ppppppplVar17;
  int64_t lVar18;
  uint64_t uVar19;
  void* pVar20;
  int64_t *******ppppppplVar21;
  int64_t ******pppppplVar22;
  int64_t *arg1;
  int64_t *******this_ptr;
  uint32_t uVar23;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  float fVar24;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  int64_t local_128;
  char local_120;
  float fStack_104;
  int64_t *******local_f8;
  char local_f0;
  int64_t *******local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  int64_t local_90;
  char local_88;
  char local_61;
  int64_t *******local_58;
  char local_50;
  int64_t *******local_48;
  uint64_t local_40;
  int local_38;
  
  uVar23 = FUN_01a58dc0();
  ppppppplVar9 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *******)0x0) goto LAB_01bf74d1;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
LAB_01bf73d7:
    cVar12 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                         (int64_t)*ppppppplVar9))();
    if (cVar12 == '\0') {
      uVar19 = 0;
    }
    else {
      uVar23 = extraout_XMM0_Da;
      if (((*param_2 == 0) || (iVar13 = FUN_01d3a5a0(), uVar23 = extraout_XMM0_Da_00, iVar13 != 1))
         || (iVar13 = FUN_01d3b630(), uVar23 = extraout_XMM0_Da_01, iVar13 != 1)) {
        bVar5 = false;
        goto LAB_01bf74f0;
      }
      pvVar15 = _pthread_getspecific(param_1);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      ppppppplVar10 = local_58;
      if (((local_50 == '\0') && (local_58 != (int64_t *******)0x0)) &&
         ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (int64_t *******)0x0)))) {
        FUN_00d50b20();
      }
      pvVar15 = _pthread_getspecific(param_1);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_01326de0();
      ppppppplVar21 = this_ptr;
      if (iVar13 == 3) {
        FUN_01d3abf0();
        FUN_01e466c0();
        dVar3 = (double)FUN_00e7d6f0();
        ppppppplVar21 = (int64_t *******)&local_58;
        do {
          (*(*ppppppplVar9)[0xcc])(SUB84(g_023934c8,0));
          ppppppplVar17 = local_58;
          ppppppplVar16 = (int64_t *******)*arg1;
          if (ppppppplVar16 == local_58) {
            if (((char)arg1[1] == '\0') && (local_58 != (int64_t *******)0x0)) {
              ppppppplVar17 = ppppppplVar16;
              if (local_50 != '\0') goto LAB_01bf76a6;
              FUN_00d50b00();
              goto LAB_01bf7675;
            }
LAB_01bf767e:
            ppppppplVar17 = (int64_t *******)*arg1;
            if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar18 = arg1[1];
            if (local_50 == '\0') {
              if (local_58 != (int64_t *******)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)ppppppplVar17;
              if (((char)lVar18 != '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
LAB_01bf7675:
              *(void*)(arg1 + 1) = 1;
              goto LAB_01bf767e;
            }
            *arg1 = (int64_t)local_58;
            if (((char)lVar18 != '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
              FUN_00d50b20();
              ppppppplVar17 = (int64_t *******)*arg1;
            }
LAB_01bf76a6:
            *(void*)(arg1 + 1) = 1;
          }
          if (ppppppplVar17 == (int64_t *******)0x0) break;
          if ((local_61 != '\0') || ((*arg1 != 0 && (iVar13 = FUN_01d3a5a0(), iVar13 == 6))))
          goto LAB_01bf8071;
          dVar4 = (double)FUN_00e7d6f0();
        } while (dVar4 - dVar3 <= g_023934c8);
        if (*param_2 != 0) {
          (*(*ppppppplVar9)[0xf6])();
          FUN_01cf74c0();
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          ppppppplVar16 = (int64_t *******)FUN_00e8fc40();
          FUN_00d4ff40();
          *ppppppplVar16 = (int64_t ******)&g_02572358;
          pcVar8 = g_02572370;
          (*g_02572370)();
          ppppppplVar17 = (int64_t *******)FUN_00e8fc40();
          FUN_00d4ff40();
          *ppppppplVar17 = (int64_t ******)&g_02572358;
          (*pcVar8)();
          (*(*ppppppplVar9)[0x1c4])();
          ppppppplVar21 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *******)0x0) {
              FUN_00d50b00();
              if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01bf77c4;
            }
LAB_01bf79e7:
            local_50 = '\0';
            local_58 = (int64_t *******)0x0;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_48 = ppppppplVar17;
            while( true ) {
              lVar18 = (int64_t)(int)local_40;
              iVar13 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar13);
              if (*(int *)((int64_t)local_48 + 0xc) <= iVar13) break;
              local_58 = (int64_t *******)local_48[2][lVar18 + 1];
              FUN_01976820();
              if (local_40._4_4_ != 0) {
                if (local_40 < 0) {
                  iVar13 = -local_40._4_4_;
                }
                else {
                  local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar13 = 0;
                }
                local_40 = CONCAT44(iVar13,(int)local_40);
              }
            }
            ppppppplVar21 = local_48;
            FUN_01a02090();
            bVar5 = false;
          }
          else {
            if (local_58 == (int64_t *******)0x0) goto LAB_01bf79e7;
LAB_01bf77c4:
            local_50 = '\0';
            local_58 = (int64_t *******)0x0;
            local_48 = ppppppplVar21;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar13 = -local_40._4_4_;
                }
                else {
                  iVar13 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar13);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar13 = 0;
                }
                local_40 = CONCAT44(iVar13,(int)local_40);
              }
              lVar18 = (int64_t)(int)local_40;
              iVar13 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar13);
              if (*(int *)((int64_t)local_48 + 0xc) <= iVar13) break;
              local_58 = (int64_t *******)local_48[2][lVar18 + 1];
              pvVar15 = _pthread_getspecific((void*)local_48[2]);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              if (local_a0 == '\0') {
                if (local_a8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0 = '\0';
              }
              uVar23 = FUN_00d21140();
              if (local_a8 != 0) {
                uVar23 = FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                uVar23 = FUN_00d50b20();
              }
              local_f8 = local_58;
              local_f0 = '\0';
              (*(*ppppppplVar9)[0x156])(uVar23,&local_f8);
              if (local_a0 == '\0') {
                if (local_a8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0 = '\0';
              }
              local_90 = local_a8;
              local_88 = '\0';
              FUN_00d21140();
              if (local_a8 != 0) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_f0 != '\0') && (local_f8 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
            }
            ppppppplVar21 = local_48;
            FUN_001159b0();
            FUN_00d50b20();
            if (ppppppplVar17 != (int64_t *******)0x0) goto LAB_01bf79e7;
            bVar5 = true;
          }
          bVar7 = true;
          fStack_104 = extraout_XMM0_Db;
LAB_01bf7a86:
          (*(*ppppppplVar9)[0xcb])();
          ppppppplVar11 = local_58;
          ppppppplVar2 = (int64_t *******)*arg1;
          if (ppppppplVar2 != local_58) {
            lVar18 = arg1[1];
            if (local_50 != '\0') {
              *arg1 = (int64_t)local_58;
              if (((char)lVar18 != '\0') && (ppppppplVar2 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01bf7adc;
            }
            if (local_58 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)ppppppplVar11;
            if (((char)lVar18 != '\0') && (ppppppplVar2 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
LAB_01bf7b22:
            pVar20 = (void*)ppppppplVar21;
            *(void*)(arg1 + 1) = 1;
            if (*arg1 == 0) goto LAB_01bf7e80;
LAB_01bf7b37:
            iVar13 = FUN_01d3a5a0();
            if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            pVar20 = (void*)ppppppplVar21;
            if (iVar13 == 6) goto LAB_01bf7e94;
            FUN_01d3abf0();
            FUN_01e466c0();
            (**(code **)((int64_t)&linkedit_data_command_000013e8.cmd + (int64_t)*ppppppplVar9))()
            ;
            iVar13 = FUN_01d3a5a0();
            if (iVar13 == 5) {
              FUN_01d3abf0();
              FUN_01e466c0();
              uVar19 = FUN_01d3b590();
              if (ppppppplVar16 != (int64_t *******)0x0) {
                local_50 = '\0';
                local_58 = (int64_t *******)0x0;
                local_40 = 0xffffffff;
                local_38 = 0;
                fVar1 = *(float *)(&g_0241aee0 + (uint64_t)((uVar19 & 8) == 0) * 4);
                local_40._4_4_ = 0;
                local_48 = ppppppplVar16;
                while( true ) {
                  if (local_40._4_4_ != 0) {
                    if (local_40._4_4_ < 1) {
                      iVar13 = -local_40._4_4_;
                    }
                    else {
                      iVar13 = (int)local_40 - local_40._4_4_;
                      local_40 = CONCAT44(local_40._4_4_,iVar13);
                      FUN_00d23690();
                      local_38 = local_38 + local_40._4_4_;
                      iVar13 = 0;
                    }
                    local_40 = CONCAT44(iVar13,(int)local_40);
                  }
                  lVar18 = (int64_t)(int)local_40;
                  iVar13 = (int)local_40 + 1;
                  local_40 = CONCAT44(local_40._4_4_,iVar13);
                  if (*(int *)((int64_t)local_48 + 0xc) <= iVar13) break;
                  pppppplVar22 = local_48[2];
                  local_58 = (int64_t *******)pppppplVar22[lVar18 + 1];
                  pvVar15 = _pthread_getspecific((void*)pppppplVar22);
                  pVar20 = (void*)pppppplVar22;
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013de560();
                  if ((local_88 == '\0') && (local_90 != 0)) {
                    FUN_00d50b00();
                  }
                  pvVar15 = _pthread_getspecific(pVar20);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bc150();
                  fVar24 = (float)_powf();
                  fVar24 = fVar24 + (fStack_104 - extraout_XMM0_Db_00) * fVar1;
                  fVar6 = 0.0;
                  if ((0.0 <= fVar24) && (fVar6 = fVar24, g_02390d34 < fVar24)) {
                    fVar6 = g_02390d34;
                  }
                  pvVar15 = _pthread_getspecific(pVar20);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  _powf(fVar6,g_02390d30);
                  FUN_014bc100();
                  if (local_90 != 0) {
                    FUN_00d50b20();
                  }
                }
                ppppppplVar21 = local_48;
                FUN_001150f0();
              }
              if (!bVar5) {
                local_50 = '\0';
                local_58 = (int64_t *******)0x0;
                local_40 = 0xffffffff;
                local_38 = 0;
                local_48 = ppppppplVar17;
                while( true ) {
                  lVar18 = (int64_t)(int)local_40;
                  iVar13 = (int)local_40 + 1;
                  local_40 = CONCAT44(local_40._4_4_,iVar13);
                  if (*(int *)((int64_t)local_48 + 0xc) <= iVar13) break;
                  local_58 = (int64_t *******)local_48[2][lVar18 + 1];
                  (*(*local_58)[0xc4])();
                  if (local_40._4_4_ != 0) {
                    if (local_40 < 0) {
                      iVar13 = -local_40._4_4_;
                    }
                    else {
                      local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                      FUN_00d23690();
                      local_38 = local_38 + local_40._4_4_;
                      iVar13 = 0;
                    }
                    local_40 = CONCAT44(iVar13,(int)local_40);
                  }
                }
                ppppppplVar21 = local_48;
                FUN_01a02090();
              }
              bVar7 = false;
              (*(*this_ptr)[0x8b])();
              fStack_104 = extraout_XMM0_Db_00;
            }
            goto LAB_01bf7a86;
          }
          if (((char)arg1[1] == '\0') && (local_58 != (int64_t *******)0x0)) {
            if (local_50 == '\0') {
              FUN_00d50b00();
              goto LAB_01bf7b22;
            }
LAB_01bf7adc:
            *(void*)(arg1 + 1) = 1;
            local_50 = '\0';
          }
          pVar20 = (void*)ppppppplVar21;
          if (*arg1 != 0) goto LAB_01bf7b37;
LAB_01bf7e80:
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01bf7e94:
          FUN_01e42030();
          ppppppplVar21 = local_58;
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (ppppppplVar21 == (int64_t *******)0x0) {
            if (!bVar5) {
              FUN_00d50b20();
            }
            if (ppppppplVar16 != (int64_t *******)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            if (!bVar5) {
              local_50 = '\0';
              local_58 = (int64_t *******)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_48 = ppppppplVar17;
              while( true ) {
                lVar18 = (int64_t)(int)local_40;
                iVar13 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar13);
                if (*(int *)((int64_t)local_48 + 0xc) <= iVar13) break;
                local_58 = (int64_t *******)local_48[2][lVar18 + 1];
                FUN_01976820();
                if (local_40._4_4_ != 0) {
                  if (local_40 < 0) {
                    iVar13 = -local_40._4_4_;
                  }
                  else {
                    local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar13 = 0;
                  }
                  local_40 = CONCAT44(iVar13,(int)local_40);
                }
              }
              ppppppplVar17 = local_48;
              FUN_01a02090();
              pVar20 = (void*)ppppppplVar17;
            }
            if (!bVar7) {
              (**(code **)("/usr/lib/libobjc.A.dylib" + (int64_t)(*ppppppplVar9 + 3)))();
              pvVar15 = _pthread_getspecific(pVar20);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_e0 = '\0';
              local_e8 = ppppppplVar16;
              FUN_013880c0();
              if ((local_120 != '\0') && (local_128 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
            }
            (*(*ppppppplVar9)[0xf6])();
            FUN_01cf74c0();
            if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar5) {
              FUN_00d50b20();
            }
            if (ppppppplVar16 != (int64_t *******)0x0) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_01bf8071:
      uVar19 = CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),1);
      if (ppppppplVar10 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_58 != (int64_t *******)0x0) goto LAB_01bf73d7;
LAB_01bf74d1:
    bVar5 = true;
LAB_01bf74f0:
    local_d8 = *arg1;
    local_d0 = '\0';
    local_c8 = *param_2;
    local_c0 = '\0';
    uVar14 = FUN_01a58d30(uVar23,&local_c8);
    uVar19 = (uint64_t)uVar14;
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar5) goto LAB_01bf7570;
  }
  FUN_00d50b20();
LAB_01bf7570:
  return uVar19 & 0xffffffff;
}

