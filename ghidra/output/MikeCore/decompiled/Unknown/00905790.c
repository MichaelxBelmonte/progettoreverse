// Function: FUN_00905790
// Address: 00905790
// Size: 518 bytes
// Class: Unknown
// String references:
//   "wrapConfigGuid"
//   "name"
//   "ProtectionInfo"
//   "wrapperVersion"
//   "wrapperRevision"
//   "isFusionProtected"
//   "autoInstall"


int FUN_00905790(void)

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
  int iVar16;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xb);
  iVar3 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,0xb);
  iVar6 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(3,0xb);
  iVar9 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0xb,0xb);
  iVar12 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0x15,2);
  iVar15 = (**(code **)(*unaff_RSI + 0x78))();
  iVar16 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16;
  if (*(char *)(unaff_RDI + 0x6f) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x16,2);
    iVar2 = (**(code **)(*unaff_RSI + 0x78))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar16 = iVar1 + iVar16 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x40))();
  iVar2 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar16 + iVar2;
}


