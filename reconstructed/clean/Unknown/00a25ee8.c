// Function: FUN_00a25ee8
// Address: 00a25ee8
// Size: 755 bytes
// Class: Unknown

void FUN_00a25ee8(void *param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  void*puVar2;
  int64_t lVar3;
  code *pcVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t local_40;
  
  FUN_009b882c();
  *this_ptr = &g_02526be0;
  this_ptr[3] = arg1;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  FUN_00a4687e();
  this_ptr[0xf] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xd] = 0;
  local_40 = *(int64_t *)(arg1 + 0x48);
  if (local_40 != *(int64_t *)(arg1 + 0x50)) {
    do {
      pvVar5 = operator_new((ulong)param_1);
      FUN_00a184e0();
      puVar2 = (void*)this_ptr[5];
      if (puVar2 == (void*)this_ptr[6]) {
        lVar3 = this_ptr[4];
        pvVar7 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar7 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = (int64_t)this_ptr[6] - lVar3;
        param_1 = (void *)(lVar8 >> 3);
        uVar9 = lVar8 >> 2;
        if (uVar9 < uVar1) {
          uVar9 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar9) {
            FUN_00a27234();
            goto LAB_00a261dd;
          }
          pvVar6 = operator_new((ulong)param_1);
        }
        lVar8 = (int64_t)pvVar6 + ((int64_t)pvVar7 >> 3) * 8 + 8;
        *(void **)(lVar8 + -8) = pvVar5;
        if (0 < (int64_t)pvVar7) {
          _memcpy(param_1,pvVar7,param_3);
        }
        this_ptr[4] = pvVar6;
        this_ptr[5] = lVar8;
        this_ptr[6] = (void *)((int64_t)pvVar6 + uVar9 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar5;
        this_ptr[5] = puVar2 + 1;
      }
      pvVar5 = operator_new((ulong)param_1);
      FUN_00a8abbc();
      FUN_00a6a330();
      puVar2 = (void*)this_ptr[8];
      if (puVar2 == (void*)this_ptr[9]) {
        lVar3 = this_ptr[7];
        pvVar7 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar7 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = (int64_t)this_ptr[9] - lVar3;
        param_1 = (void *)(lVar8 >> 3);
        uVar9 = lVar8 >> 2;
        if (uVar9 < uVar1) {
          uVar9 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar9) {
            FUN_00a27234();
LAB_00a261dd:
                                pcVar4 = invalidInstructionException();
            (*pcVar4)();
          }
          pvVar6 = operator_new((ulong)param_1);
        }
        lVar8 = (int64_t)pvVar6 + ((int64_t)pvVar7 >> 3) * 8 + 8;
        *(void **)(lVar8 + -8) = pvVar5;
        if (0 < (int64_t)pvVar7) {
          _memcpy(param_1,pvVar7,param_3);
        }
        this_ptr[7] = pvVar6;
        this_ptr[8] = lVar8;
        this_ptr[9] = (void *)((int64_t)pvVar6 + uVar9 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar5;
        this_ptr[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0x148;
    } while (local_40 != *(int64_t *)(arg1 + 0x50));
  }
  *(void*)(this_ptr[3] + 0x40) = 0x69;
  FUN_009b99ca();
  return;
}

