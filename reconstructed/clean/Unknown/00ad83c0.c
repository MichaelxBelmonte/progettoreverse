// Function: FUN_00ad83c0
// Address: 00ad83c0
// Size: 531 bytes
// Class: Unknown

void FUN_00ad83c0(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  uint uVar6;
  void*arg1;
  int64_t lVar7;
  uint64_t *this_ptr;
  void*puVar8;
  void *pvVar9;
  void*puVar10;
  
  puVar8 = (void*)this_ptr[2];
  if (puVar8 == (void*)this_ptr[3]) {
    puVar4 = (void*)*this_ptr;
    puVar5 = (void*)this_ptr[1];
    if (puVar5 < puVar4 || (int64_t)puVar5 - (int64_t)puVar4 == 0) {
      lVar2 = (int64_t)this_ptr[3] - (int64_t)puVar4;
      puVar3 = (void*)(lVar2 >> 2);
      puVar10 = (void*)((int64_t)&MACH_HEADER.magic + 1);
      if (lVar2 != 0) {
        puVar10 = puVar3;
      }
      if ((uint64_t)puVar10 >> 0x3d != 0) {
                            FUN_00ad7940();
      }
      pvVar9 = operator_new((ulong)puVar3);
      puVar1 = (void*)((int64_t)pvVar9 + ((uint64_t)puVar10 >> 2) * 8);
      lVar2 = (int64_t)puVar8 - (int64_t)puVar5;
      puVar8 = puVar1;
      if (lVar2 != 0) {
        uVar6 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
        if ((uVar6 & 7) != 0) {
          lVar7 = -((uint64_t)uVar6 & 7);
          do {
            puVar3 = (void*)*puVar5;
            *puVar8 = puVar3;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0);
        }
        if (0x37 < lVar2 - 8U) {
          puVar3 = (void*)0x0;
          puVar4 = puVar8;
          do {
            *puVar4 = *(void*)((int64_t)puVar5 + (int64_t)puVar3);
            *(void*)((int64_t)(puVar8 + 1) + (int64_t)puVar3) =
                 *(void*)((int64_t)(puVar5 + 1) + (int64_t)puVar3);
            *(void*)((int64_t)(puVar8 + 2) + (int64_t)puVar3) =
                 *(void*)((int64_t)(puVar5 + 2) + (int64_t)puVar3);
            *(void*)((int64_t)(puVar8 + 3) + (int64_t)puVar3) =
                 *(void*)((int64_t)(puVar5 + 3) + (int64_t)puVar3);
            *(void*)((int64_t)(puVar8 + 4) + (int64_t)puVar3) =
                 *(void*)((int64_t)(puVar5 + 4) + (int64_t)puVar3);
            *(void*)((int64_t)(puVar8 + 5) + (int64_t)puVar3) =
                 *(void*)((int64_t)(puVar5 + 5) + (int64_t)puVar3);
            *(void*)((int64_t)(puVar8 + 6) + (int64_t)puVar3) =
                 *(void*)((int64_t)(puVar5 + 6) + (int64_t)puVar3);
            *(void*)((int64_t)(puVar8 + 7) + (int64_t)puVar3) =
                 *(void*)((int64_t)(puVar5 + 7) + (int64_t)puVar3);
            puVar4 = (void*)((int64_t)(puVar8 + 8) + (int64_t)puVar3);
            puVar3 = puVar3 + 0x40;
          } while ((void*)
                   ((int64_t)pvVar9 +
                   ((((uint64_t)puVar10 >> 2) * 8 + (lVar2 >> 3) * 8) - (int64_t)puVar8)) !=
                   puVar3);
        }
        puVar4 = (void*)*this_ptr;
        puVar8 = (void*)((int64_t)puVar1 + lVar2);
      }
      *this_ptr = (uint64_t)pvVar9;
      this_ptr[1] = (uint64_t)puVar1;
      this_ptr[2] = (uint64_t)puVar8;
      this_ptr[3] = (uint64_t)((int64_t)pvVar9 + (int64_t)puVar10 * 8);
      if (puVar4 != (void*)0x0) {
        operator_delete(puVar3);
        puVar8 = (void*)this_ptr[2];
      }
    }
    else {
      lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
      lVar2 = (lVar2 + 1) - (lVar2 + 1 >> 0x3f) >> 1;
      pvVar9 = (void *)((int64_t)puVar8 - (int64_t)puVar5);
      puVar4 = puVar5;
      if (pvVar9 != (void *)0x0) {
        _memmove((void *)-lVar2,pvVar9,param_3);
        puVar4 = (void*)this_ptr[1];
      }
      puVar8 = puVar5 + (((int64_t)pvVar9 >> 3) - lVar2);
      this_ptr[2] = (uint64_t)puVar8;
      this_ptr[1] = (uint64_t)(puVar4 + -lVar2);
    }
  }
  *puVar8 = *arg1;
  this_ptr[2] = this_ptr[2] + 8;
  return;
}

