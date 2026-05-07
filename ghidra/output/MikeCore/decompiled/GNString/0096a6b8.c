// Function: FUN_0096a6b8
// Address: 0096a6b8
// Size: 1452 bytes
// Class: GNString


void FUN_0096a6b8(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *unaff_RSI;
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RDI + 0x168) != 0) {
    return;
  }
  if (*unaff_RSI == 2) {
    return;
  }
  iVar2 = *(int *)(unaff_RDI + 0xcc);
  iVar1 = FUN_00969dba();
  if (iVar2 == 1) {
    if (iVar1 != 0) {
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RSI + 2));
      FUN_0096cb5b(*(undefined8 *)(unaff_RDI + 0x118),3);
      iVar2 = *(int *)(unaff_RDI + 0xd0);
      iVar1 = -iVar2;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      if (iVar1 == 0x40000000) {
        uVar3 = *(undefined8 *)(unaff_RDI + 0x118);
        uVar4 = *(undefined8 *)(unaff_RDI + 0x158);
      }
      else {
        FUN_00969446();
        FUN_0096c629();
        uVar4 = *(undefined8 *)(unaff_RDI + 0xe8);
        uVar3 = *(undefined8 *)(unaff_RDI + 0x118);
      }
      FUN_0096c9dc(uVar3,uVar4);
      FUN_0096cb5b(*(undefined8 *)(unaff_RDI + 0x108),2);
      iVar2 = FUN_0096ca99(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0x108));
      if (iVar2 < 2) {
        FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0x118));
        FUN_0096cb5b(*(undefined8 *)(unaff_RDI + 0xe0),2);
        FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RDI + 0xe0));
        FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0xe0));
        FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0x118));
        FUN_0096ca28(*(undefined8 *)(unaff_RSI + 4),*(undefined8 *)(unaff_RSI + 4));
        FUN_00969bc3();
        return;
      }
      FUN_0096a284(0,0);
      FUN_0096936d();
      return;
    }
LAB_0096a7b2:
    FUN_0096a284(0,0);
    return;
  }
  if (iVar1 == 0) goto LAB_0096a7b2;
  FUN_00969446();
  iVar2 = *(int *)(unaff_RDI + 0xd0);
  iVar1 = -iVar2;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar1 < 0x40000000) {
    if (iVar2 != 0) {
      if (*unaff_RSI == 1) {
        FUN_0096c629(iVar1,*(undefined8 *)(unaff_RDI + 0xe8));
      }
      else {
        FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RSI + 6));
      }
    }
    if (*(int *)(unaff_RDI + 0xd0) != 0) {
      if (*(int *)(unaff_RDI + 0xd0) == -3) {
        FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0xe8));
        FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0xe8));
        FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0x118));
        uVar3 = *(undefined8 *)(unaff_RDI + 0xf0);
        uVar4 = *(undefined8 *)(unaff_RDI + 0x118);
        goto LAB_0096aa52;
      }
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0xe8));
      FUN_0096cb5b(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined4 *)(unaff_RDI + 0xd0));
    }
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RSI + 2));
    FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0xe0));
    FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0xe0));
    if (*(int *)(unaff_RDI + 0xd0) == 0) goto LAB_0096aaf9;
  }
  else {
    if (*unaff_RSI == 1) {
      FUN_0096c629(iVar1,*(undefined8 *)(unaff_RDI + 0xe8));
    }
    else {
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RSI + 6));
    }
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0xe8));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0x158));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RSI + 2));
    FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0xe0));
    uVar3 = *(undefined8 *)(unaff_RDI + 0xe0);
    uVar4 = *(undefined8 *)(unaff_RDI + 0x118);
LAB_0096aa52:
    FUN_0096c9dc(uVar4,uVar3);
  }
  FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0xf0));
LAB_0096aaf9:
  FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RSI + 4));
  if (*unaff_RSI == 1) {
    FUN_00969bc3();
  }
  else {
    FUN_0096cd04(*(undefined8 *)(unaff_RSI + 6),*(undefined8 *)(unaff_RSI + 6));
  }
  FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0xe8));
  FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0xe8));
  FUN_0096c9dc(*(undefined8 *)(unaff_RSI + 2),*(undefined8 *)(unaff_RDI + 0xf0));
  FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RDI + 0x118));
  FUN_0096ca28(*(undefined8 *)(unaff_RSI + 2),*(undefined8 *)(unaff_RSI + 2));
  FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0xe8));
  iVar2 = FUN_009684b0();
  if (iVar2 != 0) {
    FUN_00967b0c(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0xb8));
  }
  FUN_0096836c(*(undefined8 *)(unaff_RDI + 0xe8),2);
  FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RSI + 2));
  FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0x118));
  FUN_0096ca28(*(undefined8 *)(unaff_RSI + 4),*(undefined8 *)(unaff_RDI + 0xe8));
  *unaff_RSI = 0;
  return;
}


