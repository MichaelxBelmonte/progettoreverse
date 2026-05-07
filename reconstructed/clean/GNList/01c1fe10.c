// Function: FUN_01c1fe10
// Address: 01c1fe10
// Size: 538 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01c1fe10(void)

{
  int64_t lVar1;
  byte bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int local_30;
  
  lVar1 = this_ptr[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_40 = '\0';
    local_48 = (int64_t *)0x0;
    local_30 = -1;
    iVar4 = 0;
    while( true ) {
      lVar3 = (int64_t)local_30;
      local_30 = local_30 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_30) break;
      local_48 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      bVar2 = (**(code **)(*local_48 + 0x380))();
      iVar4 = iVar4 + (uint)bVar2;
    }
    FUN_01c2d1e0();
    FUN_00d50b20();
    if (iVar4 != 0) {
      if ((char)this_ptr[0x37] != '\0') {
        return;
      }
      *(void*)(this_ptr + 0x37) = 1;
      FUN_01f27fe0();
      (**(code **)(this_ptr[0x2b] + 0x10))();
      FUN_00d50b00();
      FUN_01f47190();
      if (this_ptr + 0x2b != (int64_t *)0x0) {
        (**(code **)(this_ptr[0x2b] + 0x10))();
        FUN_00d50b20();
      }
      goto LAB_01c20016;
    }
  }
  if ((char)this_ptr[0x37] == '\0') {
    return;
  }
  *(void*)(this_ptr + 0x37) = 0;
  FUN_01f27fe0();
  (**(code **)(this_ptr[0x2b] + 0x10))();
  FUN_00d50b00();
  FUN_01f474f0();
  if (this_ptr + 0x2b != (int64_t *)0x0) {
    (**(code **)(this_ptr[0x2b] + 0x10))();
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01c20016:
  (**(code **)(*this_ptr + 0x620))();
  return;
}

