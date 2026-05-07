// Function: FUN_01293980
// Address: 01293980
// Size: 1058 bytes
// Class: Unknown

void FUN_01293980(int64_t param_1,void*param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    if (param_2 != (void*)0x0) {
      *param_2 = 0;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_01266770();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    if (*(int64_t *)(local_60 + 0xd8) == 0) goto LAB_01293a29;
LAB_01293a5d:
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef490();
    lVar3 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  else {
    param_1 = local_60;
    if (*(int64_t *)
         (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0xd8) !=
        0) goto LAB_01293a5d;
LAB_01293a29:
    lVar3 = 0;
  }
  if (param_2 != (void*)0x0) {
    FUN_0039e8b0();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    param_1 = 0;
    uVar7 = FUN_012912a0(0,0,0);
    *param_2 = uVar7;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar6 = 0;
      if (lVar3 == 0) {
        do {
          lVar5 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
          pvVar2 = _pthread_getspecific((void*)param_1);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          }
          if (*(int64_t *)(lVar5 + 0xd8) != 0) {
            pvVar2 = _pthread_getspecific((void*)param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef490();
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if (local_90 != 0) goto LAB_01293d73;
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
      }
      else {
        do {
          lVar5 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
          pvVar2 = _pthread_getspecific((void*)param_1);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          }
          if (*(int64_t *)(lVar5 + 0xd8) == 0) goto LAB_01293d73;
          pvVar2 = _pthread_getspecific((void*)param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef490();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (local_90 != lVar3) goto LAB_01293d73;
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    FUN_001159b0();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
LAB_01293c81:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_01293d73:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  FUN_001159b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  goto LAB_01293c81;
}

