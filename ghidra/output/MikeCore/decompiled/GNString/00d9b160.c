// Function: FUN_00d9b160
// Address: 00d9b160
// Size: 681 bytes
// Class: GNString


ulonglong FUN_00d9b160(char param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  
  uVar6 = *(uint *)(unaff_RDI + 0x20);
  if (uVar6 == 0xffffffff) {
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      uVar8 = (int)param_2 >> 0x1f & param_2;
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00e7dde0();
      uVar8 = uVar6;
      if ((int)param_2 < (int)uVar6) {
        uVar8 = param_2;
      }
      if (*(int *)(unaff_RDI + 0x20) != -1) {
        bVar12 = false;
        goto joined_r0x00d9b26e;
      }
    }
    bVar12 = *(int *)(*unaff_RSI + 0x20) == -1;
  }
  else {
    uVar8 = param_2;
    if ((int)uVar6 <= (int)param_2) {
      uVar8 = uVar6;
    }
    bVar12 = false;
  }
joined_r0x00d9b26e:
  if ((int)uVar8 < 1) {
    return 0;
  }
  uVar9 = (ulonglong)uVar8;
  if (param_1 != '\0') {
    if (bVar12) {
      uVar11 = 0;
      while( true ) {
        if ((*(int *)(*unaff_RSI + 0x20) == -1) && (*(longlong *)(*unaff_RSI + 0x10) != 0)) {
          FUN_00e7dde0();
        }
        cVar4 = FUN_00d8ca70();
        cVar5 = FUN_00d8ca70();
        if (cVar4 != cVar5) break;
        uVar11 = uVar11 + 1;
        if (uVar9 == uVar11) {
          return uVar9;
        }
      }
    }
    else {
      iVar10 = -1;
      uVar11 = 0;
      while( true ) {
        iVar7 = *(int *)(*unaff_RSI + 0x20);
        if (iVar7 == -1) {
          if (*(longlong *)(*unaff_RSI + 0x10) == 0) {
            iVar7 = 0;
            iVar2 = *(int *)(unaff_RDI + 0x20);
          }
          else {
            iVar7 = FUN_00e7dde0();
            iVar2 = *(int *)(unaff_RDI + 0x20);
          }
        }
        else {
          iVar2 = *(int *)(unaff_RDI + 0x20);
        }
        if (iVar2 == -1) {
          FUN_00d931c0();
        }
        sVar1 = *(short *)(*(longlong *)(unaff_RDI + 0x18) + (longlong)(int)(uVar6 + iVar10) * 2);
        lVar3 = *unaff_RSI;
        if (*(int *)(lVar3 + 0x20) == -1) {
          FUN_00d931c0();
        }
        if (sVar1 != *(short *)(*(longlong *)(lVar3 + 0x18) + (longlong)(iVar7 + iVar10) * 2))
        break;
        uVar11 = uVar11 + 1;
        iVar10 = iVar10 + -1;
        if (uVar9 == uVar11) {
          return uVar9;
        }
      }
    }
    return uVar11 & 0xffffffff;
  }
  uVar11 = 0;
  if (bVar12) {
    while( true ) {
      cVar4 = FUN_00d8ca70();
      cVar5 = FUN_00d8ca70();
      if (cVar4 != cVar5) break;
      uVar11 = uVar11 + 1;
      if (uVar9 == uVar11) {
        return uVar9;
      }
    }
  }
  else {
    while( true ) {
      if (*(int *)(unaff_RDI + 0x20) == -1) {
        FUN_00d931c0();
      }
      sVar1 = *(short *)(*(longlong *)(unaff_RDI + 0x18) + uVar11 * 2);
      lVar3 = *unaff_RSI;
      if (*(int *)(lVar3 + 0x20) == -1) {
        FUN_00d931c0();
      }
      if (sVar1 != *(short *)(*(longlong *)(lVar3 + 0x18) + uVar11 * 2)) break;
      uVar11 = uVar11 + 1;
      if (uVar9 == uVar11) {
        return uVar9;
      }
    }
  }
  return uVar11 & 0xffffffff;
}


