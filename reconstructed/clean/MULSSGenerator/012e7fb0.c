// Function: FUN_012e7fb0
// Address: 012e7fb0
// Size: 810 bytes
// Class: MULSSGenerator

void FUN_012e7fb0(void* param_1)

{
  int iVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t in_stack_ffffffffffffffc0;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x110) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_38 == '\0') {
      if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
      FUN_00d50b00();
    }
    else if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
    lVar4 = *(int64_t *)(arg1 + 0x110);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *(int64_t *)(arg1 + 0x110);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    lVar4 = *(int64_t *)(lVar4 + 0xa8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    if ((local_38 == '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_38 = '\0';
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (iVar1 < *(int *)(in_stack_ffffffffffffffc0 + 0xc)) {
      lVar3 = *(int64_t *)(*(int64_t *)(in_stack_ffffffffffffffc0 + 0x10) + (int64_t)iVar1 * 8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    in_stack_ffffffffffffffc0 = arg1;
  }
LAB_012e81b4:
  if (*(int64_t *)(arg1 + 0x130) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffc0 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == '\0') {
        return;
      }
      if (in_stack_ffffffffffffffc0 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

