// Function: FUN_009f2328
// Address: 009f2328
// Size: 1581 bytes
// Class: Unknown


void FUN_009f2328(ulong param_1,int param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  ulong uVar8;
  undefined *puVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  if (param_2 == 2) {
    puVar4 = operator_new(param_1);
    lVar2 = *unaff_RSI;
    plVar7 = (longlong *)unaff_RSI[1];
    if (plVar7 == (longlong *)0x0) {
      puVar9 = PTR_DAT_0249c098 + 0x10;
      *puVar4 = puVar9;
      puVar4[1] = lVar2;
      puVar4[2] = 0;
    }
    else {
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
      puVar9 = &DAT_02522df8;
      *puVar4 = &DAT_02522df8;
      puVar4[1] = lVar2;
      puVar4[2] = plVar7;
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    local_48 = operator_new((ulong)puVar9);
    local_48[2] = 0;
    local_48[1] = 0;
    *local_48 = (longlong)&DAT_02520ce0;
    local_48[3] = (longlong)puVar4;
    plVar5 = local_48;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar2 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar8 = (ulong)plVar5;
    plVar5 = operator_new(uVar8);
    LOCK();
    local_48[1] = local_48[1] + 1;
    UNLOCK();
    FUN_0094e0f0();
    local_40 = operator_new(uVar8);
    local_40[2] = 0;
    local_40[1] = 0;
    *local_40 = (longlong)&DAT_0251e5e8;
    local_40[3] = (longlong)plVar5;
    plVar7 = local_40;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_48 + 1;
      lVar2 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_48 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar8 = (ulong)plVar7;
    pvVar6 = operator_new(uVar8);
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
    FUN_00ad1c20();
    plVar7 = operator_new(uVar8);
    plVar7[2] = 0;
    plVar7[1] = 0;
    *plVar7 = (longlong)&DAT_02525128;
    plVar7[3] = (longlong)pvVar6;
LAB_009f27fe:
    local_50 = local_48 + 1;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_40 + 1;
      lVar2 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_40 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    LOCK();
    lVar2 = *local_50;
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (lVar2 == 0) {
LAB_009f283f:
      (**(code **)(*local_48 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        local_40 = (longlong *)0x0;
        unaff_RDI[3] = 0;
        unaff_RDI[2] = 0;
        *unaff_RDI = 0;
        unaff_RDI[1] = 0;
        bVar3 = true;
        plVar7 = (longlong *)0x0;
        plVar5 = (longlong *)0x0;
        goto LAB_009f28a8;
      }
      puVar4 = operator_new(param_1);
      lVar2 = *unaff_RSI;
      plVar7 = (longlong *)unaff_RSI[1];
      if (plVar7 == (longlong *)0x0) {
        puVar9 = PTR_DAT_0249c098 + 0x10;
        *puVar4 = puVar9;
        puVar4[1] = lVar2;
        puVar4[2] = 0;
      }
      else {
        LOCK();
        plVar7[1] = plVar7[1] + 1;
        UNLOCK();
        puVar9 = &DAT_02522df8;
        *puVar4 = &DAT_02522df8;
        puVar4[1] = lVar2;
        puVar4[2] = plVar7;
        LOCK();
        plVar7[1] = plVar7[1] + 1;
        UNLOCK();
      }
      local_48 = operator_new((ulong)puVar9);
      local_48[2] = 0;
      local_48[1] = 0;
      *local_48 = (longlong)&DAT_02520ce0;
      local_48[3] = (longlong)puVar4;
      plVar5 = local_48;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar7 + 1;
        lVar2 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar8 = (ulong)plVar5;
      plVar5 = operator_new(uVar8);
      LOCK();
      local_48[1] = local_48[1] + 1;
      UNLOCK();
      FUN_0094e0f0();
      local_40 = operator_new(uVar8);
      local_40[2] = 0;
      local_40[1] = 0;
      *local_40 = (longlong)&DAT_0251e5e8;
      local_40[3] = (longlong)plVar5;
      plVar7 = local_40;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_48 + 1;
        lVar2 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*local_48 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar8 = (ulong)plVar7;
      pvVar6 = operator_new(uVar8);
      LOCK();
      local_40[1] = local_40[1] + 1;
      UNLOCK();
      FUN_00977530();
      plVar7 = operator_new(uVar8);
      plVar7[2] = 0;
      plVar7[1] = 0;
      *plVar7 = (longlong)&DAT_0251fba0;
      plVar7[3] = (longlong)pvVar6;
      goto LAB_009f27fe;
    }
    plVar5 = operator_new(param_1);
    lVar2 = *unaff_RSI;
    plVar7 = (longlong *)unaff_RSI[1];
    if (plVar7 == (longlong *)0x0) {
      puVar9 = PTR_DAT_0249c098 + 0x10;
      *plVar5 = (longlong)puVar9;
      plVar5[1] = lVar2;
      plVar5[2] = 0;
    }
    else {
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
      puVar9 = &DAT_02522df8;
      *plVar5 = (longlong)&DAT_02522df8;
      plVar5[1] = lVar2;
      plVar5[2] = (longlong)plVar7;
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    local_48 = operator_new((ulong)puVar9);
    local_48[2] = 0;
    local_48[1] = 0;
    *local_48 = (longlong)&DAT_02520ce0;
    local_48[3] = (longlong)plVar5;
    plVar10 = local_48;
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
    pvVar6 = operator_new((ulong)plVar10);
    LOCK();
    local_48[1] = local_48[1] + 1;
    UNLOCK();
    uVar8 = (ulong)param_3;
    FUN_00a00da8(param_3,param_1);
    plVar7 = operator_new(uVar8);
    plVar7[2] = 0;
    plVar7[1] = 0;
    *plVar7 = (longlong)&DAT_02520030;
    plVar7[3] = (longlong)pvVar6;
    local_40 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_48 + 1;
      lVar2 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar2 != 0) goto LAB_009f2850;
      goto LAB_009f283f;
    }
  }
LAB_009f2850:
  unaff_RDI[3] = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  plVar10 = (longlong *)unaff_RDI[1];
  *unaff_RDI = pvVar6;
  unaff_RDI[1] = plVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  LOCK();
  local_40[1] = local_40[1] + 1;
  UNLOCK();
  bVar3 = false;
LAB_009f28a8:
  unaff_RDI[2] = plVar5;
  plVar10 = (longlong *)unaff_RDI[3];
  unaff_RDI[3] = local_40;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  (**(code **)(*plVar5 + 0x20))();
  if (!bVar3) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
    LOCK();
    plVar7 = local_40 + 1;
    lVar2 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


