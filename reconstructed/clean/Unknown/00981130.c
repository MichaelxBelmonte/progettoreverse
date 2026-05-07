// Function: FUN_00981130
// Address: 00981130
// Size: 847 bytes
// Class: Unknown

void* FUN_00981130(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  void*arg1;
  uint64_t uVar11;
  int64_t *this_ptr;
  uint32_t uVar12;
  void*local_90;
  void*local_58;
  void*local_50;
  void*local_48;
  void*local_40;
  uint64_t local_38;
  
  puVar3 = (void*)this_ptr[1];
  if (puVar3 < (void*)this_ptr[2]) {
    if (puVar3 == arg1) {
      *arg1 = *param_2;
      lVar9 = param_2[1];
      arg1[1] = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int64_t *)(lVar9 + 8) = *(int64_t *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      this_ptr[1] = (int64_t)(arg1 + 2);
    }
    else {
      FUN_009817fa(arg1 + 2);
      if ((arg1 <= param_2) && (param_2 < (void*)this_ptr[1])) {
        param_2 = param_2 + 2;
      }
      uVar4 = *param_2;
      lVar9 = param_2[1];
      if (lVar9 != 0) {
        LOCK();
        *(int64_t *)(lVar9 + 8) = *(int64_t *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      *arg1 = uVar4;
      plVar5 = (int64_t *)arg1[1];
      arg1[1] = lVar9;
      if (plVar5 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar5 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  else {
    if (((int64_t)puVar3 - *this_ptr >> 4) + 1U >> 0x3c != 0) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    uVar12 = FUN_0098197e(this_ptr + 2,(int64_t)arg1 - *this_ptr >> 4);
    if (local_48 == local_40) {
      if (local_50 < local_58 || (int64_t)local_50 - (int64_t)local_58 == 0) {
        uVar11 = 0;
        if ((int64_t)local_40 - (int64_t)local_58 != 0) {
          uVar11 = (int64_t)local_40 - (int64_t)local_58 >> 3;
        }
        FUN_0098197e(local_38,uVar11 >> 2);
        lVar9 = (int64_t)local_48 - (int64_t)local_50;
        local_48 = local_90;
        if (lVar9 != 0) {
          local_48 = (void*)((int64_t)local_90 + lVar9);
          lVar10 = 8;
          do {
            *local_90 = *(void*)((int64_t)local_50 + lVar10 + -8);
            local_90[1] = *(void*)((int64_t)local_50 + lVar10);
            *(void*)((int64_t)local_50 + lVar10) = 0;
            *(void*)((int64_t)local_50 + lVar10 + -8) = 0;
            lVar2 = (lVar9 >> 4) * -0x10 + 0x10 + lVar10;
            lVar10 = lVar10 + 0x10;
            local_90 = local_90 + 2;
          } while (lVar2 != 8);
        }
        uVar12 = FUN_009819e2();
      }
      else {
        lVar9 = (int64_t)local_50 - (int64_t)local_58 >> 4;
        lVar9 = (lVar9 + 1) - (lVar9 + 1 >> 0x3f) >> 1;
        if (local_50 == local_48) {
          local_48 = local_50 + lVar9 * -2;
        }
        else {
          do {
            uVar12 = *(void*)local_50;
            uVar6 = *(void*)((int64_t)local_50 + 4);
            uVar7 = *(void*)(local_50 + 1);
            uVar8 = *(void*)((int64_t)local_50 + 0xc);
            local_50[1] = 0;
            *local_50 = 0;
            plVar5 = (int64_t *)local_50[lVar9 * -2 + 1];
            puVar3 = local_50 + lVar9 * -2;
            *(void*)puVar3 = uVar12;
            *(void*)((int64_t)puVar3 + 4) = uVar6;
            *(void*)(puVar3 + 1) = uVar7;
            *(void*)((int64_t)puVar3 + 0xc) = uVar8;
            if (plVar5 != (int64_t *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar10 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar10 == 0) {
                (**(code **)(*plVar5 + 0x10))();
                uVar12 = std::__shared_weak_count::__release_weak();
              }
            }
            local_50 = local_50 + 2;
          } while (local_48 != local_50);
          local_48 = local_50 + lVar9 * -2;
        }
      }
    }
    *local_48 = *param_2;
    lVar9 = param_2[1];
    local_48[1] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int64_t *)(lVar9 + 8) = *(int64_t *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    arg1 = (void*)FUN_009818ca(uVar12,arg1);
    FUN_009819e2();
  }
  return arg1;
}

