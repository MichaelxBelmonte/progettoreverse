// Function: FUN_01239760
// Address: 01239760
// Size: 942 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// String references:
//   "MUAudioEffectRenderProcessorIdentifier"
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_01239760(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025ccb30;
  FUN_01239b60();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_01239de0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_01239f50();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_0123a0c0();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_0123a230();
    FUN_00e87980();
  }
  return;
}

