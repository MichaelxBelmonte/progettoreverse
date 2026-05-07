// Function: FUN_007c7bc0
// Address: 007c7bc0
// Size: 2403 bytes
// Class: GNAudioHALDevice
// String references:
//   "GNAudioHALDevice"
// === GNAudioHALDevice properties ===
//                   _inputChannelCount
//                   _outputChannelCount
//                   _errorDescription
//                   _outputBuffersDidUnderrfftun
//                   _reloadRequestedByDriver
//                   _bufferUnderruns
//                   _usedInputChannelIndexes
//                   _usedOutputChannelIndexes
//                   _switchInputBuffersLock
//                   _inputDeviceID
//                   _outputDeviceID
//                   _inputStreamID
//                   _outputStreamID
//                   _supportedSampleRates
//                   _supportedBufferSizes
//                   _maxOutputChannelCount
//                   _maxInputChannelCount
//                   _changeBuffserSizePending
//                   _currentInputBufferWriteIndex


void FUN_007c7bc0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t arg1;
  void*this_ptr;
  
  FUN_007c71c0();
  *this_ptr = &g_0252f870;
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c8620();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c87b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c8940();
    FUN_00e87980();
  }
  uVar1 = *(void*)(arg1 + 0xdc);
  uVar2 = *(void*)(arg1 + 0xe0);
  uVar3 = *(void*)(arg1 + 0xe4);
  *(void*)(this_ptr + 0x1b) = *(void*)(arg1 + 0xd8);
  *(void*)((int64_t)this_ptr + 0xdc) = uVar1;
  *(void*)(this_ptr + 0x1c) = uVar2;
  *(void*)((int64_t)this_ptr + 0xe4) = uVar3;
  *(void*)(this_ptr + 0x1d) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c8ad0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xec) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c8c60();
    FUN_00e87980();
  }
  FUN_007c8df0();
  FUN_007c9120();
  *(void*)(this_ptr + 0x20) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c9450();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x104) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c95e0();
    FUN_00e87980();
  }
  FUN_007c9770();
  *(void*)(this_ptr + 0x22) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c9a30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275dddb == '\0') {
    FUN_007c9bc0();
    FUN_00e87980();
  }
  uVar4 = *(void*)(arg1 + 0x120);
  this_ptr[0x23] = *(void*)(arg1 + 0x118);
  this_ptr[0x24] = uVar4;
  return;
}

