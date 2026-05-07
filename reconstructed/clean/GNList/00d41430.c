// Function: FUN_00d41430
// Address: 00d41430
// Size: 642 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d41430(int64_t *param_1)

{
  int64_t lVar1;
  void*puVar2;
  uint uVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t local_88;
  char local_80;
  int64_t local_40;
  char local_38;
  
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x368))();
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
                                            (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
    return;
  }
  FUN_00d40f90();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    FUN_00d417f0();
  }
  else {
    uVar3 = *(uint *)(local_40 + 0xc);
    if (0 < (int)uVar3) {
      lVar4 = (uint64_t)uVar3 + 1;
      do {
        uVar3 = uVar3 - 1;
        lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + (uint64_t)uVar3 * 8);
        if (*(int64_t *)(lVar1 + 0x10) == *arg1) {
          if ((*(int64_t *)(lVar1 + 0x18) == *param_1) || (*(int64_t *)(lVar1 + 0x18) == 0)) {
            (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
            goto LAB_00d41692;
          }
          if (*param_1 == 0) {
            *(void*)(lVar1 + 0xc) = 0;
            FUN_00d23620();
            *(int *)(this_ptr + 0x40) = *(int *)(this_ptr + 0x40) + -1;
          }
        }
        lVar4 = lVar4 + -1;
      } while (1 < lVar4);
    }
  }
  FUN_00d3f2c0();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x40) = *(int *)(this_ptr + 0x40) + 1;
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
LAB_00d41692:
  FUN_00d50b20();
  return;
}

