// Function: FUN_017fee20
// Address: 017fee20
// Size: 536 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_017fee20(void)

{
  char cVar1;
  uint64_t uVar2;
  int64_t *this_ptr;
  
  cVar1 = FUN_01716c00();
  if ((cVar1 != '\0') && (cVar1 = FUN_01716be0(), cVar1 != '\0')) {
    uVar2 = *(uint64_t *)(*this_ptr + 0x18);
    if ((~(uint)uVar2 & 0xf000) != 0) {
      FUN_01715d40();
      FUN_01715d40();
      uVar2 = *(uint64_t *)(*this_ptr + 0x18);
    }
    if ((~uVar2 & 0xf00000000) != 0) {
      FUN_01715d40(0xf00000000,0xffffffff);
      FUN_01715d40();
      uVar2 = *(uint64_t *)(*this_ptr + 0x18);
    }
    if ((~uVar2 & 0xf0000000000) != 0) {
      FUN_01715d40(0xf0000000000,0xffffffff);
      FUN_01715d40();
    }
  }
  cVar1 = FUN_01716be0();
  if ((cVar1 != '\0') && (cVar1 = FUN_01716c00(), cVar1 != '\0')) {
    uVar2 = *(uint64_t *)(*this_ptr + 0x18);
    if ((~(uint)uVar2 & 0xf0000) != 0) {
      FUN_01715d40();
      FUN_01715d40();
      uVar2 = *(uint64_t *)(*this_ptr + 0x18);
    }
    if ((~uVar2 & 0xf000000000) != 0) {
      FUN_01715d40(0xf000000000,0xffffffff);
      FUN_01715d40();
      uVar2 = *(uint64_t *)(*this_ptr + 0x18);
    }
    if ((~uVar2 & 0xf00000000000) != 0) {
      FUN_01715d40(0xf00000000000,0xffffffff);
      FUN_01715d40();
      return;
    }
  }
  return;
}

