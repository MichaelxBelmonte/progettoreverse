// Function: FUN_00b280b0
// Address: 00b280b0
// Size: 1214 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00b280b0(ulonglong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  double *pdVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *unaff_RDI;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double local_58;
  
  uVar5 = unaff_RDI[1];
  uVar8 = (ulonglong)uVar5;
  if (uVar8 != 0) {
    param_1 = *(ulonglong *)(*(longlong *)(unaff_RDI + 4) + 0xf0);
    uVar11 = *(ulonglong *)(*(longlong *)(unaff_RDI + 4) + 0x100);
    if ((uVar5 < 4) || ((param_1 < uVar11 + uVar8 * 8 && (uVar11 < param_1 + uVar8 * 8)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)(uVar5 & 0xfffffffc);
      uVar6 = (uVar10 - 4 >> 2) + 1;
      uVar13 = (ulonglong)((uint)uVar6 & 3);
      if (uVar10 - 4 < 0xc) {
        lVar9 = 0;
      }
      else {
        lVar14 = -(uVar6 & 0xfffffffffffffffc);
        lVar9 = 0;
        do {
          puVar2 = (undefined8 *)(param_1 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(param_1 + 0x10 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + 0x10 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(param_1 + 0x30 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + 0x20 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + 0x30 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(param_1 + 0x40 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(param_1 + 0x50 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + 0x40 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + 0x50 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(param_1 + 0x60 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(param_1 + 0x70 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + 0x60 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar11 + 0x70 + lVar9 * 8);
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar9 = lVar9 + 0x10;
          lVar14 = lVar14 + 4;
        } while (lVar14 != 0);
      }
      if (uVar13 != 0) {
        lVar14 = uVar11 + lVar9 * 8;
        lVar9 = param_1 + lVar9 * 8;
        lVar12 = 0;
        do {
          puVar2 = (undefined8 *)(lVar9 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar14 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar12 = lVar12 + 0x20;
        } while (uVar13 << 5 != lVar12);
      }
      if (uVar10 == uVar8) goto LAB_00b28298;
    }
    uVar13 = ~uVar10;
    uVar6 = uVar8 & 3;
    if ((uVar5 & 3) != 0) {
      do {
        *(undefined8 *)(param_1 + uVar10 * 8) = 0;
        *(undefined8 *)(uVar11 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (2 < uVar13 + uVar8) {
      do {
        *(undefined8 *)(param_1 + uVar10 * 8) = 0;
        *(undefined8 *)(uVar11 + uVar10 * 8) = 0;
        *(undefined8 *)(param_1 + 8 + uVar10 * 8) = 0;
        *(undefined8 *)(uVar11 + 8 + uVar10 * 8) = 0;
        *(undefined8 *)(param_1 + 0x10 + uVar10 * 8) = 0;
        *(undefined8 *)(uVar11 + 0x10 + uVar10 * 8) = 0;
        *(undefined8 *)(param_1 + 0x18 + uVar10 * 8) = 0;
        *(undefined8 *)(uVar11 + 0x18 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 4;
      } while (uVar8 != uVar10);
    }
  }
LAB_00b28298:
  if (param_2 != 0) {
    lVar9 = *(longlong *)(unaff_RDI + 4);
    do {
      if (param_2 < *(ulonglong *)(lVar9 + 0x18)) {
        FUN_00b285a0(param_1,param_2);
        uVar8 = (ulonglong)unaff_RDI[1];
        lVar9 = *(longlong *)(unaff_RDI + 4);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + param_2 * uVar8;
        if ((~*unaff_RDI & 0xb) == 0) {
          *(longlong *)(lVar9 + 0xe0) = *(longlong *)(lVar9 + 0xe0) + param_2;
        }
        *(longlong *)(lVar9 + 0x18) = *(longlong *)(lVar9 + 0x18) - param_2;
        break;
      }
      FUN_00b285a0();
      lVar9 = *(longlong *)(unaff_RDI + 4);
      lVar14 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)unaff_RDI[1] * lVar14;
      uVar5 = *unaff_RDI;
      if ((~uVar5 & 5) == 0) {
        iVar4 = FUN_00b27ba0(lVar9,0);
        if (iVar4 != 0) {
          return 1;
        }
        uVar5 = *unaff_RDI;
      }
      lVar9 = *(longlong *)(unaff_RDI + 4);
      if ((~uVar5 & 0xb) == 0) {
        lVar12 = *(longlong *)(lVar9 + 0x28);
        uVar11 = *(longlong *)(lVar9 + 0xe0) + *(longlong *)(lVar9 + 0x18);
        *(ulonglong *)(lVar9 + 0xe0) = uVar11;
        uVar8 = lVar12 * 0x1e;
        if (uVar11 == uVar8) {
          if (uVar11 <= *(ulonglong *)(lVar9 + 8)) {
            FUN_00b27ba0();
            lVar9 = *(longlong *)(unaff_RDI + 4);
            if (_DAT_028a0eb0 <= local_58) {
              if (*(int *)(lVar9 + 200) == 0) {
                lVar12 = *(longlong *)(lVar9 + 0xc0);
                if (lVar12 == *(longlong *)(lVar9 + 0xb8)) {
                  pdVar7 = *(double **)(lVar9 + 0xa8);
                  dVar15 = pdVar7[1];
                  *(double *)(lVar9 + 0xa8) = dVar15;
                  if (dVar15 == 0.0) {
                    *(longlong *)(lVar9 + 0xb0) = lVar9 + 0xa8;
                  }
                }
                else {
                  pdVar7 = _malloc((size_t)uVar8);
                  if (pdVar7 == (double *)0x0) {
                    return 1;
                  }
                  *(longlong *)(lVar9 + 0xc0) = lVar12 + 1;
                }
                *pdVar7 = local_58;
                pdVar7[1] = 0.0;
                **(undefined8 **)(lVar9 + 0xb0) = pdVar7;
                lVar9 = *(longlong *)(unaff_RDI + 4);
                *(double **)(lVar9 + 0xb0) = pdVar7 + 1;
              }
              else {
                uVar8 = 1000;
                uVar11 = 0;
                do {
                  while (uVar10 = uVar11 + uVar8 >> 1,
                        *(double *)(&DAT_028a0eb0 + uVar10 * 8) <= local_58) {
                    uVar11 = uVar10;
                    if (uVar8 - uVar10 == 1) goto LAB_00b283dc;
                  }
                  lVar12 = uVar10 - uVar11;
                  uVar8 = uVar10;
                  uVar10 = uVar11;
                } while (lVar12 != 1);
LAB_00b283dc:
                plVar1 = (longlong *)(*(longlong *)(lVar9 + 0xd8) + uVar10 * 8);
                *plVar1 = *plVar1 + 1;
              }
            }
          }
          lVar12 = *(longlong *)(lVar9 + 0x28);
          *(longlong *)(lVar9 + 0xe0) = lVar12 * 0x14;
        }
      }
      else {
        lVar12 = *(longlong *)(lVar9 + 0x28);
      }
      param_1 = param_2 - lVar14;
      *(longlong *)(lVar9 + 0x18) = lVar12;
      uVar8 = (ulonglong)unaff_RDI[1];
      if (*(longlong *)(lVar9 + 0x10) == *(longlong *)(lVar9 + 8) * uVar8) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
      }
      param_2 = param_1;
    } while (param_1 != 0);
  }
  if ((int)uVar8 != 0) {
    lVar9 = *(longlong *)(unaff_RDI + 4);
    lVar14 = *(longlong *)(lVar9 + 0xe8);
    lVar12 = *(longlong *)(lVar9 + 0xf0);
    lVar3 = *(longlong *)(lVar9 + 0x100);
    lVar9 = *(longlong *)(lVar9 + 0xf8);
    uVar11 = 0;
    do {
      dVar15 = *(double *)(lVar12 + uVar11 * 8);
      pdVar7 = (double *)(lVar14 + uVar11 * 8);
      if (dVar15 < *pdVar7 || dVar15 == *pdVar7) {
        dVar15 = *(double *)(lVar3 + uVar11 * 8);
        pdVar7 = (double *)(lVar9 + uVar11 * 8);
        if (*pdVar7 <= dVar15 && dVar15 != *pdVar7) goto LAB_00b2857c;
      }
      else {
        *(double *)(lVar14 + uVar11 * 8) = dVar15;
        dVar15 = *(double *)(lVar3 + uVar11 * 8);
        pdVar7 = (double *)(lVar9 + uVar11 * 8);
        if (*pdVar7 <= dVar15 && dVar15 != *pdVar7) {
LAB_00b2857c:
          *(double *)(lVar9 + uVar11 * 8) = dVar15;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar8 != uVar11);
  }
  return 0;
}


