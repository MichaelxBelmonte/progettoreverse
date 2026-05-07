// Function: FUN_00ad7bd0
// Address: 00ad7bd0
// Size: 1974 bytes
// Class: Unknown

void FUN_00ad7bd0(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  void*puVar3;
  void *pvVar4;
  void*puVar5;
  void*puVar6;
  void*puVar7;
  uint64_t uVar8;
  void*puVar9;
  uint uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t *this_ptr;
  void*puVar13;
  void*puVar14;
  void*puVar15;
  void *pvVar16;
  void*puVar17;
  void*puVar18;
  
  if (0xff < this_ptr[4]) {
    this_ptr[4] = this_ptr[4] - 0x100;
    puVar7 = (void*)this_ptr[2];
    uVar1 = *(void*)this_ptr[1];
    puVar9 = (void*)this_ptr[1] + 1;
    this_ptr[1] = (uint64_t)puVar9;
    if (puVar7 == (void*)this_ptr[3]) {
      puVar5 = (void*)*this_ptr;
      if (puVar9 < puVar5 || (int64_t)puVar9 - (int64_t)puVar5 == 0) {
        lVar2 = (int64_t)this_ptr[3] - (int64_t)puVar5;
        puVar6 = (void*)(lVar2 >> 2);
        puVar15 = (void*)((int64_t)&MACH_HEADER.magic + 1);
        if (lVar2 != 0) {
          puVar15 = puVar6;
        }
        if ((uint64_t)puVar15 >> 0x3d != 0) goto LAB_00ad8382;
        pvVar4 = operator_new((ulong)puVar6);
        puVar14 = (void*)((int64_t)pvVar4 + ((uint64_t)puVar15 >> 2) * 8);
        lVar2 = (int64_t)puVar7 - (int64_t)puVar9;
        puVar7 = puVar14;
        if (lVar2 != 0) {
          uVar10 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
          if ((uVar10 & 7) != 0) {
            lVar11 = -((uint64_t)uVar10 & 7);
            do {
              puVar6 = (void*)*puVar9;
              *puVar7 = puVar6;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0);
          }
          if (0x37 < lVar2 - 8U) {
            puVar6 = (void*)0x0;
            puVar5 = puVar7;
            do {
              *puVar5 = *(void*)((int64_t)puVar9 + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 1) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 1) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 2) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 2) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 3) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 3) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 4) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 4) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 5) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 5) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 6) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 6) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 7) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 7) + (int64_t)puVar6);
              puVar5 = (void*)((int64_t)(puVar7 + 8) + (int64_t)puVar6);
              puVar6 = puVar6 + 0x40;
            } while ((void*)
                     ((int64_t)pvVar4 +
                     ((((uint64_t)puVar15 >> 2) * 8 + (lVar2 >> 3) * 8) - (int64_t)puVar7)) !=
                     puVar6);
          }
          puVar5 = (void*)*this_ptr;
          puVar7 = (void*)((int64_t)puVar14 + lVar2);
        }
        *this_ptr = (uint64_t)pvVar4;
        this_ptr[1] = (uint64_t)puVar14;
        this_ptr[2] = (uint64_t)puVar7;
        this_ptr[3] = (uint64_t)((int64_t)pvVar4 + (int64_t)puVar15 * 8);
        if (puVar5 != (void*)0x0) {
          operator_delete(puVar6);
          puVar7 = (void*)this_ptr[2];
        }
      }
      else {
        pvVar4 = (void *)((int64_t)puVar9 - (int64_t)puVar5 >> 3);
        lVar2 = (int64_t)pvVar4 + (1 - ((int64_t)pvVar4 + 1 >> 0x3f)) >> 1;
        pvVar16 = (void *)((int64_t)puVar7 - (int64_t)puVar9);
        puVar5 = puVar9;
        if (pvVar16 != (void *)0x0) {
          _memmove(pvVar4,pvVar16,param_3);
          puVar5 = (void*)this_ptr[1];
        }
        puVar7 = puVar9 + (((int64_t)pvVar16 >> 3) - lVar2);
        this_ptr[2] = (uint64_t)puVar7;
        this_ptr[1] = (uint64_t)(puVar5 + -lVar2);
      }
    }
    *puVar7 = uVar1;
    this_ptr[2] = this_ptr[2] + 8;
    return;
  }
  puVar7 = (void*)this_ptr[1];
  puVar9 = (void*)this_ptr[2];
  puVar14 = (void*)((int64_t)puVar9 - (int64_t)puVar7 >> 3);
  puVar5 = (void*)this_ptr[3];
  lVar2 = (int64_t)puVar5 - *this_ptr;
  if (puVar14 < (void*)(lVar2 >> 3)) {
    if (puVar5 != puVar9) {
      operator_new((ulong)puVar5);
      FUN_00ad83c0();
      return;
    }
    operator_new((ulong)puVar5);
    FUN_00ad85e0();
    puVar7 = (void*)this_ptr[2];
    uVar1 = *(void*)this_ptr[1];
    puVar9 = (void*)this_ptr[1] + 1;
    this_ptr[1] = (uint64_t)puVar9;
    if (puVar7 == (void*)this_ptr[3]) {
      puVar5 = (void*)*this_ptr;
      if (puVar9 < puVar5 || (int64_t)puVar9 - (int64_t)puVar5 == 0) {
        lVar2 = (int64_t)this_ptr[3] - (int64_t)puVar5;
        puVar6 = (void*)(lVar2 >> 2);
        puVar15 = (void*)((int64_t)&MACH_HEADER.magic + 1);
        if (lVar2 != 0) {
          puVar15 = puVar6;
        }
        if ((uint64_t)puVar15 >> 0x3d != 0) goto LAB_00ad8382;
        pvVar4 = operator_new((ulong)puVar6);
        puVar14 = (void*)((int64_t)pvVar4 + ((uint64_t)puVar15 >> 2) * 8);
        lVar2 = (int64_t)puVar7 - (int64_t)puVar9;
        puVar7 = puVar14;
        if (lVar2 != 0) {
          uVar10 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
          if ((uVar10 & 7) != 0) {
            lVar11 = -((uint64_t)uVar10 & 7);
            do {
              puVar6 = (void*)*puVar9;
              *puVar7 = puVar6;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0);
          }
          if (0x37 < lVar2 - 8U) {
            puVar6 = (void*)0x0;
            puVar5 = puVar7;
            do {
              *puVar5 = *(void*)((int64_t)puVar9 + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 1) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 1) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 2) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 2) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 3) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 3) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 4) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 4) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 5) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 5) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 6) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 6) + (int64_t)puVar6);
              *(void*)((int64_t)(puVar7 + 7) + (int64_t)puVar6) =
                   *(void*)((int64_t)(puVar9 + 7) + (int64_t)puVar6);
              puVar5 = (void*)((int64_t)(puVar7 + 8) + (int64_t)puVar6);
              puVar6 = puVar6 + 0x40;
            } while ((void*)
                     ((int64_t)pvVar4 +
                     ((((uint64_t)puVar15 >> 2) * 8 + (lVar2 >> 3) * 8) - (int64_t)puVar7)) !=
                     puVar6);
          }
          puVar5 = (void*)*this_ptr;
          puVar7 = (void*)((int64_t)puVar14 + lVar2);
        }
        *this_ptr = (uint64_t)pvVar4;
        this_ptr[1] = (uint64_t)puVar14;
        this_ptr[2] = (uint64_t)puVar7;
        this_ptr[3] = (uint64_t)((int64_t)pvVar4 + (int64_t)puVar15 * 8);
        if (puVar5 != (void*)0x0) {
          operator_delete(puVar6);
          puVar7 = (void*)this_ptr[2];
        }
      }
      else {
        pvVar4 = (void *)((int64_t)puVar9 - (int64_t)puVar5 >> 3);
        lVar2 = (int64_t)pvVar4 + (1 - ((int64_t)pvVar4 + 1 >> 0x3f)) >> 1;
        pvVar16 = (void *)((int64_t)puVar7 - (int64_t)puVar9);
        puVar5 = puVar9;
        if (pvVar16 != (void *)0x0) {
          _memmove(pvVar4,pvVar16,param_3);
          puVar5 = (void*)this_ptr[1];
        }
        puVar7 = puVar9 + (((int64_t)pvVar16 >> 3) - lVar2);
        this_ptr[2] = (uint64_t)puVar7;
        this_ptr[1] = (uint64_t)(puVar5 + -lVar2);
      }
    }
    *puVar7 = uVar1;
    this_ptr[2] = this_ptr[2] + 8;
    return;
  }
  puVar5 = (void*)(lVar2 >> 2);
  puVar17 = (void*)((int64_t)&MACH_HEADER.magic + 1);
  if (lVar2 != 0) {
    puVar17 = puVar5;
  }
  if ((uint64_t)puVar17 >> 0x3d != 0) {
LAB_00ad8382:
                        FUN_00ad7940();
  }
  puVar3 = operator_new((ulong)puVar5);
  pvVar4 = operator_new((ulong)puVar5);
  puVar18 = puVar3 + (int64_t)puVar14;
  puVar13 = puVar3 + (int64_t)puVar17;
  if (puVar14 == puVar17) {
    if (puVar18 < puVar3 || (int64_t)puVar18 - (int64_t)puVar3 == 0) {
      uVar8 = 1;
      if ((int64_t)puVar13 - (int64_t)puVar3 != 0) {
        uVar8 = (int64_t)puVar13 - (int64_t)puVar3 >> 2;
      }
      if (0x1fffffffffffffff < uVar8) {
                            FUN_00ad7940();
      }
      puVar3 = operator_new((ulong)puVar5);
      puVar18 = (void*)((int64_t)puVar3 + (uVar8 & 0xfffffffffffffffc) * 2);
      puVar13 = puVar3 + uVar8;
      operator_delete(puVar5);
      puVar7 = (void*)this_ptr[1];
      puVar9 = (void*)this_ptr[2];
    }
    else {
      lVar2 = (int64_t)puVar18 - (int64_t)puVar3 >> 3;
      puVar5 = (void*)-(lVar2 + 1 >> 0x3f);
      puVar18 = (void*)
                ((int64_t)puVar18 + (lVar2 + 1 + (int64_t)puVar5 & 0x3ffffffffffffffeU) * -4);
    }
    *puVar18 = pvVar4;
    puVar14 = puVar18 + 1;
    if (puVar9 == puVar7) goto LAB_00ad7f3e;
  }
  else {
    *puVar18 = pvVar4;
    puVar14 = puVar18 + 1;
    if (puVar9 == puVar7) goto LAB_00ad7f3e;
  }
  do {
    puVar7 = puVar14;
    if (puVar18 == puVar3) {
      if (puVar14 < puVar13) {
        lVar2 = (int64_t)puVar13 - (int64_t)puVar14 >> 3;
        puVar5 = (void*)-(lVar2 + 1 >> 0x3f);
        puVar7 = (void*)
                 ((int64_t)puVar14 + (lVar2 + 1 + (int64_t)puVar5 & 0xfffffffffffffffeU) * 4);
        pvVar4 = (void *)((int64_t)puVar14 - (int64_t)puVar18);
        puVar18 = puVar7;
        if (pvVar4 != (void *)0x0) {
          puVar18 = (void*)((int64_t)puVar7 - (int64_t)pvVar4);
          _memmove(puVar5,pvVar4,(size_t)puVar13);
        }
      }
      else {
        uVar8 = (int64_t)puVar13 - (int64_t)puVar3 >> 2;
        if ((int64_t)puVar13 - (int64_t)puVar3 == 0) {
          uVar8 = 1;
        }
        if (0x1fffffffffffffff < uVar8) {
                              FUN_00ad7940();
        }
        puVar3 = operator_new((ulong)puVar5);
        uVar12 = uVar8 + 3 >> 2;
        puVar17 = puVar3 + uVar12;
        puVar13 = puVar3 + uVar8;
        lVar2 = (int64_t)puVar14 - (int64_t)puVar18;
        puVar7 = puVar17;
        if (lVar2 != 0) {
          uVar10 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
          puVar14 = puVar17;
          puVar5 = puVar18;
          if ((uVar10 & 7) != 0) {
            lVar11 = -((uint64_t)uVar10 & 7);
            do {
              *puVar14 = *puVar18;
              puVar14 = puVar14 + 1;
              puVar18 = puVar18 + 1;
              lVar11 = lVar11 + 1;
              puVar5 = puVar18;
            } while (lVar11 != 0);
          }
          puVar7 = (void*)((int64_t)puVar17 + lVar2);
          if (0x37 < lVar2 - 8U) {
            puVar7 = (void*)((int64_t)puVar17 + lVar2);
            lVar11 = 0;
            puVar18 = puVar14;
            do {
              *puVar18 = *(void*)((int64_t)puVar5 + lVar11);
              *(void*)((int64_t)puVar14 + lVar11 + 8) =
                   *(void*)((int64_t)puVar5 + lVar11 + 8);
              *(void*)((int64_t)puVar14 + lVar11 + 0x10) =
                   *(void*)((int64_t)puVar5 + lVar11 + 0x10);
              *(void*)((int64_t)puVar14 + lVar11 + 0x18) =
                   *(void*)((int64_t)puVar5 + lVar11 + 0x18);
              *(void*)((int64_t)puVar14 + lVar11 + 0x20) =
                   *(void*)((int64_t)puVar5 + lVar11 + 0x20);
              *(void*)((int64_t)puVar14 + lVar11 + 0x28) =
                   *(void*)((int64_t)puVar5 + lVar11 + 0x28);
              *(void*)((int64_t)puVar14 + lVar11 + 0x30) =
                   *(void*)((int64_t)puVar5 + lVar11 + 0x30);
              *(void*)((int64_t)puVar14 + lVar11 + 0x38) =
                   *(void*)((int64_t)puVar5 + lVar11 + 0x38);
              puVar18 = (void*)((int64_t)puVar14 + lVar11 + 0x40);
              lVar11 = lVar11 + 0x40;
            } while ((int64_t)puVar3 + ((uVar12 * 8 + (lVar2 >> 3) * 8) - (int64_t)puVar14) !=
                     lVar11);
          }
        }
        operator_delete(puVar5);
        puVar18 = puVar17;
      }
    }
    puVar9 = puVar9 + -1;
    puVar18[-1] = *puVar9;
    puVar18 = puVar18 + -1;
    puVar14 = puVar7;
  } while (puVar9 != (void*)this_ptr[1]);
LAB_00ad7f3e:
  uVar8 = *this_ptr;
  *this_ptr = (uint64_t)puVar3;
  this_ptr[1] = (uint64_t)puVar18;
  this_ptr[2] = (uint64_t)puVar14;
  this_ptr[3] = (uint64_t)puVar13;
  if (uVar8 == 0) {
    return;
  }
  operator_delete(puVar5);
  return;
}

