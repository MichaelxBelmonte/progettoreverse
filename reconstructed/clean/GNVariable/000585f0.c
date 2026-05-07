// Function: FUN_000585f0
// Address: 000585f0
// Size: 610 bytes
// Class: GNVariable
// String references:
//   "GNVariable"
// === GNVariable properties ===
//                   _start
//                   _end
//                   _supervariable
//                   _formatter
//                   _template
//                   _componentConnector
//                   _stateMask


void FUN_000585f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02585ef0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d53ab == '\0') {
    FUN_000588d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d53ab == '\0') {
    FUN_00058a60();
    FUN_00e87980();
  }
  FUN_00058bf0();
  FUN_00058eb0();
  FUN_00059170();
  FUN_000594a0();
  return;
}

