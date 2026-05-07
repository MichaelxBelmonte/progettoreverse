// Function: FUN_00c26750
// Address: 00c26750
// Size: 817 bytes
// Class: GNOverloudConvolver

void FUN_00c26750(void)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  void*puVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  uint64_t extraout_XMM0_Qa;
  int64_t local_50;
  char local_48;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  FUN_01d3a560();
  if (local_48 == '\0') {
    if (local_50 == 0) goto LAB_00c26801;
    FUN_00d50b00();
LAB_00c267ec:
    uVar6 = FUN_01d3b590();
    if ((uVar6 & 8) != 0) {
      plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      dVar1 = *(double *)(*plVar7 + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(*plVar7,1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 0;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[1] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[1],1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 1;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[2] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[2],1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 2;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[3] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[3],1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 3;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[4] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(dVar1,1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 4;
      }
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_00c26a67;
    }
    bVar3 = false;
  }
  else {
    if (local_50 != 0) goto LAB_00c267ec;
LAB_00c26801:
    bVar3 = true;
  }
  iVar4 = FUN_00d8c7a0();
  FUN_00d8f140(extraout_XMM0_Qa,iVar4 + -1);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  iVar4 = FUN_00c716c0();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  dVar1 = *(double *)
           (*(int64_t *)
             (*(int64_t *)(*(int64_t *)(*arg1 + 200) + 0x10) + (int64_t)iVar4 * 8) + 0x20);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    iVar2 = *(int *)(puVar5 + 3);
    FUN_00c8e340((int64_t)iVar4,1);
    *(int *)(puVar5[2] + (int64_t)iVar2) = iVar4;
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  if (bVar3) {
    return;
  }
LAB_00c26a67:
  FUN_00d50b20();
  return;
}

