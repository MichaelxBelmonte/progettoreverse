// Function: FUN_011bbe70
// Address: 011bbe70
// Size: 878 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


void FUN_011bbe70(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_011b5fd0();
  *this_ptr = &g_0260e720;
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b518b == '\0') {
    FUN_011bc290();
    FUN_00e87980();
  }
  FUN_011bc400();
  FUN_011bc680();
  FUN_011bc970();
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b518b == '\0') {
    FUN_011bcc60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b518b == '\0') {
    FUN_011bcdd0();
    FUN_00e87980();
  }
  FUN_011bcf40();
  FUN_011bd1c0();
  FUN_011bd4a0();
  FUN_011bd780();
  return;
}

