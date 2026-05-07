// Function: FUN_008fffc2
// Address: 008fffc2
// Size: 629 bytes
// Class: Unknown
// String references:
//   "location"
//   "publisherId"
//   "authId"
//   "auth"
//   "instance"
//   "AuthSituation"
//   "situationType"
//   "foundByFindAuths"


int FUN_008fffc2(void)

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
  int iVar17;
  int iVar18;
  int iVar19;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,0xc);
  iVar6 = FUN_008fca52();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(3,2);
  iVar9 = (**(code **)(*unaff_RSI + 0x78))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(10,8);
  iVar12 = (**(code **)(*unaff_RSI + 0x90))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0xb,8);
  iVar15 = (**(code **)(*unaff_RSI + 0x90))();
  iVar16 = (**(code **)(*unaff_RSI + 0x38))();
  iVar17 = (**(code **)(*unaff_RSI + 0x30))(0xc,8);
  iVar18 = (**(code **)(*unaff_RSI + 0x90))();
  iVar19 = (**(code **)(*unaff_RSI + 0x38))();
  iVar19 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19;
  if (*(char *)(unaff_RDI + 0x75e) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xc);
    iVar2 = FUN_008f5cb6();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar19 = iVar1 + iVar19 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x40))();
  iVar2 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar19 + iVar2;
}


