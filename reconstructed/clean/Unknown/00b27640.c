// Function: FUN_00b27640
// Address: 00b27640
// Size: 566 bytes
// Class: Unknown

uint64_t FUN_00b27640(size_t param_1,int64_t param_2)

{
  void *pvVar1;
  uint64_t uVar2;
  uint64_t arg1;
  int unaff_EDI;
  double dVar3;
  double dVar4;
  uint8_t auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  auVar5._8_4_ = (int)((uint64_t)arg1 >> 0x20);
  auVar5._0_8_ = arg1;
  auVar5._12_4_ = _UNK_023e16c4;
  dVar6 = (auVar5._8_8_ - _UNK_023e16d8) +
          ((double)CONCAT44(g_023e16c0,(int)arg1) - g_023e16d0);
  dVar3 = (double)_tan(g_023d5950 / dVar6);
  dVar8 = dVar3 * dVar3;
  dVar7 = dVar3 / g_023d5958 + g_0238fee8 + dVar8;
  dVar4 = (dVar3 * g_023d5960) / g_023d5958;
  dVar11 = (dVar4 + g_023d5968 + dVar8) / dVar7;
  dVar12 = (g_023d5970 + dVar8 + g_023d5970 + dVar8) / dVar7;
  dVar4 = ((g_023d5968 - dVar4) + dVar8) / dVar7;
  dVar9 = (dVar8 + g_023b19a0 + dVar8 + g_023b19a0) / dVar7;
  dVar7 = ((g_0238fee8 - dVar3 / g_023d5958) + dVar8) / dVar7;
  dVar3 = (double)_tan(g_023d5978 / dVar6);
  dVar6 = dVar3 * dVar3;
  dVar8 = dVar3 / g_023d5980 + g_0238fee8 + dVar6;
  dVar10 = (g_023b19a0 + dVar6 + g_023b19a0 + dVar6) / dVar8;
  dVar8 = ((g_0238fee8 - dVar3 / g_023d5980) + dVar6) / dVar8;
  *(double *)(param_2 + 0x30) = dVar11;
  *(double *)(param_2 + 0x38) = dVar12 - (dVar11 + dVar11);
  *(double *)(param_2 + 0x40) = (dVar11 - (dVar12 + dVar12)) + dVar4;
  *(double *)(param_2 + 0x48) = dVar12 - (dVar4 + dVar4);
  *(double *)(param_2 + 0x50) = dVar4;
  *(void*)(param_2 + 0x58) = 0x3ff0000000000000;
  *(double *)(param_2 + 0x60) = dVar9 + dVar10;
  *(double *)(param_2 + 0x68) = dVar9 * dVar10 + dVar8 + dVar7;
  *(double *)(param_2 + 0x70) = dVar10 * dVar7 + dVar9 * dVar8;
  *(double *)(param_2 + 0x78) = dVar8 * dVar7;
  pvVar1 = _malloc(param_1);
  *(void **)(param_2 + 0x80) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (0 < unaff_EDI) {
      ___bzero();
    }
  }
  return uVar2;
}

