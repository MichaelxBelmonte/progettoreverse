// Function: FUN_0098ba8a
// Address: 0098ba8a
// Size: 530 bytes
// Class: GNUni
// String references:
//   "/System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa"
//   "Cert does not have a public key with the requested PKStandardID (%d)"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Certifier.cpp"
//   "pace::Certifier::Certifier(const std::__1::string &, const std::__1::string &, const vector<uint8_t...
//   "The given private key does not correspond to the public key in the cert for the PKStandardID (%d)"
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


void FUN_0098ba8a(string *param_1,uint64_t param_2,void*param_3,uint32_t param_4)

{
  char cVar1;
  uint32_t uVar2;
  string *psVar3;
  void*this_ptr;
  uint8_t local_e8 [112];
  void*local_78;
  code *local_70;
  void*local_68;
  void*local_60;
  void*local_58;
  void*local_50;
  int local_44;
  void*local_40;
  void*local_38;
  
  *this_ptr = &g_02521200;
  local_50 = this_ptr + 1;
  local_40 = param_3;
  FUN_009af98e();
  psVar3 = (string *)(this_ptr + 0x118);
  *(void*)(this_ptr + 0x118) = 0;
  local_58 = this_ptr + 0x119;
  FUN_00991548();
  local_38 = this_ptr + 0x154;
  this_ptr[0x156] = 0;
  this_ptr[0x155] = 0;
  this_ptr[0x154] = 0;
  local_60 = this_ptr + 0x157;
  std::string::string(param_1,psVar3);
  std::string::string(param_1,psVar3);
  *(void*)((int64_t)this_ptr + 0xaec) = 0;
  *(void*)(this_ptr + 0x15e) = param_4;
  uVar2 = FUN_009af724();
  *(void*)(this_ptr + 0x15d) = uVar2;
  if (local_40 != (void*)0x0) {
    if (local_38 != local_40) {
      FUN_009ad770(local_40,local_40[1]);
    }
    FUN_00991dc8(local_e8,&local_44);
    if (local_44 == -1) {
      FUN_00925fd0();
      FUN_00926010();
      local_70 = FUN_009595d8;
      local_68 = &LAB_009977a0;
      local_78 = this_ptr + 0x15d;
      FUN_00983230();
      FUN_00928ab0("pace::Certifier::Certifier(const std::__1::string &, const std::__1::string &, const vector<uint8_t> &, const vector<uint8_t> *, const uint32_t)"
                   ,0x4e);
      FUN_009c720b();
    }
    cVar1 = FUN_009b03da();
    if (cVar1 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      local_70 = FUN_009595d8;
      local_68 = &LAB_009977a0;
      local_78 = this_ptr + 0x15d;
      FUN_00983230();
      FUN_00928ab0("pace::Certifier::Certifier(const std::__1::string &, const std::__1::string &, const vector<uint8_t> &, const vector<uint8_t> *, const uint32_t)"
                   ,0x54);
      FUN_009c720b();
    }
  }
  return;
}

