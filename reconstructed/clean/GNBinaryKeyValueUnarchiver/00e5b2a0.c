// Function: FUN_00e5b2a0
// Address: 00e5b2a0
// Size: 513 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s."
//   "offset < _dataLength"
//   "offset != GNNotFound"
//   "offset < _excessDataLength"
// === GNBinaryKeyValueUnarchiver properties ===
//                   _archiveVersion
//                   _awakesObjectsAfterDecoding
//                   _isCancelled
//                   _allObjectsMarker


int64_t FUN_00e5b2a0(uint64_t param_1)

{
  void*puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t *plVar4;
  void*local_40;
  uint64_t local_38;
  char *local_30;
  
  local_40 = *(void**)(this_ptr + 0x10);
  local_38 = local_38 & 0xffffffffffffff00;
  iVar3 = FUN_00e5d7f0();
  if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027815a8;
  if (iVar3 == -1) {
    puVar1 = *(void**)(this_ptr + 0x18);
    if (puVar1 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_38 = CONCAT71(local_38._1_7_,1);
    local_40 = puVar1;
    iVar3 = FUN_00e5d7f0();
    if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027815a8;
    if (iVar3 == -1) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7f00000002;
      local_40 = &g_0258e798;
      local_30 = "offset != GNNotFound";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    lVar2 = g_027815a8;
    if (*(int *)(this_ptr + 0x24) <= iVar3) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x8000000002;
      local_40 = &g_0258e760;
      local_30 = "offset < _excessDataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (int64_t *)(this_ptr + 0x30);
  }
  else {
    if (*(int *)(this_ptr + 0x20) <= iVar3) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7b00000002;
      local_40 = &g_0258e798;
      local_30 = "offset < _dataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (int64_t *)(this_ptr + 0x28);
  }
  return (int64_t)iVar3 + *plVar4;
}

