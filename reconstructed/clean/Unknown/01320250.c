// Function: FUN_01320250
// Address: 01320250
// Size: 627 bytes
// Class: Unknown

void FUN_01320250(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  plVar6 = param_1;
  plVar2 = (int64_t *)FUN_00e8fc40();
  pVar5 = (void*)plVar6;
  FUN_007ef010();
  (**(code **)(*plVar2 + 0x18))();
  if (*param_2 == 0) {
    if (plVar2[2] != 0) {
      plVar2[2] = 0;
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    lVar1 = plVar2[2];
    lVar4 = lVar1;
    if (lVar1 != local_40) {
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar4 = 0;
          goto LAB_013202ed;
        }
        FUN_00d50b00();
        lVar1 = plVar2[2];
        plVar2[2] = local_40;
      }
      else {
        local_38 = '\0';
LAB_013202ed:
        plVar2[2] = lVar4;
      }
      pVar5 = (void*)lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar4 = local_40;
      }
    }
    if ((local_38 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    local_40 = *param_2;
    local_38 = '\0';
    FUN_00d21140();
  }
  if (*param_1 == 0) {
    if (plVar2[3] != 0) {
      plVar2[3] = 0;
      FUN_00d50b20();
    }
    goto LAB_01320492;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  lVar1 = plVar2[3];
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_013203f2;
      }
      FUN_00d50b00();
      lVar1 = plVar2[3];
      plVar2[3] = local_40;
    }
    else {
      local_38 = '\0';
LAB_013203f2:
      plVar2[3] = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21140();
LAB_01320492:
  plVar2[4] = arg1;
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

