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

