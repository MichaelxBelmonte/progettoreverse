// Function: FUN_0096c22d
// Address: 0096c22d
// Size: 663 bytes
// Class: GNString


void FUN_0096c22d(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RDI + 0x168) != 0) {
    return;
  }
  iVar1 = FUN_00969dba();
  if (iVar1 != 0) {
    iVar1 = FUN_00969dba();
    if ((iVar1 == 1) || (iVar1 = FUN_00969dba(), iVar1 == -1)) {
      FUN_00969446();
      FUN_0096c629();
    }
    else {
      FUN_00969bc3();
      FUN_00969446();
      FUN_0096c629();
      FUN_00969bc3();
      FUN_00969bc3();
      FUN_00969bc3();
      FUN_00969ba3();
      FUN_00968044(*(undefined8 *)(unaff_RDI + 0xe0),1);
      iVar1 = FUN_00969226();
      if (0 < iVar1) {
        iVar1 = iVar1 + 1;
        do {
          iVar2 = FUN_00969e82();
          if (iVar2 == 0) {
            FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x120),*(undefined8 *)(unaff_RDI + 0x118));
            FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x120),*(undefined8 *)(unaff_RDI + 0xf0));
            FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0x118));
            uVar4 = *(undefined8 *)(unaff_RDI + 0xf8);
            uVar3 = *(undefined8 *)(unaff_RDI + 0x118);
          }
          else {
            FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0x120));
            FUN_0096ca28(*(undefined8 *)(unaff_RDI + 0x118),*(undefined8 *)(unaff_RDI + 0xf0));
            FUN_0096cd04(*(undefined8 *)(unaff_RDI + 0x120),*(undefined8 *)(unaff_RDI + 0x120));
            uVar4 = *(undefined8 *)(unaff_RDI + 0xf8);
            uVar3 = *(undefined8 *)(unaff_RDI + 0x120);
          }
          FUN_0096ca28(uVar3,uVar4);
          iVar1 = iVar1 + -1;
        } while (1 < iVar1);
      }
      FUN_00969bc3();
      if (param_3 == param_1) {
        return;
      }
    }
    FUN_00969bc3();
    return;
  }
  FUN_00969412();
  FUN_00969446();
  FUN_0096c629();
  return;
}


