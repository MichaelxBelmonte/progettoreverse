// Function: FUN_00915cfe
// Address: 00915cfe
// Size: 951 bytes
// Class: Unknown
// String references:
//   "version"
//   "autoInstall"
//   "FusionFactoryProtOptions"
//   "optionsGenerationDate"
//   "optionsGuid"
//   "wrapConfigInfo"
//   "publisherInfo"
//   "primaryProductInfo"
//   "allowUserInterface"
//   "useAlertInPlaceOfTheExperience"
//   "unauthorizedBehavior"
//   "betaLimit"


int FUN_00915cfe(void)

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
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,0xb);
  iVar6 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(3,0xb);
  iVar9 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(10,0xc);
  iVar12 = FUN_00908c42();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0xb,0xc);
  iVar15 = FUN_00904d42();
  iVar16 = (**(code **)(*unaff_RSI + 0x38))();
  iVar17 = (**(code **)(*unaff_RSI + 0x30))(0xc,0xc);
  iVar18 = FUN_00904d42();
  iVar19 = (**(code **)(*unaff_RSI + 0x38))();
  iVar20 = (**(code **)(*unaff_RSI + 0x30))(0x14,2);
  iVar21 = (**(code **)(*unaff_RSI + 0x78))();
  iVar22 = (**(code **)(*unaff_RSI + 0x38))();
  iVar23 = (**(code **)(*unaff_RSI + 0x30))(0x1e,2);
  iVar24 = (**(code **)(*unaff_RSI + 0x78))();
  iVar25 = (**(code **)(*unaff_RSI + 0x38))();
  iVar26 = (**(code **)(*unaff_RSI + 0x30))(0x1f,2);
  iVar27 = (**(code **)(*unaff_RSI + 0x78))();
  iVar28 = (**(code **)(*unaff_RSI + 0x38))();
  iVar29 = (**(code **)(*unaff_RSI + 0x30))(0x20,8);
  iVar30 = (**(code **)(*unaff_RSI + 0x90))();
  iVar31 = (**(code **)(*unaff_RSI + 0x38))();
  iVar31 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31;
  if (*(char *)(unaff_RDI + 0x592) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x21,0xc);
    iVar2 = FUN_00913cea();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar31 = iVar1 + iVar31 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x40))();
  iVar2 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar31 + iVar2;
}


