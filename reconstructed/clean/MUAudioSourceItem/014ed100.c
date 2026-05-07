// Function: FUN_014ed100
// Address: 014ed100
// Size: 528 bytes
// Class: MUAudioSourceItem
// === MUAudioSourceItem properties ===
//   bool            _suggestsSeparateComponentRenderers
//                   _feedbackActivationQualityLimit
//                   _feebackUpperPitchLimit
//                   _feebackLowerPitchLimit
//                   _timeOffset


void FUN_014ed100(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  int local_34;
  
  cVar1 = (**(code **)(*this_ptr + 1000))();
  local_34 = -1;
  iVar7 = -1;
  if (cVar1 != '\0') {
    lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10);
    iVar7 = -1;
    if (lVar6 != 0) {
      FUN_00d50b00();
      iVar7 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar1 = (**(code **)(*this_ptr + 1000))();
  if ((cVar1 != '\0') && (lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    local_34 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  uVar8 = param_2 - iVar7;
  iVar7 = *(int *)(this_ptr[0x21] + 0xc);
  if (((int)uVar8 < iVar7) && (param_1 = param_1 - local_34, -1 < param_1)) {
    uVar5 = 0;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    iVar2 = iVar7 + -1;
    if (param_1 < iVar7) {
      iVar2 = param_1;
    }
    if ((int)uVar5 <= iVar2) {
      uVar3 = (uint64_t)(iVar2 + 1U);
      uVar4 = (uint64_t)uVar5 + 1;
      if (uVar4 != uVar3) {
        uVar8 = iVar2 + 1U + ~uVar5;
        if ((uVar8 & 3) != 0) {
          lVar6 = -((uint64_t)uVar8 & 3);
          do {
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if (2 < (uVar3 - uVar5) - 2) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar3 != uVar4);
        }
      }
    }
  }
  return;
}

