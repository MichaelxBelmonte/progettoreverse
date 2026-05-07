// Function: FUN_00efda22
// Address: 00efda22
// Size: 599 bytes
// Class: Unknown


longlong FUN_00efda22(int param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong unaff_RSI;
  uint uVar11;
  int iVar12;
  undefined2 *unaff_RDI;
  undefined2 *puVar13;
  undefined2 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  
  iVar9 = 1 << ((byte)param_3 & 0x1f);
  uVar15 = param_1 + 1;
  if ((uVar15 == 0) || (param_3 == 0x1f)) {
    return -1;
  }
  puVar13 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI + -2);
  uVar10 = param_3 - 5;
  param_3 = param_3 + 1;
  iVar6 = 4;
  bVar18 = false;
  uVar16 = 0;
  puVar14 = unaff_RDI;
  uVar8 = iVar9 + 1;
  do {
    if (bVar18) {
      uVar17 = uVar16;
      if ((uint)uVar16 < uVar15) {
        while (*(short *)(param_2 + uVar17 * 2) == 0) {
          uVar17 = uVar17 + 1;
          if (uVar15 == uVar17) goto LAB_00efdc24;
        }
      }
      uVar7 = (uint)uVar17;
      if (uVar7 == uVar15) {
LAB_00efdc24:
        if (uVar8 != 1) {
          return -1;
        }
        if ((param_4 == 0) && (puVar13 < puVar14)) {
          return -0x46;
        }
        *puVar14 = (short)uVar10;
        iVar9 = iVar6 + 7;
        if (-1 < iVar6 + 7) {
          iVar9 = iVar6;
        }
        return (longlong)puVar14 + ((longlong)(iVar9 + 7 >> 3) - (longlong)unaff_RDI);
      }
      if ((uint)uVar16 + 0x18 <= uVar7) {
        do {
          if ((param_4 == 0) && (puVar13 < puVar14)) {
            return -0x46;
          }
          uVar10 = uVar10 + (0xffff << ((byte)iVar6 & 0x1f));
          *puVar14 = (short)uVar10;
          puVar14 = puVar14 + 1;
          uVar10 = uVar10 >> 0x10;
          iVar1 = (int)uVar16;
          uVar11 = iVar1 + 0x18;
          uVar16 = (ulonglong)uVar11;
        } while (iVar1 + 0x30U <= uVar7);
        uVar16 = (ulonglong)uVar11;
      }
      uVar11 = (uint)uVar16;
      uVar3 = uVar11 + 3;
      while (uVar3 <= uVar7) {
        uVar10 = uVar10 + (3 << ((byte)iVar6 & 0x1f));
        iVar6 = iVar6 + 2;
        iVar1 = (int)uVar16;
        uVar11 = iVar1 + 3;
        uVar16 = (ulonglong)uVar11;
        uVar3 = iVar1 + 6;
      }
      uVar10 = (uVar7 - uVar11 << ((byte)iVar6 & 0x1f)) + uVar10;
      uVar16 = uVar17;
      if (iVar6 < 0xf) {
        iVar6 = iVar6 + 2;
      }
      else {
        if ((param_4 == 0) && (puVar13 < puVar14)) {
          return -0x46;
        }
        *puVar14 = (short)uVar10;
        puVar14 = puVar14 + 1;
        uVar10 = uVar10 >> 0x10;
        iVar6 = iVar6 + -0xe;
      }
    }
    iVar4 = (int)*(short *)(param_2 + (uVar16 & 0xffffffff) * 2);
    iVar1 = ~uVar8 + iVar9 * 2;
    iVar2 = -iVar4;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    iVar12 = iVar1;
    if (iVar4 + 1 < iVar9) {
      iVar12 = 0;
    }
    iVar4 = iVar12 + iVar4 + 1;
    bVar5 = (byte)iVar6;
    bVar18 = iVar4 == 1;
    uVar7 = uVar8 - iVar2;
    if (uVar7 == 0 || (int)uVar8 < iVar2) {
      return -1;
    }
    iVar6 = (iVar6 + param_3) - (uint)(iVar4 < iVar1);
    for (; (int)uVar7 < iVar9; iVar9 = iVar9 >> 1) {
      param_3 = param_3 + -1;
    }
    uVar10 = uVar10 + (iVar4 << (bVar5 & 0x1f));
    if (0x10 < iVar6) {
      if ((param_4 == 0) && (puVar13 < puVar14)) {
        return -0x46;
      }
      *puVar14 = (short)uVar10;
      puVar14 = puVar14 + 1;
      uVar10 = uVar10 >> 0x10;
      iVar6 = iVar6 + -0x10;
    }
    uVar11 = (int)uVar16 + 1;
    uVar8 = uVar7;
    if ((uVar15 <= uVar11) || (uVar16 = (ulonglong)uVar11, (int)uVar7 < 2)) goto LAB_00efdc24;
  } while( true );
}


