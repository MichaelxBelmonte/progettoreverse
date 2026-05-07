// Function: FUN_00aaa7fe
// Address: 00aaa7fe
// Size: 656 bytes
// Class: Unknown
// String references:
//   "version"
//   "modDate"
//   "uuid"
//   "insertDate"
//   "signedInfos"
//   "selfRelation"
//   "dirty"
//   "LsSignatureWire"

int FUN_00aaa7fe(void)

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
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_00aa9c4e();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,2);
  iVar6 = (**(code **)(*arg1 + 0x78))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(0xb,0xb);
  iVar9 = (**(code **)(*arg1 + 0xa8))();
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
  iVar20 = (**(code **)(*arg1 + 0x30))(0xf,0xf);
  iVar21 = (**(code **)(*arg1 + 0x58))();
  iVar21 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21;
  for (plVar22 = *(int64_t **)(this_ptr + 0x80); plVar22 != *(int64_t **)(this_ptr + 0x88);
      plVar22 = plVar22 + 4) {
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

