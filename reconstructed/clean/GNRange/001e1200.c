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

