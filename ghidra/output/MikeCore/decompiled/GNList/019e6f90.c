// Function: FUN_019e6f90
// Address: 019e6f90
// Size: 601 bytes
// Class: GNList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019e6f90(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  float *in_RDX;
  double *unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  longlong lVar10;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar9;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined4)param_2;
  lVar9 = (**(code **)(*unaff_RDI + 0xa98))();
  fVar11 = (float)((ulonglong)lVar9 >> 0x20);
  fVar6 = (float)lVar9;
  dVar1 = (double)(**(code **)(*unaff_RDI + 0xa50))();
  dVar2 = (double)CONCAT44(uVar13,uVar12);
  fVar7 = (float)(**(code **)(*unaff_RDI + 0x938))();
  fVar8 = (float)(**(code **)(*unaff_RDI + 0x938))(SUB84(*unaff_RSI,0));
  if ((float)((uint)(fVar7 - fVar8) & _DAT_02390140) < DAT_02390d34) {
    fVar7 = (float)(**(code **)(*unaff_RDI + 0x938))(SUB84(dVar1 + dVar2,0));
    fVar8 = (float)(**(code **)(*unaff_RDI + 0x938))(SUB84(*unaff_RSI + unaff_RSI[1],0));
    if ((float)((uint)(fVar7 - fVar8) & _DAT_02390140) < DAT_02390d34) {
      fVar7 = (float)(**(code **)(*unaff_RDI + 0xbf8))(fVar6);
      fVar8 = (float)(**(code **)(*unaff_RDI + 0xbf8))(*in_RDX);
      if ((float)((uint)(fVar7 - fVar8) & _DAT_02390140) < DAT_02390d34) {
        fVar7 = (float)(**(code **)(*unaff_RDI + 0xbf8))(fVar6 + fVar11);
        fVar8 = (float)(**(code **)(*unaff_RDI + 0xbf8))(*in_RDX + in_RDX[1]);
        if ((float)((uint)(fVar7 - fVar8) & _DAT_02390140) < DAT_02390d34) {
          return;
        }
      }
    }
  }
  uVar4 = -(uint)(*in_RDX != fVar6) & 1;
  uVar5 = uVar4 + 2;
  if (fVar11 != in_RDX[1]) {
    uVar4 = uVar5;
  }
  if (NAN(fVar11) || NAN(in_RDX[1])) {
    uVar4 = uVar5;
  }
  uVar5 = uVar4;
  if (dVar1 != *unaff_RSI) {
    uVar5 = uVar4 + 4;
  }
  if (NAN(dVar1) || NAN(*unaff_RSI)) {
    uVar5 = uVar4 + 4;
  }
  if ((dVar2 != unaff_RSI[1]) || (NAN(dVar2) || NAN(unaff_RSI[1]))) {
    uVar5 = uVar5 | 8;
  }
  else if (uVar5 == 0) {
    return;
  }
  *(uint *)(unaff_RDI + 0x37) = uVar5;
  unaff_RDI[0x36] = *(longlong *)in_RDX;
  dVar3 = unaff_RSI[1];
  unaff_RDI[0x33] = (longlong)*unaff_RSI;
  unaff_RDI[0x34] = (longlong)dVar3;
  unaff_RDI[0x2d] = param_1;
  unaff_RDI[0x35] = lVar9;
  unaff_RDI[0x31] = (longlong)dVar1;
  unaff_RDI[0x32] = (longlong)dVar2;
  lVar10 = FUN_01e436c0();
  unaff_RDI[0x2f] = lVar10;
  unaff_RDI[0x30] = lVar9;
  lVar9 = FUN_00e7d6f0();
  unaff_RDI[0x2e] = lVar9;
  *(undefined1 *)((longlong)unaff_RDI + 0x1bc) = 1;
  return;
}


