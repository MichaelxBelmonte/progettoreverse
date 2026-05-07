// Function: FUN_00548c70
// Address: 00548c70
// Size: 780 bytes
// Class: MDPluginTransferTempoDialog

int64_t * FUN_00548c70(void* param_1)

{
  int64_t lVar1;
  int iVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00521db0();
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_016c2ea0();
    if (iVar2 == 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = 0;
      FUN_016ca8d0(0,0,0);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_0123fef0();
      FUN_0123ff00();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00536680();
    FUN_016c0b50();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (iVar2 != 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c2ef0();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

