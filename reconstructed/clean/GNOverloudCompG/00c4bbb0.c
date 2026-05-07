// Function: FUN_00c4bbb0
// Address: 00c4bbb0
// Size: 578 bytes
// Class: GNOverloudCompG
// String references:
//   "_minValue"
//   "float"
//   "_maxValue"
//   "_offValue"
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c4bbb0(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_001bcb00();
  *this_ptr = &g_02560740;
  this_ptr[9] = &g_02560c90;
  this_ptr[10] = &g_02560cf8;
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_00c432b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00c4be40();
  return;
}

