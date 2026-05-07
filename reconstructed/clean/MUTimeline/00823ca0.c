// Function: FUN_00823ca0
// Address: 00823ca0
// Size: 959 bytes
// Class: MUTimeline
// String references:
//   "bool"
//   "MUTimeline"
//   "GNPropertyObserver"
//   "_numerator"
//   "_denominator"
//   "_offset"
//   "_isDynamicTimeGrid"
//   "double"
//   "GNInt"
// === MUTimeline properties ===
//   GNInt           _numerator
//   GNInt           _denominator
//   double          _offset
//   bool            _isDynamicTimeGrid


void FUN_00823ca0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_008233b0();
  this_ptr[5] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02639460;
  this_ptr[5] = &g_02639858;
  this_ptr[6] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00824120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00824210();
  *(void*)(this_ptr + 10) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

