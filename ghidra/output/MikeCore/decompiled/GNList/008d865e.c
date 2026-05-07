// Function: FUN_008d865e
// Address: 008d865e
// Size: 553 bytes
// Class: GNList
// String references:
//   "ContentSymmetricKeys"
//   "licenseDataCommonKey"
//   "productSpecificKey"
//   "nonce"
//   "allowedPlayerIds"


int FUN_008d865e(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar3 = (**(code **)(*unaff_RSI + 0x20))();
  if (*(char *)(unaff_RDI + 0xd8) != '\0') {
    iVar4 = (**(code **)(*unaff_RSI + 0x30))(1,0xc);
    iVar5 = FUN_008d7c1a();
    iVar6 = (**(code **)(*unaff_RSI + 0x38))();
    iVar3 = iVar4 + iVar3 + iVar5 + iVar6;
  }
  if (*(char *)(unaff_RDI + 0xd9) != '\0') {
    iVar4 = (**(code **)(*unaff_RSI + 0x30))(2,0xc);
    iVar5 = FUN_008d7c1a();
    iVar6 = (**(code **)(*unaff_RSI + 0x38))();
    iVar3 = iVar4 + iVar3 + iVar5 + iVar6;
  }
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(3,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar4 + iVar3 + iVar5;
  for (lVar9 = *(longlong *)(unaff_RDI + 0xa8); lVar9 != *(longlong *)(unaff_RDI + 0xb0);
      lVar9 = lVar9 + 1) {
    iVar3 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar3;
  }
  iVar4 = (**(code **)(*unaff_RSI + 0x60))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(4,0xe);
  iVar3 = (**(code **)(*unaff_RSI + 0x68))();
  iVar3 = iVar4 + iVar5 + iVar6 + iVar7 + iVar3;
  plVar1 = *(longlong **)(unaff_RDI + 0xc0);
  while (plVar1 != (longlong *)(unaff_RDI + 200)) {
    iVar4 = (**(code **)(*unaff_RSI + 0x90))();
    plVar2 = (longlong *)plVar1[1];
    if ((longlong *)plVar1[1] == (longlong *)0x0) {
      plVar8 = (longlong *)plVar1[2];
      if ((longlong *)*plVar8 != plVar1) {
        do {
          plVar1 = (longlong *)plVar1[2];
          plVar8 = (longlong *)plVar1[2];
        } while ((longlong *)*plVar8 != plVar1);
      }
    }
    else {
      do {
        plVar8 = plVar2;
        plVar2 = (longlong *)*plVar8;
      } while ((longlong *)*plVar8 != (longlong *)0x0);
    }
    iVar3 = iVar3 + iVar4;
    plVar1 = plVar8;
  }
  iVar4 = (**(code **)(*unaff_RSI + 0x70))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x40))();
  iVar7 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar4 + iVar3 + iVar5 + iVar6 + iVar7;
}


