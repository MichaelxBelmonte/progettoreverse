// Function: FUN_00eff5ff
// Address: 00eff5ff
// Size: 715 bytes
// Class: Unknown


ulonglong FUN_00eff5ff(ulonglong param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong unaff_RSI;
  undefined1 *unaff_RDI;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  bool bVar11;
  
  if ((param_4 & 1) != 0) {
    uVar3 = FUN_00f0335c(param_1);
    return uVar3;
  }
  if (param_1 == 0) {
    return 0xffffffffffffffb8;
  }
  if (param_1 < 8) {
    uVar3 = (ulonglong)(byte)*param_2;
    switch(param_1) {
    case 7:
      uVar3 = uVar3 | (ulonglong)*(byte *)((longlong)param_2 + 6) << 0x30;
    case 6:
      uVar3 = uVar3 + ((ulonglong)*(byte *)((longlong)param_2 + 5) << 0x28);
    case 5:
      uVar3 = uVar3 + ((ulonglong)*(byte *)((longlong)param_2 + 4) << 0x20);
    case 4:
      uVar3 = uVar3 + (ulonglong)*(byte *)((longlong)param_2 + 3) * 0x1000000;
    case 3:
      uVar3 = uVar3 + (ulonglong)*(byte *)((longlong)param_2 + 2) * 0x10000;
    case 2:
      uVar3 = uVar3 + (ulonglong)*(byte *)((longlong)param_2 + 1) * 0x100;
    }
    bVar5 = *(byte *)((param_1 - 1) + (longlong)param_2);
    if (bVar5 == 0) {
      return 0xffffffffffffffec;
    }
    uVar8 = 0x1f;
    if (bVar5 != 0) {
      for (; bVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    uVar8 = (uVar8 ^ 0x1f) + (int)param_1 * -8 + 0x29;
    param_1 = 0;
  }
  else {
    bVar5 = *(byte *)((param_1 - 1) + (longlong)param_2);
    if (bVar5 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_1) {
      return param_1;
    }
    uVar3 = *(ulonglong *)((longlong)param_2 + (param_1 - 8));
    param_1 = param_1 - 8;
    uVar8 = 0x1f;
    if (bVar5 != 0) {
      for (; bVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    uVar8 = (uVar8 ^ 0x1f) - 0x17;
  }
  puVar1 = unaff_RDI + unaff_RSI;
  puVar9 = (ulonglong *)((longlong)param_2 + param_1);
  cVar2 = (char)*(undefined2 *)(param_3 + 2);
  if ((longlong)unaff_RSI < 4) {
    if (uVar8 < 0x41) {
      if ((longlong)param_1 < 8) {
        if (param_1 == 0) goto LAB_00eff869;
        param_1 = param_1 & 0xffffffff;
        if (param_2 <= (ulonglong *)((longlong)puVar9 - (ulonglong)(uVar8 >> 3))) {
          param_1 = (ulonglong)(uVar8 >> 3);
        }
        uVar8 = uVar8 + (int)param_1 * -8;
      }
      else {
        param_1 = (ulonglong)(uVar8 >> 3);
        uVar8 = uVar8 & 7;
      }
      puVar9 = (ulonglong *)((longlong)puVar9 - param_1);
      uVar3 = *puVar9;
    }
  }
  else if (uVar8 < 0x41) {
    bVar5 = -cVar2 & 0x3f;
    do {
      if ((longlong)param_1 < 8) {
        puVar9 = (ulonglong *)((longlong)param_2 + param_1);
        if (param_1 == 0) break;
        bVar11 = (ulonglong *)((longlong)puVar9 - (ulonglong)(uVar8 >> 3)) < param_2;
        uVar3 = param_1 & 0xffffffff;
        if (!bVar11) {
          uVar3 = (ulonglong)(uVar8 >> 3);
        }
        uVar8 = uVar8 + (int)uVar3 * -8;
      }
      else {
        uVar3 = (ulonglong)(uVar8 >> 3);
        uVar8 = uVar8 & 7;
        bVar11 = false;
      }
      param_1 = param_1 - uVar3;
      puVar9 = (ulonglong *)((longlong)param_2 + param_1);
      uVar3 = *(ulonglong *)((longlong)param_2 + param_1);
      if ((puVar1 + -3 <= unaff_RDI) || (bVar11)) break;
      uVar6 = (uVar3 << ((byte)uVar8 & 0x3f)) >> bVar5;
      iVar10 = *(byte *)(param_3 + 4 + uVar6 * 2) + uVar8;
      uVar4 = (uVar3 << ((byte)iVar10 & 0x3f)) >> bVar5;
      *unaff_RDI = *(undefined1 *)(param_3 + 5 + uVar6 * 2);
      iVar10 = (uint)*(byte *)(param_3 + 4 + uVar4 * 2) + iVar10;
      unaff_RDI[1] = *(undefined1 *)(param_3 + 5 + uVar4 * 2);
      uVar6 = (uVar3 << ((byte)iVar10 & 0x3f)) >> bVar5;
      iVar10 = (uint)*(byte *)(param_3 + 4 + uVar6 * 2) + iVar10;
      uVar4 = (uVar3 << ((byte)iVar10 & 0x3f)) >> bVar5;
      unaff_RDI[2] = *(undefined1 *)(param_3 + 5 + uVar6 * 2);
      uVar8 = (uint)*(byte *)(param_3 + 4 + uVar4 * 2) + iVar10;
      unaff_RDI[3] = *(undefined1 *)(param_3 + 5 + uVar4 * 2);
      unaff_RDI = unaff_RDI + 4;
      if (0x40 < uVar8) break;
    } while( true );
  }
LAB_00eff869:
  if (unaff_RDI < puVar1) {
    lVar7 = 0;
    do {
      uVar4 = (uVar3 << ((byte)uVar8 & 0x3f)) >> (-cVar2 & 0x3fU);
      uVar8 = uVar8 + *(byte *)(param_3 + 4 + uVar4 * 2);
      unaff_RDI[lVar7] = *(undefined1 *)(param_3 + 5 + uVar4 * 2);
      lVar7 = lVar7 + 1;
    } while ((longlong)puVar1 - (longlong)unaff_RDI != lVar7);
  }
  if (uVar8 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (puVar9 != param_2) {
    unaff_RSI = 0xffffffffffffffec;
  }
  return unaff_RSI;
}


