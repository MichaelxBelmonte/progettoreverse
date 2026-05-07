// Function: FUN_0088a55a
// Address: 0088a55a
// Size: 846 bytes
// Class: MULSSGenerator
// String references:
//   "CommandPacket"
//   "commandTarget"
//   "chainedTarget"
//   "commandID"
//   "commandFrame"
//   "extraCommandData"
//   "returnTimeInfo"
//   "timeInfoTweak0"
//   "timeInfoTweak1"
//   "publisherIdAuthId"

int FUN_0088a55a(void)

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
  int64_t lVar18;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_00889ac6();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar4 = iVar2 + iVar1 + iVar3 + iVar4;
  if (*(char *)(this_ptr + 0xb1) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(2,0xc);
    iVar2 = FUN_00889ac6();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar2 = (**(code **)(*arg1 + 0x90))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(10,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6;
  for (lVar18 = *(int64_t *)(this_ptr + 0x60); lVar18 != *(int64_t *)(this_ptr + 0x68);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0xb,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4;
  for (lVar18 = *(int64_t *)(this_ptr + 0x78); lVar18 != *(int64_t *)(this_ptr + 0x80);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0x15,10);
  iVar8 = (**(code **)(*arg1 + 0x98))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x16,10);
  iVar11 = (**(code **)(*arg1 + 0x98))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x17,10);
  iVar14 = (**(code **)(*arg1 + 0x98))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x40))();
  iVar17 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17;
}

