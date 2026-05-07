// Function: FUN_01c2cb70
// Address: 01c2cb70
// Size: 754 bytes
// Class: GNCoord
// String references:
//   "float"
//   "GNCoord"
//   "MULoopComponent"
//   "MUBrowserLoopItem"
//   "_minWidthToDisplayLoopId"
//   "_matchGrade"
//   "_minIconWidth"
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c2cb70(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01c27c60();
  *this_ptr = &g_02656608;
  this_ptr[5] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2cf20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBrowserLoopItem");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2d010();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopComponent");
  }
  FUN_01c2d100();
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

