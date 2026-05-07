// Function: FUN_017792c0
// Address: 017792c0
// Size: 542 bytes
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


float FUN_017792c0(float param_1)

{
  void *pvVar1;
  int64_t lVar2;
  void* in_ECX;
  int64_t *this_ptr;
  int64_t *plVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  if ((((char)this_ptr[0xc] != '\0') && (this_ptr[8] != 0)) && (this_ptr[9] == 0)) {
    (**(code **)(*this_ptr + 0x1a0))();
  }
  plVar3 = (int64_t *)this_ptr[9];
  if (plVar3 != (int64_t *)0x0) {
    if (g_0239394c <= param_1) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (param_1 <= g_024120f0) {
        if (pvVar1 != (void *)0x0) {
          plVar3 = (int64_t *)this_ptr[9];
          lVar2 = FUN_00e8b990();
          if (lVar2 != 0) {
            plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
          }
        }
        dVar5 = (double)(**(code **)(*plVar3 + 0x380))((double)param_1);
        return (float)dVar5;
      }
      if (pvVar1 != (void *)0x0) {
        plVar3 = (int64_t *)this_ptr[9];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(g_02412068);
      fVar4 = (float)dVar5;
      plVar3 = (int64_t *)this_ptr[9];
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        plVar3 = (int64_t *)this_ptr[9];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(g_024120e0);
      fVar6 = fVar4 - (float)dVar5;
      param_1 = param_1 + g_024120f4;
    }
    else {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        plVar3 = (int64_t *)this_ptr[9];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(g_024179c8);
      fVar4 = (float)dVar5;
      plVar3 = (int64_t *)this_ptr[9];
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        plVar3 = (int64_t *)this_ptr[9];
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      dVar5 = (double)(**(code **)(*plVar3 + 0x380))(g_024120e8);
      fVar6 = fVar4 - (float)dVar5;
      param_1 = g_0239394c - param_1;
    }
    param_1 = param_1 * fVar6 + fVar4;
  }
  return param_1;
}

