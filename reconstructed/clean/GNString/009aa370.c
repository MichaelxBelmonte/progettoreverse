// Function: FUN_009aa370
// Address: 009aa370
// Size: 1754 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009aa370(uint64_t param_1,uint64_t param_2,void*param_3)

{
  void*puVar1;
  uint64_t uVar2;
  code *pcVar3;
  uint64_t uVar4;
  void*puVar5;
  int64_t arg1;
  void*puVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void*puVar10;
  void*puVar11;
  uint64_t uVar12;
  void *pvVar13;
  void *pvVar14;
  bool bVar15;
  void*local_68;
  void*puStack_60;
  void*local_58;
  void*puStack_50;
  
  puVar11 = (void*)this_ptr[1];
  puVar10 = (void*)this_ptr[2];
  uVar4 = (uint64_t)((int64_t)puVar10 - (int64_t)puVar11 == 0) + arg1;
  uVar12 = ((uVar4 >> 0xc) + 1) - (uint64_t)((uVar4 & 0xfff) == 0);
  uVar4 = (uint64_t)this_ptr[4] >> 0xc;
  if (uVar12 < uVar4) {
    uVar4 = uVar12;
  }
  uVar12 = uVar12 - uVar4;
  if (uVar12 == 0) {
    this_ptr[4] = this_ptr[4] + uVar4 * -0x1000;
    if (uVar4 != 0) {
      while( true ) {
        uVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        this_ptr[1] = (int64_t)puVar11;
        puVar5 = (void*)this_ptr[3];
        if (puVar10 == puVar5) {
          puVar6 = (void*)*this_ptr;
          if (puVar11 < puVar6 || (int64_t)puVar11 - (int64_t)puVar6 == 0) {
            uVar12 = (int64_t)puVar5 - (int64_t)puVar6 >> 2;
            if ((int64_t)puVar5 - (int64_t)puVar6 == 0) {
              uVar12 = 1;
            }
            if (0x1fffffffffffffff < uVar12) goto LAB_009aaa3c;
            pvVar13 = operator_new((ulong)puVar6);
            puVar1 = (void*)((int64_t)pvVar13 + (uVar12 >> 2) * 8);
            param_3 = (void*)((int64_t)pvVar13 + uVar12 * 8);
            lVar7 = (int64_t)puVar5 - (int64_t)puVar11;
            puVar10 = puVar1;
            if (lVar7 != 0) {
              lVar8 = 0;
              do {
                *puVar10 = *(void*)((int64_t)puVar11 + lVar8);
                puVar10 = (void*)((int64_t)pvVar13 + lVar8 + (uVar12 >> 2) * 8 + 8);
                lVar8 = lVar8 + 8;
              } while ((lVar7 >> 3) * 8 != lVar8);
              puVar6 = (void*)*this_ptr;
              puVar10 = (void*)((int64_t)puVar1 + lVar7);
            }
            *this_ptr = (int64_t)pvVar13;
            this_ptr[1] = (int64_t)puVar1;
            this_ptr[2] = (int64_t)puVar10;
            this_ptr[3] = (int64_t)param_3;
            if (puVar6 != (void*)0x0) {
              operator_delete(puVar10);
              puVar10 = (void*)this_ptr[2];
            }
          }
          else {
            lVar7 = (int64_t)puVar11 - (int64_t)puVar6 >> 3;
            pvVar13 = (void *)-(lVar7 + 1 >> 0x3f);
            lVar7 = lVar7 + 1 + (int64_t)pvVar13 >> 1;
            pvVar14 = (void *)((int64_t)puVar5 - (int64_t)puVar11);
            puVar5 = puVar11;
            if (pvVar14 != (void *)0x0) {
              _memmove(pvVar13,pvVar14,(size_t)param_3);
              puVar5 = (void*)this_ptr[1];
            }
            puVar10 = puVar11 + (((int64_t)pvVar14 >> 3) - lVar7);
            this_ptr[2] = (int64_t)puVar10;
            this_ptr[1] = (int64_t)(puVar5 + -lVar7);
          }
        }
        *puVar10 = uVar2;
        puVar10 = (void*)(this_ptr[2] + 8);
        this_ptr[2] = (int64_t)puVar10;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) break;
        puVar11 = (void*)this_ptr[1];
      }
    }
  }
  else {
    lVar8 = this_ptr[3] - *this_ptr;
    lVar7 = (int64_t)puVar10 - (int64_t)puVar11 >> 3;
    if ((uint64_t)((lVar8 >> 3) - lVar7) < uVar12) {
      uVar9 = lVar8 >> 2;
      if (uVar9 < lVar7 + uVar12) {
        uVar9 = lVar7 + uVar12;
      }
      if (uVar9 == 0) {
        local_68 = (void*)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar9) {
LAB_009aaa3c:
          FUN_009a7f66();
LAB_009aaa41:
          FUN_009a7f66();
                              pcVar3 = invalidInstructionException();
          (*pcVar3)();
        }
        local_68 = operator_new(0xffffffff);
      }
      puStack_60 = local_68 + (lVar7 - uVar4);
      puStack_50 = local_68 + uVar9;
      puVar10 = puStack_60;
      do {
        operator_new((ulong)puVar10);
        FUN_009f1e88();
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      local_58 = puStack_60;
      if (uVar4 != 0) {
        puVar10 = (void*)this_ptr[1];
        uVar12 = uVar4;
        do {
          if (local_58 == puStack_50) {
            if (puStack_60 < local_68 || (int64_t)puStack_60 - (int64_t)local_68 == 0) {
              uVar9 = (int64_t)puStack_50 - (int64_t)local_68 >> 2;
              if ((int64_t)puStack_50 - (int64_t)local_68 == 0) {
                uVar9 = 1;
              }
              if (0x1fffffffffffffff < uVar9) goto LAB_009aaa41;
              puVar5 = operator_new((ulong)local_68);
              param_3 = puVar5 + uVar9;
              puVar11 = puVar5 + (uVar9 >> 2);
              lVar7 = (int64_t)puStack_50 - (int64_t)puStack_60;
              local_58 = puVar11;
              if (lVar7 != 0) {
                local_58 = (void*)((int64_t)puVar11 + lVar7);
                lVar8 = 0;
                puVar6 = puVar11;
                do {
                  *puVar6 = *(void*)((int64_t)puStack_60 + lVar8);
                  puVar6 = (void*)((int64_t)puVar5 + lVar8 + (uVar9 >> 2) * 8 + 8);
                  lVar8 = lVar8 + 8;
                } while ((lVar7 >> 3) * 8 != lVar8);
              }
              bVar15 = local_68 != (void*)0x0;
              local_68 = puVar5;
              puStack_60 = puVar11;
              puStack_50 = param_3;
              if (bVar15) {
                operator_delete(local_58);
              }
            }
            else {
              lVar7 = (int64_t)puStack_60 - (int64_t)local_68 >> 3;
              lVar7 = (lVar7 + 1) - (lVar7 + 1 >> 0x3f) >> 1;
              pvVar13 = (void *)((int64_t)puStack_50 - (int64_t)puStack_60);
              if (pvVar13 != (void *)0x0) {
                _memmove(puStack_60 + -lVar7,pvVar13,(size_t)param_3);
              }
              local_58 = puStack_60 + -lVar7 + ((int64_t)pvVar13 >> 3);
              puStack_60 = puStack_60 + -lVar7;
            }
          }
          *local_58 = *puVar10;
          local_58 = local_58 + 1;
          puVar10 = (void*)(this_ptr[1] + 8);
          this_ptr[1] = (int64_t)puVar10;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      for (lVar7 = this_ptr[2]; lVar7 != this_ptr[1]; lVar7 = lVar7 + -8) {
        FUN_009cfe58();
      }
      lVar7 = *this_ptr;
      *this_ptr = (int64_t)local_68;
      this_ptr[1] = (int64_t)puStack_60;
      pvVar13 = (void *)this_ptr[2];
      this_ptr[2] = (int64_t)local_58;
      this_ptr[3] = (int64_t)puStack_50;
      this_ptr[4] = this_ptr[4] + uVar4 * -0x1000;
      if (lVar7 != 0) {
        operator_delete(pvVar13);
      }
    }
    else {
      uVar9 = uVar12;
      if ((void*)this_ptr[3] != puVar10) {
        do {
          operator_new((ulong)puVar10);
          FUN_009cfce8();
          if (uVar12 == 1) {
            lVar7 = this_ptr[4];
            goto LAB_009aa8a5;
          }
          uVar12 = uVar12 - 1;
          uVar9 = uVar12;
        } while (this_ptr[3] != this_ptr[2]);
      }
      do {
        operator_new((ulong)puVar10);
        FUN_009f1d40();
        puVar10 = (void*)this_ptr[4];
        lVar7 = (int64_t)puVar10 + (0x1000 - (uint64_t)(this_ptr[2] - this_ptr[1] == 8));
        this_ptr[4] = lVar7;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar4 = uVar4 + uVar9;
LAB_009aa8a5:
      this_ptr[4] = lVar7 + uVar4 * -0x1000;
      if (uVar4 != 0) {
        puVar10 = (void*)this_ptr[2];
        do {
          puVar11 = (void*)this_ptr[3];
          uVar2 = *(void*)this_ptr[1];
          puVar5 = (void*)this_ptr[1] + 1;
          this_ptr[1] = (int64_t)puVar5;
          if (puVar10 == puVar11) {
            puVar6 = (void*)*this_ptr;
            if (puVar5 < puVar6 || (int64_t)puVar5 - (int64_t)puVar6 == 0) {
              uVar12 = (int64_t)puVar11 - (int64_t)puVar6 >> 2;
              if ((int64_t)puVar11 - (int64_t)puVar6 == 0) {
                uVar12 = 1;
              }
              if (0x1fffffffffffffff < uVar12) goto LAB_009aaa3c;
              pvVar13 = operator_new((ulong)puVar6);
              puVar1 = (void*)((int64_t)pvVar13 + (uVar12 >> 2) * 8);
              param_3 = (void*)((int64_t)pvVar13 + uVar12 * 8);
              lVar7 = (int64_t)puVar11 - (int64_t)puVar5;
              puVar10 = puVar1;
              if (lVar7 != 0) {
                lVar8 = 0;
                do {
                  *puVar10 = *(void*)((int64_t)puVar5 + lVar8);
                  puVar10 = (void*)((int64_t)pvVar13 + lVar8 + (uVar12 >> 2) * 8 + 8);
                  lVar8 = lVar8 + 8;
                } while ((lVar7 >> 3) * 8 != lVar8);
                puVar6 = (void*)*this_ptr;
                puVar10 = (void*)((int64_t)puVar1 + lVar7);
              }
              *this_ptr = (int64_t)pvVar13;
              this_ptr[1] = (int64_t)puVar1;
              this_ptr[2] = (int64_t)puVar10;
              this_ptr[3] = (int64_t)param_3;
              if (puVar6 != (void*)0x0) {
                operator_delete(puVar10);
                puVar10 = (void*)this_ptr[2];
              }
            }
            else {
              lVar7 = (int64_t)puVar5 - (int64_t)puVar6 >> 3;
              pvVar13 = (void *)-(lVar7 + 1 >> 0x3f);
              lVar7 = lVar7 + 1 + (int64_t)pvVar13 >> 1;
              pvVar14 = (void *)((int64_t)puVar11 - (int64_t)puVar5);
              puVar11 = puVar5;
              if (pvVar14 != (void *)0x0) {
                _memmove(pvVar13,pvVar14,(size_t)param_3);
                puVar11 = (void*)this_ptr[1];
              }
              puVar10 = puVar5 + (((int64_t)pvVar14 >> 3) - lVar7);
              this_ptr[2] = (int64_t)puVar10;
              this_ptr[1] = (int64_t)(puVar11 + -lVar7);
            }
          }
          *puVar10 = uVar2;
          puVar10 = (void*)(this_ptr[2] + 8);
          this_ptr[2] = (int64_t)puVar10;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  return;
}

