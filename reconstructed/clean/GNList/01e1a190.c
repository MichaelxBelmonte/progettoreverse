// Function: FUN_01e1a190
// Address: 01e1a190
// Size: 583 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e1a190(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  void*arg1;
  int64_t *this_ptr;
  float fVar2;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  fVar2 = (float)((uint64_t)param_1 >> 0x20);
  if ((char)this_ptr[0x31] != '\0') {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_40 + 0x500))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 == 0) {
      if (this_ptr[0x29] == 0) {
        FUN_01cfbc00();
        FUN_01d488d0();
      }
      else {
        FUN_00d50b00();
        FUN_00d50b20();
        lVar1 = this_ptr[0x29];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_40 + 0x500))();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_01d488d0();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40(g_02390124);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))
              ((int)param_1,fVar2,(int)param_1,
               (float)((uint64_t)param_2 >> 0x20) + fVar2 + g_02390d00);
  }
  return;
}

