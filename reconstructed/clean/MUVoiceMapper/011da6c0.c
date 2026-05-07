// Function: FUN_011da6c0
// Address: 011da6c0
// Size: 700 bytes
// Class: MUVoiceMapper
// String references:
//   "PNTestBinPath"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void FUN_011da6c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c6400;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba5eb == '\0') {
    FUN_011da9b0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba5eb == '\0') {
    FUN_011dab20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba5eb == '\0') {
    FUN_011dac90();
    FUN_00e87980();
  }
  FUN_011dae00();
  return;
}

