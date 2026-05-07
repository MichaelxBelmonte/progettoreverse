// Function: FUN_00ddd990
// Address: 00ddd990
// Size: 615 bytes
// Class: GNValue


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00ddd990(void)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  double *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar13;
  int iVar14;
  double local_58;
  int local_3c;
  
  lVar3 = unaff_RDI[4];
  cVar5 = (**(code **)(*unaff_RDI + 0x388))();
  if (cVar5 == '\0') {
    (**(code **)(*unaff_RDI + 0x3a8))();
    lVar4 = unaff_RDI[4];
    iVar9 = (**(code **)(*unaff_RDI + 0x390))();
    if ((int)lVar4 < iVar9) {
      lVar4 = unaff_RDI[4];
      iVar9 = (**(code **)(*unaff_RDI + 0x390))();
      if ((int)lVar4 < iVar9) {
        sVar7 = FUN_00d8cbc0();
        bVar2 = false;
        bVar6 = false;
        if (sVar7 != 0x2b) {
          if (sVar7 != 0x2d) goto LAB_00ddda23;
          bVar6 = true;
        }
        bVar2 = bVar6;
        *(int *)(unaff_RDI + 4) = (int)unaff_RDI[4] + 1;
      }
      else {
        bVar2 = false;
      }
LAB_00ddda23:
      lVar4 = unaff_RDI[4];
      iVar9 = (**(code **)(*unaff_RDI + 0x390))();
      if ((int)lVar4 < iVar9) {
        local_58 = 0.0;
        bVar6 = false;
        bVar13 = false;
        iVar9 = 0;
        do {
          uVar8 = FUN_00d8cbc0();
          if ((ushort)(uVar8 - 0x30) < 10) {
            if (local_58 < _DAT_023dfa20) {
              local_58 = local_58 * _DAT_0241eeb8 + (double)(int)(uVar8 - 0x30);
              bVar6 = true;
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar9 = iVar9 + (char)-bVar13;
          }
          else if ((bVar13) || (bVar13 = true, uVar8 != 0x2e)) break;
          iVar14 = (int)unaff_RDI[4] + 1;
          *(int *)(unaff_RDI + 4) = iVar14;
          iVar10 = (**(code **)(*unaff_RDI + 0x390))();
        } while (iVar14 < iVar10);
        if (bVar6) {
          lVar4 = unaff_RDI[4];
          iVar14 = (**(code **)(*unaff_RDI + 0x390))();
          uVar12 = (undefined7)((ulonglong)unaff_RDI >> 8);
          iVar10 = iVar9;
          if (((int)lVar4 < iVar14) && ((uVar8 | 0x20) == 0x65)) {
            *(int *)(unaff_RDI + 4) = (int)unaff_RDI[4] + 1;
            cVar5 = (**(code **)(*unaff_RDI + 0x410))();
            if (cVar5 == '\0') goto LAB_00dddaf9;
            if ((local_58 != 0.0) || (NAN(local_58))) {
              if (iVar9 < 1) {
                if ((iVar9 == 0) || (iVar10 = -0x80000000, -0x80000000 - iVar9 <= local_3c))
                goto LAB_00dddba5;
              }
              else {
                iVar10 = 0x7fffffff;
                if (local_3c <= 0x7fffffff - iVar9) {
LAB_00dddba5:
                  iVar10 = local_3c + iVar9;
                }
              }
            }
          }
          uVar11 = CONCAT71(uVar12,1);
          if (unaff_RSI != (double *)0x0) {
            uVar11 = CONCAT71(uVar12,1);
            if (((local_58 != 0.0) || (NAN(local_58))) && (iVar10 != 0)) {
              dVar1 = (double)___exp10(SUB84((double)iVar10,0));
              local_58 = local_58 * dVar1;
            }
            if (bVar2) {
              *unaff_RSI = (double)((ulonglong)local_58 ^ _DAT_023945b0);
            }
            else {
              *unaff_RSI = local_58;
            }
          }
          goto LAB_00dddb01;
        }
      }
LAB_00dddaf9:
      *(int *)(unaff_RDI + 4) = (int)lVar3;
    }
    else {
      *(int *)(unaff_RDI + 4) = (int)lVar3;
    }
  }
  uVar11 = 0;
LAB_00dddb01:
  return uVar11 & 0xffffffff;
}


