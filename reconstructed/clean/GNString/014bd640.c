// Function: FUN_014bd640
// Address: 014bd640
// Size: 632 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_014bd640(uint64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  void* in_ECX;
  int64_t lVar5;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_40;
  char local_38;
  
  if (((*(int64_t *)(this_ptr + 0x88) != 0) && (*(int64_t *)(this_ptr + 0x48) != 0)) &&
     (*(int64_t *)(this_ptr + 0x40) != 0)) {
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x88);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      lVar5 = *(int64_t *)(this_ptr + 0x88);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    uVar1 = *(void*)(lVar5 + 0x50);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    uVar2 = *(void*)(local_40 + 0x10);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    uVar6 = FUN_014bd8e0(param_1,uVar1,uVar2);
    FUN_00d64850();
    *(void*)(this_ptr + 0x80) = uVar6;
    FUN_00d64910();
    return;
  }
  FUN_00d64850();
  *(void*)(this_ptr + 0x80) = 0x7fc00000;
  FUN_00d64910();
  return;
}

