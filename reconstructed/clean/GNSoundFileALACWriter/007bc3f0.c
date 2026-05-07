// Function: FUN_007bc3f0
// Address: 007bc3f0
// Size: 847 bytes
// Class: GNSoundFileALACWriter
// String references:
//   "GNSoundFileALACWriter"
// === GNSoundFileALACWriter properties ===
//   SInt64          _dataSize
//   UInt32          _formatID
//   UInt32          _bytesPerPacket
//   UInt64          _time
//   UInt32          _sampleRate
//   short           _bitsPerSample
//                   _sampleFramesLeft
//                   _frameSizes
//                   _numberValidFrames
//                   _theMagicCookie


void FUN_007bc3f0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_007b7610();
  *this_ptr = &g_025404d8;
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_0275d80b == '\0') {
    FUN_007bc810();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275d80b == '\0') {
    FUN_007bc9a0();
    FUN_00e87980();
  }
  FUN_007bcb30();
  FUN_007bcdf0();
  FUN_007bd0b0();
  this_ptr[0xe] = 0;
  // [STATIC_INIT: property registration]
  if (g_0275d80b == '\0') {
    FUN_007bd370();
    FUN_00e87980();
  }
  this_ptr[0xf] = *(void*)(arg1 + 0x78);
  return;
}

