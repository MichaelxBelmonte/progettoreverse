// Function: FUN_009d382a
// Address: 009d382a
// Size: 583 bytes
// Class: GNString


int FUN_009d382a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 local_5c;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_5c = FUN_009d3660(param_1,param_2,param_4);
  iVar7 = FUN_009d0902();
  if (iVar7 < 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
    *(undefined8 *)(param_3 + 8) = uVar4;
    iVar7 = FUN_009d0902();
    if (iVar7 < 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar4 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)(param_1 + 8) = uVar4;
      iVar7 = FUN_009d0902();
      if (iVar7 < 0) {
        uVar1 = *(undefined4 *)(unaff_RSI + 0x20);
        uVar3 = *(undefined8 *)(unaff_RSI + 0x18);
        uVar4 = *(undefined8 *)(unaff_RSI + 8);
        uVar5 = *(undefined8 *)(unaff_RSI + 0x10);
        *(undefined4 *)(unaff_RSI + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(unaff_RSI + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(unaff_RSI + 8) = uVar6;
        *(undefined4 *)(param_2 + 0x20) = uVar1;
        *(undefined8 *)(param_2 + 0x18) = uVar3;
        *(undefined8 *)(param_2 + 0x10) = uVar5;
        *(undefined8 *)(param_2 + 8) = uVar4;
        iVar7 = FUN_009d0902();
        if (iVar7 < 0) {
          uVar1 = *(undefined4 *)(unaff_RDI + 0x20);
          uVar3 = *(undefined8 *)(unaff_RDI + 0x18);
          uVar4 = *(undefined8 *)(unaff_RDI + 8);
          uVar5 = *(undefined8 *)(unaff_RDI + 0x10);
          *(undefined4 *)(unaff_RDI + 0x20) = *(undefined4 *)(unaff_RSI + 0x20);
          *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RSI + 0x18);
          uVar6 = *(undefined8 *)(unaff_RSI + 8);
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
          *(undefined8 *)(unaff_RDI + 8) = uVar6;
          *(undefined4 *)(unaff_RSI + 0x20) = uVar1;
          *(undefined8 *)(unaff_RSI + 0x18) = uVar3;
          *(undefined8 *)(unaff_RSI + 0x10) = uVar5;
          *(undefined8 *)(unaff_RSI + 8) = uVar4;
          local_5c = local_5c + 4;
        }
        else {
          local_5c = local_5c + 3;
        }
      }
      else {
        local_5c = local_5c + 2;
      }
    }
    else {
      local_5c = local_5c + 1;
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


