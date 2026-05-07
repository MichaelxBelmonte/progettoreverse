// ===================================================================
// GNBitfield — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (9):
//                   _archivedClassNamesVersionMap
//                   _allClassNames
//                   _tableClassIdx
//                   _objectOrderIdx
//                   _sharedKeyValueTypeInfoTable
//                   _currentObjectGraphIdx
//                   _objectGraphReadStack
//                   _objectInfos
//                   _currentObjectInfo


// ============================================================
// 0002f270
// ============================================================
// Function: FUN_0002f270
// Address: 0002f270
// Size: 519 bytes
// Class: GNBitfield
// === GNBitfield properties ===
//                   _archivedClassNamesVersionMap
//                   _allClassNames
//                   _tableClassIdx
//                   _objectOrderIdx
//                   _sharedKeyValueTypeInfoTable
//                   _currentObjectGraphIdx
//                   _objectGraphReadStack
//                   _objectInfos
//                   _currentObjectInfo


void FUN_0002f270(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *this_ptr = &g_02567a20;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[6] = 0;
    this_ptr[7] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[5] = puVar3;
    iVar2 = g_02802630;
    this_ptr[6] = 0;
    if (iVar2 < 2) {
      this_ptr[7] = 0;
      this_ptr[8] = 0;
      goto LAB_0002f3e2;
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[6] = puVar3;
    iVar2 = g_02802630;
    this_ptr[7] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[7] = puVar3;
      iVar2 = g_02802630;
      this_ptr[8] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*pcVar1)();
        this_ptr[8] = puVar3;
        iVar2 = g_02802630;
      }
      goto LAB_0002f3e2;
    }
  }
  this_ptr[8] = 0;
LAB_0002f3e2:
  *(void*)(this_ptr + 9) = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  *(void*)((int64_t)this_ptr + 0x71) = 0;
  *(void*)((int64_t)this_ptr + 0x79) = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x1a] = puVar3;
  }
  return;
}



// ============================================================
// 0002ecf0
// ============================================================
// Function: FUN_0002ecf0
// Address: 0002ecf0
// Size: 517 bytes
// Class: GNBitfield
// String references:
//   "GNBitfield"
// === GNBitfield properties ===
//                   _archivedClassNamesVersionMap
//                   _allClassNames
//                   _tableClassIdx
//                   _objectOrderIdx
//                   _sharedKeyValueTypeInfoTable
//                   _currentObjectGraphIdx
//                   _objectGraphReadStack
//                   _objectInfos
//                   _currentObjectInfo


void FUN_0002ecf0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258caf8;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_026cf753 == '\0') {
    FUN_0002ef20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cf753 == '\0') {
    FUN_0002f0b0();
    FUN_00e87980();
  }
  return;
}

