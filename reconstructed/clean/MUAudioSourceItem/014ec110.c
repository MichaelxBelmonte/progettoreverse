// Function: FUN_014ec110
// Address: 014ec110
// Size: 513 bytes
// Class: MUAudioSourceItem
// === MUAudioSourceItem properties ===
//   bool            _suggestsSeparateComponentRenderers
//                   _feedbackActivationQualityLimit
//                   _feebackUpperPitchLimit
//                   _feebackLowerPitchLimit
//                   _timeOffset


float FUN_014ec110(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  int unaff_ESI;
  int64_t *this_ptr;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_34;
  
  cVar3 = (**(code **)(*this_ptr + 1000))();
  local_34 = -1;
  iVar8 = -1;
  if (cVar3 != '\0') {
    lVar4 = **(int64_t **)(this_ptr[0x21] + 0x10);
    iVar8 = -1;
    if (lVar4 != 0) {
      FUN_00d50b00();
      iVar8 = *(int *)(lVar4 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*this_ptr + 1000))();
  if ((cVar3 != '\0') && (lVar4 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar4 != 0)) {
    FUN_00d50b00();
    local_34 = *(int *)(lVar4 + 0xc);
    FUN_00d50b20();
  }
  uVar7 = param_2 - iVar8;
  lVar4 = this_ptr[0x21];
  iVar8 = *(int *)(lVar4 + 0xc);
  fVar9 = 0.0;
  if (((int)uVar7 < iVar8) && (param_1 = param_1 - local_34, -1 < param_1)) {
    uVar5 = 0;
    if (-1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    iVar2 = iVar8 + -1;
    if (param_1 < iVar8) {
      iVar2 = param_1;
    }
    if (unaff_ESI == 1) {
      if ((int)uVar5 <= iVar2) {
        uVar6 = (uint64_t)uVar5;
        fVar9 = 0.0;
        while( true ) {
          lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + uVar6 * 8);
          fVar11 = *(float *)(lVar4 + 0x10);
          if (!NAN(fVar11)) {
            fVar1 = *(float *)(lVar4 + 0x20);
            if (!NAN(fVar1)) {
              fVar11 = fVar11 + g_0240e328;
              fVar10 = g_0239425c;
              if (g_0239425c <= fVar11) {
                fVar10 = fVar11;
              }
              fVar9 = fVar9 + (float)(~-(uint)(fVar1 <= g_02394270) &
                                      (uint)SQRT(fVar1) & g_02390140 |
                                     -(uint)(fVar1 <= g_02394270) & g_023b3e04) *
                              fVar10 * fVar10;
            }
          }
          if ((uint64_t)(iVar2 + 1) - 1 == uVar6) break;
          lVar4 = this_ptr[0x21];
          uVar6 = uVar6 + 1;
        }
      }
    }
    else if ((int)uVar5 <= iVar2) {
      uVar6 = (uint64_t)uVar5;
      fVar9 = 0.0;
      while( true ) {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + uVar6 * 8);
        fVar11 = *(float *)(lVar4 + 0x10);
        if ((!NAN(fVar11)) && (fVar1 = *(float *)(lVar4 + 0x20), !NAN(fVar1))) {
          fVar11 = fVar11 + g_0240e328;
          fVar10 = g_0239425c;
          if (g_0239425c <= fVar11) {
            fVar10 = fVar11;
          }
          fVar9 = fVar9 + fVar10 * fVar1;
        }
        if ((uint64_t)(iVar2 + 1) - 1 == uVar6) break;
        lVar4 = this_ptr[0x21];
        uVar6 = uVar6 + 1;
      }
    }
  }
  return fVar9;
}

