// Function: FUN_00de4b90
// Address: 00de4b90
// Size: 623 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00de4b90(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int64_t *plVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00de4850();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 != 0) {
    do {
      FUN_00de4120();
      sVar3 = FUN_00d8cbc0();
      if (sVar3 != 0x3b) {
        sVar3 = FUN_00d8cbc0();
        if (sVar3 == 0x3d) {
          *(int *)(arg1 + 0x18) = *(int *)(arg1 + 0x18) + 1;
          FUN_00de38d0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_00de4cdc;
            }
          }
          else if (local_40 != 0) {
LAB_00de4cdc:
            FUN_00ca0840();
            FUN_00d50b20();
            goto LAB_00de4d2c;
          }
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        bVar1 = false;
        bVar2 = false;
        if (local_40 == 0) goto LAB_00de4def;
        goto LAB_00de4de7;
      }
      FUN_00ca0840();
LAB_00de4d2c:
      local_38 = '\0';
      FUN_00de4120();
      sVar3 = FUN_00d8cbc0();
      if (sVar3 != 0x3b) goto LAB_00de4dd1;
      *(int *)(arg1 + 0x18) = *(int *)(arg1 + 0x18) + 1;
      FUN_00de4850();
    } while (local_40 != 0);
    local_40 = 0;
  }
LAB_00de4dd1:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  bVar1 = true;
  bVar2 = true;
  if (local_40 != 0) {
LAB_00de4de7:
    bVar1 = bVar2;
    FUN_00d50b20();
  }
LAB_00de4def:
  if (!bVar1 && plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

