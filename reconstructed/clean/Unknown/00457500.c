// Function: FUN_00457500
// Address: 00457500
// Size: 1005 bytes
// Class: Unknown

void* FUN_00457500(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar5;
  int64_t local_c0;
  char local_b8;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        FUN_01f27fe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_000e2730();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_0052f190();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            FUN_00457bc0();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if (local_40 == 0) {
              FUN_0039e8b0();
              if (local_38 != '\0') {
                local_38 = '\0';
              }
              FUN_00457c70();
            }
            else {
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
              local_40 = lVar2;
            }
          }
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

