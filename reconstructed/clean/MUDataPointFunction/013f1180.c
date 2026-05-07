// Function: FUN_013f1180
// Address: 013f1180
// Size: 625 bytes
// Class: MUDataPointFunction

void FUN_013f1180(void* param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xd] == 0) {
    if (this_ptr[0xc] == 0) {
      FUN_013ef520();
    }
    (**(code **)(*this_ptr + 0x3f8))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f63e0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x3f8))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_013f6360();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      bVar1 = false;
      local_40 = 0;
    }
    else {
      (**(code **)(*this_ptr + 0x3f8))();
      pvVar3 = _pthread_getspecific(param_1);
      plVar5 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar5 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar5 + 0x378))();
      if (local_40 == 0) {
        local_40 = 0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb6d0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
    }
    FUN_00d64850();
    lVar4 = this_ptr[0xd];
    if (lVar4 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0xd] = local_40;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((bVar1) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

