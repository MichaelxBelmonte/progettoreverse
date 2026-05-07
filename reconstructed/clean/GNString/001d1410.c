// Function: FUN_001d1410
// Address: 001d1410
// Size: 607 bytes
// Class: GNString
// String references:
//   "bool"
//   "_dragEnabled"
//   "_dropEnabled"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_001d1410(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_000f62d0();
  *this_ptr = &g_02682cf8;
  this_ptr[2] = &g_026837c0;
  FUN_001d1700();
  *(void*)(this_ptr + 0x3a) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001d17e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001d1970();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3b) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001d1ae0();
    FUN_00e87980();
  }
  FUN_001d1c70();
  FUN_001d1d50();
  *(void*)(this_ptr + 0x3e) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1f1) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

