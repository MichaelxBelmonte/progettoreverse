// Function: FUN_012a1a90
// Address: 012a1a90
// Size: 787 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_012a1a90(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_38;
  char local_30;
  
  *(int *)(this_ptr + 0x54) = *(int *)(this_ptr + 0x54) + 1;
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
    lVar4 = 0;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        lVar5 = *(int64_t *)(this_ptr + 0xa0);
        goto joined_r0x012a1b34;
      }
      FUN_00d50b00();
    }
  }
  lVar5 = *(int64_t *)(this_ptr + 0xa0);
joined_r0x012a1b34:
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  if (lVar4 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = lVar4;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      lVar3 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
    *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + 1;
  }
  if (lVar5 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = lVar5;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      lVar3 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
    *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + 1;
  }
  FUN_00d50b00();
  FUN_0039e8b0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_0127e4d0(g_023b67d8);
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = lVar4;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      lVar3 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
    *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + -1;
  }
  if (lVar5 == 0) {
    *(int *)(this_ptr + 0x54) = *(int *)(this_ptr + 0x54) + -1;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    *(int *)(lVar5 + 0x54) = *(int *)(lVar5 + 0x54) + -1;
    *(int *)(this_ptr + 0x54) = *(int *)(this_ptr + 0x54) + -1;
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

