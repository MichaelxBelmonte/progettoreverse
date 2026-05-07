// Function: FUN_009c5f38
// Address: 009c5f38
// Size: 1750 bytes
// Class: Unknown

void FUN_009c5f38(uint64_t param_1,uint64_t param_2,void*param_3)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void*puVar4;
  int64_t arg1;
  void*puVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void*puVar9;
  void*puVar10;
  uint64_t uVar11;
  void *pvVar12;
  void *pvVar13;
  bool bVar14;
  void*local_68;
  void*puStack_60;
  void*local_58;
  void*puStack_50;
  
  puVar10 = (void*)this_ptr[1];
  puVar9 = (void*)this_ptr[2];
  uVar3 = (uint64_t)((int64_t)puVar9 - (int64_t)puVar10 == 0) + arg1;
  uVar11 = ((uVar3 >> 9) + 1) - (uint64_t)((uVar3 & 0x1ff) == 0);
  uVar3 = (uint64_t)this_ptr[4] >> 9;
  if (uVar11 < uVar3) {
    uVar3 = uVar11;
  }
  uVar11 = uVar11 - uVar3;
  if (uVar11 == 0) {
    this_ptr[4] = this_ptr[4] + uVar3 * -0x200;
    if (uVar3 != 0) {
      while( true ) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        this_ptr[1] = (int64_t)puVar10;
        puVar4 = (void*)this_ptr[3];
        if (puVar9 == puVar4) {
          puVar5 = (void*)*this_ptr;
          if (puVar10 < puVar5 || (int64_t)puVar10 - (int64_t)puVar5 == 0) {
            uVar11 = (int64_t)puVar4 - (int64_t)puVar5 >> 2;
            if ((int64_t)puVar4 - (int64_t)puVar5 == 0) {
              uVar11 = 1;
            }
            if (0x1fffffffffffffff < uVar11) goto LAB_009c6604;
            pvVar12 = operator_new((ulong)puVar5);
            puVar1 = (void*)((int64_t)pvVar12 + (uVar11 >> 2) * 8);
            param_3 = (void*)((int64_t)pvVar12 + uVar11 * 8);
            lVar6 = (int64_t)puVar4 - (int64_t)puVar10;
            puVar9 = puVar1;
            if (lVar6 != 0) {
              lVar7 = 0;
              do {
                *puVar9 = *(void*)((int64_t)puVar10 + lVar7);
                puVar9 = (void*)((int64_t)pvVar12 + lVar7 + (uVar11 >> 2) * 8 + 8);
                lVar7 = lVar7 + 8;
              } while ((lVar6 >> 3) * 8 != lVar7);
              puVar5 = (void*)*this_ptr;
              puVar9 = (void*)((int64_t)puVar1 + lVar6);
            }
            *this_ptr = (int64_t)pvVar12;
            this_ptr[1] = (int64_t)puVar1;
            this_ptr[2] = (int64_t)puVar9;
            this_ptr[3] = (int64_t)param_3;
            if (puVar5 != (void*)0x0) {
              operator_delete(puVar9);
              puVar9 = (void*)this_ptr[2];
            }
          }
          else {
            lVar6 = (int64_t)puVar10 - (int64_t)puVar5 >> 3;
            pvVar12 = (void *)-(lVar6 + 1 >> 0x3f);
            lVar6 = lVar6 + 1 + (int64_t)pvVar12 >> 1;
            pvVar13 = (void *)((int64_t)puVar4 - (int64_t)puVar10);
            puVar4 = puVar10;
            if (pvVar13 != (void *)0x0) {
              _memmove(pvVar12,pvVar13,(size_t)param_3);
              puVar4 = (void*)this_ptr[1];
            }
            puVar9 = puVar10 + (((int64_t)pvVar13 >> 3) - lVar6);
            this_ptr[2] = (int64_t)puVar9;
            this_ptr[1] = (int64_t)(puVar4 + -lVar6);
          }
        }
        *puVar9 = uVar2;
        puVar9 = (void*)(this_ptr[2] + 8);
        this_ptr[2] = (int64_t)puVar9;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) break;
        puVar10 = (void*)this_ptr[1];
      }
    }
  }
  else {
    lVar7 = this_ptr[3] - *this_ptr;
    lVar6 = (int64_t)puVar9 - (int64_t)puVar10 >> 3;
    if ((uint64_t)((lVar7 >> 3) - lVar6) < uVar11) {
      uVar8 = lVar7 >> 2;
      if (uVar8 < lVar6 + uVar11) {
        uVar8 = lVar6 + uVar11;
      }
      if (uVar8 == 0) {
        local_68 = (void*)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar8) {
LAB_009c6604:
                              FUN_009c0cd9();
        }
        local_68 = operator_new(0xffffffff);
      }
      puStack_60 = local_68 + (lVar6 - uVar3);
      puStack_50 = local_68 + uVar8;
      puVar9 = puStack_60;
      do {
        operator_new((ulong)puVar9);
        FUN_009c59f6();
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      local_58 = puStack_60;
      if (uVar3 != 0) {
        puVar9 = (void*)this_ptr[1];
        uVar11 = uVar3;
        do {
          if (local_58 == puStack_50) {
            if (puStack_60 < local_68 || (int64_t)puStack_60 - (int64_t)local_68 == 0) {
              uVar8 = (int64_t)puStack_50 - (int64_t)local_68 >> 2;
              if ((int64_t)puStack_50 - (int64_t)local_68 == 0) {
                uVar8 = 1;
              }
              if (0x1fffffffffffffff < uVar8) {
                                    FUN_009c0cd9();
              }
              puVar4 = operator_new((ulong)local_68);
              param_3 = puVar4 + uVar8;
              puVar10 = puVar4 + (uVar8 >> 2);
              lVar6 = (int64_t)puStack_50 - (int64_t)puStack_60;
              local_58 = puVar10;
              if (lVar6 != 0) {
                local_58 = (void*)((int64_t)puVar10 + lVar6);
                lVar7 = 0;
                puVar5 = puVar10;
                do {
                  *puVar5 = *(void*)((int64_t)puStack_60 + lVar7);
                  puVar5 = (void*)((int64_t)puVar4 + lVar7 + (uVar8 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar6 >> 3) * 8 != lVar7);
              }
              bVar14 = local_68 != (void*)0x0;
              local_68 = puVar4;
              puStack_60 = puVar10;
              puStack_50 = param_3;
              if (bVar14) {
                operator_delete(local_58);
              }
            }
            else {
              lVar6 = (int64_t)puStack_60 - (int64_t)local_68 >> 3;
              lVar6 = (lVar6 + 1) - (lVar6 + 1 >> 0x3f) >> 1;
              pvVar12 = (void *)((int64_t)puStack_50 - (int64_t)puStack_60);
              if (pvVar12 != (void *)0x0) {
                _memmove(puStack_60 + -lVar6,pvVar12,(size_t)param_3);
              }
              local_58 = puStack_60 + -lVar6 + ((int64_t)pvVar12 >> 3);
              puStack_60 = puStack_60 + -lVar6;
            }
          }
          *local_58 = *puVar9;
          local_58 = local_58 + 1;
          puVar9 = (void*)(this_ptr[1] + 8);
          this_ptr[1] = (int64_t)puVar9;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      for (lVar6 = this_ptr[2]; lVar6 != this_ptr[1]; lVar6 = lVar6 + -8) {
        FUN_009c5b5a();
      }
      lVar6 = *this_ptr;
      *this_ptr = (int64_t)local_68;
      this_ptr[1] = (int64_t)puStack_60;
      pvVar12 = (void *)this_ptr[2];
      this_ptr[2] = (int64_t)local_58;
      this_ptr[3] = (int64_t)puStack_50;
      this_ptr[4] = this_ptr[4] + uVar3 * -0x200;
      if (lVar6 != 0) {
        operator_delete(pvVar12);
      }
    }
    else {
      uVar8 = uVar11;
      if ((void*)this_ptr[3] != puVar9) {
        do {
          operator_new((ulong)puVar9);
          FUN_009c574a();
          if (uVar11 == 1) {
            lVar6 = this_ptr[4];
            goto LAB_009c646d;
          }
          uVar11 = uVar11 - 1;
          uVar8 = uVar11;
        } while (this_ptr[3] != this_ptr[2]);
      }
      do {
        operator_new((ulong)puVar9);
        FUN_009c58ae();
        puVar9 = (void*)this_ptr[4];
        lVar6 = (int64_t)puVar9 + (0x200 - (uint64_t)(this_ptr[2] - this_ptr[1] == 8));
        this_ptr[4] = lVar6;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar3 = uVar3 + uVar8;
LAB_009c646d:
      this_ptr[4] = lVar6 + uVar3 * -0x200;
      if (uVar3 != 0) {
        puVar9 = (void*)this_ptr[2];
        do {
          puVar10 = (void*)this_ptr[3];
          uVar2 = *(void*)this_ptr[1];
          puVar4 = (void*)this_ptr[1] + 1;
          this_ptr[1] = (int64_t)puVar4;
          if (puVar9 == puVar10) {
            puVar5 = (void*)*this_ptr;
            if (puVar4 < puVar5 || (int64_t)puVar4 - (int64_t)puVar5 == 0) {
              uVar11 = (int64_t)puVar10 - (int64_t)puVar5 >> 2;
              if ((int64_t)puVar10 - (int64_t)puVar5 == 0) {
                uVar11 = 1;
              }
              if (0x1fffffffffffffff < uVar11) goto LAB_009c6604;
              pvVar12 = operator_new((ulong)puVar5);
              puVar1 = (void*)((int64_t)pvVar12 + (uVar11 >> 2) * 8);
              param_3 = (void*)((int64_t)pvVar12 + uVar11 * 8);
              lVar6 = (int64_t)puVar10 - (int64_t)puVar4;
              puVar9 = puVar1;
              if (lVar6 != 0) {
                lVar7 = 0;
                do {
                  *puVar9 = *(void*)((int64_t)puVar4 + lVar7);
                  puVar9 = (void*)((int64_t)pvVar12 + lVar7 + (uVar11 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar6 >> 3) * 8 != lVar7);
                puVar5 = (void*)*this_ptr;
                puVar9 = (void*)((int64_t)puVar1 + lVar6);
              }
              *this_ptr = (int64_t)pvVar12;
              this_ptr[1] = (int64_t)puVar1;
              this_ptr[2] = (int64_t)puVar9;
              this_ptr[3] = (int64_t)param_3;
              if (puVar5 != (void*)0x0) {
                operator_delete(puVar9);
                puVar9 = (void*)this_ptr[2];
              }
            }
            else {
              lVar6 = (int64_t)puVar4 - (int64_t)puVar5 >> 3;
              pvVar12 = (void *)-(lVar6 + 1 >> 0x3f);
              lVar6 = lVar6 + 1 + (int64_t)pvVar12 >> 1;
              pvVar13 = (void *)((int64_t)puVar10 - (int64_t)puVar4);
              puVar10 = puVar4;
              if (pvVar13 != (void *)0x0) {
                _memmove(pvVar12,pvVar13,(size_t)param_3);
                puVar10 = (void*)this_ptr[1];
              }
              puVar9 = puVar4 + (((int64_t)pvVar13 >> 3) - lVar6);
              this_ptr[2] = (int64_t)puVar9;
              this_ptr[1] = (int64_t)(puVar10 + -lVar6);
            }
          }
          *puVar9 = uVar2;
          puVar9 = (void*)(this_ptr[2] + 8);
          this_ptr[2] = (int64_t)puVar9;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return;
}

