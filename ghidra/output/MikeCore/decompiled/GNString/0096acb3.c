// Function: FUN_0096acb3
// Address: 0096acb3
// Size: 1450 bytes
// Class: GNString


undefined8 FUN_0096acb3(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *unaff_RSI;
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RDI + 0x168) != 0) {
    return 0;
  }
  if (unaff_RSI == param_2) {
    FUN_0096a6b8();
    iVar1 = *unaff_RSI;
joined_r0x0096ad0b:
    if (iVar1 == 2) {
      return 0;
    }
    goto LAB_0096b251;
  }
  if (*param_2 == 2) {
    FUN_0096ac64();
    return 0;
  }
  if (*unaff_RSI == 2) {
    return 0;
  }
  if (*(int *)(unaff_RDI + 0xcc) == 1) {
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(param_2 + 4));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(param_2 + 2));
    iVar1 = FUN_00969dba();
    if (iVar1 == 0) goto LAB_0096afb3;
    iVar1 = FUN_0096ca99(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0x108));
    if (1 < iVar1) {
      FUN_0096a284(0,0,param_2);
      FUN_0096936d();
      goto LAB_0096b0a4;
    }
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0x118));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RSI + 2));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(param_2 + 2));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0xe0));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0x118));
    FUN_0096ca28(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 4));
    iVar1 = 1;
  }
  else {
    if (*unaff_RSI == 1) {
      FUN_00969bc3();
      FUN_00969bc3();
    }
    else {
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(unaff_RSI + 6));
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RDI + 0x108));
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(unaff_RSI + 6));
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0x108));
    }
    if (*param_2 == 1) {
      FUN_00969446();
      FUN_0096c629();
    }
    else {
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(param_2 + 6));
    }
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf8),*(undefined8 *)(unaff_RDI + 0x108));
    if (*param_2 != 1) {
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(param_2 + 6));
    }
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x100),*(undefined8 *)(unaff_RDI + 0x108));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RDI + 0xf8));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0x100));
    iVar1 = FUN_00969dba();
    if (iVar1 == 0) {
LAB_0096afb3:
      iVar1 = FUN_00969dba();
      if (iVar1 == 0) {
        FUN_0096a6b8();
      }
      else {
        FUN_0096a284(0,0,param_2);
      }
LAB_0096b0a4:
      iVar1 = *param_2;
      goto joined_r0x0096ad0b;
    }
    FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(unaff_RDI + 0xf8));
    FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0xf8),*(undefined8 *)(unaff_RDI + 0x108));
    FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(unaff_RDI + 0x100));
    FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x100),*(undefined8 *)(unaff_RDI + 0x108));
    if (*unaff_RSI == 1) {
      if (*param_2 != 1) {
        uVar2 = *(undefined8 *)(param_2 + 6);
        uVar3 = *(undefined8 *)(unaff_RDI + 0xe0);
        goto LAB_0096b0ea;
      }
      FUN_00969bc3();
    }
    else {
      if (*param_2 == 1) {
        FUN_00969bc3();
      }
      else {
        FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RSI + 6));
      }
      uVar3 = *(undefined8 *)(unaff_RDI + 0xe0);
      uVar2 = *(undefined8 *)(param_2 + 6);
LAB_0096b0ea:
      FUN_0096cd04(uVar2,uVar3);
    }
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(unaff_RDI + 0xe0));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RDI + 0x108));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(unaff_RDI + 0xf8));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xf8),*(undefined8 *)(unaff_RDI + 0x118));
    FUN_0096ca28(*(undefined8 *)(param_2 + 2),*(undefined8 *)(unaff_RDI + 0x108));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(param_2 + 2));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x108),*(undefined8 *)(param_2 + 2));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe8),*(undefined8 *)(unaff_RDI + 0x108));
    FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RDI + 0x100));
    FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x100),*(undefined8 *)(unaff_RDI + 0xe0));
    iVar1 = FUN_009684b0();
    if (iVar1 != 0) {
      FUN_00967b0c(*(undefined8 *)(unaff_RDI + 0x100),*(undefined8 *)(unaff_RDI + 0xb8));
    }
    FUN_0096836c(*(undefined8 *)(unaff_RDI + 0x100),2);
    iVar1 = 0;
  }
  FUN_00969bc3();
  *param_2 = iVar1;
LAB_0096b251:
  return *(undefined8 *)(unaff_RDI + 0x118);
}


