// Function: FUN_008bd972
// Address: 008bd972
// Size: 674 bytes
// Class: GNData
// String references:
//   "clientPasswordDigest"
//   "serverStatsPasswordDigest"
//   "callersPid"
//   "FindAuthChainsInput"
//   "authSearchSpecs"
//   "findAuthOptions"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


int FUN_008bd972(void)

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
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xf);
  iVar3 = (**(code **)(*arg1 + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (plVar10 = *(int64_t **)(this_ptr + 8); plVar10 != *(int64_t **)(this_ptr + 0x10);
      plVar10 = plVar10 + 0x14) {
    iVar1 = (**(code **)(*plVar10 + 0x18))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(2,0xc);
  iVar5 = FUN_008ff2fa();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(3,10);
  iVar8 = (**(code **)(*arg1 + 0x98))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar9 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9;
  if (*(char *)(this_ptr + 0xbb) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc45,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar9 + iVar2;
    for (lVar11 = *(int64_t *)(this_ptr + 0x88); lVar11 != *(int64_t *)(this_ptr + 0x90);
        lVar11 = lVar11 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar9 = (**(code **)(*arg1 + 0x38))();
    iVar9 = iVar1 + iVar2 + iVar9;
  }
  if (*(char *)(this_ptr + 0xbc) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc46,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar9 + iVar2;
    for (lVar11 = *(int64_t *)(this_ptr + 0xa0); lVar11 != *(int64_t *)(this_ptr + 0xa8);
        lVar11 = lVar11 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar9 = (**(code **)(*arg1 + 0x38))();
    iVar9 = iVar1 + iVar2 + iVar9;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar9 + iVar2;
}

