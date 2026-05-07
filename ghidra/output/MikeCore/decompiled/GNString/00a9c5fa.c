// Function: FUN_00a9c5fa
// Address: 00a9c5fa
// Size: 2489 bytes
// Class: GNString
// String references:
//   "modDate"
//   "lastWarningDate"
//   "uuid"
//   "counter1Enabled"
//   "counter1CountsUp"
//   "counter1CurrentCount"
//   "counter1StartCount"
//   "counter2Enabled"
//   "counter2CountsUp"
//   "counter2CurrentCount"
//   "counter2StartCount"
//   "combined64BitCounter"
//   "algorithmId"
//   "parameter1"
//   "parameter2"
//   "parameter3"
//   "parameter4"
//   "globalWarning"
//   "launchesSinceLastWarning"
//   "insertDate"
//   ... +8 more


int FUN_00a9c5fa(void)

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
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  longlong *plVar79;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xc);
  iVar3 = FUN_00aa9c4e();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,2);
  iVar6 = (**(code **)(*unaff_RSI + 0x78))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(0xb,8);
  iVar9 = (**(code **)(*unaff_RSI + 0x90))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0xc,2);
  iVar12 = (**(code **)(*unaff_RSI + 0x78))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0xd,2);
  iVar15 = (**(code **)(*unaff_RSI + 0x78))();
  iVar16 = (**(code **)(*unaff_RSI + 0x38))();
  iVar17 = (**(code **)(*unaff_RSI + 0x30))(0xe,8);
  iVar18 = (**(code **)(*unaff_RSI + 0x90))();
  iVar19 = (**(code **)(*unaff_RSI + 0x38))();
  iVar20 = (**(code **)(*unaff_RSI + 0x30))(0xf,2);
  iVar21 = (**(code **)(*unaff_RSI + 0x78))();
  iVar22 = (**(code **)(*unaff_RSI + 0x38))();
  iVar23 = (**(code **)(*unaff_RSI + 0x30))(0x10,8);
  iVar24 = (**(code **)(*unaff_RSI + 0x90))();
  iVar25 = (**(code **)(*unaff_RSI + 0x38))();
  iVar26 = (**(code **)(*unaff_RSI + 0x30))(0x11,2);
  iVar27 = (**(code **)(*unaff_RSI + 0x78))();
  iVar28 = (**(code **)(*unaff_RSI + 0x38))();
  iVar29 = (**(code **)(*unaff_RSI + 0x30))(0x12,8);
  iVar30 = (**(code **)(*unaff_RSI + 0x90))();
  iVar31 = (**(code **)(*unaff_RSI + 0x38))();
  iVar32 = (**(code **)(*unaff_RSI + 0x30))(0x13,2);
  iVar33 = (**(code **)(*unaff_RSI + 0x78))();
  iVar34 = (**(code **)(*unaff_RSI + 0x38))();
  iVar35 = (**(code **)(*unaff_RSI + 0x30))(0x14,8);
  iVar36 = (**(code **)(*unaff_RSI + 0x90))();
  iVar37 = (**(code **)(*unaff_RSI + 0x38))();
  iVar38 = (**(code **)(*unaff_RSI + 0x30))(0x15,2);
  iVar39 = (**(code **)(*unaff_RSI + 0x78))();
  iVar40 = (**(code **)(*unaff_RSI + 0x38))();
  iVar41 = (**(code **)(*unaff_RSI + 0x30))(0x16,2);
  iVar42 = (**(code **)(*unaff_RSI + 0x78))();
  iVar43 = (**(code **)(*unaff_RSI + 0x38))();
  iVar44 = (**(code **)(*unaff_RSI + 0x30))(0x17,0xb);
  iVar45 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar46 = (**(code **)(*unaff_RSI + 0x38))();
  iVar47 = (**(code **)(*unaff_RSI + 0x30))(0x18,0xb);
  iVar48 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar49 = (**(code **)(*unaff_RSI + 0x38))();
  iVar50 = (**(code **)(*unaff_RSI + 0x30))(0x19,8);
  iVar51 = (**(code **)(*unaff_RSI + 0x90))();
  iVar52 = (**(code **)(*unaff_RSI + 0x38))();
  iVar53 = (**(code **)(*unaff_RSI + 0x30))(0x1a,0xb);
  iVar54 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar55 = (**(code **)(*unaff_RSI + 0x38))();
  iVar56 = (**(code **)(*unaff_RSI + 0x30))(0x1b,8);
  iVar57 = (**(code **)(*unaff_RSI + 0x90))();
  iVar58 = (**(code **)(*unaff_RSI + 0x38))();
  iVar59 = (**(code **)(*unaff_RSI + 0x30))(0x1c,8);
  iVar60 = (**(code **)(*unaff_RSI + 0x90))();
  iVar61 = (**(code **)(*unaff_RSI + 0x38))();
  iVar62 = (**(code **)(*unaff_RSI + 0x30))(0x1d,8);
  iVar63 = (**(code **)(*unaff_RSI + 0x90))();
  iVar64 = (**(code **)(*unaff_RSI + 0x38))();
  iVar65 = (**(code **)(*unaff_RSI + 0x30))(0x1e,8);
  iVar66 = (**(code **)(*unaff_RSI + 0x90))();
  iVar67 = (**(code **)(*unaff_RSI + 0x38))();
  iVar68 = (**(code **)(*unaff_RSI + 0x30))(0x1f,0xb);
  iVar69 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar70 = (**(code **)(*unaff_RSI + 0x38))();
  iVar71 = (**(code **)(*unaff_RSI + 0x30))(0x20,0xb);
  iVar72 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar73 = (**(code **)(*unaff_RSI + 0x38))();
  iVar74 = (**(code **)(*unaff_RSI + 0x30))(0x21,0xb);
  iVar75 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar76 = (**(code **)(*unaff_RSI + 0x38))();
  iVar77 = (**(code **)(*unaff_RSI + 0x30))(0x22,0xf);
  iVar78 = (**(code **)(*unaff_RSI + 0x58))();
  iVar78 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
           iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
           iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57 + iVar58 + iVar59 + iVar60 + iVar61 +
           iVar62 + iVar63 + iVar64 + iVar65 + iVar66 + iVar67 + iVar68 + iVar69 + iVar70 + iVar71 +
           iVar72 + iVar73 + iVar74 + iVar75 + iVar76 + iVar77 + iVar78;
  for (plVar79 = *(longlong **)(unaff_RDI + 0x100); plVar79 != *(longlong **)(unaff_RDI + 0x108);
      plVar79 = plVar79 + 4) {
    iVar1 = (**(code **)(*plVar79 + 0x18))();
    iVar78 = iVar78 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x23,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar78 + iVar2 + iVar3 + iVar4;
  for (plVar79 = *(longlong **)(unaff_RDI + 0x118); plVar79 != *(longlong **)(unaff_RDI + 0x120);
      plVar79 = plVar79 + 4) {
    iVar1 = (**(code **)(*plVar79 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x40))();
  iVar5 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
}


