// Function: FUN_00b27640
// Address: 00b27640
// Size: 566 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00b27640(size_t param_1,longlong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  int unaff_EDI;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  auVar5._8_4_ = (int)((ulonglong)unaff_RSI >> 0x20);
  auVar5._0_8_ = unaff_RSI;
  auVar5._12_4_ = _UNK_023e16c4;
  dVar6 = (auVar5._8_8_ - _UNK_023e16d8) +
          ((double)CONCAT44(_DAT_023e16c0,(int)unaff_RSI) - _DAT_023e16d0);
  dVar3 = (double)_tan(DAT_023d5950 / dVar6);
  dVar8 = dVar3 * dVar3;
  dVar7 = dVar3 / DAT_023d5958 + DAT_0238fee8 + dVar8;
  dVar4 = (dVar3 * _DAT_023d5960) / DAT_023d5958;
  dVar11 = (dVar4 + DAT_023d5968 + dVar8) / dVar7;
  dVar12 = (DAT_023d5970 + dVar8 + DAT_023d5970 + dVar8) / dVar7;
  dVar4 = ((DAT_023d5968 - dVar4) + dVar8) / dVar7;
  dVar9 = (dVar8 + DAT_023b19a0 + dVar8 + DAT_023b19a0) / dVar7;
  dVar7 = ((DAT_0238fee8 - dVar3 / DAT_023d5958) + dVar8) / dVar7;
  dVar3 = (double)_tan(DAT_023d5978 / dVar6);
  dVar6 = dVar3 * dVar3;
  dVar8 = dVar3 / _DAT_023d5980 + DAT_0238fee8 + dVar6;
  dVar10 = (DAT_023b19a0 + dVar6 + DAT_023b19a0 + dVar6) / dVar8;
  dVar8 = ((DAT_0238fee8 - dVar3 / _DAT_023d5980) + dVar6) / dVar8;
  *(double *)(param_2 + 0x30) = dVar11;
  *(double *)(param_2 + 0x38) = dVar12 - (dVar11 + dVar11);
  *(double *)(param_2 + 0x40) = (dVar11 - (dVar12 + dVar12)) + dVar4;
  *(double *)(param_2 + 0x48) = dVar12 - (dVar4 + dVar4);
  *(double *)(param_2 + 0x50) = dVar4;
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
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


