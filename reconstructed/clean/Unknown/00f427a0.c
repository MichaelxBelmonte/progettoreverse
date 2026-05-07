// Function: FUN_00f427a0
// Address: 00f427a0
// Size: 1066 bytes
// Class: Unknown

uint64_t FUN_00f427a0(uint64_t param_1,void*param_2)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  byte *arg1;
  uint64_t this_ptr;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  
  uVar13 = this_ptr & 0xffff;
  uVar2 = this_ptr >> 0x10 & 0xffff;
  if (param_2 == (void*)0x1) {
    uVar4 = uVar13 + *arg1;
    uVar13 = (uVar13 - 0xfff1) + (uint64_t)*arg1;
    if (uVar4 < 0xfff1) {
      uVar13 = uVar4;
    }
    uVar3 = (uVar2 + uVar13) * 0x10000;
    uVar4 = uVar3 - 0xfff10000;
    if (uVar2 + uVar13 < 0xfff1) {
      uVar4 = uVar3;
    }
    return uVar4 | uVar13;
  }
  if (arg1 == (byte *)0x0) {
    return 1;
  }
  if (param_2 < (void*)0x10) {
    if (param_2 != (void*)0x0) {
      puVar1 = param_2 + -1;
      if (((uint64_t)param_2 & 3) != 0) {
        uVar4 = 0;
        do {
          uVar13 = uVar13 + arg1[uVar4];
          uVar2 = uVar2 + uVar13;
          uVar4 = uVar4 + 1;
        } while (((uint64_t)param_2 & 3) != uVar4);
        param_2 = param_2 + -uVar4;
        arg1 = arg1 + uVar4;
      }
      if ((void*)0x2 < puVar1) {
        puVar1 = (void*)0x0;
        do {
          lVar5 = arg1[(int64_t)puVar1] + uVar13;
          lVar14 = (uint64_t)arg1[(int64_t)(puVar1 + 1)] + lVar5;
          lVar6 = (uint64_t)arg1[(int64_t)(puVar1 + 2)] + lVar14;
          uVar13 = (uint64_t)arg1[(int64_t)(puVar1 + 3)] + lVar6;
          uVar2 = uVar2 + lVar5 + lVar14 + lVar6 + uVar13;
          puVar1 = puVar1 + 4;
        } while (param_2 != puVar1);
      }
    }
    uVar4 = uVar13 - 0xfff1;
    if (uVar13 < 0xfff1) {
      uVar4 = uVar13;
    }
    return uVar2 % 0xfff1 << 0x10 | uVar4;
  }
  if (param_2 < &g_000015b0) {
LAB_00f42a40:
    do {
      param_2 = param_2 + -0x10;
      lVar5 = *arg1 + uVar13;
      lVar12 = (uint64_t)arg1[1] + lVar5;
      lVar6 = (uint64_t)arg1[2] + lVar12;
      lVar15 = (uint64_t)arg1[3] + lVar6;
      lVar14 = (uint64_t)arg1[4] + lVar15;
      lVar16 = (uint64_t)arg1[5] + lVar14;
      lVar7 = (uint64_t)arg1[6] + lVar16;
      lVar17 = (uint64_t)arg1[7] + lVar7;
      lVar8 = (uint64_t)arg1[8] + lVar17;
      lVar18 = (uint64_t)arg1[9] + lVar8;
      lVar9 = (uint64_t)arg1[10] + lVar18;
      lVar19 = (uint64_t)arg1[0xb] + lVar9;
      lVar10 = (uint64_t)arg1[0xc] + lVar19;
      lVar20 = (uint64_t)arg1[0xd] + lVar10;
      lVar11 = (uint64_t)arg1[0xe] + lVar20;
      uVar13 = (uint64_t)arg1[0xf] + lVar11;
      uVar2 = uVar2 + lVar5 + lVar12 + lVar6 + lVar15 + lVar14 + lVar16 + lVar7 + lVar17 + lVar8 +
              lVar18 + lVar9 + lVar19 + lVar10 + lVar20 + lVar11 + uVar13;
      arg1 = arg1 + 0x10;
    } while ((void*)0xf < param_2);
    if (param_2 != (void*)0x0) goto LAB_00f42afa;
  }
  else {
    do {
      param_2 = param_2 + -0x15b0;
      lVar5 = 0;
      do {
        lVar6 = arg1[lVar5] + uVar13;
        lVar15 = (uint64_t)arg1[lVar5 + 1] + lVar6;
        lVar14 = (uint64_t)arg1[lVar5 + 2] + lVar15;
        lVar16 = (uint64_t)arg1[lVar5 + 3] + lVar14;
        lVar7 = (uint64_t)arg1[lVar5 + 4] + lVar16;
        lVar17 = (uint64_t)arg1[lVar5 + 5] + lVar7;
        lVar8 = (uint64_t)arg1[lVar5 + 6] + lVar17;
        lVar18 = (uint64_t)arg1[lVar5 + 7] + lVar8;
        lVar9 = (uint64_t)arg1[lVar5 + 8] + lVar18;
        lVar19 = (uint64_t)arg1[lVar5 + 9] + lVar9;
        lVar10 = (uint64_t)arg1[lVar5 + 10] + lVar19;
        lVar20 = (uint64_t)arg1[lVar5 + 0xb] + lVar10;
        lVar11 = (uint64_t)arg1[lVar5 + 0xc] + lVar20;
        lVar21 = (uint64_t)arg1[lVar5 + 0xd] + lVar11;
        lVar12 = (uint64_t)arg1[lVar5 + 0xe] + lVar21;
        uVar13 = (uint64_t)arg1[lVar5 + 0xf] + lVar12;
        uVar2 = uVar2 + lVar6 + lVar15 + lVar14 + lVar16 + lVar7 + lVar17 + lVar8 + lVar18 + lVar9 +
                lVar19 + lVar10 + lVar20 + lVar11 + lVar21 + lVar12 + uVar13;
        lVar5 = lVar5 + 0x10;
      } while ((int)lVar5 != 0x15b0);
      arg1 = arg1 + 0x15b0;
      uVar13 = uVar13 % 0xfff1;
      uVar2 = uVar2 % 0xfff1;
    } while (&UNK_000015af < param_2);
    if (param_2 == (void*)0x0) goto LAB_00f42bbe;
    if ((void*)0xf < param_2) goto LAB_00f42a40;
LAB_00f42afa:
    puVar1 = param_2 + -1;
    if (((uint64_t)param_2 & 3) != 0) {
      uVar4 = 0;
      do {
        uVar13 = uVar13 + arg1[uVar4];
        uVar2 = uVar2 + uVar13;
        uVar4 = uVar4 + 1;
      } while (((uint64_t)param_2 & 3) != uVar4);
      param_2 = param_2 + -uVar4;
      arg1 = arg1 + uVar4;
    }
    if ((void*)0x2 < puVar1) {
      puVar1 = (void*)0x0;
      do {
        lVar5 = arg1[(int64_t)puVar1] + uVar13;
        lVar14 = (uint64_t)arg1[(int64_t)(puVar1 + 1)] + lVar5;
        lVar6 = (uint64_t)arg1[(int64_t)(puVar1 + 2)] + lVar14;
        uVar13 = (uint64_t)arg1[(int64_t)(puVar1 + 3)] + lVar6;
        uVar2 = uVar2 + lVar5 + lVar14 + lVar6 + uVar13;
        puVar1 = puVar1 + 4;
      } while (param_2 != puVar1);
    }
  }
  uVar13 = uVar13 % 0xfff1;
  uVar2 = uVar2 % 0xfff1;
LAB_00f42bbe:
  return uVar2 << 0x10 | uVar13;
}

