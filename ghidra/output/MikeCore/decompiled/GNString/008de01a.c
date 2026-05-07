// Function: FUN_008de01a
// Address: 008de01a
// Size: 606 bytes
// Class: GNString
// String references:
//   "version"
//   "minimumVersion"
//   "signedInfoReferenceGuid"
//   "SignatureValues"
//   "values"


int FUN_008de01a(void)

{
  longlong *plVar1;
  longlong *plVar2;
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
  longlong lVar16;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar3 = (**(code **)(*unaff_RSI + 0x20))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(1,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(2,8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(3,0xb);
  iVar11 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(4,0xd);
  iVar14 = (**(code **)(*unaff_RSI + 0x48))(*(undefined4 *)(unaff_RDI + 0x38),0xf);
  iVar14 = iVar4 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 + iVar13
           + iVar14;
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  while (plVar1 != (longlong *)(unaff_RDI + 0x30)) {
    iVar3 = (**(code **)(*unaff_RSI + 0xa8))();
    iVar4 = (**(code **)(*unaff_RSI + 0x58))();
    iVar4 = iVar3 + iVar14 + iVar4;
    for (lVar16 = plVar1[7]; lVar16 != plVar1[8]; lVar16 = lVar16 + 1) {
      iVar14 = (**(code **)(*unaff_RSI + 0x80))();
      iVar4 = iVar4 + iVar14;
    }
    iVar14 = (**(code **)(*unaff_RSI + 0x60))();
    plVar2 = (longlong *)plVar1[1];
    if ((longlong *)plVar1[1] == (longlong *)0x0) {
      plVar15 = (longlong *)plVar1[2];
      if ((longlong *)*plVar15 != plVar1) {
        do {
          plVar1 = (longlong *)plVar1[2];
          plVar15 = (longlong *)plVar1[2];
        } while ((longlong *)*plVar15 != plVar1);
      }
    }
    else {
      do {
        plVar15 = plVar2;
        plVar2 = (longlong *)*plVar15;
      } while ((longlong *)*plVar15 != (longlong *)0x0);
    }
    iVar14 = iVar14 + iVar4;
    plVar1 = plVar15;
  }
  iVar3 = (**(code **)(*unaff_RSI + 0x50))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x40))();
  iVar6 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar3 + iVar14 + iVar4 + iVar5 + iVar6;
}


