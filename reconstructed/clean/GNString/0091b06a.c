// Function: FUN_0091b06a
// Address: 0091b06a
// Size: 766 bytes
// Class: GNString
// String references:
//   "timeInfoTweak0"
//   "timeInfoTweak1"
//   "version"
//   "encryptionAlgorithmId"
//   "keySelector"
//   "inputEncryptedData"
//   "derivedPrimaryAuthKey"
//   "inputIvTweak"
//   "DlcKeyExchangeInput"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_0091b06a(void)

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
  int64_t lVar16;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,2);
  iVar3 = (**(code **)(*arg1 + 0x78))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,8);
  iVar6 = (**(code **)(*arg1 + 0x90))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(4,8);
  iVar12 = (**(code **)(*arg1 + 0x90))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(5,0xf);
  iVar15 = (**(code **)(*arg1 + 0x58))();
  iVar15 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  for (lVar16 = *(int64_t *)(this_ptr + 0x18); lVar16 != *(int64_t *)(this_ptr + 0x20);
      lVar16 = lVar16 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar15 = iVar15 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(6,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar15 + iVar2 + iVar3 + iVar4;
  for (lVar16 = *(int64_t *)(this_ptr + 0x30); lVar16 != *(int64_t *)(this_ptr + 0x38);
      lVar16 = lVar16 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(10,10);
  iVar5 = (**(code **)(*arg1 + 0x98))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0xb,10);
  iVar8 = (**(code **)(*arg1 + 0x98))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x40))();
  iVar11 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11;
}

