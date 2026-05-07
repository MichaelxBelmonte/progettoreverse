// Function: FUN_01203460
// Address: 01203460
// Size: 928 bytes
// Class: MUBarSignatureMapItem
// String references:
//   "MUBarSignatureMapItem"
// === MUBarSignatureMapItem properties ===
//                   _map
//                   _sourceSignature
//                   _targetSignature
//                   _mapsTipletsToBeats
//                   _mapsTipletsToSwing
//                   _mapsSwingToTriplets
//                   _nextMap
//                   _modeSequence
//                   _sourceStartQuarter
//                   _sourceEndQuarter
//                   _targetStartQuarter
//                   _targetEndQuarter
//                   _quarterAssigmentFactor


void FUN_01203460(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025cf7e8;
  *(void*)((int64_t)this_ptr + 0xc) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_01203830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_012039a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_01203b10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_01203c80();
    FUN_00e87980();
  }
  FUN_01203df0();
  return;
}

