// Function: FUN_00a2e7c8
// Address: 00a2e7c8
// Size: 751 bytes
// Class: Unknown

void FUN_00a2e7c8(void *param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t local_40;
  
  FUN_009b882c();
  *this_ptr = &g_02526f10;
  this_ptr[3] = arg1;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  FUN_00a4a0ee();
  this_ptr[0xf] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xd] = 0;
  local_40 = *(int64_t *)(arg1 + 0x48);
  if (local_40 != *(int64_t *)(arg1 + 0x50)) {
    do {
      pvVar4 = operator_new((ulong)param_1);
      FUN_00a40500();
      puVar2 = (void*)this_ptr[5];
      if (puVar2 == (void*)this_ptr[6]) {
        lVar3 = this_ptr[4];
        pvVar6 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar6 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (int64_t)this_ptr[6] - lVar3;
        param_1 = (void *)(lVar7 >> 3);
        uVar8 = lVar7 >> 2;
        if (uVar8 < uVar1) {
          uVar8 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar8) {
                                FUN_00a2fe7c();
          }
          pvVar5 = operator_new((ulong)param_1);
        }
        lVar7 = (int64_t)pvVar5 + ((int64_t)pvVar6 >> 3) * 8 + 8;
        *(void **)(lVar7 + -8) = pvVar4;
        if (0 < (int64_t)pvVar6) {
          _memcpy(param_1,pvVar6,param_3);
        }
        this_ptr[4] = pvVar5;
        this_ptr[5] = lVar7;
        this_ptr[6] = (void *)((int64_t)pvVar5 + uVar8 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar4;
        this_ptr[5] = puVar2 + 1;
      }
      pvVar4 = operator_new((ulong)param_1);
      FUN_00a2eb36();
      FUN_00a993c2();
      puVar2 = (void*)this_ptr[8];
      if (puVar2 == (void*)this_ptr[9]) {
        lVar3 = this_ptr[7];
        pvVar6 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar6 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (int64_t)this_ptr[9] - lVar3;
        param_1 = (void *)(lVar7 >> 3);
        uVar8 = lVar7 >> 2;
        if (uVar8 < uVar1) {
          uVar8 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar8) {
                                FUN_00a2fe7c();
          }
          pvVar5 = operator_new((ulong)param_1);
        }
        lVar7 = (int64_t)pvVar5 + ((int64_t)pvVar6 >> 3) * 8 + 8;
        *(void **)(lVar7 + -8) = pvVar4;
        if (0 < (int64_t)pvVar6) {
          _memcpy(param_1,pvVar6,param_3);
        }
        this_ptr[7] = pvVar5;
        this_ptr[8] = lVar7;
        this_ptr[9] = (void *)((int64_t)pvVar5 + uVar8 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar4;
        this_ptr[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0x1d0;
    } while (local_40 != *(int64_t *)(arg1 + 0x50));
  }
  *(void*)(this_ptr[3] + 0x40) = 0x6f;
  FUN_009b99ca();
  return;
}

