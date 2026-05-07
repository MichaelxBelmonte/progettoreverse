// Function: FUN_007bd5b0
// Address: 007bd5b0
// Size: 619 bytes
// Class: GNSoundFileALACWriter
// String references:
//   "UInt32"
//   "_sampleRate"
//   "short"
//   "UInt64"
//   "_time"
//   "_bitsPerSample"
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


void FUN_007bd5b0(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_007bc3f0();
  *this_ptr = &g_02538910;
  FUN_007bd8a0();
  this_ptr[0x11] = 0;
  lVar2 = FUN_007bc130();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x12) = 0;
  lVar2 = FUN_007bc130();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_007bd980();
  *(void*)(this_ptr + 0x14) = 0;
  lVar2 = FUN_007bc130();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

