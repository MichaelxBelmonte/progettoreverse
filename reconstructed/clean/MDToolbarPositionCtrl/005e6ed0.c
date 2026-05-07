// Function: FUN_005e6ed0
// Address: 005e6ed0
// Size: 596 bytes
// Class: MDToolbarPositionCtrl
// String references:
//   "MDToolbarPositionCtrl"
// === MDToolbarPositionCtrl properties ===
//   bool            _isMuted
//   bool            _isSolo
//   float           _volume
//   float           _amplitudeScaleFactor
//   bool            _isTrackTitleEditable


void FUN_005e6ed0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_024f0ec0;
  FUN_005e71c0();
  FUN_005e74a0();
  FUN_005e7790();
  FUN_005e7a80();
  FUN_005e7d70();
  this_ptr[0x13] = 0;
  // [STATIC_INIT: property registration]
  if (g_0271f4bb == '\0') {
    FUN_005e8060();
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  // [STATIC_INIT: property registration]
  if (g_0271f4bb == '\0') {
    FUN_005e81d0();
    FUN_00e87980();
  }
  return;
}

