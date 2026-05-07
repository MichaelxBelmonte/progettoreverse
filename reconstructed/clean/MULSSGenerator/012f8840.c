// Function: FUN_012f8840
// Address: 012f8840
// Size: 516 bytes
// Class: MULSSGenerator

int64_t * FUN_012f8840(char *param_1)

{
  int64_t lVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar4;
  int64_t lVar5;
  int64_t local_58;
  char local_50 [8];
  char local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0xb0);
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    local_40 = '\0';
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_40 = '\0';
      lVar5 = 0;
    }
    else {
      iVar4 = 0;
      lVar5 = 0;
      local_40 = '\0';
      do {
        pvVar2 = _pthread_getspecific((void*)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        local_38 = local_50[0];
        param_1 = &stack0xffffffffffffffc8;
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = param_1;
        }
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          if (lVar5 == 0) {
            lVar5 = local_58;
            if (local_38 != '\0') {
              local_40 = '\x01';
              goto LAB_012f88d0;
            }
            FUN_00d50b00();
            local_40 = '\x01';
          }
          else if (local_58 != lVar5) {
            *(void*)(this_ptr + 1) = 0;
            *this_ptr = 0;
            if (local_38 != '\0') {
              FUN_00d50b20();
            }
            FUN_001159b0();
            FUN_00d50b20();
            goto LAB_012f89f0;
          }
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
        }
LAB_012f88d0:
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if ((local_40 != '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
  }
  *this_ptr = lVar5;
  *(char *)(this_ptr + 1) = local_40;
LAB_012f89f0:
  if ((local_40 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

