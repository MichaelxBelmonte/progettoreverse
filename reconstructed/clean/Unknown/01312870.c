// Function: FUN_01312870
// Address: 01312870
// Size: 545 bytes
// Class: Unknown

int64_t * FUN_01312870(void* param_1,int64_t *param_2)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  void *pvVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_80;
  char local_78;
  int64_t in_stack_ffffffffffffffa8;
  char local_50;
  
  if (*param_2 == 0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = 0x2572358;
    *puVar3 = &g_02572358;
    (*g_02572370)();
    puVar1 = (void*)*param_2;
    if (puVar1 == puVar3) {
      if ((char)param_2[1] != '\0') {
        FUN_00d50b20();
        goto LAB_013128ef;
      }
    }
    else {
      *param_2 = (int64_t)puVar3;
      if (((char)param_2[1] != '\0') && (puVar1 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_2 + 1) = 1;
  }
LAB_013128ef:
  if (*(int64_t *)(arg1 + 0xf0) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffa8 != 0) {
      FUN_00d50b00();
      FUN_00d23370();
      FUN_00d50b20();
    }
  }
  lVar2 = *(int64_t *)(arg1 + 0xf8);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_01312870();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar2 + 0xc));
    }
    FUN_01312d90();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar2 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_2 + 1) = 0;
  }
  return this_ptr;
}

