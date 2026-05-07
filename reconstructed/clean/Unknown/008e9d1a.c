// Function: FUN_008e9d1a
// Address: 008e9d1a
// Size: 1318 bytes
// Class: Unknown
// String references:
//   "storageId"
//   "internalReference"
//   "validNow"
//   "CountLimitRecord"
//   "counter1Enabled"
//   "counter1CountsUp"
//   "counter1CurrentCount"
//   "counter1StartCount"
//   "counter1Type"
//   "counter2Enabled"
//   "counter2CountsUp"
//   "counter2CurrentCount"
//   "counter2StartCount"
//   "counter2Type"
//   "hcpDemoLaunchCount"
//   "combined64BitCounter"

int FUN_008e9d1a(void)

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
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int64_t lVar45;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar45 = *(int64_t *)(this_ptr + 0x10); lVar45 != *(int64_t *)(this_ptr + 0x18);
      lVar45 = lVar45 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(10,2);
  iVar4 = (**(code **)(*arg1 + 0x78))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0xb,2);
  iVar8 = (**(code **)(*arg1 + 0x78))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0xc,8);
  iVar11 = (**(code **)(*arg1 + 0x90))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0xd,8);
  iVar14 = (**(code **)(*arg1 + 0x90))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x30))(0xe,8);
  iVar17 = (**(code **)(*arg1 + 0x90))();
  iVar18 = (**(code **)(*arg1 + 0x38))();
  iVar19 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar20 = (**(code **)(*arg1 + 0x78))();
  iVar21 = (**(code **)(*arg1 + 0x38))();
  iVar22 = (**(code **)(*arg1 + 0x30))(0x15,2);
  iVar23 = (**(code **)(*arg1 + 0x78))();
  iVar24 = (**(code **)(*arg1 + 0x38))();
  iVar25 = (**(code **)(*arg1 + 0x30))(0x16,8);
  iVar26 = (**(code **)(*arg1 + 0x90))();
  iVar27 = (**(code **)(*arg1 + 0x38))();
  iVar28 = (**(code **)(*arg1 + 0x30))(0x17,8);
  iVar29 = (**(code **)(*arg1 + 0x90))();
  iVar30 = (**(code **)(*arg1 + 0x38))();
  iVar31 = (**(code **)(*arg1 + 0x30))(0x18,8);
  iVar32 = (**(code **)(*arg1 + 0x90))();
  iVar33 = (**(code **)(*arg1 + 0x38))();
  iVar34 = (**(code **)(*arg1 + 0x30))(0x1d,2);
  iVar35 = (**(code **)(*arg1 + 0x78))();
  iVar36 = (**(code **)(*arg1 + 0x38))();
  iVar37 = (**(code **)(*arg1 + 0x30))(0x1e,2);
  iVar38 = (**(code **)(*arg1 + 0x78))();
  iVar39 = (**(code **)(*arg1 + 0x38))();
  iVar40 = (**(code **)(*arg1 + 0x30))(0x1f,2);
  iVar41 = (**(code **)(*arg1 + 0x78))();
  iVar42 = (**(code **)(*arg1 + 0x38))();
  iVar43 = (**(code **)(*arg1 + 0x40))();
  iVar44 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
         iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
         iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
         iVar42 + iVar43 + iVar44;
}

