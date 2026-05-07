// Function: FUN_019dd050
// Address: 019dd050
// Size: 543 bytes
// Class: Unknown

void* FUN_019dd050(void)

{
  char cVar1;
  void*puVar2;
  void *pvVar3;
  void*puVar4;
  int64_t *arg1;
  void*this_ptr;
  int iVar5;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x9b0))();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_019dd252;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_019dd252;
  if (0 < *(int *)(local_70 + 0xc)) {
    iVar5 = 0;
    do {
      pvVar3 = _pthread_getspecific((void*)puVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_019dd1d0;
        }
      }
      else if (local_40 != 0) {
LAB_019dd1d0:
        cVar1 = FUN_00d24090();
        if (cVar1 == '\0') {
          FUN_00d21140();
        }
        local_38 = '\0';
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_70 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_019dd252:
  if (*(int *)((int64_t)puVar2 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = puVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

