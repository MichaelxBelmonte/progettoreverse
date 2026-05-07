// Function: FUN_00205030
// Address: 00205030
// Size: 528 bytes
// Class: GNUIDObjectConnection
// String references:
//   "GNUIDObjectConnection"
// === GNUIDObjectConnection properties ===
//                   _propertyName
//                   _target
//                   _ownsTarget
//                   _needsToBeEstablished
//                   _association


void FUN_00205030(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026a1158;
  FUN_002052c0();
  FUN_002055b0();
  FUN_00205830();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f41d3 == '\0') {
    FUN_00205b20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f41d3 == '\0') {
    FUN_00205c90();
    FUN_00e87980();
  }
  return;
}

