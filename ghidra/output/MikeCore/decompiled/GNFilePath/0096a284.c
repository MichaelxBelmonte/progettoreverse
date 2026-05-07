// Function: FUN_0096a284
// Address: 0096a284
// Size: 581 bytes
// Class: GNFilePath


undefined8 FUN_0096a284(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar5;
  
  uVar4 = 0;
  if (*(int *)(unaff_RDI + 0x168) == 0) {
    if ((unaff_RSI == 0) || (param_2 == 0)) {
      uVar4 = 1;
      FUN_00969446(param_1,*(undefined8 *)(unaff_RDI + 0xe0));
      FUN_0096c629();
      FUN_0096c629();
      *param_3 = 2;
    }
    else {
      FUN_0096c629(param_1,*(undefined8 *)(param_3 + 2));
      uVar4 = *(undefined8 *)(param_3 + 2);
      uVar1 = *(undefined8 *)(unaff_RDI + 0xf0);
      FUN_0096cd04(uVar1,uVar4);
      FUN_0096cd04(uVar1,uVar4);
      iVar2 = *(int *)(unaff_RDI + 0xd0);
      iVar3 = -iVar2;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      if (iVar3 == 0x40000000) {
        FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(unaff_RDI + 0x158));
      }
      else {
        FUN_0096cb5b(*(undefined8 *)(unaff_RDI + 0xe0));
      }
      FUN_0096c9dc(uVar1,*(undefined8 *)(unaff_RDI + 0xe0));
      iVar2 = *(int *)(unaff_RDI + 0xd4);
      iVar3 = -iVar2;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      if (iVar3 == 0x40000000) {
        puVar5 = (undefined8 *)(unaff_RDI + 0x160);
      }
      else {
        puVar5 = (undefined8 *)(unaff_RDI + 0xe0);
        FUN_00969446();
        FUN_0096c629();
      }
      FUN_0096c9dc(uVar1,*puVar5);
      if (unaff_RSI == param_2) {
        iVar2 = FUN_0096d039();
        FUN_0096c720();
        iVar3 = FUN_009684b0();
        if (iVar3 != (int)param_1) {
          FUN_00967d35(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 4));
        }
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        FUN_0096c629();
        FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0xe0),*(undefined8 *)(param_3 + 4));
        iVar2 = FUN_00969df5();
        if (iVar2 != 0) {
          return 0;
        }
      }
      *param_3 = 1;
      uVar4 = 1;
    }
  }
  return uVar4;
}


