// Function: FUN_0094c3f0
// Address: 0094c3f0
// Size: 818 bytes
// Class: Unknown


undefined8 FUN_0094c3f0(ulong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  
  local_58 = param_4;
  pvVar3 = operator_new(param_1);
  plVar5 = *(longlong **)(unaff_RSI + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = *param_3;
  local_60 = (longlong *)param_3[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    local_60[1] = local_60[1] + 1;
    UNLOCK();
  }
  FUN_00978010(param_1,param_2,&local_68,local_58);
  plVar4 = operator_new(param_1);
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (longlong)&DAT_0251ebd0;
  plVar4[3] = (longlong)pvVar3;
  if (local_60 != (longlong *)0x0) {
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
  if (plVar5 != (longlong *)0x0) {
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
  FUN_00994082();
  plVar5 = operator_new(param_1);
  plVar5[2] = 0;
  plVar5[1] = 0;
  *plVar5 = (longlong)&DAT_0251f778;
  plVar5[3] = (longlong)pvVar3;
  if (plVar4 != (longlong *)0x0) {
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
    FUN_00996980();
    FUN_0094c91a();
    if (plVar5 != (longlong *)0x0) {
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
    FUN_00996a02();
    FUN_0094c91a();
    if (plVar5 != (longlong *)0x0) {
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
  return unaff_RDI;
}


