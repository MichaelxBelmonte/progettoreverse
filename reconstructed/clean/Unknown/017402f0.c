// Function: FUN_017402f0
// Address: 017402f0
// Size: 4696 bytes
// Class: Unknown

int64_t * FUN_017402f0(void *param_1,int64_t *param_2,size_t param_3)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  void* pVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  int iVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int64_t *plVar19;
  uint uVar20;
  int64_t *arg1;
  uint64_t uVar21;
  int64_t *this_ptr;
  uint64_t uVar22;
  void*puVar23;
  int64_t lVar24;
  int64_t local_78;
  char local_70;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  lVar24 = 0;
  do {
    plVar19 = (int64_t *)*param_2;
    pvVar8 = _pthread_getspecific((void*)param_1);
    if (pvVar8 != (void *)0x0) {
      plVar19 = (int64_t *)*param_2;
      lVar9 = FUN_00e8b990();
      if (lVar9 != 0) {
        plVar19 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
    }
    iVar6 = (**(code **)(*plVar19 + 0x378))();
    if (iVar6 != -1000000) {
      pvVar8 = _pthread_getspecific((void*)param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01740240();
      if (local_40 == 0) {
        cVar5 = '\0';
      }
      else {
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_01739840();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        *(void*)(*(int64_t *)(local_40 + 0x10) + lVar24) = 1;
      }
    }
    iVar6 = (**(code **)(*arg1 + 0x378))();
    if (iVar6 != -1000000) {
      FUN_01740240();
      if (local_40 == 0) {
        cVar5 = '\0';
      }
      else {
        FUN_01740240();
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_01739840();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        *(void*)(*(int64_t *)(local_40 + 0x10) + lVar24) = 1;
      }
    }
    pVar11 = (void*)param_1;
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0xc);
  lVar24 = arg1[0xb];
  if (lVar24 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736c50();
  iVar6 = (**(code **)(*arg1 + 0x370))();
  if (lVar24 != 0) {
    FUN_00d50b20();
  }
  piVar1 = *(int **)(local_40 + 0x10);
  iVar7 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
  iVar12 = 0xc;
  if (iVar7 < 1) {
    iVar12 = 0;
  }
  uVar13 = iVar12 - iVar7;
  iVar12 = -1;
  iVar7 = -1;
  if (uVar13 < 0xb) {
    iVar7 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  *piVar1 = iVar7;
  iVar7 = -iVar6 + 1;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = -iVar6 + 0xd + iVar15 * -0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 < 0xb) {
    iVar12 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  iVar7 = 2 - iVar6;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = iVar7 + iVar15 * -0xc + 0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  piVar1[1] = iVar12;
  iVar12 = -1;
  iVar7 = -1;
  if (uVar13 < 0xb) {
    iVar7 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  piVar1[2] = iVar7;
  iVar7 = -iVar6 + 3;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = -iVar6 + 0xf + iVar15 * -0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 < 0xb) {
    iVar12 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  iVar7 = 4 - iVar6;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = iVar7 + iVar15 * -0xc + 0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  piVar1[3] = iVar12;
  iVar12 = -1;
  iVar7 = -1;
  if (uVar13 < 0xb) {
    iVar7 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  piVar1[4] = iVar7;
  iVar7 = -iVar6 + 5;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = -iVar6 + 0x11 + iVar15 * -0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 < 0xb) {
    iVar12 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  iVar7 = 6 - iVar6;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = iVar7 + iVar15 * -0xc + 0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  piVar1[5] = iVar12;
  iVar12 = -1;
  iVar7 = -1;
  if (uVar13 < 0xb) {
    iVar7 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  piVar1[6] = iVar7;
  iVar7 = -iVar6 + 7;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = -iVar6 + 0x13 + iVar15 * -0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 < 0xb) {
    iVar12 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  iVar7 = 8 - iVar6;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = iVar7 + iVar15 * -0xc + 0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  piVar1[7] = iVar12;
  iVar12 = -1;
  iVar7 = -1;
  if (uVar13 < 0xb) {
    iVar7 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  piVar1[8] = iVar7;
  iVar7 = -iVar6 + 9;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = -iVar6 + 0x15 + iVar15 * -0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 < 0xb) {
    iVar12 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  iVar7 = 10 - iVar6;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = iVar7 + iVar15 * -0xc + 0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  piVar1[9] = iVar12;
  iVar12 = -1;
  iVar7 = -1;
  if (uVar13 < 0xb) {
    iVar7 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  piVar1[10] = iVar7;
  iVar7 = -iVar6 + 0xb;
  iVar15 = ((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f);
  uVar20 = iVar7 + iVar15 * -0xc;
  uVar13 = -iVar6 + 0x17 + iVar15 * -0xc;
  if (-1 < (int)uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 < 0xb) {
    iVar12 = *(int *)(&g_02411f78 + (int64_t)(int)uVar13 * 4);
  }
  piVar1[0xb] = iVar12;
  pcVar2 = *(char **)(local_40 + 0x10);
  if ((*pcVar2 != '\0') && (**(char **)(local_40 + 0x10) != '\0')) {
    **(void**)(local_40 + 0x10) = 0;
    **(void**)(local_40 + 0x10) = 1;
  }
  if ((pcVar2[1] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 1) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 4) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 1) = 1;
  }
  if ((pcVar2[2] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 2) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 8) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 2) = 1;
  }
  if ((pcVar2[3] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 3) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0xc) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 3) = 1;
  }
  if ((pcVar2[4] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 4) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x10) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 4) = 1;
  }
  if ((pcVar2[5] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 5) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x14) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 5) = 1;
  }
  if ((pcVar2[6] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 6) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x18) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 6) = 1;
  }
  if ((pcVar2[7] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 7) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x1c) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 7) = 1;
  }
  if ((pcVar2[8] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 8) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x20) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 8) = 1;
  }
  if ((pcVar2[9] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 9) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x24) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 9) = 1;
  }
  if ((pcVar2[10] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 10) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x28) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 10) = 1;
  }
  if ((pcVar2[0xb] != '\0') && (*(char *)(*(int64_t *)(local_40 + 0x10) + 0xb) != '\0')) {
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0x2c) = 0;
    *(void*)(*(int64_t *)(local_40 + 0x10) + 0xb) = 1;
  }
  uVar14 = 1;
  uVar21 = 0xb;
  lVar24 = 0;
  do {
    lVar9 = lVar24 + 1;
    if ((pcVar2[lVar24] != '\0') &&
       (lVar10 = *(int64_t *)(local_40 + 0x10), *(int *)(lVar10 + lVar24 * 4) == -1000000)) {
      uVar22 = uVar14 / 0xc;
      uVar17 = uVar21 / 0xc;
      if ((pcVar2[lVar24 + uVar17 * -0xc + 0xb] == '\0') ||
         (((*(int *)(uVar17 * -0x30 + 0x2c + lVar10 + lVar24 * 4) == -1000000 ||
           (lVar18 = uVar22 * -0xc + 1,
           *(char *)(lVar24 + *(int64_t *)(local_40 + 0x10) + lVar18) == '\0')) ||
          (*(char *)(lVar24 + *(int64_t *)(local_40 + 0x10) + lVar18) != '\0')))) {
        if ((((pcVar2[lVar24 + uVar22 * -0xc + 1] == '\0') ||
             (*(int *)(uVar22 * -0x30 + 4 + lVar10 + lVar24 * 4) == -1000000)) ||
            (lVar18 = uVar17 * -0xc + 0xb,
            *(char *)(lVar24 + *(int64_t *)(local_40 + 0x10) + lVar18) == '\0')) ||
           (*(char *)(lVar24 + lVar18 + *(int64_t *)(local_40 + 0x10)) != '\0')) goto LAB_01740d90;
        uVar13 = (int)lVar24 + 0xb;
        puVar23 = (void*)
                  (*(int64_t *)(local_40 + 0x10) +
                  (uint64_t)(byte)((char)uVar13 + ((byte)((uVar13 & 0xff) / 3) & 0xfc) * -3));
        uVar16 = 0xffffffff;
      }
      else {
        puVar23 = (void*)(*(int64_t *)(local_40 + 0x10) + lVar18 + lVar24);
        uVar16 = 1;
      }
      *(void*)(lVar10 + lVar24 * 4) = uVar16;
      *puVar23 = 1;
    }
LAB_01740d90:
    uVar14 = uVar14 + 1;
    uVar21 = uVar21 + 1;
    lVar24 = lVar9;
  } while (lVar9 != 0xc);
  pcVar3 = *(char **)(local_40 + 0x10);
  uVar14 = 1;
  uVar21 = 0xb;
  lVar24 = 0;
  do {
    lVar9 = lVar24 + 1;
    if ((pcVar3[lVar24] != '\0') &&
       (lVar10 = *(int64_t *)(local_40 + 0x10), *(char *)(lVar10 + lVar24) == '\0')) {
      uVar22 = uVar14 / 0xc;
      uVar17 = uVar21 / 0xc;
      if ((pcVar3[lVar24 + uVar17 * -0xc + 0xb] == '\0') ||
         (((*(char *)(lVar24 + 0xb + uVar17 * -0xc + lVar10) == '\0' ||
           (pcVar2[lVar24 + uVar22 * -0xc + 1] == '\0')) ||
          (lVar18 = uVar22 * -0x30 + 4 + *(int64_t *)(local_40 + 0x10),
          *(int *)(lVar18 + lVar24 * 4) != -1000000)))) {
        if (((pcVar3[lVar24 + uVar22 * -0xc + 1] == '\0') ||
            (*(char *)(lVar24 + uVar22 * -0xc + 1 + lVar10) == '\0')) ||
           ((pcVar2[lVar24 + uVar17 * -0xc + 0xb] == '\0' ||
            (lVar18 = uVar17 * -0x30 + 0x2c + *(int64_t *)(local_40 + 0x10),
            *(int *)(lVar18 + lVar24 * 4) != -1000000)))) goto LAB_01740f10;
        *(void*)(lVar18 + lVar24 * 4) = 1;
      }
      else {
        *(void*)(lVar18 + lVar24 * 4) = 0xffffffff;
      }
      *(void*)(lVar10 + lVar24) = 1;
    }
LAB_01740f10:
    uVar14 = uVar14 + 1;
    uVar21 = uVar21 + 1;
    lVar24 = lVar9;
  } while (lVar9 != 0xc);
  lVar24 = 0;
  do {
    iVar6 = piVar1[lVar24];
    if (((iVar6 != 0) && (pcVar2[lVar24] != '\0')) &&
       (*(int *)(*(int64_t *)(local_40 + 0x10) + lVar24 * 4) == -1000000)) {
      iVar7 = (int)lVar24 + iVar6 + 0xc;
      lVar9 = (int64_t)
              (int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc);
      if ((pcVar3[lVar9] != '\0') &&
         (lVar10 = *(int64_t *)(local_40 + 0x10), *(char *)(lVar10 + lVar9) == '\0')) {
        *(int *)(*(int64_t *)(local_40 + 0x10) + lVar24 * 4) = iVar6;
        *(void*)(lVar10 + lVar9) = 1;
      }
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0xc);
  uVar14 = 1;
  uVar21 = 0xb;
  lVar24 = 0;
  do {
    lVar9 = lVar24 + 1;
    if ((pcVar2[lVar24] != '\0') &&
       (*(int *)(*(int64_t *)(local_40 + 0x10) + lVar24 * 4) == -1000000)) {
      uVar17 = uVar14 / 3 & 0xfffffffffffffffc;
      if (pcVar3[lVar24 + uVar17 * -3 + 1] == '\0') {
LAB_01741143:
        uVar17 = uVar21 / 3 & 0xfffffffffffffffc;
        if ((pcVar3[lVar24 + uVar17 * -3 + 0xb] == '\0') ||
           (*(char *)(lVar24 + 0xb + uVar17 * -3 + *(int64_t *)(local_40 + 0x10)) != '\0'))
        goto LAB_017410d0;
        uVar13 = (int)lVar24 + 0xb;
        puVar23 = (void*)
                  (*(int64_t *)(local_40 + 0x10) +
                  (uint64_t)(byte)((char)uVar13 + ((byte)((uVar13 & 0xff) / 3) & 0xfc) * -3));
        uVar16 = 0xffffffff;
      }
      else {
        lVar10 = uVar17 * -3 + 1;
        if (*(char *)(lVar24 + *(int64_t *)(local_40 + 0x10) + lVar10) != '\0') goto LAB_01741143;
        puVar23 = (void*)(*(int64_t *)(local_40 + 0x10) + lVar10 + lVar24);
        uVar16 = 1;
      }
      *(void*)(*(int64_t *)(local_40 + 0x10) + lVar24 * 4) = uVar16;
      *puVar23 = 1;
    }
LAB_017410d0:
    uVar14 = uVar14 + 1;
    uVar21 = uVar21 + 1;
    lVar24 = lVar9;
  } while (lVar9 != 0xc);
  piVar4 = *(int **)(local_40 + 0x10);
  if (*piVar4 == -1000000) {
    iVar6 = 0;
    if (*pcVar3 == '\0') {
      iVar6 = *piVar1;
      iVar7 = iVar6 + 0xc;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_017411eb;
    }
    *piVar4 = iVar6;
  }
LAB_017411eb:
  if (piVar4[1] == -1000000) {
    iVar6 = 0;
    if (pcVar3[1] == '\0') {
      iVar6 = piVar1[1];
      iVar7 = iVar6 + 0xd;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_01741237;
    }
    piVar4[1] = iVar6;
  }
LAB_01741237:
  if (piVar4[2] == -1000000) {
    iVar6 = 0;
    if (pcVar3[2] == '\0') {
      iVar6 = piVar1[2];
      iVar7 = iVar6 + 0xe;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_0174127b;
    }
    piVar4[2] = iVar6;
  }
LAB_0174127b:
  if (piVar4[3] == -1000000) {
    iVar6 = 0;
    if (pcVar3[3] == '\0') {
      iVar6 = piVar1[3];
      iVar7 = iVar6 + 0xf;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_017412c7;
    }
    piVar4[3] = iVar6;
  }
LAB_017412c7:
  if (piVar4[4] == -1000000) {
    iVar6 = 0;
    if (pcVar3[4] == '\0') {
      iVar6 = piVar1[4];
      iVar7 = iVar6 + 0x10;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_0174130f;
    }
    piVar4[4] = iVar6;
  }
LAB_0174130f:
  if (piVar4[5] == -1000000) {
    iVar6 = 0;
    if (pcVar3[5] == '\0') {
      iVar6 = piVar1[5];
      iVar7 = iVar6 + 0x11;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_01741357;
    }
    piVar4[5] = iVar6;
  }
LAB_01741357:
  if (piVar4[6] == -1000000) {
    iVar6 = 0;
    if (pcVar3[6] == '\0') {
      iVar6 = piVar1[6];
      iVar7 = iVar6 + 0x12;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_0174139f;
    }
    piVar4[6] = iVar6;
  }
LAB_0174139f:
  if (piVar4[7] == -1000000) {
    iVar6 = 0;
    if (pcVar3[7] == '\0') {
      iVar6 = piVar1[7];
      iVar7 = iVar6 + 0x13;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_017413e7;
    }
    piVar4[7] = iVar6;
  }
LAB_017413e7:
  if (piVar4[8] == -1000000) {
    iVar6 = 0;
    if (pcVar3[8] == '\0') {
      iVar6 = piVar1[8];
      iVar7 = iVar6 + 0x14;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_0174142f;
    }
    piVar4[8] = iVar6;
  }
LAB_0174142f:
  if (piVar4[9] == -1000000) {
    iVar6 = 0;
    if (pcVar3[9] == '\0') {
      iVar6 = piVar1[9];
      iVar7 = iVar6 + 0x15;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_01741477;
    }
    piVar4[9] = iVar6;
  }
LAB_01741477:
  if (piVar4[10] == -1000000) {
    iVar6 = 0;
    if (pcVar3[10] == '\0') {
      iVar6 = piVar1[10];
      iVar7 = iVar6 + 0x16;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_017414bf;
    }
    piVar4[10] = iVar6;
  }
LAB_017414bf:
  if (piVar4[0xb] == -1000000) {
    iVar6 = 0;
    if (pcVar3[0xb] == '\0') {
      iVar6 = piVar1[0xb];
      iVar7 = iVar6 + 0x17;
      if (pcVar3[(int)(iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc
                      )] == '\0') goto LAB_01741507;
    }
    piVar4[0xb] = iVar6;
  }
LAB_01741507:
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return this_ptr;
}

