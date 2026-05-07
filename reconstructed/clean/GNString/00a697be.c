// Function: FUN_00a697be
// Address: 00a697be
// Size: 2079 bytes
// Class: GNString
// String references:
//   "version"
//   "format"
//   "modDate"
//   "uuid"
//   "storageId"
//   "writeProperties"
//   "nonce"
//   "timeLimited"
//   "countLimited"
//   "typeOfSecret"
//   "algorithmId"
//   "encryptedWithId"
//   "intendedUseOnly"
//   "dataReadOnly"
//   "dataWritable"
//   "writtenOnce"
//   "sizeLimit"
//   "flagsReadOnly"
//   "insertDate"
//   "aaSigningEntropy"
//   ... +5 more
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00a697be(void)

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
  int64_t lVar30;
  int64_t *plVar31;
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
  iVar11 = (**(code **)(*arg1 + 0x30))(0xc,8);
  iVar12 = (**(code **)(*arg1 + 0x90))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0xd,2);
  iVar15 = (**(code **)(*arg1 + 0x78))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(0xe,0xf);
  iVar18 = (**(code **)(*arg1 + 0x58))();
  iVar18 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18;
  for (lVar30 = *(int64_t *)(this_ptr + 0x38); lVar30 != *(int64_t *)(this_ptr + 0x40);
      lVar30 = lVar30 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar18 = iVar18 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0xf,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar18 + iVar2 + iVar3 + iVar4;
  for (lVar30 = *(int64_t *)(this_ptr + 0x50); lVar30 != *(int64_t *)(this_ptr + 0x58);
      lVar30 = lVar30 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x10,8);
  iVar5 = (**(code **)(*arg1 + 0x90))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0x11,8);
  iVar8 = (**(code **)(*arg1 + 0x90))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x12,8);
  iVar11 = (**(code **)(*arg1 + 0x90))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x13,0xb);
  iVar14 = (**(code **)(*arg1 + 0xa8))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x30))(0x14,0xb);
  iVar17 = (**(code **)(*arg1 + 0xa8))();
  iVar18 = (**(code **)(*arg1 + 0x38))();
  iVar19 = (**(code **)(*arg1 + 0x30))(0x15,2);
  iVar20 = (**(code **)(*arg1 + 0x78))();
  iVar21 = (**(code **)(*arg1 + 0x38))();
  iVar22 = (**(code **)(*arg1 + 0x30))(0x16,0xb);
  iVar23 = (**(code **)(*arg1 + 0xa8))();
  iVar24 = (**(code **)(*arg1 + 0x38))();
  iVar25 = (**(code **)(*arg1 + 0x30))(0x17,0xf);
  iVar26 = (**(code **)(*arg1 + 0x58))();
  iVar26 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26;
  for (lVar30 = *(int64_t *)(this_ptr + 200); lVar30 != *(int64_t *)(this_ptr + 0xd0);
      lVar30 = lVar30 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar26 = iVar26 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x18,8);
  iVar4 = (**(code **)(*arg1 + 0x90))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar6 = (**(code **)(*arg1 + 0x30))(0x19,8);
  iVar7 = (**(code **)(*arg1 + 0x90))();
  iVar8 = (**(code **)(*arg1 + 0x38))();
  iVar9 = (**(code **)(*arg1 + 0x30))(0x1a,2);
  iVar10 = (**(code **)(*arg1 + 0x78))();
  iVar11 = (**(code **)(*arg1 + 0x38))();
  iVar12 = (**(code **)(*arg1 + 0x30))(0x1b,8);
  iVar13 = (**(code **)(*arg1 + 0x90))();
  iVar14 = (**(code **)(*arg1 + 0x38))();
  iVar15 = (**(code **)(*arg1 + 0x30))(0x1c,0xb);
  iVar16 = (**(code **)(*arg1 + 0xa8))();
  iVar17 = (**(code **)(*arg1 + 0x38))();
  iVar18 = (**(code **)(*arg1 + 0x30))(0x1d,8);
  iVar19 = (**(code **)(*arg1 + 0x90))();
  iVar20 = (**(code **)(*arg1 + 0x38))();
  iVar21 = (**(code **)(*arg1 + 0x30))(0x1e,8);
  iVar22 = (**(code **)(*arg1 + 0x90))();
  iVar23 = (**(code **)(*arg1 + 0x38))();
  iVar24 = (**(code **)(*arg1 + 0x30))(0x1f,2);
  iVar25 = (**(code **)(*arg1 + 0x78))();
  iVar27 = (**(code **)(*arg1 + 0x38))();
  iVar28 = (**(code **)(*arg1 + 0x30))(0x20,0xf);
  iVar29 = (**(code **)(*arg1 + 0x58))();
  iVar29 = iVar1 + iVar26 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 +
           iVar21 + iVar22 + iVar23 + iVar24 + iVar25 + iVar27 + iVar28 + iVar29;
  for (plVar31 = *(int64_t **)(this_ptr + 0x118); plVar31 != *(int64_t **)(this_ptr + 0x120);
      plVar31 = plVar31 + 4) {
    iVar1 = (**(code **)(*plVar31 + 0x18))();
    iVar29 = iVar29 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar29 + iVar2 + iVar3 + iVar4;
}

