// Function: FUN_00f2c862
// Address: 00f2c862
// Size: 677 bytes
// Class: Unknown

void* FUN_00f2c862(uint *param_1,int *param_2,void*param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void*puVar4;
  uint64_t uVar5;
  void*puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *arg1;
  uint *puVar11;
  int64_t this_ptr;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  uint64_t local_50;
  
  if ((void*)((int64_t)&MACH_HEADER.cputype + 3) < param_3) {
    uVar17 = *arg1 + 1;
    ___bzero();
    uVar13 = *param_1 & 0xf;
    puVar6 = (void*)0xffffffffffffffd4;
    if (uVar13 < 0xb) {
      uVar9 = *param_1 >> 4;
      *param_2 = uVar13 + 5;
      iVar15 = 0x20 << uVar13;
      iVar18 = iVar15 + 1;
      iVar14 = uVar13 + 6;
      puVar1 = (uint *)(param_3 + (int64_t)param_1 + -7);
      puVar16 = (uint *)(param_3 + (int64_t)param_1 + -4);
      uVar13 = 4;
      uVar8 = 0;
      bVar19 = false;
      puVar11 = param_1;
      do {
        if (bVar19) {
          uVar3 = 0;
          for (uVar2 = ~uVar9; (uVar2 & 1) == 0; uVar2 = (uVar2 | 0x80000000) >> 1) {
            uVar3 = uVar3 + 1;
          }
          while (0x17 < uVar3) {
            if (puVar1 < puVar11) {
              uVar13 = uVar13 + ((int)puVar11 - (int)puVar1) * 8 & 0x1f;
              puVar11 = puVar16;
            }
            else {
              puVar11 = (uint *)((int64_t)puVar11 + 3);
            }
            uVar9 = *puVar11 >> uVar13;
            uVar3 = 0;
            for (uVar2 = ~uVar9; (uVar2 & 1) == 0; uVar2 = (uVar2 | 0x80000000) >> 1) {
              uVar3 = uVar3 + 1;
            }
            uVar8 = uVar8 + 0x24;
          }
          uVar8 = (uVar9 >> (uVar3 & 0x1e) & 3) + (uVar3 >> 1) * 3 + uVar8;
          uVar9 = uVar13 + (uVar3 & 0xfffffffe) + 2;
          if (uVar17 <= uVar8) {
LAB_00f2cab5:
            if (iVar18 != 1) {
              return (void*)0xffffffffffffffec;
            }
            if (uVar17 < uVar8) {
              return (void*)0xffffffffffffffd0;
            }
            if (0x20 < (int)uVar9) {
              return (void*)0xffffffffffffffec;
            }
            *arg1 = uVar8 - 1;
            return (void*)
                   ((int64_t)puVar11 + ((int64_t)((int)(uVar9 + 7) >> 3) - (int64_t)param_1));
          }
          if ((puVar1 < puVar11) &&
             (puVar16 < (uint *)((int64_t)puVar11 + (uint64_t)(uint)((int)uVar9 >> 3)))) {
            uVar13 = uVar9 + ((int)puVar11 - (int)puVar16) * 8 & 0x1f;
            puVar11 = puVar16;
          }
          else {
            uVar13 = uVar9 & 7;
            puVar11 = (uint *)((int64_t)puVar11 + (uint64_t)(uint)((int)uVar9 >> 3));
          }
          uVar9 = *puVar11 >> uVar13;
        }
        uVar12 = iVar15 * 2 - 1;
        uVar2 = uVar12 - iVar18;
        uVar3 = iVar15 - 1U & uVar9;
        if (uVar3 < uVar2) {
          iVar7 = iVar14 + -1;
        }
        else {
          uVar9 = uVar9 & uVar12;
          if ((int)uVar9 < iVar15) {
            uVar2 = 0;
          }
          uVar3 = uVar9 - uVar2;
          iVar7 = iVar14;
        }
        uVar9 = iVar7 + uVar13;
        iVar7 = uVar3 - 1;
        iVar10 = 1 - uVar3;
        if ((int)uVar3 < 1) {
          iVar10 = iVar7;
        }
        iVar18 = iVar18 + iVar10;
        uVar5 = (uint64_t)uVar8;
        uVar8 = uVar8 + 1;
        *(short *)(this_ptr + uVar5 * 2) = (short)iVar7;
        bVar19 = iVar7 == 0;
        if (iVar18 < iVar15) {
          if (iVar18 < 2) goto LAB_00f2cab5;
          iVar14 = 0x20 - LZCOUNT(iVar18);
          iVar15 = 1 << ((byte)((byte)LZCOUNT(iVar18) ^ 0x1f) & 0x1f);
        }
        if (uVar17 <= uVar8) goto LAB_00f2cab5;
        if ((puVar1 < puVar11) &&
           (puVar16 < (uint *)((int64_t)puVar11 + (int64_t)((int)uVar9 >> 3)))) {
          uVar13 = uVar9 + ((int)puVar11 - (int)puVar16) * 8 & 0x1f;
          puVar11 = puVar16;
        }
        else {
          uVar13 = uVar9 & 7;
          puVar11 = (uint *)((int64_t)puVar11 + (int64_t)((int)uVar9 >> 3));
        }
        uVar9 = *puVar11 >> uVar13;
      } while( true );
    }
  }
  else {
    local_50 = 0;
    _memcpy(param_1,param_3,(size_t)param_3);
    puVar4 = (void*)FUN_00f2d1d0(&local_50,param_2,8);
    puVar6 = (void*)0xffffffffffffffec;
    if (puVar4 <= param_3) {
      puVar6 = puVar4;
    }
    if ((void*)0xffffffffffffff88 < puVar4) {
      puVar6 = puVar4;
    }
  }
  return puVar6;
}

