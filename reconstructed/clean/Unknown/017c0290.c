// Function: FUN_017c0290
// Address: 017c0290
// Size: 572 bytes
// Class: Unknown

uint FUN_017c0290(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x59) != '\0') {
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736da0();
    lVar2 = g_027d2ac0;
    if (g_027d2ac0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90eb0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      lVar1 = *(int64_t *)(this_ptr + 0x38);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736da0();
      lVar2 = g_027d2ac8;
      if (g_027d2ac8 != 0) {
        FUN_00d50b00();
      }
      uVar4 = FUN_00d90eb0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      return uVar4 ^ 1;
    }
  }
  return 0;
}

