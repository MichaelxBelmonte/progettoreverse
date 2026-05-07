// Function: FUN_0094ba79
// Address: 0094ba79
// Size: 813 bytes
// Class: Unknown

uint64_t FUN_0094ba79(ulong param_1,uint64_t param_2,void*param_3,int64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t arg1;
  uint64_t this_ptr;
  uint64_t local_68;
  int64_t *local_60;
  int64_t local_58;
  int64_t *local_50;
  
  local_58 = param_4;
  pvVar3 = operator_new(param_1);
  plVar5 = *(int64_t **)(arg1 + 8);
  if (plVar5 != (int64_t *)0x0) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = *param_3;
  local_60 = (int64_t *)param_3[1];
  if (local_60 != (int64_t *)0x0) {
    LOCK();
    local_60[1] = local_60[1] + 1;
    UNLOCK();
  }
  FUN_00978010(param_1,param_2,&local_68,local_58);
  plVar4 = operator_new(param_1);
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (int64_t)&g_0251ebd0;
  plVar4[3] = (int64_t)pvVar3;
  if (local_60 != (int64_t *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar2 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_60 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar2 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  local_50 = plVar4 + 1;
  pvVar3 = operator_new(param_1);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_00997cc8();
  plVar5 = operator_new(param_1);
  plVar5[2] = 0;
  plVar5[1] = 0;
  *plVar5 = (int64_t)&g_0251ec20;
  plVar5[3] = (int64_t)pvVar3;
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar2 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = plVar5 + 1;
  if (*(char *)(local_58 + 0x27b) == '\0') {
    operator_new(param_1);
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
    FUN_009ab44e();
    FUN_0094bff0();
    if (plVar5 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    FUN_008f8d84();
    FUN_00939a92();
    operator_new(param_1);
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
    FUN_009ab538();
    FUN_0094bff0();
    if (plVar5 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_008f7b1c();
  }
  LOCK();
  lVar2 = *plVar6;
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *local_50;
  *local_50 = *local_50 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  return this_ptr;
}

