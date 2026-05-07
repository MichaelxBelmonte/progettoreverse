// Function: FUN_00940f84
// Address: 00940f84
// Size: 591 bytes
// Class: MUPitchMapper
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertDevDataFromIlok2ToPublic was passed a storage record with the wrong bRecordtype (0x%02X)"
//   "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromIlok2ToPublic(con...
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


void FUN_00940f84(byte *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte bVar5;
  ushort uVar6;
  char *arg1;
  int64_t lVar7;
  void*this_ptr;
  
  *this_ptr = &g_0251c198;
  *(void*)(this_ptr + 1) = 0;
  lVar7 = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  *(void*)((int64_t)this_ptr + 0x4d) = 0;
  lVar3 = 0;
  if (*arg1 != -0x7c) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, bool &, bool &, int32_t)"
                 ,&g_00002c71);
    FUN_009bd14b();
    lVar7 = this_ptr[2];
    lVar3 = this_ptr[3];
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 1;
  *(void*)(this_ptr + 1) = *(void*)(arg1 + 4);
  if ((uint64_t)(lVar3 - lVar7) < 4) {
    FUN_0088d550();
  }
  else if (lVar3 - lVar7 != 4) {
    this_ptr[3] = lVar7 + 4;
  }
  FUN_009740dc();
  uVar4 = this_ptr[6] - this_ptr[5];
  if (uVar4 < 0x10) {
    FUN_0088d550();
  }
  else if (uVar4 != 0x10) {
    this_ptr[6] = this_ptr[5] + 0x10;
  }
  FUN_009740dc();
  FUN_009740dc();
  FUN_009740dc();
  FUN_009740dc();
  uVar1 = *(ushort *)(arg1 + 2);
  uVar6 = uVar1 & 3;
  if ((((uVar1 >> 2 & 3) == uVar6) && ((uVar1 >> 4 & 3) == uVar6)) && ((uVar1 >> 6 & 3) == uVar6)) {
    switch(uVar6) {
    case 0:
      *(void*)(this_ptr + 8) = 4;
      break;
    case 1:
      *(void*)(this_ptr + 8) = 1;
      break;
    case 2:
      *(void*)(this_ptr + 8) = 2;
      break;
    case 3:
      *(void*)(this_ptr + 8) = 3;
    }
  }
  else {
    *(void*)(this_ptr + 8) = 5;
    *(void*)((int64_t)this_ptr + 0x4b) = 0;
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0x10;
  bVar2 = (byte)(uVar1 >> 8);
  *(byte *)(this_ptr + 9) = bVar2 & 1;
  bVar5 = bVar2 >> 5 & 1;
  *(byte *)((int64_t)this_ptr + 0x49) = bVar5;
  bVar2 = bVar2 >> 6 & 1;
  *(byte *)((int64_t)this_ptr + 0x4a) = bVar2;
  if (*(char *)((int64_t)this_ptr + 0x4b) != '\0') {
    *param_2 = *param_2 | bVar5;
    *param_1 = *param_1 | bVar2;
  }
  return;
}

