// Function: FUN_0185e700
// Address: 0185e700
// Size: 1067 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0185e7cb) */
/* WARNING: Removing unreachable block (ram,0x0185e7d4) */
/* WARNING: Removing unreachable block (ram,0x0185e74f) */
/* WARNING: Removing unreachable block (ram,0x0185e758) */
/* WARNING: Removing unreachable block (ram,0x0185e920) */
/* WARNING: Removing unreachable block (ram,0x0185e92d) */

longlong * FUN_0185e700(int param_1,int param_2,char param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  longlong local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (param_1 - param_2 == 0 || param_1 < param_2) {
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_018da560();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_40 + 0x18);
    iVar5 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    if (iVar1 < 4) {
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      fVar14 = (float)(param_1 - param_2);
      uVar7 = iVar5 >> 2;
      lVar2 = *(longlong *)(local_40 + 0x10);
      lVar3 = *(longlong *)(local_40 + 0x10);
      uVar12 = param_1 - param_2;
      if (uVar12 == 0 || param_1 < param_2) {
        if (param_3 == '\0') {
          if ((ulonglong)uVar7 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar2 + uVar10 * 4) * 4) = 0;
              *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar2 + 4 + uVar10 * 4) * 4) = 0;
              *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar2 + 8 + uVar10 * 4) * 4) = 0;
              *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar2 + 0xc + uVar10 * 4) * 4) = 0;
              uVar10 = uVar10 + 4;
            } while ((uVar7 & 0xfffffffc) != uVar10);
          }
          if ((ulonglong)(uVar7 & 3) != 0) {
            uVar11 = 0;
            do {
              *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar2 + uVar10 * 4 + uVar11 * 4) * 4) = 0;
              uVar11 = uVar11 + 1;
            } while ((uVar7 & 3) != uVar11);
          }
        }
        else {
          fVar14 = 0.0 / fVar14;
          if ((ulonglong)uVar7 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              *(float *)(lVar3 + (longlong)*(int *)(lVar2 + uVar10 * 4) * 4) = fVar14;
              *(float *)(lVar3 + (longlong)*(int *)(lVar2 + 4 + uVar10 * 4) * 4) = fVar14;
              *(float *)(lVar3 + (longlong)*(int *)(lVar2 + 8 + uVar10 * 4) * 4) = fVar14;
              *(float *)(lVar3 + (longlong)*(int *)(lVar2 + 0xc + uVar10 * 4) * 4) = fVar14;
              uVar10 = uVar10 + 4;
            } while ((uVar7 & 0xfffffffc) != uVar10);
          }
          if ((ulonglong)(uVar7 & 3) != 0) {
            uVar11 = 0;
            do {
              *(float *)(lVar3 + (longlong)*(int *)(lVar2 + uVar10 * 4 + uVar11 * 4) * 4) = fVar14;
              uVar11 = uVar11 + 1;
            } while ((uVar7 & 3) != uVar11);
          }
        }
      }
      else {
        uVar11 = (ulonglong)param_2;
        lVar4 = *(longlong *)(*param_4 + 0x10);
        uVar10 = (ulonglong)param_1;
        if (param_3 == '\0') {
          uVar13 = 0;
          do {
            lVar9 = (longlong)*(int *)(lVar2 + uVar13 * 4);
            fVar14 = 0.0;
            uVar8 = uVar11;
            for (uVar6 = (ulonglong)(uVar12 & 3); uVar6 != 0; uVar6 = uVar6 - 1) {
              fVar14 = fVar14 + *(float *)(*(longlong *)(*(longlong *)(lVar4 + uVar8 * 8) + 0x10) +
                                          lVar9 * 4);
              uVar8 = uVar8 + 1;
            }
            if (2 < ~uVar11 + uVar10) {
              do {
                fVar14 = fVar14 + *(float *)(*(longlong *)(*(longlong *)(lVar4 + uVar8 * 8) + 0x10)
                                            + lVar9 * 4) +
                         *(float *)(*(longlong *)(*(longlong *)(lVar4 + 8 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x10 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x18 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4);
                uVar8 = uVar8 + 4;
              } while (uVar10 != uVar8);
            }
            *(float *)(lVar3 + lVar9 * 4) = fVar14;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar7);
        }
        else {
          uVar13 = 0;
          do {
            lVar9 = (longlong)*(int *)(lVar2 + uVar13 * 4);
            fVar15 = 0.0;
            uVar8 = uVar11;
            for (uVar6 = (ulonglong)(uVar12 & 3); uVar6 != 0; uVar6 = uVar6 - 1) {
              fVar15 = fVar15 + *(float *)(*(longlong *)(*(longlong *)(lVar4 + uVar8 * 8) + 0x10) +
                                          lVar9 * 4);
              uVar8 = uVar8 + 1;
            }
            if (2 < ~uVar11 + uVar10) {
              do {
                fVar15 = fVar15 + *(float *)(*(longlong *)(*(longlong *)(lVar4 + uVar8 * 8) + 0x10)
                                            + lVar9 * 4) +
                         *(float *)(*(longlong *)(*(longlong *)(lVar4 + 8 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x10 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x18 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4);
                uVar8 = uVar8 + 4;
              } while (uVar10 != uVar8);
            }
            *(float *)(lVar3 + lVar9 * 4) = fVar15 / fVar14;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar7);
        }
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_40 == 0) {
        return unaff_RDI;
      }
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}


