// Function: FUN_008e8a1e
// Address: 008e8a1e
// Size: 1061 bytes
// Class: MUElementAnalyzer
// String references:
//   "releaseDate"
//   "startDate"
//   "storageId"
//   "TimeLimitRecord"
//   "internalReference"
//   "stopDate"
//   "remainingSeconds"
//   "refreshStartDays"
//   "gracePeriodDays"
//   "isTimeToRefresh"
//   "inGracePeriod"
//   "relativeTime"
//   "validNow"


int FUN_008e8a1e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,0xf);
  iVar6 = (**(code **)(*unaff_RSI + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar16 = *(longlong *)(unaff_RDI + 0x10); lVar16 != *(longlong *)(unaff_RDI + 0x18);
      lVar16 = lVar16 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(10,0xb);
  iVar4 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0xb,0xb);
  iVar8 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0xc,10);
  iVar11 = (**(code **)(*unaff_RSI + 0x98))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xb);
  iVar14 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar15 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  if (*(char *)(unaff_RDI + 0x8a) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0xf,8);
    iVar2 = (**(code **)(*unaff_RSI + 0x90))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(unaff_RDI + 0x8b) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x10,8);
    iVar2 = (**(code **)(*unaff_RSI + 0x90))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(unaff_RDI + 0x8c) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x11,2);
    iVar2 = (**(code **)(*unaff_RSI + 0x78))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(unaff_RDI + 0x8d) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x12,2);
    iVar2 = (**(code **)(*unaff_RSI + 0x78))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x14,2);
  iVar2 = (**(code **)(*unaff_RSI + 0x78))();
  iVar3 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(0x15,2);
  iVar5 = (**(code **)(*unaff_RSI + 0x78))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x40))();
  iVar8 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8;
}


