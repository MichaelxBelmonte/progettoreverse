// Function: FUN_00995264
// Address: 00995264
// Size: 923 bytes
// Class: Unknown

void FUN_00995264(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t *this_ptr;
  void*puVar8;
  void *pvVar9;
  void*puVar10;
  void *pvVar11;
  uint64_t uVar12;
  void*puVar13;
  uint64_t local_38;
  
  if ((uint64_t)this_ptr[4] < 0x200) {
    lVar3 = this_ptr[3];
    uVar5 = this_ptr[2] - this_ptr[1] >> 3;
    lVar6 = lVar3 - *this_ptr;
    if ((uint64_t)(lVar6 >> 3) <= uVar5) {
      uVar12 = 1;
      if (lVar6 != 0) {
        uVar12 = lVar6 >> 2;
      }
      if (uVar12 >> 0x3d == 0) {
        pvVar1 = operator_new(0);
        pvVar11 = (void *)((int64_t)pvVar1 + uVar5 * 8);
        operator_new((ulong)pvVar11);
        FUN_009958f6();
        for (lVar3 = this_ptr[2]; lVar3 != this_ptr[1]; lVar3 = lVar3 + -8) {
          FUN_00995a5a();
        }
        lVar3 = *this_ptr;
        *this_ptr = (int64_t)pvVar1;
        this_ptr[1] = (int64_t)pvVar11;
        pvVar9 = (void *)this_ptr[2];
        this_ptr[2] = (int64_t)pvVar11;
        this_ptr[3] = (int64_t)((int64_t)pvVar1 + uVar12 * 8);
        if (lVar3 == 0) {
          return;
        }
        operator_delete(pvVar9);
        return;
      }
LAB_009955fa:
                          FUN_00995030();
    }
    if (lVar3 != this_ptr[2]) {
      operator_new((ulong)lVar3);
      FUN_0099564a();
      return;
    }
    operator_new((ulong)lVar3);
    FUN_009957ae();
    puVar10 = (void*)this_ptr[2];
    local_38 = *(void*)this_ptr[1];
    puVar13 = (void*)this_ptr[1] + 1;
    this_ptr[1] = (int64_t)puVar13;
    puVar4 = puVar10;
    if (puVar10 != (void*)this_ptr[3]) goto LAB_009955e3;
    puVar8 = (void*)*this_ptr;
    lVar3 = (int64_t)puVar13 - (int64_t)puVar8;
    if (puVar13 < puVar8 || lVar3 == 0) {
      lVar3 = this_ptr[3] - (int64_t)puVar8;
      pvVar11 = (void *)(lVar3 >> 2);
      pvVar1 = (void *)((int64_t)&MACH_HEADER.magic + 1);
      if (lVar3 != 0) {
        pvVar1 = pvVar11;
      }
      if ((uint64_t)pvVar1 >> 0x3d != 0) goto LAB_009955fa;
      pvVar2 = operator_new((ulong)pvVar11);
      puVar4 = (void*)((int64_t)pvVar2 + ((uint64_t)pvVar1 >> 2) * 8);
      pvVar9 = (void *)((int64_t)pvVar2 + (int64_t)pvVar1 * 8);
      lVar3 = (int64_t)puVar10 - (int64_t)puVar13;
      puVar10 = puVar4;
      if (lVar3 != 0) {
        puVar7 = (void*)((int64_t)puVar4 + lVar3);
        lVar6 = 0;
        do {
          pvVar11 = *(void **)((int64_t)puVar13 + lVar6);
          *puVar4 = pvVar11;
          puVar4 = (void*)((int64_t)pvVar2 + lVar6 + ((uint64_t)pvVar1 >> 2) * 8 + 8);
          lVar6 = lVar6 + 8;
        } while ((lVar3 >> 3) * 8 != lVar6);
        goto LAB_009955b2;
      }
      goto LAB_009955bc;
    }
  }
  else {
    this_ptr[4] = this_ptr[4] - 0x200;
    puVar10 = (void*)this_ptr[2];
    local_38 = *(void*)this_ptr[1];
    puVar13 = (void*)this_ptr[1] + 1;
    this_ptr[1] = (int64_t)puVar13;
    puVar4 = puVar10;
    if (puVar10 != (void*)this_ptr[3]) goto LAB_009955e3;
    puVar8 = (void*)*this_ptr;
    lVar3 = (int64_t)puVar13 - (int64_t)puVar8;
    if (puVar13 < puVar8 || lVar3 == 0) {
      lVar3 = this_ptr[3] - (int64_t)puVar8;
      pvVar11 = (void *)(lVar3 >> 2);
      pvVar1 = (void *)((int64_t)&MACH_HEADER.magic + 1);
      if (lVar3 != 0) {
        pvVar1 = pvVar11;
      }
      if ((uint64_t)pvVar1 >> 0x3d != 0) goto LAB_009955fa;
      pvVar2 = operator_new((ulong)pvVar11);
      puVar4 = (void*)((int64_t)pvVar2 + ((uint64_t)pvVar1 >> 2) * 8);
      pvVar9 = (void *)((int64_t)pvVar2 + (int64_t)pvVar1 * 8);
      lVar3 = (int64_t)puVar10 - (int64_t)puVar13;
      puVar10 = puVar4;
      if (lVar3 != 0) {
        puVar7 = (void*)((int64_t)puVar4 + lVar3);
        lVar6 = 0;
        do {
          pvVar11 = *(void **)((int64_t)puVar13 + lVar6);
          *puVar4 = pvVar11;
          puVar4 = (void*)((int64_t)pvVar2 + lVar6 + ((uint64_t)pvVar1 >> 2) * 8 + 8);
          lVar6 = lVar6 + 8;
        } while ((lVar3 >> 3) * 8 != lVar6);
LAB_009955b2:
        puVar8 = (void*)*this_ptr;
        puVar4 = puVar7;
      }
LAB_009955bc:
      *this_ptr = (int64_t)pvVar2;
      this_ptr[1] = (int64_t)puVar10;
      this_ptr[2] = (int64_t)puVar4;
      this_ptr[3] = (int64_t)pvVar9;
      if (puVar8 != (void*)0x0) {
        operator_delete(pvVar11);
        puVar4 = (void*)this_ptr[2];
      }
      goto LAB_009955e3;
    }
  }
  lVar3 = ((lVar3 >> 3) + 1) - ((lVar3 >> 3) + 1 >> 0x3f) >> 1;
  pvVar11 = (void *)((int64_t)puVar10 - (int64_t)puVar13);
  puVar4 = puVar13;
  if (pvVar11 != (void *)0x0) {
    _memmove((void *)-lVar3,pvVar11,param_3);
    puVar4 = (void*)this_ptr[1];
  }
  this_ptr[2] = (int64_t)(puVar13 + (((int64_t)pvVar11 >> 3) - lVar3));
  this_ptr[1] = (int64_t)(puVar4 + -lVar3);
  puVar4 = puVar13 + (((int64_t)pvVar11 >> 3) - lVar3);
LAB_009955e3:
  *puVar4 = local_38;
  this_ptr[2] = this_ptr[2] + 8;
  return;
}

