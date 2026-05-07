// Function: FUN_0118b080
// Address: 0118b080
// Size: 731 bytes
// Class: MUPerformanceMidiExporter
// String references:
//   "MUPerformanceMidiExporter"
// === MUPerformanceMidiExporter properties ===
//   GNMidiFileTimeBase _timeBase


void FUN_0118b080(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025ee570;
  FUN_0118b3a0();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_027aad73 == '\0') {
    FUN_0118b690();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027aad73 == '\0') {
    FUN_0118b800();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027aad73 == '\0') {
    FUN_0118b970();
    FUN_00e87980();
  }
  FUN_0118bba0();
  return;
}

