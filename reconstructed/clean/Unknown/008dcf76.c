// Function: FUN_008dcf76
// Address: 008dcf76
// Size: 662 bytes
// Class: Unknown
// String references:
//   "version"
//   "minimumVersion"
//   "digestInfo"
//   "SignedInfo"
//   "signedInfoReferenceGuid"
//   "signatureInfo"
//   "signerInfoDigest"
//   "platformDigests"

int FUN_008dcf76(void)

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
  int64_t *plVar22;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,8);
  iVar6 = (**(code **)(*arg1 + 0x90))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,0xb);
  iVar9 = (**(code **)(*arg1 + 0xa8))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(4,0xc);
  iVar12 = FUN_008d98ba();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(5,0xc);
  iVar15 = FUN_008d9cf0();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(6,0xc);
  iVar18 = FUN_008dba22();
  iVar19 = (**(code **)(*arg1 + 0x38))();
  iVar20 = (**(code **)(*arg1 + 0x30))(7,0xf);
  iVar21 = (**(code **)(*arg1 + 0x58))();
  iVar21 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21;
  for (plVar22 = *(int64_t **)(this_ptr + 0x1e8); plVar22 != *(int64_t **)(this_ptr + 0x1f0);
      plVar22 = plVar22 + 0x28) {
    iVar1 = (**(code **)(*plVar22 + 0x18))();
    iVar21 = iVar21 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar21 + iVar2 + iVar3 + iVar4;
}

