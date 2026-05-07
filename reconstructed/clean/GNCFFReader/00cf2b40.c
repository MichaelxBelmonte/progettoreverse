// Function: FUN_00cf2b40
// Address: 00cf2b40
// Size: 863 bytes
// Class: GNCFFReader
// String references:
//   "GNCFFReader"
// === GNCFFReader properties ===
//                   _isWAVE64
//                   _blockAlignment
//                   _bytesPerSample
//                   _avarageBytesPerSecond
//                   _msAdpcmSamplesPerBlock
//                   _msAdpcmBlockSize
//                   _msAdpcmNumCoefficients
//                   _dviAdpcmSamplesPerBlock
//                   _dviAdpcmBlockSize
//   short *         _dviSamples


void FUN_00cf2b40(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258fe48;
  FUN_00cf2f50();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02775cdb == '\0') {
    FUN_00cf3210();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02775cdb == '\0') {
    FUN_00cf33a0();
    FUN_00e87980();
  }
  FUN_00cf3530();
  FUN_00cf3860();
  FUN_00cf3b20();
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_02775cdb == '\0') {
    FUN_00cf3de0();
    FUN_00e87980();
  }
  return;
}

