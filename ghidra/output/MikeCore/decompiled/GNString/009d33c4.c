// Function: FUN_009d33c4
// Address: 009d33c4
// Size: 668 bytes
// Class: GNString


undefined8 FUN_009d33c4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar6 = FUN_009d0902();
  iVar7 = FUN_009d0902();
  if (iVar6 < 0) {
    uVar1 = *(undefined4 *)(unaff_RDI + 0x20);
    uVar8 = *(undefined8 *)(unaff_RDI + 0x18);
    uVar3 = *(undefined8 *)(unaff_RDI + 8);
    uVar4 = *(undefined8 *)(unaff_RDI + 0x10);
    if (iVar7 < 0) {
      *(undefined4 *)(unaff_RDI + 0x20) = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(unaff_RDI + 8) = uVar5;
      *(undefined8 *)(param_2 + 8) = uVar3;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      uVar8 = 1;
      goto LAB_009d363e;
    }
    *(undefined4 *)(unaff_RDI + 0x20) = *(undefined4 *)(unaff_RSI + 0x20);
    *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RSI + 0x18);
    uVar5 = *(undefined8 *)(unaff_RSI + 8);
    *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined8 *)(unaff_RDI + 8) = uVar5;
    *(undefined8 *)(unaff_RSI + 8) = uVar3;
    *(undefined8 *)(unaff_RSI + 0x10) = uVar4;
    *(undefined8 *)(unaff_RSI + 0x18) = uVar8;
    *(undefined4 *)(unaff_RSI + 0x20) = uVar1;
    iVar6 = FUN_009d0902();
    uVar8 = 1;
    if (-1 < iVar6) goto LAB_009d363e;
    uVar1 = *(undefined4 *)(unaff_RSI + 0x20);
    uVar8 = *(undefined8 *)(unaff_RSI + 0x18);
    uVar3 = *(undefined8 *)(unaff_RSI + 8);
    uVar4 = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined4 *)(unaff_RSI + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(unaff_RSI + 0x18) = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(unaff_RSI + 8) = uVar5;
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)(param_2 + 0x18) = uVar8;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  else {
    uVar8 = 0;
    if (-1 < iVar7) goto LAB_009d363e;
    uVar1 = *(undefined4 *)(unaff_RSI + 0x20);
    uVar8 = *(undefined8 *)(unaff_RSI + 0x18);
    uVar3 = *(undefined8 *)(unaff_RSI + 8);
    uVar4 = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined4 *)(unaff_RSI + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(unaff_RSI + 0x18) = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(unaff_RSI + 8) = uVar5;
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)(param_2 + 0x18) = uVar8;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    *(undefined8 *)(param_2 + 8) = uVar3;
    iVar6 = FUN_009d0902();
    uVar8 = 1;
    if (-1 < iVar6) goto LAB_009d363e;
    uVar1 = *(undefined4 *)(unaff_RDI + 0x20);
    uVar8 = *(undefined8 *)(unaff_RDI + 0x18);
    uVar3 = *(undefined8 *)(unaff_RDI + 8);
    uVar4 = *(undefined8 *)(unaff_RDI + 0x10);
    *(undefined4 *)(unaff_RDI + 0x20) = *(undefined4 *)(unaff_RSI + 0x20);
    *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RSI + 0x18);
    uVar5 = *(undefined8 *)(unaff_RSI + 8);
    *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined8 *)(unaff_RDI + 8) = uVar5;
    *(undefined4 *)(unaff_RSI + 0x20) = uVar1;
    *(undefined8 *)(unaff_RSI + 0x18) = uVar8;
    *(undefined8 *)(unaff_RSI + 0x10) = uVar4;
    *(undefined8 *)(unaff_RSI + 8) = uVar3;
  }
  uVar8 = 2;
LAB_009d363e:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


