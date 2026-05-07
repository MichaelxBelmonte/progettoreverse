// Function: FUN_00a35d98
// Address: 00a35d98
// Size: 958 bytes
// Class: Unknown

void FUN_00a35d98(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  void*puVar2;
  int64_t lVar3;
  code *pcVar4;
  void *pvVar5;
  void *pvVar6;
  void*puVar7;
  void *pvVar8;
  void*puVar9;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t local_40;
  
  FUN_009b882c();
  *this_ptr = &g_025271b8;
  this_ptr[3] = arg1;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  FUN_00a4ce6e();
  this_ptr[0xf] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xd] = 0;
  local_40 = *(int64_t *)(arg1 + 0x48);
  if (local_40 != *(int64_t *)(arg1 + 0x50)) {
    puVar9 = &g_0252a720;
    do {
      pvVar5 = operator_new((ulong)puVar9);
      FUN_00a55710();
      puVar2 = (void*)this_ptr[5];
      if (puVar2 == (void*)this_ptr[6]) {
        lVar3 = this_ptr[4];
        pvVar8 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar8 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (int64_t)this_ptr[6] - lVar3;
        puVar9 = (void*)(lVar10 >> 3);
        uVar11 = lVar10 >> 2;
        if (uVar11 < uVar1) {
          uVar11 = uVar1;
        }
        if ((void*)0xffffffffffffffe < puVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar11) {
            FUN_00a37354();
            goto LAB_00a36158;
          }
          pvVar6 = operator_new((ulong)puVar9);
        }
        lVar10 = (int64_t)pvVar6 + ((int64_t)pvVar8 >> 3) * 8 + 8;
        *(void **)(lVar10 + -8) = pvVar5;
        if (0 < (int64_t)pvVar8) {
          _memcpy(puVar9,pvVar8,param_3);
        }
        this_ptr[4] = pvVar6;
        this_ptr[5] = lVar10;
        this_ptr[6] = (void *)((int64_t)pvVar6 + uVar11 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar9);
        }
      }
      else {
        *puVar2 = pvVar5;
        this_ptr[5] = puVar2 + 1;
      }
      puVar7 = operator_new((ulong)puVar9);
      *puVar7 = &g_0252a4c0;
      puVar7[1] = &g_0252a720;
      *(void*)(puVar7 + 2) = 0xffffffff;
      puVar7[3] = 0xffffffffffffffff;
      *(void*)(puVar7 + 4) = 0x101;
      *(void*)(puVar7 + 5) = 0;
      *(void*)((int64_t)puVar7 + 0x2c) = 0;
      *(void*)((int64_t)puVar7 + 0x34) = 0;
      *(void*)((int64_t)puVar7 + 0x3c) = 0;
      *(void*)((int64_t)puVar7 + 0x44) = 0;
      *(void*)((int64_t)puVar7 + 0x4c) = 0;
      FUN_00a372d2();
      FUN_00a372d2();
      puVar7[0x15] = 0;
      puVar7[0x14] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      *(void*)(puVar7 + 0x16) = 0x100;
      *(void*)((int64_t)puVar7 + 0xb2) = 0x10100000000;
      FUN_00aa5ac6();
      puVar2 = (void*)this_ptr[8];
      if (puVar2 == (void*)this_ptr[9]) {
        lVar3 = this_ptr[7];
        pvVar5 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar5 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (int64_t)this_ptr[9] - lVar3;
        puVar9 = (void*)(lVar10 >> 3);
        uVar11 = lVar10 >> 2;
        if (uVar11 < uVar1) {
          uVar11 = uVar1;
        }
        if ((void*)0xffffffffffffffe < puVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar11) {
            FUN_00a37354();
LAB_00a36158:
                                pcVar4 = invalidInstructionException();
            (*pcVar4)();
          }
          pvVar8 = operator_new((ulong)puVar9);
        }
        lVar10 = (int64_t)pvVar8 + ((int64_t)pvVar5 >> 3) * 8 + 8;
        *(void**)(lVar10 + -8) = puVar7;
        if (0 < (int64_t)pvVar5) {
          _memcpy(puVar9,pvVar5,param_3);
        }
        this_ptr[7] = pvVar8;
        this_ptr[8] = lVar10;
        this_ptr[9] = (void *)((int64_t)pvVar8 + uVar11 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar9);
        }
      }
      else {
        *puVar2 = puVar7;
        this_ptr[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0xc0;
    } while (local_40 != *(int64_t *)(arg1 + 0x50));
  }
  *(void*)(this_ptr[3] + 0x40) = 0x76;
  FUN_009b99ca();
  return;
}

