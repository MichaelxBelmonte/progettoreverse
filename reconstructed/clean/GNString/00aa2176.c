// Function: FUN_00aa2176
// Address: 00aa2176
// Size: 2751 bytes
// Class: GNString
// String references:
//   "version"
//   "state"
//   "issuerId"
//   "modDate"
//   "uuid"
//   "databaseInfoGuid"
//   "mustBeInAuthManifest"
//   "name"
//   "agreementGuid"
//   "activationInfo"
//   "visible"
//   "issuedDate"
//   "insertDate"
//   "nodeLocked"
//   "bindingAlgorithm"
//   "bindingDriftAmount"
//   "gracePeriodsAllowed"
//   "graceMaxDuration"
//   "aaSigningEntropy"
//   "lastValidationDate"
//   ... +11 more
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00aa2176(void)

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
  int64_t lVar58;
  int64_t *plVar59;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_00aa9c4e();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,2);
  iVar6 = (**(code **)(*arg1 + 0x78))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(0xb,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(0xc,0xb);
  iVar12 = (**(code **)(*arg1 + 0xa8))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0xd,0xb);
  iVar15 = (**(code **)(*arg1 + 0xa8))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(0xe,8);
  iVar18 = (**(code **)(*arg1 + 0x90))();
  iVar19 = (**(code **)(*arg1 + 0x38))();
  iVar20 = (**(code **)(*arg1 + 0x30))(0xf,0xb);
  iVar21 = (**(code **)(*arg1 + 0xa8))();
  iVar22 = (**(code **)(*arg1 + 0x38))();
  iVar23 = (**(code **)(*arg1 + 0x30))(0x10,8);
  iVar24 = (**(code **)(*arg1 + 0x90))();
  iVar25 = (**(code **)(*arg1 + 0x38))();
  iVar26 = (**(code **)(*arg1 + 0x30))(0x11,8);
  iVar27 = (**(code **)(*arg1 + 0x90))();
  iVar28 = (**(code **)(*arg1 + 0x38))();
  iVar29 = (**(code **)(*arg1 + 0x30))(0x12,0xb);
  iVar30 = (**(code **)(*arg1 + 0xa8))();
  iVar31 = (**(code **)(*arg1 + 0x38))();
  iVar32 = (**(code **)(*arg1 + 0x30))(0x13,0xb);
  iVar33 = (**(code **)(*arg1 + 0xa8))();
  iVar34 = (**(code **)(*arg1 + 0x38))();
  iVar35 = (**(code **)(*arg1 + 0x30))(0x14,8);
  iVar36 = (**(code **)(*arg1 + 0x90))();
  iVar37 = (**(code **)(*arg1 + 0x38))();
  iVar38 = (**(code **)(*arg1 + 0x30))(0x15,0xb);
  iVar39 = (**(code **)(*arg1 + 0xa8))();
  iVar40 = (**(code **)(*arg1 + 0x38))();
  iVar41 = (**(code **)(*arg1 + 0x30))(0x16,0xb);
  iVar42 = (**(code **)(*arg1 + 0xa8))();
  iVar43 = (**(code **)(*arg1 + 0x38))();
  iVar44 = (**(code **)(*arg1 + 0x30))(0x17,2);
  iVar45 = (**(code **)(*arg1 + 0x78))();
  iVar46 = (**(code **)(*arg1 + 0x38))();
  iVar47 = (**(code **)(*arg1 + 0x30))(0x18,0xb);
  iVar48 = (**(code **)(*arg1 + 0xa8))();
  iVar49 = (**(code **)(*arg1 + 0x38))();
  iVar50 = (**(code **)(*arg1 + 0x30))(0x19,2);
  iVar51 = (**(code **)(*arg1 + 0x78))();
  iVar52 = (**(code **)(*arg1 + 0x38))();
  iVar53 = (**(code **)(*arg1 + 0x30))(0x1a,2);
  iVar54 = (**(code **)(*arg1 + 0x78))();
  iVar55 = (**(code **)(*arg1 + 0x38))();
  iVar56 = (**(code **)(*arg1 + 0x30))(0x1b,0xf);
  iVar57 = (**(code **)(*arg1 + 0x58))();
  iVar57 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
           iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
           iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57;
  for (lVar58 = *(int64_t *)(this_ptr + 0x118); lVar58 != *(int64_t *)(this_ptr + 0x120);
      lVar58 = lVar58 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar57 = iVar57 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x1c,2);
  iVar4 = (**(code **)(*arg1 + 0x78))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar6 = (**(code **)(*arg1 + 0x30))(0x1d,2);
  iVar7 = (**(code **)(*arg1 + 0x78))();
  iVar8 = (**(code **)(*arg1 + 0x38))();
  iVar9 = (**(code **)(*arg1 + 0x30))(0x1e,8);
  iVar10 = (**(code **)(*arg1 + 0x90))();
  iVar11 = (**(code **)(*arg1 + 0x38))();
  iVar12 = (**(code **)(*arg1 + 0x30))(0x1f,8);
  iVar13 = (**(code **)(*arg1 + 0x90))();
  iVar14 = (**(code **)(*arg1 + 0x38))();
  iVar15 = (**(code **)(*arg1 + 0x30))(0x20,0xb);
  iVar16 = (**(code **)(*arg1 + 0xa8))();
  iVar17 = (**(code **)(*arg1 + 0x38))();
  iVar18 = (**(code **)(*arg1 + 0x30))(0x21,0xb);
  iVar19 = (**(code **)(*arg1 + 0xa8))();
  iVar20 = (**(code **)(*arg1 + 0x38))();
  iVar21 = (**(code **)(*arg1 + 0x30))(0x22,8);
  iVar22 = (**(code **)(*arg1 + 0x90))();
  iVar23 = (**(code **)(*arg1 + 0x38))();
  iVar24 = (**(code **)(*arg1 + 0x30))(0x23,2);
  iVar25 = (**(code **)(*arg1 + 0x78))();
  iVar26 = (**(code **)(*arg1 + 0x38))();
  iVar27 = (**(code **)(*arg1 + 0x30))(0x24,0xf);
  iVar28 = (**(code **)(*arg1 + 0x58))();
  iVar28 = iVar1 + iVar57 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 +
           iVar21 + iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28;
  for (plVar59 = *(int64_t **)(this_ptr + 0x178); plVar59 != *(int64_t **)(this_ptr + 0x180);
      plVar59 = plVar59 + 4) {
    iVar1 = (**(code **)(*plVar59 + 0x18))();
    iVar28 = iVar28 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x25,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar28 + iVar2 + iVar3 + iVar4;
  for (plVar59 = *(int64_t **)(this_ptr + 400); plVar59 != *(int64_t **)(this_ptr + 0x198);
      plVar59 = plVar59 + 4) {
    iVar1 = (**(code **)(*plVar59 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x26,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar59 = *(int64_t **)(this_ptr + 0x1a8); plVar59 != *(int64_t **)(this_ptr + 0x1b0);
      plVar59 = plVar59 + 4) {
    iVar1 = (**(code **)(*plVar59 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
}

