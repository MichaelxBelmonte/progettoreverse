// Function: FUN_01c2b230
// Address: 01c2b230
// Size: 1300 bytes
// Class: GNCoord
// String references:
//   "float"
//   "GNCoord"
//   "_tempo"
//   "GNInt"
//   "MULoop"
//   "_loopSetOrderIndex"
//   "MUTagAttributeOption"
//   "_minWidthToDisplayLoopId"
//   "_matchGrade"
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


void FUN_01c2b230(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01c27c60();
  *this_ptr = &g_02663ef8;
  FUN_01c2ba00();
  this_ptr[6] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bae0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_01c2bbd0();
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bcb0();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2be20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  FUN_01c2bf10();
  FUN_01c2bff0();
  FUN_01c2c0d0();
  FUN_01c2c1b0();
  FUN_01c2c290();
  FUN_01c2c370();
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01c2c450();
  FUN_01c2c530();
  FUN_01c2c610();
  *(void*)(this_ptr + 0x14) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2c6f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

