// Function: FUN_00c659d0
// Address: 00c659d0
// Size: 927 bytes
// Class: Unknown


undefined4 FUN_00c659d0(uint param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  
  uVar12 = 0xffffffce;
  if (((unaff_RSI != (ulonglong *)0x0) && (param_2 != (int *)0x0)) && (param_4 != (int *)0x0)) {
    iVar1 = *(int *)(unaff_RDI + 8);
    uVar2 = *(uint *)(unaff_RDI + 0xc);
    uVar3 = *(uint *)(unaff_RDI + 0x10);
    *param_4 = 0;
    uVar4 = (uint)unaff_RSI[2];
    uVar18 = (ulonglong)uVar4;
    uVar7 = ~(uint)(0xffffffffL << ((byte)param_3 & 0x3f));
    if (param_3 + -0x20 == 0) {
      uVar7 = 0xffffffff;
    }
    if (param_1 == 0) {
      uVar23 = 0;
    }
    else {
      uVar6 = *unaff_RSI;
      iVar5 = *(int *)((longlong)unaff_RSI + 0x14);
      uVar22 = *(uint *)(unaff_RDI + 4);
      uVar11 = 0;
      uVar19 = 0;
      uVar18 = (ulonglong)uVar4;
LAB_00c65aa1:
      do {
        uVar14 = (uint)uVar18;
        if ((uint)(iVar5 << 3) <= uVar14) {
LAB_00c65d50:
          uVar23 = 0xffffffce;
          break;
        }
        iVar9 = FUN_00c65da0();
        uVar16 = 0x1fU - iVar9;
        if (uVar2 <= 0x1fU - iVar9) {
          uVar16 = uVar2;
        }
        uVar20 = *(uint *)(uVar6 + (uVar18 >> 3));
        bVar13 = (byte)uVar18;
        uVar10 = FUN_00c65da0();
        if (uVar10 < 9) {
          uVar17 = uVar10 + uVar14 + 1;
          uVar18 = (ulonglong)uVar17;
          if (uVar16 != 1) {
            uVar20 = (((uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                       uVar20 << 0x18) << (bVar13 & 7)) << ((char)uVar10 + 1U & 0x1f)) >>
                     (-(byte)uVar16 & 0x1f);
            uVar21 = ~(-1 << ((byte)uVar16 & 0x1f)) * uVar10;
            if (uVar20 < 2) {
              uVar17 = uVar10 + uVar14;
              uVar10 = uVar21;
            }
            else {
              uVar10 = (uVar21 + uVar20) - 1;
            }
            uVar18 = (ulonglong)(uVar17 + uVar16);
          }
        }
        else {
          uVar16 = uVar14 + 9;
          uVar14 = uVar14 + 0x10;
          if (-1 < (int)uVar16) {
            uVar14 = uVar16;
          }
          uVar20 = *(uint *)(uVar6 + (uint)((int)uVar14 >> 3));
          uVar10 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18;
          iVar9 = param_3 + (uVar16 & 7);
          cVar8 = (char)iVar9;
          if (iVar9 < 0x21) {
            uVar10 = uVar10 >> (-cVar8 & 0x1fU);
          }
          else {
            uVar10 = (uVar10 << (sbyte)(uVar16 & 7)) >> (-(char)(param_3 + -0x20) & 0x1fU) |
                     (uint)(*(byte *)(uVar6 + (((int)uVar14 >> 3) + 4)) >> (0x28U - cVar8 & 0x1f));
          }
          uVar10 = uVar10 & uVar7;
          uVar18 = (ulonglong)(uVar16 + param_3);
        }
        piVar15 = param_2 + 1;
        *param_2 = (uVar11 + uVar10 + 1 >> 1) * (-(uVar10 + uVar11 & 1) | 1);
        uVar19 = uVar19 + 1;
        uVar22 = (uVar22 - (uVar22 * iVar1 >> 9)) + (uVar10 + uVar11) * iVar1;
        if (0xffff < uVar10) {
          uVar22 = 0xffff;
        }
        uVar23 = 0;
        if (((uVar22 & 0x3fffff80) != 0) || (param_1 <= uVar19)) {
          uVar11 = 0;
          param_2 = piVar15;
          if (param_1 <= uVar19) break;
          goto LAB_00c65aa1;
        }
        iVar9 = FUN_00c65da0();
        uVar11 = *(uint *)(uVar6 + (uVar18 >> 3));
        uVar14 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18) << ((byte)uVar18 & 7);
        uVar11 = FUN_00c65da0();
        if (uVar11 < 9) {
          iVar9 = (uVar22 + 0x10 >> 6) + iVar9 + -0x18;
          bVar13 = (byte)iVar9;
          uVar14 = (uVar14 << ((char)uVar11 + 1U & 0x1f)) >> (-bVar13 & 0x1f);
          uVar16 = (~(-1 << (bVar13 & 0x1f)) & uVar3) * uVar11;
          uVar22 = (uVar16 + uVar14) - 1;
          if (uVar14 < 2) {
            uVar22 = uVar16;
          }
          uVar11 = ((int)uVar18 + iVar9 + uVar11 + 1) - (uint)(uVar14 < 2);
        }
        else {
          uVar22 = uVar14 >> 7 & 0xffff;
          uVar11 = (int)uVar18 + 0x19;
        }
        uVar18 = (ulonglong)uVar11;
        if (param_1 < uVar22 + uVar19) goto LAB_00c65d50;
        if (uVar22 != 0) {
          ___bzero();
          piVar15 = param_2 + (ulonglong)(uVar22 - 1) + 2;
          uVar19 = uVar22 + uVar19;
        }
        uVar18 = (ulonglong)uVar11;
        uVar11 = (uint)(uVar22 < 0xffff);
        uVar22 = 0;
        uVar23 = 0;
        param_2 = piVar15;
      } while (uVar19 < param_1);
    }
    *param_4 = (int)uVar18 - uVar4;
    FUN_00c66820();
    uVar12 = 0xffffffce;
    if (*unaff_RSI <= unaff_RSI[1]) {
      uVar12 = uVar23;
    }
  }
  return uVar12;
}


