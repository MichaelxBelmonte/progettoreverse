// Function: FUN_017737b0
// Address: 017737b0
// Size: 1005 bytes
// Class: GNInt
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


uint64_t FUN_017737b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  uint64_t unaff_R15;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  float fVar7;
  uint32_t uVar9;
  uint64_t uVar8;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  uVar9 = 0;
  fVar7 = g_028adb78;
  if ((g_028adb78 != 0.0) || (NAN(g_028adb78))) goto LAB_01773b8b;
  FUN_00d6f370();
  plVar2 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01773820;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_01773820:
    lVar1 = g_027cdfc0;
    if (g_027cdfc0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d70700();
    uVar9 = extraout_XMM0_Da;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    lVar1 = g_027cdfc0;
    if (cVar3 == '\0') {
      uVar4 = 0;
LAB_01773950:
      lVar1 = g_027cdfc8;
      if (g_027cdfc8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      cVar3 = FUN_00d70700();
      uVar9 = extraout_XMM0_Da_00;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      lVar1 = g_027cdfc8;
      if (cVar3 != '\0') {
        local_38 = uVar4;
        if (g_027cdfc8 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_98 = lVar1;
        local_90 = '\x01';
        pplVar6 = &local_48;
        (**(code **)(*plVar2 + 0x88))(uVar9,&local_98);
        plVar5 = local_48;
        uVar9 = FUN_00053ac0();
        if (plVar5 == (int64_t *)0x0) {
LAB_01773a11:
          pplVar6 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar5 + 0x360))();
          cVar3 = FUN_00e85ea0();
          uVar9 = extraout_XMM0_Da_01;
          if (cVar3 == '\0') goto LAB_01773a11;
        }
        plVar5 = *pplVar6;
        if (plVar5 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          uVar4 = local_38;
        }
        else {
          if (*(char *)(pplVar6 + 1) == '\0') {
            uVar9 = FUN_00d50b00();
          }
          else {
            *(void*)(pplVar6 + 1) = 0;
          }
          uVar4 = 1;
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        lVar1 = g_027cdfc8;
        local_88 = 0;
        local_80 = '\0';
        if (g_027cdfc8 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_78 = lVar1;
        local_70 = '\x01';
        uVar9 = (**(code **)(*plVar2 + 0x80))(uVar9,&local_78);
        if ((local_70 != '\0') && (local_78 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        lVar1 = g_027cdfc0;
        if (plVar5 != (int64_t *)0x0) {
          local_60 = '\0';
          local_68 = plVar5;
          if (g_027cdfc0 != 0) {
            uVar9 = FUN_00d50b00();
          }
          local_58 = lVar1;
          local_50 = '\x01';
          (**(code **)(*plVar2 + 0x80))(uVar9,&local_58);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01773b45;
        }
      }
      plVar5 = (int64_t *)0x0;
    }
    else {
      if (g_027cdfc0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      pplVar6 = &local_48;
      (**(code **)(*plVar2 + 0x88))(uVar9,&local_b8);
      plVar5 = local_48;
      uVar4 = FUN_00053ac0();
      if (plVar5 == (int64_t *)0x0) {
LAB_017738dd:
        pplVar6 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar3 = FUN_00e85ea0();
        unaff_R15 = uVar4;
        if (cVar3 == '\0') goto LAB_017738dd;
      }
      plVar5 = *pplVar6;
      if (plVar5 == (int64_t *)0x0) {
        uVar4 = 0;
        plVar5 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar6 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar6 + 1) = 0;
        }
        uVar4 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (int64_t *)0x0) goto LAB_01773950;
    }
LAB_01773b45:
    FUN_00d50b20();
    if (plVar5 != (int64_t *)0x0) {
      uVar8 = FUN_00d459e0();
      uVar9 = (uint32_t)((uint64_t)uVar8 >> 0x20);
      g_028adb78 = (float)uVar8;
      fVar7 = g_028adb78;
      if ((char)uVar4 != '\0') {
        FUN_00d50b20();
        uVar9 = 0;
        fVar7 = g_028adb78;
      }
      goto LAB_01773b8b;
    }
  }
  g_028adb78 = 440.0;
  uVar9 = 0;
  fVar7 = g_02411fd0;
LAB_01773b8b:
  return CONCAT44(uVar9,fVar7);
}

