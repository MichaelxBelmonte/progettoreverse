// Function: FUN_008c1e6a
// Address: 008c1e6a
// Size: 2001 bytes
// Class: GNList
// String references:
//   "version"
//   "GetAuthorizationServerInfoReturn"
//   "authKeyVersion"
//   "allKnownLocationTypes"
//   "edenModernLocationTypes"
//   "ilokLocationTypes"
//   "localLocationTypes"
//   "remoteLocationTypes"
//   "swLicenseLocationTypes"
//   "cloudLocationTypes"
//   "authTypeStrings"
//   "subtypeStrings"
//   "licenseDaemonEdenVersion"
//   "licenseDaemonEdenRevision"
//   "experienceVersion"
//   "dldIndices"
//   "supportsLocationGroupApi"
//   "supportsSubscriptions"
//   "supportsSharedLicenses"
//   "supportsDLC"
//   ... +3 more
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_008c1e6a(void)

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
  int64_t lVar23;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(10,10);
  iVar6 = (**(code **)(*arg1 + 0x98))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(0xb,10);
  iVar9 = (**(code **)(*arg1 + 0x98))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(0xc,10);
  iVar12 = (**(code **)(*arg1 + 0x98))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0xd,10);
  iVar15 = (**(code **)(*arg1 + 0x98))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(0xe,10);
  iVar18 = (**(code **)(*arg1 + 0x98))();
  iVar19 = (**(code **)(*arg1 + 0x38))();
  iVar20 = (**(code **)(*arg1 + 0x30))(0xf,10);
  iVar21 = (**(code **)(*arg1 + 0x98))();
  iVar22 = (**(code **)(*arg1 + 0x38))();
  iVar22 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22;
  if (*(char *)(this_ptr + 0x103) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x10,10);
    iVar2 = (**(code **)(*arg1 + 0x98))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar22 = iVar1 + iVar22 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x14,0xf);
  iVar2 = (**(code **)(*arg1 + 0x58))();
  iVar2 = iVar1 + iVar22 + iVar2;
  for (lVar23 = *(int64_t *)(this_ptr + 0x48); lVar23 != *(int64_t *)(this_ptr + 0x50);
      lVar23 = lVar23 + 0x18) {
    iVar1 = (**(code **)(*arg1 + 0xa8))();
    iVar2 = iVar2 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(0x15,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
  for (lVar23 = *(int64_t *)(this_ptr + 0x60); lVar23 != *(int64_t *)(this_ptr + 0x68);
      lVar23 = lVar23 + 0x18) {
    iVar1 = (**(code **)(*arg1 + 0xa8))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar2 = iVar1 + iVar5 + iVar2;
  if (*(char *)(this_ptr + 0x106) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x1e,0xb);
    iVar3 = (**(code **)(*arg1 + 0xa8))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x107) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x1f,0xb);
    iVar3 = (**(code **)(*arg1 + 0xa8))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x108) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x20,0xc);
    iVar3 = FUN_008fec02();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x109) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x28,0xf);
    iVar3 = (**(code **)(*arg1 + 0x58))();
    iVar3 = iVar1 + iVar2 + iVar3;
    for (lVar23 = *(int64_t *)(this_ptr + 0xd8); lVar23 != *(int64_t *)(this_ptr + 0xe0);
        lVar23 = lVar23 + 4) {
      iVar1 = (**(code **)(*arg1 + 0x90))();
      iVar3 = iVar3 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar2 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar3 + iVar2;
  }
  if (*(char *)(this_ptr + 0x10a) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x32,2);
    iVar3 = (**(code **)(*arg1 + 0x78))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x10b) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x33,2);
    iVar3 = (**(code **)(*arg1 + 0x78))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x10c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x34,2);
    iVar3 = (**(code **)(*arg1 + 0x78))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x10d) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x35,2);
    iVar3 = (**(code **)(*arg1 + 0x78))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x10e) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x36,2);
    iVar3 = (**(code **)(*arg1 + 0x78))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x10f) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x37,2);
    iVar3 = (**(code **)(*arg1 + 0x78))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(this_ptr + 0x110) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x38,2);
    iVar3 = (**(code **)(*arg1 + 0x78))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(&g_00002710,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x40))();
  iVar6 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6;
}

