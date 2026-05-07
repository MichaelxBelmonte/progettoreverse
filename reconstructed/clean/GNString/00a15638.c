// Function: FUN_00a15638
// Address: 00a15638
// Size: 1611 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00a15638(uint64_t param_1,uint64_t param_2,void*param_3)

{
  code *pcVar1;
  int64_t lVar2;
  void*puVar3;
  uint64_t uVar4;
  _Unwind_Exception *exception_object;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t arg1;
  void*puVar8;
  int64_t *this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  void*puVar11;
  void *pvVar12;
  void*puVar13;
  uint64_t uVar14;
  void *pvVar15;
  int64_t lVar16;
  uint64_t uVar17;
  bool bVar18;
  void*local_58;
  void*local_50;
  void*local_48;
  void*local_40;
  
  lVar2 = this_ptr[1];
  lVar7 = this_ptr[2];
  lVar9 = lVar7 - lVar2;
  uVar5 = (uint64_t)(lVar9 == 0) + arg1;
  uVar5 = ((uVar5 >> 0xc) + 1) - (uint64_t)((uVar5 & 0xfff) == 0);
  lVar16 = lVar9 * 0x200 + -1;
  if (lVar9 == 0) {
    lVar16 = 0;
  }
  uVar17 = (uint64_t)(lVar16 - (this_ptr[5] + this_ptr[4])) >> 0xc;
  if (uVar5 < uVar17) {
    uVar17 = uVar5;
  }
  uVar14 = uVar5 - uVar17;
  if (uVar14 == 0) {
    this_ptr[4] = uVar17 * 0x1000 + this_ptr[4];
    if (uVar17 != 0) {
      this_ptr[2] = lVar7 + -8;
      FUN_009fdb80();
      if (uVar17 != 1) {
        lVar2 = 1 - uVar17;
        do {
          this_ptr[2] = this_ptr[2] + -8;
          FUN_009fdb80();
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0);
      }
    }
  }
  else {
    lVar16 = this_ptr[3] - *this_ptr;
    if ((uint64_t)((lVar16 >> 3) - (lVar9 >> 3)) < uVar14) {
      uVar4 = CONCAT71((int7)((uint64_t)lVar2 >> 8),lVar7 == lVar2);
      uVar6 = lVar16 >> 2;
      uVar10 = (lVar9 >> 3) + uVar14;
      if (uVar10 <= uVar6) {
        uVar10 = uVar6;
      }
      if (uVar10 == 0) {
        local_58 = (void*)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar10) {
          FUN_00a14cfb();
          exception_object = (_Unwind_Exception *)0x0;
          if ((int64_t)local_48 - (int64_t)local_50 != 0) {
            exception_object =
                 (_Unwind_Exception *)~(((int64_t)local_48 - (int64_t)local_50) - 8U >> 3);
          }
          if (local_58 != (void*)0x0) {
            operator_delete(exception_object);
          }
          __Unwind_Resume(exception_object);
                              pcVar1 = invalidInstructionException();
          (*pcVar1)();
        }
        local_58 = operator_new((ulong)uVar4);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),lVar7 == lVar2);
      }
      uVar6 = uVar4 & 0xff;
      local_40 = local_58 + uVar10;
      do {
        operator_new((ulong)uVar4);
        FUN_009f1e88();
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      local_48 = local_58;
      local_50 = local_58;
      if (uVar17 == 0) {
        puVar11 = (void*)this_ptr[2];
      }
      else {
        puVar11 = (void*)this_ptr[2];
        do {
          if (local_48 == local_40) {
            if (local_50 < local_58 || (int64_t)local_50 - (int64_t)local_58 == 0) {
              uVar14 = (int64_t)local_40 - (int64_t)local_58 >> 2;
              if ((int64_t)local_40 - (int64_t)local_58 == 0) {
                uVar14 = 1;
              }
              if (0x1fffffffffffffff < uVar14) {
                FUN_00a14cfb();
                goto LAB_00a15caa;
              }
              puVar3 = operator_new((ulong)local_58);
              param_3 = puVar3 + uVar14;
              puVar13 = puVar3 + (uVar14 >> 2);
              lVar2 = (int64_t)local_40 - (int64_t)local_50;
              local_48 = puVar13;
              if (lVar2 != 0) {
                local_48 = (void*)((int64_t)puVar13 + lVar2);
                lVar7 = 0;
                puVar8 = puVar13;
                do {
                  *puVar8 = *(void*)((int64_t)local_50 + lVar7);
                  puVar8 = (void*)((int64_t)puVar3 + lVar7 + (uVar14 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar2 >> 3) * 8 != lVar7);
              }
              bVar18 = local_58 != (void*)0x0;
              local_58 = puVar3;
              local_50 = puVar13;
              local_40 = param_3;
              if (bVar18) {
                operator_delete(local_48);
              }
            }
            else {
              lVar2 = (int64_t)local_50 - (int64_t)local_58 >> 3;
              lVar2 = (lVar2 + 1) - (lVar2 + 1 >> 0x3f) >> 1;
              pvVar12 = (void *)((int64_t)local_40 - (int64_t)local_50);
              if (pvVar12 != (void *)0x0) {
                _memmove(local_50 + -lVar2,pvVar12,(size_t)param_3);
              }
              local_48 = local_50 + -lVar2 + ((int64_t)pvVar12 >> 3);
              local_50 = local_50 + -lVar2;
            }
          }
          *local_48 = puVar11[-1];
          local_48 = local_48 + 1;
          puVar11 = (void*)(this_ptr[2] + -8);
          this_ptr[2] = (int64_t)puVar11;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar13 = (void*)this_ptr[1];
      if (puVar13 != puVar11) {
        do {
          if (local_48 == local_40) {
            if (local_50 < local_58 || (int64_t)local_50 - (int64_t)local_58 == 0) {
              uVar17 = (int64_t)local_40 - (int64_t)local_58 >> 2;
              if ((int64_t)local_40 - (int64_t)local_58 == 0) {
                uVar17 = 1;
              }
              if (0x1fffffffffffffff < uVar17) {
                FUN_00a14cfb();
LAB_00a15caa:
                                    pcVar1 = invalidInstructionException();
                (*pcVar1)();
              }
              puVar3 = operator_new((ulong)local_48);
              param_3 = puVar3 + uVar17;
              puVar11 = puVar3 + (uVar17 >> 2);
              lVar2 = (int64_t)local_40 - (int64_t)local_50;
              local_48 = puVar11;
              if (lVar2 != 0) {
                local_48 = (void*)((int64_t)puVar11 + lVar2);
                lVar7 = 0;
                puVar8 = puVar11;
                do {
                  *puVar8 = *(void*)((int64_t)local_50 + lVar7);
                  puVar8 = (void*)((int64_t)puVar3 + lVar7 + (uVar17 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar2 >> 3) * 8 != lVar7);
              }
              bVar18 = local_58 != (void*)0x0;
              local_58 = puVar3;
              local_50 = puVar11;
              local_40 = param_3;
              if (bVar18) {
                operator_delete(local_48);
              }
            }
            else {
              lVar2 = (int64_t)local_50 - (int64_t)local_58 >> 3;
              pvVar12 = (void *)-(lVar2 + 1 >> 0x3f);
              lVar2 = lVar2 + 1 + (int64_t)pvVar12 >> 1;
              pvVar15 = (void *)((int64_t)local_40 - (int64_t)local_50);
              if (pvVar15 != (void *)0x0) {
                _memmove(pvVar12,pvVar15,(size_t)param_3);
              }
              local_48 = local_50 + (((int64_t)pvVar15 >> 3) - lVar2);
              local_50 = local_50 + -lVar2;
            }
          }
          *local_48 = *puVar13;
          local_48 = local_48 + 1;
          puVar13 = puVar13 + 1;
        } while (puVar13 != (void*)this_ptr[2]);
      }
      lVar2 = *this_ptr;
      *this_ptr = (int64_t)local_58;
      this_ptr[1] = (int64_t)local_50;
      this_ptr[2] = (int64_t)local_48;
      this_ptr[3] = (int64_t)local_40;
      this_ptr[4] = this_ptr[4] + (uVar5 * 0x1000 - uVar6);
      if (lVar2 != 0) {
        operator_delete(local_40);
      }
    }
    else {
      uVar5 = uVar14;
      if (*this_ptr != lVar2) {
        do {
          operator_new((ulong)lVar2);
          FUN_009f1d40();
          lVar2 = (this_ptr[4] + 0x1000) - (uint64_t)(this_ptr[2] - this_ptr[1] == 8);
          this_ptr[4] = lVar2;
          if (uVar14 == 1) goto LAB_00a15be4;
          uVar14 = uVar14 - 1;
          uVar5 = uVar14;
        } while (this_ptr[1] != *this_ptr);
      }
      do {
        operator_new((ulong)lVar2);
        FUN_009cfce8();
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar17 = uVar17 + uVar5;
      lVar2 = this_ptr[4];
LAB_00a15be4:
      this_ptr[4] = uVar17 * 0x1000 + lVar2;
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        this_ptr[2] = this_ptr[2] + -8;
        FUN_009fdb80();
      }
    }
  }
  return;
}

