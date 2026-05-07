// Function: FUN_008bca62
// Address: 008bca62
// Size: 624 bytes
// Class: Unknown
// String references:
//   "commandPacket"
//   "authChain"
//   "clientPasswordDigest"
//   "connectionId"
//   "callersPid"
//   "clientProtocolVersion"
//   "DoDirectIlokCommandInput"

int FUN_008bca62(void)

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
  int64_t lVar11;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xb);
  iVar3 = (**(code **)(*arg1 + 0xa8))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xc);
  iVar6 = FUN_0088a55a();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,10);
  iVar9 = (**(code **)(*arg1 + 0x98))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar10 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
  if (*(char *)(this_ptr + 0x393) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(4,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar10 = iVar1 + iVar10 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x394) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc44,0xc);
    iVar2 = FUN_008f8624();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar10 = iVar1 + iVar10 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x395) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc45,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar10 + iVar2;
    for (lVar11 = *(int64_t *)(this_ptr + 0x378); lVar11 != *(int64_t *)(this_ptr + 0x380);
        lVar11 = lVar11 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar10 = (**(code **)(*arg1 + 0x38))();
    iVar10 = iVar1 + iVar2 + iVar10;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar10 + iVar2;
}

