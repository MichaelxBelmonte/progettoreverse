// Function: FUN_009f2328
// Address: 009f2328
// Size: 1581 bytes
// Class: Unknown

void FUN_009f2328(ulong param_1,int param_2,byte param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  void*puVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t *plVar7;
  ulong uVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t *arg1;
  void*this_ptr;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  
  if (param_2 == 2) {
    puVar4 = operator_new(param_1);
    lVar2 = *arg1;
    plVar7 = (int64_t *)arg1[1];
    if (plVar7 == (int64_t *)0x0) {
      puVar9 = PTRg_0249c098 + 0x10;
      *puVar4 = puVar9;
      puVar4[1] = lVar2;
      puVar4[2] = 0;
    }
    else {
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
      puVar9 = &g_02522df8;
      *puVar4 = &g_02522df8;
      puVar4[1] = lVar2;
      puVar4[2] = plVar7;
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    local_48 = operator_new((ulong)puVar9);
    local_48[2] = 0;
    local_48[1] = 0;
    *local_48 = (int64_t)&g_02520ce0;
    local_48[3] = (int64_t)puVar4;
    plVar5 = local_48;
    if (plVar7 != (int64_t *)0x0) {
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
    *local_40 = (int64_t)&g_0251e5e8;
    local_40[3] = (int64_t)plVar5;
    plVar7 = local_40;
    if (local_48 != (int64_t *)0x0) {
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
    *plVar7 = (int64_t)&g_02525128;
    plVar7[3] = (int64_t)pvVar6;
LAB_009f27fe:
    local_50 = local_48 + 1;
    if (local_40 != (int64_t *)0x0) {
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
        local_40 = (int64_t *)0x0;
        this_ptr[3] = 0;
        this_ptr[2] = 0;
        *this_ptr = 0;
        this_ptr[1] = 0;
        bVar3 = true;
        plVar7 = (int64_t *)0x0;
        plVar5 = (int64_t *)0x0;
        goto LAB_009f28a8;
      }
      puVar4 = operator_new(param_1);
      lVar2 = *arg1;
      plVar7 = (int64_t *)arg1[1];
      if (plVar7 == (int64_t *)0x0) {
        puVar9 = PTRg_0249c098 + 0x10;
        *puVar4 = puVar9;
        puVar4[1] = lVar2;
        puVar4[2] = 0;
      }
      else {
        LOCK();
        plVar7[1] = plVar7[1] + 1;
        UNLOCK();
        puVar9 = &g_02522df8;
        *puVar4 = &g_02522df8;
        puVar4[1] = lVar2;
        puVar4[2] = plVar7;
        LOCK();
        plVar7[1] = plVar7[1] + 1;
        UNLOCK();
      }
      local_48 = operator_new((ulong)puVar9);
      local_48[2] = 0;
      local_48[1] = 0;
      *local_48 = (int64_t)&g_02520ce0;
      local_48[3] = (int64_t)puVar4;
      plVar5 = local_48;
      if (plVar7 != (int64_t *)0x0) {
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
      *local_40 = (int64_t)&g_0251e5e8;
      local_40[3] = (int64_t)plVar5;
      plVar7 = local_40;
      if (local_48 != (int64_t *)0x0) {
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
      *plVar7 = (int64_t)&g_0251fba0;
      plVar7[3] = (int64_t)pvVar6;
      goto LAB_009f27fe;
    }
    plVar5 = operator_new(param_1);
    lVar2 = *arg1;
    plVar7 = (int64_t *)arg1[1];
    if (plVar7 == (int64_t *)0x0) {
      puVar9 = PTRg_0249c098 + 0x10;
      *plVar5 = (int64_t)puVar9;
      plVar5[1] = lVar2;
      plVar5[2] = 0;
    }
    else {
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
      puVar9 = &g_02522df8;
      *plVar5 = (int64_t)&g_02522df8;
      plVar5[1] = lVar2;
      plVar5[2] = (int64_t)plVar7;
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    local_48 = operator_new((ulong)puVar9);
    local_48[2] = 0;
    local_48[1] = 0;
    *local_48 = (int64_t)&g_02520ce0;
    local_48[3] = (int64_t)plVar5;
    plVar10 = local_48;
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
    pvVar6 = operator_new((ulong)plVar10);
    LOCK();
    local_48[1] = local_48[1] + 1;
    UNLOCK();
    uVar8 = (ulong)param_3;
    FUN_00a00da8(param_3,param_1);
    plVar7 = operator_new(uVar8);
    plVar7[2] = 0;
    plVar7[1] = 0;
    *plVar7 = (int64_t)&g_02520030;
    plVar7[3] = (int64_t)pvVar6;
    local_40 = local_48;
    if (local_48 != (int64_t *)0x0) {
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
  this_ptr[3] = 0;
  this_ptr[2] = 0;
  this_ptr[1] = 0;
  *this_ptr = 0;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  plVar10 = (int64_t *)this_ptr[1];
  *this_ptr = pvVar6;
  this_ptr[1] = plVar7;
  if (plVar10 != (int64_t *)0x0) {
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
  this_ptr[2] = plVar5;
  plVar10 = (int64_t *)this_ptr[3];
  this_ptr[3] = local_40;
  if (plVar10 != (int64_t *)0x0) {
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

