// Function: FUN_0029f2f0
// Address: 0029f2f0
// Size: 662 bytes
// Class: Unknown

uint64_t FUN_0029f2f0(void)

{
  int iVar1;
  void*puVar2;
  int iVar3;
  void*arg1;
  uint64_t uVar4;
  bool bVar5;
  
  if ((g_02805dc0 == (void*)0x0) || (g_02805dc9 == '\0')) {
    FUN_00e8cb50();
    if (g_02805dc0 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar5 = g_02805dc0 == (void*)0x0;
      g_02805dc0 = puVar2;
      if (((bVar5) || (FUN_00d50b20(), g_02805dc0 != (void*)0x0)) && (g_02805dc8 == '\0')
         ) {
        g_02805dc8 = '\x01';
        FUN_00e8cb90();
      }
      puVar2 = g_02805dc0;
      iVar1 = *(int *)(g_02805dc0 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar1) = 0xb6ce81a1;
      puVar2 = g_02805dc0;
      iVar1 = *(int *)(g_02805dc0 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar1) = 0xe5b68b25;
      puVar2 = g_02805dc0;
      iVar1 = *(int *)(g_02805dc0 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar1) = 0xb88e7c22;
      puVar2 = g_02805dc0;
      iVar1 = *(int *)(g_02805dc0 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar1) = 0x2659e7d8;
      puVar2 = g_02805dc0;
      iVar1 = *(int *)(g_02805dc0 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar1) = 0x7b6a0725;
      g_02805dc9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02805dc9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (g_02805dc0 == (void*)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar1 = *(int *)(g_02805dc0 + 3);
    iVar3 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    if (0 < iVar3 >> 2) {
      iVar1 = *(int *)g_02805dc0[2];
      if (arg1 != (void*)0x0) {
        *arg1 = 1;
      }
      if (iVar1 < -0x1a4974db) {
        if (iVar1 == -0x49317e5f) {
          return 0x18;
        }
        if (iVar1 == -0x477183de) {
          return 0x19;
        }
      }
      else {
        if (iVar1 == -0x1a4974db) {
          return 0x16;
        }
        if (iVar1 == 0x2659e7d8) {
          return 0x1b;
        }
      }
      uVar4 = 0x1d;
      if (iVar1 != 0x7b6a0725) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

