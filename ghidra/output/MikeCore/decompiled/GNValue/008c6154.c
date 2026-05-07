// Function: FUN_008c6154
// Address: 008c6154
// Size: 755 bytes
// Class: GNValue
// String references:
//   "version"
//   "inactiveTimeout"
//   "sharedLicenseInfo"
//   "connectionId"
//   "OpenDirectLocationConnectionReturn"
//   "maxConnectionTime"
//   "dldLastAuthChangeDateList"
//   "ilok2CertChain"
//   "ilokResultPacket"


int FUN_008c6154(void)

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
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xb);
  iVar3 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,8);
  iVar6 = (**(code **)(*unaff_RSI + 0x90))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(3,8);
  iVar9 = (**(code **)(*unaff_RSI + 0x90))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(4,0xf);
  iVar12 = (**(code **)(*unaff_RSI + 0x58))();
  iVar12 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12;
  for (plVar13 = *(longlong **)(unaff_RDI + 0x28); plVar13 != *(longlong **)(unaff_RDI + 0x30);
      plVar13 = plVar13 + 6) {
    iVar1 = (**(code **)(*plVar13 + 0x18))();
    iVar12 = iVar12 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar2 = iVar1 + iVar12 + iVar2;
  if (*(char *)(unaff_RDI + 0x260) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(5,0xc);
    iVar3 = FUN_008894f0();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(unaff_RDI + 0x261) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(6,0xc);
    iVar3 = FUN_0088b428();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(unaff_RDI + 0x262) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0xc44,0xc);
    iVar3 = FUN_008f16c6();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x30))(&DAT_00002710,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x40))();
  iVar6 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6;
}


