// Function: FUN_008be6d6
// Address: 008be6d6
// Size: 573 bytes
// Class: GNString
// String references:
//   "version"
//   "FindAuthChainsReturn"
//   "authChains"
//   "authSituations"
//   "executingOnTheRemoteServer"
//   "requestTrackingNumber"


int FUN_008be6d6(void)

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
  longlong *plVar15;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xf);
  iVar3 = (**(code **)(*unaff_RSI + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (plVar15 = *(longlong **)(unaff_RDI + 8); plVar15 != *(longlong **)(unaff_RDI + 0x10);
      plVar15 = plVar15 + 0x51) {
    iVar1 = (**(code **)(*plVar15 + 0x18))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(2,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5;
  for (plVar15 = *(longlong **)(unaff_RDI + 0x20); plVar15 != *(longlong **)(unaff_RDI + 0x28);
      plVar15 = plVar15 + 0xec) {
    iVar1 = (**(code **)(*plVar15 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0xc45,2);
  iVar4 = (**(code **)(*unaff_RSI + 0x78))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))("work/Versions/A/ImageIO",8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(&DAT_00002710,8);
  iVar11 = (**(code **)(*unaff_RSI + 0x90))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x40))();
  iVar14 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14;
}


