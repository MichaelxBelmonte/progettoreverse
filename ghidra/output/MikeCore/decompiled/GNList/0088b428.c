// Function: FUN_0088b428
// Address: 0088b428
// Size: 567 bytes
// Class: GNList
// String references:
//   "commandTarget"
//   "ResultPacket"
//   "exceptionInfo"
//   "resultFrame"
//   "extraResultData"
//   "timeInfo"


int FUN_0088b428(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xc);
  iVar3 = FUN_00889ac6();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = iVar2 + iVar1 + iVar3 + iVar4;
  if (*(char *)(unaff_RDI + 0x161) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(2,0xc);
    iVar2 = FUN_008d5bc8();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x30))(10,0xf);
  iVar2 = (**(code **)(*unaff_RSI + 0x58))();
  iVar2 = iVar1 + iVar4 + iVar2;
  for (lVar6 = *(longlong *)(unaff_RDI + 0xf8); lVar6 != *(longlong *)(unaff_RDI + 0x100);
      lVar6 = lVar6 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar2 = iVar2 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar3 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(0xb,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
  for (lVar6 = *(longlong *)(unaff_RDI + 0x110); lVar6 != *(longlong *)(unaff_RDI + 0x118);
      lVar6 = lVar6 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar2 = iVar1 + iVar5 + iVar2;
  if (*(char *)(unaff_RDI + 0x164) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x14,0xc);
    iVar3 = FUN_0090f0f6();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x40))();
  iVar3 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3;
}


