// Function: FUN_008fb112
// Address: 008fb112
// Size: 1282 bytes
// Class: Unknown
// String references:
//   "lastWarningDate"
//   "internalReference"
//   "algorithmId"
//   "authorized"
//   "ExpirationWarning"
//   "parameter1"
//   "parameter2"
//   "parameter3"
//   "parameter4"
//   "globalWarning"
//   "lostOrStolenAuthWarning"
//   "newAuthLimitDetected"
//   "launchesSinceLastWarning"
//   "timeLimitLastWarning"
//   "countLimitLastWarning"
//   "timeToDoWarning"

int FUN_008fb112(void)

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
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
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
  iVar8 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(4,8);
  iVar12 = (**(code **)(*arg1 + 0x90))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(5,8);
  iVar15 = (**(code **)(*arg1 + 0x90))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(10,2);
  iVar18 = (**(code **)(*arg1 + 0x78))();
  iVar19 = (**(code **)(*arg1 + 0x38))();
  iVar20 = (**(code **)(*arg1 + 0x30))(0xb,0xb);
  iVar21 = (**(code **)(*arg1 + 0xa8))();
  iVar22 = (**(code **)(*arg1 + 0x38))();
  iVar23 = (**(code **)(*arg1 + 0x30))(0xe,0xb);
  iVar24 = (**(code **)(*arg1 + 0xa8))();
  iVar25 = (**(code **)(*arg1 + 0x38))();
  iVar26 = (**(code **)(*arg1 + 0x30))(0x11,2);
  iVar27 = (**(code **)(*arg1 + 0x78))();
  iVar28 = (**(code **)(*arg1 + 0x38))();
  iVar29 = (**(code **)(*arg1 + 0x30))(0x13,2);
  iVar30 = (**(code **)(*arg1 + 0x78))();
  iVar31 = (**(code **)(*arg1 + 0x38))();
  iVar32 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar33 = (**(code **)(*arg1 + 0x78))();
  iVar34 = (**(code **)(*arg1 + 0x38))();
  iVar35 = (**(code **)(*arg1 + 0x30))(0x15,8);
  iVar36 = (**(code **)(*arg1 + 0x90))();
  iVar37 = (**(code **)(*arg1 + 0x38))();
  iVar37 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37;
  if (*(char *)(this_ptr + 0x155) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x1c,0xc);
    iVar2 = FUN_008e8a1e();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar37 = iVar1 + iVar37 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x156) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x1d,0xc);
    iVar2 = FUN_008e9d1a();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar37 = iVar1 + iVar37 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x1e,2);
  iVar2 = (**(code **)(*arg1 + 0x78))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x40))();
  iVar5 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar37 + iVar2 + iVar3 + iVar4 + iVar5;
}

