// Function: FUN_016fafa0
// Address: 016fafa0
// Size: 1477 bytes
// Class: Unknown

void* FUN_016fafa0(double *param_1,uint64_t param_2,void*param_3)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  void *pvVar6;
  uint64_t uVar7;
  int extraout_var;
  uint64_t uVar8;
  void*puVar9;
  void* pVar10;
  int iVar11;
  int64_t lVar12;
  void*this_ptr;
  size_t sVar13;
  void*puVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  double dVar18;
  double dVar19;
  double extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  double dVar20;
  uint64_t extraout_XMM0_Qa_07;
  double dVar21;
  int iStack_64;
  uint local_3c;
  
  sVar13 = (size_t)param_3;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar10 = 0x25683c0;
  *puVar5 = &g_025683c0;
  pcVar2 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_3c = 1;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_0190a000();
  dVar18 = (double)FUN_016f5440();
  FUN_00e7bdb0();
  uVar8 = FUN_016f5090();
  pvVar6 = (void *)(uVar8 >> 0x20);
  iStack_64 = extraout_var;
  if (pvVar6 != (void *)0x0) {
    FUN_00e7bac0();
    iStack_64 = (int)(uVar8 >> 0x20);
  }
  dVar20 = dVar18;
  if (g_02394de0 <= dVar18) {
    dVar20 = g_02394de0;
  }
  do {
    dVar19 = (double)FUN_00e7c860();
    FUN_00e7c3c0();
    dVar21 = dVar20;
    if ((((dVar19 * dVar18) / (double)(int)local_3c < dVar20) ||
        ((iStack_64 != 0 && (cVar3 = FUN_00e7c6b0(), dVar21 = extraout_XMM0_Qa, cVar3 == '\0')))) &&
       (1 < (int)local_3c)) break;
    iVar4 = *(int *)(puVar5 + 3);
    FUN_00c8e340(dVar21,1);
    *(void*)(puVar5[2] + (int64_t)iVar4) = uVar7;
    pvVar6 = (void *)(uint64_t)(local_3c + 1);
    bVar1 = (int)local_3c < 8;
    local_3c = local_3c + 1;
  } while (bVar1);
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  uVar7 = FUN_00e7bcc0();
  iVar4 = *(int *)(puVar9 + 3);
  FUN_00c8e340(extraout_XMM0_Qa_00,1);
  *(void*)(puVar9[2] + (int64_t)iVar4) = uVar7;
  uVar7 = FUN_00e7bcc0();
  iVar4 = *(int *)(puVar9 + 3);
  FUN_00c8e340(extraout_XMM0_Qa_01,1);
  *(void*)(puVar9[2] + (int64_t)iVar4) = uVar7;
  uVar7 = FUN_00e7bcc0();
  iVar4 = *(int *)(puVar9 + 3);
  FUN_00c8e340(extraout_XMM0_Qa_02,1);
  *(void*)(puVar9[2] + (int64_t)iVar4) = uVar7;
  uVar7 = FUN_00e7bcc0();
  iVar4 = *(int *)(puVar9 + 3);
  FUN_00c8e340(extraout_XMM0_Qa_03,1);
  *(void*)(puVar9[2] + (int64_t)iVar4) = uVar7;
  uVar7 = FUN_00e7bcc0();
  iVar4 = *(int *)(puVar9 + 3);
  FUN_00c8e340(extraout_XMM0_Qa_04,1);
  *(void*)(puVar9[2] + (int64_t)iVar4) = uVar7;
  uVar7 = FUN_00e7bcc0();
  iVar4 = *(int *)(puVar9 + 3);
  FUN_00c8e340(extraout_XMM0_Qa_05,1);
  *(void*)(puVar9[2] + (int64_t)iVar4) = uVar7;
  uVar7 = FUN_00e7bcc0();
  iVar4 = *(int *)(puVar9 + 3);
  FUN_00c8e340(extraout_XMM0_Qa_06,1);
  *(void*)(puVar9[2] + (int64_t)iVar4) = uVar7;
  if (7 < *(int *)(puVar9 + 3)) {
    dVar20 = dVar20 * g_023942d0;
    lVar16 = 0;
    do {
      if ((7 < *(int *)(puVar5 + 3)) && (*(int *)(puVar9[2] + 4 + lVar16 * 8) != 0)) {
        lVar17 = 0;
        lVar15 = 0;
        do {
          if (*(int *)(puVar9[2] + 4 + lVar16 * 8) != 0) {
            lVar12 = puVar5[2];
            if (*(int *)(lVar12 + 4 + lVar17) != 0) {
              cVar3 = FUN_00e7c000();
              if (cVar3 != '\0') goto LAB_016fb38c;
              if (*(int *)(puVar9[2] + 4 + lVar16 * 8) == 0) goto LAB_016fb3d0;
              lVar12 = puVar5[2];
            }
            if ((*(int *)(lVar12 + 4 + lVar17) != 0) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
              lVar15 = puVar9[2];
              iVar4 = *(int *)(puVar5 + 3);
              FUN_00c8e340(extraout_XMM0_Qa_07,1);
              puVar14 = (void*)(puVar5[2] + lVar17);
              _memmove(pvVar6,(void *)(iVar4 - lVar17),sVar13);
              goto LAB_016fb380;
            }
          }
LAB_016fb3d0:
          lVar15 = lVar15 + 1;
          iVar4 = *(int *)(puVar5 + 3);
          iVar11 = iVar4 + 7;
          if (-1 < iVar4) {
            iVar11 = iVar4;
          }
          pvVar6 = (void *)(uint64_t)(uint)(iVar11 >> 3);
          lVar17 = lVar17 + 8;
        } while (lVar15 < iVar11 >> 3);
      }
      dVar21 = (double)FUN_00e7c860();
      if (dVar20 < dVar21 * dVar18) {
        lVar15 = puVar9[2];
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(dVar21 * dVar18,1);
        puVar14 = (void*)((int64_t)iVar4 + puVar5[2]);
LAB_016fb380:
        *puVar14 = *(void*)(lVar15 + lVar16 * 8);
      }
LAB_016fb38c:
      lVar16 = lVar16 + 1;
      iVar4 = *(int *)(puVar9 + 3);
      iVar11 = iVar4 + 7;
      if (-1 < iVar4) {
        iVar11 = iVar4;
      }
      pvVar6 = (void *)(uint64_t)(uint)(iVar11 >> 3);
    } while (lVar16 < iVar11 >> 3);
  }
  if (param_1 != (double *)0x0) {
    *param_1 = dVar18;
  }
  if ((param_3 == (void*)0x0) || (iVar4 = *(int *)(puVar5 + 3), iVar4 < 8)) {
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar16 = 0;
    lVar15 = 0;
    do {
      if (*(int *)(puVar5[2] + 4 + lVar16) != 0) {
        cVar3 = FUN_00e7c630();
        if (cVar3 != '\0') {
          *param_3 = (int)lVar15;
          break;
        }
        iVar4 = *(int *)(puVar5 + 3);
      }
      lVar15 = lVar15 + 1;
      iVar11 = iVar4 + 7;
      if (-1 < iVar4) {
        iVar11 = iVar4;
      }
      lVar16 = lVar16 + 8;
    } while (lVar15 < iVar11 >> 3);
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    if (puVar9 == (void*)0x0) {
      return this_ptr;
    }
  }
  FUN_00d50b20();
  return this_ptr;
}

