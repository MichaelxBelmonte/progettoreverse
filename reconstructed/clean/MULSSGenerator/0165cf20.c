// Function: FUN_0165cf20
// Address: 0165cf20
// Size: 510 bytes
// Class: MULSSGenerator

uint64_t FUN_0165cf20(uint64_t param_1,void*param_2)

{
  void *pvVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void* pVar4;
  uint64_t arg1;
  uint8_t local_58 [8];
  uint64_t local_50;
  uint64_t local_48;
  int64_t in_stack_ffffffffffffffc0;
  char local_38;
  
  pVar4 = (void*)local_58;
  FUN_0165d150();
  if (local_38 == '\0') {
    if (in_stack_ffffffffffffffc0 != 0) {
      FUN_00d50b00();
      goto LAB_0165cf72;
    }
  }
  else if (in_stack_ffffffffffffffc0 != 0) {
LAB_0165cf72:
    FUN_00e7b970();
    if (param_2 != (void*)0x0) {
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fff0();
      uVar2 = FUN_00e7c8b0();
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_0123ffb0();
      FUN_00e7bac0();
      *param_2 = uVar2;
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      in_stack_ffffffffffffffc0 =
           *(int64_t *)
            (in_stack_ffffffffffffffc0 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0123ffb0();
    FUN_00e7bac0();
    uVar2 = *(void*)(in_stack_ffffffffffffffc0 + 0x48);
    FUN_00e7b820();
    FUN_00d50b20();
    return uVar2;
  }
  if (param_2 != (void*)0x0) {
    FUN_00e7bdb0();
    uVar2 = FUN_00e7c8b0();
    *param_2 = uVar2;
  }
  return arg1;
}

