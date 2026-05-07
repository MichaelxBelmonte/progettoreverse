// Function: FUN_0053a480
// Address: 0053a480
// Size: 759 bytes
// Class: MUAudioFileSource

int64_t * FUN_0053a480(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_48;
  char local_40;
  
  lVar4 = *(int64_t *)(arg1 + 0x340);
  if (lVar4 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          lVar2 = *(int64_t *)(arg1 + 0x340);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_003231a0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d23d90();
          local_48 = lVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170();
    lVar4 = *(int64_t *)(arg1 + 0x340);
    *(void*)(this_ptr + 1) = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
      goto LAB_0053a74b;
    }
  }
  lVar4 = 0;
LAB_0053a74b:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

