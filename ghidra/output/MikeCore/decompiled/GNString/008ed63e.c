// Function: FUN_008ed63e
// Address: 008ed63e
// Size: 612 bytes
// Class: GNString
// String references:
//   "AuthStorage"
//   "timeLimitRecords"
//   "countLimitRecords"
//   "devDataRecords"
//   "secretDataRecords"


int FUN_008ed63e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xf);
  iVar3 = (**(code **)(*unaff_RSI + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (plVar6 = *(longlong **)(unaff_RDI + 8); plVar6 != *(longlong **)(unaff_RDI + 0x10);
      plVar6 = plVar6 + 0x12) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(2,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5;
  for (plVar6 = *(longlong **)(unaff_RDI + 0x20); plVar6 != *(longlong **)(unaff_RDI + 0x28);
      plVar6 = plVar6 + 0xc) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(3,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (plVar6 = *(longlong **)(unaff_RDI + 0x38); plVar6 != *(longlong **)(unaff_RDI + 0x40);
      plVar6 = plVar6 + 0xb) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(4,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar6 = *(longlong **)(unaff_RDI + 0x50); plVar6 != *(longlong **)(unaff_RDI + 0x58);
      plVar6 = plVar6 + 0x11) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x40))();
  iVar4 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
}


