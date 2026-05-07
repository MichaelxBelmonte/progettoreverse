// Function: FUN_008fca52
// Address: 008fca52
// Size: 2597 bytes
// Class: GNString
// String references:
//   "serialNumber"
//   "userAccount"
//   "cloudSessionId"
//   "region"
//   "lastAuthChangeDate"
//   "description"
//   "locationType"
//   "serverDisabledLocation"
//   "name"
//   "serialNumberGuid"
//   "overseerId"
//   "remoteServer"
//   "deviceType"
//   "standardLocation"
//   "LocationData"
//   "cacheVersion"
//   "cloudContext"
//   "cloudSessionId64"
//   "dateRegistered"
//   "color"
//   ... +10 more
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008fca52(void)

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
  int64_t lVar28;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,10);
  iVar3 = (**(code **)(*arg1 + 0x98))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,10);
  iVar6 = (**(code **)(*arg1 + 0x98))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,0xb);
  iVar9 = (**(code **)(*arg1 + 0xa8))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(5,8);
  iVar12 = (**(code **)(*arg1 + 0x90))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar13 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13;
  if (*(char *)(this_ptr + 0x388) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(6,0xc);
    iVar2 = FUN_008f05ea();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar13 = iVar1 + iVar13 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(10,8);
  iVar2 = (**(code **)(*arg1 + 0x90))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(0xb,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0xc,10);
  iVar8 = (**(code **)(*arg1 + 0x98))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0xd,0xf);
  iVar11 = (**(code **)(*arg1 + 0x58))();
  iVar11 = iVar1 + iVar13 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11;
  for (lVar28 = *(int64_t *)(this_ptr + 0x158); lVar28 != *(int64_t *)(this_ptr + 0x160);
      lVar28 = lVar28 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar11 = iVar11 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0xe,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar11 + iVar2 + iVar3 + iVar4;
  for (lVar28 = *(int64_t *)(this_ptr + 0x170); lVar28 != *(int64_t *)(this_ptr + 0x178);
      lVar28 = lVar28 + 8) {
    iVar1 = (**(code **)(*arg1 + 0x98))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0xf,0xb);
  iVar5 = (**(code **)(*arg1 + 0xa8))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0x10,0xb);
  iVar8 = (**(code **)(*arg1 + 0xa8))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x14,0xb);
  iVar11 = (**(code **)(*arg1 + 0xa8))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x15,0xb);
  iVar14 = (**(code **)(*arg1 + 0xa8))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x30))(0x16,0xb);
  iVar17 = (**(code **)(*arg1 + 0xa8))();
  iVar18 = (**(code **)(*arg1 + 0x38))();
  iVar19 = (**(code **)(*arg1 + 0x30))(0x17,0xb);
  iVar20 = (**(code **)(*arg1 + 0xa8))();
  iVar21 = (**(code **)(*arg1 + 0x38))();
  iVar22 = (**(code **)(*arg1 + 0x30))(0x18,0xb);
  iVar23 = (**(code **)(*arg1 + 0xa8))();
  iVar24 = (**(code **)(*arg1 + 0x38))();
  iVar25 = (**(code **)(*arg1 + 0x30))(0x19,8);
  iVar26 = (**(code **)(*arg1 + 0x90))();
  iVar27 = (**(code **)(*arg1 + 0x38))();
  iVar27 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27;
  if (*(char *)(this_ptr + 0x396) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x1a,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar27 = iVar1 + iVar27 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x1e,8);
  iVar2 = (**(code **)(*arg1 + 0x90))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(0x1f,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0x28,2);
  iVar8 = (**(code **)(*arg1 + 0x78))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x29,2);
  iVar11 = (**(code **)(*arg1 + 0x78))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x2a,2);
  iVar14 = (**(code **)(*arg1 + 0x78))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar15 = iVar1 + iVar27 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11 + iVar12 + iVar13 + iVar14 + iVar15;
  if (*(char *)(this_ptr + 0x39c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x2b,0xc);
    iVar2 = FUN_008e8a1e();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x39d) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x2c,0xc);
    iVar2 = FUN_008e8a1e();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x39e) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x2d,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x39f) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x2e,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x3a0) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x2f,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar15 + iVar2;
}

