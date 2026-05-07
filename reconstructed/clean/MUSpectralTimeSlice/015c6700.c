// Function: MUSpectralTimeSlice_takeDataFromTimeSlice
// Address: 015c6700
// Size: 1118 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice::takeDataFromTimeSlice(): inconsistent data"
//   "MUSpectralTimeSlice::getComplexSpectrum(): no complexSpectrum data"
//   "MUSpectralTimeSlice::getMagnitudeData(): no magnitude data"
//   "MUSpectralTimeSlice::getPhaseData(): no phase data"
//   "MUSpectralTimeSlice::getTrueFreqData(): no trueFreq data"
//   "MUSpectralTimeSlice::getTonalityData(): no tonality data"
//   "MUSpectralTimeSlice::getTrueTimeSampleOffsetData(): no trueTimeSampleOffsetData data"
//   "MUSpectralTimeSlice::getTransiencyData(): no transiencyData data"
//   "MUSpectralTimeSlice::getTransiencyData(): no vectorData data"
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void MUSpectralTimeSlice_takeDataFromTimeSlice(void *param_1,byte param_2,size_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *arg1;
  int64_t this_ptr;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) != *(int *)(this_ptr + 0xc))) {
    FUN_00e828a0();
  }
  if ((param_2 & 1) != 0) {
    if (*(int64_t *)(*arg1 + 0x10) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x10);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x10);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x10) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 3),param_3);
  }
  if ((param_2 & 2) != 0) {
    if (*(int64_t *)(*arg1 + 0x18) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x18);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x18);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x18) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 4) != 0) {
    if (*(int64_t *)(*arg1 + 0x20) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x20);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x20);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x20) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 8) != 0) {
    if (*(int64_t *)(*arg1 + 0x28) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x28);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x28);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x28) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x10) != 0) {
    if (*(int64_t *)(*arg1 + 0x30) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x30);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x30);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x30) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x20) != 0) {
    if (*(int64_t *)(*arg1 + 0x38) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x38);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x38);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x38) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x40) != 0) {
    if (*(int64_t *)(*arg1 + 0x40) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x40);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x40);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x40) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((char)param_2 < '\0') {
    if (*(int64_t *)(*arg1 + 0x48) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x48);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x48);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x48) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 3),param_3);
    return;
  }
  return;
}

