// Function: FUN_00966906
// Address: 00966906
// Size: 1119 bytes
// Class: Unknown

uint64_t FUN_00966906(void *param_1,uint param_2,int64_t param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint *puVar10;
  int iVar11;
  uint unaff_ESI;
  int iVar12;
  uint *this_ptr;
  uint *puVar13;
  uint *puVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint uVar19;
  int64_t lVar20;
  uint32_t local_58 [8];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar19 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar19 = param_2;
  }
  uVar6 = 0;
  if (((param_2 & 0xfffffffc) < 0x21) &&
     ((0x101010000U >> ((uint64_t)(param_2 & 0xfffffffc) & 0x3f) & 1) != 0)) {
    uVar19 = (int)uVar19 >> 2;
    *this_ptr = uVar19;
    this_ptr[1] = uVar19 + 6;
    this_ptr[2] = unaff_ESI;
    this_ptr[0x7b] = 0;
    this_ptr[0x7c] = 0;
    this_ptr[0x7d] = 0;
    this_ptr[0x7e] = 0;
    if ((unaff_ESI != 0) && (param_3 != 0)) {
      lVar5 = 0;
      do {
        *(void*)((int64_t)this_ptr + lVar5 + 0x1ec) = *(void*)(param_3 + lVar5);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
    }
    iVar1 = uVar19 * 4 + 0x1c;
    if (3 < (int)param_2) {
      uVar9 = 0;
      do {
        local_58[uVar9] = *(void*)((int64_t)param_1 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar19 != uVar9);
      _memcpy(param_1,(void *)((uint64_t)(uVar19 - 1) * 4 + 4),(size_t)param_3);
    }
    lVar5 = (int64_t)iVar1;
    if ((int)uVar19 < iVar1) {
      lVar16 = (int64_t)(int)uVar19;
      puVar10 = this_ptr + lVar16 + 4;
      puVar13 = this_ptr + 4;
      lVar17 = lVar16 + 1;
      lVar15 = lVar16 + 5;
      lVar18 = 0;
      puVar14 = this_ptr;
      lVar20 = lVar16;
      do {
        uVar4 = this_ptr[lVar20 + 2];
        this_ptr[lVar20 + 3] =
             (&g_023c66f0)[lVar18] ^ this_ptr[(lVar20 - lVar16) + 3] ^
             CONCAT13((&g_023c6730)[(byte)uVar4],
                      CONCAT12((&g_023c6730)[uVar4 >> 0x18],
                               CONCAT11((&g_023c6730)[uVar4 >> 0x10 & 0xff],
                                        (&g_023c6730)[uVar4 >> 8 & 0xff])));
        if ((int)param_2 < 0x1c) {
          if (7 < (int)param_2) {
            lVar8 = 0;
            do {
              if (lVar5 <= lVar17 + lVar8) break;
              puVar10[lVar8] = puVar10[lVar8 + -1] ^ puVar13[lVar8];
              lVar7 = lVar8 + 2;
              lVar8 = lVar8 + 1;
            } while (lVar7 < lVar16);
          }
        }
        else {
          lVar8 = 0;
          do {
            if (lVar5 <= lVar17 + lVar8) break;
            puVar10[lVar8] = puVar10[lVar8 + -1] ^ puVar13[lVar8];
            lVar8 = lVar8 + 1;
          } while (lVar8 != 3);
          if (lVar20 + 4 < lVar5) {
            uVar4 = this_ptr[lVar20 + 6];
            this_ptr[lVar20 + 7] =
                 ((uint)(byte)(&g_023c6730)[uVar4 >> 8 & 0xff] * 0x100 +
                  (uint)(byte)(&g_023c6730)[(byte)uVar4] |
                  (uint)(byte)(&g_023c6730)[uVar4 >> 0x10 & 0xff] << 0x10 |
                 (uint)(byte)(&g_023c6730)[uVar4 >> 0x18] << 0x18) ^
                 this_ptr[((lVar20 + 4) - lVar16) + 3];
          }
          if (0x17 < (int)param_2) {
            lVar7 = 5;
            lVar8 = lVar15;
            do {
              if (lVar5 <= lVar8) break;
              this_ptr[lVar8 + 3] = this_ptr[lVar8 + 2] ^ puVar14[lVar7 + 3];
              lVar7 = lVar7 + 1;
              lVar8 = lVar8 + 1;
            } while (lVar7 < lVar16);
          }
        }
        lVar20 = lVar20 + lVar16;
        lVar18 = lVar18 + 1;
        puVar10 = puVar10 + lVar16;
        puVar13 = puVar13 + lVar16;
        lVar17 = lVar17 + lVar16;
        lVar15 = lVar15 + lVar16;
        puVar14 = puVar14 + lVar16;
      } while (lVar20 < lVar5);
    }
    iVar11 = uVar19 * 4 + 0x18;
    lVar17 = (int64_t)iVar11;
    lVar15 = 0;
    do {
      this_ptr[lVar17 + lVar15 + 0x3f] = this_ptr[lVar15 + 3];
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    if (4 < iVar11) {
      iVar12 = uVar19 * 4 + 0x14;
      lVar15 = 4;
      do {
        lVar20 = 0;
        do {
          iVar3 = FUN_009679c3();
          uVar19 = FUN_009679c3();
          uVar4 = FUN_009679c3();
          bVar2 = FUN_009679c3();
          this_ptr[(int64_t)iVar12 + lVar20 + 0x3f] =
               (uint)bVar2 | (uVar4 & 0xff) << 8 | (uVar19 & 0xff) << 0x10 | iVar3 << 0x18;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 4);
        lVar15 = lVar15 + 4;
        iVar12 = iVar12 + -4;
      } while (lVar15 < lVar17);
    }
    uVar6 = 1;
    if (iVar11 < iVar1) {
      lVar15 = 0;
      do {
        this_ptr[(int64_t)(int)lVar15 + 0x3f] = this_ptr[lVar17 + lVar15 + 3];
        lVar15 = lVar15 + 1;
      } while (lVar5 - lVar17 != lVar15);
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar6;
}

