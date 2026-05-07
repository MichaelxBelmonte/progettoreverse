// Function: FUN_012b9ad0
// Address: 012b9ad0
// Size: 634 bytes
// Class: MULSSComponentRenderer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012b9ad0(ulonglong param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  
  iVar8 = 1;
  if (param_3 != 0) {
    iVar8 = param_3;
  }
  if (0 < (int)param_2) {
    lVar11 = (longlong)param_4;
    uVar10 = 0;
    do {
      puVar1 = *(uint **)(local_res8 + uVar10 * 8);
      puVar2 = *(undefined8 **)(local_res10 + uVar10 * 8);
      param_1 = FUN_00e83530(param_1,*(undefined8 *)(unaff_RSI + uVar10 * 8));
      if (local_res18 == 0) {
        if (param_3 == 0) {
          *puVar2 = 0x3f800000;
        }
        fVar7 = DAT_023b4df0;
        uVar5 = _DAT_02390140;
        fVar4 = DAT_02390124;
        lVar9 = (longlong)iVar8;
        if (iVar8 < param_4) {
          do {
            while( true ) {
              param_1 = *(ulonglong *)(puVar1 + lVar9 * 2);
              fVar14 = (float)(param_1 >> 0x20);
              fVar15 = (float)((uint)fVar14 & uVar5);
              fVar13 = (float)param_1;
              if ((fVar13 == 0.0) && (fVar12 = fVar15, !NAN(fVar13))) break;
              fVar12 = (float)((uint)fVar13 & uVar5);
              if ((fVar14 == 0.0) && (!NAN(fVar14))) break;
              if (fVar12 <= fVar15) {
                fVar12 = SQRT((fVar12 / fVar15) * (fVar12 / fVar15) + fVar4) * fVar15;
                break;
              }
              fVar12 = fVar12 * SQRT((fVar15 / fVar12) * (fVar15 / fVar12) + fVar4);
              if (fVar12 <= fVar7) goto LAB_012b9cb0;
LAB_012b9cf1:
              param_1 = CONCAT44(fVar14 * (fVar4 / fVar12),fVar13 * (fVar4 / fVar12));
              puVar2[lVar9] = param_1;
              lVar9 = lVar9 + 1;
              if (lVar11 == lVar9) goto LAB_012b9b30;
            }
            if (fVar7 < fVar12) goto LAB_012b9cf1;
LAB_012b9cb0:
            puVar2[lVar9] = 0x3f800000;
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
        }
      }
      else {
        puVar3 = *(uint **)(local_res18 + uVar10 * 8);
        if (param_3 == 0) {
          param_1 = (ulonglong)*puVar1;
          *puVar3 = *puVar1;
          *puVar2 = 0x3f800000;
        }
        fVar7 = DAT_023b4df0;
        uVar6 = _UNK_02390144;
        uVar5 = _DAT_02390140;
        fVar4 = DAT_02390124;
        lVar9 = (longlong)iVar8;
        if (iVar8 < param_4) {
          do {
            while( true ) {
              param_1 = *(ulonglong *)(puVar1 + lVar9 * 2);
              fVar14 = (float)(param_1 >> 0x20);
              fVar15 = (float)((uint)fVar14 & uVar5);
              fVar13 = (float)param_1;
              if ((fVar13 == 0.0) && (fVar12 = fVar15, !NAN(fVar13))) break;
              fVar12 = (float)((uint)fVar13 & uVar5);
              param_1 = CONCAT44((uint)fVar14 & uVar6,fVar12);
              if ((fVar14 == 0.0) && (!NAN(fVar14))) break;
              if (fVar15 < fVar12) {
                fVar12 = SQRT((fVar15 / fVar12) * (fVar15 / fVar12) + fVar4) * fVar12;
                break;
              }
              fVar13 = (fVar12 / fVar15) * (fVar12 / fVar15) + fVar4;
              param_1 = CONCAT44((uint)fVar14 & uVar6,fVar13);
              fVar12 = SQRT(fVar13) * fVar15;
              puVar3[lVar9] = (uint)fVar12;
              if (fVar12 <= fVar7) goto LAB_012b9bb0;
LAB_012b9c1a:
              param_1 = CONCAT44((fVar4 / fVar12) *
                                 (float)((ulonglong)*(undefined8 *)(puVar1 + lVar9 * 2) >> 0x20),
                                 (fVar4 / fVar12) * (float)*(undefined8 *)(puVar1 + lVar9 * 2));
              puVar2[lVar9] = param_1;
              lVar9 = lVar9 + 1;
              if (lVar11 == lVar9) goto LAB_012b9b30;
            }
            puVar3[lVar9] = (uint)fVar12;
            if (fVar7 < fVar12) goto LAB_012b9c1a;
LAB_012b9bb0:
            puVar2[lVar9] = 0x3f800000;
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
        }
      }
LAB_012b9b30:
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_2);
  }
  return;
}


