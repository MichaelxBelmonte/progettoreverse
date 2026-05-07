// Function: FUN_008f05ea
// Address: 008f05ea
// Size: 1110 bytes
// Class: Unknown
// String references:
//   "computerId"
//   "licenseDaemonEdenVersion"
//   "licenseDaemonEdenRevision"
//   "host"
//   "port"
//   "adminName"
//   "adminPhone"
//   "adminEmail"
//   "leaseExpirationMinutes"
//   "name"
//   "serialNumberGuid"
//   "internalReference"
//   "RemoteServerInfo"
//   "licenseDaemonAuthServiceVersion"

int FUN_008f05ea(void)

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
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xb);
  iVar3 = (**(code **)(*arg1 + 0xa8))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xb);
  iVar6 = (**(code **)(*arg1 + 0xa8))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(4,10);
  iVar12 = (**(code **)(*arg1 + 0x98))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(5,0xf);
  iVar15 = (**(code **)(*arg1 + 0x58))();
  iVar15 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  for (lVar30 = *(int64_t *)(this_ptr + 0x48); lVar30 != *(int64_t *)(this_ptr + 0x50);
      lVar30 = lVar30 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar15 = iVar15 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(6,0xb);
  iVar4 = (**(code **)(*arg1 + 0xa8))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar6 = (**(code **)(*arg1 + 0x30))(10,0xb);
  iVar7 = (**(code **)(*arg1 + 0xa8))();
  iVar8 = (**(code **)(*arg1 + 0x38))();
  iVar9 = (**(code **)(*arg1 + 0x30))(0xb,0xb);
  iVar10 = (**(code **)(*arg1 + 0xa8))();
  iVar11 = (**(code **)(*arg1 + 0x38))();
  iVar12 = (**(code **)(*arg1 + 0x30))(0xc,8);
  iVar13 = (**(code **)(*arg1 + 0x90))();
  iVar14 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x30))(0x14,0xb);
  iVar17 = (**(code **)(*arg1 + 0xa8))();
  iVar18 = (**(code **)(*arg1 + 0x38))();
  iVar19 = (**(code **)(*arg1 + 0x30))(0x15,0xb);
  iVar20 = (**(code **)(*arg1 + 0xa8))();
  iVar21 = (**(code **)(*arg1 + 0x38))();
  iVar22 = (**(code **)(*arg1 + 0x30))(0x16,0xb);
  iVar23 = (**(code **)(*arg1 + 0xa8))();
  iVar24 = (**(code **)(*arg1 + 0x38))();
  iVar25 = (**(code **)(*arg1 + 0x30))(0x1e,8);
  iVar26 = (**(code **)(*arg1 + 0x90))();
  iVar27 = (**(code **)(*arg1 + 0x38))();
  iVar28 = (**(code **)(*arg1 + 0x40))();
  iVar29 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
         iVar11 + iVar12 + iVar13 + iVar14 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
         iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29;
}

