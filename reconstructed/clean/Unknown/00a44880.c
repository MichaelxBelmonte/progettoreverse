// Function: FUN_00a44880
// Address: 00a44880
// Size: 992 bytes
// Class: Unknown

void FUN_00a44880(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  int64_t lVar4;
  _Unwind_Exception *exception_object;
  void*puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *this_ptr;
  void*puVar9;
  void *pvVar10;
  void*puVar11;
  void *pvVar12;
  uint64_t uVar13;
  void*puVar14;
  void *local_68;
  int64_t lStack_60;
  int64_t local_58;
  uint64_t local_38;
  
  if ((uint64_t)this_ptr[4] < 0x200) {
    lVar4 = this_ptr[3];
    uVar6 = this_ptr[2] - this_ptr[1] >> 3;
    lVar7 = lVar4 - *this_ptr;
    if ((uint64_t)(lVar7 >> 3) <= uVar6) {
      uVar13 = 1;
      if (lVar7 != 0) {
        uVar13 = lVar7 >> 2;
      }
      pvVar12 = (void *)0x0;
      if (uVar13 >> 0x3d == 0) {
        pvVar2 = operator_new(0);
        pvVar12 = (void *)((int64_t)pvVar2 + uVar6 * 8);
        operator_new((ulong)pvVar12);
        FUN_00a554b8();
        for (lVar4 = this_ptr[2]; lVar4 != this_ptr[1]; lVar4 = lVar4 + -8) {
          FUN_00a43078();
        }
        lVar4 = *this_ptr;
        *this_ptr = (int64_t)pvVar2;
        this_ptr[1] = (int64_t)pvVar12;
        pvVar10 = (void *)this_ptr[2];
        this_ptr[2] = (int64_t)pvVar12;
        this_ptr[3] = (int64_t)((int64_t)pvVar2 + uVar13 * 8);
        if (lVar4 == 0) {
          return;
        }
        operator_delete(pvVar10);
        return;
      }
LAB_00a44c16:
      FUN_00a446a4();
      operator_delete(pvVar12);
      exception_object = (_Unwind_Exception *)0x0;
      if (local_58 - lStack_60 != 0) {
        exception_object = (_Unwind_Exception *)~((local_58 - lStack_60) - 8U >> 3);
      }
      if (local_68 != (void *)0x0) {
        operator_delete(exception_object);
      }
      __Unwind_Resume(exception_object);
                          pcVar1 = invalidInstructionException();
      (*pcVar1)();
    }
    if (lVar4 != this_ptr[2]) {
      operator_new((ulong)lVar4);
      FUN_00a42f08();
      return;
    }
    local_68 = operator_new((ulong)lVar4);
    FUN_00a55370();
    puVar11 = (void*)this_ptr[2];
    local_38 = *(void*)this_ptr[1];
    puVar14 = (void*)this_ptr[1] + 1;
    this_ptr[1] = (int64_t)puVar14;
    puVar5 = puVar11;
    if (puVar11 != (void*)this_ptr[3]) goto LAB_00a44bff;
    puVar9 = (void*)*this_ptr;
    lVar4 = (int64_t)puVar14 - (int64_t)puVar9;
    if (puVar14 < puVar9 || lVar4 == 0) {
      lVar4 = this_ptr[3] - (int64_t)puVar9;
      pvVar12 = (void *)(lVar4 >> 2);
      pvVar2 = (void *)((int64_t)&MACH_HEADER.magic + 1);
      if (lVar4 != 0) {
        pvVar2 = pvVar12;
      }
      if ((uint64_t)pvVar2 >> 0x3d != 0) goto LAB_00a44c16;
      pvVar3 = operator_new((ulong)pvVar12);
      puVar5 = (void*)((int64_t)pvVar3 + ((uint64_t)pvVar2 >> 2) * 8);
      pvVar10 = (void *)((int64_t)pvVar3 + (int64_t)pvVar2 * 8);
      lVar4 = (int64_t)puVar11 - (int64_t)puVar14;
      puVar11 = puVar5;
      if (lVar4 != 0) {
        puVar8 = (void*)((int64_t)puVar5 + lVar4);
        lVar7 = 0;
        do {
          pvVar12 = *(void **)((int64_t)puVar14 + lVar7);
          *puVar5 = pvVar12;
          puVar5 = (void*)((int64_t)pvVar3 + lVar7 + ((uint64_t)pvVar2 >> 2) * 8 + 8);
          lVar7 = lVar7 + 8;
        } while ((lVar4 >> 3) * 8 != lVar7);
        goto LAB_00a44bce;
      }
      goto LAB_00a44bd8;
    }
  }
  else {
    this_ptr[4] = this_ptr[4] - 0x200;
    puVar11 = (void*)this_ptr[2];
    local_38 = *(void*)this_ptr[1];
    puVar14 = (void*)this_ptr[1] + 1;
    this_ptr[1] = (int64_t)puVar14;
    puVar5 = puVar11;
    if (puVar11 != (void*)this_ptr[3]) goto LAB_00a44bff;
    puVar9 = (void*)*this_ptr;
    lVar4 = (int64_t)puVar14 - (int64_t)puVar9;
    if (puVar14 < puVar9 || lVar4 == 0) {
      lVar4 = this_ptr[3] - (int64_t)puVar9;
      pvVar12 = (void *)(lVar4 >> 2);
      pvVar2 = (void *)((int64_t)&MACH_HEADER.magic + 1);
      if (lVar4 != 0) {
        pvVar2 = pvVar12;
      }
      if ((uint64_t)pvVar2 >> 0x3d != 0) goto LAB_00a44c16;
      pvVar3 = operator_new((ulong)pvVar12);
      puVar5 = (void*)((int64_t)pvVar3 + ((uint64_t)pvVar2 >> 2) * 8);
      pvVar10 = (void *)((int64_t)pvVar3 + (int64_t)pvVar2 * 8);
      lVar4 = (int64_t)puVar11 - (int64_t)puVar14;
      puVar11 = puVar5;
      if (lVar4 != 0) {
        puVar8 = (void*)((int64_t)puVar5 + lVar4);
        lVar7 = 0;
        do {
          pvVar12 = *(void **)((int64_t)puVar14 + lVar7);
          *puVar5 = pvVar12;
          puVar5 = (void*)((int64_t)pvVar3 + lVar7 + ((uint64_t)pvVar2 >> 2) * 8 + 8);
          lVar7 = lVar7 + 8;
        } while ((lVar4 >> 3) * 8 != lVar7);
LAB_00a44bce:
        puVar9 = (void*)*this_ptr;
        puVar5 = puVar8;
      }
LAB_00a44bd8:
      *this_ptr = (int64_t)pvVar3;
      this_ptr[1] = (int64_t)puVar11;
      this_ptr[2] = (int64_t)puVar5;
      this_ptr[3] = (int64_t)pvVar10;
      if (puVar9 != (void*)0x0) {
        operator_delete(pvVar12);
        puVar5 = (void*)this_ptr[2];
      }
      goto LAB_00a44bff;
    }
  }
  lVar4 = ((lVar4 >> 3) + 1) - ((lVar4 >> 3) + 1 >> 0x3f) >> 1;
  pvVar12 = (void *)((int64_t)puVar11 - (int64_t)puVar14);
  puVar5 = puVar14;
  if (pvVar12 != (void *)0x0) {
    _memmove((void *)-lVar4,pvVar12,param_3);
    puVar5 = (void*)this_ptr[1];
  }
  this_ptr[2] = (int64_t)(puVar14 + (((int64_t)pvVar12 >> 3) - lVar4));
  this_ptr[1] = (int64_t)(puVar5 + -lVar4);
  puVar5 = puVar14 + (((int64_t)pvVar12 >> 3) - lVar4);
LAB_00a44bff:
  *puVar5 = local_38;
  this_ptr[2] = this_ptr[2] + 8;
  return;
}

