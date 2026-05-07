// Function: FUN_01d3ce20
// Address: 01d3ce20
// Size: 802 bytes
// Class: Unknown

void FUN_01d3ce20(void)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  void*puVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  bool bVar11;
  bool bVar12;
  
  if ((g_028b80e0 == (void*)0x0) || (g_028b80e9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b80e0 == (void*)0x0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      pcVar3 = g_02572370;
      (*g_02572370)();
      if (g_028b80e0 == puVar6) {
        bVar2 = false;
        bVar12 = false;
      }
      else {
        bVar2 = true;
        bVar12 = true;
        bVar11 = g_028b80e0 != (void*)0x0;
        g_028b80e0 = puVar6;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028b80e8 == '\0') {
        g_028b80e8 = '\x01';
        FUN_00e8cb90();
        bVar12 = bVar2;
      }
      if (!bVar12) {
        FUN_00d50b20();
      }
      lVar7 = FUN_01d42d20();
      lVar7 = *(int64_t *)(lVar7 + 0x20);
      if (lVar7 != 0) {
        FUN_00d50b00();
        iVar4 = -1;
        while( true ) {
          iVar4 = iVar4 + 1;
          iVar9 = *(int *)(lVar7 + 0x18);
          iVar8 = iVar9 + 3;
          if (-1 < iVar9) {
            iVar8 = iVar9;
          }
          if (iVar8 >> 2 <= iVar4) break;
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_02572358;
          (*pcVar3)();
          FUN_00d21140();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      g_028b80e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b80e9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b80f0 == (void*)0x0) || (g_028b80f9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b80f0 == (void*)0x0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*g_02572370)();
      bVar12 = g_028b80f0 == (void*)0x0;
      g_028b80f0 = puVar6;
      if (((bVar12) || (FUN_00d50b20(), g_028b80f0 != (void*)0x0)) &&
         (g_028b80f8 == '\0')) {
        g_028b80f8 = '\x01';
        FUN_00e8cb90();
      }
      g_028b80f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b80f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  iVar4 = FUN_00d23d20();
  if (iVar4 == -1) {
    lVar7 = FUN_01d42d20();
    lVar7 = *(int64_t *)(lVar7 + 0x20);
    if (lVar7 != 0) {
      FUN_00d50b00();
      if (3 < *(int *)(lVar7 + 0x18)) {
        lVar10 = 0;
        do {
          uVar1 = *(uint *)(*(int64_t *)(lVar7 + 0x10) + lVar10 * 4);
          uVar5 = FUN_00df2b30();
          if ((uVar5 >> (uVar1 & 0x1f) & 1) != 0) {
            FUN_00d21140();
          }
          iVar4 = *(int *)(lVar7 + 0x18);
          iVar9 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar9 = iVar4;
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < iVar9 >> 2);
      }
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d23620();
  }
  return;
}

