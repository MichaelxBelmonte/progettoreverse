// Function: FUN_019562f0
// Address: 019562f0
// Size: 1019 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_019562f0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar4 = *(int64_t *)(this_ptr + 0x170);
  if (lVar4 != *arg1) {
    if (*(int64_t *)(this_ptr + 0x178) != 0) {
      *(void*)(this_ptr + 0x178) = 0;
      FUN_00d50b20();
      lVar4 = *(int64_t *)(this_ptr + 0x170);
    }
    if (lVar4 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d4efa0();
      lVar4 = g_027e3ba0;
      if (g_027e3ba0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00e8b9a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((int64_t *)(this_ptr + 0x168) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar4 = *arg1;
    lVar1 = *(int64_t *)(this_ptr + 0x170);
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x170) = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(int64_t *)(this_ptr + 0x170);
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d4efa0();
      lVar4 = g_027e3ba0;
      if (g_027e3ba0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_00e8b850(0x20,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((int64_t *)(this_ptr + 0x168) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x170) != 0) {
      FUN_0198a800();
    }
  }
  return;
}

