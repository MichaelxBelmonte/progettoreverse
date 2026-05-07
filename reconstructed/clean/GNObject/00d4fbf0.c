// Function: FUN_00d4fbf0
// Address: 00d4fbf0
// Size: 520 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNComparer"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d4fbf0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t local_20;
  
  if ((g_0277e468 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    if ((g_028a7d98 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_028a7cd0 = "GNObject";
      g_028a7cd8 = 0x10;
      g_028a7ce0 = FUN_00d4ff10;
      g_028a7ce8 = 0;
      ram_00000000028a7cf0 = 0;
      g_028a7cf8 = 0;
      ram_00000000028a7d00 = 0;
      g_028a7d08 = 0;
      ram_00000000028a7d10 = 0;
      g_028a7d18 = 0;
      ram_00000000028a7d20 = 0;
      g_028a7d28 = 0;
      ram_00000000028a7d30 = 0;
      g_028a7d38 = 0;
      ram_00000000028a7d40 = 0;
      g_028a7d48 = 0;
      ram_00000000028a7d50 = 0;
      g_028a7d58 = 0;
      ram_00000000028a7d60 = 0;
      g_028a7d68 = 0;
      ram_00000000028a7d70 = 0;
      g_028a7d78 = 0;
      ram_00000000028a7d80 = 0;
      g_028a7d84 = 0;
      ram_00000000028a7d88 = 0;
      ram_00000000028a7d8c = 0;
      ___cxa_guard_release();
    }
    g_0277e3a0 = "GNComparer";
    g_0277e3a8 = 0x18;
    g_0277e3b0 = FUN_00d67bd0;
    g_0277e3b8 = &g_028a7cd0;
    g_0277e3c0 = 0;
    ram_000000000277e3c8 = 0;
    g_0277e3d0 = 0;
    ram_000000000277e3d8 = 0;
    g_0277e3e0 = 0;
    ram_000000000277e3e8 = 0;
    g_0277e3f0 = 0;
    ram_000000000277e3f8 = 0;
    g_0277e400 = 0;
    ram_000000000277e408 = 0;
    g_0277e410 = 0;
    ram_000000000277e418 = 0;
    g_0277e420 = 0;
    ram_000000000277e428 = 0;
    g_0277e430 = 0;
    ram_000000000277e438 = 0;
    g_0277e440 = 0;
    ram_000000000277e448 = 0;
    g_0277e450 = 0;
    _ram_000000000277e458 = 0;
    g_0277e460 = 0;
    ___cxa_guard_release();
  }
  if (g_0277e45b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    uVar3 = 0;
    FUN_00d67c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0,param_3,param_4,uVar3);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

