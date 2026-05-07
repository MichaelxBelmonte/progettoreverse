// ===================================================================
// GNRange — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (6):
//   GNRange         _substringRange
//   GNRect          _rect
//   GNRange         _destinationCardinality
//   bool            _sourceOwnsDestination
//   bool            _sourceRetainsDestination
//   bool            _isDestinationListOrdered


// ============================================================
// 001e1200
// ============================================================
// Function: FUN_001e1200
// Address: 001e1200
// Size: 595 bytes
// Class: GNRange
// String references:
//   "GNRange"
//   "GNRect"
//   "GNLayoutLine"
//   "_rect"
//   "GNParagraphFormat"
//   "_substringRange"
// === GNRange properties ===
//   GNRange         _substringRange
//   GNRect          _rect
//   GNRange         _destinationCardinality
//   bool            _sourceOwnsDestination
//   bool            _sourceRetainsDestination
//   bool            _isDestinationListOrdered


void FUN_001e1200(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_001e02c0();
  *this_ptr = &g_026a9e08;
  FUN_001e1580();
  this_ptr[8] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e1660();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNParagraphFormat");
  }
  this_ptr[9] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e1750();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLayoutLine");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001e1840();
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00057c70
// ============================================================
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

