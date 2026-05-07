// Function: FUN_018064c0
// Address: 018064c0
// Size: 775 bytes
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


uint FUN_018064c0(void)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  uint unaff_ESI;
  uint uVar6;
  int64_t this_ptr;
  uint uVar7;
  char *pcVar8;
  int64_t local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(this_ptr + 0x5e) == '\0') {
    return unaff_ESI;
  }
  FUN_017e1b40();
  pcVar8 = local_50;
  local_40[0] = local_50[0];
  pcVar4 = pcVar8;
  if (local_50[0] == '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_48 = local_58;
  FUN_017e1bf0();
  local_38[0] = local_50[0];
  pcVar4 = pcVar8;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(this_ptr + 0x68) == 0) {
    FUN_017e1ac0();
    local_60 = local_58;
    if (local_48 == local_58) {
      lVar1 = local_48;
      if (((local_40[0] == '\0') && (local_48 != 0)) && (local_50[0] != '\0')) {
        local_40[0] = '\x01';
        local_60 = local_48;
        goto LAB_018065ef;
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_48 != 0 && local_40[0] != '\0') {
          FUN_00d50b20();
        }
        pcVar8 = local_40;
      }
      else {
        if (local_48 != 0 && local_40[0] != '\0') {
          FUN_00d50b20();
        }
        local_40[0] = '\x01';
      }
LAB_018065ef:
      *pcVar8 = '\0';
      local_48 = local_60;
      lVar1 = local_58;
    }
    if ((local_50[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bc0();
    if (((local_38[0] == '\0') && (local_58 != 0)) && (local_50[0] != '\0')) {
      local_38[0] = '\x01';
    }
    else if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = local_48;
  if (*(char *)(this_ptr + 0x5e) == '\0') goto joined_r0x01806773;
  cVar2 = FUN_01716a10();
  uVar7 = 0;
  if (cVar2 != '\0') {
    bVar3 = FUN_01716a10();
    uVar7 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 4;
  }
  cVar2 = FUN_01716a10();
  if (cVar2 == '\0') {
    cVar2 = FUN_01716a10();
    uVar5 = 2;
    if (cVar2 == '\0') goto LAB_018066f2;
  }
  else {
LAB_018066f2:
    uVar5 = uVar7;
    if (uVar7 == 0) goto joined_r0x01806773;
  }
  uVar7 = uVar5 - 1;
  if ((uVar5 & 3) != 0) {
    uVar6 = 0;
    do {
      unaff_ESI = (unaff_ESI >> 6 & 1) + (unaff_ESI & 0x3f) * 2;
      uVar6 = uVar6 + 1;
    } while ((uVar5 & 3) != uVar6);
    uVar5 = uVar5 - uVar6;
  }
  if (2 < uVar7) {
    do {
      unaff_ESI = (unaff_ESI >> 3 & 1) +
                  (unaff_ESI >> 4 & 1 |
                  (unaff_ESI >> 4 & 2) + ((unaff_ESI >> 6 & 1) + (unaff_ESI & 0xf) * 2) * 4 & 0x3f)
                  * 2;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
  }
joined_r0x01806773:
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return unaff_ESI;
}

