// Function: FUN_01704310
// Address: 01704310
// Size: 798 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01704620) */
/* WARNING: Removing unreachable block (ram,0x0170462c) */
/* WARNING: Removing unreachable block (ram,0x0170435d) */
/* WARNING: Removing unreachable block (ram,0x01704366) */

void FUN_01704310(double param_1,double param_2,double param_3)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint unaff_ESI;
  longlong lVar15;
  longlong *unaff_RDI;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if ((param_3 == DAT_0238fee8) && (!NAN(param_3) && !NAN(DAT_0238fee8))) {
    pdVar4 = *(double **)(local_48 + 0x10);
    *pdVar4 = param_1;
    pdVar4[(int)unaff_ESI] = param_2;
    if (1 < (int)unaff_ESI) {
      dVar19 = (param_2 - param_1) / (double)(int)unaff_ESI;
      uVar13 = (ulonglong)unaff_ESI - 1;
      uVar14 = (ulonglong)((uint)uVar13 & 3);
      lVar11 = 1;
      local_38 = param_1;
      if (2 < (ulonglong)unaff_ESI - 2) {
        uVar10 = 0;
        do {
          uVar12 = uVar10;
          pdVar4[uVar12 + 1] = param_1 + dVar19;
          param_1 = param_1 + dVar19 + dVar19;
          pdVar4[uVar12 + 2] = param_1;
          param_1 = param_1 + dVar19;
          pdVar4[uVar12 + 3] = param_1;
          param_1 = param_1 + dVar19;
          pdVar4[uVar12 + 4] = param_1;
          uVar10 = uVar12 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar12 + 4);
        lVar11 = uVar12 + 5;
        local_38 = param_1;
      }
      if (uVar14 != 0) {
        uVar13 = 0;
        do {
          local_38 = local_38 + dVar19;
          pdVar4[lVar11 + uVar13] = local_38;
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
      }
    }
    goto LAB_017045fb;
  }
  dVar17 = (double)_pow();
  dVar19 = DAT_0238fee8;
  if ((int)unaff_ESI < 0) goto LAB_017045fb;
  lVar11 = *(longlong *)(local_48 + 0x10);
  uVar1 = unaff_ESI + 1;
  if (unaff_ESI == 0) {
    dVar18 = 0.0;
    uVar13 = 0;
LAB_017044f9:
    *(double *)(lVar11 + uVar13 * 8) = dVar18;
  }
  else {
    dVar18 = 0.0;
    uVar13 = 0;
    dVar21 = DAT_0238fee8;
    do {
      *(double *)(lVar11 + uVar13 * 8) = dVar18;
      dVar20 = dVar21 * dVar17;
      dVar18 = dVar19 / dVar21 + dVar18;
      *(double *)(lVar11 + 8 + uVar13 * 8) = dVar18;
      dVar21 = dVar20 * dVar17;
      dVar18 = dVar19 / dVar20 + dVar18;
      uVar13 = uVar13 + 2;
    } while ((uVar1 & 0xfffffffe) != uVar13);
    if ((uVar1 & 1) != 0) goto LAB_017044f9;
  }
  dVar19 = (param_2 - param_1) / *(double *)(lVar11 + (longlong)(int)unaff_ESI * 8);
  if (unaff_ESI < 3) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulonglong)(uVar1 & 0xfffffffc);
    uVar14 = (uVar13 - 4 >> 2) + 1;
    if (uVar13 - 4 == 0) {
      lVar15 = 0;
LAB_017045ad:
      pdVar4 = (double *)(lVar11 + lVar15 * 8);
      dVar18 = pdVar4[1];
      pdVar2 = (double *)(lVar11 + 0x10 + lVar15 * 8);
      dVar21 = *pdVar2;
      dVar17 = pdVar2[1] * dVar19 + param_1;
      pdVar2 = (double *)(lVar11 + lVar15 * 8);
      *pdVar2 = *pdVar4 * dVar19 + param_1;
      pdVar2[1] = dVar18 * dVar19 + param_1;
      auVar6._8_4_ = SUB84(dVar17,0);
      auVar6._0_8_ = dVar21 * dVar19 + param_1;
      auVar6._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      *(undefined1 (*) [16])(lVar11 + 0x10 + lVar15 * 8) = auVar6;
    }
    else {
      lVar16 = -(uVar14 & 0xfffffffffffffffe);
      lVar15 = 0;
      do {
        pdVar4 = (double *)(lVar11 + lVar15 * 8);
        dVar18 = pdVar4[1];
        pdVar2 = (double *)(lVar11 + 0x10 + lVar15 * 8);
        dVar21 = *pdVar2;
        pdVar3 = (double *)(lVar11 + 0x20 + lVar15 * 8);
        dVar20 = *pdVar3;
        dVar7 = pdVar3[1];
        pdVar3 = (double *)(lVar11 + 0x30 + lVar15 * 8);
        dVar8 = *pdVar3;
        dVar9 = pdVar3[1];
        dVar17 = pdVar2[1] * dVar19 + param_1;
        pdVar2 = (double *)(lVar11 + lVar15 * 8);
        *pdVar2 = *pdVar4 * dVar19 + param_1;
        pdVar2[1] = dVar18 * dVar19 + param_1;
        auVar5._8_4_ = SUB84(dVar17,0);
        auVar5._0_8_ = dVar21 * dVar19 + param_1;
        auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(lVar11 + 0x10 + lVar15 * 8) = auVar5;
        pdVar4 = (double *)(lVar11 + 0x20 + lVar15 * 8);
        *pdVar4 = dVar20 * dVar19 + param_1;
        pdVar4[1] = dVar7 * dVar19 + param_1;
        pdVar4 = (double *)(lVar11 + 0x30 + lVar15 * 8);
        *pdVar4 = dVar8 * dVar19 + param_1;
        pdVar4[1] = dVar9 * dVar19 + param_1;
        lVar15 = lVar15 + 8;
        lVar16 = lVar16 + 2;
      } while (lVar16 != 0);
      if ((uVar14 & 1) != 0) goto LAB_017045ad;
    }
    if (uVar13 == uVar1) goto LAB_017045fb;
  }
  do {
    *(double *)(lVar11 + uVar13 * 8) = *(double *)(lVar11 + uVar13 * 8) * dVar19 + param_1;
    uVar13 = uVar13 + 1;
  } while (uVar1 != uVar13);
LAB_017045fb:
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


