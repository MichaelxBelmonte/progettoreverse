// Function: FUN_01510b20
// Address: 01510b20
// Size: 529 bytes
// Class: MUPercussivePitchSystem

void FUN_01510b20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *pvVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char *pcVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = param_1;
  do {
    lVar2 = arg1;
    if ((*(int64_t *)(lVar2 + 0x80) != 0) && (*(int64_t *)(lVar2 + 0x78) != 0)) {
      if ((*(char *)(lVar2 + 0xa1) == '\0') &&
         (pvVar1 = _pthread_getspecific((void*)uVar3), pvVar1 == (void *)0x0)) {
        FUN_015104e0();
      }
      if (*(int64_t *)(lVar2 + 0x90) != 0) {
        if (param_2 >> 0x20 == 0) {
          pvVar1 = _pthread_getspecific((void*)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(param_1,0,param_3,param_4);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar1 = _pthread_getspecific((void*)uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(param_2,0,param_1,param_3);
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        *(void*)(this_ptr + 1) = 0;
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        *this_ptr = local_48;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
    }
    arg1 = *(int64_t *)(lVar2 + 0x50);
    if (arg1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    pvVar1 = _pthread_getspecific((void*)uVar3);
    if (pvVar1 != (void *)0x0) {
      arg1 = *(int64_t *)(lVar2 + 0x50);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        arg1 = *(int64_t *)(arg1 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
  } while( true );
}

