// Function: FUN_01d39d70
// Address: 01d39d70
// Size: 1279 bytes
// Class: GNString


undefined8 FUN_01d39d70(void)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_40;
  undefined1 local_38;
  
  if (*(char *)(unaff_RDI + 0x48) == '\0') {
    *(undefined8 *)(unaff_RDI + 0x38) = 0;
    *(undefined8 *)(unaff_RDI + 0x40) = 0;
    FUN_01d38ea0();
    iVar2 = *(int *)(local_40 + 0x18);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (0x1b < iVar2) {
      pfVar1 = (float *)(unaff_RDI + 0x38);
      uVar6 = (ulonglong)(uint)(iVar2 / 0x1c);
      lVar5 = 0;
      do {
        FUN_01d38ea0();
        lVar4 = *(longlong *)(local_40 + 0x10);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 == 0) {
          *(undefined8 *)pfVar1 = *(undefined8 *)(lVar4 + 4);
        }
        else {
          uVar3 = *(uint *)(lVar4 + lVar5);
          if (uVar3 < 2) {
            fVar7 = *(float *)(lVar4 + 4 + lVar5);
            fVar9 = *pfVar1;
            if (fVar9 <= fVar7) {
              fVar9 = fVar9 + *(float *)(unaff_RDI + 0x40);
              if (fVar9 < fVar7) {
                *(float *)(unaff_RDI + 0x40) = *(float *)(unaff_RDI + 0x40) + (fVar7 - fVar9);
              }
            }
            else {
              *(float *)(unaff_RDI + 0x40) = (fVar9 - fVar7) + *(float *)(unaff_RDI + 0x40);
              *(float *)(unaff_RDI + 0x38) = fVar7;
            }
            fVar7 = *(float *)(lVar4 + 8 + lVar5);
            fVar9 = *(float *)(unaff_RDI + 0x3c);
            if (fVar9 <= fVar7) {
              fVar9 = fVar9 + *(float *)(unaff_RDI + 0x44);
              if (fVar9 < fVar7) {
                *(float *)(unaff_RDI + 0x44) = *(float *)(unaff_RDI + 0x44) + (fVar7 - fVar9);
              }
            }
            else {
              *(float *)(unaff_RDI + 0x44) = (fVar9 - fVar7) + *(float *)(unaff_RDI + 0x44);
              *(float *)(unaff_RDI + 0x3c) = fVar7;
            }
          }
          else if (uVar3 == 2) {
            fVar7 = *(float *)(lVar4 + 4 + lVar5);
            fVar9 = *pfVar1;
            if (fVar9 <= fVar7) {
              fVar8 = *(float *)(unaff_RDI + 0x40);
              if (fVar9 + fVar8 < fVar7) {
                fVar8 = fVar8 + (fVar7 - (fVar9 + fVar8));
                *(float *)(unaff_RDI + 0x40) = fVar8;
              }
              fVar10 = *(float *)(lVar4 + 8 + lVar5);
              fVar11 = *(float *)(unaff_RDI + 0x3c);
              if (fVar10 < fVar11) goto LAB_01d3a0fc;
LAB_01d39f1b:
              fVar7 = *(float *)(unaff_RDI + 0x44);
              if (fVar11 + fVar7 < fVar10) {
                fVar7 = fVar7 + (fVar10 - (fVar11 + fVar7));
                *(float *)(unaff_RDI + 0x44) = fVar7;
              }
              fVar12 = *(float *)(lVar4 + 0xc + lVar5);
              fVar10 = fVar11;
              if (fVar9 <= fVar12) goto LAB_01d39f50;
LAB_01d3a128:
              fVar8 = fVar8 + (fVar9 - fVar12);
              *(float *)(unaff_RDI + 0x40) = fVar8;
              *(float *)(unaff_RDI + 0x38) = fVar12;
              fVar11 = *(float *)(lVar4 + 0x10 + lVar5);
              fVar13 = fVar11;
              if (fVar11 < fVar10) goto LAB_01d3a14e;
LAB_01d39f7e:
              fVar11 = fVar10;
              if (fVar11 + fVar7 < fVar13) {
                fVar7 = fVar7 + (fVar13 - (fVar11 + fVar7));
                *(float *)(unaff_RDI + 0x44) = fVar7;
              }
              fVar9 = *(float *)(lVar4 + 0x14 + lVar5);
              if (fVar12 <= fVar9) goto LAB_01d39fac;
LAB_01d3a174:
              *(float *)(unaff_RDI + 0x40) = (fVar12 - fVar9) + fVar8;
              *(float *)(unaff_RDI + 0x38) = fVar9;
              fVar9 = *(float *)(lVar4 + 0x18 + lVar5);
              if (fVar11 <= fVar9) goto LAB_01d3a19a;
            }
            else {
              fVar8 = (fVar9 - fVar7) + *(float *)(unaff_RDI + 0x40);
              *(float *)(unaff_RDI + 0x40) = fVar8;
              *(float *)(unaff_RDI + 0x38) = fVar7;
              fVar10 = *(float *)(lVar4 + 8 + lVar5);
              fVar11 = *(float *)(unaff_RDI + 0x3c);
              fVar9 = fVar7;
              if (fVar11 <= fVar10) goto LAB_01d39f1b;
LAB_01d3a0fc:
              fVar7 = (fVar11 - fVar10) + *(float *)(unaff_RDI + 0x44);
              *(float *)(unaff_RDI + 0x44) = fVar7;
              *(float *)(unaff_RDI + 0x3c) = fVar10;
              fVar12 = *(float *)(lVar4 + 0xc + lVar5);
              if (fVar12 < fVar9) goto LAB_01d3a128;
LAB_01d39f50:
              if (fVar9 + fVar8 < fVar12) {
                fVar8 = fVar8 + (fVar12 - (fVar9 + fVar8));
                *(float *)(unaff_RDI + 0x40) = fVar8;
              }
              fVar11 = *(float *)(lVar4 + 0x10 + lVar5);
              fVar13 = fVar11;
              fVar12 = fVar9;
              if (fVar10 <= fVar11) goto LAB_01d39f7e;
LAB_01d3a14e:
              fVar7 = fVar7 + (fVar10 - fVar11);
              *(float *)(unaff_RDI + 0x44) = fVar7;
              *(float *)(unaff_RDI + 0x3c) = fVar11;
              fVar9 = *(float *)(lVar4 + 0x14 + lVar5);
              if (fVar9 < fVar12) goto LAB_01d3a174;
LAB_01d39fac:
              if (fVar12 + fVar8 < fVar9) {
                *(float *)(unaff_RDI + 0x40) = fVar8 + (fVar9 - (fVar12 + fVar8));
              }
              fVar9 = *(float *)(lVar4 + 0x18 + lVar5);
              if (fVar11 <= fVar9) {
LAB_01d3a19a:
                if (fVar11 + fVar7 < fVar9) {
                  *(float *)(unaff_RDI + 0x44) = fVar7 + (fVar9 - (fVar11 + fVar7));
                }
                goto LAB_01d39df7;
              }
            }
            *(float *)(unaff_RDI + 0x44) = (fVar11 - fVar9) + fVar7;
            *(float *)(unaff_RDI + 0x3c) = fVar9;
          }
          else if (uVar3 == 3) {
            fVar7 = *(float *)(lVar4 + 0xc + lVar5);
            fVar8 = *(float *)(lVar4 + 4 + lVar5) - fVar7;
            fVar7 = *(float *)(lVar4 + 8 + lVar5) - fVar7;
            fVar9 = *pfVar1;
            if (fVar9 <= fVar8) {
              fVar10 = *(float *)(unaff_RDI + 0x40);
              if (fVar9 + fVar10 < fVar8) {
                fVar10 = fVar10 + (fVar8 - (fVar9 + fVar10));
                *(float *)(unaff_RDI + 0x40) = fVar10;
              }
            }
            else {
              fVar10 = (fVar9 - fVar8) + *(float *)(unaff_RDI + 0x40);
              *(float *)(unaff_RDI + 0x40) = fVar10;
              *(float *)(unaff_RDI + 0x38) = fVar8;
              fVar9 = fVar8;
            }
            fVar11 = *(float *)(unaff_RDI + 0x3c);
            if (fVar11 <= fVar7) {
              fVar12 = *(float *)(unaff_RDI + 0x44);
              if (fVar11 + fVar12 < fVar7) {
                fVar12 = fVar12 + (fVar7 - (fVar11 + fVar12));
                *(float *)(unaff_RDI + 0x44) = fVar12;
              }
            }
            else {
              fVar12 = (fVar11 - fVar7) + *(float *)(unaff_RDI + 0x44);
              *(float *)(unaff_RDI + 0x44) = fVar12;
              *(float *)(unaff_RDI + 0x3c) = fVar7;
              fVar11 = fVar7;
            }
            fVar13 = *(float *)(lVar4 + 0xc + lVar5);
            fVar13 = fVar13 + fVar13;
            fVar8 = fVar8 + fVar13;
            fVar7 = fVar7 + fVar13;
            if (fVar9 <= fVar8) {
              if (fVar9 + fVar10 < fVar8) {
                *(float *)(unaff_RDI + 0x40) = fVar10 + (fVar8 - (fVar9 + fVar10));
              }
            }
            else {
              *(float *)(unaff_RDI + 0x40) = (fVar9 - fVar8) + fVar10;
              *(float *)(unaff_RDI + 0x38) = fVar8;
            }
            if (fVar11 <= fVar7) {
              if (fVar11 + fVar12 < fVar7) {
                *(float *)(unaff_RDI + 0x44) = fVar12 + (fVar7 - (fVar11 + fVar12));
              }
            }
            else {
              *(float *)(unaff_RDI + 0x44) = (fVar11 - fVar7) + fVar12;
              *(float *)(unaff_RDI + 0x3c) = fVar7;
            }
          }
        }
LAB_01d39df7:
        lVar5 = lVar5 + 0x1c;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *(undefined1 *)(unaff_RDI + 0x48) = 1;
  }
  return *(undefined8 *)(unaff_RDI + 0x38);
}


