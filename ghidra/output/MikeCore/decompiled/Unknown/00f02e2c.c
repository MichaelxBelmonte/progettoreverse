// Function: FUN_00f02e2c
// Address: 00f02e2c
// Size: 1304 bytes
// Class: Unknown


ulonglong FUN_00f02e2c(ulonglong param_1,byte *param_2,uint *param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong unaff_RSI;
  undefined2 *unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  byte *pbVar14;
  bool bVar15;
  
  if (param_1 == 0) {
    return 0xffffffffffffffb8;
  }
  if (param_1 < 8) {
    uVar4 = (ulonglong)*param_2;
    switch(param_1) {
    case 7:
      uVar4 = uVar4 | (ulonglong)param_2[6] << 0x30;
    case 6:
      uVar4 = uVar4 + ((ulonglong)param_2[5] << 0x28);
    case 5:
      uVar4 = uVar4 + ((ulonglong)param_2[4] << 0x20);
    case 4:
      uVar4 = uVar4 + (ulonglong)param_2[3] * 0x1000000;
    case 3:
      uVar4 = uVar4 + (ulonglong)param_2[2] * 0x10000;
    case 2:
      uVar4 = uVar4 + (ulonglong)param_2[1] * 0x100;
    }
    if (param_2[param_1 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar5 = LZCOUNT((uint)param_2[param_1 - 1]) + (int)param_1 * -8 + 0x29;
    uVar3 = 0;
  }
  else {
    if (param_2[param_1 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_1) {
      return param_1;
    }
    uVar4 = *(ulonglong *)(param_2 + (param_1 - 8));
    uVar3 = param_1 - 8;
    uVar5 = LZCOUNT((uint)param_2[param_1 - 1]) - 0x17;
  }
  uVar10 = (ulonglong)uVar5;
  puVar1 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  uVar7 = *param_3;
  uVar11 = uVar7 >> 0x10;
  if (unaff_RSI < 8) {
    if (uVar5 < 0x41) {
      if ((longlong)uVar3 < 8) {
        if (uVar3 == 0) {
LAB_00f031ef:
          uVar3 = 0;
          goto LAB_00f031f1;
        }
        uVar4 = uVar3 & 0xffffffff;
        if (-1 < (longlong)(uVar3 - (uVar5 >> 3))) {
          uVar4 = (ulonglong)(uVar5 >> 3);
        }
        uVar5 = uVar5 + (int)uVar4 * -8;
      }
      else {
        uVar4 = (ulonglong)(uVar5 >> 3);
        uVar5 = uVar5 & 7;
      }
      uVar10 = (ulonglong)uVar5;
      uVar3 = uVar3 - uVar4;
      uVar4 = *(ulonglong *)(param_2 + uVar3);
    }
  }
  else if ((uVar7 & 0xfc0000) < 0xc0000) {
    if (uVar5 < 0x41) {
      uVar5 = -uVar11 & 0x3f;
      do {
        if ((longlong)uVar3 < 8) {
          if (uVar3 == 0) goto LAB_00f031ef;
          lVar13 = uVar3 - (uVar10 >> 3);
          uVar4 = uVar3 & 0xffffffff;
          if (-1 < lVar13) {
            uVar4 = uVar10 >> 3;
          }
          uVar12 = (uint)((ulonglong)lVar13 >> 0x3f);
          uVar6 = (uint)uVar10 + (int)uVar4 * -8;
        }
        else {
          uVar4 = uVar10 >> 3;
          uVar6 = (uint)uVar10 & 7;
          uVar12 = 0;
        }
        uVar10 = (ulonglong)uVar6;
        uVar3 = uVar3 - uVar4;
        uVar4 = *(ulonglong *)(param_2 + uVar3);
        if (((undefined2 *)((longlong)puVar1 - 9U) <= unaff_RDI) || (uVar12 != 0)) break;
        uVar10 = (uVar4 << (uVar10 & 0x3f)) >> uVar5;
        *unaff_RDI = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar8 = (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7);
        uVar10 = (uVar4 << ((ulonglong)uVar6 & 0x3f)) >> uVar5;
        *(short *)((longlong)unaff_RDI + uVar8) = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar9 = (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7);
        lVar13 = uVar9 + uVar8;
        uVar10 = (uVar4 << ((ulonglong)uVar6 & 0x3f)) >> uVar5;
        *(short *)((longlong)unaff_RDI + uVar9 + uVar8) = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar8 = (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7);
        lVar2 = uVar8 + lVar13;
        uVar10 = (uVar4 << ((ulonglong)uVar6 & 0x3f)) >> uVar5;
        *(short *)((longlong)unaff_RDI + uVar8 + lVar13) = (short)param_3[uVar10 + 1];
        uVar6 = *(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar6;
        uVar9 = (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7);
        uVar8 = (uVar4 << ((ulonglong)uVar6 & 0x3f)) >> uVar5;
        *(short *)((longlong)unaff_RDI + uVar9 + lVar2) = (short)param_3[uVar8 + 1];
        uVar6 = *(byte *)((longlong)param_3 + uVar8 * 4 + 6) + uVar6;
        uVar10 = (ulonglong)uVar6;
        unaff_RDI = (undefined2 *)
                    ((longlong)unaff_RDI +
                    (ulonglong)*(byte *)((longlong)param_3 + uVar8 * 4 + 7) + uVar9 + lVar2);
      } while (uVar6 < 0x41);
    }
  }
  else if (uVar5 < 0x41) {
    uVar5 = -uVar11 & 0x3f;
    do {
      if ((longlong)uVar3 < 8) {
        if (uVar3 == 0) goto LAB_00f031ef;
        lVar13 = uVar3 - (uVar10 >> 3);
        uVar4 = uVar3 & 0xffffffff;
        if (-1 < lVar13) {
          uVar4 = uVar10 >> 3;
        }
        uVar12 = (uint)((ulonglong)lVar13 >> 0x3f);
        uVar6 = (uint)uVar10 + (int)uVar4 * -8;
      }
      else {
        uVar4 = uVar10 >> 3;
        uVar6 = (uint)uVar10 & 7;
        uVar12 = 0;
      }
      uVar10 = (ulonglong)uVar6;
      uVar3 = uVar3 - uVar4;
      uVar4 = *(ulonglong *)(param_2 + uVar3);
      if (((undefined2 *)((longlong)puVar1 - 7U) <= unaff_RDI) || (uVar12 != 0)) break;
      uVar10 = (uVar4 << (uVar10 & 0x3f)) >> uVar5;
      *unaff_RDI = (short)param_3[uVar10 + 1];
      uVar6 = *(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar6;
      uVar8 = (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7);
      uVar10 = (uVar4 << ((ulonglong)uVar6 & 0x3f)) >> uVar5;
      *(short *)((longlong)unaff_RDI + uVar8) = (short)param_3[uVar10 + 1];
      uVar6 = *(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar6;
      uVar9 = (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7);
      lVar13 = uVar9 + uVar8;
      uVar10 = (uVar4 << ((ulonglong)uVar6 & 0x3f)) >> uVar5;
      *(short *)((longlong)unaff_RDI + uVar9 + uVar8) = (short)param_3[uVar10 + 1];
      uVar6 = *(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar6;
      uVar8 = (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7);
      uVar9 = (uVar4 << ((ulonglong)uVar6 & 0x3f)) >> uVar5;
      *(short *)((longlong)unaff_RDI + uVar8 + lVar13) = (short)param_3[uVar9 + 1];
      uVar6 = *(byte *)((longlong)param_3 + uVar9 * 4 + 6) + uVar6;
      uVar10 = (ulonglong)uVar6;
      unaff_RDI = (undefined2 *)
                  ((longlong)unaff_RDI +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar9 * 4 + 7) + uVar8 + lVar13);
    } while (uVar6 < 0x41);
  }
LAB_00f031f1:
  pbVar14 = param_2 + uVar3;
  if (1 < (ulonglong)((longlong)puVar1 - (longlong)unaff_RDI)) {
    for (; uVar5 = (uint)uVar10, uVar5 < 0x41;
        uVar10 = (ulonglong)(*(byte *)((longlong)param_3 + uVar10 * 4 + 6) + uVar5)) {
      if ((longlong)uVar3 < 8) {
        if (uVar3 == 0) break;
        bVar15 = pbVar14 + -(uVar10 >> 3) < param_2;
        uVar4 = uVar3 & 0xffffffff;
        if (!bVar15) {
          uVar4 = uVar10 >> 3;
        }
        uVar5 = uVar5 + (int)uVar4 * -8;
      }
      else {
        uVar4 = uVar10 >> 3;
        uVar5 = uVar5 & 7;
        bVar15 = false;
      }
      uVar10 = (ulonglong)uVar5;
      uVar3 = uVar3 - uVar4;
      pbVar14 = param_2 + uVar3;
      uVar4 = *(ulonglong *)(param_2 + uVar3);
      if ((puVar1 + -1 < unaff_RDI) || (bVar15)) break;
      uVar10 = (uVar4 << (uVar10 & 0x3f)) >> (-uVar11 & 0x3f);
      *unaff_RDI = (short)param_3[uVar10 + 1];
      unaff_RDI = (undefined2 *)
                  ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)param_3 + uVar10 * 4 + 7));
    }
    for (; unaff_RDI <= puVar1 + -1;
        unaff_RDI = (undefined2 *)
                    ((ulonglong)*(byte *)((longlong)param_3 + uVar3 * 4 + 7) + (longlong)unaff_RDI))
    {
      uVar3 = (uVar4 << (uVar10 & 0x3f)) >> (-uVar11 & 0x3f);
      *unaff_RDI = (short)param_3[uVar3 + 1];
      uVar10 = (ulonglong)((uint)*(byte *)((longlong)param_3 + uVar3 * 4 + 6) + (int)uVar10);
    }
  }
  uVar5 = (uint)uVar10;
  if (unaff_RDI < puVar1) {
    uVar4 = (uVar4 << (uVar10 & 0x3f)) >> ((ulonglong)(byte)-(char)(uVar7 >> 0x10) & 0x3f);
    *(char *)unaff_RDI = (char)param_3[uVar4 + 1];
    if (*(char *)((longlong)param_3 + uVar4 * 4 + 7) == '\x01') {
      uVar5 = uVar5 + *(byte *)((longlong)param_3 + uVar4 * 4 + 6);
    }
    else if (uVar5 < 0x40) {
      uVar7 = uVar5 + *(byte *)((longlong)param_3 + uVar4 * 4 + 6);
      uVar5 = 0x40;
      if (uVar7 < 0x40) {
        uVar5 = uVar7;
      }
    }
  }
  if (uVar5 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (pbVar14 != param_2) {
    unaff_RSI = 0xffffffffffffffec;
  }
  return unaff_RSI;
}


