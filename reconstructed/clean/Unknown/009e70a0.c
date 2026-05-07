// Function: FUN_009e70a0
// Address: 009e70a0
// Size: 557 bytes
// Class: Unknown

void* FUN_009e70a0(void*param_1,uint64_t param_2)

{
  uint64_t uVar1;
  void*puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t lVar5;
  void*puVar6;
  int64_t *this_ptr;
  void*puVar7;
  int64_t local_58;
  void*local_48;
  
  if (param_2 != 0) {
    puVar2 = (void*)this_ptr[1];
    if ((uint64_t)((this_ptr[2] - (int64_t)puVar2 >> 3) * -0x5555555555555555) < param_2) {
      if (0xaaaaaaaaaaaaaaa < ((int64_t)puVar2 - *this_ptr >> 3) * -0x5555555555555555 + param_2)
      {
                            std::__vector_base_common<true>::__throw_length_error();
      }
      FUN_009e7474(this_ptr + 2,((int64_t)arg1 - *this_ptr >> 3) * -0x5555555555555555);
      lVar3 = param_2 * 0x18;
      puVar2 = local_48;
      do {
        uVar1 = *param_1;
        puVar2[1] = param_1[1];
        *puVar2 = uVar1;
        *(void*)(puVar2 + 2) = *(void*)(param_1 + 2);
        lVar3 = lVar3 + -0x18;
        puVar2 = puVar2 + 3;
      } while (lVar3 != 0);
      arg1 = (void*)FUN_009e73b6();
      if (local_58 != 0) {
        operator_delete(local_48 + param_2 * 3);
      }
    }
    else {
      lVar3 = (int64_t)puVar2 - (int64_t)arg1 >> 3;
      uVar4 = param_2;
      if ((uint64_t)(lVar3 * -0x5555555555555555) < param_2) {
        lVar5 = param_2 + lVar3 * 0x5555555555555555;
        puVar7 = puVar2;
        if (lVar5 != 0) {
          puVar7 = puVar2 + lVar5 * 3;
          lVar5 = param_2 * 0x18 + lVar3 * -8;
          puVar6 = puVar2;
          do {
            uVar1 = *param_1;
            puVar6[1] = param_1[1];
            *puVar6 = uVar1;
            *(void*)(puVar6 + 2) = *(void*)(param_1 + 2);
            lVar5 = lVar5 + -0x18;
            puVar6 = puVar6 + 3;
          } while (lVar5 != 0);
        }
        this_ptr[1] = (int64_t)puVar7;
        uVar4 = lVar3 * -0x5555555555555555;
        if ((int64_t)puVar2 - (int64_t)arg1 == 0) {
          return arg1;
        }
      }
      FUN_009e731a(arg1 + param_2 * 3);
      puVar2 = arg1;
      if ((arg1 <= param_1) && (param_1 < (void*)this_ptr[1])) {
        param_1 = param_1 + param_2 * 3;
      }
      do {
        *puVar2 = *param_1;
        puVar2[1] = param_1[1];
        *(void*)(puVar2 + 2) = *(void*)(param_1 + 2);
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 3;
      } while (uVar4 != 0);
    }
  }
  return arg1;
}

