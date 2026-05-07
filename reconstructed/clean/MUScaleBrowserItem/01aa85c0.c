// Function: FUN_01aa85c0
// Address: 01aa85c0
// Size: 722 bytes
// Class: MUScaleBrowserItem

void FUN_01aa85c0(uint64_t param_1)

{
  void *pvVar1;
  int64_t lVar2;
  void* in_ECX;
  int64_t *plVar3;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  int64_t local_80;
  uint8_t local_78;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if ((((*(int64_t *)(arg1 + 0x50) == 0) || (*(int64_t *)(arg1 + 0x20) == 0)) ||
      (*(int64_t *)(arg1 + 0x40) == 0)) || (*(int64_t *)(arg1 + 0x10) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_70 = param_1;
    uVar4 = FUN_00cafd20();
    lVar2 = *(int64_t *)(arg1 + 0x50);
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_78 = 1;
    local_80 = lVar2;
    FUN_01aa8960(uVar4,&local_80);
    local_38 = local_68;
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01aa8f10();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = local_38;
    local_50 = '\0';
    FUN_012e6a70();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (void*)local_38;
    }
    plVar3 = *(int64_t **)(arg1 + 0x40);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      plVar3 = *(int64_t **)(arg1 + 0x40);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar3 + 0x3a0))();
    FUN_0125a580();
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (void*)local_38;
    }
    FUN_0126dbb0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (void*)local_38;
    }
    FUN_012642b0(local_70);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = '\0';
    local_48 = 0;
    FUN_01270710();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x3c8))();
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

