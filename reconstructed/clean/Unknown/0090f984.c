// Function: FUN_0090f984
// Address: 0090f984
// Size: 692 bytes
// Class: Unknown
// String references:
//   "version"
//   "minimumVersion"
//   "type"
//   "key"
//   "indexNonce"
//   "EncryptedBlobArray"
//   "encryptedBlobs"

int FUN_0090f984(void)

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
  int64_t lVar19;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar20;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,8);
  iVar6 = (**(code **)(*arg1 + 0x90))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(0xb,0xc);
  iVar12 = FUN_008d7c1a();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0xc,8);
  iVar15 = (**(code **)(*arg1 + 0x90))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(0x15,0xf);
  iVar18 = (**(code **)(*arg1 + 0x58))
                     (this_ptr,
                      (int)((uint64_t)
                            (*(int64_t *)(this_ptr + 0x78) - *(int64_t *)(this_ptr + 0x70)) >> 3
                           ) * -0x55555555);
  iVar18 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18;
  for (plVar20 = *(int64_t **)(this_ptr + 0x70); plVar20 != *(int64_t **)(this_ptr + 0x78);
      plVar20 = plVar20 + 3) {
    iVar1 = (**(code **)(*arg1 + 0x58))();
    iVar1 = iVar1 + iVar18;
    for (lVar19 = *plVar20; lVar19 != plVar20[1]; lVar19 = lVar19 + 1) {
      iVar2 = (**(code **)(*arg1 + 0x80))();
      iVar1 = iVar1 + iVar2;
    }
    iVar18 = (**(code **)(*arg1 + 0x60))();
    iVar18 = iVar18 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar18 + iVar2 + iVar3 + iVar4;
}

