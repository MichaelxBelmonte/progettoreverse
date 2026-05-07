// Function: FUN_01bb2d10
// Address: 01bb2d10
// Size: 552 bytes
// Class: GNList
// String references:
//   "%I"
//   "+%I"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01bb2d10(int64_t *param_1,int64_t *param_2,uint64_t param_3,int param_4)

{
  int64_t lVar1;
  int iVar2;
  int64_t arg1;
  int64_t *plVar3;
  int64_t *this_ptr;
  bool bVar4;
  float fVar5;
  void*local_48;
  uint32_t local_40;
  int local_3c;
  float local_34;
  
  lVar1 = *param_2;
  if (*(int64_t *)(arg1 + 0xd8) == lVar1) {
    local_3c = param_4 / 3;
    local_40 = 1;
    local_48 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_48);
  }
  else {
    if (*(int64_t *)(arg1 + 0xe0) == lVar1) {
      local_34 = (float)(**(code **)(**(int64_t **)(arg1 + 0xf8) + 0x380))();
      fVar5 = local_34 + (float)param_4;
      plVar3 = *(int64_t **)(arg1 + 0xf8);
    }
    else {
      if (*(int64_t *)(arg1 + 0xe8) != lVar1) {
        *(void*)(this_ptr + 1) = 0;
        lVar1 = *param_1;
        if ((char)param_1[1] != '\0') {
          *this_ptr = lVar1;
          *(void*)(this_ptr + 1) = 1;
          *(void*)(param_1 + 1) = 0;
          return;
        }
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
      FUN_01d3a560();
      local_34 = (float)FUN_01d3b590();
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d3a560();
      iVar2 = FUN_01d3b590();
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      bVar4 = local_34 == 1.12104e-44;
      local_34 = g_023908ec;
      if (iVar2 != 4) {
        local_34 = *(float *)(&g_0241dd00 + (uint64_t)bVar4 * 4);
      }
      fVar5 = (float)(**(code **)(**(int64_t **)(arg1 + 0x100) + 0x380))();
      fVar5 = local_34 * (float)param_4 + fVar5;
      plVar3 = *(int64_t **)(arg1 + 0x100);
    }
    (**(code **)(*plVar3 + 0x378))(fVar5);
  }
  return;
}

