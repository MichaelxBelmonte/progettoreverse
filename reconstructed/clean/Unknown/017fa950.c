// Function: FUN_017fa950
// Address: 017fa950
// Size: 623 bytes
// Class: Unknown

void FUN_017fa950(void)

{
  int iVar1;
  void*puVar2;
  bool bVar3;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  bVar3 = g_028af788 != (void*)0x0;
  g_028af788 = puVar2;
  if (bVar3) {
    FUN_00d50b20();
    if (g_028af788 == (void*)0x0) goto LAB_017fa9e1;
  }
  if (g_028af790 == '\0') {
    g_028af790 = '\x01';
    FUN_00e8cb90();
  }
LAB_017fa9e1:
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 0;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 1;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 2;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 3;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 4;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 5;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 6;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 7;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 8;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 9;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 10;
  puVar2 = g_028af788;
  iVar1 = *(int *)(g_028af788 + 3);
  FUN_00c8e340();
  *(void*)(puVar2[2] + (int64_t)iVar1) = 0xb;
  return;
}

