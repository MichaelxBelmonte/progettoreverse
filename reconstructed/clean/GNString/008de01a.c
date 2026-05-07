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
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008de01a(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
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
  int64_t *plVar15;
  int64_t lVar16;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar3 = (**(code **)(*arg1 + 0x20))();
  iVar4 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar5 = (**(code **)(*arg1 + 0x90))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(2,8);
  iVar8 = (**(code **)(*arg1 + 0x90))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(3,0xb);
  iVar11 = (**(code **)(*arg1 + 0xa8))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(4,0xd);
  iVar14 = (**(code **)(*arg1 + 0x48))(*(void*)(this_ptr + 0x38),0xf);
  iVar14 = iVar4 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 + iVar13
           + iVar14;
  plVar1 = *(int64_t **)(this_ptr + 0x28);
  while (plVar1 != (int64_t *)(this_ptr + 0x30)) {
    iVar3 = (**(code **)(*arg1 + 0xa8))();
    iVar4 = (**(code **)(*arg1 + 0x58))();
    iVar4 = iVar3 + iVar14 + iVar4;
    for (lVar16 = plVar1[7]; lVar16 != plVar1[8]; lVar16 = lVar16 + 1) {
      iVar14 = (**(code **)(*arg1 + 0x80))();
      iVar4 = iVar4 + iVar14;
    }
    iVar14 = (**(code **)(*arg1 + 0x60))();
    plVar2 = (int64_t *)plVar1[1];
    if ((int64_t *)plVar1[1] == (int64_t *)0x0) {
      plVar15 = (int64_t *)plVar1[2];
      if ((int64_t *)*plVar15 != plVar1) {
        do {
          plVar1 = (int64_t *)plVar1[2];
          plVar15 = (int64_t *)plVar1[2];
        } while ((int64_t *)*plVar15 != plVar1);
      }
    }
    else {
      do {
        plVar15 = plVar2;
        plVar2 = (int64_t *)*plVar15;
      } while ((int64_t *)*plVar15 != (int64_t *)0x0);
    }
    iVar14 = iVar14 + iVar4;
    plVar1 = plVar15;
  }
  iVar3 = (**(code **)(*arg1 + 0x50))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x40))();
  iVar6 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar3 + iVar14 + iVar4 + iVar5 + iVar6;
}

