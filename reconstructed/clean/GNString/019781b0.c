// Function: FUN_019781b0
// Address: 019781b0
// Size: 705 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_019781b0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x178) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_30 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    FUN_00d50b00();
    local_30 = '\x01';
    local_38 = (int64_t *)(this_ptr + 0x168);
    FUN_00e8b9a0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      (**(code **)(*local_38 + 0x10))();
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x178) != 0) {
    *(void*)(this_ptr + 0x178) = 0;
    FUN_00d50b20();
  }
  lVar1 = *arg1;
  lVar4 = *(int64_t *)(this_ptr + 0x170);
  lVar2 = lVar4;
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x170) = lVar1;
    lVar2 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar2 = *(int64_t *)(this_ptr + 0x170);
    }
  }
  if (lVar2 == 0) goto LAB_019783a1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  lVar1 = *(int64_t *)(this_ptr + 0x178);
  lVar4 = lVar1;
  if (lVar1 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar4 = 0;
        goto LAB_0197833c;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x178);
      *(int64_t *)(this_ptr + 0x178) = local_48;
      lVar4 = local_48;
    }
    else {
      local_40 = '\0';
      lVar4 = local_48;
LAB_0197833c:
      *(int64_t *)(this_ptr + 0x178) = lVar4;
    }
    param_1 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
LAB_019783a1:
  if (*(int64_t *)(this_ptr + 0x178) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    FUN_00d50b00();
    local_58 = 0;
    local_50 = '\0';
    FUN_00e8b850(0x20,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((int64_t *)(this_ptr + 0x168) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}

