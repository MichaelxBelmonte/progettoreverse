// Function: FUN_00969644
// Address: 00969644
// Size: 1361 bytes
// Class: GNUni


void FUN_00969644(undefined8 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int unaff_ESI;
  longlong lVar8;
  uint uVar9;
  uint *unaff_RDI;
  ulonglong uVar10;
  
  if (unaff_RDI != (uint *)0x0) {
    unaff_RDI[0x33] = 0;
    if ((param_2 == 1) || (0x80000000 < param_2)) {
      unaff_RDI[0x5a] = 6;
    }
    else {
      FUN_0096939d();
      uVar3 = *unaff_RDI;
      unaff_RDI[2] = 0;
      unaff_RDI[3] = 1;
      if (uVar3 == 0) {
        unaff_RDI[2] = 0x20;
        unaff_RDI[3] = 0;
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (uVar3 != 1) {
          uVar4 = 0;
          uVar6 = 1;
          uVar9 = uVar3;
          do {
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 * 2;
            bVar1 = 3 < uVar9;
            uVar9 = uVar9 >> 1;
          } while (bVar1);
          unaff_RDI[2] = uVar4;
          unaff_RDI[3] = uVar6;
          if (uVar3 != uVar6) {
            unaff_RDI[0x5a] = 0x1a;
            return;
          }
        }
      }
      if (unaff_ESI < 1) {
        iVar2 = ~(unaff_ESI << 3) / (int)uVar4;
      }
      else {
        iVar2 = (unaff_ESI + -1) / (int)unaff_RDI[1];
      }
      uVar3 = iVar2 + 1;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar4 = uVar3 + 1;
      unaff_RDI[4] = uVar4;
      if (uVar3 < 9) {
        unaff_RDI[5] = 1;
        unaff_RDI[0x5a] = 0;
        unaff_RDI[0x32] = 1;
        unaff_RDI[0x1c8] = 0;
        unaff_RDI[0x1c9] = 0;
        uVar3 = uVar4 * 2 | 1;
        unaff_RDI[4] = uVar3;
        if ((int)uVar3 < 0) {
          unaff_RDI[0x5a] = 0xe;
          unaff_RDI[4] = uVar4;
        }
        else {
          FUN_009740e6(uVar4,0x5b4);
          uVar3 = (int)((unaff_RDI[4] - 1) - ((int)(unaff_RDI[4] - 1) >> 0x1f)) >> 1;
          unaff_RDI[4] = uVar3;
          if (unaff_RDI[0x5a] == 0) {
            uVar6 = (int)unaff_RDI + 0x16cU & 3;
            uVar4 = 4 - uVar6;
            if (uVar6 == 0) {
              uVar4 = 0;
            }
            uVar10 = (ulonglong)uVar4;
            lVar7 = (longlong)unaff_RDI + uVar10 + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x36) = lVar7;
            lVar5 = (longlong)(int)uVar3;
            lVar7 = (longlong)unaff_RDI + (lVar5 * 8 + 0x28U | uVar10) + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x38) = lVar7;
            lVar7 = lVar5 + 1;
            lVar8 = lVar5 * 4 + 0x14;
            lVar5 = (longlong)unaff_RDI + lVar8 * 3 + uVar10 + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x3a) = lVar5;
            lVar5 = (longlong)unaff_RDI + (lVar7 * 0x10 + 0x40U | uVar10) + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x3c) = lVar5;
            lVar5 = (longlong)unaff_RDI + lVar8 * 5 + uVar10 + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x3e) = lVar5;
            lVar5 = (longlong)unaff_RDI + (lVar8 * 6 | uVar10) + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x40) = lVar5;
            lVar5 = (longlong)unaff_RDI + (lVar7 * 0x20 + 0x80U | uVar10) + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x42) = lVar5;
            lVar5 = (longlong)unaff_RDI + (lVar8 * 10 | uVar10) + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x44) = lVar5;
            lVar5 = (longlong)unaff_RDI + (lVar8 * 0xc | uVar10) + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x46) = lVar5;
            lVar5 = (longlong)unaff_RDI + lVar8 * 0xd + uVar10 + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x48) = lVar5;
            lVar5 = (longlong)unaff_RDI + (lVar8 * 0xe | uVar10) + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x4a) = lVar5;
            lVar5 = (longlong)unaff_RDI + lVar8 * 0xf + uVar10 + 0x16c;
            *(ulonglong *)(lVar5 + 8) = (lVar5 - ((ulonglong)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x4c) = lVar5;
            lVar7 = (longlong)unaff_RDI + (lVar7 * 0x40 + 0x100U | uVar10) + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x4e) = lVar7;
            lVar7 = (longlong)unaff_RDI + lVar8 * 0x11 + uVar10 + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x50) = lVar7;
            lVar7 = (longlong)unaff_RDI + (lVar8 * 0x12 | uVar10) + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x52) = lVar7;
            lVar7 = (longlong)unaff_RDI + lVar8 * 0x13 + uVar10 + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x54) = lVar7;
            lVar7 = (longlong)unaff_RDI + (lVar8 * 0x14 | uVar10) + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x2e) = lVar7;
            lVar7 = (longlong)unaff_RDI + lVar8 * 0x15 + uVar10 + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x30) = lVar7;
            lVar7 = (longlong)unaff_RDI + lVar8 * 0x17 + uVar10 + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(longlong *)(unaff_RDI + 0x56) = lVar7;
            lVar7 = (longlong)unaff_RDI + (lVar8 * 0x18 | uVar10) + 0x16c;
            *(ulonglong *)(lVar7 + 8) = (lVar7 - ((ulonglong)((int)lVar7 + 0x10) & 3)) + 0x14;
          }
          else {
            lVar7 = 0;
            unaff_RDI[0x30] = 0;
            unaff_RDI[0x31] = 0;
            unaff_RDI[0x2e] = 0;
            unaff_RDI[0x2f] = 0;
            ___bzero();
          }
          *(longlong *)(unaff_RDI + 0x58) = lVar7;
        }
      }
      else {
        unaff_RDI[0x5a] = 0xe;
      }
    }
  }
  return;
}


