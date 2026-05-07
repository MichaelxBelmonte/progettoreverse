// Function: FUN_00a2cf58
// Address: 00a2cf58
// Size: 991 bytes
// Class: Unknown

void FUN_00a2cf58(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  void *pvVar5;
  void*puVar6;
  void *pvVar7;
  void*puVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t local_40;
  
  FUN_009b882c();
  *this_ptr = &g_02526e88;
  this_ptr[3] = arg1;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  FUN_00a4989e();
  this_ptr[0xf] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xd] = 0;
  local_40 = *(int64_t *)(arg1 + 0x48);
  if (local_40 != *(int64_t *)(arg1 + 0x50)) {
    puVar8 = &g_0252a720;
    do {
      pvVar4 = operator_new((ulong)puVar8);
      FUN_00a3ef70();
      puVar2 = (void*)this_ptr[5];
      if (puVar2 == (void*)this_ptr[6]) {
        lVar3 = this_ptr[4];
        pvVar7 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar7 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = (int64_t)this_ptr[6] - lVar3;
        puVar8 = (void*)(lVar9 >> 3);
        uVar10 = lVar9 >> 2;
        if (uVar10 < uVar1) {
          uVar10 = uVar1;
        }
        if ((void*)0xffffffffffffffe < puVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar10) {
                                FUN_00a2e51c();
          }
          pvVar5 = operator_new((ulong)puVar8);
        }
        lVar9 = (int64_t)pvVar5 + ((int64_t)pvVar7 >> 3) * 8 + 8;
        *(void **)(lVar9 + -8) = pvVar4;
        if (0 < (int64_t)pvVar7) {
          _memcpy(puVar8,pvVar7,param_3);
        }
        this_ptr[4] = pvVar5;
        this_ptr[5] = lVar9;
        this_ptr[6] = (void *)((int64_t)pvVar5 + uVar10 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar8);
        }
      }
      else {
        *puVar2 = pvVar4;
        this_ptr[5] = puVar2 + 1;
      }
      puVar6 = operator_new((ulong)puVar8);
      *puVar6 = &g_0252a000;
      puVar6[1] = &g_0252a720;
      *(void*)(puVar6 + 2) = 0xffffffff;
      puVar6[3] = 0xffffffffffffffff;
      *(void*)(puVar6 + 4) = 0x101;
      *(void*)(puVar6 + 5) = 0;
      *(void*)((int64_t)puVar6 + 0x2c) = 0;
      *(void*)(puVar6 + 6) = 0;
      *(void*)((int64_t)puVar6 + 0x4c) = 0;
      *(void*)((int64_t)puVar6 + 0x34) = 0;
      *(void*)((int64_t)puVar6 + 0x3c) = 0;
      puVar6[8] = 0;
      *(void*)(puVar6 + 9) = 0;
      FUN_00a2e49a();
      FUN_00a2e49a();
      *(void*)(puVar6 + 0x11) = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      *(void*)(puVar6 + 0x18) = 0x100;
      *(void*)((int64_t)puVar6 + 0xc2) = 0;
      *(void*)((int64_t)puVar6 + 0xca) = 0;
      *(void*)((int64_t)puVar6 + 0xcc) = 0x101;
      *(void*)(puVar6 + 0x1a) = 0;
      FUN_00a9728e();
      puVar2 = (void*)this_ptr[8];
      if (puVar2 == (void*)this_ptr[9]) {
        lVar3 = this_ptr[7];
        pvVar4 = (void *)((int64_t)puVar2 - lVar3);
        uVar1 = ((int64_t)pvVar4 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = (int64_t)this_ptr[9] - lVar3;
        puVar8 = (void*)(lVar9 >> 3);
        uVar10 = lVar9 >> 2;
        if (uVar10 < uVar1) {
          uVar10 = uVar1;
        }
        if ((void*)0xffffffffffffffe < puVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar10) {
                                FUN_00a2e51c();
          }
          pvVar7 = operator_new((ulong)puVar8);
        }
        lVar9 = (int64_t)pvVar7 + ((int64_t)pvVar4 >> 3) * 8 + 8;
        *(void**)(lVar9 + -8) = puVar6;
        if (0 < (int64_t)pvVar4) {
          _memcpy(puVar8,pvVar4,param_3);
        }
        this_ptr[7] = pvVar7;
        this_ptr[8] = lVar9;
        this_ptr[9] = (void *)((int64_t)pvVar7 + uVar10 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar8);
        }
      }
      else {
        *puVar2 = puVar6;
        this_ptr[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0xd8;
    } while (local_40 != *(int64_t *)(arg1 + 0x50));
  }
  *(void*)(this_ptr[3] + 0x40) = 0x6e;
  FUN_009b99ca();
  return;
}

