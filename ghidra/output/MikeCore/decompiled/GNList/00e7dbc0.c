// Function: FUN_00e7dbc0
// Address: 00e7dbc0
// Size: 541 bytes
// Class: GNList


undefined8 FUN_00e7dbc0(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  ulonglong unaff_RDI;
  ulonglong uVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((7 < param_2) && ((unaff_RSI + param_2 <= unaff_RDI || (unaff_RDI + param_2 <= unaff_RSI)))) {
    if (param_2 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_2 & 0xffffffffffffffe0;
      uVar8 = (uVar9 - 0x20 >> 5) + 1;
      uVar10 = (ulonglong)((uint)uVar8 & 3);
      if (uVar9 - 0x20 < 0x60) {
        lVar6 = 0;
      }
      else {
        lVar7 = -(uVar8 & 0xfffffffffffffffc);
        lVar6 = 0;
        do {
          uVar3 = ((undefined8 *)(unaff_RSI + lVar6))[1];
          puVar1 = (undefined8 *)(unaff_RSI + 0x10 + lVar6);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)(unaff_RDI + lVar6) = *(undefined8 *)(unaff_RSI + lVar6);
          ((undefined8 *)(unaff_RDI + lVar6))[1] = uVar3;
          puVar1 = (undefined8 *)(unaff_RDI + 0x10 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(unaff_RSI + 0x20 + lVar6);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_RSI + 0x30 + lVar6);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(unaff_RDI + 0x20 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(unaff_RDI + 0x30 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(unaff_RSI + 0x40 + lVar6);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_RSI + 0x50 + lVar6);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(unaff_RDI + 0x40 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(unaff_RDI + 0x50 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(unaff_RSI + 0x60 + lVar6);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_RSI + 0x70 + lVar6);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(unaff_RDI + 0x60 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(unaff_RDI + 0x70 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar6 = lVar6 + 0x80;
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0);
      }
      if (uVar10 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined8 *)(lVar6 + unaff_RSI + lVar7);
          uVar3 = puVar2[1];
          puVar1 = (undefined8 *)(lVar6 + unaff_RSI + 0x10 + lVar7);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)(unaff_RDI + lVar6 + lVar7);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)(unaff_RDI + lVar6 + 0x10 + lVar7);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar7 = lVar7 + 0x20;
        } while (uVar10 << 5 != lVar7);
      }
      if (uVar9 == param_2) {
        return 0;
      }
      if ((param_2 & 0x18) == 0) {
        param_2 = (ulonglong)((uint)param_2 & 0x1f);
        unaff_RDI = unaff_RDI + uVar9;
        unaff_RSI = unaff_RSI + uVar9;
        goto LAB_00e7dbf6;
      }
    }
    uVar8 = param_2 & 0xfffffffffffffff8;
    do {
      *(undefined8 *)(unaff_RDI + uVar9) = *(undefined8 *)(unaff_RSI + uVar9);
      uVar9 = uVar9 + 8;
    } while (uVar8 != uVar9);
    bVar11 = uVar8 == param_2;
    unaff_RDI = unaff_RDI + uVar8;
    param_2 = (ulonglong)((uint)param_2 & 7);
    unaff_RSI = unaff_RSI + uVar8;
    if (bVar11) {
      return 0;
    }
  }
LAB_00e7dbf6:
  uVar8 = param_2 - 1;
  if ((param_2 & 7) != 0) {
    uVar9 = 0;
    do {
      *(undefined1 *)(unaff_RDI + uVar9) = *(undefined1 *)(unaff_RSI + uVar9);
      uVar9 = uVar9 + 1;
    } while ((param_2 & 7) != uVar9);
    unaff_RSI = unaff_RSI + uVar9;
    unaff_RDI = unaff_RDI + uVar9;
    param_2 = param_2 - uVar9;
  }
  if (6 < uVar8) {
    uVar8 = 0;
    do {
      *(undefined1 *)(unaff_RDI + uVar8) = *(undefined1 *)(unaff_RSI + uVar8);
      *(undefined1 *)(unaff_RDI + 1 + uVar8) = *(undefined1 *)(unaff_RSI + 1 + uVar8);
      *(undefined1 *)(unaff_RDI + 2 + uVar8) = *(undefined1 *)(unaff_RSI + 2 + uVar8);
      *(undefined1 *)(unaff_RDI + 3 + uVar8) = *(undefined1 *)(unaff_RSI + 3 + uVar8);
      *(undefined1 *)(unaff_RDI + 4 + uVar8) = *(undefined1 *)(unaff_RSI + 4 + uVar8);
      *(undefined1 *)(unaff_RDI + 5 + uVar8) = *(undefined1 *)(unaff_RSI + 5 + uVar8);
      *(undefined1 *)(unaff_RDI + 6 + uVar8) = *(undefined1 *)(unaff_RSI + 6 + uVar8);
      *(undefined1 *)(unaff_RDI + 7 + uVar8) = *(undefined1 *)(unaff_RSI + 7 + uVar8);
      uVar8 = uVar8 + 8;
    } while (param_2 != uVar8);
  }
  return 0;
}


