// Function: FUN_01aa9200
// Address: 01aa9200
// Size: 904 bytes
// Class: MUScaleBrowserItem

void FUN_01aa9200(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar4;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  if ((((*arg1 != 0) && (*(int64_t *)(this_ptr + 0x20) != 0)) &&
      (*(int64_t *)(this_ptr + 0x40) != 0)) && (*(int64_t *)(this_ptr + 0x10) != 0)) {
    local_90 = param_1;
    local_34 = param_2;
    uVar4 = FUN_00cafd20();
    local_b0 = *arg1;
    local_a8 = 0;
    FUN_01aa8960(uVar4,&local_b0);
    lVar1 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01aa8f10();
    lVar2 = local_48;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = lVar1;
    local_80 = '\0';
    FUN_012e6a70();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a580(local_34);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012642b0(local_90);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = '\0';
    local_78 = 0;
    uVar4 = FUN_01270710();
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x90) != 0) {
      local_a0 = *arg1;
      local_98 = 0;
      FUN_01aa8960(uVar4,&local_a0);
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = local_48;
      local_60 = '\0';
      FUN_012e6a70();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a580(local_34);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012642b0(local_90);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = '\0';
      local_58 = 0;
      FUN_01270710();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x3c8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

