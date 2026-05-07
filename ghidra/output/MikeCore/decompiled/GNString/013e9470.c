// Function: FUN_013e9470
// Address: 013e9470
// Size: 674 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013e9470(uint param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  longlong unaff_RSI;
  ulonglong uVar9;
  int iVar10;
  longlong unaff_RDI;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar2 = *(longlong *)(unaff_RDI + 0xe8);
  if ((lVar2 != 0) && (uVar3 = param_1, FUN_00d50b00(), *(longlong *)(unaff_RDI + 0xe8) != 0)) {
    pvVar4 = _pthread_getspecific(uVar3);
    lVar11 = lVar2;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      lVar11 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    dVar12 = (double)*(float *)(lVar11 + 0x60);
    dVar13 = *(double *)(unaff_RDI + 0xf0);
    if ((dVar13 != dVar12) || (NAN(dVar13) || NAN(dVar12))) {
      dVar14 = (double)(_DAT_023908f0 & (ulonglong)(dVar12 - dVar13));
      if (DAT_0240d2e8 <= dVar14) {
        dVar14 = dVar14 / DAT_0240d2e8;
        *(int *)(unaff_RDI + 0x100) = (int)dVar14;
        *(double *)(unaff_RDI + 0xf8) = (dVar12 - dVar13) / (double)(int)dVar14;
      }
      else {
        *(double *)(unaff_RDI + 0xf0) = dVar12;
        *(undefined4 *)(unaff_RDI + 0x100) = 0;
      }
    }
  }
  uVar3 = FUN_00b33120();
  iVar1 = *(int *)(unaff_RDI + 0x100);
  if (iVar1 == 0) {
    dVar13 = *(double *)(unaff_RDI + 0xf0);
    if (((dVar13 != DAT_0238fee8) || (NAN(dVar13) || NAN(DAT_0238fee8))) && (0 < (int)uVar3)) {
      for (lVar11 = 0;
          (**(code **)(DAT_02786500 + 0x20))
                    (CONCAT44((int)((ulonglong)dVar13 >> 0x20),(float)dVar13)),
          (ulonglong)uVar3 - 1 != lVar11; lVar11 = lVar11 + 1) {
        dVar13 = *(double *)(unaff_RDI + 0xf0);
      }
    }
  }
  else {
    if ((int)uVar3 < 1) {
      dVar13 = 0.0;
      iVar10 = 0;
    }
    else {
      dVar12 = *(double *)(unaff_RDI + 0xf0);
      dVar13 = dVar12;
      iVar10 = iVar1;
      if (0 < (int)param_1) {
        uVar9 = 0;
        do {
          pfVar7 = *(float **)(unaff_RSI + uVar9 * 8);
          dVar13 = dVar12;
          iVar10 = iVar1;
          iVar8 = -(param_1 & 0xfffffffe);
          if (param_1 == 1) {
LAB_013e9681:
            *pfVar7 = (float)((double)*pfVar7 * dVar13);
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              dVar13 = dVar13 + *(double *)(unaff_RDI + 0xf8);
              iVar10 = iVar10 + -1;
            }
          }
          else {
            do {
              while( true ) {
                pfVar6 = pfVar7;
                *pfVar6 = (float)((double)*pfVar6 * dVar13);
                if (iVar10 == 0) {
                  iVar10 = 0;
                }
                else {
                  dVar13 = dVar13 + *(double *)(unaff_RDI + 0xf8);
                  iVar10 = iVar10 + -1;
                }
                pfVar6[1] = (float)((double)pfVar6[1] * dVar13);
                if (iVar10 == 0) break;
                dVar13 = dVar13 + *(double *)(unaff_RDI + 0xf8);
                iVar10 = iVar10 + -1;
                iVar8 = iVar8 + 2;
                pfVar7 = pfVar6 + 2;
                if (iVar8 == 0) goto LAB_013e9670;
              }
              iVar10 = 0;
              iVar8 = iVar8 + 2;
              pfVar7 = pfVar6 + 2;
            } while (iVar8 != 0);
LAB_013e9670:
            pfVar7 = pfVar6 + 2;
            if ((param_1 & 1) != 0) goto LAB_013e9681;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar3);
      }
    }
    *(int *)(unaff_RDI + 0x100) = iVar10;
    *(double *)(unaff_RDI + 0xf0) = dVar13;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


