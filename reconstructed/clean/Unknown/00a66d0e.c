// Function: FUN_00a66d0e
// Address: 00a66d0e
// Size: 578 bytes
// Class: Unknown
// String references:
//   "modDate"
//   "uuid"
//   "insertDate"
//   "selfRelation"
//   "dirty"
//   "LsAssociativeArrayWire"
//   "entries"

int FUN_00a66d0e(void)

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
  int64_t *plVar19;
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
  iVar17 = (**(code **)(*arg1 + 0x30))(0xe,0xf);
  iVar18 = (**(code **)(*arg1 + 0x58))();
  iVar18 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18;
  for (plVar19 = *(int64_t **)(this_ptr + 0x78); plVar19 != *(int64_t **)(this_ptr + 0x80);
      plVar19 = plVar19 + 4) {
    iVar1 = (**(code **)(*plVar19 + 0x18))();
    iVar18 = iVar18 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar18 + iVar2 + iVar3 + iVar4;
}

