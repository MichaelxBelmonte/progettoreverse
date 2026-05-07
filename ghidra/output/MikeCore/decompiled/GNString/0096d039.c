// Function: FUN_0096d039
// Address: 0096d039
// Size: 889 bytes
// Class: GNString


undefined8 FUN_0096d039(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong unaff_RDI;
  int iVar5;
  
  if (*(int *)(unaff_RDI + 0x168) == 0) {
    FUN_00969412();
    iVar2 = FUN_00969dba();
    if (iVar2 == 0) {
      return 1;
    }
    FUN_0096c720();
    iVar2 = FUN_0096bcf7();
    if (iVar2 == 1) {
      iVar2 = FUN_00969dba();
      if ((iVar2 == 1) || (iVar2 = FUN_00969dba(), iVar2 == 4)) {
        FUN_00969446();
        FUN_0096c629();
        return 1;
      }
      uVar1 = *(uint *)(unaff_RDI + 0x724);
      uVar4 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar4 = uVar1;
      }
      iVar2 = (uVar1 - 2) - (uVar4 & 0xfffffffc);
      FUN_00967fe8(*(undefined8 *)(unaff_RDI + 0x148),iVar2);
      FUN_0096836c(*(undefined8 *)(unaff_RDI + 0x148),4);
      if (iVar2 == 1) {
        FUN_00969446();
        FUN_0096c629();
        FUN_0096c629();
        FUN_0096ca99(*(undefined8 *)(unaff_RDI + 0x130),*(undefined8 *)(unaff_RDI + 0x150));
        FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0xf0),*(undefined8 *)(unaff_RDI + 0x150));
        FUN_0096c22d(param_2,*(undefined8 *)(unaff_RDI + 0x148),param_2);
        FUN_0096c9dc(*(undefined8 *)(unaff_RDI + 0x130),*(undefined8 *)(unaff_RDI + 0x128));
        FUN_0096ca99(param_2,*(undefined8 *)(unaff_RDI + 0x130));
      }
      else {
        iVar5 = 1;
        while( true ) {
          if (iVar5 == 1) {
            FUN_00969bc3();
          }
          else {
            FUN_0096820e(*(undefined8 *)(unaff_RDI + 0xf8),iVar5);
            FUN_00968a1c(*(undefined8 *)(unaff_RDI + 0xb8),*(undefined8 *)(unaff_RDI + 0xb8));
            FUN_0096820e(*(undefined8 *)(unaff_RDI + 0xf8),iVar5);
            FUN_00968a1c(*(undefined8 *)(unaff_RDI + 0xb8),*(undefined8 *)(unaff_RDI + 0xb8));
          }
          FUN_00968044(*(undefined8 *)(unaff_RDI + 0xe0),4);
          iVar3 = FUN_0096bcf7();
          if ((iVar3 == iVar2) || (*(int *)(unaff_RDI + 0x168) != 0)) break;
          iVar5 = iVar5 + 1;
        }
        FUN_00968044(*(undefined8 *)(unaff_RDI + 0xf0),2);
        FUN_0096c629();
        FUN_0096c22d(param_2,*(undefined8 *)(unaff_RDI + 0x148),param_2);
        if (iVar5 != 1) {
          FUN_00969446();
          FUN_0096c629();
          FUN_0096ca99(param_2,*(undefined8 *)(unaff_RDI + 0x118));
        }
        FUN_0096c629();
      }
      FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x148),param_2);
      iVar2 = FUN_00969df5();
      if (iVar2 == 0) {
        return 1;
      }
      FUN_00969412();
    }
  }
  return 0;
}


