// Function: FUN_00f2bb1f
// Address: 00f2bb1f
// Size: 595 bytes
// Class: Unknown

uint64_t FUN_00f2bb1f(int64_t param_1,uint *param_2,uint *param_3,int64_t param_4)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  dword *pdVar9;
  uint *puVar10;
  uint *arg1;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar6 = *arg1;
  if (param_1 == 0) {
    ___bzero();
    *arg1 = 0;
    uVar8 = 0;
  }
  else {
    iVar11 = (int)param_3;
    puVar1 = (uint *)((int64_t)param_2 + param_1);
    ___bzero();
    puVar10 = param_2;
    if (0x13 < param_1) {
      param_3 = (uint *)((int64_t)param_2 + param_1 + -0xf);
      uVar14 = *param_2;
      puVar12 = param_2;
      do {
        uVar15 = puVar12[1];
        piVar2 = (int *)(param_4 + (uint64_t)(uVar14 & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x400 + (uint64_t)(uVar14 >> 8 & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x800 + (uint64_t)(uVar14 >> 0x10 & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0xc00 + (uint64_t)(uVar14 >> 0x18) * 4);
        *piVar2 = *piVar2 + 1;
        uVar14 = puVar12[2];
        piVar2 = (int *)(param_4 + ((uint64_t)uVar15 & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x400 + ((uint64_t)(uVar15 >> 8) & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x800 + ((uint64_t)(uVar15 >> 0xe) & 0x3fc));
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0xc00 + (uint64_t)(uVar15 >> 0x18) * 4);
        *piVar2 = *piVar2 + 1;
        uVar15 = puVar12[3];
        piVar2 = (int *)(param_4 + ((uint64_t)uVar14 & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x400 + ((uint64_t)(uVar14 >> 8) & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x800 + ((uint64_t)(uVar14 >> 0xe) & 0x3fc));
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0xc00 + (uint64_t)(uVar14 >> 0x18) * 4);
        *piVar2 = *piVar2 + 1;
        uVar14 = puVar12[4];
        piVar2 = (int *)(param_4 + ((uint64_t)uVar15 & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x400 + ((uint64_t)(uVar15 >> 8) & 0xff) * 4);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0x800 + ((uint64_t)(uVar15 >> 0xe) & 0x3fc));
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)(param_4 + 0xc00 + (uint64_t)(uVar15 >> 0x18) * 4);
        *piVar2 = *piVar2 + 1;
        puVar10 = puVar12 + 4;
        param_2 = param_2 + 4;
        puVar13 = puVar12 + 5;
        puVar12 = puVar10;
      } while (puVar13 < param_3);
    }
    if (puVar10 < puVar1) {
      lVar7 = 0;
      do {
        piVar2 = (int *)(param_4 + (uint64_t)*(byte *)((int64_t)puVar10 + lVar7) * 4);
        *piVar2 = *piVar2 + 1;
        lVar7 = lVar7 + 1;
      } while ((int64_t)puVar1 - (int64_t)param_2 != lVar7);
    }
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    lVar7 = 0;
    do {
      piVar3 = (int *)(param_4 + 0x400 + lVar7 * 4);
      piVar4 = (int *)(param_4 + 0x800 + lVar7 * 4);
      piVar5 = (int *)(param_4 + 0xc00 + lVar7 * 4);
      piVar2 = (int *)(param_4 + lVar7 * 4);
      uVar18 = *piVar2 + *piVar5 + *piVar4 + *piVar3;
      uVar19 = piVar2[1] + piVar5[1] + piVar4[1] + piVar3[1];
      uVar20 = piVar2[2] + piVar5[2] + piVar4[2] + piVar3[2];
      uVar21 = piVar2[3] + piVar5[3] + piVar4[3] + piVar3[3];
      puVar10 = (uint *)(param_4 + lVar7 * 4);
      *puVar10 = uVar18;
      puVar10[1] = uVar19;
      puVar10[2] = uVar20;
      puVar10[3] = uVar21;
      uVar14 = (uVar14 < uVar18) * uVar18 | (uVar14 >= uVar18) * uVar14;
      uVar15 = (uVar15 < uVar19) * uVar19 | (uVar15 >= uVar19) * uVar15;
      uVar16 = (uVar16 < uVar20) * uVar20 | (uVar16 >= uVar20) * uVar16;
      uVar17 = (uVar17 < uVar21) * uVar21 | (uVar17 >= uVar21) * uVar17;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x100);
    uVar14 = (uVar16 < uVar14) * uVar14 | (uVar16 >= uVar14) * uVar16;
    uVar15 = (uVar17 < uVar15) * uVar15 | (uVar17 >= uVar15) * uVar17;
    pdVar9 = &section_000000b8.reserved2;
    do {
      uVar16 = (int)pdVar9 - 1;
      pdVar9 = (dword *)(uint64_t)uVar16;
    } while (*(int *)(param_4 + (int64_t)pdVar9 * 4) == 0);
    if ((iVar11 == 0) || (uVar8 = 0xffffffffffffffd0, uVar16 <= *arg1)) {
      *arg1 = uVar16;
      _memmove(pdVar9,(void *)((uint64_t)(uVar6 + 1) << 2),(size_t)param_3);
      uVar8 = (uint64_t)((uVar15 < uVar14) * uVar14 | (uVar15 >= uVar14) * uVar15);
    }
  }
  return uVar8;
}

