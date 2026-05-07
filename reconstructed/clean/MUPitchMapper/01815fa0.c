// Function: FUN_01815fa0
// Address: 01815fa0
// Size: 584 bytes
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


uint64_t FUN_01815fa0(void)

{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int iVar9;
  int64_t *this_ptr;
  uint uVar10;
  int64_t local_60;
  char local_58;
  int local_48;
  
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar3 = *this_ptr;
  if (lVar3 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar3 + 0xc)) {
      uVar4 = FUN_017e4480();
      if (uVar4 < 0x80) {
        piVar1 = (int *)(*(int64_t *)(local_60 + 0x10) + (uint64_t)uVar4 * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    FUN_01916320();
  }
  if (local_60 == 0) {
    uVar7 = 0x3c;
  }
  else {
    iVar8 = *(int *)(local_60 + 0x18);
    iVar2 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar2 = iVar8;
    }
    uVar7 = 0x3c;
    if (3 < iVar8) {
      uVar10 = iVar2 >> 2;
      lVar3 = *(int64_t *)(local_60 + 0x10);
      uVar4 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar7 = 0x3c;
        uVar6 = 0;
        iVar5 = 0;
      }
      else {
        uVar6 = 0;
        uVar7 = 0x3c;
        iVar8 = 0;
        do {
          while( true ) {
            iVar2 = *(int *)(lVar3 + uVar6 * 4);
            iVar9 = iVar8;
            if (iVar8 < iVar2) {
              iVar9 = iVar2;
            }
            iVar5 = *(int *)(lVar3 + 4 + uVar6 * 4);
            if (iVar8 < iVar2) {
              uVar7 = uVar6 & 0xffffffff;
            }
            iVar2 = (int)uVar6;
            if (iVar9 < iVar5) break;
            iVar8 = *(int *)(lVar3 + 8 + uVar6 * 4);
            iVar5 = iVar9;
            if (iVar8 <= iVar9) goto LAB_018161ac;
LAB_0181618b:
            iVar5 = iVar8;
            uVar7 = (uint64_t)(iVar2 + 2);
            iVar8 = *(int *)(lVar3 + 0xc + uVar6 * 4);
            if (iVar8 <= iVar5) goto LAB_01816160;
LAB_018161b7:
            uVar7 = (uint64_t)(iVar2 + 3);
            uVar6 = uVar6 + 4;
            iVar5 = iVar8;
            if ((uVar10 & 0xfffffffc) == (uint)uVar6) goto LAB_018161c3;
          }
          uVar7 = (uint64_t)(iVar2 + 1);
          iVar8 = *(int *)(lVar3 + 8 + uVar6 * 4);
          if (iVar5 < iVar8) goto LAB_0181618b;
LAB_018161ac:
          iVar8 = *(int *)(lVar3 + 0xc + uVar6 * 4);
          if (iVar5 < iVar8) goto LAB_018161b7;
LAB_01816160:
          uVar6 = uVar6 + 4;
          iVar8 = iVar5;
        } while ((uVar10 & 0xfffffffc) != (uint)uVar6);
      }
LAB_018161c3:
      if (uVar4 != 0) {
        uVar6 = uVar6 & 0xffffffff;
        do {
          iVar8 = *(int *)(lVar3 + uVar6 * 4);
          if (iVar5 < iVar8) {
            uVar7 = uVar6 & 0xffffffff;
            iVar5 = iVar8;
          }
          uVar6 = uVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    FUN_00d50b20();
  }
  return uVar7;
}

