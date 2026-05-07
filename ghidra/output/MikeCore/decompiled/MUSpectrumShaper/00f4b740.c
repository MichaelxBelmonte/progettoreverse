// Function: FUN_00f4b740
// Address: 00f4b740
// Size: 3107 bytes
// Class: MUSpectrumShaper
// String references:
//   "/System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa"


void FUN_00f4b740(int param_1,longlong param_2)

{
  short *psVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)((longlong)unaff_RDI + 0xc4) < 1) {
    uVar14 = param_2 + 5;
    iVar11 = 0;
LAB_00f4bc90:
    uVar15 = uVar14;
    if (uVar14 < param_2 + 4U) goto LAB_00f4bcb7;
LAB_00f4bc9c:
    if (unaff_RSI == 0) goto LAB_00f4bcb7;
    FUN_00f4b3c0(param_1,param_2);
  }
  else {
    if (*(int *)(*unaff_RDI + 0x58) == 2) {
      uVar9 = 0;
      uVar19 = 0;
      uVar10 = 0;
      uVar8 = 0;
      if ((((((((*(short *)((longlong)unaff_RDI + 0xd4) == 0) && ((short)unaff_RDI[0x1b] == 0)) &&
              (*(short *)((longlong)unaff_RDI + 0xdc) == 0)) &&
             ((uVar19 = uVar8, (short)unaff_RDI[0x1c] == 0 &&
              (*(short *)((longlong)unaff_RDI + 0xe4) == 0)))) && ((short)unaff_RDI[0x1d] == 0)) &&
           (((*(short *)((longlong)unaff_RDI + 0xec) == 0 &&
             (*(short *)((longlong)unaff_RDI + 0x10c) == 0)) &&
            (((short)unaff_RDI[0x22] == 0 &&
             (((uVar19 = uVar9, *(short *)((longlong)unaff_RDI + 0x114) == 0 &&
               ((short)unaff_RDI[0x23] == 0)) && (*(short *)((longlong)unaff_RDI + 0x11c) == 0))))))
           )) && (((uVar19 = uVar10, (short)unaff_RDI[0x24] == 0 &&
                   (*(short *)((longlong)unaff_RDI + 0x124) == 0)) &&
                  (((short)unaff_RDI[0x25] == 0 &&
                   (((*(short *)((longlong)unaff_RDI + 300) == 0 && ((short)unaff_RDI[0x26] == 0))
                    && ((*(short *)((longlong)unaff_RDI + 0x134) == 0 &&
                        ((((short)unaff_RDI[0x27] == 0 &&
                          (*(short *)((longlong)unaff_RDI + 0x144) == 0)) &&
                         ((short)unaff_RDI[0x29] == 0)))))))))))) &&
         ((*(short *)((longlong)unaff_RDI + 0x14c) == 0 &&
          (uVar19 = uVar8, (short)unaff_RDI[0x2a] == 0)))) {
        if (((short)unaff_RDI[0x1f] == 0) &&
           ((*(short *)((longlong)unaff_RDI + 0xfc) == 0 && ((short)unaff_RDI[0x21] == 0)))) {
          lVar6 = 0;
          do {
            if ((((*(short *)((longlong)unaff_RDI + lVar6 * 4 + 0x154) != 0) ||
                 (*(short *)((longlong)unaff_RDI + lVar6 * 4 + 0x158) != 0)) ||
                (*(short *)((longlong)unaff_RDI + lVar6 * 4 + 0x15c) != 0)) ||
               (*(short *)((longlong)unaff_RDI + lVar6 * 4 + 0x160) != 0)) goto LAB_00f4c339;
            lVar6 = lVar6 + 4;
            uVar19 = 0;
          } while (lVar6 != 0xe0);
        }
        else {
LAB_00f4c339:
          uVar19 = 1;
        }
      }
      *(undefined4 *)(*unaff_RDI + 0x58) = uVar19;
    }
    FUN_00f4c390();
    FUN_00f4c390();
    lVar6 = unaff_RDI[0x16c];
    uVar12 = *(ushort *)((longlong)unaff_RDI + 0xd6);
    uVar5 = (int)lVar6 + 1;
    *(undefined2 *)((longlong)unaff_RDI + (longlong)(int)uVar5 * 4 + 0xd6) = 0xffff;
    if (-1 < (int)lVar6) {
      uVar13 = 7;
      if (uVar12 == 0) {
        uVar13 = 0x8a;
      }
      iVar18 = 4 - (uint)(uVar12 == 0);
      uVar17 = 0xffffffff;
      uVar14 = 0;
      iVar11 = 0;
      do {
        uVar15 = (ulonglong)uVar12;
        uVar4 = (uint)uVar12;
        uVar12 = *(ushort *)((longlong)unaff_RDI + uVar14 * 4 + 0xda);
        uVar14 = uVar14 + 1;
        iVar16 = iVar11 + 1;
        if (((int)uVar13 <= iVar16) || (uVar4 != uVar12)) {
          if (iVar16 < iVar18) {
            psVar1 = (short *)((longlong)unaff_RDI + uVar15 * 4 + 0xabc);
            *psVar1 = *psVar1 + (short)iVar16;
          }
          else if (uVar4 == 0) {
            if (iVar11 < 10) {
              *(short *)(unaff_RDI + 0x160) = (short)unaff_RDI[0x160] + 1;
            }
            else {
              *(short *)((longlong)unaff_RDI + 0xb04) = *(short *)((longlong)unaff_RDI + 0xb04) + 1;
            }
          }
          else {
            if (uVar4 != uVar17) {
              psVar1 = (short *)((longlong)unaff_RDI + uVar15 * 4 + 0xabc);
              *psVar1 = *psVar1 + 1;
            }
            *(short *)((longlong)unaff_RDI + 0xafc) = *(short *)((longlong)unaff_RDI + 0xafc) + 1;
          }
          uVar17 = uVar4;
          if (uVar12 == 0) {
            iVar18 = 3;
            uVar13 = 0x8a;
            iVar16 = 0;
          }
          else {
            iVar18 = 4 - (uint)(uVar4 == uVar12);
            uVar13 = uVar4 == uVar12 ^ 7;
            iVar16 = 0;
          }
        }
        iVar11 = iVar16;
      } while (uVar5 != uVar14);
    }
    lVar6 = unaff_RDI[0x16f];
    uVar12 = *(ushort *)((longlong)unaff_RDI + 0x9ca);
    uVar5 = (int)lVar6 + 1;
    *(undefined2 *)((longlong)unaff_RDI + (longlong)(int)uVar5 * 4 + 0x9ca) = 0xffff;
    if (-1 < (int)lVar6) {
      uVar13 = 7;
      if (uVar12 == 0) {
        uVar13 = 0x8a;
      }
      iVar18 = 4 - (uint)(uVar12 == 0);
      uVar17 = 0xffffffff;
      uVar14 = 0;
      iVar11 = 0;
      do {
        uVar15 = (ulonglong)uVar12;
        uVar4 = (uint)uVar12;
        uVar12 = *(ushort *)((longlong)unaff_RDI + uVar14 * 4 + 0x9ce);
        uVar14 = uVar14 + 1;
        iVar16 = iVar11 + 1;
        if (((int)uVar13 <= iVar16) || (uVar4 != uVar12)) {
          if (iVar16 < iVar18) {
            psVar1 = (short *)((longlong)unaff_RDI + uVar15 * 4 + 0xabc);
            *psVar1 = *psVar1 + (short)iVar16;
          }
          else if (uVar4 == 0) {
            if (iVar11 < 10) {
              *(short *)(unaff_RDI + 0x160) = (short)unaff_RDI[0x160] + 1;
            }
            else {
              *(short *)((longlong)unaff_RDI + 0xb04) = *(short *)((longlong)unaff_RDI + 0xb04) + 1;
            }
          }
          else {
            if (uVar4 != uVar17) {
              psVar1 = (short *)((longlong)unaff_RDI + uVar15 * 4 + 0xabc);
              *psVar1 = *psVar1 + 1;
            }
            *(short *)((longlong)unaff_RDI + 0xafc) = *(short *)((longlong)unaff_RDI + 0xafc) + 1;
          }
          uVar17 = uVar4;
          if (uVar12 == 0) {
            iVar16 = 0;
            iVar18 = 3;
            uVar13 = 0x8a;
          }
          else {
            iVar16 = 0;
            iVar18 = 4 - (uint)(uVar4 == uVar12);
            uVar13 = uVar4 == uVar12 ^ 7;
          }
        }
        iVar11 = iVar16;
      } while (uVar5 != uVar14);
    }
    FUN_00f4c390();
    iVar11 = 0x12;
    if ((((((*(short *)((longlong)unaff_RDI + 0xafa) == 0) &&
           (iVar11 = 0x11, *(short *)((longlong)unaff_RDI + 0xac2) == 0)) &&
          (iVar11 = 0x10, *(short *)((longlong)unaff_RDI + 0xaf6) == 0)) &&
         (((iVar11 = 0xf, *(short *)((longlong)unaff_RDI + 0xac6) == 0 &&
           (iVar11 = 0xe, *(short *)((longlong)unaff_RDI + 0xaf2) == 0)) &&
          ((iVar11 = 0xd, *(short *)((longlong)unaff_RDI + 0xaca) == 0 &&
           ((iVar11 = 0xc, *(short *)((longlong)unaff_RDI + 0xaee) == 0 &&
            (iVar11 = 0xb, *(short *)((longlong)unaff_RDI + 0xace) == 0)))))))) &&
        (iVar11 = 10, *(short *)((longlong)unaff_RDI + 0xaea) == 0)) &&
       ((((iVar11 = 9, *(short *)((longlong)unaff_RDI + 0xad2) == 0 &&
          (iVar11 = 8, *(short *)((longlong)unaff_RDI + 0xae6) == 0)) &&
         (iVar11 = 7, *(short *)((longlong)unaff_RDI + 0xad6) == 0)) &&
        (((iVar11 = 6, *(short *)((longlong)unaff_RDI + 0xae2) == 0 &&
          (iVar11 = 5, *(short *)((longlong)unaff_RDI + 0xada) == 0)) &&
         (iVar11 = 4, *(short *)((longlong)unaff_RDI + 0xade) == 0)))))) {
      iVar11 = 3 - (uint)(*(short *)((longlong)unaff_RDI + 0xabe) == 0);
    }
    lVar6 = unaff_RDI[0x2e3];
    unaff_RDI[0x2e3] = (ulonglong)(uint)(iVar11 * 3) + lVar6 + 0x11;
    uVar15 = lVar6 + (ulonglong)(uint)(iVar11 * 3) + 0x1b >> 3;
    uVar14 = unaff_RDI[0x2e4] + 10U >> 3;
    if ((uVar14 <= uVar15) || ((int)unaff_RDI[0x19] == 4)) goto LAB_00f4bc90;
    if (param_2 + 4U <= uVar15) goto LAB_00f4bc9c;
LAB_00f4bcb7:
    uVar5 = *(uint *)((longlong)unaff_RDI + 0x1734);
    bVar7 = (byte)uVar5;
    if (uVar14 == uVar15) {
      uVar13 = param_1 + 2;
      if ((int)uVar5 < 0xe) {
        uVar14 = (ulonglong)uVar5;
        *(ushort *)(unaff_RDI + 0x2e6) =
             *(ushort *)(unaff_RDI + 0x2e6) | (ushort)(uVar13 << (bVar7 & 0x1f));
        iVar11 = uVar5 + 3;
      }
      else {
        uVar12 = (ushort)(uVar13 << (bVar7 & 0x1f)) | *(ushort *)(unaff_RDI + 0x2e6);
        *(ushort *)(unaff_RDI + 0x2e6) = uVar12;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(char *)(unaff_RDI[2] + lVar6) = (char)uVar12;
        lVar6 = unaff_RDI[2];
        lVar2 = unaff_RDI[5];
        unaff_RDI[5] = lVar2 + 1;
        *(undefined1 *)(lVar6 + lVar2) = *(undefined1 *)((longlong)unaff_RDI + 0x1731);
        bVar7 = 0x10 - (char)*(int *)((longlong)unaff_RDI + 0x1734);
        uVar14 = CONCAT71((int7)((ulonglong)lVar6 >> 8),bVar7);
        *(short *)(unaff_RDI + 0x2e6) = (short)((uVar13 & 0xffff) >> (bVar7 & 0x1f));
        iVar11 = *(int *)((longlong)unaff_RDI + 0x1734) + -0xd;
      }
      *(int *)((longlong)unaff_RDI + 0x1734) = iVar11;
      FUN_00f4cdf0(uVar14,&DAT_023e86e0);
    }
    else {
      uVar13 = param_1 + 4;
      if ((int)uVar5 < 0xe) {
        uVar13 = (uint)(ushort)((ushort)(uVar13 << (bVar7 & 0x1f)) | *(ushort *)(unaff_RDI + 0x2e6))
        ;
        iVar18 = uVar5 + 3;
      }
      else {
        uVar12 = (ushort)(uVar13 << (bVar7 & 0x1f)) | *(ushort *)(unaff_RDI + 0x2e6);
        *(ushort *)(unaff_RDI + 0x2e6) = uVar12;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(char *)(unaff_RDI[2] + lVar6) = (char)uVar12;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(undefined1 *)(unaff_RDI[2] + lVar6) = *(undefined1 *)((longlong)unaff_RDI + 0x1731);
        uVar13 = (uVar13 & 0xffff) >> (0x10U - (char)*(int *)((longlong)unaff_RDI + 0x1734) & 0x1f);
        iVar18 = *(int *)((longlong)unaff_RDI + 0x1734) + -0xd;
      }
      *(int *)((longlong)unaff_RDI + 0x1734) = iVar18;
      uVar5 = *(uint *)(unaff_RDI + 0x16f);
      uVar17 = (int)unaff_RDI[0x16c] + 0xff00;
      if (iVar18 < 0xc) {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        iVar18 = iVar18 + 5;
      }
      else {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        *(short *)(unaff_RDI + 0x2e6) = (short)uVar13;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(char *)(unaff_RDI[2] + lVar6) = (char)uVar13;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(undefined1 *)(unaff_RDI[2] + lVar6) = *(undefined1 *)((longlong)unaff_RDI + 0x1731);
        uVar13 = (uVar17 & 0xffff) >> (0x10U - (char)*(int *)((longlong)unaff_RDI + 0x1734) & 0x1f);
        iVar18 = *(int *)((longlong)unaff_RDI + 0x1734) + -0xb;
      }
      *(int *)((longlong)unaff_RDI + 0x1734) = iVar18;
      if (iVar18 < 0xc) {
        uVar13 = uVar13 | uVar5 + 0x10000 << ((byte)iVar18 & 0x1f);
        iVar18 = iVar18 + 5;
      }
      else {
        uVar13 = uVar13 | uVar5 + 0x10000 << ((byte)iVar18 & 0x1f);
        *(short *)(unaff_RDI + 0x2e6) = (short)uVar13;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(char *)(unaff_RDI[2] + lVar6) = (char)uVar13;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(undefined1 *)(unaff_RDI[2] + lVar6) = *(undefined1 *)((longlong)unaff_RDI + 0x1731);
        uVar13 = (uVar5 & 0xffff) >> (0x10U - (char)*(int *)((longlong)unaff_RDI + 0x1734) & 0x1f);
        iVar18 = *(int *)((longlong)unaff_RDI + 0x1734) + -0xb;
      }
      *(int *)((longlong)unaff_RDI + 0x1734) = iVar18;
      uVar17 = iVar11 + 0xfffd;
      if (iVar18 < 0xd) {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        iVar18 = iVar18 + 4;
      }
      else {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        *(short *)(unaff_RDI + 0x2e6) = (short)uVar13;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(char *)(unaff_RDI[2] + lVar6) = (char)uVar13;
        lVar6 = unaff_RDI[5];
        unaff_RDI[5] = lVar6 + 1;
        *(undefined1 *)(unaff_RDI[2] + lVar6) = *(undefined1 *)((longlong)unaff_RDI + 0x1731);
        uVar13 = (uVar17 & 0xffff) >> (0x10U - (char)*(int *)((longlong)unaff_RDI + 0x1734) & 0x1f);
        iVar18 = *(int *)((longlong)unaff_RDI + 0x1734) + -0xc;
      }
      *(int *)((longlong)unaff_RDI + 0x1734) = iVar18;
      uVar14 = 0;
      do {
        while( true ) {
          uVar12 = *(ushort *)
                    ((longlong)unaff_RDI + (ulonglong)(byte)(&DAT_023e88b0)[uVar14] * 4 + 0xabe);
          uVar13 = uVar13 | (uint)uVar12 << ((byte)iVar18 & 0x1f);
          *(short *)(unaff_RDI + 0x2e6) = (short)uVar13;
          if (iVar18 < 0xe) break;
          lVar6 = unaff_RDI[5];
          unaff_RDI[5] = lVar6 + 1;
          *(char *)(unaff_RDI[2] + lVar6) = (char)uVar13;
          lVar6 = unaff_RDI[5];
          unaff_RDI[5] = lVar6 + 1;
          *(undefined1 *)(unaff_RDI[2] + lVar6) = *(undefined1 *)((longlong)unaff_RDI + 0x1731);
          uVar12 = uVar12 >> (0x10U - (char)*(int *)((longlong)unaff_RDI + 0x1734) & 0x1f);
          *(ushort *)(unaff_RDI + 0x2e6) = uVar12;
          iVar18 = *(int *)((longlong)unaff_RDI + 0x1734) + -0xd;
          uVar13 = (uint)uVar12;
          *(int *)((longlong)unaff_RDI + 0x1734) = iVar18;
          uVar14 = uVar14 + 1;
          if (iVar11 + 1 == uVar14) goto LAB_00f4c01f;
        }
        iVar18 = iVar18 + 3;
        *(int *)((longlong)unaff_RDI + 0x1734) = iVar18;
        uVar14 = uVar14 + 1;
      } while (iVar11 + 1 != uVar14);
LAB_00f4c01f:
      uVar19 = FUN_00f4d250();
      uVar19 = FUN_00f4d250(uVar19,uVar5);
      FUN_00f4cdf0(uVar19,unaff_RDI + 0x139);
    }
  }
  lVar6 = 0x36;
  do {
    *(undefined2 *)((longlong)unaff_RDI + lVar6 * 4 + -4) = 0;
    *(undefined2 *)((longlong)unaff_RDI + lVar6 * 4) = 0;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x154);
  *(undefined2 *)(unaff_RDI + 0x139) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x9cc) = 0;
  *(undefined2 *)(unaff_RDI + 0x13a) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x9d4) = 0;
  *(undefined2 *)(unaff_RDI + 0x13b) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x9dc) = 0;
  *(undefined2 *)(unaff_RDI + 0x13c) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x9e4) = 0;
  *(undefined2 *)(unaff_RDI + 0x13d) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x9ec) = 0;
  *(undefined2 *)(unaff_RDI + 0x13e) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x9f4) = 0;
  *(undefined2 *)(unaff_RDI + 0x13f) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x9fc) = 0;
  *(undefined2 *)(unaff_RDI + 0x140) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa04) = 0;
  *(undefined2 *)(unaff_RDI + 0x141) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa0c) = 0;
  *(undefined2 *)(unaff_RDI + 0x142) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa14) = 0;
  *(undefined2 *)(unaff_RDI + 0x143) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa1c) = 0;
  *(undefined2 *)(unaff_RDI + 0x144) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa24) = 0;
  *(undefined2 *)(unaff_RDI + 0x145) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa2c) = 0;
  *(undefined2 *)(unaff_RDI + 0x146) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa34) = 0;
  *(undefined2 *)(unaff_RDI + 0x147) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa3c) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xabc) = 0;
  *(undefined2 *)(unaff_RDI + 0x158) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xac4) = 0;
  *(undefined2 *)(unaff_RDI + 0x159) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xacc) = 0;
  *(undefined2 *)(unaff_RDI + 0x15a) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xad4) = 0;
  *(undefined2 *)(unaff_RDI + 0x15b) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xadc) = 0;
  *(undefined2 *)(unaff_RDI + 0x15c) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xae4) = 0;
  *(undefined2 *)(unaff_RDI + 0x15d) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xaec) = 0;
  *(undefined2 *)(unaff_RDI + 0x15e) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xaf4) = 0;
  *(undefined2 *)(unaff_RDI + 0x15f) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xafc) = 0;
  *(undefined2 *)(unaff_RDI + 0x160) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xb04) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x4d4) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x170c) = 0;
  unaff_RDI[0x2e3] = 0;
  unaff_RDI[0x2e4] = 0;
  *(undefined4 *)(unaff_RDI + 0x2e5) = 0;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)((longlong)unaff_RDI + 0x1734) < 9) {
    if (*(int *)((longlong)unaff_RDI + 0x1734) < 1) goto LAB_00f4c2e2;
    uVar3 = (undefined1)unaff_RDI[0x2e6];
  }
  else {
    lVar6 = unaff_RDI[5];
    unaff_RDI[5] = lVar6 + 1;
    *(char *)(unaff_RDI[2] + lVar6) = (char)unaff_RDI[0x2e6];
    uVar3 = *(undefined1 *)((longlong)unaff_RDI + 0x1731);
  }
  lVar6 = unaff_RDI[5];
  unaff_RDI[5] = lVar6 + 1;
  *(undefined1 *)(unaff_RDI[2] + lVar6) = uVar3;
LAB_00f4c2e2:
  *(undefined2 *)(unaff_RDI + 0x2e6) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x1734) = 0;
  return;
}


