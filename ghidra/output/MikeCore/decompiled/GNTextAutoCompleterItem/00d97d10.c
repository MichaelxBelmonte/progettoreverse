// Function: FUN_00d97d10
// Address: 00d97d10
// Size: 522 bytes
// Class: GNTextAutoCompleterItem


longlong * FUN_00d97d10(ulonglong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong unaff_RSI;
  ulonglong uVar9;
  longlong *unaff_RDI;
  uint uVar10;
  
  uVar10 = *(uint *)(unaff_RSI + 0x20);
  if (uVar10 == 0xffffffff) {
    FUN_00d931c0();
    uVar10 = *(uint *)(unaff_RSI + 0x20);
    lVar1 = *(longlong *)(unaff_RSI + 0x18);
    if (uVar10 == 0xffffffff) {
      if (*(longlong *)(unaff_RSI + 0x10) == 0) {
        uVar10 = 0;
        lVar2 = *param_2;
        uVar6 = *(uint *)(lVar2 + 0x20);
        goto joined_r0x00d97d9a;
      }
      uVar10 = FUN_00e7dde0();
    }
    lVar2 = *param_2;
    uVar6 = *(uint *)(lVar2 + 0x20);
  }
  else {
    lVar1 = *(longlong *)(unaff_RSI + 0x18);
    lVar2 = *param_2;
    uVar6 = *(uint *)(lVar2 + 0x20);
  }
joined_r0x00d97d9a:
  if (uVar6 == 0xffffffff) {
    FUN_00d931c0();
    uVar6 = *(uint *)(*param_2 + 0x20);
    lVar2 = *(longlong *)(lVar2 + 0x18);
    if (uVar6 == 0xffffffff) {
      if (*(longlong *)(*param_2 + 0x10) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00e7dde0();
      }
    }
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x18);
  }
  if ((((param_1 & 4) != 0) && (0 < (int)uVar10)) && (0 < (int)uVar6)) {
    do {
      uVar8 = uVar10 - 1;
      bVar4 = true;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar6;
      do {
        uVar5 = uVar5 - 1;
        if (*(short *)(lVar1 + (ulonglong)uVar8 * 2) == *(short *)(lVar2 + (ulonglong)uVar5 * 2)) {
          bVar4 = false;
        }
      } while ((bVar4) && (bVar3 = 1 < (longlong)uVar7, uVar7 = uVar7 - 1, bVar3));
    } while ((!bVar4) && (uVar10 = uVar8, 0 < (int)uVar8));
  }
  uVar7 = 0;
  if ((((param_1 & 2) != 0) && (0 < (int)uVar10)) && (0 < (int)uVar6)) {
    uVar7 = 0;
    do {
      bVar4 = true;
      uVar9 = (ulonglong)uVar6;
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 1;
        if (*(short *)(lVar1 + uVar7 * 2) == *(short *)(lVar2 + (ulonglong)uVar8 * 2)) {
          bVar4 = false;
        }
      } while ((bVar4) && (bVar3 = 1 < (longlong)uVar9, uVar9 = uVar9 - 1, bVar3));
      uVar10 = uVar10 - (bVar4 == false);
      uVar7 = (ulonglong)((int)uVar7 + (uint)(bVar4 ^ 1));
    } while ((bVar4 == false) && (0 < (int)uVar10));
  }
  if ((int)uVar10 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar1 = DAT_028a8368;
    if (DAT_028a8368 != 0) {
      FUN_00d50b00(uVar7);
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_00d920f0(uVar7,uVar10);
  }
  return unaff_RDI;
}


