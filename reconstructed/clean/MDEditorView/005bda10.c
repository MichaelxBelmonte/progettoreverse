// Function: FUN_005bda10
// Address: 005bda10
// Size: 1159 bytes
// Class: MDEditorView
// String references:
//   "MDEditorView"
// === MDEditorView properties ===
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


void FUN_005bda10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0059ed40();
  *this_ptr = &g_024ee5b8;
  this_ptr[2] = &g_024efc60;
  this_ptr[0x28] = &g_024efca0;
  this_ptr[0x29] = &g_024efcf0;
  this_ptr[0x2a] = &g_024efd20;
  FUN_005bdee0();
  *(void*)(this_ptr + 0xa8) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be210();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x541) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be3a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x544) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be530();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xa9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be780();
    FUN_00e87980();
  }
  FUN_005be9d0();
  FUN_005becf0();
  return;
}

