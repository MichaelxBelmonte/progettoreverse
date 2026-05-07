// Function: FUN_0186be40
// Address: 0186be40
// Size: 596 bytes
// Class: Unknown

void FUN_0186be40(uint64_t param_1)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  int extraout_var;
  void *pvVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void* pVar8;
  int iVar9;
  int iVar10;
  int64_t this_ptr;
  int64_t lVar11;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  pcVar2 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar11 = *(int64_t *)(this_ptr + 0x88);
  *(void**)(this_ptr + 0x88) = puVar4;
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  if (0 < *(int *)(this_ptr + 0x34)) {
    iVar10 = 0;
    do {
      pVar8 = (void*)param_1;
      FUN_00e7bcc0();
      FUN_00e7b820();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = 0;
      uVar6 = FUN_016c4630(0,1);
      if (((extraout_var != 0) && (uVar6 >> 0x20 != 0)) && (cVar3 = FUN_00e7c000(), cVar3 != '\0'))
      {
        iVar9 = *(int *)(puVar4 + 3);
        FUN_00c8e340();
        *(int *)(puVar4[2] + (int64_t)iVar9) = iVar10;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(this_ptr + 0x34));
  }
  if (3 < *(int *)(puVar4 + 3)) {
    lVar11 = 0;
    do {
      lVar1 = *(int64_t *)(this_ptr + 0x88);
      uVar7 = FUN_00e7b4e0();
      iVar10 = *(int *)(lVar1 + 0x18);
      FUN_00c8e340();
      lVar11 = lVar11 + 1;
      *(void*)(*(int64_t *)(lVar1 + 0x10) + (int64_t)iVar10) = uVar7;
      iVar10 = *(int *)(puVar4 + 3);
      iVar9 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar9 = iVar10;
      }
    } while (lVar11 < iVar9 >> 2);
  }
  FUN_00d50b20();
  return;
}

