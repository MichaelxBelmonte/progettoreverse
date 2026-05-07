// Function: FUN_00980652
// Address: 00980652
// Size: 532 bytes
// Class: Unknown

void* FUN_00980652(uint64_t param_1,void*param_2,size_t param_3)

{
  uint64_t uVar1;
  void *pvVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  void*arg1;
  int64_t *this_ptr;
  void*puVar7;
  void*puVar8;
  void*local_40;
  
  puVar5 = (void*)this_ptr[1];
  if (puVar5 < (void*)this_ptr[2]) {
    puVar7 = arg1;
    if (puVar5 == arg1) {
      *arg1 = *param_2;
      this_ptr[1] = (int64_t)(arg1 + 1);
    }
    else {
      puVar6 = puVar5 + -(int64_t)(arg1 + 1);
      if (puVar5 + -1 < puVar5) {
        lVar4 = 0;
        do {
          puVar5[lVar4] = (puVar5 + -1)[lVar4];
          lVar4 = lVar4 + 1;
        } while ((int64_t)(arg1 + 1) - (int64_t)arg1 != lVar4);
        puVar5 = puVar5 + lVar4;
      }
      this_ptr[1] = (int64_t)puVar5;
      if (puVar6 != (void*)0x0) {
        _memmove(puVar5,puVar6,param_3);
      }
      if ((arg1 <= param_2) && (param_2 < (void*)this_ptr[1])) {
        param_2 = param_2 + 1;
      }
      *arg1 = *param_2;
    }
  }
  else {
    lVar4 = *this_ptr;
    puVar5 = puVar5 + (1 - lVar4);
    if ((int64_t)puVar5 < 0) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    uVar1 = this_ptr[2] - lVar4;
    puVar6 = (void*)(uVar1 * 2);
    if (puVar6 < puVar5) {
      puVar6 = puVar5;
    }
    puVar5 = (void*)0x7fffffffffffffff;
    if (uVar1 < 0x3fffffffffffffff) {
      puVar5 = puVar6;
    }
    if (puVar5 == (void*)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = operator_new((ulong)puVar6);
    }
    puVar7 = (void*)((int64_t)pvVar2 + (int64_t)(arg1 + -lVar4));
    local_40 = (void*)((int64_t)pvVar2 + (int64_t)puVar5);
    if (arg1 + -lVar4 == puVar5) {
      if ((int64_t)puVar5 < 1) {
        uVar1 = 1;
        if ((int64_t)puVar5 * 2 != 0) {
          uVar1 = (int64_t)puVar5 * 2;
        }
        pvVar3 = operator_new((ulong)puVar6);
        puVar7 = (void*)((uVar1 >> 2) + (int64_t)pvVar3);
        local_40 = (void*)((int64_t)pvVar3 + uVar1);
        if (pvVar2 != (void *)0x0) {
          operator_delete(puVar6);
          lVar4 = *this_ptr;
        }
      }
      else {
        puVar6 = (void*)-((int64_t)(puVar7 + (1 - (int64_t)pvVar2)) >> 0x3f);
        puVar7 = puVar7 + -((int64_t)(puVar7 + (1 - (int64_t)pvVar2) + (int64_t)puVar6) >> 1);
      }
    }
    *puVar7 = *param_2;
    puVar5 = arg1 + -lVar4;
    if (0 < (int64_t)puVar5) {
      _memcpy(puVar6,puVar5,param_3);
    }
    puVar8 = puVar7 + 1;
    pvVar2 = (void *)(this_ptr[1] - (int64_t)arg1);
    if (0 < (int64_t)pvVar2) {
      _memcpy(puVar6,pvVar2,param_3);
      puVar8 = puVar8 + (int64_t)pvVar2;
    }
    lVar4 = *this_ptr;
    *this_ptr = (int64_t)puVar7 - (int64_t)puVar5;
    this_ptr[1] = (int64_t)puVar8;
    this_ptr[2] = (int64_t)local_40;
    if (lVar4 != 0) {
      operator_delete(puVar6);
    }
  }
  return puVar7;
}

