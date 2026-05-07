// Function: FUN_012c2190
// Address: 012c2190
// Size: 918 bytes
// Class: Unknown

void FUN_012c2190(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  int64_t local_48;
  char local_40;
  
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = g_028ac750;
  if (g_028ac750 == local_48) {
    bVar3 = false;
    bVar2 = false;
  }
  else {
    g_028ac750 = local_48;
    bVar3 = true;
    bVar2 = true;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (g_028ac758 == '\0') {
    g_028ac758 = '\x01';
    FUN_00e8cb90();
    bVar2 = bVar3;
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = g_028ac760;
  if (g_028ac760 == local_48) {
    bVar3 = false;
    bVar2 = false;
  }
  else {
    g_028ac760 = local_48;
    bVar3 = true;
    bVar2 = true;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (g_028ac768 == '\0') {
    g_028ac768 = '\x01';
    FUN_00e8cb90();
    bVar2 = bVar3;
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(g_028ac750 + 0x10);
  uVar6 = 1;
  dVar10 = g_0238fee8;
  do {
    dVar11 = dVar10 * g_0240d1d8;
    fVar9 = g_02390124 / (float)(int)uVar6;
    if (uVar6 < 0xb) {
      lVar5 = *(int64_t *)(g_028ac760 + 0x10);
      dVar8 = 0.0;
      lVar4 = 0;
      do {
        dVar7 = (double)_sin(dVar8);
        *(float *)(lVar1 + lVar4 * 4) = *(float *)(lVar1 + lVar4 * 4) + (float)dVar7 * fVar9;
        *(float *)(lVar5 + lVar4 * 4) = (float)dVar7 * fVar9 + *(float *)(lVar5 + lVar4 * 4);
        dVar7 = (double)_sin(dVar8 + dVar11);
        *(float *)(lVar1 + 4 + lVar4 * 4) = *(float *)(lVar1 + 4 + lVar4 * 4) + (float)dVar7 * fVar9
        ;
        *(float *)(lVar5 + 4 + lVar4 * 4) = (float)dVar7 * fVar9 + *(float *)(lVar5 + 4 + lVar4 * 4)
        ;
        dVar8 = dVar8 + dVar11 + dVar11;
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0x4000);
    }
    else {
      dVar8 = 0.0;
      lVar5 = 0;
      do {
        dVar7 = (double)_sin(dVar8);
        *(float *)(lVar1 + lVar5 * 4) = (float)dVar7 * fVar9 + *(float *)(lVar1 + lVar5 * 4);
        dVar7 = (double)_sin(dVar8 + dVar11);
        *(float *)(lVar1 + 4 + lVar5 * 4) = (float)dVar7 * fVar9 + *(float *)(lVar1 + 4 + lVar5 * 4)
        ;
        dVar8 = dVar8 + dVar11 + dVar11;
        lVar5 = lVar5 + 2;
      } while (lVar5 != 0x4000);
    }
    dVar10 = dVar10 + g_0238fee8;
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x191);
  uVar6 = (**(code **)(g_02786500 + 0x10))();
  if (g_02394274 <= (float)(uVar6 & g_02390140)) {
    fVar9 = g_02390124 / (float)(uVar6 & g_02390140);
    (**(code **)(g_02786500 + 0x20))(fVar9);
    (**(code **)(g_02786500 + 0x20))(fVar9);
  }
  return;
}

