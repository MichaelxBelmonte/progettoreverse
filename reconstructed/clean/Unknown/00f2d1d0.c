// Function: FUN_00f2d1d0
// Address: 00f2d1d0
// Size: 693 bytes
// Class: Unknown

void* FUN_00f2d1d0(uint *param_1,int *param_2,void*param_3)

{
  uint *puVar1;
  uint uVar2;
  void*puVar3;
  void*puVar4;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *arg1;
  int64_t this_ptr;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  uint64_t local_58;
  
  if ((void*)((int64_t)&MACH_HEADER.cputype + 3) < param_3) {
    uVar18 = *arg1 + 1;
    ___bzero();
    uVar12 = *param_1 & 0xf;
    puVar4 = (void*)0xffffffffffffffd4;
    if (uVar12 < 0xb) {
      uVar8 = *param_1 >> 4;
      *param_2 = uVar12 + 5;
      iVar16 = 0x20 << (sbyte)uVar12;
      uVar14 = iVar16 + 1;
      iVar13 = uVar12 + 6;
      puVar1 = (uint *)(param_3 + (int64_t)param_1 + -7);
      puVar17 = (uint *)(param_3 + (int64_t)param_1 + -4);
      uVar12 = 4;
      uVar15 = 0;
      bVar19 = false;
      puVar11 = param_1;
      do {
        if (bVar19) {
          uVar2 = 0;
          if ((~uVar8 | 0x80000000) != 0) {
            for (; ((~uVar8 | 0x80000000) >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
            }
          }
          while (0x17 < uVar2) {
            if (puVar1 < puVar11) {
              uVar12 = uVar12 + ((int)puVar11 - (int)puVar1) * 8 & 0x1f;
              puVar11 = puVar17;
            }
            else {
              puVar11 = (uint *)((int64_t)puVar11 + 3);
            }
            uVar8 = *puVar11 >> (sbyte)uVar12;
            uVar2 = 0;
            if ((~uVar8 | 0x80000000) != 0) {
              for (; ((~uVar8 | 0x80000000) >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
              }
            }
            uVar15 = uVar15 + 0x24;
          }
          uVar15 = (uVar8 >> ((byte)(uVar2 & 0xfffffffe) & 0x1f) & 3) + (uVar2 >> 1) * 3 + uVar15;
          uVar8 = uVar12 + (uVar2 & 0xfffffffe) + 2;
          if (uVar18 <= uVar15) {
LAB_00f2d431:
            if (uVar14 != 1) {
              return (void*)0xffffffffffffffec;
            }
            if (uVar18 < uVar15) {
              return (void*)0xffffffffffffffd0;
            }
            if (0x20 < (int)uVar8) {
              return (void*)0xffffffffffffffec;
            }
            *arg1 = uVar15 - 1;
            return (void*)
                   ((int64_t)puVar11 + ((int64_t)((int)(uVar8 + 7) >> 3) - (int64_t)param_1));
          }
          if ((puVar1 < puVar11) &&
             (puVar17 < (uint *)((int64_t)puVar11 + (uint64_t)(uint)((int)uVar8 >> 3)))) {
            uVar12 = uVar8 + ((int)puVar11 - (int)puVar17) * 8 & 0x1f;
            puVar11 = puVar17;
          }
          else {
            uVar12 = uVar8 & 7;
            puVar11 = (uint *)((int64_t)puVar11 + (uint64_t)(uint)((int)uVar8 >> 3));
          }
          uVar8 = *puVar11 >> (sbyte)uVar12;
        }
        uVar2 = iVar16 * 2 - 1;
        uVar9 = uVar2 - uVar14;
        uVar5 = iVar16 - 1U & uVar8;
        if (uVar5 < uVar9) {
          iVar10 = iVar13 + -1;
        }
        else {
          uVar8 = uVar8 & uVar2;
          if ((int)uVar8 < iVar16) {
            uVar9 = 0;
          }
          uVar5 = uVar8 - uVar9;
          iVar10 = iVar13;
        }
        uVar8 = iVar10 + uVar12;
        iVar10 = uVar5 - 1;
        iVar7 = 1 - uVar5;
        if ((int)uVar5 < 1) {
          iVar7 = iVar10;
        }
        uVar14 = uVar14 + iVar7;
        uVar6 = (uint64_t)uVar15;
        uVar15 = uVar15 + 1;
        *(short *)(this_ptr + uVar6 * 2) = (short)iVar10;
        bVar19 = iVar10 == 0;
        if ((int)uVar14 < iVar16) {
          if ((int)uVar14 < 2) goto LAB_00f2d431;
          uVar12 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar12 == 0; uVar12 = uVar12 - 1) {
            }
          }
          iVar13 = (uVar12 ^ 0xffffffe0) + 0x21;
          iVar16 = 1 << ((byte)uVar12 & 0x1f);
        }
        if (uVar18 <= uVar15) goto LAB_00f2d431;
        if ((puVar1 < puVar11) &&
           (puVar17 < (uint *)((int64_t)puVar11 + (int64_t)((int)uVar8 >> 3)))) {
          uVar12 = uVar8 + ((int)puVar11 - (int)puVar17) * 8 & 0x1f;
          puVar11 = puVar17;
        }
        else {
          uVar12 = uVar8 & 7;
          puVar11 = (uint *)((int64_t)puVar11 + (int64_t)((int)uVar8 >> 3));
        }
        uVar8 = *puVar11 >> (sbyte)uVar12;
      } while( true );
    }
  }
  else {
    local_58 = 0;
    _memcpy(param_1,param_3,(size_t)param_3);
    puVar3 = (void*)FUN_00f2d1d0(&local_58,param_2,8);
    puVar4 = (void*)0xffffffffffffffec;
    if (puVar3 <= param_3) {
      puVar4 = puVar3;
    }
    if ((void*)0xffffffffffffff88 < puVar3) {
      puVar4 = puVar3;
    }
  }
  return puVar4;
}

