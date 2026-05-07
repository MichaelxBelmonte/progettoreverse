// Function: FUN_00dab660
// Address: 00dab660
// Size: 509 bytes
// Class: GNForeignThreadPool


ulonglong FUN_00dab660(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint7 uVar10;
  ulonglong uVar9;
  int iVar11;
  uint *unaff_RSI;
  longlong unaff_RDI;
  bool bVar12;
  bool bVar13;
  longlong local_48;
  longlong local_40;
  char local_38;
  char local_2d;
  int local_2c;
  
  uVar10 = (uint7)((ulonglong)unaff_RDI >> 8);
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    lVar3 = *(longlong *)(unaff_RDI + 0x10);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    iVar2 = *(int *)(unaff_RDI + 0x18);
    lVar6 = (longlong)iVar2;
    iVar11 = *(int *)(lVar3 + 0x18) - iVar2;
    if (*(char *)(unaff_RDI + 0x28) == '\0') {
      if (3 < iVar11) {
        iVar2 = *(int *)(unaff_RDI + 0x2c);
        uVar5 = *(uint *)(lVar4 + lVar6);
LAB_00dab83e:
        uVar7 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if (iVar2 == 0) {
          uVar7 = uVar5;
        }
        *unaff_RSI = uVar7;
        *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 4;
LAB_00dab84c:
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        goto LAB_00dab84e;
      }
    }
    else if (4 < iVar11) {
      cVar1 = *(char *)(lVar4 + lVar6);
      *(int *)(unaff_RDI + 0x18) = iVar2 + 1;
      if (cVar1 == 'i') {
        iVar2 = *(int *)(unaff_RDI + 0x2c);
        uVar5 = *(uint *)(lVar4 + 1 + lVar6);
        goto LAB_00dab83e;
      }
      if ((cVar1 == 'l') && (7 < *(int *)(lVar3 + 0x18) - (iVar2 + 1))) {
        uVar9 = *(ulonglong *)(lVar4 + 1 + lVar6);
        uVar8 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                uVar9 << 0x38;
        if (*(int *)(unaff_RDI + 0x2c) == 0) {
          uVar8 = uVar9;
        }
        *(int *)(unaff_RDI + 0x18) = iVar2 + 9;
        if ((longlong)(int)(uint)uVar8 == uVar8) {
          *unaff_RSI = (uint)uVar8;
        }
        uVar9 = CONCAT71(uVar10,uVar8 + 0x80000000 >> 0x20 == 0);
        goto LAB_00dab84e;
      }
    }
  }
  else {
    if (*(char *)(unaff_RDI + 0x28) == '\0') {
      FUN_00ccd540(&local_2c);
      bVar12 = local_40 == 0;
      bVar13 = local_2c == 4;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_00dab831:
      uVar9 = CONCAT71(uVar10,bVar12 & bVar13);
      goto LAB_00dab84e;
    }
    FUN_00ccd300(&local_2c,&local_2d);
    bVar12 = local_40 == 0;
    bVar13 = local_2c == 1;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar12 && bVar13) {
      if (local_2d == 'i') {
        FUN_00ccd540(&local_2c);
        bVar12 = local_40 == 0;
        bVar13 = local_2c == 4;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00dab831;
      }
      if (local_2d == 'l') {
        FUN_00ccd5c0(&local_2c,&local_48);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        unaff_RDI = (ulonglong)uVar10 << 8;
        if ((local_40 == 0 && local_2c == 8) && ((int)(uint)local_48 == local_48)) {
          *unaff_RSI = (uint)local_48;
          goto LAB_00dab84c;
        }
      }
    }
  }
  uVar9 = 0;
LAB_00dab84e:
  return uVar9 & 0xffffffff;
}


