// Function: FUN_00efd407
// Address: 00efd407
// Size: 712 bytes
// Class: MUSpectrumShaper


void FUN_00efd407(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong *unaff_RSI;
  uint uVar10;
  ulonglong *unaff_RDI;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 local_res8;
  int local_res10;
  
  lVar1 = param_3 + param_4;
  uVar12 = *(uint *)(param_1 + 0x1c);
  bVar15 = *(int *)(param_1 + 0x60) != 1;
  uVar13 = 0xfffffe;
  if (local_res10 != 1) {
    uVar13 = 0xdffffffe;
  }
  if (1 < uVar12 - 1) {
    uVar13 = 0xdffffffe;
  }
  uVar14 = lVar1 - uVar13;
  if (param_4 <= uVar13) {
    uVar14 = param_3;
    uVar13 = param_4;
  }
  iVar5 = (int)lVar1;
  if (uVar13 == 0) {
    if (unaff_RSI == (ulonglong *)0x0 || bVar15) goto LAB_00efd593;
  }
  else {
    if (*unaff_RDI == uVar14) {
      uVar8 = unaff_RDI[2];
      uVar11 = (ulonglong)(uint)unaff_RDI[3];
      uVar6 = *(uint *)((longlong)unaff_RDI + 0x1c);
    }
    else {
      uVar8 = unaff_RDI[1];
      uVar11 = *unaff_RDI - uVar8;
      uVar6 = (uint)unaff_RDI[3];
      *(uint *)((longlong)unaff_RDI + 0x1c) = uVar6;
      uVar10 = (uint)uVar11;
      *(uint *)(unaff_RDI + 3) = uVar10;
      unaff_RDI[2] = uVar8;
      unaff_RDI[1] = uVar14 - uVar11;
      if (uVar10 - uVar6 < 8) {
        *(uint *)((longlong)unaff_RDI + 0x1c) = uVar10;
        uVar6 = uVar10;
      }
    }
    uVar2 = uVar14 + uVar13;
    *unaff_RDI = uVar2;
    if ((uVar6 + uVar8 < uVar2) && (uVar14 < uVar8 + (uVar11 & 0xffffffff))) {
      uVar4 = (undefined4)(uVar2 - uVar8);
      if ((longlong)(uVar11 & 0xffffffff) < (longlong)(uVar2 - uVar8)) {
        uVar4 = (undefined4)uVar11;
      }
      *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar4;
    }
    if (unaff_RSI == (ulonglong *)0x0 || bVar15) goto LAB_00efd593;
    if (*unaff_RSI == uVar14) {
      uVar8 = unaff_RSI[2];
      uVar12 = *(uint *)((longlong)unaff_RSI + 0x1c);
      uVar11 = (ulonglong)(uint)unaff_RSI[3];
    }
    else {
      uVar8 = unaff_RSI[1];
      uVar11 = *unaff_RSI - uVar8;
      uVar12 = (uint)unaff_RSI[3];
      *(uint *)((longlong)unaff_RSI + 0x1c) = uVar12;
      uVar6 = (uint)uVar11;
      *(uint *)(unaff_RSI + 3) = uVar6;
      unaff_RSI[2] = uVar8;
      unaff_RSI[1] = uVar14 - uVar11;
      if (uVar6 - uVar12 < 8) {
        *(uint *)((longlong)unaff_RSI + 0x1c) = uVar6;
        uVar12 = uVar6;
      }
    }
    *unaff_RSI = uVar2;
    if ((uVar12 + uVar8 < uVar2) && (uVar14 < uVar8 + (uVar11 & 0xffffffff))) {
      uVar3 = uVar2 - uVar8;
      if ((longlong)(uVar11 & 0xffffffff) < (longlong)(uVar2 - uVar8)) {
        uVar3 = uVar11;
      }
      *(int *)((longlong)unaff_RSI + 0x1c) = (int)uVar3;
    }
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = iVar5 - (int)unaff_RSI[1];
  }
  *(int *)(unaff_RSI + 6) = iVar7;
  _ZSTD_ldm_fillHashTable(param_1 + 0x60,lVar1);
  uVar12 = *(uint *)(param_1 + 0x1c);
LAB_00efd593:
  if (uVar12 < 8) {
    uVar12 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
      uVar12 = *(uint *)(param_1 + 0xc);
    }
    bVar9 = 0x1c;
    if (uVar12 < 0x1c) {
      bVar9 = (byte)uVar12;
    }
    uVar8 = (ulonglong)(uint)(8 << (bVar9 & 0x1f));
    if (uVar8 < uVar13) {
      uVar13 = uVar8;
      uVar14 = lVar1 - uVar8;
    }
  }
  *(int *)((longlong)unaff_RDI + 0x2c) = (int)uVar14 - (int)unaff_RDI[1];
  iVar7 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = iVar5 - (int)unaff_RDI[1];
  }
  *(int *)(unaff_RDI + 5) = iVar7;
  *(undefined4 *)(unaff_RDI + 0x11) = *(undefined4 *)(param_1 + 0x94);
  if (8 < uVar13) {
    FUN_00efbaff(uVar14,param_1,lVar1);
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 1:
      _ZSTD_fillHashTable(local_res10);
      break;
    case 2:
      _ZSTD_fillDoubleHashTable(local_res10);
      break;
    case 3:
    case 4:
    case 5:
      if (*(int *)((longlong)unaff_RDI + 0x8c) == 0) {
        if (*(int *)(param_1 + 0x90) == 1) {
          ___bzero(CONCAT71(0xefd6,*(undefined1 *)(param_1 + 0xc)));
          _ZSTD_row_update();
        }
        else {
          _ZSTD_insertAndFindFirstIndex(&switchD_00efd634::switchdataD_00efd6d0,local_res8);
        }
      }
      else {
        _ZSTD_dedicatedDictSearch_lazy_loadDictionary();
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      _ZSTD_updateTree(&switchD_00efd634::switchdataD_00efd6d0,lVar1);
    }
    *(int *)((longlong)unaff_RDI + 0x2c) = iVar5 - (int)unaff_RDI[1];
  }
  return;
}


