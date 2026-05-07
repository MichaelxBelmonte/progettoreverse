// Function: FUN_009298da
// Address: 009298da
// Size: 711 bytes
// Class: GNString


undefined8 FUN_009298da(ulong param_1,undefined8 param_2,ulong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulong uVar8;
  undefined8 unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  
  uVar8 = param_1;
  pvVar3 = operator_new(param_1);
  FUN_00adae60();
  plVar4 = operator_new(uVar8);
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (longlong)&DAT_0251fbf0;
  plVar4[3] = (longlong)pvVar3;
  pvVar3 = operator_new(uVar8);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_0094e0f0();
  plVar6 = operator_new(uVar8);
  plVar6[2] = 0;
  plVar6[1] = 0;
  *plVar6 = (longlong)&DAT_0251e5e8;
  plVar6[3] = (longlong)pvVar3;
  plVar7 = plVar6;
  if (plVar4 != (longlong *)0x0) {
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
  *plVar7 = (longlong)&DAT_0251fba0;
  plVar7[3] = (longlong)pvVar3;
  if (plVar6 != (longlong *)0x0) {
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
  if (plVar6 != (longlong *)0x0) {
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
  if (plVar7 != (longlong *)0x0) {
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
  return unaff_RDI;
}


