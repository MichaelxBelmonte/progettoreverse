// Function: FUN_007b96b0
// Address: 007b96b0
// Size: 2638 bytes
// Class: GNSoundFileALACReader
// String references:
//   "GNSoundFileALACReader"
// === GNSoundFileALACReader properties ===
//                   _bitsPerChannel
//                   _channelsPerFrame
//                   _modificationTime
//                   _fileSize
//                   _framesPerPacket
//                   _formatFlags
//                   _dataLocations
//                   _lastFrameIndex
//                   _loadedSampleFrames
//                   _theReadBuffer
//                   _theWriteBuffer
//                   _frameSizesList
//                   _errorWhileReading
//                   _kukiData


void FUN_007b96b0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int64_t arg1;
  void*this_ptr;
  
  FUN_007b58a0();
  *this_ptr = &g_025400d8;
  uVar1 = *(void*)(arg1 + 0x34);
  uVar2 = *(void*)(arg1 + 0x38);
  uVar3 = *(void*)(arg1 + 0x3c);
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 0x30);
  *(void*)((int64_t)this_ptr + 0x34) = uVar1;
  *(void*)(this_ptr + 7) = uVar2;
  *(void*)((int64_t)this_ptr + 0x3c) = uVar3;
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007ba1a0();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007ba330();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007ba4c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007ba650();
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007ba7e0();
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007ba970();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007bab00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007bac90();
    FUN_00e87980();
  }
  FUN_007bae20();
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007bb0e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272cd03 == '\0') {
    FUN_007bb270();
    FUN_00e87980();
  }
  FUN_007bb400();
  FUN_007bb6c0();
  FUN_007bb980();
  return;
}

