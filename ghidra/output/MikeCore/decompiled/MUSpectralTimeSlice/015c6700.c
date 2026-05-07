// Function: FUN_015c6700
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


/* WARNING: Type propagation algorithm not settling */

void FUN_015c6700(void *param_1,byte param_2,size_t param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) != *(int *)(unaff_RDI + 0xc))) {
    FUN_00e828a0();
  }
  if ((param_2 & 1) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x10) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x10) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 3),param_3);
  }
  if ((param_2 & 2) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x18) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x18);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x18);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x18) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 4) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x20) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x20);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x20);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x20) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 8) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x28) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x28) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x10) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x30) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x30);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x30);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x30) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x20) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x38) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x38);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x38);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x38) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x40) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x40) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x40) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((char)param_2 < '\0') {
    if (*(longlong *)(*unaff_RSI + 0x48) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x48);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x48);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x48) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 3),param_3);
    return;
  }
  return;
}


