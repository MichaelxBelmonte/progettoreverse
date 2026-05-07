// Function: FUN_002f9750
// Address: 002f9750
// Size: 1214 bytes
// Class: MDVolumeSlider
// String references:
//   "MDVolumeSlider"
// === MDVolumeSlider properties ===
//                   _meterInfo
//                   _lastValue
//                   _knobBorderStyle
//                   _image0
//                   _image1
//                   _image2
//                   _image3
//                   _image4
//                   _isDimSlider
//                   _knobOnlyHitDetection


void FUN_002f9750(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001b40a0();
  *this_ptr = &g_024ecae8;
  this_ptr[2] = &g_024ed620;
  FUN_002f9d30();
  *(void*)(this_ptr + 0x3d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fec0b == '\0') {
    FUN_002f9ff0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ec) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fec0b == '\0') {
    FUN_002fa180();
    FUN_00e87980();
  }
  FUN_002fa3e0();
  FUN_002fa710();
  FUN_002faa40();
  FUN_002fad70();
  FUN_002fb0a0();
  *(void*)(this_ptr + 0x43) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fec0b == '\0') {
    FUN_002fb3d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x219) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fec0b == '\0') {
    FUN_002fb560();
    FUN_00e87980();
  }
  return;
}

