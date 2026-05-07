// Function: FUN_00057c70
// Address: 00057c70
// Size: 756 bytes
// Class: GNRange
// String references:
//   "bool"
//   "_destinationCardinality"
//   "GNRange"
//   "_sourceOwnsDestination"
//   "_sourceRetainsDestination"
//   "_isDestinationListOrdered"
// === GNRange properties ===
//   GNRange         _substringRange
//   GNRect          _rect
//   GNRange         _destinationCardinality
//   bool            _sourceOwnsDestination
//   bool            _sourceRetainsDestination
//   bool            _isDestinationListOrdered


void FUN_00057c70(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t arg1;
  void*this_ptr;
  
  FUN_000278b0();
  *this_ptr = &g_025783f8;
  FUN_00057ff0();
  FUN_000580d0();
  this_ptr[0xc] = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x69) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6a) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xe] = *(void*)(arg1 + 0x70);
  return;
}

