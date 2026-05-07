// Function: FUN_00f4cdf0
// Address: 00f4cdf0
// Size: 1091 bytes
// Class: Unknown


void FUN_00f4cdf0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (*(int *)(&DAT_0000170c + unaff_RDI) == 0) {
    iVar8 = *(int *)(&DAT_00001734 + unaff_RDI);
  }
  else {
    uVar12 = 0;
    do {
      lVar6 = *(longlong *)(&DAT_00001700 + unaff_RDI);
      uVar7 = uVar12 + 1;
      uVar9 = (ulonglong)uVar12;
      uVar11 = uVar12 + 2;
      uVar12 = uVar12 + 3;
      uVar7 = (uint)CONCAT11(*(undefined1 *)(lVar6 + (ulonglong)uVar7),
                             *(undefined1 *)(lVar6 + uVar9));
      bVar1 = *(byte *)(lVar6 + (ulonglong)uVar11);
      uVar9 = (ulonglong)bVar1;
      if (uVar7 == 0) {
        uVar3 = *(ushort *)(unaff_RSI + 2 + uVar9 * 4);
        iVar8 = *(int *)(&DAT_00001734 + unaff_RDI);
        uVar4 = *(ushort *)(unaff_RSI + uVar9 * 4);
        uVar10 = uVar4 << ((byte)iVar8 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
        *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar10;
        if ((int)(0x10 - (uint)uVar3) < iVar8) {
          lVar6 = *(longlong *)(unaff_RDI + 0x28);
          *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
          *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = (char)uVar10;
          uVar2 = (&DAT_00001731)[unaff_RDI];
          lVar6 = *(longlong *)(unaff_RDI + 0x28);
          *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = uVar2;
          *(ushort *)(&DAT_00001730 + unaff_RDI) =
               uVar4 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
          iVar8 = (uint)uVar3 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
        }
        else {
          iVar8 = iVar8 + (uint)uVar3;
        }
LAB_00f4ce12:
        *(int *)(&DAT_00001734 + unaff_RDI) = iVar8;
      }
      else {
        uVar9 = (ulonglong)(byte)(&DAT_023e8160)[uVar9];
        uVar3 = *(ushort *)(unaff_RSI + 0x406 + uVar9 * 4);
        iVar8 = *(int *)(&DAT_00001734 + unaff_RDI);
        uVar4 = *(ushort *)(unaff_RSI + 0x404 + uVar9 * 4);
        uVar10 = uVar4 << ((byte)iVar8 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
        *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar10;
        if ((int)(0x10 - (uint)uVar3) < iVar8) {
          lVar6 = *(longlong *)(unaff_RDI + 0x28);
          *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
          *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = (char)uVar10;
          uVar2 = (&DAT_00001731)[unaff_RDI];
          lVar6 = *(longlong *)(unaff_RDI + 0x28);
          *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = uVar2;
          uVar10 = uVar4 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
          *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar10;
          iVar8 = (uint)uVar3 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
          *(int *)(&DAT_00001734 + unaff_RDI) = iVar8;
        }
        else {
          iVar8 = iVar8 + (uint)uVar3;
          *(int *)(&DAT_00001734 + unaff_RDI) = iVar8;
        }
        uVar11 = (uint)uVar10;
        if (uVar9 - 8 < 0x14) {
          uVar13 = (uint)bVar1 - *(int *)(&DAT_023e88d0 + uVar9 * 4);
          iVar5 = *(int *)(&DAT_023e8760 + uVar9 * 4);
          if (0x10 - iVar5 < iVar8) {
            uVar11 = uVar11 | uVar13 << ((byte)iVar8 & 0x1f);
            *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar11;
            lVar6 = *(longlong *)(unaff_RDI + 0x28);
            *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
            *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = (char)uVar11;
            uVar2 = (&DAT_00001731)[unaff_RDI];
            lVar6 = *(longlong *)(unaff_RDI + 0x28);
            *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = uVar2;
            uVar11 = (uVar13 & 0xffff) >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f)
            ;
            *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar11;
            iVar8 = iVar5 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
          }
          else {
            uVar11 = uVar11 | uVar13 << ((byte)iVar8 & 0x1f);
            *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar11;
            iVar8 = iVar5 + iVar8;
          }
          *(int *)(&DAT_00001734 + unaff_RDI) = iVar8;
        }
        uVar7 = uVar7 - 1;
        uVar13 = (uVar7 >> 7) + 0x100;
        if (uVar7 < 0x100) {
          uVar13 = uVar7;
        }
        bVar1 = (&DAT_023e7f60)[uVar13];
        uVar9 = (ulonglong)bVar1;
        uVar3 = *(ushort *)(param_2 + 2 + uVar9 * 4);
        uVar4 = *(ushort *)(param_2 + uVar9 * 4);
        uVar11 = uVar11 | (uint)uVar4 << ((byte)iVar8 & 0x1f);
        *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar11;
        if ((int)(0x10 - (uint)uVar3) < iVar8) {
          lVar6 = *(longlong *)(unaff_RDI + 0x28);
          *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
          *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = (char)uVar11;
          uVar2 = (&DAT_00001731)[unaff_RDI];
          lVar6 = *(longlong *)(unaff_RDI + 0x28);
          *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = uVar2;
          uVar4 = uVar4 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
          *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar4;
          iVar8 = (uint)uVar3 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
          uVar11 = (uint)uVar4;
          *(int *)(&DAT_00001734 + unaff_RDI) = iVar8;
        }
        else {
          iVar8 = iVar8 + (uint)uVar3;
          *(int *)(&DAT_00001734 + unaff_RDI) = iVar8;
        }
        if (3 < bVar1) {
          uVar7 = uVar7 - *(int *)(&DAT_023e8950 + uVar9 * 4);
          iVar5 = *(int *)(&DAT_023e87e0 + uVar9 * 4);
          if (0x10 - iVar5 < iVar8) {
            uVar11 = uVar11 | uVar7 << ((byte)iVar8 & 0x1f);
            *(short *)(&DAT_00001730 + unaff_RDI) = (short)uVar11;
            lVar6 = *(longlong *)(unaff_RDI + 0x28);
            *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
            *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = (char)uVar11;
            uVar2 = (&DAT_00001731)[unaff_RDI];
            lVar6 = *(longlong *)(unaff_RDI + 0x28);
            *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = uVar2;
            *(short *)(&DAT_00001730 + unaff_RDI) =
                 (short)((uVar7 & 0xffff) >>
                        (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f));
            iVar8 = iVar5 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
          }
          else {
            *(ushort *)(&DAT_00001730 + unaff_RDI) =
                 (ushort)uVar11 | (ushort)(uVar7 << ((byte)iVar8 & 0x1f));
            iVar8 = iVar5 + iVar8;
          }
          goto LAB_00f4ce12;
        }
      }
    } while (uVar12 < *(uint *)(&DAT_0000170c + unaff_RDI));
  }
  uVar3 = *(ushort *)(unaff_RSI + 0x402);
  uVar4 = *(ushort *)(unaff_RSI + 0x400);
  uVar10 = uVar4 << ((byte)iVar8 & 0x1f) | *(ushort *)(&DAT_00001730 + unaff_RDI);
  *(ushort *)(&DAT_00001730 + unaff_RDI) = uVar10;
  if ((int)(0x10 - (uint)uVar3) < iVar8) {
    lVar6 = *(longlong *)(unaff_RDI + 0x28);
    *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
    *(char *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = (char)uVar10;
    uVar2 = (&DAT_00001731)[unaff_RDI];
    lVar6 = *(longlong *)(unaff_RDI + 0x28);
    *(longlong *)(unaff_RDI + 0x28) = lVar6 + 1;
    *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) = uVar2;
    *(ushort *)(&DAT_00001730 + unaff_RDI) =
         uVar4 >> (0x10U - (char)*(int *)(&DAT_00001734 + unaff_RDI) & 0x1f);
    iVar8 = (uint)uVar3 + *(int *)(&DAT_00001734 + unaff_RDI) + -0x10;
  }
  else {
    iVar8 = iVar8 + (uint)uVar3;
  }
  *(int *)(&DAT_00001734 + unaff_RDI) = iVar8;
  return;
}


