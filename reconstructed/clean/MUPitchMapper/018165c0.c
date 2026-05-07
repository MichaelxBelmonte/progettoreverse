// Function: FUN_018165c0
// Address: 018165c0
// Size: 1547 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_018165c0(void)

{
  int iVar1;
  int iVar2;
  void*puVar3;
  void*puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar9;
  bool bVar10;
  void*local_120;
  uint8_t local_118;
  void*local_110;
  uint8_t local_108;
  uint8_t local_100 [8];
  uint8_t local_f8;
  code *local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_017e1dd0();
  pcVar8 = local_38;
  if (local_60[0] != '\0') {
    pcVar8 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar8 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_017e1d40();
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar9 = local_68;
  if (*(int *)(this_ptr + 0x48) == 2) {
    FUN_017e1a60();
    iVar1 = FUN_017154c0();
    FUN_017e1a60();
    iVar2 = FUN_01715480();
    bVar10 = true;
    if (iVar1 == iVar2) {
      FUN_017e1bf0();
      iVar1 = FUN_017154c0();
      FUN_017e1bf0();
      iVar2 = FUN_01715480();
      bVar10 = iVar1 != iVar2;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar10) && (iVar1 = FUN_017154c0(), local_68 != 0)) {
      local_40 = local_68;
      local_60[0] = '\0';
      local_58 = local_68;
      local_50 = 0xffffffff;
      local_48 = 0;
      iVar2 = 0x7fffffff;
      bVar10 = false;
      while( true ) {
        iVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (*(int *)(local_58 + 0xc) <= iVar7) break;
        pvVar5 = _pthread_getspecific((void*)*(void*)(local_58 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar7 = FUN_017dca70();
        iVar6 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
        if (iVar2 <= iVar7) {
          iVar7 = iVar2;
        }
        if ((iVar6 >> 0x1f & 0xcU) + iVar6 != iVar1) {
          bVar10 = true;
          iVar7 = iVar2;
        }
        iVar2 = iVar7;
        if (local_50._4_4_ != 0) {
          if (local_50 < 0) {
            iVar7 = -local_50._4_4_;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar7 = 0;
          }
          local_50 = CONCAT44(iVar7,(int)local_50);
        }
      }
      FUN_01916320();
      lVar9 = local_40;
      if (bVar10) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        local_f0 = g_02572370;
        (*g_02572370)();
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*local_f0)();
        local_60[0] = '\0';
        local_58 = local_68;
        local_50 = 0xffffffff;
        local_48 = 0;
        while( true ) {
          iVar1 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar1);
          if (*(int *)(local_58 + 0xc) <= iVar1) break;
          pvVar5 = _pthread_getspecific((void*)*(void*)(local_58 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar1 = FUN_017dca70();
          if (iVar1 == iVar2) {
            FUN_00d21140();
          }
          else {
            FUN_00d21140();
          }
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar1 = -local_50._4_4_;
            }
            else {
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar1 = 0;
            }
            local_50 = CONCAT44(iVar1,(int)local_50);
          }
        }
        FUN_01916320();
        local_c8 = *arg1;
        local_c0 = '\0';
        local_118 = 0;
        local_120 = puVar3;
        FUN_01816ee0(*(void*)(this_ptr + 0x48),&local_120,*(void*)(this_ptr + 0x4c),
                     0xffffffff);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = *arg1;
        local_b0 = '\0';
        local_108 = 0;
        local_110 = puVar4;
        FUN_01816ee0(1,&local_110,1,0);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        goto LAB_018168ff;
      }
    }
  }
  local_a8 = *arg1;
  local_a0 = '\0';
  local_f8 = 0;
  FUN_01816ee0(*(void*)(this_ptr + 0x48),local_100,*(void*)(this_ptr + 0x4c),0);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_018168ff:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  return;
}

