// Function: FUN_009411fc
// Address: 009411fc
// Size: 988 bytes
// Class: GNUni
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertSecretDataFromIlok2ToPublic was passed a storage record with the wrong bRecordtype (0x%02X)"
//   "static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromIlok2ToPublic(con...
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


void FUN_009411fc(byte *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t lVar4;
  char *arg1;
  byte bVar5;
  void*this_ptr;
  int iVar6;
  
  *this_ptr = &g_0251c200;
  lVar4 = 0;
  *(void*)(this_ptr + 1) = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  *(void*)(this_ptr + 0x10) = 0;
  lVar3 = 0;
  if (*arg1 != -0x78) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, bool &, bool &, int32_t)"
                 ,&g_00002cf7);
    FUN_009bd14b();
    lVar4 = this_ptr[2];
    lVar3 = this_ptr[3];
  }
  *(void*)((int64_t)this_ptr + 0x74) = 1;
  *(void*)(this_ptr + 1) = *(void*)(arg1 + 4);
  if ((uint64_t)(lVar3 - lVar4) < 4) {
    FUN_0088d550();
  }
  else if (lVar3 - lVar4 != 4) {
    this_ptr[3] = lVar4 + 4;
  }
  FUN_009740dc();
  lVar4 = FUN_008e4ece();
  *(void*)((int64_t)this_ptr + 100) = *(void*)(lVar4 + 0x30);
  uVar1 = *(ushort *)(arg1 + 2);
  *(uint *)(this_ptr + 0xd) = uVar1 & 0x1f;
  switch(uVar1 >> 10 & 3) {
  case 0:
    *(void*)(this_ptr + 0xc) = 0;
    switch(arg1[1]) {
    case '\0':
      *(void*)((int64_t)this_ptr + 100) = 0;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x01':
      *(void*)((int64_t)this_ptr + 100) = 1;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x02':
      *(void*)((int64_t)this_ptr + 100) = 2;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x03':
      *(void*)((int64_t)this_ptr + 100) = 3;
      iVar6 = 0;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    default:
      iVar6 = 0;
LAB_009414bd:
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
    }
    break;
  case 1:
    *(void*)(this_ptr + 0xc) = 1;
    switch(arg1[1]) {
    case '\0':
      *(void*)((int64_t)this_ptr + 100) = 0;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x01':
      *(void*)((int64_t)this_ptr + 100) = 1;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x02':
      *(void*)((int64_t)this_ptr + 100) = 2;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    case '\x03':
      *(void*)((int64_t)this_ptr + 100) = 3;
      iVar6 = 1;
      switch(uVar1 >> 6 & 3) {
      case 1:
        goto switchD_009413fa_caseD_1;
      case 2:
        goto switchD_009413fa_caseD_2;
      case 3:
        goto switchD_009413fa_caseD_3;
      }
      break;
    default:
      iVar6 = 1;
      goto LAB_009414bd;
    }
    break;
  case 2:
    *(void*)(this_ptr + 0xc) = 2;
    iVar6 = 2;
    switch(uVar1 >> 6 & 3) {
    case 1:
switchD_009413fa_caseD_1:
      *(void*)(this_ptr + 0xb) = 1;
      goto LAB_00941579;
    case 2:
switchD_009413fa_caseD_2:
      *(void*)(this_ptr + 0xb) = 2;
      goto LAB_00941579;
    case 3:
switchD_009413fa_caseD_3:
      *(void*)(this_ptr + 0xb) = 3;
      goto LAB_00941579;
    }
    break;
  case 3:
    *(void*)(this_ptr + 0xc) = 3;
    iVar6 = 3;
    switch(uVar1 >> 6 & 3) {
    case 1:
      goto switchD_009413fa_caseD_1;
    case 2:
      goto switchD_009413fa_caseD_2;
    case 3:
      goto switchD_009413fa_caseD_3;
    }
  }
  if (iVar6 == 2) {
    *(void*)(this_ptr + 0xb) = 0;
  }
  else {
    *(void*)(this_ptr + 0xb) = 5;
  }
LAB_00941579:
  *(void*)((int64_t)this_ptr + 0x5c) = 0x10;
  bVar5 = (byte)(uVar1 >> 8);
  *(byte *)(this_ptr + 0xe) = (iVar6 == 3 || iVar6 == 2) | bVar5 >> 4 & 1;
  *(byte *)((int64_t)this_ptr + 0x71) = bVar5 & 1;
  bVar2 = bVar5 >> 5 & 1;
  *(byte *)((int64_t)this_ptr + 0x72) = bVar2;
  bVar5 = bVar5 >> 6 & 1;
  *(byte *)((int64_t)this_ptr + 0x73) = bVar5;
  *param_2 = *param_2 | bVar2;
  *param_1 = *param_1 | bVar5;
  return;
}

