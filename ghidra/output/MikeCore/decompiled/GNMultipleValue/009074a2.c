// Function: FUN_009074a2
// Address: 009074a2
// Size: 1363 bytes
// Class: GNMultipleValue
// String references:
//   "productList"
//   "flattenedBlindDemoLicense"
//   "flattenedFailoverLicense"
//   "flattenedIlok2BlindDemos"
//   "releaseDate"
//   "validLocations"
//   "wrapperVersion"
//   "wrapperRevision"
//   "WrapperPublicData"
//   "noActivationCode"
//   "skipFloatingLicenseSetup"
//   "dlcFusion"
//   "defaultExpirationWarningRules"
//   "registeredDemoActivationCode"


int FUN_009074a2(void)

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
  longlong *plVar16;
  longlong lVar17;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(10,2);
  iVar3 = (**(code **)(*unaff_RSI + 0x78))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(0xb,2);
  iVar6 = (**(code **)(*unaff_RSI + 0x78))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(0xc,2);
  iVar9 = (**(code **)(*unaff_RSI + 0x78))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0x14,8);
  iVar12 = (**(code **)(*unaff_RSI + 0x90))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0x1e,0xf);
  iVar15 = (**(code **)(*unaff_RSI + 0x58))();
  iVar15 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  for (plVar16 = *(longlong **)(unaff_RDI + 0x10); plVar16 != *(longlong **)(unaff_RDI + 0x18);
      plVar16 = plVar16 + 7) {
    iVar1 = (**(code **)(*plVar16 + 0x18))();
    iVar15 = iVar15 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x23,0xc);
  iVar4 = FUN_008fb112();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5;
  if (*(char *)(unaff_RDI + 0x236) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x28,0xf);
    iVar2 = (**(code **)(*unaff_RSI + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar17 = *(longlong *)(unaff_RDI + 0x180); lVar17 != *(longlong *)(unaff_RDI + 0x188);
        lVar17 = lVar17 + 1) {
      iVar1 = (**(code **)(*unaff_RSI + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0x60))();
    iVar5 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  if (*(char *)(unaff_RDI + 0x237) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x32,0xf);
    iVar2 = (**(code **)(*unaff_RSI + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar17 = *(longlong *)(unaff_RDI + 0x198); lVar17 != *(longlong *)(unaff_RDI + 0x1a0);
        lVar17 = lVar17 + 1) {
      iVar1 = (**(code **)(*unaff_RSI + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0x60))();
    iVar5 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  if (*(char *)(unaff_RDI + 0x238) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x3c,0xf);
    iVar2 = (**(code **)(*unaff_RSI + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar17 = *(longlong *)(unaff_RDI + 0x1b0); lVar17 != *(longlong *)(unaff_RDI + 0x1b8);
        lVar17 = lVar17 + 1) {
      iVar1 = (**(code **)(*unaff_RSI + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0x60))();
    iVar5 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  if (*(char *)(unaff_RDI + 0x239) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x46,0xc);
    iVar2 = FUN_00901a4a();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(unaff_RDI + 0x23a) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x4b,10);
    iVar2 = (**(code **)(*unaff_RSI + 0x98))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(unaff_RDI + 0x23b) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x50,0xb);
    iVar2 = (**(code **)(*unaff_RSI + 0xa8))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(unaff_RDI + 0x23c) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x51,0xb);
    iVar2 = (**(code **)(*unaff_RSI + 0xa8))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x40))();
  iVar2 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2;
}


