// Function: FUN_00baf170
// Address: 00baf170
// Size: 895 bytes
// Class: GNData


void FUN_00baf170(int param_1,int param_2,longlong param_3,int param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  short sVar13;
  ushort uVar15;
  short sVar16;
  int iVar17;
  longlong unaff_RSI;
  byte bVar18;
  short sVar19;
  uint uVar20;
  longlong unaff_RDI;
  uint uVar21;
  ushort uVar22;
  float fVar23;
  ushort auStack_34 [2];
  ushort uVar14;
  
  ___bzero();
  uVar6 = (ulonglong)*(ushort *)(unaff_RDI + 0x3c);
  if (0 < (short)*(ushort *)(unaff_RDI + 0x3c)) {
    lVar8 = *(longlong *)(unaff_RDI + 0x78);
    lVar10 = 0;
    do {
      uVar1 = *(undefined2 *)(unaff_RSI + lVar10 * 4);
      bVar18 = *(byte *)(unaff_RSI + 2 + lVar10 * 4);
      if (0x57 < bVar18) {
        bVar18 = 0x58;
      }
      auStack_34[lVar10] = (ushort)bVar18;
      *(undefined2 *)(lVar8 + lVar10 * 2) = uVar1;
      lVar10 = lVar10 + 1;
      uVar6 = (ulonglong)*(short *)(unaff_RDI + 0x3c);
    } while (lVar10 < (longlong)uVar6);
  }
  uVar21 = (uint)(short)uVar6;
  iVar17 = uVar21 * 4;
  uVar5 = (uint)*(short *)(unaff_RDI + 0x70);
  uVar20 = uVar21;
  if (iVar17 < (int)uVar5) {
    do {
      if (0 < (short)uVar6) {
        lVar8 = *(longlong *)(unaff_RDI + 0x78);
        lVar10 = 0;
        uVar20 = uVar21;
        do {
          lVar7 = (longlong)iVar17;
          bVar18 = *(byte *)(unaff_RSI + lVar7);
          *(ushort *)(lVar8 + (longlong)(int)uVar21 * 2 + lVar10 * 2) = bVar18 & 0xf;
          sVar16 = *(short *)(unaff_RDI + 0x3c);
          *(ushort *)(lVar8 + (longlong)(int)(uVar20 + (int)sVar16) * 2) = (ushort)(bVar18 >> 4);
          iVar9 = (int)*(short *)(unaff_RDI + 0x3c) + (int)sVar16;
          bVar18 = *(byte *)(unaff_RSI + 1 + lVar7);
          *(ushort *)(lVar8 + (longlong)(int)(uVar20 + iVar9) * 2) = bVar18 & 0xf;
          iVar9 = *(short *)(unaff_RDI + 0x3c) + iVar9;
          *(ushort *)(lVar8 + (longlong)(int)(uVar20 + iVar9) * 2) = (ushort)(bVar18 >> 4);
          iVar9 = *(short *)(unaff_RDI + 0x3c) + iVar9;
          bVar18 = *(byte *)(unaff_RSI + 2 + lVar7);
          *(ushort *)(lVar8 + (longlong)(int)(uVar20 + iVar9) * 2) = bVar18 & 0xf;
          iVar9 = *(short *)(unaff_RDI + 0x3c) + iVar9;
          *(ushort *)(lVar8 + (longlong)(int)(uVar20 + iVar9) * 2) = (ushort)(bVar18 >> 4);
          iVar9 = *(short *)(unaff_RDI + 0x3c) + iVar9;
          iVar17 = iVar17 + 4;
          bVar18 = *(byte *)(unaff_RSI + 3 + lVar7);
          *(ushort *)(lVar8 + (longlong)(int)(uVar20 + iVar9) * 2) = bVar18 & 0xf;
          *(ushort *)(lVar8 + (longlong)(int)(*(short *)(unaff_RDI + 0x3c) + iVar9 + uVar20) * 2) =
               (ushort)(bVar18 >> 4);
          lVar10 = lVar10 + 1;
          uVar6 = (ulonglong)*(short *)(unaff_RDI + 0x3c);
          uVar20 = uVar20 + 1;
        } while (lVar10 < (longlong)uVar6);
        uVar5 = (uint)*(ushort *)(unaff_RDI + 0x70);
      }
      uVar21 = uVar21 + (short)uVar6 * 8;
      uVar20 = (int)(short)uVar6;
    } while (iVar17 < (short)uVar5);
  }
  uVar22 = (ushort)uVar6;
  sVar16 = *(short *)(unaff_RDI + 0x6e);
  uVar21 = (uint)sVar16;
  if ((int)uVar20 < (int)(uVar20 * uVar21)) {
    lVar8 = *(longlong *)(unaff_RDI + 0x78);
    uVar11 = (ulonglong)(short)uVar22;
    do {
      uVar22 = *(ushort *)(lVar8 + uVar11 * 2);
      lVar7 = 0;
      lVar10 = (longlong)
               (int)((int)uVar11 - (((uint)(uVar11 >> 0x1f) & 1) + (int)uVar11 & 0xfffffffe));
      if ((short)uVar6 < 2) {
        lVar10 = lVar7;
      }
      uVar2 = *(ushort *)(&DAT_023d8d70 + (longlong)(short)auStack_34[lVar10] * 2);
      uVar12 = (short)uVar2 >> 2;
      if ((uVar22 & 1) == 0) {
        uVar12 = uVar22 & 1;
      }
      uVar15 = (short)uVar2 >> 1;
      if ((uVar22 & 2) == 0) {
        uVar15 = uVar22 & 2;
      }
      uVar14 = uVar22 & 4;
      if ((uVar22 & 4) != 0) {
        uVar14 = uVar2;
      }
      sVar13 = uVar14 + uVar15 + uVar12 + ((short)uVar2 >> 3);
      sVar16 = -sVar13;
      if ((uVar22 & 8) == 0) {
        sVar16 = sVar13;
      }
      sVar13 = *(short *)(lVar8 + (longlong)(int)uVar20 * -2 + uVar11 * 2);
      sVar19 = sVar16 + sVar13;
      if (SCARRY2(sVar16,sVar13)) {
        sVar19 = (-1 < (short)(sVar16 + sVar13)) + 0x7fff;
      }
      uVar22 = auStack_34[lVar10] + *(short *)(&DAT_023d8e30 + (ulonglong)(uVar22 & 0xf) * 2);
      auStack_34[lVar10] = uVar22;
      if (((short)uVar22 < 0) || (lVar7 = 0x58, 0x58 < (short)uVar22)) {
        auStack_34[lVar10] = (ushort)lVar7;
      }
      *(short *)(lVar8 + uVar11 * 2) = sVar19;
      uVar11 = uVar11 + 1;
      uVar22 = *(ushort *)(unaff_RDI + 0x3c);
      uVar6 = (ulonglong)uVar22;
      sVar16 = *(short *)(unaff_RDI + 0x6e);
      uVar21 = (uint)sVar16;
      uVar20 = (uint)(short)uVar22;
    } while ((longlong)uVar11 < (longlong)(int)(uVar20 * uVar21));
  }
  fVar4 = DAT_023d8d50;
  fVar3 = DAT_023d4ff4;
  if ((0 < sVar16) && (0 < (short)uVar22)) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      if (((longlong)param_2 <= (longlong)uVar6) && ((longlong)uVar6 < (longlong)param_1)) {
        uVar11 = 0;
        do {
          lVar10 = *(longlong *)(param_3 + uVar11 * 8);
          if (lVar10 != 0) {
            sVar16 = *(short *)(*(longlong *)(unaff_RDI + 0x78) + lVar8 + uVar11 * 2);
            fVar23 = (float)(int)sVar16;
            if (sVar16 < 1) {
              fVar23 = fVar23 * fVar3;
            }
            else {
              fVar23 = fVar23 / fVar4;
            }
            *(float *)(lVar10 + (longlong)((param_4 - param_2) + (int)uVar6) * 4) = fVar23;
          }
          uVar11 = uVar11 + 1;
        } while (uVar20 != uVar11);
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + (longlong)(int)uVar20 * 2;
    } while (uVar6 != uVar21);
  }
  return;
}


