// Function: FUN_0128c620
// Address: 0128c620
// Size: 1035 bytes
// Class: Unknown

void FUN_0128c620(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  bool bVar2;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  if (*(int64_t *)(this_ptr + 0x100) == 0) {
    local_28 = '\0';
    local_30 = 0;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    if (local_30 != 0) {
      if (*(int64_t *)(this_ptr + 0x100) == 0) {
        local_58 = '\0';
        local_60 = 0;
      }
      else {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      if (local_a0 == 0) {
        bVar2 = false;
      }
      else {
        if (*(int64_t *)(this_ptr + 0x100) == 0) {
          local_48 = '\0';
          local_50 = 0;
        }
        else {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e8920();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        bVar2 = local_b0 != 0;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0128c89a;
    }
  }
  bVar2 = false;
LAB_0128c89a:
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b00();
    FUN_0039e8b0();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ddd0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e7bdb0();
    FUN_01287c80();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

