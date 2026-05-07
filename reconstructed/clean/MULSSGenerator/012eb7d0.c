// Function: FUN_012eb7d0
// Address: 012eb7d0
// Size: 786 bytes
// Class: MULSSGenerator

void FUN_012eb7d0(void* param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  void*puVar4;
  int64_t lVar5;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  cVar1 = (char)param_1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012eb8b5;
    FUN_00d50b00();
LAB_012eb860:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_012eb8e2;
      }
    }
    else if (local_40 != 0) {
LAB_012eb8e2:
      lVar5 = local_40;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1b50();
        if (local_40 == 0) goto LAB_012eb9c0;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d19a0();
        if (local_40 == 0) {
LAB_012eb9c0:
          bVar2 = false;
          lVar5 = 0;
        }
        else {
          bVar2 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      if (lVar5 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_012eba78;
          FUN_00d50b00();
        }
        else if (local_40 == 0) {
LAB_012eba78:
          if (bVar2) {
            FUN_00d50b20();
          }
          goto LAB_012eba86;
        }
        FUN_012eb1d0();
        FUN_00d50b20();
        if (bVar2) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_012ebac8;
      }
LAB_012eba86:
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  else {
    if (local_40 != 0) goto LAB_012eb860;
LAB_012eb8b5:
    bVar2 = true;
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if (bVar2) {
    return;
  }
LAB_012ebac8:
  FUN_00d50b20();
  return;
}

