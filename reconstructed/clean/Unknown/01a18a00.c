// Function: FUN_01a18a00
// Address: 01a18a00
// Size: 527 bytes
// Class: Unknown

void FUN_01a18a00(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar4;
  int64_t local_90;
  char local_88;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  
  FUN_000823a0();
  lVar2 = FUN_00e86210();
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6f60;
  if (g_026f6f60 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_38 = lVar2;
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = 0;
        (**(code **)(*(int64_t *)(this_ptr + 0x1f8) + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_58 = local_90;
        local_50 = '\0';
        param_1 = 0xa0;
        local_48 = (int64_t *)(this_ptr + 0x1f8);
        FUN_00e8b850(0xa0,&local_58);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    lVar2 = local_38;
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

