// Function: FUN_00e5cf00
// Address: 00e5cf00
// Size: 527 bytes
// Class: GNBinaryArchiveTypeInfoContainer
// String references:
//   "GNBinaryArchiveTypeInfoContainer"
// === GNBinaryArchiveTypeInfoContainer properties ===
//                   _currentObjectData
//                   _currentObjectDataStream
//                   _currentObjectExcessKVTypeInfos
//                   _currentObjectExcessData
//                   _currentObjectExcessDataStream
//                   _currentObjectCompleteData
//                   _currentObjectCompleteDataStream
//                   _classDescriptionKVTypeInfosMap
//                   _allClassDescriptions
//                   _classDescriptionNotShareableKeys
//                   _allObjects
//                   _archivedObjects
//                   _doneObjects
//                   _todoObjects
//                   _allKeys
//                   _delegate


void FUN_00e5cf00(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_48;
  int64_t local_40;
  void*local_28;
  
  if ((g_0277ead8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0277ea28 = FUN_00d4fe50();
    g_0277ea10 = "GNBinaryArchiveTypeInfoContainer";
    g_0277ea18 = 0x20;
    g_0277ea20 = FUN_00e4c0a0;
    g_0277ea30 = 0;
    ram_000000000277ea38 = 0;
    g_0277ea40 = 0;
    g_0277eab8 = 0;
    ram_000000000277eac0 = 0;
    g_0277eac8 = 0;
    g_0277eaca = 1;
    g_0277ea48 = 0;
    ram_000000000277ea50 = 0;
    g_0277ea58 = 0;
    ram_000000000277ea60 = 0;
    g_0277ea68 = 0;
    ram_000000000277ea70 = 0;
    g_0277ea78 = 0;
    ram_000000000277ea80 = 0;
    g_0277ea88 = 0;
    ram_000000000277ea90 = 0;
    g_0277ea98 = 0;
    ram_000000000277eaa0 = 0;
    g_0277eaa8 = 0;
    ram_000000000277eab0 = 0;
    g_0277ead3 = 0;
    g_0277eacb = 0;
    ___cxa_guard_release();
  }
  if (g_0277eacb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_00e5dd70();
    FUN_00e5e0a0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}

