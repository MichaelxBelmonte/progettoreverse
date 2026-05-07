// Function: FUN_00a82adc
// Address: 00a82adc
// Size: 4179 bytes
// Class: GNString
// String references:
//   "CertificateChain"
//   "SignedDigest"
//   "SignedInfo"
//   "ExpirationWarning"
//   "License"
//   "LsObjectStore"
//   "serverHandle"
//   "dirtyObjects"
//   "deletedObjects"
//   "newObjects"
//   "deletedRelations"
//   "addedRelations"
//   "selectQueryLsRelationOrderingList"
//   "objectsToSign"
//   "nextTempInstanceId"
//   "nextTempInstanceIdForForeignLsObjectStore"
//   "ActivationInfo"
//   "ArrayEntry"
//   "AssociativeArray"
//   "AuthDef"
//   ... +22 more
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00a82adc(void)

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
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int64_t *plVar105;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,10);
  iVar3 = (**(code **)(*arg1 + 0x98))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (plVar105 = *(int64_t **)(this_ptr + 0x10); plVar105 != *(int64_t **)(this_ptr + 0x18);
      plVar105 = plVar105 + 4) {
    iVar1 = (**(code **)(*plVar105 + 0x18))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(3,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4;
  for (plVar105 = *(int64_t **)(this_ptr + 0x28); plVar105 != *(int64_t **)(this_ptr + 0x30);
      plVar105 = plVar105 + 4) {
    iVar1 = (**(code **)(*plVar105 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(4,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar105 = *(int64_t **)(this_ptr + 0x40); plVar105 != *(int64_t **)(this_ptr + 0x48);
      plVar105 = plVar105 + 4) {
    iVar1 = (**(code **)(*plVar105 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(5,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))
                    (this_ptr,
                     (int)((uint64_t)
                           (*(int64_t *)(this_ptr + 0x60) - *(int64_t *)(this_ptr + 0x58)) >> 4)
                     * -0x33333333);
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (plVar105 = *(int64_t **)(this_ptr + 0x58); plVar105 != *(int64_t **)(this_ptr + 0x60);
      plVar105 = plVar105 + 10) {
    iVar1 = (**(code **)(*plVar105 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(6,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))
                    (this_ptr,
                     (int)((uint64_t)
                           (*(int64_t *)(this_ptr + 0x78) - *(int64_t *)(this_ptr + 0x70)) >> 4)
                     * -0x33333333);
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar105 = *(int64_t **)(this_ptr + 0x70); plVar105 != *(int64_t **)(this_ptr + 0x78);
      plVar105 = plVar105 + 10) {
    iVar1 = (**(code **)(*plVar105 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(7,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (plVar105 = *(int64_t **)(this_ptr + 0x88); plVar105 != *(int64_t **)(this_ptr + 0x90);
      plVar105 = plVar105 + 4) {
    iVar1 = (**(code **)(*plVar105 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(8,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar105 = *(int64_t **)(this_ptr + 0xa0); plVar105 != *(int64_t **)(this_ptr + 0xa8);
      plVar105 = plVar105 + 4) {
    iVar1 = (**(code **)(*plVar105 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(9,10);
  iVar4 = (**(code **)(*arg1 + 0x98))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(10,10);
  iVar8 = (**(code **)(*arg1 + 0x98))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x65,0xc);
  iVar11 = FUN_00a726c4();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x66,0xc);
  iVar14 = FUN_00a73010();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x30))(0x67,0xc);
  iVar17 = FUN_00a737c0();
  iVar18 = (**(code **)(*arg1 + 0x38))();
  iVar19 = (**(code **)(*arg1 + 0x30))(0x68,0xc);
  iVar20 = FUN_00a73f70();
  iVar21 = (**(code **)(*arg1 + 0x38))();
  iVar22 = (**(code **)(*arg1 + 0x30))(0x69,0xc);
  iVar23 = FUN_00a74720();
  iVar24 = (**(code **)(*arg1 + 0x38))();
  iVar25 = (**(code **)(*arg1 + 0x30))(0x6a,0xc);
  iVar26 = FUN_00a74ed0();
  iVar27 = (**(code **)(*arg1 + 0x38))();
  iVar28 = (**(code **)(*arg1 + 0x30))(0x6b,0xc);
  iVar29 = FUN_00a75680();
  iVar30 = (**(code **)(*arg1 + 0x38))();
  iVar31 = (**(code **)(*arg1 + 0x30))(0x6c,0xc);
  iVar32 = FUN_00a75e30();
  iVar33 = (**(code **)(*arg1 + 0x38))();
  iVar34 = (**(code **)(*arg1 + 0x30))(0x6d,0xc);
  iVar35 = FUN_00a765e0();
  iVar36 = (**(code **)(*arg1 + 0x38))();
  iVar37 = (**(code **)(*arg1 + 0x30))(0x6e,0xc);
  iVar38 = FUN_00a76d90();
  iVar39 = (**(code **)(*arg1 + 0x38))();
  iVar40 = (**(code **)(*arg1 + 0x30))(0x6f,0xc);
  iVar41 = FUN_00a77540();
  iVar42 = (**(code **)(*arg1 + 0x38))();
  iVar43 = (**(code **)(*arg1 + 0x30))(0x70,0xc);
  iVar44 = FUN_00a77cde();
  iVar45 = (**(code **)(*arg1 + 0x38))();
  iVar46 = (**(code **)(*arg1 + 0x30))(0x71,0xc);
  iVar47 = FUN_00a78488();
  iVar48 = (**(code **)(*arg1 + 0x38))();
  iVar49 = (**(code **)(*arg1 + 0x30))(0x72,0xc);
  iVar50 = FUN_00a78c38();
  iVar51 = (**(code **)(*arg1 + 0x38))();
  iVar52 = (**(code **)(*arg1 + 0x30))(0x73,0xc);
  iVar53 = FUN_00a793e8();
  iVar54 = (**(code **)(*arg1 + 0x38))();
  iVar55 = (**(code **)(*arg1 + 0x30))(0x74,0xc);
  iVar56 = FUN_00a79b98();
  iVar57 = (**(code **)(*arg1 + 0x38))();
  iVar58 = (**(code **)(*arg1 + 0x30))(0x75,0xc);
  iVar59 = FUN_00a7a348();
  iVar60 = (**(code **)(*arg1 + 0x38))();
  iVar61 = (**(code **)(*arg1 + 0x30))(0x76,0xc);
  iVar62 = FUN_00a7aaf8();
  iVar63 = (**(code **)(*arg1 + 0x38))();
  iVar64 = (**(code **)(*arg1 + 0x30))(0x77,0xc);
  iVar65 = FUN_00a7b2a8();
  iVar66 = (**(code **)(*arg1 + 0x38))();
  iVar67 = (**(code **)(*arg1 + 0x30))(0x78,0xc);
  iVar68 = FUN_00a7ba58();
  iVar69 = (**(code **)(*arg1 + 0x38))();
  iVar70 = (**(code **)(*arg1 + 0x30))(0x79,0xc);
  iVar71 = FUN_00a7c208();
  iVar72 = (**(code **)(*arg1 + 0x38))();
  iVar73 = (**(code **)(*arg1 + 0x30))(0x7a,0xc);
  iVar74 = FUN_00a7c9b8();
  iVar75 = (**(code **)(*arg1 + 0x38))();
  iVar76 = (**(code **)(*arg1 + 0x30))(0x7b,0xc);
  iVar77 = FUN_00a7d168();
  iVar78 = (**(code **)(*arg1 + 0x38))();
  iVar79 = (**(code **)(*arg1 + 0x30))(0x7c,0xc);
  iVar80 = FUN_00a7d918();
  iVar81 = (**(code **)(*arg1 + 0x38))();
  iVar82 = (**(code **)(*arg1 + 0x30))(0x7d,0xc);
  iVar83 = FUN_00a7e0c8();
  iVar84 = (**(code **)(*arg1 + 0x38))();
  iVar85 = (**(code **)(*arg1 + 0x30))(0x7e,0xc);
  iVar86 = FUN_00a7e878();
  iVar87 = (**(code **)(*arg1 + 0x38))();
  iVar88 = (**(code **)(*arg1 + 0x30))(0x7f,0xc);
  iVar89 = FUN_00a7f028();
  iVar90 = (**(code **)(*arg1 + 0x38))();
  iVar91 = (**(code **)(*arg1 + 0x30))(0x80,0xc);
  iVar92 = FUN_00a7f7d8();
  iVar93 = (**(code **)(*arg1 + 0x38))();
  iVar94 = (**(code **)(*arg1 + 0x30))(0x81,0xc);
  iVar95 = FUN_00a7ff88();
  iVar96 = (**(code **)(*arg1 + 0x38))();
  iVar97 = (**(code **)(*arg1 + 0x30))(0x82,0xc);
  iVar98 = FUN_00a80738();
  iVar99 = (**(code **)(*arg1 + 0x38))();
  iVar100 = (**(code **)(*arg1 + 0x30))(0x83,0xc);
  iVar101 = FUN_00a80ee8();
  iVar102 = (**(code **)(*arg1 + 0x38))();
  iVar103 = (**(code **)(*arg1 + 0x40))();
  iVar104 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
         iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
         iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
         iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
         iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57 + iVar58 + iVar59 + iVar60 + iVar61 +
         iVar62 + iVar63 + iVar64 + iVar65 + iVar66 + iVar67 + iVar68 + iVar69 + iVar70 + iVar71 +
         iVar72 + iVar73 + iVar74 + iVar75 + iVar76 + iVar77 + iVar78 + iVar79 + iVar80 + iVar81 +
         iVar82 + iVar83 + iVar84 + iVar85 + iVar86 + iVar87 + iVar88 + iVar89 + iVar90 + iVar91 +
         iVar92 + iVar93 + iVar94 + iVar95 + iVar96 + iVar97 + iVar98 + iVar99 + iVar100 + iVar101 +
         iVar102 + iVar103 + iVar104;
}

