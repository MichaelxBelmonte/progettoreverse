// Function: FUN_00532890
// Address: 00532890
// Size: 708 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00532890(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00517fa0();
  FUN_00b68190();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_0051be00();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_00532b3d;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_00532b3d;
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  FUN_00cafd20();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3260();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  FUN_004f9670();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004fb230();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3270();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  (**(code **)(*local_40 + 0x3c8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00532b3d:
  FUN_00d50b20();
  return;
}

