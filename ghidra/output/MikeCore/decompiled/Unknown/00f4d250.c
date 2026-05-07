// Function: FUN_00f4d250
// Address: 00f4d250
// Size: 1485 bytes
// Class: Unknown


void FUN_00f4d250(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  if (-1 < param_2) {
    uVar2 = *(ushort *)(unaff_RSI + 2);
    uVar7 = 7;
    if (uVar2 == 0) {
      uVar7 = 0x8a;
    }
    iVar13 = 4 - (uint)(uVar2 == 0);
    uVar11 = 0;
    uVar12 = 0xffffffff;
    iVar6 = 0;
    uVar9 = (uint)uVar2;
    do {
      uVar2 = *(ushort *)(unaff_RSI + 6 + uVar11 * 4);
      uVar10 = (uint)uVar2;
      uVar11 = uVar11 + 1;
      iVar14 = iVar6 + 1;
      if (((int)uVar7 <= iVar14) || (uVar9 != uVar10)) {
        if (iVar14 < iVar13) {
          iVar6 = *(int *)(&DAT_00001734 + unaff_RDI);
          do {
            while( true ) {
              uVar3 = *(ushort *)(unaff_RDI + 0xabe + (ulonglong)uVar9 * 4);
              uVar5 = *(ushort *)(unaff_RDI + 0xabc + (ulonglong)uVar9 * 4);
              uVar8 = uVar5 << ((byte)iVar6 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
              *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar8;
              if (iVar6 <= (int)(0x10 - (uint)uVar3)) break;
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
              *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
              *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar8;
              uVar1 = (&DAT_00001731)[unaff_RDI];
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
              *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
              *(ushort *)(&DAT_00001730 + unaff_RDI) =
                   uVar5 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
              iVar6 = (uint)uVar3 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
              *(int *)(&DAT_00001734 + unaff_RDI) = iVar6;
              iVar14 = iVar14 + -1;
              if (iVar14 == 0) goto joined_r0x00f4d81d;
            }
            iVar6 = iVar6 + (uint)uVar3;
            *(int *)(&DAT_00001734 + unaff_RDI) = iVar6;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        else {
          if (uVar9 == 0) {
            if (iVar6 < 10) {
              uVar3 = *(ushort *)(unaff_RDI + 0xb02);
              iVar13 = *(int *)(&DAT_00001734 + unaff_RDI);
              uVar5 = *(ushort *)(unaff_RDI + 0xb00);
              uVar8 = uVar5 << ((byte)iVar13 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
              if ((int)(0x10 - (uint)uVar3) < iVar13) {
                *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar8;
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar8;
                uVar1 = (&DAT_00001731)[unaff_RDI];
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
                uVar8 = uVar5 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
                iVar13 = (uint)uVar3 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
                *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
              }
              else {
                iVar13 = iVar13 + (uint)uVar3;
                *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
              }
              if (iVar13 < 0xe) {
                *(ushort *)(&DAT_00001730 + unaff_RDI) =
                     uVar8 | (ushort)(iVar6 + 0xfffe << ((byte)iVar13 & 0x1f));
                iVar13 = iVar13 + 3;
              }
              else {
                uVar7 = (uint)uVar8 | iVar6 + 0xfffeU << ((byte)iVar13 & 0x1f);
                *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar7;
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar7;
                uVar1 = (&DAT_00001731)[unaff_RDI];
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
                *(short *)(&DAT_00001730 + unaff_RDI) =
                     (short)((iVar6 + 0xfffeU & 0xffff) >>
                            (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f));
                iVar13 = *(int *)(&DAT_00001734 + unaff_RDI) + -0xd;
              }
            }
            else {
              uVar7 = (uint)*(ushort *)(unaff_RDI + 0xb06);
              iVar13 = *(int *)(&DAT_00001734 + unaff_RDI);
              uVar3 = *(ushort *)(unaff_RDI + 0xb04);
              uVar5 = uVar3 << ((byte)iVar13 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
              if ((int)(0x10 - uVar7) < iVar13) {
                *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar5;
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar5;
                uVar1 = (&DAT_00001731)[unaff_RDI];
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
                uVar5 = uVar3 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
                iVar13 = uVar7 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
                *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
              }
              else {
                iVar13 = iVar13 + uVar7;
                *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
              }
              if (iVar13 < 10) {
                *(ushort *)(&DAT_00001730 + unaff_RDI) =
                     uVar5 | (ushort)(iVar6 + 0xfff6 << ((byte)iVar13 & 0x1f));
                iVar13 = iVar13 + 7;
              }
              else {
                uVar7 = (uint)uVar5 | iVar6 + 0xfff6U << ((byte)iVar13 & 0x1f);
                *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar7;
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar7;
                uVar1 = (&DAT_00001731)[unaff_RDI];
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
                *(short *)(&DAT_00001730 + unaff_RDI) =
                     (short)((iVar6 + 0xfff6U & 0xffff) >>
                            (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f));
                iVar13 = *(int *)(&DAT_00001734 + unaff_RDI) + -9;
              }
            }
          }
          else {
            if (uVar9 == uVar12) {
              iVar13 = *(int *)(&DAT_00001734 + unaff_RDI);
              iVar6 = iVar14;
            }
            else {
              uVar3 = *(ushort *)(unaff_RDI + 0xabe + (ulonglong)uVar9 * 4);
              iVar13 = *(int *)(&DAT_00001734 + unaff_RDI);
              uVar5 = *(ushort *)(unaff_RDI + 0xabc + (ulonglong)uVar9 * 4);
              uVar8 = uVar5 << ((byte)iVar13 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
              *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar8;
              if ((int)(0x10 - (uint)uVar3) < iVar13) {
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar8;
                uVar1 = (&DAT_00001731)[unaff_RDI];
                lVar4 = *(longlong *)(unaff_RDI + 0x28);
                *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
                *(ushort *)(&DAT_00001730 + unaff_RDI) =
                     uVar5 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
                iVar13 = (uint)uVar3 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
              }
              else {
                iVar13 = iVar13 + (uint)uVar3;
              }
              *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
            }
            uVar7 = (uint)*(ushort *)(unaff_RDI + 0xafe);
            uVar3 = *(ushort *)(unaff_RDI + 0xafc);
            uVar5 = uVar3 << ((byte)iVar13 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
            if ((int)(0x10 - uVar7) < iVar13) {
              *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar5;
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
              *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
              *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar5;
              uVar1 = (&DAT_00001731)[unaff_RDI];
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
              *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
              uVar5 = uVar3 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
              iVar13 = uVar7 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
              *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
            }
            else {
              iVar13 = iVar13 + uVar7;
              *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
            }
            if (iVar13 < 0xf) {
              *(ushort *)(&DAT_00001730 + unaff_RDI) =
                   uVar5 | (ushort)(iVar6 + 0xfffd << ((byte)iVar13 & 0x1f));
              iVar13 = iVar13 + 2;
            }
            else {
              uVar7 = (uint)uVar5 | iVar6 + 0xfffdU << ((byte)iVar13 & 0x1f);
              *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar7;
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
              *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
              *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = (char)uVar7;
              uVar1 = (&DAT_00001731)[unaff_RDI];
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
              *(longlong *)(unaff_RDI + 0x28) = lVar4 + 1;
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar4) = uVar1;
              *(short *)(&DAT_00001730 + unaff_RDI) =
                   (short)((iVar6 + 0xfffdU & 0xffff) >>
                          (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f));
              iVar13 = *(int *)(&DAT_00001734 + unaff_RDI) + -0xe;
            }
          }
          *(int *)(&DAT_00001734 + unaff_RDI) = iVar13;
        }
joined_r0x00f4d81d:
        uVar12 = uVar9;
        if (uVar2 == 0) {
          iVar14 = 0;
          uVar7 = 0x8a;
          iVar13 = 3;
        }
        else {
          iVar14 = 0;
          iVar13 = 4 - (uint)(uVar9 == uVar10);
          uVar7 = uVar9 == uVar10 ^ 7;
        }
      }
      iVar6 = iVar14;
      uVar9 = uVar10;
    } while (uVar11 != param_2 + 1);
  }
  return;
}


