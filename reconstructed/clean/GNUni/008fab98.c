// Function: FUN_008fab98
// Address: 008fab98
// Size: 1242 bytes
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


int FUN_008fab98(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int local_3c;
  uint32_t local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x52;
  lVar7 = this_ptr + 0x51;
  lVar8 = this_ptr + 0x50;
  lVar9 = this_ptr + 0x38;
  lVar10 = this_ptr + 0x20;
  lVar11 = this_ptr + 0x1c;
  lVar12 = this_ptr + 0x18;
  lVar13 = this_ptr + 0x14;
  lVar14 = this_ptr + 0x10;
  lVar15 = this_ptr + 0xc;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_3c,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12
                       ,lVar13,lVar14,lVar15,uVar16,uVar17,uVar18);
    if (local_3c == 0) break;
    switch(local_32) {
    case 1:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 8) = local_38;
        *(void*)(this_ptr + 0x149) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x14a) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x14b) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 4:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x14c) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 5:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x14d) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x14e) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xb:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x14f) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xe:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x150) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x11:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x151) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x13:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x152) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x14:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x153) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x15:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x154) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x1c:
      if (local_3c == 0xc) {
        iVar3 = FUN_008e84b4();
        *(void*)(this_ptr + 0x155) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x1d:
      if (local_3c == 0xc) {
        iVar3 = FUN_008e9700();
        *(void*)(this_ptr + 0x156) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x1e:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x157) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*arg1 + 0xd0))();
  if ((uVar16 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(arg1 + 3) = (int)arg1[3] + -1;
  return iVar3 + iVar2 + iVar1;
}

