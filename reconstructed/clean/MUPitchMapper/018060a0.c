// Function: FUN_018060a0
// Address: 018060a0
// Size: 793 bytes
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


void FUN_018060a0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_40;
  char local_38;
  
  FUN_017e1d40();
  if (local_68 == '\0') {
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_70 == 0) {
    return;
  }
  local_58 = -1;
  do {
    do {
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) {
        FUN_01916320();
        FUN_00d50b20();
        return;
      }
      pvVar6 = _pthread_getspecific((void*)*(void*)(local_70 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_017dca70();
      FUN_017e1a60();
      iVar5 = FUN_01715480();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1a60();
      iVar5 = iVar4 - iVar5;
      iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
      uVar1 = *(uint64_t *)(local_40 + 0x18);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = (uint)(uVar1 >> ((((byte)(iVar5 >> 0x1f) & 0xc) + (char)iVar5) * '\x04' & 0x3f)) & 0xf
      ;
    } while (uVar9 == 0xf);
    FUN_017e1dd0();
    lVar2 = *(int64_t *)(local_40 + 0x50);
    cVar3 = (char)(uVar9 * 0x25 >> 8);
    iVar5 = *(int *)(lVar2 + 0x18);
    lVar10 = (int64_t)iVar5;
    iVar7 = iVar5 + 3;
    if (-1 < lVar10) {
      iVar7 = iVar5;
    }
    uVar9 = (uint)(byte)((char)uVar9 +
                        ((byte)(((byte)((char)uVar9 - cVar3) >> 1) + cVar3) >> 2) * -7);
    if (3 < lVar10) {
      lVar8 = 0;
      do {
        if (*(uint *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 4) == uVar9) goto LAB_018062ea;
        lVar8 = lVar8 + 1;
      } while (iVar7 >> 2 != (int)lVar8);
    }
    FUN_00c8e340();
    *(uint *)(*(int64_t *)(lVar2 + 0x10) + lVar10) = uVar9;
LAB_018062ea:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1dd0();
    lVar2 = *(int64_t *)(local_40 + 0x58);
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
    iVar5 = *(int *)(lVar2 + 0x18);
    lVar10 = (int64_t)iVar5;
    iVar7 = iVar5 + 3;
    if (-1 < lVar10) {
      iVar7 = iVar5;
    }
    if (3 < lVar10) {
      iVar7 = iVar7 >> 2;
      lVar8 = 0;
      do {
        if (*(int *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 4) == iVar4) goto LAB_0180638a;
        lVar8 = lVar8 + 1;
      } while (iVar7 != (int)lVar8);
    }
    FUN_00c8e340(iVar7,1);
    *(int *)(*(int64_t *)(lVar2 + 0x10) + lVar10) = iVar4;
LAB_0180638a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  } while( true );
}

