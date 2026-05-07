// Function: FUN_0096ba8a
// Address: 0096ba8a
// Size: 621 bytes
// Class: Unknown


undefined4 FUN_0096ba8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *unaff_RSI;
  int iVar7;
  int iVar8;
  int local_1ec;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar3 = FUN_00969dba();
  if (iVar3 < 0) {
    FUN_0096936d();
  }
  uVar2 = (longlong)(*(int *)((longlong)unaff_RSI + 0x24) + -1) / (longlong)*(int *)(unaff_RSI + 4);
  iVar3 = FUN_00969226();
  if (*(int *)((longlong)unaff_RSI + 0x24) < iVar3) {
    FUN_0096936d();
    uVar6 = 0;
  }
  else {
    iVar7 = (int)uVar2;
    iVar4 = iVar7 + 1;
    FUN_0096a17b(unaff_RSI[3],unaff_RSI[2],2);
    FUN_009740e6();
    FUN_0096a101();
    FUN_0096a101();
    iVar3 = *(int *)unaff_RSI[3];
    iVar8 = (2 << ((byte)*(undefined4 *)(unaff_RSI + 4) & 0x1f)) * iVar3;
    iVar5 = FUN_00969e9f(*(undefined4 *)(unaff_RSI + 4),iVar4,uVar2 & 0xffffffff);
    if (0 < iVar5) {
      local_1ec = iVar5 * iVar3 * 2;
      FUN_009695d4(iVar8,*unaff_RSI);
    }
    if (0 < iVar7) {
      iVar7 = iVar4;
      do {
        iVar5 = FUN_00969e9f(*(undefined4 *)(unaff_RSI + 4),iVar4,iVar7 + -2);
        FUN_0096a6b8();
        if (0 < iVar5) {
          local_1ec = iVar5 * iVar3 * 2;
          FUN_009695d4(iVar8,*unaff_RSI,&local_1ec);
          FUN_0096acb3();
        }
        iVar7 = iVar7 + -1;
      } while (1 < iVar7);
    }
    uVar6 = FUN_0096a4c9(param_3,param_1);
    FUN_009740e6();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


