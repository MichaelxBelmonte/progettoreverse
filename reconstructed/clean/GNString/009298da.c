// Function: FUN_009298da
// Address: 009298da
// Size: 711 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009298da(ulong param_1,uint64_t param_2,ulong param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  ulong uVar8;
  uint64_t this_ptr;
  int64_t *plVar9;
  int64_t *plVar10;
  
  uVar8 = param_1;
  pvVar3 = operator_new(param_1);
  FUN_00adae60();
  plVar4 = operator_new(uVar8);
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (int64_t)&g_0251fbf0;
  plVar4[3] = (int64_t)pvVar3;
  pvVar3 = operator_new(uVar8);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_0094e0f0();
  plVar6 = operator_new(uVar8);
  plVar6[2] = 0;
  plVar6[1] = 0;
  *plVar6 = (int64_t)&g_0251e5e8;
  plVar6[3] = (int64_t)pvVar3;
  plVar7 = plVar6;
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar2 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar9 = plVar6 + 1;
  uVar8 = (ulong)plVar7;
  pvVar3 = operator_new(uVar8);
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  FUN_00977530();
  plVar7 = operator_new(uVar8);
  plVar7[2] = 0;
  plVar7[1] = 0;
  *plVar7 = (int64_t)&g_0251fba0;
  plVar7[3] = (int64_t)pvVar3;
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar2 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = plVar7 + 1;
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  FUN_009f2044(param_3,param_1);
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  operator_new(param_3);
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  FUN_0094dfcc();
  FUN_0094e33a();
  if (plVar7 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  LOCK();
  lVar2 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  return this_ptr;
}

