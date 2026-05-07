// Function: FUN_00e8f2a0
// Address: 00e8f2a0
// Size: 548 bytes
// Class: GNValue

void FUN_00e8f2a0(uint64_t *param_1)

{
  ushort uVar1;
  void*puVar2;
  void *pvVar3;
  uint64_t uVar4;
  size_t sVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  uint64_t uVar8;
  void*puVar9;
  uint64_t uVar10;
  uint8_t uVar11;
  uint64_t uVar12;
  
  FUN_00e8f270();
  if (g_028026c8 == '\0') {
    param_1 = &g_023e1a30;
    puVar9 = &g_028026ec;
    uVar10 = 0;
    do {
      *(void*)(puVar9 + -0x1c) = 0;
      if (uVar10 < 0x10) {
        uVar8 = *param_1;
        uVar11 = 1;
        uVar12 = uVar8;
        if (uVar8 < 0xffe1) {
          uVar4 = 0xffe0 / (uVar8 & 0xffffffff);
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar8 = *(uint64_t *)(&g_023e1ab0 + (uint64_t)((int)uVar10 - 0x10) * 8);
        uVar12 = uVar8 - 0x10;
        if (uVar8 < 0x10001) {
          uVar11 = 0;
          uVar4 = 0x10000 / (uVar8 & 0xffffffff);
        }
        else {
          uVar4 = 0;
          uVar11 = 0;
        }
      }
      *(uint64_t *)(puVar9 + -0x14) = uVar8;
      *(uint64_t *)(puVar9 + -0xc) = uVar12;
      uVar1 = (ushort)uVar4;
      *(ushort *)(puVar9 + -4) = uVar1;
      *puVar9 = uVar11;
      if (uVar1 < 8) {
        uVar7 = 1;
      }
      else {
        uVar7 = (uint16_t)((uVar4 & 0xffff) >> 2);
      }
      uVar6 = 0x10;
      if (uVar1 < 0x40) {
        uVar6 = uVar7;
      }
      *(void*)(puVar9 + -2) = uVar6;
      uVar10 = uVar10 + 1;
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 0x38;
    } while (uVar10 != 0x23);
    g_028026c8 = '\x01';
  }
  sVar5 = (size_t)param_1;
  if (g_02802e80 == 0) {
    g_02802e80 = 0x10000;
    g_02802e88 = 0xaa9;
  }
  puVar2 = _malloc(sVar5);
  if (puVar2 == (void*)0x0) {
    FUN_00e8f250();
  }
  *puVar2 = 0;
  *(void*)(puVar2 + 1) = 0;
  g_028026a8 = puVar2;
  puVar2 = _malloc(sVar5);
  if (puVar2 == (void*)0x0) {
    FUN_00e8f250();
  }
  *puVar2 = 0;
  *(void*)(puVar2 + 1) = 0;
  *(void*)((int64_t)puVar2 + 0xc) = 0;
  g_028026b0 = puVar2;
  FUN_00e31530();
  puVar2 = _malloc(sVar5);
  if (puVar2 == (void*)0x0) {
    FUN_00e8f250();
  }
  *puVar2 = 0;
  *(void*)(puVar2 + 1) = 0;
  *(void*)((int64_t)puVar2 + 0xc) = 0;
  g_028026b8 = puVar2;
  FUN_00e31530();
  FUN_00e31530();
  pvVar3 = _malloc(sVar5);
  if (pvVar3 == (void *)0x0) {
    FUN_00e8f250();
  }
  FUN_00e91180();
  g_028026a0 = pvVar3;
  FUN_00e39b30();
  return;
}

