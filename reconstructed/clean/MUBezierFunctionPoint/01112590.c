// Function: FUN_01112590
// Address: 01112590
// Size: 1126 bytes
// Class: MUBezierFunctionPoint
// String references:
//   "MUBezierFunctionPoint"
// === MUBezierFunctionPoint properties ===
//                   _slope
//                   _isXLocked
//                   _isYLocked
//                   _isOffsetToNextPointLocked
//                   _leftControlPointXDelta
//                   _leftControlPointYDelta
//                   _rightControlPointXDelta
//                   _rightControlPointYDelta
//                   _syncsSlopes
//                   _rootFifthsIndex
//                   _bassFifthsIndex
//                   _degreeBits


void FUN_01112590(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01112a30();
  *this_ptr = &g_025e2f90;
  this_ptr[0xc] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113040();
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_011131b0();
    FUN_00e87980();
  }
  this_ptr[0xe] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113320();
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113490();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_02794633 == '\0') {
    FUN_01113600();
    FUN_00e87980();
  }
  return;
}

