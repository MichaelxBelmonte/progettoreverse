// Function: FUN_00efeeb5
// Address: 00efeeb5
// Size: 1392 bytes
// Class: Unknown


ulonglong FUN_00efeeb5(ulonglong param_1,byte *param_2,uint *param_3,ulonglong param_4)

{
  undefined2 *puVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong unaff_RSI;
  undefined2 *unaff_RDI;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  
  if ((param_4 & 1) != 0) {
    uVar9 = FUN_00f02e2c(param_1);
    return uVar9;
  }
  if (param_1 == 0) {
    return 0xffffffffffffffb8;
  }
  if (param_1 < 8) {
    uVar9 = (ulonglong)*param_2;
    switch(param_1) {
    case 7:
      uVar9 = uVar9 | (ulonglong)param_2[6] << 0x30;
    case 6:
      uVar9 = uVar9 + ((ulonglong)param_2[5] << 0x28);
    case 5:
      uVar9 = uVar9 + ((ulonglong)param_2[4] << 0x20);
    case 4:
      uVar9 = uVar9 + (ulonglong)param_2[3] * 0x1000000;
    case 3:
      uVar9 = uVar9 + (ulonglong)param_2[2] * 0x10000;
    case 2:
      uVar9 = uVar9 + (ulonglong)param_2[1] * 0x100;
    }
    bVar6 = param_2[param_1 - 1];
    if (bVar6 == 0) {
      return 0xffffffffffffffec;
    }
    uVar13 = 0x1f;
    if (bVar6 != 0) {
      for (; bVar6 >> uVar13 == 0; uVar13 = uVar13 - 1) {
      }
    }
    uVar13 = (uVar13 ^ 0x1f) + (int)param_1 * -8 + 0x29;
    param_1 = 0;
  }
  else {
    bVar6 = param_2[param_1 - 1];
    if (bVar6 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_1) {
      return param_1;
    }
    uVar9 = *(ulonglong *)(param_2 + (param_1 - 8));
    param_1 = param_1 - 8;
    uVar13 = 0x1f;
    if (bVar6 != 0) {
      for (; bVar6 >> uVar13 == 0; uVar13 = uVar13 - 1) {
      }
    }
    uVar13 = (uVar13 ^ 0x1f) - 0x17;
  }
  puVar1 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  cVar2 = (char)(*param_3 >> 0x10);
  if (unaff_RSI < 8) {
    if (uVar13 < 0x41) {
      if ((longlong)param_1 < 8) {
        if (param_1 == 0) {
LAB_00eff2bc:
          param_1 = 0;
          goto LAB_00eff2bf;
        }
        uVar4 = (uint)param_1;
        if (-1 < (longlong)(param_1 - (uVar13 >> 3))) {
          uVar4 = uVar13 >> 3;
        }
        uVar13 = uVar13 + uVar4 * -8;
      }
      else {
        uVar4 = uVar13 >> 3;
        uVar13 = uVar13 & 7;
      }
      param_1 = param_1 - uVar4;
      uVar9 = *(ulonglong *)(param_2 + param_1);
    }
  }
  else if ((*param_3 & 0xfc0000) < 0xc0000) {
    if (uVar13 < 0x41) {
      bVar6 = -cVar2 & 0x3f;
      do {
        if ((longlong)param_1 < 8) {
          if (param_1 == 0) goto LAB_00eff2bc;
          lVar11 = param_1 - (uVar13 >> 3);
          uVar9 = param_1 & 0xffffffff;
          if (-1 < lVar11) {
            uVar9 = (ulonglong)(uVar13 >> 3);
          }
          uVar4 = (uint)((ulonglong)lVar11 >> 0x3f);
          uVar13 = uVar13 + (int)uVar9 * -8;
        }
        else {
          uVar9 = (ulonglong)(uVar13 >> 3);
          uVar13 = uVar13 & 7;
          uVar4 = 0;
        }
        param_1 = param_1 - uVar9;
        uVar9 = *(ulonglong *)(param_2 + param_1);
        if (((undefined2 *)((longlong)puVar1 - 9U) <= unaff_RDI) || (uVar4 != 0)) break;
        uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> bVar6;
        *unaff_RDI = (short)param_3[uVar5 + 1];
        iVar10 = *(byte *)((longlong)param_3 + uVar5 * 4 + 6) + uVar13;
        uVar5 = (ulonglong)*(byte *)((longlong)param_3 + uVar5 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        *(short *)((longlong)unaff_RDI + uVar5) = (short)param_3[uVar7 + 1];
        iVar10 = (uint)*(byte *)((longlong)param_3 + uVar7 * 4 + 6) + iVar10;
        uVar8 = (ulonglong)*(byte *)((longlong)param_3 + uVar7 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        lVar11 = uVar8 + uVar5;
        *(short *)((longlong)unaff_RDI + uVar8 + uVar5) = (short)param_3[uVar7 + 1];
        iVar10 = (uint)*(byte *)((longlong)param_3 + uVar7 * 4 + 6) + iVar10;
        uVar5 = (ulonglong)*(byte *)((longlong)param_3 + uVar7 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        lVar3 = uVar5 + lVar11;
        *(short *)((longlong)unaff_RDI + uVar5 + lVar11) = (short)param_3[uVar7 + 1];
        iVar10 = (uint)*(byte *)((longlong)param_3 + uVar7 * 4 + 6) + iVar10;
        uVar5 = (ulonglong)*(byte *)((longlong)param_3 + uVar7 * 4 + 7);
        uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
        *(short *)((longlong)unaff_RDI + uVar5 + lVar3) = (short)param_3[uVar7 + 1];
        uVar13 = (uint)*(byte *)((longlong)param_3 + uVar7 * 4 + 6) + iVar10;
        unaff_RDI = (undefined2 *)
                    ((longlong)unaff_RDI +
                    (ulonglong)*(byte *)((longlong)param_3 + uVar7 * 4 + 7) + uVar5 + lVar3);
      } while (uVar13 < 0x41);
    }
  }
  else if (uVar13 < 0x41) {
    bVar6 = -cVar2 & 0x3f;
    do {
      if ((longlong)param_1 < 8) {
        if (param_1 == 0) goto LAB_00eff2bc;
        lVar11 = param_1 - (uVar13 >> 3);
        uVar9 = param_1 & 0xffffffff;
        if (-1 < lVar11) {
          uVar9 = (ulonglong)(uVar13 >> 3);
        }
        uVar4 = (uint)((ulonglong)lVar11 >> 0x3f);
        uVar13 = uVar13 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (ulonglong)(uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar4 = 0;
      }
      param_1 = param_1 - uVar9;
      uVar9 = *(ulonglong *)(param_2 + param_1);
      if (((undefined2 *)((longlong)puVar1 - 7U) <= unaff_RDI) || (uVar4 != 0)) break;
      uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> bVar6;
      *unaff_RDI = (short)param_3[uVar5 + 1];
      iVar10 = *(byte *)((longlong)param_3 + uVar5 * 4 + 6) + uVar13;
      uVar5 = (ulonglong)*(byte *)((longlong)param_3 + uVar5 * 4 + 7);
      uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
      *(short *)((longlong)unaff_RDI + uVar5) = (short)param_3[uVar7 + 1];
      iVar10 = (uint)*(byte *)((longlong)param_3 + uVar7 * 4 + 6) + iVar10;
      uVar8 = (ulonglong)*(byte *)((longlong)param_3 + uVar7 * 4 + 7);
      uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
      lVar11 = uVar8 + uVar5;
      *(short *)((longlong)unaff_RDI + uVar8 + uVar5) = (short)param_3[uVar7 + 1];
      iVar10 = (uint)*(byte *)((longlong)param_3 + uVar7 * 4 + 6) + iVar10;
      uVar5 = (ulonglong)*(byte *)((longlong)param_3 + uVar7 * 4 + 7);
      uVar7 = (uVar9 << ((byte)iVar10 & 0x3f)) >> bVar6;
      *(short *)((longlong)unaff_RDI + uVar5 + lVar11) = (short)param_3[uVar7 + 1];
      uVar13 = (uint)*(byte *)((longlong)param_3 + uVar7 * 4 + 6) + iVar10;
      unaff_RDI = (undefined2 *)
                  ((longlong)unaff_RDI +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar7 * 4 + 7) + uVar5 + lVar11);
    } while (uVar13 < 0x41);
  }
LAB_00eff2bf:
  pbVar12 = param_2 + param_1;
  if (1 < (ulonglong)((longlong)puVar1 - (longlong)unaff_RDI)) {
    for (; uVar13 < 0x41; uVar13 = *(byte *)((longlong)param_3 + uVar5 * 4 + 6) + uVar13) {
      if ((longlong)param_1 < 8) {
        if (param_1 == 0) break;
        bVar14 = pbVar12 + -(ulonglong)(uVar13 >> 3) < param_2;
        uVar4 = (uint)param_1;
        if (!bVar14) {
          uVar4 = uVar13 >> 3;
        }
        uVar13 = uVar13 + uVar4 * -8;
      }
      else {
        uVar4 = uVar13 >> 3;
        uVar13 = uVar13 & 7;
        bVar14 = false;
      }
      param_1 = param_1 - uVar4;
      pbVar12 = param_2 + param_1;
      uVar9 = *(ulonglong *)(param_2 + param_1);
      if ((puVar1 + -1 < unaff_RDI) || (bVar14)) break;
      uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> (-cVar2 & 0x3fU);
      *unaff_RDI = (short)param_3[uVar5 + 1];
      unaff_RDI = (undefined2 *)
                  ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)param_3 + uVar5 * 4 + 7));
    }
    for (; unaff_RDI <= puVar1 + -1;
        unaff_RDI = (undefined2 *)
                    ((ulonglong)*(byte *)((longlong)param_3 + uVar5 * 4 + 7) + (longlong)unaff_RDI))
    {
      uVar5 = (uVar9 << ((byte)uVar13 & 0x3f)) >> (-cVar2 & 0x3fU);
      *unaff_RDI = (short)param_3[uVar5 + 1];
      uVar13 = *(byte *)((longlong)param_3 + uVar5 * 4 + 6) + uVar13;
    }
  }
  if (unaff_RDI < puVar1) {
    uVar9 = (uVar9 << ((byte)uVar13 & 0x3f)) >> (-cVar2 & 0x3fU);
    *(char *)unaff_RDI = (char)param_3[uVar9 + 1];
    if (*(char *)((longlong)param_3 + uVar9 * 4 + 7) == '\x01') {
      uVar13 = uVar13 + *(byte *)((longlong)param_3 + uVar9 * 4 + 6);
    }
    else if ((uVar13 < 0x40) &&
            (uVar13 = uVar13 + *(byte *)((longlong)param_3 + uVar9 * 4 + 6), 0x3f < uVar13)) {
      uVar13 = 0x40;
    }
  }
  if (uVar13 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (pbVar12 != param_2) {
    unaff_RSI = 0xffffffffffffffec;
  }
  return unaff_RSI;
}


