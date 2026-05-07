// Function: FUN_015b3700
// Address: 015b3700
// Size: 2461 bytes
// Class: Unknown
// String references:
//   "%4d %.3f "

uint64_t FUN_015b3700(float param_1,float *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint32_t uVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t in_RCX;
  uint64_t uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  int unaff_ESI;
  uint uVar11;
  int iVar12;
  int iVar13;
  void*this_ptr;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char local_c8;
  int64_t local_a8;
  char local_a0;
  uint8_t local_9e [102];
  int64_t local_38;
  
  iVar12 = (int)in_RCX;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar17 = unaff_ESI * iVar12;
  FUN_00c8e690(in_RCX,param_2,param_3,param_4,param_3);
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  fVar19 = (float)iVar12;
  fVar20 = param_1 * fVar19 + g_02391090;
  uVar18 = -uVar17;
  if (0 < (int)uVar17) {
    uVar18 = uVar17;
  }
  if (-2 < iVar12) {
    iVar16 = (int)((in_RCX & 0xffffffff) >> 0x1f) + iVar12 >> 1;
    puVar3 = (void*)*this_ptr;
    uVar14 = -iVar16;
    param_3 = (uint64_t)uVar14;
    iVar15 = -iVar16;
    if (0 < iVar16) {
      iVar15 = iVar16;
    }
    uVar2 = *puVar3;
    lVar4 = *(int64_t *)(local_a8 + 0x10);
    uVar1 = iVar16 + iVar15;
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      *(void*)
       (lVar4 + (int64_t)
                (int)(((int)uVar14 % (int)uVar17 >> 0x1f & uVar18) + (int)uVar14 % (int)uVar17) * 4)
           = uVar2;
      uVar5 = (uint64_t)(1 - iVar16);
    }
    if (uVar1 != 0) {
      do {
        iVar13 = (int)uVar5;
        *(void*)
         (lVar4 + (int64_t)(int)((iVar13 % (int)uVar17 >> 0x1f & uVar18) + iVar13 % (int)uVar17) *
                  4) = uVar2;
        iVar8 = (iVar13 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
        uVar5 = (uint64_t)(iVar13 + 2);
      } while (iVar13 + 1 != iVar15);
    }
    uVar2 = puVar3[1];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = uVar11 + iVar12;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[2];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 2 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = uVar11 + iVar12 * 2;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[3];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 3 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = iVar12 * 3 + uVar11;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[4];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 4 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = iVar12 * 4 + uVar11;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[5];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 5 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = iVar12 * 5 + uVar11;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[6];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 6 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = iVar12 * 6 + uVar11;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[7];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 7 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar8 = (iVar15 - uVar11) + 1;
      iVar13 = iVar12 * 7 + uVar11;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar13 % (int)uVar17 >> 0x1f & uVar18) + iVar13 % (int)uVar17) *
                  4) = uVar2;
        iVar9 = (iVar13 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar13 = iVar13 + 2;
        iVar8 = iVar8 + -2;
      } while (iVar8 != 0);
    }
    uVar2 = puVar3[8];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 8 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = iVar12 * 8 + uVar11;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[9];
    uVar11 = uVar14;
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 9 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar11 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar11) + 1;
      iVar8 = iVar12 * 9 + uVar11;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[10];
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 10 - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      uVar14 = 1 - iVar16;
    }
    if (uVar1 != 0) {
      iVar13 = (iVar15 - uVar14) + 1;
      iVar8 = iVar12 * 10 + uVar14;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar8 % (int)uVar17 >> 0x1f & uVar18) + iVar8 % (int)uVar17) * 4)
             = uVar2;
        iVar9 = (iVar8 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar9 >> 0x1f & uVar18) + iVar9) * 4) = uVar2;
        iVar8 = iVar8 + 2;
        iVar13 = iVar13 + -2;
      } while (iVar13 != 0);
    }
    uVar2 = puVar3[0xb];
    if ((uVar1 & 1) == 0) {
      iVar8 = (iVar12 * 0xb - iVar16) % (int)uVar17;
      *(void*)(lVar4 + (int64_t)(int)((iVar8 >> 0x1f & uVar18) + iVar8) * 4) = uVar2;
      param_3 = (uint64_t)(1 - iVar16);
    }
    if (uVar1 != 0) {
      iVar15 = (iVar15 - (int)param_3) + 1;
      iVar12 = iVar12 * 0xb + (int)param_3;
      do {
        *(void*)
         (lVar4 + (int64_t)(int)((iVar12 % (int)uVar17 >> 0x1f & uVar18) + iVar12 % (int)uVar17) *
                  4) = uVar2;
        iVar16 = (iVar12 + 1) % (int)uVar17;
        *(void*)(lVar4 + (int64_t)(int)((iVar16 >> 0x1f & uVar18) + iVar16) * 4) = uVar2;
        iVar12 = iVar12 + 2;
        iVar15 = iVar15 + -2;
      } while (iVar15 != 0);
    }
  }
  FUN_015c15b0(fVar20,uVar17);
  if ((int)uVar17 < 1) {
    *param_2 = g_02390d00 / fVar19;
    uVar5 = (uint64_t)(uint)g_02391074;
  }
  else {
    lVar4 = *(int64_t *)(local_a8 + 0x10);
    uVar5 = (uint64_t)(uVar17 & 3);
    fVar20 = g_02391074;
    if ((uint64_t)uVar17 - 1 < 3) {
      uVar10 = 0xffffffff;
      uVar6 = 0;
    }
    else {
      param_3 = (uint64_t)(uVar17 & 0xfffffffc);
      uVar10 = 0xffffffff;
      uVar6 = 0;
      do {
        fVar21 = *(float *)(lVar4 + uVar6 * 4);
        uVar18 = (uint)uVar6;
        uVar14 = (uint)uVar10;
        if (fVar20 < fVar21) {
          uVar14 = uVar18;
        }
        fVar22 = *(float *)(lVar4 + 4 + uVar6 * 4);
        if (fVar21 <= fVar20) {
          fVar21 = fVar20;
        }
        uVar1 = uVar18 + 1;
        if (fVar22 <= fVar21) {
          fVar22 = fVar21;
          uVar1 = uVar14;
        }
        fVar21 = *(float *)(lVar4 + 8 + uVar6 * 4);
        uVar14 = uVar18 + 2;
        if (fVar21 <= fVar22) {
          fVar21 = fVar22;
          uVar14 = uVar1;
        }
        fVar20 = *(float *)(lVar4 + 0xc + uVar6 * 4);
        uVar18 = uVar18 + 3;
        if (fVar20 <= fVar21) {
          uVar18 = uVar14;
        }
        uVar10 = (uint64_t)uVar18;
        if (fVar20 <= fVar21) {
          fVar20 = fVar21;
        }
        uVar6 = uVar6 + 4;
      } while (param_3 != uVar6);
    }
    iVar12 = (int)uVar10;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      fVar21 = *(float *)(lVar4 + uVar6 * 4);
      iVar12 = (int)uVar10;
      if (fVar20 < fVar21) {
        uVar10 = uVar6 & 0xffffffff;
        iVar12 = (int)uVar6;
        fVar20 = fVar21;
      }
      uVar6 = uVar6 + 1;
    }
    uVar5 = (uint64_t)(uint)fVar20;
    *param_2 = (float)iVar12 / fVar19;
    local_c8 = (char)param_4;
    if (local_c8 != '\0') {
      uVar10 = 0;
      do {
        fVar19 = *(float *)(lVar4 + uVar10 * 4);
        fVar20 = fVar19 * g_0239011c * g_023908e0;
        pvVar7 = (void *)(uVar10 & 0xffffffff);
        FUN_00e7df20((double)fVar19,"%4d %.3f ");
        uVar18 = (uint)(fVar20 + g_0239011c);
        if ((int)uVar18 < 0) {
          uVar18 = 0;
        }
        uVar6 = (uint64_t)uVar18;
        if (99 < (int)uVar18) {
          uVar6 = 100;
        }
        _memset(pvVar7,(int)uVar6,(size_t)param_3);
        local_9e[uVar6] = 0;
        uVar10 = uVar10 + 1;
      } while (uVar17 != uVar10);
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar5 & 0xffffffff;
  }
                      ___stack_chk_fail();
}

