// Function: FUN_006e87c0
// Address: 006e87c0
// Size: 515 bytes
// Class: MDTempIOCtrl
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


void FUN_006e87c0(void* param_1)

{
  void *pvVar1;
  void*arg1;
  int64_t this_ptr;
  bool bVar2;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  (**(code **)(*(int64_t *)*arg1 + 0x5d8))();
  if (local_30 == 0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x5d8))();
    FUN_006f3f00();
    bVar2 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    (**(code **)(*(int64_t *)*arg1 + 0x5d8))();
    FUN_006f3f00();
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_30 == 0) {
      bVar2 = false;
    }
    else if (local_28 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar2 = false;
    local_30 = 0;
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    FUN_004501b0();
  }
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    FUN_004501b0();
  }
  if ((bVar2) && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}

