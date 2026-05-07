// ===================================================================
// GNSoundFileALACWriter — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (10):
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


// ============================================================
// 007bd5b0
// ============================================================
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



// ============================================================
// 007bdc90
// ============================================================
// Function: FUN_007bdc90
// Address: 007bdc90
// Size: 618 bytes
// Class: GNSoundFileALACWriter
// String references:
//   "SInt64"
//   "UInt32"
//   "_dataSize"
//   "_formatID"
//   "_bytesPerPacket"
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


void FUN_007bdc90(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_007b96b0();
  *this_ptr = &g_0252c518;
  this_ptr[0x14] = 0;
  lVar2 = FUN_007bda60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_007bda60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar2 = FUN_007bda60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_007bdf50();
  FUN_007be030();
  return;
}



// ============================================================
// 007bc3f0
// ============================================================
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

