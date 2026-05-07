// Function: FUN_00b16410
// Address: 00b16410
// Size: 2542 bytes
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


void* FUN_00b16410(void)

{
  uint3 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint7 uVar11;
  uint64_t uVar9;
  int64_t *plVar10;
  void*this_ptr;
  undefined7 uVar13;
  uint64_t uVar12;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t *plVar16;
  int64_t local_190;
  int64_t *local_188;
  int64_t local_180;
  int64_t local_178;
  int64_t local_170;
  int64_t local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t *local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint64_t local_40;
  
  FUN_00d6f370();
  local_e8 = g_02703ad8;
  if (g_02703ad8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_00d704d0(&local_d8,&local_e8);
  plVar14 = local_158;
  if (local_150 == '\0') {
    if (((local_158 != (int64_t *)0x0) && (FUN_00d50b00(), local_150 != '\0')) &&
       (local_158 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_150 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_80 = plVar14;
  FUN_00b15f30();
  local_60 = local_158;
  if ((local_150 == '\0') && (local_158 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar14 == (int64_t *)0x0) {
    iVar5 = *(int *)((int64_t)local_60 + 0xc);
    local_58 = 0;
    local_50 = (int64_t *)0x0;
    local_40 = 0;
    plVar14 = (int64_t *)0x0;
  }
  else {
    if (*(int *)((int64_t)local_60 + 0xc) < 1) {
      local_50 = (int64_t *)0x0;
      local_58 = 0;
      cVar4 = '\0';
      plVar10 = (int64_t *)0x0;
      local_40 = 0;
      plVar14 = (int64_t *)0x0;
      goto LAB_00b16977;
    }
    lVar15 = 0;
    plVar14 = (int64_t *)0x0;
    local_50 = (int64_t *)0x0;
    local_58 = 0;
    uVar12 = 0;
    do {
      plVar10 = *(int64_t **)(local_60[2] + lVar15 * 8);
      uVar13 = (undefined7)(uVar12 >> 8);
      if (plVar14 == plVar10) {
        if (((char)uVar12 == '\0') && (plVar14 != (int64_t *)0x0)) {
          uVar12 = CONCAT71(uVar13,1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (((char)uVar12 == '\0') || (plVar14 == (int64_t *)0x0)) {
          uVar12 = CONCAT71(uVar13,1);
          plVar14 = plVar10;
        }
        else {
          FUN_00d50b20();
          uVar12 = CONCAT71(uVar13,1);
          plVar14 = plVar10;
        }
      }
      (**(code **)(*plVar14 + 0x5e0))();
      local_c8 = local_80;
      local_c0 = '\0';
      local_40 = uVar12;
      uVar6 = (**(code **)(*local_158 + 0x50))();
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar12 = local_40;
      uVar9 = local_58;
      plVar10 = local_50;
      if ((char)uVar6 == '\0') goto LAB_00b1671a;
      cVar4 = (**(code **)(*plVar14 + 0x5f8))();
      cVar2 = (char)uVar12;
      if (cVar4 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        if (cVar2 == '\0') {
          FUN_00d50b00();
        }
        *this_ptr = plVar14;
        *(void*)(this_ptr + 1) = 1;
        cVar4 = '\0';
        plVar16 = (int64_t *)0x0;
        goto LAB_00b16aaf;
      }
      if (plVar14[0x15] != 0) {
        plVar14[0x15] = 0;
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00d50b00();
      }
      (**(code **)(*plVar14 + 0x5e8))();
      cVar4 = (**(code **)(*plVar14 + 0x5f8))();
      if (cVar4 != '\0') {
        (**(code **)(*plVar14 + 0x5c8))();
        *(void*)(this_ptr + 1) = 0;
        if ((char)local_40 == '\0') {
          FUN_00d50b00();
          *this_ptr = plVar14;
          *(void*)(this_ptr + 1) = 1;
          cVar4 = '\0';
          plVar16 = plVar14;
          goto LAB_00b16aaf;
        }
        *this_ptr = plVar14;
        *(void*)(this_ptr + 1) = 1;
        cVar4 = '\x01';
        goto LAB_00b16d81;
      }
      if (cVar2 != '\0') {
        FUN_00d50b20();
      }
      FUN_00b173b0();
      plVar10 = local_50;
      uVar1 = (uint3)((uint)uVar6 >> 8);
      uVar11 = (uint7)uVar1;
      if (local_158 == local_50) {
        if (((char)local_58 == '\0') && (local_158 != (int64_t *)0x0)) {
          uVar9 = CONCAT71(uVar11,1);
          if (local_150 != '\0') goto LAB_00b1671a;
          uVar9 = (uint64_t)CONCAT31(uVar1,1);
          FUN_00d50b00();
        }
        else {
          uVar9 = local_58 & 0xffffffff;
        }
LAB_00b1692b:
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = local_158;
        if (local_150 == '\0') {
          if (local_158 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar9 = CONCAT71(uVar11,1);
          if (((char)local_58 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00b1692b;
        }
        uVar9 = CONCAT71(uVar11,1);
        if (((char)local_58 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00b1671a:
      local_50 = plVar10;
      local_58 = uVar9;
      lVar15 = lVar15 + 1;
      iVar5 = *(int *)((int64_t)local_60 + 0xc);
      uVar12 = local_40;
    } while (lVar15 < iVar5);
  }
  if (iVar5 < 1) {
    uVar12 = 0;
    plVar10 = (int64_t *)0x0;
  }
  else {
    lVar15 = 0;
    local_48 = 0;
    plVar16 = (int64_t *)0x0;
    do {
      lVar7 = local_60[2];
      plVar10 = *(int64_t **)(lVar7 + lVar15 * 8);
      if (plVar14 == plVar10) {
        if (((char)local_40 == '\0') && (plVar14 != (int64_t *)0x0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar10 != (int64_t *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (plVar14 == (int64_t *)0x0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          plVar14 = plVar10;
        }
        else {
          uVar8 = FUN_00d50b20();
          local_40 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          plVar14 = plVar10;
        }
      }
      cVar2 = (**(code **)(*plVar14 + 0x5f8))();
      cVar3 = (char)local_40;
      cVar4 = (char)local_48;
      if (cVar2 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        if (cVar3 == '\0') {
          FUN_00d50b00();
        }
        *this_ptr = plVar14;
        *(void*)(this_ptr + 1) = 1;
LAB_00b16aaf:
        cVar2 = '\0';
        goto LAB_00b16d86;
      }
      if (plVar16 == plVar14) {
        plVar10 = plVar16;
        uVar12 = local_48;
        if ((cVar3 != '\0') && (uVar12 = local_48, cVar4 == '\0')) {
          uVar12 = local_48 >> 8;
          FUN_00d50b00();
          uVar12 = CONCAT71((int7)uVar12,1);
        }
      }
      else {
        if (cVar3 != '\0') {
          FUN_00d50b00();
        }
        plVar10 = plVar14;
        uVar12 = local_40;
        if (((char)local_48 != '\0') && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
          uVar12 = local_40;
        }
      }
      (**(code **)(*plVar14 + 0x5e8))();
      local_48 = uVar12 & 0xffffffff;
      cVar4 = (**(code **)(*plVar14 + 0x5f8))();
      if (cVar4 != '\0') {
        (**(code **)(*plVar14 + 0x5c8))();
        if (plVar10 == plVar14) {
          local_48 = uVar12;
          if (((char)local_40 != '\0') && (local_48 = uVar12 & 0xffffffff, (char)uVar12 == '\0')) {
            local_48 = CONCAT71((int7)((uVar12 & 0xffffffff) >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if ((char)local_40 != '\0') {
            FUN_00d50b00();
          }
          local_48 = local_40;
          if (((char)uVar12 != '\0') && (local_48 = local_40, plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_48 = local_40;
          }
        }
        lVar15 = g_0275e010;
        cVar2 = (char)local_40;
        cVar4 = (char)local_48;
        if (local_50 != (int64_t *)0x0) {
          if (g_0275e010 != 0) {
            FUN_00d50b00();
          }
          lVar7 = g_0275e018;
          local_88 = lVar15;
          if (g_0275e018 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar14 + 0x5e0))();
          lVar15 = g_0275e020;
          if (g_0275e020 != 0) {
            FUN_00d50b00();
          }
          local_190 = local_88;
          local_188 = local_50;
          local_180 = lVar7;
          local_178 = local_168;
          local_170 = lVar15;
          FUN_007f7950(&local_188,&local_190,&local_180,&local_178);
          FUN_000b4da0();
          local_78 = local_70;
          if (local_68 == '\0') {
            if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_68 = '\0';
          }
          local_158 = (int64_t *)&g_02511748;
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          local_158 = &g_02511780;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          FUN_007f76c0();
          if (lVar15 != 0) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          lVar15 = g_0275e028;
          if (g_0275e028 != 0) {
            FUN_00d50b00();
          }
          lVar7 = g_0275e030;
          local_b8 = lVar15;
          local_b0 = '\x01';
          if (g_0275e030 != 0) {
            FUN_00d50b00();
          }
          local_a8 = lVar7;
          local_a0 = '\x01';
          FUN_01f6ca30();
          local_98 = local_78;
          local_90 = '\0';
          cVar2 = (char)local_40;
          (**(code **)(*local_158 + 0x5d8))();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if (local_78 != 0) {
            FUN_00d50b20();
          }
        }
        *(void*)(this_ptr + 1) = 0;
        if (cVar2 == '\0') {
          FUN_00d50b00();
        }
        *this_ptr = plVar14;
        *(void*)(this_ptr + 1) = 1;
LAB_00b16d81:
        cVar2 = '\0';
        plVar16 = plVar14;
        goto LAB_00b16d86;
      }
      lVar15 = lVar15 + 1;
      local_48 = uVar12 & 0xffffffff;
      plVar16 = plVar10;
    } while (lVar15 < *(int *)((int64_t)local_60 + 0xc));
  }
  cVar4 = (char)uVar12;
LAB_00b16977:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  cVar2 = (char)local_40;
  plVar16 = plVar10;
LAB_00b16d86:
  FUN_00d50b20();
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (plVar16 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 != '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

