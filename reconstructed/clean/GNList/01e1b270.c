// Function: FUN_01e1b270
// Address: 01e1b270
// Size: 737 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e1b270(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  lVar2 = g_027f32f0;
  if (g_027f32f0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*local_38 + 0x50))();
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    lVar3 = g_027f32f8;
    if (g_027f32f8 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_48 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d3ecc0();
    lVar2 = g_027f32e0;
    if (g_027f32e0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(*this_ptr + 0x640))();
      FUN_00d3ecf0();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 == local_48) {
        lVar2 = this_ptr[0x29];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))();
        FUN_01e12e30();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        plVar1 = (int64_t *)this_ptr[0x27];
        (**(code **)(*plVar1 + 0x388))();
        (**(code **)(*plVar1 + 0x3a8))();
        (**(code **)(*this_ptr + 0x620))();
      }
    }
    FUN_00d530a0();
  }
  else {
    cVar4 = (**(code **)(*this_ptr + 0x950))();
    if ((cVar4 != '\0') && (*(char *)((int64_t)this_ptr + 0x174) == '\0')) {
      plVar1 = (int64_t *)this_ptr[0x36];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
        (**(code **)(*plVar1 + 0x28))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x980))();
    }
  }
  return;
}

