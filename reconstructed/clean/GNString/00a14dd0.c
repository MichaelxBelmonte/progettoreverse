// Function: FUN_00a14dd0
// Address: 00a14dd0
// Size: 519 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_00a14dd0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  void *pvVar7;
  void*puVar8;
  int64_t lVar9;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  size_t sVar11;
  int64_t lVar12;
  void*puVar13;
  void *pvVar14;
  
  lVar9 = param_1 - param_2;
  lVar12 = arg1;
  if (0 < lVar9) {
    puVar13 = (void*)this_ptr[1];
    pvVar5 = (void *)(this_ptr[2] - (int64_t)puVar13);
    sVar11 = (size_t)this_ptr;
    if ((int64_t)pvVar5 < lVar9) {
      pvVar5 = (void *)*this_ptr;
      puVar13 = puVar13 + (lVar9 - (int64_t)pvVar5);
      if ((int64_t)puVar13 < 0) {
                            std::__vector_base_common<true>::__throw_length_error();
      }
      uVar1 = this_ptr[2] - (int64_t)pvVar5;
      puVar4 = (void*)(uVar1 * 2);
      if (puVar4 < puVar13) {
        puVar4 = puVar13;
      }
      puVar13 = (void*)0x7fffffffffffffff;
      if (uVar1 < 0x3fffffffffffffff) {
        puVar13 = puVar4;
      }
      lVar12 = arg1 - (int64_t)pvVar5;
      if (puVar13 == (void*)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = operator_new((ulong)pvVar5);
      }
      lVar12 = lVar12 + (int64_t)pvVar2;
      lVar10 = lVar12 + lVar9;
      lVar3 = 0;
      do {
        pvVar5 = (void *)CONCAT71((int7)((uint64_t)pvVar5 >> 8),*(void*)(param_2 + lVar3));
        *(void*)(lVar12 + lVar3) = *(void*)(param_2 + lVar3);
        lVar3 = lVar3 + 1;
      } while (lVar9 != lVar3);
      lVar9 = *this_ptr;
      pvVar7 = (void *)(arg1 - lVar9);
      if (0 < (int64_t)pvVar7) {
        _memcpy(pvVar5,pvVar7,sVar11);
      }
      pvVar14 = (void *)(this_ptr[1] - arg1);
      if (0 < (int64_t)pvVar14) {
        _memcpy(pvVar5,pvVar14,sVar11);
        lVar10 = lVar10 + (int64_t)pvVar14;
      }
      *this_ptr = lVar12 - (int64_t)pvVar7;
      this_ptr[1] = lVar10;
      this_ptr[2] = (int64_t)(puVar13 + (int64_t)pvVar2);
      if (lVar9 != 0) {
        operator_delete(pvVar5);
      }
    }
    else {
      lVar3 = (int64_t)puVar13 - arg1;
      puVar4 = puVar13;
      lVar10 = param_1;
      if (lVar3 < lVar9) {
        lVar10 = param_2 + lVar3;
        pvVar2 = (void *)(param_1 - lVar10);
        if (0 < (int64_t)pvVar2) {
          _memcpy(pvVar5,pvVar2,sVar11);
          puVar4 = (void*)((int64_t)pvVar2 + (int64_t)puVar13);
        }
        this_ptr[1] = (int64_t)puVar4;
        if (lVar3 < 1) {
          return arg1;
        }
      }
      puVar8 = puVar4 + -(arg1 + lVar9);
      puVar6 = puVar4 + -lVar9;
      if (puVar6 < puVar13) {
        do {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        } while (puVar13 != puVar6);
      }
      this_ptr[1] = (int64_t)puVar4;
      if (puVar8 != (void*)0x0) {
        _memmove(puVar6,puVar8,sVar11);
      }
      if ((void *)(lVar10 - param_2) != (void *)0x0) {
        _memmove(puVar6,(void *)(lVar10 - param_2),(size_t)this_ptr);
      }
    }
  }
  return lVar12;
}

