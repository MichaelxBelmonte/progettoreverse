// Function: FUN_00516d30
// Address: 00516d30
// Size: 940 bytes
// Class: MDPluginDocument


void FUN_00516d30(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RDI + 0x238) < unaff_ESI) {
    lVar2 = 0;
    do {
      if (*(longlong *)(unaff_RDI + 0x118 + lVar2 * 8) != 0) {
        FUN_00e83070();
        *(undefined8 *)(unaff_RDI + 0x118 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x24);
    *(undefined4 *)(unaff_RDI + 0x238) = 0;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x118) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x120) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x128) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x130) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x138) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x140) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x148) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x150) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x158) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x160) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x168) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x170) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x178) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x180) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x188) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 400) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x198) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1a0) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1a8) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1b0) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1b8) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1c0) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1c8) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1d0) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1d8) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1e0) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1e8) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1f0) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x1f8) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x200) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x208) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x210) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x218) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x220) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x228) = uVar1;
    uVar1 = FUN_00e83020();
    *(undefined8 *)(unaff_RDI + 0x230) = uVar1;
    *(int *)(unaff_RDI + 0x238) = unaff_ESI;
  }
  else if (0 < (int)param_2) {
    if (6 < (ulonglong)param_2 - 1) {
      uVar3 = 0;
      do {
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        uVar3 = uVar3 + 8;
      } while ((param_2 & 0xfffffff8) != uVar3);
    }
    if ((ulonglong)(param_2 & 7) != 0) {
      uVar3 = 0;
      do {
        ___bzero();
        uVar3 = uVar3 + 1;
      } while ((param_2 & 7) != uVar3);
    }
  }
  return;
}


